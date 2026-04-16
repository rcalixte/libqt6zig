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

    /// New constructs a new QLibraryInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QLibraryInfo `
    ///
    pub fn New(other: anytype) QLibraryInfo {
        comptime _ = @TypeOf(other)._is_QLibraryInfo;
        return .{ .ptr = qtc.QLibraryInfo_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QLibraryInfo object and invalidates the source QLibraryInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QLibraryInfo `
    ///
    pub fn New2(other: anytype) QLibraryInfo {
        comptime _ = @TypeOf(other)._is_QLibraryInfo;
        return .{ .ptr = qtc.QLibraryInfo_new2(@ptrCast(other.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QLibraryInfo `
    ///
    /// ` other: QLibraryInfo `
    ///
    pub fn CopyAssign(self: QLibraryInfo, other: QLibraryInfo) void {
        qtc.QLibraryInfo_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QLibraryInfo `
    ///
    /// ` other: QLibraryInfo `
    ///
    pub fn MoveAssign(self: QLibraryInfo, other: QLibraryInfo) void {
        qtc.QLibraryInfo_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlibraryinfo.html#build)
    ///
    pub fn Build() [:0]const u8 {
        const _ret = qtc.QLibraryInfo_Build();
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlibraryinfo.html#isDebugBuild)
    ///
    pub fn IsDebugBuild() bool {
        return qtc.QLibraryInfo_IsDebugBuild();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlibraryinfo.html#isSharedBuild)
    ///
    pub fn IsSharedBuild() bool {
        return qtc.QLibraryInfo_IsSharedBuild();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlibraryinfo.html#version)
    ///
    pub fn Version() QVersionNumber {
        return .{ .ptr = qtc.QLibraryInfo_Version() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlibraryinfo.html#path)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` p: qlibraryinfo_enums.LibraryPath `
    ///
    pub fn Path(allocator: std.mem.Allocator, p: i32) []const u8 {
        var _str = qtc.QLibraryInfo_Path(@bitCast(p));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlibraryinfo.Path: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlibraryinfo.html#paths)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` p: qlibraryinfo_enums.LibraryPath `
    ///
    pub fn Paths(allocator: std.mem.Allocator, p: i32) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QLibraryInfo_Paths(@bitCast(p));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qlibraryinfo.Paths: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qlibraryinfo.Paths: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlibraryinfo.html#location)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` location: qlibraryinfo_enums.LibraryPath `
    ///
    pub fn Location(allocator: std.mem.Allocator, location: i32) []const u8 {
        var _str = qtc.QLibraryInfo_Location(@bitCast(location));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlibraryinfo.Location: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlibraryinfo.html#platformPluginArguments)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` platformName: []const u8 `
    ///
    pub fn PlatformPluginArguments(allocator: std.mem.Allocator, platformName: []const u8) []const []const u8 {
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
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qlibraryinfo.PlatformPluginArguments: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qlibraryinfo.PlatformPluginArguments: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlibraryinfo.html#dtor.QLibraryInfo)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QLibraryInfo `
    ///
    pub fn Delete(self: QLibraryInfo) void {
        qtc.QLibraryInfo_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlibraryinfo.html#public-types)
pub const enums = struct {
    pub const LibraryPath = enum(i32) {
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
