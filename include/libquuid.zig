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

    /// New constructs a new QUuid object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QUuid `
    ///
    pub fn New(other: anytype) QUuid {
        comptime _ = @TypeOf(other)._is_QUuid;
        return .{ .ptr = qtc.QUuid_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QUuid object and invalidates the source QUuid object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QUuid `
    ///
    pub fn New2(other: anytype) QUuid {
        comptime _ = @TypeOf(other)._is_QUuid;
        return .{ .ptr = qtc.QUuid_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QUuid object.
    ///
    pub fn New3() QUuid {
        return .{ .ptr = qtc.QUuid_new3() };
    }

    /// New4 constructs a new QUuid object.
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
    pub fn New4(l: u32, w1: u16, w2: u16, b1: u8, b2: u8, b3: u8, b4: u8, b5: u8, b6: u8, b7: u8, b8: u8) QUuid {
        return .{ .ptr = qtc.QUuid_new4(@bitCast(l), @bitCast(w1), @bitCast(w2), @bitCast(b1), @bitCast(b2), @bitCast(b3), @bitCast(b4), @bitCast(b5), @bitCast(b6), @bitCast(b7), @bitCast(b8)) };
    }

    /// New5 constructs a new QUuid object.
    ///
    /// ## Parameter(s):
    ///
    /// ` id128: QUuid__Id128Bytes `
    ///
    pub fn New5(id128: anytype) QUuid {
        comptime _ = @TypeOf(id128)._is_QUuid__Id128Bytes;
        return .{ .ptr = qtc.QUuid_new5(@ptrCast(id128.ptr)) };
    }

    /// New6 constructs a new QUuid object.
    ///
    /// ## Parameter(s):
    ///
    /// ` stringVal: []const u8 `
    ///
    pub fn New6(stringVal: []const u8) QUuid {
        return .{ .ptr = qtc.QUuid_new6(stringVal.ptr) };
    }

    /// New7 constructs a new QUuid object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QUuid `
    ///
    pub fn New7(param1: anytype) QUuid {
        comptime _ = @TypeOf(param1)._is_QUuid;
        return .{ .ptr = qtc.QUuid_new7(@ptrCast(param1.ptr)) };
    }

    /// New8 constructs a new QUuid object.
    ///
    /// ## Parameter(s):
    ///
    /// ` id128: QUuid__Id128Bytes `
    ///
    /// ` order: qsysinfo_enums.Endian `
    ///
    pub fn New8(id128: anytype, order: i32) QUuid {
        comptime _ = @TypeOf(id128)._is_QUuid__Id128Bytes;
        return .{ .ptr = qtc.QUuid_new8(@ptrCast(id128.ptr), @bitCast(order)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QUuid `
    ///
    /// ` other: QUuid `
    ///
    pub fn CopyAssign(self: QUuid, other: QUuid) void {
        qtc.QUuid_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QUuid `
    ///
    /// ` other: QUuid `
    ///
    pub fn MoveAssign(self: QUuid, other: QUuid) void {
        qtc.QUuid_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` stringVal: []const u8 `
    ///
    pub fn FromString(stringVal: []const u8) QUuid {
        return .{ .ptr = qtc.QUuid_FromString(stringVal.ptr) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUuid `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: QUuid, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUuid_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("quuid.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#toByteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUuid `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToByteArray(self: QUuid, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QUuid_ToByteArray(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("quuid.ToByteArray: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#toBytes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUuid `
    ///
    pub fn ToBytes(self: QUuid) QUuid__Id128Bytes {
        return .{ .ptr = qtc.QUuid_ToBytes(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#toRfc4122)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUuid `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToRfc4122(self: QUuid, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QUuid_ToRfc4122(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("quuid.ToRfc4122: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#fromBytes)
    ///
    /// ## Parameter(s):
    ///
    /// ` bytes: ?*const anyopaque `
    ///
    pub fn FromBytes(bytes: ?*const anyopaque) QUuid {
        return .{ .ptr = qtc.QUuid_FromBytes(@ptrCast(bytes)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#fromRfc4122)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []u8 `
    ///
    pub fn FromRfc4122(param1: []u8) QUuid {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return .{ .ptr = qtc.QUuid_FromRfc4122(param1_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUuid `
    ///
    pub fn IsNull(self: QUuid) bool {
        return qtc.QUuid_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#createUuid)
    ///
    pub fn CreateUuid() QUuid {
        return .{ .ptr = qtc.QUuid_CreateUuid() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#createUuidV5)
    ///
    /// ## Parameter(s):
    ///
    /// ` ns: QUuid `
    ///
    /// ` baseData: []u8 `
    ///
    pub fn CreateUuidV5(ns: anytype, baseData: []u8) QUuid {
        comptime _ = @TypeOf(ns)._is_QUuid;
        const baseData_str = qtc.libqt_string{
            .len = baseData.len,
            .data = baseData.ptr,
        };
        return .{ .ptr = qtc.QUuid_CreateUuidV5(@ptrCast(ns.ptr), baseData_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#createUuidV3)
    ///
    /// ## Parameter(s):
    ///
    /// ` ns: QUuid `
    ///
    /// ` baseData: []u8 `
    ///
    pub fn CreateUuidV3(ns: anytype, baseData: []u8) QUuid {
        comptime _ = @TypeOf(ns)._is_QUuid;
        const baseData_str = qtc.libqt_string{
            .len = baseData.len,
            .data = baseData.ptr,
        };
        return .{ .ptr = qtc.QUuid_CreateUuidV3(@ptrCast(ns.ptr), baseData_str) };
    }

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
    pub fn Variant(self: QUuid) i32 {
        return qtc.QUuid_Variant(@ptrCast(self.ptr));
    }

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
    pub fn Version(self: QUuid) i32 {
        return qtc.QUuid_Version(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#data1-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUuid `
    ///
    pub fn Data1(self: QUuid) u32 {
        return qtc.QUuid_Data1(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#data1-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUuid `
    ///
    /// ` data1: u32 `
    ///
    pub fn SetData1(self: QUuid, data1: u32) void {
        qtc.QUuid_SetData1(@ptrCast(self.ptr), @bitCast(data1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#data2-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUuid `
    ///
    pub fn Data2(self: QUuid) u16 {
        return qtc.QUuid_Data2(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#data2-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUuid `
    ///
    /// ` data2: u16 `
    ///
    pub fn SetData2(self: QUuid, data2: u16) void {
        qtc.QUuid_SetData2(@ptrCast(self.ptr), @bitCast(data2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#data3-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUuid `
    ///
    pub fn Data3(self: QUuid) u16 {
        return qtc.QUuid_Data3(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#data3-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUuid `
    ///
    /// ` data3: u16 `
    ///
    pub fn SetData3(self: QUuid, data3: u16) void {
        qtc.QUuid_SetData3(@ptrCast(self.ptr), @bitCast(data3));
    }

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
    pub fn ToString1(self: QUuid, allocator: std.mem.Allocator, mode: i32) []const u8 {
        var _str = qtc.QUuid_ToString1(@ptrCast(self.ptr), @bitCast(mode));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("quuid.ToString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn ToByteArray1(self: QUuid, allocator: std.mem.Allocator, mode: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QUuid_ToByteArray1(@ptrCast(self.ptr), @bitCast(mode));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("quuid.ToByteArray1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#toBytes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUuid `
    ///
    /// ` order: qsysinfo_enums.Endian `
    ///
    pub fn ToBytes1(self: QUuid, order: i32) QUuid__Id128Bytes {
        return .{ .ptr = qtc.QUuid_ToBytes1(@ptrCast(self.ptr), @bitCast(order)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#fromBytes)
    ///
    /// ## Parameter(s):
    ///
    /// ` bytes: ?*const anyopaque `
    ///
    /// ` order: qsysinfo_enums.Endian `
    ///
    pub fn FromBytes2(bytes: ?*const anyopaque, order: i32) QUuid {
        return .{ .ptr = qtc.QUuid_FromBytes2(@ptrCast(bytes), @bitCast(order)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#dtor.QUuid)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QUuid `
    ///
    pub fn Delete(self: QUuid) void {
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

    /// New constructs a new QUuid::Id128Bytes object.
    ///
    pub fn New() QUuid__Id128Bytes {
        return .{ .ptr = qtc.QUuid__Id128Bytes_new() };
    }

    /// New2 constructs a new QUuid::Id128Bytes object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QUuid__Id128Bytes `
    ///
    pub fn New2(param1: anytype) QUuid__Id128Bytes {
        comptime _ = @TypeOf(param1)._is_QUuid__Id128Bytes;
        return .{ .ptr = qtc.QUuid__Id128Bytes_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid-id128bytes.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUuid__Id128Bytes `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToQByteArrayView(self: QUuid__Id128Bytes, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QUuid__Id128Bytes_ToQByteArrayView(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("quuid__id128bytes.ToQByteArrayView: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QUuid__Id128Bytes `
    ///
    pub fn Delete(self: QUuid__Id128Bytes) void {
        qtc.QUuid__Id128Bytes_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#public-types)
pub const enums = struct {
    pub const Variant = enum(i32) {
        pub const VarUnknown: i32 = -1;
        pub const NCS: i32 = 0;
        pub const DCE: i32 = 2;
        pub const Microsoft: i32 = 6;
        pub const Reserved: i32 = 7;
    };

    pub const Version = enum(i32) {
        pub const VerUnknown: i32 = -1;
        pub const Time: i32 = 1;
        pub const EmbeddedPOSIX: i32 = 2;
        pub const Md5: i32 = 3;
        pub const Name: i32 = 3;
        pub const Random: i32 = 4;
        pub const Sha1: i32 = 5;
    };

    pub const StringFormat = enum(i32) {
        pub const WithBraces: i32 = 0;
        pub const WithoutBraces: i32 = 1;
        pub const Id128: i32 = 3;
    };
};
