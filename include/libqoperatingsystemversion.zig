const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qoperatingsystemversion_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html)
pub const qoperatingsystemversionbase = struct {
    /// New constructs a new QOperatingSystemVersionBase object.
    ///
    /// ## Parameter(s):
    ///
    /// ` osType: qoperatingsystemversion_enums.OSType `
    ///
    /// ` vmajor: i32 `
    ///
    pub fn New(osType: i32, vmajor: i32) QtC.QOperatingSystemVersionBase {
        return qtc.QOperatingSystemVersionBase_new(@intCast(osType), @intCast(vmajor));
    }

    /// New2 constructs a new QOperatingSystemVersionBase object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QOperatingSystemVersionBase `
    ///
    pub fn New2(param1: ?*anyopaque) QtC.QOperatingSystemVersionBase {
        return qtc.QOperatingSystemVersionBase_new2(@ptrCast(param1));
    }

    /// New3 constructs a new QOperatingSystemVersionBase object.
    ///
    /// ## Parameter(s):
    ///
    /// ` osType: qoperatingsystemversion_enums.OSType `
    ///
    /// ` vmajor: i32 `
    ///
    /// ` vminor: i32 `
    ///
    pub fn New3(osType: i32, vmajor: i32, vminor: i32) QtC.QOperatingSystemVersionBase {
        return qtc.QOperatingSystemVersionBase_new3(@intCast(osType), @intCast(vmajor), @intCast(vminor));
    }

    /// New4 constructs a new QOperatingSystemVersionBase object.
    ///
    /// ## Parameter(s):
    ///
    /// ` osType: qoperatingsystemversion_enums.OSType `
    ///
    /// ` vmajor: i32 `
    ///
    /// ` vminor: i32 `
    ///
    /// ` vmicro: i32 `
    ///
    pub fn New4(osType: i32, vmajor: i32, vminor: i32, vmicro: i32) QtC.QOperatingSystemVersionBase {
        return qtc.QOperatingSystemVersionBase_new4(@intCast(osType), @intCast(vmajor), @intCast(vminor), @intCast(vmicro));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#current)
    ///
    pub fn Current() QtC.QOperatingSystemVersionBase {
        return qtc.QOperatingSystemVersionBase_Current();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` osversion: QtC.QOperatingSystemVersionBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(osversion: QtC.QOperatingSystemVersionBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QOperatingSystemVersionBase_Name(@ptrCast(osversion));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qoperatingsystemversionbase.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#currentType)
    ///
    /// ## Returns:
    ///
    /// ` qoperatingsystemversion_enums.OSType `
    ///
    pub fn CurrentType() i32 {
        return qtc.QOperatingSystemVersionBase_CurrentType();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#version)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOperatingSystemVersionBase `
    ///
    pub fn Version(self: ?*anyopaque) QtC.QVersionNumber {
        return qtc.QOperatingSystemVersionBase_Version(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#majorVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOperatingSystemVersionBase `
    ///
    pub fn MajorVersion(self: ?*anyopaque) i32 {
        return qtc.QOperatingSystemVersionBase_MajorVersion(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#minorVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOperatingSystemVersionBase `
    ///
    pub fn MinorVersion(self: ?*anyopaque) i32 {
        return qtc.QOperatingSystemVersionBase_MinorVersion(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#microVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOperatingSystemVersionBase `
    ///
    pub fn MicroVersion(self: ?*anyopaque) i32 {
        return qtc.QOperatingSystemVersionBase_MicroVersion(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#segmentCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOperatingSystemVersionBase `
    ///
    pub fn SegmentCount(self: ?*anyopaque) i32 {
        return qtc.QOperatingSystemVersionBase_SegmentCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOperatingSystemVersionBase `
    ///
    /// ## Returns:
    ///
    /// ` qoperatingsystemversion_enums.OSType `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QOperatingSystemVersionBase_Type(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOperatingSystemVersionBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name2(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QOperatingSystemVersionBase_Name2(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qoperatingsystemversionbase.Name2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#dtor.QOperatingSystemVersionBase)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QOperatingSystemVersionBase `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOperatingSystemVersionBase_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionunexported.html)
pub const qoperatingsystemversionunexported = struct {
    /// New constructs a new QOperatingSystemVersionUnexported object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QOperatingSystemVersionBase `
    ///
    pub fn New(other: QtC.QOperatingSystemVersionBase) QtC.QOperatingSystemVersionUnexported {
        return qtc.QOperatingSystemVersionUnexported_new(@ptrCast(other));
    }

    /// New2 constructs a new QOperatingSystemVersionUnexported object.
    ///
    pub fn New2() QtC.QOperatingSystemVersionUnexported {
        return qtc.QOperatingSystemVersionUnexported_new2();
    }

    /// New3 constructs a new QOperatingSystemVersionUnexported object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QOperatingSystemVersionUnexported `
    ///
    pub fn New3(param1: ?*anyopaque) QtC.QOperatingSystemVersionUnexported {
        return qtc.QOperatingSystemVersionUnexported_new3(@ptrCast(param1));
    }

    /// New4 constructs a new QOperatingSystemVersionUnexported object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qoperatingsystemversion_enums.OSType `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: i32 `
    ///
    /// ` param4: i32 `
    ///
    pub fn New4(param1: i32, param2: i32, param3: i32, param4: i32) QtC.QOperatingSystemVersionUnexported {
        return qtc.QOperatingSystemVersionUnexported_new4(@intCast(param1), @intCast(param2), @intCast(param3), @intCast(param4));
    }

    /// Inherited from QOperatingSystemVersionBase
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#current)
    ///
    pub fn Current() QtC.QOperatingSystemVersionBase {
        return qtc.QOperatingSystemVersionBase_Current();
    }

    /// Inherited from QOperatingSystemVersionBase
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` osversion: QtC.QOperatingSystemVersionBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(osversion: QtC.QOperatingSystemVersionBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QOperatingSystemVersionBase_Name(@ptrCast(osversion));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qoperatingsystemversionunexported.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QOperatingSystemVersionBase
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#currentType)
    ///
    /// ## Returns:
    ///
    /// ` qoperatingsystemversion_enums.OSType `
    ///
    pub fn CurrentType() i32 {
        return qtc.QOperatingSystemVersionBase_CurrentType();
    }

    /// Inherited from QOperatingSystemVersionBase
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#version)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOperatingSystemVersionUnexported `
    ///
    pub fn Version(self: ?*anyopaque) QtC.QVersionNumber {
        return qtc.QOperatingSystemVersionBase_Version(@ptrCast(self));
    }

    /// Inherited from QOperatingSystemVersionBase
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#majorVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOperatingSystemVersionUnexported `
    ///
    pub fn MajorVersion(self: ?*anyopaque) i32 {
        return qtc.QOperatingSystemVersionBase_MajorVersion(@ptrCast(self));
    }

    /// Inherited from QOperatingSystemVersionBase
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#minorVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOperatingSystemVersionUnexported `
    ///
    pub fn MinorVersion(self: ?*anyopaque) i32 {
        return qtc.QOperatingSystemVersionBase_MinorVersion(@ptrCast(self));
    }

    /// Inherited from QOperatingSystemVersionBase
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#microVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOperatingSystemVersionUnexported `
    ///
    pub fn MicroVersion(self: ?*anyopaque) i32 {
        return qtc.QOperatingSystemVersionBase_MicroVersion(@ptrCast(self));
    }

    /// Inherited from QOperatingSystemVersionBase
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#segmentCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOperatingSystemVersionUnexported `
    ///
    pub fn SegmentCount(self: ?*anyopaque) i32 {
        return qtc.QOperatingSystemVersionBase_SegmentCount(@ptrCast(self));
    }

    /// Inherited from QOperatingSystemVersionBase
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOperatingSystemVersionUnexported `
    ///
    /// ## Returns:
    ///
    /// ` qoperatingsystemversion_enums.OSType `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QOperatingSystemVersionBase_Type(@ptrCast(self));
    }

    /// Inherited from QOperatingSystemVersionBase
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOperatingSystemVersionUnexported `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name2(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QOperatingSystemVersionBase_Name2(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qoperatingsystemversionunexported.Name2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionunexported.html#dtor.QOperatingSystemVersionUnexported)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QOperatingSystemVersionUnexported `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOperatingSystemVersionUnexported_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversion.html)
pub const qoperatingsystemversion = struct {
    /// New constructs a new QOperatingSystemVersion object.
    ///
    /// ## Parameter(s):
    ///
    /// ` osversion: QtC.QOperatingSystemVersionBase `
    ///
    pub fn New(osversion: ?*anyopaque) QtC.QOperatingSystemVersion {
        return qtc.QOperatingSystemVersion_new(@ptrCast(osversion));
    }

    /// New2 constructs a new QOperatingSystemVersion object.
    ///
    /// ## Parameter(s):
    ///
    /// ` osType: qoperatingsystemversion_enums.OSType `
    ///
    /// ` vmajor: i32 `
    ///
    pub fn New2(osType: i32, vmajor: i32) QtC.QOperatingSystemVersion {
        return qtc.QOperatingSystemVersion_new2(@intCast(osType), @intCast(vmajor));
    }

    /// New3 constructs a new QOperatingSystemVersion object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QOperatingSystemVersion `
    ///
    pub fn New3(param1: ?*anyopaque) QtC.QOperatingSystemVersion {
        return qtc.QOperatingSystemVersion_new3(@ptrCast(param1));
    }

    /// New4 constructs a new QOperatingSystemVersion object.
    ///
    /// ## Parameter(s):
    ///
    /// ` osType: qoperatingsystemversion_enums.OSType `
    ///
    /// ` vmajor: i32 `
    ///
    /// ` vminor: i32 `
    ///
    pub fn New4(osType: i32, vmajor: i32, vminor: i32) QtC.QOperatingSystemVersion {
        return qtc.QOperatingSystemVersion_new4(@intCast(osType), @intCast(vmajor), @intCast(vminor));
    }

    /// New5 constructs a new QOperatingSystemVersion object.
    ///
    /// ## Parameter(s):
    ///
    /// ` osType: qoperatingsystemversion_enums.OSType `
    ///
    /// ` vmajor: i32 `
    ///
    /// ` vminor: i32 `
    ///
    /// ` vmicro: i32 `
    ///
    pub fn New5(osType: i32, vmajor: i32, vminor: i32, vmicro: i32) QtC.QOperatingSystemVersion {
        return qtc.QOperatingSystemVersion_new5(@intCast(osType), @intCast(vmajor), @intCast(vminor), @intCast(vmicro));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversion.html#currentType)
    ///
    /// ## Returns:
    ///
    /// ` qoperatingsystemversion_enums.OSType `
    ///
    pub fn CurrentType() i32 {
        return qtc.QOperatingSystemVersion_CurrentType();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversion.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOperatingSystemVersion `
    ///
    /// ## Returns:
    ///
    /// ` qoperatingsystemversion_enums.OSType `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QOperatingSystemVersion_Type(@ptrCast(self));
    }

    /// Inherited from QOperatingSystemVersionBase
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#current)
    ///
    pub fn Current() QtC.QOperatingSystemVersionBase {
        return qtc.QOperatingSystemVersionBase_Current();
    }

    /// Inherited from QOperatingSystemVersionBase
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` osversion: QtC.QOperatingSystemVersionBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(osversion: QtC.QOperatingSystemVersionBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QOperatingSystemVersionBase_Name(@ptrCast(osversion));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qoperatingsystemversion.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QOperatingSystemVersionBase
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#version)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOperatingSystemVersion `
    ///
    pub fn Version(self: ?*anyopaque) QtC.QVersionNumber {
        return qtc.QOperatingSystemVersionBase_Version(@ptrCast(self));
    }

    /// Inherited from QOperatingSystemVersionBase
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#majorVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOperatingSystemVersion `
    ///
    pub fn MajorVersion(self: ?*anyopaque) i32 {
        return qtc.QOperatingSystemVersionBase_MajorVersion(@ptrCast(self));
    }

    /// Inherited from QOperatingSystemVersionBase
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#minorVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOperatingSystemVersion `
    ///
    pub fn MinorVersion(self: ?*anyopaque) i32 {
        return qtc.QOperatingSystemVersionBase_MinorVersion(@ptrCast(self));
    }

    /// Inherited from QOperatingSystemVersionBase
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#microVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOperatingSystemVersion `
    ///
    pub fn MicroVersion(self: ?*anyopaque) i32 {
        return qtc.QOperatingSystemVersionBase_MicroVersion(@ptrCast(self));
    }

    /// Inherited from QOperatingSystemVersionBase
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#segmentCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOperatingSystemVersion `
    ///
    pub fn SegmentCount(self: ?*anyopaque) i32 {
        return qtc.QOperatingSystemVersionBase_SegmentCount(@ptrCast(self));
    }

    /// Inherited from QOperatingSystemVersionBase
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QOperatingSystemVersion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name2(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QOperatingSystemVersionBase_Name2(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qoperatingsystemversion.Name2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversion.html#dtor.QOperatingSystemVersion)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QOperatingSystemVersion `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOperatingSystemVersion_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversion.html#public-types)
pub const enums = struct {
    pub const QOperatingSystemVersionBase__OSType = enum(i32) {
        pub const Unknown: i32 = 0;
        pub const Windows: i32 = 1;
        pub const MacOS: i32 = 2;
        pub const IOS: i32 = 3;
        pub const TvOS: i32 = 4;
        pub const WatchOS: i32 = 5;
        pub const Android: i32 = 6;
        pub const VisionOS: i32 = 7;
    };

    pub const QOperatingSystemVersion__OSType = enum(i32) {
        pub const Unknown: i32 = 0;
        pub const Windows: i32 = 1;
        pub const MacOS: i32 = 2;
        pub const IOS: i32 = 3;
        pub const TvOS: i32 = 4;
        pub const WatchOS: i32 = 5;
        pub const Android: i32 = 6;
        pub const VisionOS: i32 = 7;
    };
};
