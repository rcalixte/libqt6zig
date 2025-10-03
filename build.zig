const std = @import("std");
const host_os = @import("builtin").os.tag;
const host_arch = @import("builtin").cpu.arch;

var buffer: [64]u8 = undefined;
var stdout_writer = std.fs.File.stdout().writer(&buffer);

const prefixes: []const []const u8 = &.{
    "extras-",
    "foss-extras-",
    "foss-restricted-",
    "posix-extras-",
    "posix-restricted-",
    "restricted-extras-",
};

pub fn build(b: *std.Build) !void {
    const target = b.standardTargetOptions(.{});
    const linkage = b.option(std.builtin.LinkMode, "linkage", "Link mode for libqt6zig") orelse .static;
    const enable_workaround = b.option(bool, "enable-workaround", "Enable workaround for missing Qt C++ headers") orelse false;
    const extra_paths = b.option([]const []const u8, "extra-paths", "Extra library header search paths") orelse &.{};
    const optimize = standardOptimizeOption(b, .{});

    const is_macos = target.result.os.tag == .macos or host_os == .macos;
    const is_windows = target.result.os.tag == .windows or host_os == .windows;

    const is_bsd_host = switch (host_os) {
        .dragonfly, .freebsd, .netbsd, .openbsd => true,
        else => false,
    };

    const is_bsd_target = switch (target.result.os.tag) {
        .dragonfly, .freebsd, .netbsd, .openbsd => true,
        else => false,
    };

    const is_bsd_family = is_bsd_host or is_bsd_target;

    var arena = std.heap.ArenaAllocator.init(b.allocator);
    defer arena.deinit();
    const allocator = arena.allocator();

    var cpp_sources: std.ArrayList([]const u8) = .empty;
    var prefix_options: std.StringHashMapUnmanaged(bool) = .empty;

    const src_dir = try std.fs.path.join(allocator, &.{ b.build_root.path.?, "src" });
    var dir = try std.fs.cwd().openDir(src_dir, .{ .iterate = true });
    defer dir.close();
    var walker = try dir.walk(b.allocator);
    defer walker.deinit();

    while (try walker.next()) |entry| {
        entry_loop: {
            if (entry.kind == .file and std.mem.endsWith(u8, entry.path, ".cpp")) {
                var basename = std.fs.path.basename(entry.path);
                basename = basename[3 .. basename.len - 4];
                // conditional removals
                if ((enable_workaround or is_bsd_family or is_macos) and (std.mem.eql(u8, basename, "qsctpsocket") or std.mem.eql(u8, basename, "qsctpserver")))
                    continue;
                if (is_windows and (std.mem.startsWith(u8, entry.path, "foss-") or std.mem.startsWith(u8, entry.path, "posix-")))
                    continue;
                if (is_macos and std.mem.startsWith(u8, entry.path, "foss-"))
                    continue;

                inline for (prefixes) |prefix| {
                    if (std.mem.startsWith(u8, entry.path, prefix)) {
                        var is_enabled = true;
                        if ((host_os == .macos or host_os == .windows) and std.mem.eql(u8, prefix, "extras-")) {
                            is_enabled = false;
                        }
                        const path = std.fs.path.stem(std.fs.path.dirname(entry.path).?);
                        var library = std.mem.splitBackwardsScalar(u8, path, '-');
                        const name = library.first();
                        const enabled = prefix_options.get(name) orelse is_enabled;
                        if (!enabled)
                            break :entry_loop;
                    }
                }

                try cpp_sources.append(allocator, try std.fs.path.join(allocator, &.{ "src", entry.path }));
            } else if (entry.kind == .directory) {
                inline for (prefixes) |prefix| {
                    if (std.mem.startsWith(u8, entry.path, prefix)) {
                        const path = std.fs.path.stem(entry.path);
                        var library = std.mem.splitBackwardsScalar(u8, path, '-');
                        const name = library.first();
                        const description = b.fmt("Enable {s} (where supported)", .{name});
                        const option_name = try std.mem.concat(allocator, u8, &.{ "enable-", name });
                        const option_value = b.option(bool, option_name, description);
                        var is_enabled = true;
                        if ((host_os == .macos or host_os == .windows) and std.mem.eql(u8, prefix, "extras-")) {
                            is_enabled = false;
                        }
                        const map_value = if (option_value == null) is_enabled else option_value.?;
                        try prefix_options.put(allocator, b.dupe(name), map_value);
                    }
                }
            }
        }
    }

    if (cpp_sources.items.len == 0)
        @panic("No .cpp files found.\n");

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
        },
        .macos => &.{
            "/usr/local/opt/qt6/include",
            "/opt/homebrew/include",
        },
        .windows => &.{
            "C:/Qt/6.8.2/mingw_64/include",
            "C:/Qt/6.8.2/msvc2022_64/include",
        },
        else => @panic("Unsupported OS"),
    };

    var qt_include_path: std.ArrayList([]const u8) = .empty;
    for (extra_paths) |extra_path| {
        if (std.mem.eql(u8, extra_path, "")) continue;
        try qt_include_path.append(b.allocator, b.dupe(extra_path));
    }
    for (os_include_path) |os_path| {
        try qt_include_path.append(b.allocator, b.dupe(os_path));
    }

    const qt_modules = &.{
        // Qt 6 Core, GUI, Widgets
        "QtCore",
        "QtGui",
        "QtWidgets",
        // Qt 6 Charts
        "QtCharts",
        // Qt 6 D-Bus
        "QtDBus",
        // Qt 6 Multimedia
        "QtMultimedia",
        "QtMultimediaWidgets",
        // Qt 6 Network
        "QtNetwork",
        // Qt 6 OpenGL
        "QtOpenGL",
        "QtOpenGLWidgets",
        // Qt 6 PDF
        "QtPdf",
        "QtPdfWidgets",
        // Qt 6 Print Support
        "QtPrintSupport",
        // Qt 6 Spatial Audio
        "QtSpatialAudio",
        // Qt 6 SQL
        "QtSql",
        // Qt 6 SVG
        "QtSvg",
        "QtSvgWidgets",
        // Qt 6 WebChannel
        "QtWebChannel",
        "QtWebChannelQuick",
        // Qt 6 WebEngine
        "QtWebEngineCore",
        "QtWebEngineWidgets",
        // Qt 6 XML
        "QtXml",
        // Qt 6 Attica
        "Attica",
        "Attica/Attica",
        "Attica/attica",
        // Qt 6 KCodecs
        "KCodecs",
        // Qt 6 KCompletion
        "KCompletion",
        // Qt 6 KConfig
        "KConfig",
        "KConfigCore",
        "KConfigGui",
        // Qt 6 KCoreAddons
        "KCoreAddons",
        "KCrash", // build dependency
        // Qt 6 KGuiAddons
        "KGuiAddons",
        // Qt 6 KI18n
        "KI18n",
        "KI18nLocaleData",
        // Qt 6 KItemViews
        "KItemViews",
        // Qt 6 KJobWidgets
        "KJobWidgets",
        // Qt 6 KNewStuff
        "KNewStuff",
        "KNewStuffCore",
        "KNewStuffCore/KNSCore",
        "KNewStuffWidgets",
        "KNewStuffWidgets/KNSWidgets",
        // Qt 6 KPlotting
        "KPlotting",
        // Qt 6 KService
        "KService",
        // Qt 6 Solid
        "Solid",
        "Solid/Solid",
        "Solid/solid",
        // Qt 6 Sonnet
        "Sonnet",
        "SonnetCore",
        "SonnetCore/sonnet",
        "SonnetUi",
        "SonnetUi/sonnet",
        // Qt 6 KSyntaxHighlighting
        "KSyntaxHighlighting",
        "KSyntaxHighlighting/KSyntaxHighlighting",
        // Qt 6 KTextWidgets
        "KTextWidgets",
        // Qt 6 KWidgetsAddons
        "KWidgetsAddons",
        // Qt 6 KColorScheme
        "KColorScheme",
        // Qt 6 KConfigWidgets
        "KConfigWidgets",
        // Qt 6 KBookmarks
        "KBookmarks",
        "KBookmarksWidgets",
        // Qt 6 KNotifications
        "KNotifications",
        // Qt 6 KIconThemes
        "KIconThemes",
        "KIconWidgets",
        // Qt 6 KXmlGui
        "KXmlGui",
        // Qt 6 KGlobalAccel
        "KGlobalAccel",
        // Qt 6 KWindowSystem
        "KWindowSystem",
        // Qt 6 KIO
        "KIO",
        "KIOCore",
        "KIOCore/kio",
        "KIOFileWidgets",
        "KIOGui",
        "KIOGui/kio",
        "KIOWidgets",
        "KIOWidgets/kio",
        // Qt 6 KParts
        "KParts",
        "KParts/KParts",
        "KParts/kparts",
        // Qt 6 KTextEditor
        "KTextEditor",
        "KTextEditor/KTextEditor",
        "KTextEditor/ktexteditor",
        // Qt 6 QScintilla
        "Qsci",
        // Qt 6 QTermWidget
        "qtermwidget6",
    };

    const base_cpp_flags = &.{
        "-O2",
    };

    var cpp_flags: [][]const u8 = try allocator.alloc([]const u8, base_cpp_flags.len + extra_paths.len + os_include_path.len + (qt_modules.len * (os_include_path.len + extra_paths.len)));

    // Add base flags
    var flags_index: usize = 0;
    inline for (base_cpp_flags) |flag| {
        cpp_flags[flags_index] = b.dupe(flag);
        flags_index += 1;
    }

    // Add include paths
    for (qt_include_path.items) |qt_path| {
        cpp_flags[flags_index] = b.fmt("-I{s}", .{qt_path});
        flags_index += 1;
    }

    const translate_c = b.addTranslateC(.{
        .root_source_file = b.path("include/libqt6c.h"),
        .target = target,
        .optimize = optimize,
    });

    for (qt_include_path.items) |qt_path| {
        translate_c.addIncludePath(std.Build.LazyPath{ .cwd_relative = qt_path });
    }

    // Add Qt module include paths
    inline for (qt_modules) |module| {
        for (qt_include_path.items) |qt_path| {
            cpp_flags[flags_index] = b.fmt("-I{s}/{s}", .{ qt_path, module });
            const flagPath = b.fmt("{s}/{s}", .{ qt_path, module });
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
    libqt6zig.addOptions("build_options", options);

    // Add the modules that provide the Qt bindings and typedefs for the internal library
    const qtc_bindings = b.createModule(.{
        .root_source_file = translate_c.getOutput(),
    });

    const qtzig_types = b.createModule(.{
        .root_source_file = b.path("include/libqtc.zig"),
    });

    qtzig_types.addImport("qt6c", qtc_bindings);

    libqt6zig.addImport("qt6c", qtc_bindings);
    libqt6zig.addImport("qt6zig", qtzig_types);
    libqt6zig.addImport("qtzig", qtzig_types);

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
        stdout_writer.interface.writeAll("libqt6zig does not support Debug build mode.\n") catch @panic("Failed to write to stdout");
        stdout_writer.interface.flush() catch @panic("Failed to flush stdout writer");
        std.process.exit(1);
    }
}
