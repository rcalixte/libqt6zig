const C = @import("qt6c");
const quuid_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/quuid.html
pub const quuid = struct {
    /// New constructs a new QUuid object.
    ///
    /// ``` other: ?*C.QUuid ```
    pub fn New(other: ?*anyopaque) ?*C.QUuid {
        return C.QUuid_new(@ptrCast(other));
    }

    /// New2 constructs a new QUuid object and invalidates the source QUuid object.
    ///
    /// ``` other: ?*C.QUuid ```
    pub fn New2(other: ?*anyopaque) ?*C.QUuid {
        return C.QUuid_new2(@ptrCast(other));
    }

    /// New3 constructs a new QUuid object.
    ///
    ///
    pub fn New3() ?*C.QUuid {
        return C.QUuid_new3();
    }

    /// New4 constructs a new QUuid object.
    ///
    /// ``` l: u32, w1: u16, w2: u16, b1: u8, b2: u8, b3: u8, b4: u8, b5: u8, b6: u8, b7: u8, b8: u8 ```
    pub fn New4(l: u32, w1: u16, w2: u16, b1: u8, b2: u8, b3: u8, b4: u8, b5: u8, b6: u8, b7: u8, b8: u8) ?*C.QUuid {
        return C.QUuid_new4(@intCast(l), @intCast(w1), @intCast(w2), @intCast(b1), @intCast(b2), @intCast(b3), @intCast(b4), @intCast(b5), @intCast(b6), @intCast(b7), @intCast(b8));
    }

    /// New5 constructs a new QUuid object.
    ///
    /// ``` stringVal: []const u8 ```
    pub fn New5(stringVal: []const u8) ?*C.QUuid {
        return C.QUuid_new5(@constCast(stringVal.ptr));
    }

    /// New6 constructs a new QUuid object.
    ///
    /// ``` param1: ?*C.QUuid ```
    pub fn New6(param1: ?*anyopaque) ?*C.QUuid {
        return C.QUuid_new6(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: ?*QUuid, other: ?*QUuid ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QUuid_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: ?*QUuid, other: ?*QUuid ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QUuid_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#fromString)
    ///
    /// ``` stringVal: []const u8 ```
    pub fn FromString(stringVal: []const u8) ?*C.QUuid {
        return C.QUuid_FromString(@constCast(stringVal.ptr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#toString)
    ///
    /// ``` self: ?*C.QUuid, allocator: std.mem.Allocator ```
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QUuid_ToString(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#toByteArray)
    ///
    /// ``` self: ?*C.QUuid, allocator: std.mem.Allocator ```
    pub fn ToByteArray(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: C.struct_libqt_string = C.QUuid_ToByteArray(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_bytearray));
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("Memory allocation failed");
        for (0.._bytearray.len) |_i| {
            _ret[_i] = _bytearray.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#toRfc4122)
    ///
    /// ``` self: ?*C.QUuid, allocator: std.mem.Allocator ```
    pub fn ToRfc4122(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: C.struct_libqt_string = C.QUuid_ToRfc4122(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_bytearray));
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("Memory allocation failed");
        for (0.._bytearray.len) |_i| {
            _ret[_i] = _bytearray.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#fromRfc4122)
    ///
    /// ``` param1: []const u8 ```
    pub fn FromRfc4122(param1: []const u8) ?*C.QUuid {
        return C.QUuid_FromRfc4122(@ptrCast(@constCast(&param1)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#isNull)
    ///
    /// ``` self: ?*C.QUuid ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return C.QUuid_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#operator==)
    ///
    /// ``` self: ?*C.QUuid, orig: ?*C.QUuid ```
    pub fn OperatorEqual(self: ?*anyopaque, orig: ?*anyopaque) bool {
        return C.QUuid_OperatorEqual(@ptrCast(self), @ptrCast(orig));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#operator!=)
    ///
    /// ``` self: ?*C.QUuid, orig: ?*C.QUuid ```
    pub fn OperatorNotEqual(self: ?*anyopaque, orig: ?*anyopaque) bool {
        return C.QUuid_OperatorNotEqual(@ptrCast(self), @ptrCast(orig));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#operator<)
    ///
    /// ``` self: ?*C.QUuid, other: ?*C.QUuid ```
    pub fn OperatorLesser(self: ?*anyopaque, other: ?*anyopaque) bool {
        return C.QUuid_OperatorLesser(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#operator>)
    ///
    /// ``` self: ?*C.QUuid, other: ?*C.QUuid ```
    pub fn OperatorGreater(self: ?*anyopaque, other: ?*anyopaque) bool {
        return C.QUuid_OperatorGreater(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#createUuid)
    ///
    ///
    pub fn CreateUuid() ?*C.QUuid {
        return C.QUuid_CreateUuid();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#createUuidV3)
    ///
    /// ``` ns: ?*C.QUuid, baseData: []u8 ```
    pub fn CreateUuidV3(ns: ?*anyopaque, baseData: []u8) ?*C.QUuid {
        const baseData_str = C.struct_libqt_string{
            .len = baseData.len,
            .data = @constCast(baseData.ptr),
        };
        return C.QUuid_CreateUuidV3(@ptrCast(ns), baseData_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#createUuidV5)
    ///
    /// ``` ns: ?*C.QUuid, baseData: []u8 ```
    pub fn CreateUuidV5(ns: ?*anyopaque, baseData: []u8) ?*C.QUuid {
        const baseData_str = C.struct_libqt_string{
            .len = baseData.len,
            .data = @constCast(baseData.ptr),
        };
        return C.QUuid_CreateUuidV5(@ptrCast(ns), baseData_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#createUuidV3)
    ///
    /// ``` ns: ?*C.QUuid, baseData: []const u8 ```
    pub fn CreateUuidV32(ns: ?*anyopaque, baseData: []const u8) ?*C.QUuid {
        const baseData_str = C.struct_libqt_string{
            .len = baseData.len,
            .data = @constCast(baseData.ptr),
        };
        return C.QUuid_CreateUuidV32(@ptrCast(ns), baseData_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#createUuidV5)
    ///
    /// ``` ns: ?*C.QUuid, baseData: []const u8 ```
    pub fn CreateUuidV52(ns: ?*anyopaque, baseData: []const u8) ?*C.QUuid {
        const baseData_str = C.struct_libqt_string{
            .len = baseData.len,
            .data = @constCast(baseData.ptr),
        };
        return C.QUuid_CreateUuidV52(@ptrCast(ns), baseData_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#variant)
    ///
    /// ``` self: ?*C.QUuid ```
    pub fn Variant(self: ?*anyopaque) i64 {
        return C.QUuid_Variant(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#version)
    ///
    /// ``` self: ?*C.QUuid ```
    pub fn Version(self: ?*anyopaque) i64 {
        return C.QUuid_Version(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#toString)
    ///
    /// ``` self: ?*C.QUuid, mode: quuid_enums.StringFormat, allocator: std.mem.Allocator ```
    pub fn ToString1(self: ?*anyopaque, mode: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QUuid_ToString1(@ptrCast(self), @intCast(mode));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/quuid.html#toByteArray)
    ///
    /// ``` self: ?*C.QUuid, mode: quuid_enums.StringFormat, allocator: std.mem.Allocator ```
    pub fn ToByteArray1(self: ?*anyopaque, mode: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: C.struct_libqt_string = C.QUuid_ToByteArray1(@ptrCast(self), @intCast(mode));
        defer C.libqt_string_free(@constCast(&_bytearray));
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("Memory allocation failed");
        for (0.._bytearray.len) |_i| {
            _ret[_i] = _bytearray.data[_i];
        }
        return _ret;
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QUuid ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QUuid_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/quuid.html#types
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
