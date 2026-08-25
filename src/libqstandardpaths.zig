const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qstandardpaths_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstandardpaths.html)
pub const QStandardPaths = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandardpaths.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QStandardPaths,

    pub const _is_QStandardPaths = {};

    /// ### DEPRECATED: Use `writableLocation` instead
    ///
    pub const WritableLocation = writableLocation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandardpaths.html#writableLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` typeVal: qstandardpaths_enums.StandardLocation `
    ///
    pub fn writableLocation(allocator: std.mem.Allocator, typeVal: i32) []const u8 {
        var _str = qtc.QStandardPaths_WritableLocation(@bitCast(typeVal));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QStandardPaths.writableLocation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `standardLocations` instead
    ///
    pub const StandardLocations = standardLocations;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandardpaths.html#standardLocations)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` typeVal: qstandardpaths_enums.StandardLocation `
    ///
    pub fn standardLocations(allocator: std.mem.Allocator, typeVal: i32) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QStandardPaths_StandardLocations(@bitCast(typeVal));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QStandardPaths.standardLocations: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QStandardPaths.standardLocations: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `locate` instead
    ///
    pub const Locate = locate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandardpaths.html#locate)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` typeVal: qstandardpaths_enums.StandardLocation `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn locate(allocator: std.mem.Allocator, typeVal: i32, fileName: []const u8) []const u8 {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        var _str = qtc.QStandardPaths_Locate(@bitCast(typeVal), fileName_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QStandardPaths.locate: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `locateAll` instead
    ///
    pub const LocateAll = locateAll;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandardpaths.html#locateAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` typeVal: qstandardpaths_enums.StandardLocation `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn locateAll(allocator: std.mem.Allocator, typeVal: i32, fileName: []const u8) []const []const u8 {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QStandardPaths_LocateAll(@bitCast(typeVal), fileName_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QStandardPaths.locateAll: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QStandardPaths.locateAll: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `displayName` instead
    ///
    pub const DisplayName = displayName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandardpaths.html#displayName)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` typeVal: qstandardpaths_enums.StandardLocation `
    ///
    pub fn displayName(allocator: std.mem.Allocator, typeVal: i32) []const u8 {
        var _str = qtc.QStandardPaths_DisplayName(@bitCast(typeVal));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QStandardPaths.displayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `findExecutable` instead
    ///
    pub const FindExecutable = findExecutable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandardpaths.html#findExecutable)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` executableName: []const u8 `
    ///
    pub fn findExecutable(allocator: std.mem.Allocator, executableName: []const u8) []const u8 {
        const executableName_str = qtc.libqt_string{
            .len = executableName.len,
            .data = executableName.ptr,
        };
        var _str = qtc.QStandardPaths_FindExecutable(executableName_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QStandardPaths.findExecutable: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setTestModeEnabled` instead
    ///
    pub const SetTestModeEnabled = setTestModeEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandardpaths.html#setTestModeEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` testMode: bool `
    ///
    pub fn setTestModeEnabled(testMode: bool) void {
        qtc.QStandardPaths_SetTestModeEnabled(testMode);
    }

    /// ### DEPRECATED: Use `isTestModeEnabled` instead
    ///
    pub const IsTestModeEnabled = isTestModeEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandardpaths.html#isTestModeEnabled)
    ///
    pub fn isTestModeEnabled() bool {
        return qtc.QStandardPaths_IsTestModeEnabled();
    }

    /// ### DEPRECATED: Use `locate3` instead
    ///
    pub const Locate3 = locate3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandardpaths.html#locate)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` typeVal: qstandardpaths_enums.StandardLocation `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` options: flag of qstandardpaths_enums.LocateOption `
    ///
    pub fn locate3(allocator: std.mem.Allocator, typeVal: i32, fileName: []const u8, options: i32) []const u8 {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        var _str = qtc.QStandardPaths_Locate3(@bitCast(typeVal), fileName_str, @bitCast(options));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QStandardPaths.locate3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `locateAll3` instead
    ///
    pub const LocateAll3 = locateAll3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandardpaths.html#locateAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` typeVal: qstandardpaths_enums.StandardLocation `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` options: flag of qstandardpaths_enums.LocateOption `
    ///
    pub fn locateAll3(allocator: std.mem.Allocator, typeVal: i32, fileName: []const u8, options: i32) []const []const u8 {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QStandardPaths_LocateAll3(@bitCast(typeVal), fileName_str, @bitCast(options));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QStandardPaths.locateAll3: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QStandardPaths.locateAll3: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `findExecutable2` instead
    ///
    pub const FindExecutable2 = findExecutable2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstandardpaths.html#findExecutable)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` executableName: []const u8 `
    ///
    /// ` paths: []const []const u8 `
    ///
    pub fn findExecutable2(allocator: std.mem.Allocator, executableName: []const u8, paths: []const []const u8) []const u8 {
        const executableName_str = qtc.libqt_string{
            .len = executableName.len,
            .data = executableName.ptr,
        };
        const paths_arr = allocator.alloc(qtc.libqt_string, paths.len) catch @panic("QStandardPaths.findExecutable2: Memory allocation failed");
        defer allocator.free(paths_arr);
        for (paths, 0..paths.len) |str_item, i|
            paths_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const paths_list = qtc.libqt_list{
            .len = paths.len,
            .data = paths_arr.ptr,
        };
        var _str = qtc.QStandardPaths_FindExecutable2(executableName_str, paths_list);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QStandardPaths.findExecutable2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstandardpaths.html#public-types)
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
        pub const StateLocation: i32 = 21;
        pub const GenericStateLocation: i32 = 22;
    };

    pub const LocateOption = enum {
        pub const LocateFile: i32 = 0;
        pub const LocateDirectory: i32 = 1;
    };
};
