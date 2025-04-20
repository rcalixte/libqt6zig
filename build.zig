const std = @import("std");

pub fn build(b: *std.Build) !void {
    const target = b.standardTargetOptions(.{});
    const linkage = b.option(std.builtin.LinkMode, "linkage", "Link mode for libqt6zig") orelse .static;
    const enable_workaround = b.option(bool, "enable-workaround", "Enable workaround for missing Qt C++ headers") orelse false;
    const skip_restricted = b.option(bool, "skip-restricted", "Skip restricted libraries") orelse false;
    const optimize = standardOptimizeOption(b, .{});

    const is_bsd_family = switch (target.result.os.tag) {
        .dragonfly, .freebsd, .netbsd, .openbsd => true,
        else => false,
    };

    var arena = std.heap.ArenaAllocator.init(b.allocator);
    defer arena.deinit();
    const allocator = arena.allocator();

    var cpp_sources: std.ArrayListUnmanaged([]const u8) = .empty;
    var cpp_header_files: std.ArrayListUnmanaged([]const u8) = .empty;

    const src_dir = b.build_root.path.?;
    var dir = try std.fs.cwd().openDir(src_dir, .{ .iterate = true });
    var walker = try dir.walk(b.allocator);
    defer walker.deinit();

    while (try walker.next()) |entry| {
        if (entry.kind == .file and std.mem.endsWith(u8, entry.path, ".cpp")) {
            var basename = std.fs.path.basename(entry.path);
            basename = basename[3 .. basename.len - 4];
            // conditional removals
            if ((enable_workaround or is_bsd_family) and (std.mem.eql(u8, basename, "qsctpsocket") or std.mem.eql(u8, basename, "qsctpserver")))
                continue;
            if (skip_restricted and std.mem.startsWith(u8, entry.path, "src/restricted"))
                continue;

            try cpp_sources.append(allocator, b.dupe(entry.path));
        } else if (entry.kind == .file and std.mem.endsWith(u8, entry.path, ".h")) {
            const full_path = try std.fs.path.join(b.allocator, &.{entry.path});
            if (!std.mem.endsWith(u8, full_path, "libqt6c.h"))
                try cpp_header_files.append(allocator, full_path);
        }
    }

    if (cpp_sources.items.len == 0)
        @panic("No .cpp files found.\n");

    const qt_include_path: []const []const u8 = switch (target.result.os.tag) {
        .dragonfly, .freebsd, .netbsd, .openbsd => &.{"/usr/local/include/qt6"},
        .linux => switch (target.result.cpu.arch) {
            .x86_64 => &.{
                "/usr/include/x86_64-linux-gnu/qt6",
                "/usr/include/qt6",
            },
            .aarch64 => &.{
                "/usr/include/aarch64-linux-gnu/qt6",
                "/usr/include/qt6",
            },
            else => &.{"/usr/include/qt6"},
        },
        .macos => &.{"/usr/local/opt/qt6/include"},
        .windows => try generateWindowsBuildPaths(allocator),
        else => @panic("Unsupported OS"),
    };

    const qt_modules = &.{
        "QtCore",
        "QtWidgets",
        "QtGui",
        "QtCharts",
        "QtMultimedia",
        "QtMultimediaWidgets",
        "QtNetwork",
        "QtPdf",
        "QtPdfWidgets",
        "QtPrintSupport",
        "QtSpatialAudio",
        "QtSvg",
        "QtSvgWidgets",
        "QtWebChannel",
        "QtWebChannelQuick",
        "QtWebEngineCore",
        "QtWebEngineWidgets",
        "Qsci",
    };

    const base_cpp_flags = &.{
        "-O2",
    };

    var cpp_flags: [][]const u8 = try allocator.alloc([]const u8, base_cpp_flags.len + qt_include_path.len + (qt_modules.len * qt_include_path.len));

    // Add base flags
    var flags_index: usize = 0;
    inline for (base_cpp_flags) |flag| {
        cpp_flags[flags_index] = try std.fmt.allocPrint(allocator, "{s}", .{flag});
        flags_index += 1;
    }

    // Add include paths
    for (qt_include_path) |qt_path| {
        cpp_flags[flags_index] = try std.fmt.allocPrint(allocator, "-I{s}", .{qt_path});
        flags_index += 1;
    }

    const translate_c = b.addTranslateC(.{
        .root_source_file = b.path("include/libqt6c.h"),
        .target = target,
        .optimize = optimize,
    });

    for (qt_include_path) |qt_path| {
        translate_c.addIncludePath(std.Build.LazyPath{ .cwd_relative = qt_path });
    }

    // Add Qt module include paths
    inline for (qt_modules) |module| {
        for (qt_include_path) |qt_path| {
            cpp_flags[flags_index] = try std.fmt.allocPrint(allocator, "-I{s}/{s}", .{ qt_path, module });
            const flagPath = try std.fmt.allocPrint(allocator, "{s}/{s}", .{ qt_path, module });
            translate_c.addIncludePath(std.Build.LazyPath{ .cwd_relative = flagPath });
            flags_index += 1;
        }
    }

    // Create a separate library for each source file
    for (cpp_sources.items) |source| {
        var basename = std.fs.path.basename(source);
        basename = basename[3 .. basename.len - 4];

        const lib = b.addLibrary(.{
            .name = basename,
            .root_module = b.createModule(.{
                .target = target,
                .optimize = optimize,
                .strip = optimize != .Debug,
                .pic = true,
            }),
            .linkage = linkage,
        });

        lib.root_module.linkSystemLibrary("stdc++", .{});
        lib.root_module.addCSourceFiles(.{ .files = &.{source}, .flags = cpp_flags });

        b.installArtifact(lib);
    }

    // Create the main module that others will import
    const libqt6zig = b.addModule("libqt6zig", .{
        .root_source_file = b.path("include/libqt6.zig"),
    });

    // Add options
    const options = b.addOptions();
    options.addOption(bool, "enable_workaround", enable_workaround);
    options.addOption(bool, "skip_restricted", skip_restricted);
    libqt6zig.addOptions("build_options", options);

    // Add the module that provides the Qt bindings for the internal library
    const qt_bindings = b.createModule(.{
        .root_source_file = translate_c.getOutput(),
    });

    libqt6zig.addImport("qt6c", qt_bindings);

    b.modules.put("libqt6zig", libqt6zig) catch {};
}

fn standardOptimizeOption(b: *std.Build, options: std.Build.StandardOptimizeOptionOptions) std.builtin.OptimizeMode {
    if (options.preferred_optimize_mode) |mode| {
        checkSupportedMode(mode);
        if (b.option(bool, "release", "optimize for end users") orelse (b.release_mode != .off)) {
            return mode;
        } else {
            return .ReleaseFast;
        }
    }

    if (b.option(
        std.builtin.OptimizeMode,
        "optimize",
        "Prioritize performance, safety, or binary size",
    )) |mode| {
        checkSupportedMode(mode);
        return mode;
    }

    return switch (b.release_mode) {
        .off, .any, .fast => .ReleaseFast,
        .safe => .ReleaseSafe,
        .small => .ReleaseSmall,
    };
}

fn checkSupportedMode(mode: std.builtin.OptimizeMode) void {
    if (mode == .Debug) {
        std.debug.print("libqt6zig does not support Debug build mode.\n", .{});
        std.process.exit(1);
    }
}

fn generateWindowsBuildPaths(allocator: std.mem.Allocator) ![]const []const u8 {
    var qt_win_paths: std.ArrayListUnmanaged([]const u8) = .empty;

    const qt_win_versions = &.{
        "6.4.3",
        "6.5.5",
        "6.6.3",
        "6.7.3",
        "6.8.2",
        "6.9.0",
    };

    const win_compilers = &.{
        "mingw_64",
        "msvc2019_64",
        "msvc2022_64",
    };

    inline for (qt_win_versions) |ver| {
        inline for (win_compilers) |wc| {
            try qt_win_paths.append(allocator, "C:/Qt/" ++ ver ++ "/" ++ wc ++ "/include");
        }
    }

    return qt_win_paths.items;
}
