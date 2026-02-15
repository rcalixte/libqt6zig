const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qsysinfo_enums = @import("libqsysinfo.zig").enums;
const quuid_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html)
pub const quuid = struct {
    /// New constructs a new QUuid object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QUuid `
    ///
    pub fn New(other: ?*anyopaque) QtC.QUuid {
        return qtc.QUuid_new(@ptrCast(other));
    }

    /// New2 constructs a new QUuid object and invalidates the source QUuid object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QUuid `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QUuid {
        return qtc.QUuid_new2(@ptrCast(other));
    }

    /// New3 constructs a new QUuid object.
    ///
    pub fn New3() QtC.QUuid {
        return qtc.QUuid_new3();
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
    pub fn New4(l: u32, w1: u16, w2: u16, b1: u8, b2: u8, b3: u8, b4: u8, b5: u8, b6: u8, b7: u8, b8: u8) QtC.QUuid {
        return qtc.QUuid_new4(@intCast(l), @intCast(w1), @intCast(w2), @intCast(b1), @intCast(b2), @intCast(b3), @intCast(b4), @intCast(b5), @intCast(b6), @intCast(b7), @intCast(b8));
    }

    /// New5 constructs a new QUuid object.
    ///
    /// ## Parameter(s):
    ///
    /// ` id128: QtC.QUuid__Id128Bytes `
    ///
    pub fn New5(id128: QtC.QUuid__Id128Bytes) QtC.QUuid {
        return qtc.QUuid_new5(@ptrCast(id128));
    }

    /// New6 constructs a new QUuid object.
    ///
    /// ## Parameter(s):
    ///
    /// ` stringVal: []const u8 `
    ///
    pub fn New6(stringVal: []const u8) QtC.QUuid {
        return qtc.QUuid_new6(stringVal.ptr);
    }

    /// New7 constructs a new QUuid object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QUuid `
    ///
    pub fn New7(param1: ?*anyopaque) QtC.QUuid {
        return qtc.QUuid_new7(@ptrCast(param1));
    }

    /// New8 constructs a new QUuid object.
    ///
    /// ## Parameter(s):
    ///
    /// ` id128: QtC.QUuid__Id128Bytes `
    ///
    /// ` order: qsysinfo_enums.Endian `
    ///
    pub fn New8(id128: QtC.QUuid__Id128Bytes, order: i32) QtC.QUuid {
        return qtc.QUuid_new8(@ptrCast(id128), @intCast(order));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QUuid `
    ///
    /// ` other: QtC.QUuid `
    ///
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QUuid_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QUuid `
    ///
    /// ` other: QtC.QUuid `
    ///
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QUuid_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` stringVal: []const u8 `
    ///
    pub fn FromString(stringVal: []const u8) QtC.QUuid {
        return qtc.QUuid_FromString(stringVal.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QUuid `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUuid_ToString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("quuid.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#toByteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QUuid `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToByteArray(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QUuid_ToByteArray(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("quuid.ToByteArray: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#toBytes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QUuid `
    ///
    pub fn ToBytes(self: ?*anyopaque) QtC.QUuid__Id128Bytes {
        return qtc.QUuid_ToBytes(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#toRfc4122)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QUuid `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToRfc4122(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QUuid_ToRfc4122(@ptrCast(self));
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
    pub fn FromBytes(bytes: ?*const anyopaque) QtC.QUuid {
        return qtc.QUuid_FromBytes(@ptrCast(bytes));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#fromRfc4122)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []u8 `
    ///
    pub fn FromRfc4122(param1: []u8) QtC.QUuid {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return qtc.QUuid_FromRfc4122(param1_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QUuid `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QUuid_IsNull(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#createUuid)
    ///
    pub fn CreateUuid() QtC.QUuid {
        return qtc.QUuid_CreateUuid();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#createUuidV5)
    ///
    /// ## Parameter(s):
    ///
    /// ` ns: QtC.QUuid `
    ///
    /// ` baseData: []u8 `
    ///
    pub fn CreateUuidV5(ns: QtC.QUuid, baseData: []u8) QtC.QUuid {
        const baseData_str = qtc.libqt_string{
            .len = baseData.len,
            .data = baseData.ptr,
        };
        return qtc.QUuid_CreateUuidV5(@ptrCast(ns), baseData_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#createUuidV3)
    ///
    /// ## Parameter(s):
    ///
    /// ` ns: QtC.QUuid `
    ///
    /// ` baseData: []u8 `
    ///
    pub fn CreateUuidV3(ns: QtC.QUuid, baseData: []u8) QtC.QUuid {
        const baseData_str = qtc.libqt_string{
            .len = baseData.len,
            .data = baseData.ptr,
        };
        return qtc.QUuid_CreateUuidV3(@ptrCast(ns), baseData_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#variant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QUuid `
    ///
    /// ## Returns:
    ///
    /// ` quuid_enums.Variant `
    ///
    pub fn Variant(self: ?*anyopaque) i32 {
        return qtc.QUuid_Variant(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#version)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QUuid `
    ///
    /// ## Returns:
    ///
    /// ` quuid_enums.Version `
    ///
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QUuid_Version(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#data1-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QUuid `
    ///
    pub fn Data1(self: ?*anyopaque) u32 {
        return qtc.QUuid_Data1(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#data1-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QUuid `
    ///
    /// ` data1: u32 `
    ///
    pub fn SetData1(self: ?*anyopaque, data1: u32) void {
        qtc.QUuid_SetData1(@ptrCast(self), @intCast(data1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#data2-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QUuid `
    ///
    pub fn Data2(self: ?*anyopaque) u16 {
        return qtc.QUuid_Data2(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#data2-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QUuid `
    ///
    /// ` data2: u16 `
    ///
    pub fn SetData2(self: ?*anyopaque, data2: u16) void {
        qtc.QUuid_SetData2(@ptrCast(self), @intCast(data2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#data3-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QUuid `
    ///
    pub fn Data3(self: ?*anyopaque) u16 {
        return qtc.QUuid_Data3(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#data3-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QUuid `
    ///
    /// ` data3: u16 `
    ///
    pub fn SetData3(self: ?*anyopaque, data3: u16) void {
        qtc.QUuid_SetData3(@ptrCast(self), @intCast(data3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QUuid `
    ///
    /// ` mode: quuid_enums.StringFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString1(self: ?*anyopaque, mode: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QUuid_ToString1(@ptrCast(self), @intCast(mode));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("quuid.ToString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#toByteArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QUuid `
    ///
    /// ` mode: quuid_enums.StringFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToByteArray1(self: ?*anyopaque, mode: i32, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QUuid_ToByteArray1(@ptrCast(self), @intCast(mode));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("quuid.ToByteArray1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#toBytes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QUuid `
    ///
    /// ` order: qsysinfo_enums.Endian `
    ///
    pub fn ToBytes1(self: ?*anyopaque, order: i32) QtC.QUuid__Id128Bytes {
        return qtc.QUuid_ToBytes1(@ptrCast(self), @intCast(order));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#fromBytes)
    ///
    /// ## Parameter(s):
    ///
    /// ` bytes: ?*const anyopaque `
    ///
    /// ` order: qsysinfo_enums.Endian `
    ///
    pub fn FromBytes2(bytes: ?*const anyopaque, order: i32) QtC.QUuid {
        return qtc.QUuid_FromBytes2(@ptrCast(bytes), @intCast(order));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid.html#dtor.QUuid)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QUuid `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QUuid_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/quuid-id128bytes.html)
pub const quuid__id128bytes = struct {
    /// New constructs a new QUuid::Id128Bytes object.
    ///
    pub fn New() QtC.QUuid__Id128Bytes {
        return qtc.QUuid__Id128Bytes_new();
    }

    /// New2 constructs a new QUuid::Id128Bytes object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QUuid__Id128Bytes `
    ///
    pub fn New2(param1: ?*anyopaque) QtC.QUuid__Id128Bytes {
        return qtc.QUuid__Id128Bytes_new2(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/quuid-id128bytes.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QUuid__Id128Bytes `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToQByteArrayView(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QUuid__Id128Bytes_ToQByteArrayView(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("quuid__id128bytes.ToQByteArrayView: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QUuid__Id128Bytes `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QUuid__Id128Bytes_Delete(@ptrCast(self));
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
