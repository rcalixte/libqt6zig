const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qoperatingsystemversion_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qoperatingsystemversionbase.html
pub const qoperatingsystemversionbase = struct {
    /// New constructs a new QOperatingSystemVersionBase object.
    ///
    /// ``` osType: qoperatingsystemversion_enums.OSType, vmajor: i32 ```
    pub fn New(osType: i64, vmajor: i32) QtC.QOperatingSystemVersionBase {
        return qtc.QOperatingSystemVersionBase_new(@intCast(osType), @intCast(vmajor));
    }

    /// New2 constructs a new QOperatingSystemVersionBase object.
    ///
    /// ``` param1: QtC.QOperatingSystemVersionBase ```
    pub fn New2(param1: ?*anyopaque) QtC.QOperatingSystemVersionBase {
        return qtc.QOperatingSystemVersionBase_new2(@ptrCast(param1));
    }

    /// New3 constructs a new QOperatingSystemVersionBase object.
    ///
    /// ``` osType: qoperatingsystemversion_enums.OSType, vmajor: i32, vminor: i32 ```
    pub fn New3(osType: i64, vmajor: i32, vminor: i32) QtC.QOperatingSystemVersionBase {
        return qtc.QOperatingSystemVersionBase_new3(@intCast(osType), @intCast(vmajor), @intCast(vminor));
    }

    /// New4 constructs a new QOperatingSystemVersionBase object.
    ///
    /// ``` osType: qoperatingsystemversion_enums.OSType, vmajor: i32, vminor: i32, vmicro: i32 ```
    pub fn New4(osType: i64, vmajor: i32, vminor: i32, vmicro: i32) QtC.QOperatingSystemVersionBase {
        return qtc.QOperatingSystemVersionBase_new4(@intCast(osType), @intCast(vmajor), @intCast(vminor), @intCast(vmicro));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#current)
    ///
    ///
    pub fn Current() QtC.QOperatingSystemVersionBase {
        return qtc.QOperatingSystemVersionBase_Current();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#name)
    ///
    /// ``` osversion: QtC.QOperatingSystemVersionBase, allocator: std.mem.Allocator ```
    pub fn Name(osversion: QtC.QOperatingSystemVersionBase, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QOperatingSystemVersionBase_Name(@ptrCast(osversion));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qoperatingsystemversionbase.Name: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#currentType)
    ///
    ///
    pub fn CurrentType() i64 {
        return qtc.QOperatingSystemVersionBase_CurrentType();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#version)
    ///
    /// ``` self: QtC.QOperatingSystemVersionBase ```
    pub fn Version(self: ?*anyopaque) QtC.QVersionNumber {
        return qtc.QOperatingSystemVersionBase_Version(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#majorVersion)
    ///
    /// ``` self: QtC.QOperatingSystemVersionBase ```
    pub fn MajorVersion(self: ?*anyopaque) i32 {
        return qtc.QOperatingSystemVersionBase_MajorVersion(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#minorVersion)
    ///
    /// ``` self: QtC.QOperatingSystemVersionBase ```
    pub fn MinorVersion(self: ?*anyopaque) i32 {
        return qtc.QOperatingSystemVersionBase_MinorVersion(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#microVersion)
    ///
    /// ``` self: QtC.QOperatingSystemVersionBase ```
    pub fn MicroVersion(self: ?*anyopaque) i32 {
        return qtc.QOperatingSystemVersionBase_MicroVersion(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#segmentCount)
    ///
    /// ``` self: QtC.QOperatingSystemVersionBase ```
    pub fn SegmentCount(self: ?*anyopaque) i32 {
        return qtc.QOperatingSystemVersionBase_SegmentCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#type)
    ///
    /// ``` self: QtC.QOperatingSystemVersionBase ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QOperatingSystemVersionBase_Type(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#name)
    ///
    /// ``` self: QtC.QOperatingSystemVersionBase, allocator: std.mem.Allocator ```
    pub fn Name2(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QOperatingSystemVersionBase_Name2(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qoperatingsystemversionbase.Name2: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#dtor.QOperatingSystemVersionBase)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QOperatingSystemVersionBase ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOperatingSystemVersionBase_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qoperatingsystemversion.html
pub const qoperatingsystemversion = struct {
    /// New constructs a new QOperatingSystemVersion object.
    ///
    /// ``` osversion: QtC.QOperatingSystemVersionBase ```
    pub fn New(osversion: ?*anyopaque) QtC.QOperatingSystemVersion {
        return qtc.QOperatingSystemVersion_new(@ptrCast(osversion));
    }

    /// New2 constructs a new QOperatingSystemVersion object.
    ///
    /// ``` osType: qoperatingsystemversion_enums.OSType, vmajor: i32 ```
    pub fn New2(osType: i64, vmajor: i32) QtC.QOperatingSystemVersion {
        return qtc.QOperatingSystemVersion_new2(@intCast(osType), @intCast(vmajor));
    }

    /// New3 constructs a new QOperatingSystemVersion object.
    ///
    /// ``` param1: QtC.QOperatingSystemVersion ```
    pub fn New3(param1: ?*anyopaque) QtC.QOperatingSystemVersion {
        return qtc.QOperatingSystemVersion_new3(@ptrCast(param1));
    }

    /// New4 constructs a new QOperatingSystemVersion object.
    ///
    /// ``` osType: qoperatingsystemversion_enums.OSType, vmajor: i32, vminor: i32 ```
    pub fn New4(osType: i64, vmajor: i32, vminor: i32) QtC.QOperatingSystemVersion {
        return qtc.QOperatingSystemVersion_new4(@intCast(osType), @intCast(vmajor), @intCast(vminor));
    }

    /// New5 constructs a new QOperatingSystemVersion object.
    ///
    /// ``` osType: qoperatingsystemversion_enums.OSType, vmajor: i32, vminor: i32, vmicro: i32 ```
    pub fn New5(osType: i64, vmajor: i32, vminor: i32, vmicro: i32) QtC.QOperatingSystemVersion {
        return qtc.QOperatingSystemVersion_new5(@intCast(osType), @intCast(vmajor), @intCast(vminor), @intCast(vmicro));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversion.html#current)
    ///
    ///
    pub fn Current() QtC.QOperatingSystemVersion {
        return qtc.QOperatingSystemVersion_Current();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversion.html#currentType)
    ///
    ///
    pub fn CurrentType() i64 {
        return qtc.QOperatingSystemVersion_CurrentType();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversion.html#version)
    ///
    /// ``` self: QtC.QOperatingSystemVersion ```
    pub fn Version(self: ?*anyopaque) QtC.QVersionNumber {
        return qtc.QOperatingSystemVersion_Version(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversion.html#majorVersion)
    ///
    /// ``` self: QtC.QOperatingSystemVersion ```
    pub fn MajorVersion(self: ?*anyopaque) i32 {
        return qtc.QOperatingSystemVersion_MajorVersion(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversion.html#minorVersion)
    ///
    /// ``` self: QtC.QOperatingSystemVersion ```
    pub fn MinorVersion(self: ?*anyopaque) i32 {
        return qtc.QOperatingSystemVersion_MinorVersion(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversion.html#microVersion)
    ///
    /// ``` self: QtC.QOperatingSystemVersion ```
    pub fn MicroVersion(self: ?*anyopaque) i32 {
        return qtc.QOperatingSystemVersion_MicroVersion(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversion.html#segmentCount)
    ///
    /// ``` self: QtC.QOperatingSystemVersion ```
    pub fn SegmentCount(self: ?*anyopaque) i32 {
        return qtc.QOperatingSystemVersion_SegmentCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversion.html#type)
    ///
    /// ``` self: QtC.QOperatingSystemVersion ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QOperatingSystemVersion_Type(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversion.html#name)
    ///
    /// ``` self: QtC.QOperatingSystemVersion, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QOperatingSystemVersion_Name(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qoperatingsystemversion.Name: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QOperatingSystemVersionBase
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#name)
    ///
    /// ``` self: QtC.QOperatingSystemVersion, allocator: std.mem.Allocator ```
    pub fn Name2(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QOperatingSystemVersionBase_Name2(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qoperatingsystemversion.Name2: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversion.html#dtor.QOperatingSystemVersion)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QOperatingSystemVersion ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOperatingSystemVersion_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qoperatingsystemversion.html#types
pub const enums = struct {
    pub const QOperatingSystemVersionBase__OSType = enum {
        pub const Unknown: i32 = 0;
        pub const Windows: i32 = 1;
        pub const MacOS: i32 = 2;
        pub const IOS: i32 = 3;
        pub const TvOS: i32 = 4;
        pub const WatchOS: i32 = 5;
        pub const Android: i32 = 6;
    };

    pub const QOperatingSystemVersion__OSType = enum {
        pub const Unknown: i32 = 0;
        pub const Windows: i32 = 1;
        pub const MacOS: i32 = 2;
        pub const IOS: i32 = 3;
        pub const TvOS: i32 = 4;
        pub const WatchOS: i32 = 5;
        pub const Android: i32 = 6;
    };
};
