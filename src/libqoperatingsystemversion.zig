const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QVersionNumber = @import("libqt6").QVersionNumber;
const qoperatingsystemversion_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html)
pub const QOperatingSystemVersionBase = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOperatingSystemVersionBase,

    pub const _is_QOperatingSystemVersionBase = {};

    /// New constructs a new QOperatingSystemVersionBase object.
    ///
    /// ## Parameter(s):
    ///
    /// ` osType: qoperatingsystemversion_enums.OSType `
    ///
    /// ` vmajor: i32 `
    ///
    pub fn New(osType: i32, vmajor: i32) QOperatingSystemVersionBase {
        return .{ .ptr = qtc.QOperatingSystemVersionBase_new(@bitCast(osType), @bitCast(vmajor)) };
    }

    /// New2 constructs a new QOperatingSystemVersionBase object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QOperatingSystemVersionBase `
    ///
    pub fn New2(param1: anytype) QOperatingSystemVersionBase {
        comptime _ = @TypeOf(param1)._is_QOperatingSystemVersionBase;
        return .{ .ptr = qtc.QOperatingSystemVersionBase_new2(@ptrCast(param1.ptr)) };
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
    pub fn New3(osType: i32, vmajor: i32, vminor: i32) QOperatingSystemVersionBase {
        return .{ .ptr = qtc.QOperatingSystemVersionBase_new3(@bitCast(osType), @bitCast(vmajor), @bitCast(vminor)) };
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
    pub fn New4(osType: i32, vmajor: i32, vminor: i32, vmicro: i32) QOperatingSystemVersionBase {
        return .{ .ptr = qtc.QOperatingSystemVersionBase_new4(@bitCast(osType), @bitCast(vmajor), @bitCast(vminor), @bitCast(vmicro)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#current)
    ///
    pub fn Current() QOperatingSystemVersionBase {
        return .{ .ptr = qtc.QOperatingSystemVersionBase_Current() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` osversion: QOperatingSystemVersionBase `
    ///
    pub fn Name(allocator: std.mem.Allocator, osversion: anytype) []const u8 {
        comptime _ = @TypeOf(osversion)._is_QOperatingSystemVersionBase;
        var _str = qtc.QOperatingSystemVersionBase_Name(@ptrCast(osversion.ptr));
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
    /// ` self: QOperatingSystemVersionBase `
    ///
    pub fn Version(self: QOperatingSystemVersionBase) QVersionNumber {
        return .{ .ptr = qtc.QOperatingSystemVersionBase_Version(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#majorVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOperatingSystemVersionBase `
    ///
    pub fn MajorVersion(self: QOperatingSystemVersionBase) i32 {
        return qtc.QOperatingSystemVersionBase_MajorVersion(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#minorVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOperatingSystemVersionBase `
    ///
    pub fn MinorVersion(self: QOperatingSystemVersionBase) i32 {
        return qtc.QOperatingSystemVersionBase_MinorVersion(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#microVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOperatingSystemVersionBase `
    ///
    pub fn MicroVersion(self: QOperatingSystemVersionBase) i32 {
        return qtc.QOperatingSystemVersionBase_MicroVersion(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#segmentCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOperatingSystemVersionBase `
    ///
    pub fn SegmentCount(self: QOperatingSystemVersionBase) i32 {
        return qtc.QOperatingSystemVersionBase_SegmentCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOperatingSystemVersionBase `
    ///
    /// ## Returns:
    ///
    /// ` qoperatingsystemversion_enums.OSType `
    ///
    pub fn Type(self: QOperatingSystemVersionBase) i32 {
        return qtc.QOperatingSystemVersionBase_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOperatingSystemVersionBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name2(self: QOperatingSystemVersionBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QOperatingSystemVersionBase_Name2(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qoperatingsystemversionbase.Name2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#dtor.QOperatingSystemVersionBase)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QOperatingSystemVersionBase `
    ///
    pub fn Delete(self: QOperatingSystemVersionBase) void {
        qtc.QOperatingSystemVersionBase_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionunexported.html)
pub const QOperatingSystemVersionUnexported = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionunexported.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOperatingSystemVersionUnexported,

    pub const _is_QOperatingSystemVersionUnexported = {};
    pub const _is_QOperatingSystemVersionBase = {};

    /// New constructs a new QOperatingSystemVersionUnexported object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QOperatingSystemVersionBase `
    ///
    pub fn New(other: anytype) QOperatingSystemVersionUnexported {
        comptime _ = @TypeOf(other)._is_QOperatingSystemVersionBase;
        return .{ .ptr = qtc.QOperatingSystemVersionUnexported_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QOperatingSystemVersionUnexported object.
    ///
    pub fn New2() QOperatingSystemVersionUnexported {
        return .{ .ptr = qtc.QOperatingSystemVersionUnexported_new2() };
    }

    /// New3 constructs a new QOperatingSystemVersionUnexported object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QOperatingSystemVersionUnexported `
    ///
    pub fn New3(param1: anytype) QOperatingSystemVersionUnexported {
        comptime _ = @TypeOf(param1)._is_QOperatingSystemVersionUnexported;
        return .{ .ptr = qtc.QOperatingSystemVersionUnexported_new3(@ptrCast(param1.ptr)) };
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
    pub fn New4(param1: i32, param2: i32, param3: i32, param4: i32) QOperatingSystemVersionUnexported {
        return .{ .ptr = qtc.QOperatingSystemVersionUnexported_new4(@bitCast(param1), @bitCast(param2), @bitCast(param3), @bitCast(param4)) };
    }

    /// Inherited from QOperatingSystemVersionBase
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#current)
    ///
    pub fn Current() QOperatingSystemVersionBase {
        return .{ .ptr = qtc.QOperatingSystemVersionBase_Current() };
    }

    /// Inherited from QOperatingSystemVersionBase
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` osversion: QOperatingSystemVersionBase `
    ///
    pub fn Name(allocator: std.mem.Allocator, osversion: anytype) []const u8 {
        comptime _ = @TypeOf(osversion)._is_QOperatingSystemVersionBase;
        var _str = qtc.QOperatingSystemVersionBase_Name(@ptrCast(osversion.ptr));
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
    /// ` self: QOperatingSystemVersionUnexported `
    ///
    pub fn Version(self: QOperatingSystemVersionUnexported) QVersionNumber {
        return .{ .ptr = qtc.QOperatingSystemVersionBase_Version(@ptrCast(self.ptr)) };
    }

    /// Inherited from QOperatingSystemVersionBase
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#majorVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOperatingSystemVersionUnexported `
    ///
    pub fn MajorVersion(self: QOperatingSystemVersionUnexported) i32 {
        return qtc.QOperatingSystemVersionBase_MajorVersion(@ptrCast(self.ptr));
    }

    /// Inherited from QOperatingSystemVersionBase
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#minorVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOperatingSystemVersionUnexported `
    ///
    pub fn MinorVersion(self: QOperatingSystemVersionUnexported) i32 {
        return qtc.QOperatingSystemVersionBase_MinorVersion(@ptrCast(self.ptr));
    }

    /// Inherited from QOperatingSystemVersionBase
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#microVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOperatingSystemVersionUnexported `
    ///
    pub fn MicroVersion(self: QOperatingSystemVersionUnexported) i32 {
        return qtc.QOperatingSystemVersionBase_MicroVersion(@ptrCast(self.ptr));
    }

    /// Inherited from QOperatingSystemVersionBase
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#segmentCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOperatingSystemVersionUnexported `
    ///
    pub fn SegmentCount(self: QOperatingSystemVersionUnexported) i32 {
        return qtc.QOperatingSystemVersionBase_SegmentCount(@ptrCast(self.ptr));
    }

    /// Inherited from QOperatingSystemVersionBase
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOperatingSystemVersionUnexported `
    ///
    /// ## Returns:
    ///
    /// ` qoperatingsystemversion_enums.OSType `
    ///
    pub fn Type(self: QOperatingSystemVersionUnexported) i32 {
        return qtc.QOperatingSystemVersionBase_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QOperatingSystemVersionBase
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOperatingSystemVersionUnexported `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name2(self: QOperatingSystemVersionUnexported, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QOperatingSystemVersionBase_Name2(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qoperatingsystemversionunexported.Name2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionunexported.html#dtor.QOperatingSystemVersionUnexported)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QOperatingSystemVersionUnexported `
    ///
    pub fn Delete(self: QOperatingSystemVersionUnexported) void {
        qtc.QOperatingSystemVersionUnexported_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversion.html)
pub const QOperatingSystemVersion = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversion.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QOperatingSystemVersion,

    pub const _is_QOperatingSystemVersion = {};
    pub const _is_QOperatingSystemVersionUnexported = {};
    pub const _is_QOperatingSystemVersionBase = {};

    /// New constructs a new QOperatingSystemVersion object.
    ///
    /// ## Parameter(s):
    ///
    /// ` osversion: QOperatingSystemVersionBase `
    ///
    pub fn New(osversion: anytype) QOperatingSystemVersion {
        comptime _ = @TypeOf(osversion)._is_QOperatingSystemVersionBase;
        return .{ .ptr = qtc.QOperatingSystemVersion_new(@ptrCast(osversion.ptr)) };
    }

    /// New2 constructs a new QOperatingSystemVersion object.
    ///
    /// ## Parameter(s):
    ///
    /// ` osType: qoperatingsystemversion_enums.OSType `
    ///
    /// ` vmajor: i32 `
    ///
    pub fn New2(osType: i32, vmajor: i32) QOperatingSystemVersion {
        return .{ .ptr = qtc.QOperatingSystemVersion_new2(@bitCast(osType), @bitCast(vmajor)) };
    }

    /// New3 constructs a new QOperatingSystemVersion object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QOperatingSystemVersion `
    ///
    pub fn New3(param1: anytype) QOperatingSystemVersion {
        comptime _ = @TypeOf(param1)._is_QOperatingSystemVersion;
        return .{ .ptr = qtc.QOperatingSystemVersion_new3(@ptrCast(param1.ptr)) };
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
    pub fn New4(osType: i32, vmajor: i32, vminor: i32) QOperatingSystemVersion {
        return .{ .ptr = qtc.QOperatingSystemVersion_new4(@bitCast(osType), @bitCast(vmajor), @bitCast(vminor)) };
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
    pub fn New5(osType: i32, vmajor: i32, vminor: i32, vmicro: i32) QOperatingSystemVersion {
        return .{ .ptr = qtc.QOperatingSystemVersion_new5(@bitCast(osType), @bitCast(vmajor), @bitCast(vminor), @bitCast(vmicro)) };
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
    /// ` self: QOperatingSystemVersion `
    ///
    /// ## Returns:
    ///
    /// ` qoperatingsystemversion_enums.OSType `
    ///
    pub fn Type(self: QOperatingSystemVersion) i32 {
        return qtc.QOperatingSystemVersion_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QOperatingSystemVersionBase
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#current)
    ///
    pub fn Current() QOperatingSystemVersionBase {
        return .{ .ptr = qtc.QOperatingSystemVersionBase_Current() };
    }

    /// Inherited from QOperatingSystemVersionBase
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` osversion: QOperatingSystemVersionBase `
    ///
    pub fn Name(allocator: std.mem.Allocator, osversion: anytype) []const u8 {
        comptime _ = @TypeOf(osversion)._is_QOperatingSystemVersionBase;
        var _str = qtc.QOperatingSystemVersionBase_Name(@ptrCast(osversion.ptr));
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
    /// ` self: QOperatingSystemVersion `
    ///
    pub fn Version(self: QOperatingSystemVersion) QVersionNumber {
        return .{ .ptr = qtc.QOperatingSystemVersionBase_Version(@ptrCast(self.ptr)) };
    }

    /// Inherited from QOperatingSystemVersionBase
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#majorVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOperatingSystemVersion `
    ///
    pub fn MajorVersion(self: QOperatingSystemVersion) i32 {
        return qtc.QOperatingSystemVersionBase_MajorVersion(@ptrCast(self.ptr));
    }

    /// Inherited from QOperatingSystemVersionBase
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#minorVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOperatingSystemVersion `
    ///
    pub fn MinorVersion(self: QOperatingSystemVersion) i32 {
        return qtc.QOperatingSystemVersionBase_MinorVersion(@ptrCast(self.ptr));
    }

    /// Inherited from QOperatingSystemVersionBase
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#microVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOperatingSystemVersion `
    ///
    pub fn MicroVersion(self: QOperatingSystemVersion) i32 {
        return qtc.QOperatingSystemVersionBase_MicroVersion(@ptrCast(self.ptr));
    }

    /// Inherited from QOperatingSystemVersionBase
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#segmentCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOperatingSystemVersion `
    ///
    pub fn SegmentCount(self: QOperatingSystemVersion) i32 {
        return qtc.QOperatingSystemVersionBase_SegmentCount(@ptrCast(self.ptr));
    }

    /// Inherited from QOperatingSystemVersionBase
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOperatingSystemVersion `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name2(self: QOperatingSystemVersion, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QOperatingSystemVersionBase_Name2(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qoperatingsystemversion.Name2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversion.html#dtor.QOperatingSystemVersion)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QOperatingSystemVersion `
    ///
    pub fn Delete(self: QOperatingSystemVersion) void {
        qtc.QOperatingSystemVersion_Delete(@ptrCast(self.ptr));
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
