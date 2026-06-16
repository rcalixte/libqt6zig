const std = @import("std");
const host_os = @import("builtin").target.os.tag;

const is_macos = host_os == .macos;
const is_windows = host_os == .windows;
const is_bsd_host = switch (host_os) {
    .dragonfly, .freebsd, .netbsd, .openbsd => true,
    else => false,
};

const QtExeOptions = struct {
    /// Whether to link to the common Qt base libraries
    link_base_libraries: bool = true,
    /// Extra library header and include search paths
    extra_paths: []const []const u8 = &.{},
    /// Extra libraries to link to the exe where the full path is
    /// determined by `gcc`
    linux_libraries: []const []const u8 = &.{},
    /// Extra dlls to link to the exe
    win_libs: []const []const u8 = &.{},
    /// The directory where Qt is installed
    win_qt_dir: []const u8 = "",
    /// Base directory to find extra library/include search paths
    win_root: []const u8 = "C:/Qt/6.8.3/llvm-mingw_64",
    /// Step(s) for the exe to add installation file dependencies
    win_steps: []*std.Build.Step = &.{},
};

/// This is a convenience function that supports adding paths to the
/// exe's root module as well as additional system configuration for
/// the current platform.
pub fn configureQtExeRootModule(b: *std.Build, exe: *std.Build.Step.Compile, options: QtExeOptions) !void {
    const base_libs = if (is_macos) [_][]const u8{
        "QtCore",
        "QtGui",
        "QtWidgets",
    } else [_][]const u8{
        "Qt6Core",
        "Qt6Gui",
        "Qt6Widgets",
    };

    if (options.link_base_libraries)
        for (base_libs) |lib|
            if (is_macos)
                exe.root_module.linkFramework(lib, .{})
            else
                exe.root_module.linkSystemLibrary(lib, .{});

    const sub_paths = [_][]const u8{ "/bin", "/lib", "" };

    for (options.extra_paths) |path|
        for (sub_paths) |sub_path| {
            const extra_path = b.fmt("{s}{s}", .{ path, sub_path });
            std.Io.Dir.cwd().access(b.graph.io, extra_path, .{}) catch {
                continue;
            };
            exe.root_module.addLibraryPath(.{ .cwd_relative = extra_path });
            if (is_macos)
                exe.root_module.addFrameworkPath(.{ .cwd_relative = extra_path });
        };

    if (is_bsd_host)
        exe.root_module.addLibraryPath(.{ .cwd_relative = "/usr/local/lib/qt6" });
    if (is_macos) {
        exe.root_module.addFrameworkPath(.{ .cwd_relative = "/opt/homebrew/Frameworks" });
        exe.root_module.addLibraryPath(.{ .cwd_relative = "/opt/homebrew/lib" });
    }
    if (is_windows) {
        const win_bin_dir = b.fmt("{s}/bin", .{options.win_root});
        if (std.Io.Dir.cwd().access(b.graph.io, win_bin_dir, .{}))
            exe.root_module.addLibraryPath(.{ .cwd_relative = win_bin_dir })
        else |_| if (options.extra_paths.len == 0) {
            std.log.err(
                "'{s}' either does not exist or does not have a 'bin' subdirectory and no extra paths were provided\n",
                .{options.win_root},
            );
            return error.WinQtBinDirNotFound;
        }
    }

    if (host_os == .linux) {
        exe.root_module.link_libcpp = false;

        var result = try std.process.run(b.allocator, b.graph.io, .{
            .argv = &.{ "gcc", "--print-file-name=libstdc++.so.6" },
        });
        exe.root_module.addObjectFile(.{
            .cwd_relative = std.mem.trim(u8, result.stdout, &std.ascii.whitespace),
        });

        for (options.linux_libraries) |lib| {
            result = try std.process.run(b.allocator, b.graph.io, .{
                .argv = &.{ "gcc", b.fmt("--print-file-name={s}", .{lib}) },
            });
            exe.root_module.addObjectFile(.{
                .cwd_relative = std.mem.trim(u8, result.stdout, &std.ascii.whitespace),
            });
        }

        exe.root_module.linkSystemLibrary("unwind", .{});
    }

    if (is_windows) {
        var win_libs: std.ArrayList([]const u8) = .empty;
        try win_libs.ensureTotalCapacityPrecise(b.allocator, base_libs.len + options.win_libs.len);
        if (options.link_base_libraries)
            for (base_libs) |lib|
                win_libs.appendAssumeCapacity(lib);
        for (options.win_libs) |lib|
            win_libs.appendAssumeCapacity(lib);

        const qt_dir = if (options.win_qt_dir.len == 0) options.win_root else options.win_qt_dir;
        for (win_libs.items) |lib| {
            const bin_path = b.fmt("bin/{s}.dll", .{lib});
            const dll_path = b.fmt("{s}/{s}", .{ qt_dir, bin_path });
            std.Io.Dir.cwd().access(b.graph.io, dll_path, .{}) catch {
                continue;
            };
            for (options.win_steps) |step| {
                const install_win_dll = b.addInstallFile(
                    .{ .cwd_relative = dll_path },
                    bin_path,
                );
                step.dependOn(&install_win_dll.step);
            }
        }

        const plugins_path = b.fmt("{s}/plugins", .{qt_dir});
        std.Io.Dir.cwd().access(b.graph.io, plugins_path, .{}) catch {
            std.log.err("Plugins path '{s}' does not exist\n", .{plugins_path});
            return error.PluginsPathNotFound;
        };
        for (options.win_steps) |step| {
            const install_plugins = b.addInstallDirectory(.{
                .source_dir = .{ .cwd_relative = plugins_path },
                .install_dir = .prefix,
                .install_subdir = "bin/plugins",
            });
            step.dependOn(&install_plugins.step);
        }
    }
}
