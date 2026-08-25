const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QVersionNumber = @import("libqt6").QVersionNumber;
const qlibraryinfo_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlibraryinfo.html)
pub const QLibraryInfo = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlibraryinfo.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QLibraryInfo,

    pub const _is_QLibraryInfo = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QLibraryInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QLibraryInfo `
    ///
    pub fn new(other: anytype) QLibraryInfo {
        comptime _ = @TypeOf(other)._is_QLibraryInfo;
        return .{ .ptr = qtc.QLibraryInfo_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QLibraryInfo object and invalidate the source QLibraryInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QLibraryInfo `
    ///
    pub fn new2(other: anytype) QLibraryInfo {
        comptime _ = @TypeOf(other)._is_QLibraryInfo;
        return .{ .ptr = qtc.QLibraryInfo_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QLibraryInfo `
    ///
    /// ` other: QLibraryInfo `
    ///
    pub fn copyAssign(self: QLibraryInfo, other: QLibraryInfo) void {
        qtc.QLibraryInfo_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QLibraryInfo `
    ///
    /// ` other: QLibraryInfo `
    ///
    pub fn moveAssign(self: QLibraryInfo, other: QLibraryInfo) void {
        qtc.QLibraryInfo_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `build` instead
    ///
    pub const Build = build;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlibraryinfo.html#build)
    ///
    pub fn build() [:0]const u8 {
        const _ret = qtc.QLibraryInfo_Build();
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `isDebugBuild` instead
    ///
    pub const IsDebugBuild = isDebugBuild;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlibraryinfo.html#isDebugBuild)
    ///
    pub fn isDebugBuild() bool {
        return qtc.QLibraryInfo_IsDebugBuild();
    }

    /// ### DEPRECATED: Use `isSharedBuild` instead
    ///
    pub const IsSharedBuild = isSharedBuild;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlibraryinfo.html#isSharedBuild)
    ///
    pub fn isSharedBuild() bool {
        return qtc.QLibraryInfo_IsSharedBuild();
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlibraryinfo.html#version)
    ///
    pub fn version() QVersionNumber {
        return .{ .ptr = qtc.QLibraryInfo_Version() };
    }

    /// ### DEPRECATED: Use `path` instead
    ///
    pub const Path = path;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlibraryinfo.html#path)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` p: qlibraryinfo_enums.LibraryPath `
    ///
    pub fn path(allocator: std.mem.Allocator, p: i32) []const u8 {
        var _str = qtc.QLibraryInfo_Path(@bitCast(p));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QLibraryInfo.path: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `paths` instead
    ///
    pub const Paths = paths;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlibraryinfo.html#paths)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` p: qlibraryinfo_enums.LibraryPath `
    ///
    pub fn paths(allocator: std.mem.Allocator, p: i32) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QLibraryInfo_Paths(@bitCast(p));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QLibraryInfo.paths: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QLibraryInfo.paths: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `location` instead
    ///
    pub const Location = location;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlibraryinfo.html#location)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _location: qlibraryinfo_enums.LibraryPath `
    ///
    pub fn location(allocator: std.mem.Allocator, _location: i32) []const u8 {
        var _str = qtc.QLibraryInfo_Location(@bitCast(_location));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QLibraryInfo.location: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `platformPluginArguments` instead
    ///
    pub const PlatformPluginArguments = platformPluginArguments;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlibraryinfo.html#platformPluginArguments)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` platformName: []const u8 `
    ///
    pub fn platformPluginArguments(allocator: std.mem.Allocator, platformName: []const u8) []const []const u8 {
        const platformName_str = qtc.libqt_string{
            .len = platformName.len,
            .data = platformName.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QLibraryInfo_PlatformPluginArguments(platformName_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QLibraryInfo.platformPluginArguments: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QLibraryInfo.platformPluginArguments: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlibraryinfo.html#dtor.QLibraryInfo)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QLibraryInfo `
    ///
    pub fn delete(self: QLibraryInfo) void {
        qtc.QLibraryInfo_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlibraryinfo.html#public-types)
pub const enums = struct {
    pub const LibraryPath = enum {
        pub const PrefixPath: i32 = 0;
        pub const DocumentationPath: i32 = 1;
        pub const HeadersPath: i32 = 2;
        pub const LibrariesPath: i32 = 3;
        pub const LibraryExecutablesPath: i32 = 4;
        pub const BinariesPath: i32 = 5;
        pub const PluginsPath: i32 = 6;
        pub const QmlImportsPath: i32 = 7;
        pub const Qml2ImportsPath: i32 = 7;
        pub const ArchDataPath: i32 = 8;
        pub const DataPath: i32 = 9;
        pub const TranslationsPath: i32 = 10;
        pub const ExamplesPath: i32 = 11;
        pub const TestsPath: i32 = 12;
        pub const SettingsPath: i32 = 100;
    };
};
