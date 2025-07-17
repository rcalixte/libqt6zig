const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qtipccommon_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qnativeipckey.html
pub const qnativeipckey = struct {
    /// New constructs a new QNativeIpcKey object.
    ///
    ///
    pub fn New() QtC.QNativeIpcKey {
        return qtc.QNativeIpcKey_new();
    }

    /// New2 constructs a new QNativeIpcKey object.
    ///
    /// ``` typeVal: qtipccommon_enums.Type ```
    pub fn New2(typeVal: i64) QtC.QNativeIpcKey {
        return qtc.QNativeIpcKey_new2(@intCast(typeVal));
    }

    /// New3 constructs a new QNativeIpcKey object.
    ///
    /// ``` k: []const u8 ```
    pub fn New3(k: []const u8) QtC.QNativeIpcKey {
        const k_str = qtc.struct_libqt_string{
            .len = k.len,
            .data = k.ptr,
        };

        return qtc.QNativeIpcKey_new3(k_str);
    }

    /// New4 constructs a new QNativeIpcKey object.
    ///
    /// ``` other: QtC.QNativeIpcKey ```
    pub fn New4(other: ?*anyopaque) QtC.QNativeIpcKey {
        return qtc.QNativeIpcKey_new4(@ptrCast(other));
    }

    /// New5 constructs a new QNativeIpcKey object.
    ///
    /// ``` k: []const u8, typeVal: qtipccommon_enums.Type ```
    pub fn New5(k: []const u8, typeVal: i64) QtC.QNativeIpcKey {
        const k_str = qtc.struct_libqt_string{
            .len = k.len,
            .data = k.ptr,
        };

        return qtc.QNativeIpcKey_new5(k_str, @intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnativeipckey.html#legacyDefaultTypeForOs)
    ///
    ///
    pub fn LegacyDefaultTypeForOs() i64 {
        return qtc.QNativeIpcKey_LegacyDefaultTypeForOs();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnativeipckey.html#operator-eq)
    ///
    /// ``` self: QtC.QNativeIpcKey, other: QtC.QNativeIpcKey ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QNativeIpcKey_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnativeipckey.html#swap)
    ///
    /// ``` self: QtC.QNativeIpcKey, other: QtC.QNativeIpcKey ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QNativeIpcKey_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnativeipckey.html#isEmpty)
    ///
    /// ``` self: QtC.QNativeIpcKey ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QNativeIpcKey_IsEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnativeipckey.html#isValid)
    ///
    /// ``` self: QtC.QNativeIpcKey ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QNativeIpcKey_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnativeipckey.html#type)
    ///
    /// ``` self: QtC.QNativeIpcKey ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QNativeIpcKey_Type(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnativeipckey.html#setType)
    ///
    /// ``` self: QtC.QNativeIpcKey, typeVal: qtipccommon_enums.Type ```
    pub fn SetType(self: ?*anyopaque, typeVal: i64) void {
        qtc.QNativeIpcKey_SetType(@ptrCast(self), @intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnativeipckey.html#nativeKey)
    ///
    /// ``` self: QtC.QNativeIpcKey, allocator: std.mem.Allocator ```
    pub fn NativeKey(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QNativeIpcKey_NativeKey(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnativeipckey.NativeKey: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnativeipckey.html#setNativeKey)
    ///
    /// ``` self: QtC.QNativeIpcKey, newKey: []const u8 ```
    pub fn SetNativeKey(self: ?*anyopaque, newKey: []const u8) void {
        const newKey_str = qtc.struct_libqt_string{
            .len = newKey.len,
            .data = newKey.ptr,
        };
        qtc.QNativeIpcKey_SetNativeKey(@ptrCast(self), newKey_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnativeipckey.html#toString)
    ///
    /// ``` self: QtC.QNativeIpcKey, allocator: std.mem.Allocator ```
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QNativeIpcKey_ToString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnativeipckey.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnativeipckey.html#fromString)
    ///
    /// ``` stringVal: []const u8 ```
    pub fn FromString(stringVal: []const u8) QtC.QNativeIpcKey {
        const stringVal_str = qtc.struct_libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        return qtc.QNativeIpcKey_FromString(stringVal_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnativeipckey.html#dtor.QNativeIpcKey)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QNativeIpcKey ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QNativeIpcKey_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qtipccommon.html#types
pub const enums = struct {
    pub const Type = enum {
        pub const SystemV: u16 = 81;
        pub const PosixRealtime: u16 = 256;
        pub const Windows: u16 = 257;
    };
};
