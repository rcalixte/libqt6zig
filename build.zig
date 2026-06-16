const std = @import("std");
const host_os = @import("builtin").target.os.tag;
const host_arch = @import("builtin").target.cpu.arch;

pub const configureQtExeRootModule = @import("exports.zig").configureQtExeRootModule;

var linux_isystem: std.ArrayList([]const u8) = .empty;
var cpp_flags: std.ArrayList([]const u8) = .empty;
var cpp_sources: std.ArrayList([]const u8) = .empty;
var qt_include_path: std.ArrayList([]const u8) = .empty;

pub fn build(b: *std.Build) !void {
    const optimize = b.standardOptimizeOption(.{});
    const target = b.standardTargetOptions(.{});
    const extra_paths = b.option([]const []const u8, "extra-paths", "Extra library header search paths") orelse &.{};
    const linkage = b.option(std.builtin.LinkMode, "linkage", "Link mode for libqt6zig") orelse .static;
    const strip = b.option(bool, "strip", "Include debug information in the compiled binary") orelse (optimize != .Debug);

    const is_macos = target.result.os.tag == .macos or host_os == .macos;
    const is_windows = target.result.os.tag == .windows or host_os == .windows;
    const is_linux = target.result.os.tag == .linux or host_os == .linux;

    // Add isystem paths for Linux
    var distro: Distro = .none;
    if (is_linux) {
        const result = try std.process.run(b.allocator, b.graph.io, .{
            .argv = &.{ "gcc", "-xc++", "-E", "-Wp,-v", "/dev/null" },
        });

        var lines = std.mem.splitScalar(u8, result.stderr, '\n');
        while (lines.next()) |line|
            if (std.mem.startsWith(u8, line, " /")) {
                const isystem_path = std.mem.trim(u8, line, &std.ascii.whitespace);
                std.Io.Dir.cwd().access(b.graph.io, isystem_path, .{}) catch {
                    continue;
                };
                try linux_isystem.append(b.allocator, isystem_path);
            };

        for (linux_isystem.items) |isystem_path| {
            if (distro == .none)
                if (std.mem.containsAtLeast(u8, isystem_path, 1, "suse-linux")) {
                    distro = .suse;
                } else if (std.mem.containsAtLeastScalar2(u8, isystem_path, '.', 2) and !std.mem.containsAtLeast(u8, isystem_path, 1, "..")) {
                    distro = .arch;
                };

            try cpp_flags.append(b.allocator, b.fmt("-isystem{s}", .{isystem_path}));
        }
    }

    var dir = try b.build_root.handle.openDir(b.graph.io, "src", .{ .iterate = true });
    defer dir.close(b.graph.io);

    var walker = try dir.walk(b.allocator);
    defer walker.deinit();

    var ok = true;

    while (try walker.next(b.graph.io)) |entry|
        if (entry.kind == .file and std.mem.endsWith(u8, entry.path, ".cpp")) {
            if (!ok and !std.mem.startsWith(u8, entry.path, "lib")) continue;
            if (is_windows and std.mem.startsWith(u8, entry.path, "webengine")) continue;
            var basename = std.Io.Dir.path.basename(entry.path);
            basename = basename[3 .. basename.len - 4];
            if ((!is_linux or distro == .arch or distro == .suse) and
                (std.mem.eql(u8, basename, "qsctpsocket") or std.mem.eql(u8, basename, "qsctpserver")))
                continue;
            if (distro == .suse and std.mem.eql(u8, @tagName(host_arch), "aarch64") and
                (std.mem.startsWith(u8, basename, "qopenglfunctions_") or
                    std.mem.eql(u8, basename, "qopenglcontext_platform") or
                    std.mem.eql(u8, basename, "qopengltimerquery") or
                    std.mem.eql(u8, basename, "qopenglversionfunctions")))
                continue;
            if ((is_macos or is_windows) and std.mem.eql(u8, basename, "qopenglcontext_platform"))
                continue;
            if (is_windows and std.mem.eql(u8, basename, "qhashfunctions"))
                continue;

            try cpp_sources.append(b.allocator, b.fmt("{s}/{s}", .{ "src", entry.path }));
        } else if (entry.kind == .directory) {
            ok = true;
            inline for (prefixes) |prefix|
                if (std.mem.startsWith(u8, entry.path, prefix)) {
                    var is_supported = true;
                    if (is_windows and (std.mem.startsWith(u8, entry.path, "foss-") or std.mem.startsWith(u8, entry.path, "posix-")))
                        is_supported = false;
                    if (is_macos and std.mem.startsWith(u8, entry.path, "foss-"))
                        is_supported = false;

                    var is_enabled = true;
                    if ((is_macos or is_windows) and (std.mem.eql(u8, prefix, "extras-") or std.mem.eql(u8, prefix, "restricted-extras-")))
                        is_enabled = false;
                    if (is_macos and std.mem.startsWith(u8, entry.path, "posix-"))
                        is_enabled = false;

                    const option_value = opt: switch (is_supported) {
                        true => {
                            const path = std.Io.Dir.path.stem(entry.path);
                            var library = std.mem.splitBackwardsScalar(u8, path, '-');
                            const name = library.first();
                            const description = b.fmt("Enable {s}", .{name});
                            const option_name = b.fmt("enable-{s}", .{name});
                            break :opt b.option(bool, option_name, description);
                        },
                        false => null,
                    };

                    ok = is_supported and if (option_value) |option| option else is_enabled;
                    break;
                };
        };

    std.debug.assert(cpp_sources.items.len != 0);

    for (extra_paths) |extra_path| {
        if (extra_path.len == 0) continue;

        if (std.Io.Dir.cwd().access(b.graph.io, extra_path, .{}))
            try qt_include_path.append(b.allocator, b.dupe(extra_path))
        else |_|
            std.log.warn("extra path {s} does not exist\n", .{extra_path});

        var inc_path = b.fmt("{s}/include/KF6", .{extra_path});
        if (std.Io.Dir.cwd().access(b.graph.io, inc_path, .{}))
            try qt_include_path.append(b.allocator, b.dupe(inc_path))
        else |_|
            std.log.warn("extra path {s} does not exist\n", .{inc_path});

        inc_path = b.fmt("{s}/include", .{extra_path});
        if (std.Io.Dir.cwd().access(b.graph.io, inc_path, .{}))
            try qt_include_path.append(b.allocator, b.dupe(inc_path))
        else |_|
            std.log.warn("extra path {s} does not exist\n", .{inc_path});
    }
    for (os_include_path) |os_path| {
        std.Io.Dir.cwd().access(b.graph.io, os_path, .{}) catch {
            continue;
        };
        try qt_include_path.append(b.allocator, b.dupe(os_path));
    }

    // Add base flags
    inline for (base_cpp_flags) |flag|
        try cpp_flags.append(b.allocator, b.dupe(flag));

    if (is_linux)
        inline for (linux_cpp_flags) |flag|
            try cpp_flags.append(b.allocator, b.dupe(flag));

    const translate_c = b.addTranslateC(.{
        .root_source_file = b.path("include/libqt6c.h"),
        .target = target,
        .optimize = optimize,
    });

    // Add include paths
    for (qt_include_path.items) |qt_path| {
        try cpp_flags.append(b.allocator, b.fmt("-I{s}", .{qt_path}));
        translate_c.addIncludePath(.{ .cwd_relative = qt_path });
    }

    // Add Qt module include paths
    inline for (qt_modules) |module|
        for (qt_include_path.items) |qt_path| {
            const includePath = b.fmt("{s}/{s}", .{ qt_path, module });
            std.Io.Dir.cwd().access(b.graph.io, includePath, .{}) catch {
                continue;
            };
            try cpp_flags.append(b.allocator, b.fmt("-I{s}", .{includePath}));
            translate_c.addIncludePath(.{ .cwd_relative = includePath });
        };

    // Create a separate library for each source file
    for (cpp_sources.items) |source| {
        var basename = std.Io.Dir.path.basename(source);
        basename = basename[3 .. basename.len - 4];

        const lib = b.addLibrary(.{
            .name = basename,
            .root_module = b.createModule(.{
                .target = target,
                .optimize = optimize,
                .sanitize_c = .off,
                .strip = strip,
                .pic = true,
                .link_libcpp = !is_linux,
            }),
            .linkage = linkage,
        });

        lib.root_module.addCSourceFiles(.{ .files = &.{source}, .flags = cpp_flags.items });

        b.installArtifact(lib);
    }

    // Create the main module that others will import
    const libqt6zig = b.addModule("libqt6zig", .{
        .root_source_file = b.path("include/libqt6.zig"),
    });

    const libqt6zig_internal = libqt6zig;

    // Add the modules that provide the Qt bindings and typedefs for the internal library
    const qtc_bindings = translate_c.createModule();
    const qtzig_types = b.createModule(.{
        .root_source_file = b.path("include/libqtc.zig"),
    });

    qtzig_types.addImport("qt6c", qtc_bindings);

    libqt6zig.addImport("qt6c", qtc_bindings);
    libqt6zig.addImport("qt6zig", qtzig_types);
    libqt6zig.addImport("qtzig", qtzig_types);
    libqt6zig.addImport("libqt6", libqt6zig_internal);

    try b.modules.put(b.allocator, "libqt6zig", libqt6zig);

    // Documentation build step
    const docs_step = b.step("docs", "Emit libqt6zig documentation");
    const libqt6zig_docs = b.addLibrary(.{
        .name = "libqt6",
        .root_module = b.createModule(.{
            .target = target,
            .root_source_file = b.path("include/libqt6.zig"),
        }),
    });

    const docs_install = b.addInstallDirectory(.{
        .source_dir = libqt6zig_docs.getEmittedDocs(),
        .install_dir = .prefix,
        .install_subdir = "docs",
    });

    docs_step.dependOn(&docs_install.step);
}

const prefixes: []const []const u8 = &.{
    "extras-",
    "foss-extras-",
    "foss-restricted-",
    "posix-extras-",
    "posix-restricted-",
    "restricted-extras-",
};

const os_include_path: []const []const u8 = switch (host_os) {
    .dragonfly, .freebsd, .netbsd, .openbsd => &.{
        "/usr/local/include/qt6",
        "/usr/local/include/KF6",
        "/usr/local/include",
        "/usr/include",
        "/usr/local/lib/qt6/mkspecs/common/posix",
    },
    .linux => &.{
        "/usr/include/" ++ @tagName(host_arch) ++ "-linux-gnu/qt6",
        "/usr/include/qt6",
        "/usr/include/KF6",
        "/usr/include",
        "/usr/lib/" ++ @tagName(host_arch) ++ "-linux-gnu/qt6/mkspecs/common/posix",
        "/usr/lib/qt6/mkspecs/common/posix",
        "/usr/lib64/qt6/mkspecs/common/posix",
    },
    .macos => &.{
        "/usr/local/opt/qt6/include",
        "/opt/homebrew/include",
        "/opt/local/libexec/qt6/mkspecs/common/posix",
    },
    .windows => &.{
        "C:/Qt/6.8.3/llvm-mingw_64/include",
    },
    else => @panic("Unsupported OS"),
};

const base_cpp_flags = &.{
    "-O2",
};

const linux_cpp_flags = &.{
    "-nostdinc++",
    "-nostdlib++",
};

const Distro = enum {
    arch,
    suse,
    none,
};

const qt_modules = @import("modules.zig").modules;
