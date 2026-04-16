const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qtipccommon_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeipckey.html)
pub const QNativeIpcKey = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeipckey.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QNativeIpcKey,

    pub const _is_QNativeIpcKey = {};

    /// New constructs a new QNativeIpcKey object.
    ///
    pub fn New() QNativeIpcKey {
        return .{ .ptr = qtc.QNativeIpcKey_new() };
    }

    /// New2 constructs a new QNativeIpcKey object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qtipccommon_enums.Type `
    ///
    pub fn New2(typeVal: u16) QNativeIpcKey {
        return .{ .ptr = qtc.QNativeIpcKey_new2(@bitCast(typeVal)) };
    }

    /// New3 constructs a new QNativeIpcKey object.
    ///
    /// ## Parameter(s):
    ///
    /// ` k: []const u8 `
    ///
    pub fn New3(k: []const u8) QNativeIpcKey {
        const k_str = qtc.libqt_string{
            .len = k.len,
            .data = k.ptr,
        };
        return .{ .ptr = qtc.QNativeIpcKey_new3(k_str) };
    }

    /// New4 constructs a new QNativeIpcKey object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QNativeIpcKey `
    ///
    pub fn New4(other: anytype) QNativeIpcKey {
        comptime _ = @TypeOf(other)._is_QNativeIpcKey;
        return .{ .ptr = qtc.QNativeIpcKey_new4(@ptrCast(other.ptr)) };
    }

    /// New5 constructs a new QNativeIpcKey object.
    ///
    /// ## Parameter(s):
    ///
    /// ` k: []const u8 `
    ///
    /// ` typeVal: qtipccommon_enums.Type `
    ///
    pub fn New5(k: []const u8, typeVal: u16) QNativeIpcKey {
        const k_str = qtc.libqt_string{
            .len = k.len,
            .data = k.ptr,
        };
        return .{ .ptr = qtc.QNativeIpcKey_new5(k_str, @bitCast(typeVal)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeipckey.html#legacyDefaultTypeForOs)
    ///
    /// ## Returns:
    ///
    /// ` qtipccommon_enums.Type `
    ///
    pub fn LegacyDefaultTypeForOs() u16 {
        return qtc.QNativeIpcKey_LegacyDefaultTypeForOs();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeipckey.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeIpcKey `
    ///
    /// ` other: QNativeIpcKey `
    ///
    pub fn OperatorAssign(self: QNativeIpcKey, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QNativeIpcKey;
        qtc.QNativeIpcKey_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeipckey.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeIpcKey `
    ///
    /// ` other: QNativeIpcKey `
    ///
    pub fn Swap(self: QNativeIpcKey, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QNativeIpcKey;
        qtc.QNativeIpcKey_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeipckey.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeIpcKey `
    ///
    pub fn IsEmpty(self: QNativeIpcKey) bool {
        return qtc.QNativeIpcKey_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeipckey.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeIpcKey `
    ///
    pub fn IsValid(self: QNativeIpcKey) bool {
        return qtc.QNativeIpcKey_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeipckey.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeIpcKey `
    ///
    /// ## Returns:
    ///
    /// ` qtipccommon_enums.Type `
    ///
    pub fn Type(self: QNativeIpcKey) u16 {
        return qtc.QNativeIpcKey_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeipckey.html#setType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeIpcKey `
    ///
    /// ` typeVal: qtipccommon_enums.Type `
    ///
    pub fn SetType(self: QNativeIpcKey, typeVal: u16) void {
        qtc.QNativeIpcKey_SetType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeipckey.html#nativeKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeIpcKey `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NativeKey(self: QNativeIpcKey, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QNativeIpcKey_NativeKey(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnativeipckey.NativeKey: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeipckey.html#setNativeKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeIpcKey `
    ///
    /// ` newKey: []const u8 `
    ///
    pub fn SetNativeKey(self: QNativeIpcKey, newKey: []const u8) void {
        const newKey_str = qtc.libqt_string{
            .len = newKey.len,
            .data = newKey.ptr,
        };
        qtc.QNativeIpcKey_SetNativeKey(@ptrCast(self.ptr), newKey_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeipckey.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeIpcKey `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: QNativeIpcKey, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QNativeIpcKey_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnativeipckey.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeipckey.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` stringVal: []const u8 `
    ///
    pub fn FromString(stringVal: []const u8) QNativeIpcKey {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        return .{ .ptr = qtc.QNativeIpcKey_FromString(stringVal_str) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeipckey.html#dtor.QNativeIpcKey)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QNativeIpcKey `
    ///
    pub fn Delete(self: QNativeIpcKey) void {
        qtc.QNativeIpcKey_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtipccommon.html#public-types)
pub const enums = struct {
    pub const Type = enum(u16) {
        pub const SystemV: u16 = 81;
        pub const PosixRealtime: u16 = 256;
        pub const Windows: u16 = 257;
    };
};
