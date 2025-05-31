const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qlibraryinfo_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qlibraryinfo.html
pub const qlibraryinfo = struct {
    /// New constructs a new QLibraryInfo object.
    ///
    /// ``` other: QtC.QLibraryInfo ```
    pub fn New(other: ?*anyopaque) QtC.QLibraryInfo {
        return qtc.QLibraryInfo_new(@ptrCast(other));
    }

    /// New2 constructs a new QLibraryInfo object and invalidates the source QLibraryInfo object.
    ///
    /// ``` other: QtC.QLibraryInfo ```
    pub fn New2(other: ?*anyopaque) QtC.QLibraryInfo {
        return qtc.QLibraryInfo_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QLibraryInfo, other: QtC.QLibraryInfo ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QLibraryInfo_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QLibraryInfo, other: QtC.QLibraryInfo ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QLibraryInfo_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlibraryinfo.html#build)
    ///
    ///
    pub fn Build() []const u8 {
        const _ret = qtc.QLibraryInfo_Build();
        return std.mem.span(_ret);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlibraryinfo.html#isDebugBuild)
    ///
    ///
    pub fn IsDebugBuild() bool {
        return qtc.QLibraryInfo_IsDebugBuild();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlibraryinfo.html#version)
    ///
    ///
    pub fn Version() QtC.QVersionNumber {
        return qtc.QLibraryInfo_Version();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlibraryinfo.html#path)
    ///
    /// ``` p: qlibraryinfo_enums.LibraryPath, allocator: std.mem.Allocator ```
    pub fn Path(p: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLibraryInfo_Path(@intCast(p));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlibraryinfo.Path: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlibraryinfo.html#location)
    ///
    /// ``` location: qlibraryinfo_enums.LibraryPath, allocator: std.mem.Allocator ```
    pub fn Location(location: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLibraryInfo_Location(@intCast(location));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlibraryinfo.Location: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlibraryinfo.html#platformPluginArguments)
    ///
    /// ``` platformName: []const u8, allocator: std.mem.Allocator ```
    pub fn PlatformPluginArguments(platformName: []const u8, allocator: std.mem.Allocator) [][]const u8 {
        const platformName_str = qtc.struct_libqt_string{
            .len = platformName.len,
            .data = @constCast(platformName.ptr),
        };
        const _arr: qtc.struct_libqt_list = qtc.QLibraryInfo_PlatformPluginArguments(platformName_str);
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                qtc.libqt_string_free(@ptrCast(&_str[_i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qlibraryinfo.PlatformPluginArguments: Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qlibraryinfo.PlatformPluginArguments: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlibraryinfo.html#dtor.QLibraryInfo)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QLibraryInfo ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QLibraryInfo_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qlibraryinfo.html#types
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
