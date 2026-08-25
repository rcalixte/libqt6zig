const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qsysinfo_enums = @import("libqsysinfo.zig").enums;
const quuid_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html)
pub const QUuid = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QUuid,

    pub const _is_QUuid = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QUuid object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QUuid `
    ///
    pub fn new(other: anytype) QUuid {
        comptime _ = @TypeOf(other)._is_QUuid;
        return .{ .ptr = qtc.QUuid_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QUuid object and invalidate the source QUuid object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QUuid `
    ///
    pub fn new2(other: anytype) QUuid {
        comptime _ = @TypeOf(other)._is_QUuid;
        return .{ .ptr = qtc.QUuid_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QUuid object in C++ memory
    ///
    pub fn new3() QUuid {
        return .{ .ptr = qtc.QUuid_new3() };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QUuid object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` l: u32 `
    ///
    /// ` w1: u16 `
    ///
    /// ` w2: u16 `
    ///
    /// ` b1: u8 `
    ///
    /// ` b2: u8 `
    ///
    /// ` b3: u8 `
    ///
    /// ` b4: u8 `
    ///
    /// ` b5: u8 `
    ///
    /// ` b6: u8 `
    ///
    /// ` b7: u8 `
    ///
    /// ` b8: u8 `
    ///
    pub fn new4(l: u32, w1: u16, w2: u16, b1: u8, b2: u8, b3: u8, b4: u8, b5: u8, b6: u8, b7: u8, b8: u8) QUuid {
        return .{ .ptr = qtc.QUuid_new4(@bitCast(l), @bitCast(w1), @bitCast(w2), @bitCast(b1), @bitCast(b2), @bitCast(b3), @bitCast(b4), @bitCast(b5), @bitCast(b6), @bitCast(b7), @bitCast(b8)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QUuid object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` id128: QUuid__Id128Bytes `
    ///
    pub fn new5(id128: anytype) QUuid {
        comptime _ = @TypeOf(id128)._is_QUuid__Id128Bytes;
        return .{ .ptr = qtc.QUuid_new5(@ptrCast(id128.ptr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QUuid object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` string: []const u8 `
    ///
    pub fn new6(string: []const u8) QUuid {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        return .{ .ptr = qtc.QUuid_new6(string_str) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QUuid object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QUuid `
    ///
    pub fn new7(param1: anytype) QUuid {
        comptime _ = @TypeOf(param1)._is_QUuid;
        return .{ .ptr = qtc.QUuid_new7(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new QUuid object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` id128: QUuid__Id128Bytes `
    ///
    /// ` order: qsysinfo_enums.Endian `
    ///
    pub fn new8(id128: anytype, order: i32) QUuid {
        comptime _ = @TypeOf(id128)._is_QUuid__Id128Bytes;
        return .{ .ptr = qtc.QUuid_new8(@ptrCast(id128.ptr), @bitCast(order)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QUuid `
    ///
    /// ` other: QUuid `
    ///
    pub fn copyAssign(self: QUuid, other: QUuid) void {
        qtc.QUuid_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QUuid `
    ///
    /// ` other: QUuid `
    ///
    pub fn moveAssign(self: QUuid, other: QUuid) void {
        qtc.QUuid_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `fromString` instead
    ///
    pub const FromString = fromString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` string: []const u8 `
    ///
    pub fn fromString(string: []const u8) QUuid {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        return .{ .ptr = qtc.QUuid_FromString(string_str) };
    }

    /// ### DEPRECATED: Use `toString` instead
    ///
    pub const ToString = toString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUuid `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toString(self: QUuid, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUuid_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QUuid.toString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toByteArray` instead
    ///
    pub const ToByteArray = toByteArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#toByteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUuid `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toByteArray(self: QUuid, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QUuid_ToByteArray(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QUuid.toByteArray: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toBytes` instead
    ///
    pub const ToBytes = toBytes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#toBytes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUuid `
    ///
    pub fn toBytes(self: QUuid) QUuid__Id128Bytes {
        return .{ .ptr = qtc.QUuid_ToBytes(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toRfc4122` instead
    ///
    pub const ToRfc4122 = toRfc4122;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#toRfc4122)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUuid `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toRfc4122(self: QUuid, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QUuid_ToRfc4122(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QUuid.toRfc4122: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fromBytes` instead
    ///
    pub const FromBytes = fromBytes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#fromBytes)
    ///
    /// ## Parameter(s):
    ///
    /// ` bytes: ?*const anyopaque `
    ///
    pub fn fromBytes(bytes: ?*const anyopaque) QUuid {
        return .{ .ptr = qtc.QUuid_FromBytes(@ptrCast(bytes)) };
    }

    /// ### DEPRECATED: Use `fromRfc4122` instead
    ///
    pub const FromRfc4122 = fromRfc4122;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#fromRfc4122)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []u8 `
    ///
    pub fn fromRfc4122(param1: []u8) QUuid {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return .{ .ptr = qtc.QUuid_FromRfc4122(param1_str) };
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUuid `
    ///
    pub fn isNull(self: QUuid) bool {
        return qtc.QUuid_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `createUuid` instead
    ///
    pub const CreateUuid = createUuid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#createUuid)
    ///
    pub fn createUuid() QUuid {
        return .{ .ptr = qtc.QUuid_CreateUuid() };
    }

    /// ### DEPRECATED: Use `createUuidV5` instead
    ///
    pub const CreateUuidV5 = createUuidV5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#createUuidV5)
    ///
    /// ## Parameter(s):
    ///
    /// ` ns: QUuid `
    ///
    /// ` baseData: []u8 `
    ///
    pub fn createUuidV5(ns: anytype, baseData: []u8) QUuid {
        comptime _ = @TypeOf(ns)._is_QUuid;
        const baseData_str = qtc.libqt_string{
            .len = baseData.len,
            .data = baseData.ptr,
        };
        return .{ .ptr = qtc.QUuid_CreateUuidV5(@ptrCast(ns.ptr), baseData_str) };
    }

    /// ### DEPRECATED: Use `createUuidV3` instead
    ///
    pub const CreateUuidV3 = createUuidV3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#createUuidV3)
    ///
    /// ## Parameter(s):
    ///
    /// ` ns: QUuid `
    ///
    /// ` baseData: []u8 `
    ///
    pub fn createUuidV3(ns: anytype, baseData: []u8) QUuid {
        comptime _ = @TypeOf(ns)._is_QUuid;
        const baseData_str = qtc.libqt_string{
            .len = baseData.len,
            .data = baseData.ptr,
        };
        return .{ .ptr = qtc.QUuid_CreateUuidV3(@ptrCast(ns.ptr), baseData_str) };
    }

    /// ### DEPRECATED: Use `variant` instead
    ///
    pub const Variant = variant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#variant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUuid `
    ///
    /// ## Returns:
    ///
    /// ` quuid_enums.Variant `
    ///
    pub fn variant(self: QUuid) i32 {
        return qtc.QUuid_Variant(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#version)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUuid `
    ///
    /// ## Returns:
    ///
    /// ` quuid_enums.Version `
    ///
    pub fn version(self: QUuid) i32 {
        return qtc.QUuid_Version(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `data1` instead
    ///
    pub const Data1 = data1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#data1-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUuid `
    ///
    pub fn data1(self: QUuid) u32 {
        return qtc.QUuid_Data1(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setData1` instead
    ///
    pub const SetData1 = setData1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#data1-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUuid `
    ///
    /// ` _data1: u32 `
    ///
    pub fn setData1(self: QUuid, _data1: u32) void {
        qtc.QUuid_SetData1(@ptrCast(self.ptr), @bitCast(_data1));
    }

    /// ### DEPRECATED: Use `data2` instead
    ///
    pub const Data2 = data2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#data2-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUuid `
    ///
    pub fn data2(self: QUuid) u16 {
        return qtc.QUuid_Data2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setData2` instead
    ///
    pub const SetData2 = setData2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#data2-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUuid `
    ///
    /// ` _data2: u16 `
    ///
    pub fn setData2(self: QUuid, _data2: u16) void {
        qtc.QUuid_SetData2(@ptrCast(self.ptr), @bitCast(_data2));
    }

    /// ### DEPRECATED: Use `data3` instead
    ///
    pub const Data3 = data3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#data3-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUuid `
    ///
    pub fn data3(self: QUuid) u16 {
        return qtc.QUuid_Data3(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setData3` instead
    ///
    pub const SetData3 = setData3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#data3-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUuid `
    ///
    /// ` _data3: u16 `
    ///
    pub fn setData3(self: QUuid, _data3: u16) void {
        qtc.QUuid_SetData3(@ptrCast(self.ptr), @bitCast(_data3));
    }

    /// ### DEPRECATED: Use `toString1` instead
    ///
    pub const ToString1 = toString1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUuid `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mode: quuid_enums.StringFormat `
    ///
    pub fn toString1(self: QUuid, allocator: std.mem.Allocator, mode: i32) []const u8 {
        var _str = qtc.QUuid_ToString1(@ptrCast(self.ptr), @bitCast(mode));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QUuid.toString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toByteArray1` instead
    ///
    pub const ToByteArray1 = toByteArray1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#toByteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUuid `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` mode: quuid_enums.StringFormat `
    ///
    pub fn toByteArray1(self: QUuid, allocator: std.mem.Allocator, mode: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QUuid_ToByteArray1(@ptrCast(self.ptr), @bitCast(mode));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QUuid.toByteArray1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toBytes1` instead
    ///
    pub const ToBytes1 = toBytes1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#toBytes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUuid `
    ///
    /// ` order: qsysinfo_enums.Endian `
    ///
    pub fn toBytes1(self: QUuid, order: i32) QUuid__Id128Bytes {
        return .{ .ptr = qtc.QUuid_ToBytes1(@ptrCast(self.ptr), @bitCast(order)) };
    }

    /// ### DEPRECATED: Use `fromBytes2` instead
    ///
    pub const FromBytes2 = fromBytes2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#fromBytes)
    ///
    /// ## Parameter(s):
    ///
    /// ` bytes: ?*const anyopaque `
    ///
    /// ` order: qsysinfo_enums.Endian `
    ///
    pub fn fromBytes2(bytes: ?*const anyopaque, order: i32) QUuid {
        return .{ .ptr = qtc.QUuid_FromBytes2(@ptrCast(bytes), @bitCast(order)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#dtor.QUuid)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QUuid `
    ///
    pub fn delete(self: QUuid) void {
        qtc.QUuid_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/quuid-id128bytes.html)
pub const QUuid__Id128Bytes = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid-id128bytes.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QUuid__Id128Bytes,

    pub const _is_QUuid__Id128Bytes = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QUuid::Id128Bytes object in C++ memory
    ///
    pub fn new() QUuid__Id128Bytes {
        return .{ .ptr = qtc.QUuid__Id128Bytes_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QUuid::Id128Bytes object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QUuid__Id128Bytes `
    ///
    pub fn new2(param1: anytype) QUuid__Id128Bytes {
        comptime _ = @TypeOf(param1)._is_QUuid__Id128Bytes;
        return .{ .ptr = qtc.QUuid__Id128Bytes_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `toQByteArrayView` instead
    ///
    pub const ToQByteArrayView = toQByteArrayView;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid-id128bytes.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUuid__Id128Bytes `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toQByteArrayView(self: QUuid__Id128Bytes, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QUuid__Id128Bytes_ToQByteArrayView(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QUuid__Id128Bytes.toQByteArrayView: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QUuid__Id128Bytes `
    ///
    pub fn delete(self: QUuid__Id128Bytes) void {
        qtc.QUuid__Id128Bytes_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#public-types)
pub const enums = struct {
    pub const Variant = enum {
        pub const VarUnknown: i32 = -1;
        pub const NCS: i32 = 0;
        pub const DCE: i32 = 2;
        pub const Microsoft: i32 = 6;
        pub const Reserved: i32 = 7;
    };

    pub const Version = enum {
        pub const VerUnknown: i32 = -1;
        pub const Time: i32 = 1;
        pub const EmbeddedPOSIX: i32 = 2;
        pub const Md5: i32 = 3;
        pub const Name: i32 = 3;
        pub const Random: i32 = 4;
        pub const Sha1: i32 = 5;
    };

    pub const StringFormat = enum {
        pub const WithBraces: i32 = 0;
        pub const WithoutBraces: i32 = 1;
        pub const Id128: i32 = 3;
    };
};
