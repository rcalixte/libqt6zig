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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QOperatingSystemVersionBase object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` osType: qoperatingsystemversion_enums.OSType `
    ///
    /// ` vmajor: i32 `
    ///
    pub fn new(osType: i32, vmajor: i32) QOperatingSystemVersionBase {
        return .{ .ptr = qtc.QOperatingSystemVersionBase_new(@bitCast(osType), @bitCast(vmajor)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QOperatingSystemVersionBase object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QOperatingSystemVersionBase `
    ///
    pub fn new2(param1: anytype) QOperatingSystemVersionBase {
        comptime _ = @TypeOf(param1)._is_QOperatingSystemVersionBase;
        return .{ .ptr = qtc.QOperatingSystemVersionBase_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QOperatingSystemVersionBase object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` osType: qoperatingsystemversion_enums.OSType `
    ///
    /// ` vmajor: i32 `
    ///
    /// ` vminor: i32 `
    ///
    pub fn new3(osType: i32, vmajor: i32, vminor: i32) QOperatingSystemVersionBase {
        return .{ .ptr = qtc.QOperatingSystemVersionBase_new3(@bitCast(osType), @bitCast(vmajor), @bitCast(vminor)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QOperatingSystemVersionBase object in C++ memory
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
    pub fn new4(osType: i32, vmajor: i32, vminor: i32, vmicro: i32) QOperatingSystemVersionBase {
        return .{ .ptr = qtc.QOperatingSystemVersionBase_new4(@bitCast(osType), @bitCast(vmajor), @bitCast(vminor), @bitCast(vmicro)) };
    }

    /// ### DEPRECATED: Use `current` instead
    ///
    pub const Current = current;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#current)
    ///
    pub fn current() QOperatingSystemVersionBase {
        return .{ .ptr = qtc.QOperatingSystemVersionBase_Current() };
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` osversion: QOperatingSystemVersionBase `
    ///
    pub fn name(allocator: std.mem.Allocator, osversion: anytype) []const u8 {
        comptime _ = @TypeOf(osversion)._is_QOperatingSystemVersionBase;
        var _str = qtc.QOperatingSystemVersionBase_Name(@ptrCast(osversion.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QOperatingSystemVersionBase.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `currentType` instead
    ///
    pub const CurrentType = currentType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#currentType)
    ///
    /// ## Returns:
    ///
    /// ` qoperatingsystemversion_enums.OSType `
    ///
    pub fn currentType() i32 {
        return qtc.QOperatingSystemVersionBase_CurrentType();
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#version)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOperatingSystemVersionBase `
    ///
    pub fn version(self: QOperatingSystemVersionBase) QVersionNumber {
        return .{ .ptr = qtc.QOperatingSystemVersionBase_Version(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `majorVersion` instead
    ///
    pub const MajorVersion = majorVersion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#majorVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOperatingSystemVersionBase `
    ///
    pub fn majorVersion(self: QOperatingSystemVersionBase) i32 {
        return qtc.QOperatingSystemVersionBase_MajorVersion(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `minorVersion` instead
    ///
    pub const MinorVersion = minorVersion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#minorVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOperatingSystemVersionBase `
    ///
    pub fn minorVersion(self: QOperatingSystemVersionBase) i32 {
        return qtc.QOperatingSystemVersionBase_MinorVersion(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `microVersion` instead
    ///
    pub const MicroVersion = microVersion;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#microVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOperatingSystemVersionBase `
    ///
    pub fn microVersion(self: QOperatingSystemVersionBase) i32 {
        return qtc.QOperatingSystemVersionBase_MicroVersion(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `segmentCount` instead
    ///
    pub const SegmentCount = segmentCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#segmentCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOperatingSystemVersionBase `
    ///
    pub fn segmentCount(self: QOperatingSystemVersionBase) i32 {
        return qtc.QOperatingSystemVersionBase_SegmentCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QOperatingSystemVersionBase) i32 {
        return qtc.QOperatingSystemVersionBase_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `name2` instead
    ///
    pub const Name2 = name2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOperatingSystemVersionBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name2(self: QOperatingSystemVersionBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QOperatingSystemVersionBase_Name2(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QOperatingSystemVersionBase.name2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#dtor.QOperatingSystemVersionBase)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QOperatingSystemVersionBase `
    ///
    pub fn delete(self: QOperatingSystemVersionBase) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QOperatingSystemVersionUnexported object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QOperatingSystemVersionBase `
    ///
    pub fn new(other: anytype) QOperatingSystemVersionUnexported {
        comptime _ = @TypeOf(other)._is_QOperatingSystemVersionBase;
        return .{ .ptr = qtc.QOperatingSystemVersionUnexported_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QOperatingSystemVersionUnexported object in C++ memory
    ///
    pub fn new2() QOperatingSystemVersionUnexported {
        return .{ .ptr = qtc.QOperatingSystemVersionUnexported_new2() };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QOperatingSystemVersionUnexported object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QOperatingSystemVersionUnexported `
    ///
    pub fn new3(param1: anytype) QOperatingSystemVersionUnexported {
        comptime _ = @TypeOf(param1)._is_QOperatingSystemVersionUnexported;
        return .{ .ptr = qtc.QOperatingSystemVersionUnexported_new3(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QOperatingSystemVersionUnexported object in C++ memory
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
    pub fn new4(param1: i32, param2: i32, param3: i32, param4: i32) QOperatingSystemVersionUnexported {
        return .{ .ptr = qtc.QOperatingSystemVersionUnexported_new4(@bitCast(param1), @bitCast(param2), @bitCast(param3), @bitCast(param4)) };
    }

    /// ### DEPRECATED: Use `current` instead
    ///
    pub const Current = current;

    /// Inherited from QOperatingSystemVersionBase
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#current)
    ///
    pub fn current() QOperatingSystemVersionBase {
        return .{ .ptr = qtc.QOperatingSystemVersionBase_Current() };
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

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
    pub fn name(allocator: std.mem.Allocator, osversion: anytype) []const u8 {
        comptime _ = @TypeOf(osversion)._is_QOperatingSystemVersionBase;
        var _str = qtc.QOperatingSystemVersionBase_Name(@ptrCast(osversion.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QOperatingSystemVersionUnexported.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `currentType` instead
    ///
    pub const CurrentType = currentType;

    /// Inherited from QOperatingSystemVersionBase
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#currentType)
    ///
    /// ## Returns:
    ///
    /// ` qoperatingsystemversion_enums.OSType `
    ///
    pub fn currentType() i32 {
        return qtc.QOperatingSystemVersionBase_CurrentType();
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// Inherited from QOperatingSystemVersionBase
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#version)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOperatingSystemVersionUnexported `
    ///
    pub fn version(self: QOperatingSystemVersionUnexported) QVersionNumber {
        return .{ .ptr = qtc.QOperatingSystemVersionBase_Version(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `majorVersion` instead
    ///
    pub const MajorVersion = majorVersion;

    /// Inherited from QOperatingSystemVersionBase
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#majorVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOperatingSystemVersionUnexported `
    ///
    pub fn majorVersion(self: QOperatingSystemVersionUnexported) i32 {
        return qtc.QOperatingSystemVersionBase_MajorVersion(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `minorVersion` instead
    ///
    pub const MinorVersion = minorVersion;

    /// Inherited from QOperatingSystemVersionBase
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#minorVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOperatingSystemVersionUnexported `
    ///
    pub fn minorVersion(self: QOperatingSystemVersionUnexported) i32 {
        return qtc.QOperatingSystemVersionBase_MinorVersion(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `microVersion` instead
    ///
    pub const MicroVersion = microVersion;

    /// Inherited from QOperatingSystemVersionBase
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#microVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOperatingSystemVersionUnexported `
    ///
    pub fn microVersion(self: QOperatingSystemVersionUnexported) i32 {
        return qtc.QOperatingSystemVersionBase_MicroVersion(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `segmentCount` instead
    ///
    pub const SegmentCount = segmentCount;

    /// Inherited from QOperatingSystemVersionBase
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#segmentCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOperatingSystemVersionUnexported `
    ///
    pub fn segmentCount(self: QOperatingSystemVersionUnexported) i32 {
        return qtc.QOperatingSystemVersionBase_SegmentCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QOperatingSystemVersionUnexported) i32 {
        return qtc.QOperatingSystemVersionBase_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `name2` instead
    ///
    pub const Name2 = name2;

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
    pub fn name2(self: QOperatingSystemVersionUnexported, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QOperatingSystemVersionBase_Name2(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QOperatingSystemVersionUnexported.name2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionunexported.html#dtor.QOperatingSystemVersionUnexported)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QOperatingSystemVersionUnexported `
    ///
    pub fn delete(self: QOperatingSystemVersionUnexported) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QOperatingSystemVersion object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` osversion: QOperatingSystemVersionBase `
    ///
    pub fn new(osversion: anytype) QOperatingSystemVersion {
        comptime _ = @TypeOf(osversion)._is_QOperatingSystemVersionBase;
        return .{ .ptr = qtc.QOperatingSystemVersion_new(@ptrCast(osversion.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QOperatingSystemVersion object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` osType: qoperatingsystemversion_enums.OSType `
    ///
    /// ` vmajor: i32 `
    ///
    pub fn new2(osType: i32, vmajor: i32) QOperatingSystemVersion {
        return .{ .ptr = qtc.QOperatingSystemVersion_new2(@bitCast(osType), @bitCast(vmajor)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QOperatingSystemVersion object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QOperatingSystemVersion `
    ///
    pub fn new3(param1: anytype) QOperatingSystemVersion {
        comptime _ = @TypeOf(param1)._is_QOperatingSystemVersion;
        return .{ .ptr = qtc.QOperatingSystemVersion_new3(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QOperatingSystemVersion object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` osType: qoperatingsystemversion_enums.OSType `
    ///
    /// ` vmajor: i32 `
    ///
    /// ` vminor: i32 `
    ///
    pub fn new4(osType: i32, vmajor: i32, vminor: i32) QOperatingSystemVersion {
        return .{ .ptr = qtc.QOperatingSystemVersion_new4(@bitCast(osType), @bitCast(vmajor), @bitCast(vminor)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QOperatingSystemVersion object in C++ memory
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
    pub fn new5(osType: i32, vmajor: i32, vminor: i32, vmicro: i32) QOperatingSystemVersion {
        return .{ .ptr = qtc.QOperatingSystemVersion_new5(@bitCast(osType), @bitCast(vmajor), @bitCast(vminor), @bitCast(vmicro)) };
    }

    /// ### DEPRECATED: Use `currentType` instead
    ///
    pub const CurrentType = currentType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversion.html#currentType)
    ///
    /// ## Returns:
    ///
    /// ` qoperatingsystemversion_enums.OSType `
    ///
    pub fn currentType() i32 {
        return qtc.QOperatingSystemVersion_CurrentType();
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QOperatingSystemVersion) i32 {
        return qtc.QOperatingSystemVersion_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `current` instead
    ///
    pub const Current = current;

    /// Inherited from QOperatingSystemVersionBase
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#current)
    ///
    pub fn current() QOperatingSystemVersionBase {
        return .{ .ptr = qtc.QOperatingSystemVersionBase_Current() };
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

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
    pub fn name(allocator: std.mem.Allocator, osversion: anytype) []const u8 {
        comptime _ = @TypeOf(osversion)._is_QOperatingSystemVersionBase;
        var _str = qtc.QOperatingSystemVersionBase_Name(@ptrCast(osversion.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QOperatingSystemVersion.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// Inherited from QOperatingSystemVersionBase
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#version)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOperatingSystemVersion `
    ///
    pub fn version(self: QOperatingSystemVersion) QVersionNumber {
        return .{ .ptr = qtc.QOperatingSystemVersionBase_Version(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `majorVersion` instead
    ///
    pub const MajorVersion = majorVersion;

    /// Inherited from QOperatingSystemVersionBase
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#majorVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOperatingSystemVersion `
    ///
    pub fn majorVersion(self: QOperatingSystemVersion) i32 {
        return qtc.QOperatingSystemVersionBase_MajorVersion(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `minorVersion` instead
    ///
    pub const MinorVersion = minorVersion;

    /// Inherited from QOperatingSystemVersionBase
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#minorVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOperatingSystemVersion `
    ///
    pub fn minorVersion(self: QOperatingSystemVersion) i32 {
        return qtc.QOperatingSystemVersionBase_MinorVersion(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `microVersion` instead
    ///
    pub const MicroVersion = microVersion;

    /// Inherited from QOperatingSystemVersionBase
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#microVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOperatingSystemVersion `
    ///
    pub fn microVersion(self: QOperatingSystemVersion) i32 {
        return qtc.QOperatingSystemVersionBase_MicroVersion(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `segmentCount` instead
    ///
    pub const SegmentCount = segmentCount;

    /// Inherited from QOperatingSystemVersionBase
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#segmentCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QOperatingSystemVersion `
    ///
    pub fn segmentCount(self: QOperatingSystemVersion) i32 {
        return qtc.QOperatingSystemVersionBase_SegmentCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `name2` instead
    ///
    pub const Name2 = name2;

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
    pub fn name2(self: QOperatingSystemVersion, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QOperatingSystemVersionBase_Name2(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QOperatingSystemVersion.name2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qoperatingsystemversion.html#dtor.QOperatingSystemVersion)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QOperatingSystemVersion `
    ///
    pub fn delete(self: QOperatingSystemVersion) void {
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
