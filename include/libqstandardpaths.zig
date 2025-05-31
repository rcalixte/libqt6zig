const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qstandardpaths_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qstandardpaths.html
pub const qstandardpaths = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qstandardpaths.html#writableLocation)
    ///
    /// ``` typeVal: qstandardpaths_enums.StandardLocation, allocator: std.mem.Allocator ```
    pub fn WritableLocation(typeVal: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStandardPaths_WritableLocation(@intCast(typeVal));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstandardpaths.WritableLocation: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandardpaths.html#standardLocations)
    ///
    /// ``` typeVal: qstandardpaths_enums.StandardLocation, allocator: std.mem.Allocator ```
    pub fn StandardLocations(typeVal: i64, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.struct_libqt_list = qtc.QStandardPaths_StandardLocations(@intCast(typeVal));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                qtc.libqt_string_free(@ptrCast(&_str[_i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qstandardpaths.StandardLocations: Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qstandardpaths.StandardLocations: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandardpaths.html#locate)
    ///
    /// ``` typeVal: qstandardpaths_enums.StandardLocation, fileName: []const u8, allocator: std.mem.Allocator ```
    pub fn Locate(typeVal: i64, fileName: []const u8, allocator: std.mem.Allocator) []const u8 {
        const fileName_str = qtc.struct_libqt_string{
            .len = fileName.len,
            .data = @constCast(fileName.ptr),
        };
        const _str = qtc.QStandardPaths_Locate(@intCast(typeVal), fileName_str);
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstandardpaths.Locate: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandardpaths.html#locateAll)
    ///
    /// ``` typeVal: qstandardpaths_enums.StandardLocation, fileName: []const u8, allocator: std.mem.Allocator ```
    pub fn LocateAll(typeVal: i64, fileName: []const u8, allocator: std.mem.Allocator) [][]const u8 {
        const fileName_str = qtc.struct_libqt_string{
            .len = fileName.len,
            .data = @constCast(fileName.ptr),
        };
        const _arr: qtc.struct_libqt_list = qtc.QStandardPaths_LocateAll(@intCast(typeVal), fileName_str);
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                qtc.libqt_string_free(@ptrCast(&_str[_i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qstandardpaths.LocateAll: Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qstandardpaths.LocateAll: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandardpaths.html#displayName)
    ///
    /// ``` typeVal: qstandardpaths_enums.StandardLocation, allocator: std.mem.Allocator ```
    pub fn DisplayName(typeVal: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStandardPaths_DisplayName(@intCast(typeVal));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstandardpaths.DisplayName: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandardpaths.html#findExecutable)
    ///
    /// ``` executableName: []const u8, allocator: std.mem.Allocator ```
    pub fn FindExecutable(executableName: []const u8, allocator: std.mem.Allocator) []const u8 {
        const executableName_str = qtc.struct_libqt_string{
            .len = executableName.len,
            .data = @constCast(executableName.ptr),
        };
        const _str = qtc.QStandardPaths_FindExecutable(executableName_str);
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstandardpaths.FindExecutable: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandardpaths.html#setTestModeEnabled)
    ///
    /// ``` testMode: bool ```
    pub fn SetTestModeEnabled(testMode: bool) void {
        qtc.QStandardPaths_SetTestModeEnabled(testMode);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandardpaths.html#isTestModeEnabled)
    ///
    ///
    pub fn IsTestModeEnabled() bool {
        return qtc.QStandardPaths_IsTestModeEnabled();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandardpaths.html#locate)
    ///
    /// ``` typeVal: qstandardpaths_enums.StandardLocation, fileName: []const u8, options: i32, allocator: std.mem.Allocator ```
    pub fn Locate3(typeVal: i64, fileName: []const u8, options: i64, allocator: std.mem.Allocator) []const u8 {
        const fileName_str = qtc.struct_libqt_string{
            .len = fileName.len,
            .data = @constCast(fileName.ptr),
        };
        const _str = qtc.QStandardPaths_Locate3(@intCast(typeVal), fileName_str, @intCast(options));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstandardpaths.Locate3: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandardpaths.html#locateAll)
    ///
    /// ``` typeVal: qstandardpaths_enums.StandardLocation, fileName: []const u8, options: i32, allocator: std.mem.Allocator ```
    pub fn LocateAll3(typeVal: i64, fileName: []const u8, options: i64, allocator: std.mem.Allocator) [][]const u8 {
        const fileName_str = qtc.struct_libqt_string{
            .len = fileName.len,
            .data = @constCast(fileName.ptr),
        };
        const _arr: qtc.struct_libqt_list = qtc.QStandardPaths_LocateAll3(@intCast(typeVal), fileName_str, @intCast(options));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                qtc.libqt_string_free(@ptrCast(&_str[_i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qstandardpaths.LocateAll3: Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qstandardpaths.LocateAll3: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qstandardpaths.html#findExecutable)
    ///
    /// ``` executableName: []const u8, paths: [][]const u8, allocator: std.mem.Allocator ```
    pub fn FindExecutable2(executableName: []const u8, paths: [][]const u8, allocator: std.mem.Allocator) []const u8 {
        const executableName_str = qtc.struct_libqt_string{
            .len = executableName.len,
            .data = @constCast(executableName.ptr),
        };
        var paths_arr = allocator.alloc(qtc.struct_libqt_string, paths.len) catch @panic("qstandardpaths.FindExecutable2: Memory allocation failed");
        defer allocator.free(paths_arr);
        for (paths, 0..paths.len) |item, _i| {
            paths_arr[_i] = .{
                .len = item.len,
                .data = @ptrCast(@constCast(item.ptr)),
            };
        }
        const paths_list = qtc.struct_libqt_list{
            .len = paths.len,
            .data = paths_arr.ptr,
        };
        const _str = qtc.QStandardPaths_FindExecutable2(executableName_str, paths_list);
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstandardpaths.FindExecutable2: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }
};

/// https://doc.qt.io/qt-6/qstandardpaths.html#types
pub const enums = struct {
    pub const StandardLocation = enum {
        pub const DesktopLocation: i32 = 0;
        pub const DocumentsLocation: i32 = 1;
        pub const FontsLocation: i32 = 2;
        pub const ApplicationsLocation: i32 = 3;
        pub const MusicLocation: i32 = 4;
        pub const MoviesLocation: i32 = 5;
        pub const PicturesLocation: i32 = 6;
        pub const TempLocation: i32 = 7;
        pub const HomeLocation: i32 = 8;
        pub const AppLocalDataLocation: i32 = 9;
        pub const CacheLocation: i32 = 10;
        pub const GenericDataLocation: i32 = 11;
        pub const RuntimeLocation: i32 = 12;
        pub const ConfigLocation: i32 = 13;
        pub const DownloadLocation: i32 = 14;
        pub const GenericCacheLocation: i32 = 15;
        pub const GenericConfigLocation: i32 = 16;
        pub const AppDataLocation: i32 = 17;
        pub const AppConfigLocation: i32 = 18;
        pub const PublicShareLocation: i32 = 19;
        pub const TemplatesLocation: i32 = 20;
    };

    pub const LocateOption = enum {
        pub const LocateFile: i32 = 0;
        pub const LocateDirectory: i32 = 1;
    };
};
