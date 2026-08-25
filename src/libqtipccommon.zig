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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QNativeIpcKey object in C++ memory
    ///
    pub fn new() QNativeIpcKey {
        return .{ .ptr = qtc.QNativeIpcKey_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QNativeIpcKey object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qtipccommon_enums.Type `
    ///
    pub fn new2(typeVal: u16) QNativeIpcKey {
        return .{ .ptr = qtc.QNativeIpcKey_new2(@bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QNativeIpcKey object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` k: []const u8 `
    ///
    pub fn new3(k: []const u8) QNativeIpcKey {
        const k_str = qtc.libqt_string{
            .len = k.len,
            .data = k.ptr,
        };
        return .{ .ptr = qtc.QNativeIpcKey_new3(k_str) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QNativeIpcKey object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QNativeIpcKey `
    ///
    pub fn new4(other: anytype) QNativeIpcKey {
        comptime _ = @TypeOf(other)._is_QNativeIpcKey;
        return .{ .ptr = qtc.QNativeIpcKey_new4(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QNativeIpcKey object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` k: []const u8 `
    ///
    /// ` typeVal: qtipccommon_enums.Type `
    ///
    pub fn new5(k: []const u8, typeVal: u16) QNativeIpcKey {
        const k_str = qtc.libqt_string{
            .len = k.len,
            .data = k.ptr,
        };
        return .{ .ptr = qtc.QNativeIpcKey_new5(k_str, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `legacyDefaultTypeForOs` instead
    ///
    pub const LegacyDefaultTypeForOs = legacyDefaultTypeForOs;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeipckey.html#legacyDefaultTypeForOs)
    ///
    /// ## Returns:
    ///
    /// ` qtipccommon_enums.Type `
    ///
    pub fn legacyDefaultTypeForOs() u16 {
        return qtc.QNativeIpcKey_LegacyDefaultTypeForOs();
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeipckey.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeIpcKey `
    ///
    /// ` other: QNativeIpcKey `
    ///
    pub fn operatorAssign(self: QNativeIpcKey, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QNativeIpcKey;
        qtc.QNativeIpcKey_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeipckey.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeIpcKey `
    ///
    /// ` other: QNativeIpcKey `
    ///
    pub fn swap(self: QNativeIpcKey, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QNativeIpcKey;
        qtc.QNativeIpcKey_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeipckey.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeIpcKey `
    ///
    pub fn isEmpty(self: QNativeIpcKey) bool {
        return qtc.QNativeIpcKey_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeipckey.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeIpcKey `
    ///
    pub fn isValid(self: QNativeIpcKey) bool {
        return qtc.QNativeIpcKey_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QNativeIpcKey) u16 {
        return qtc.QNativeIpcKey_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeipckey.html#setType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeIpcKey `
    ///
    /// ` typeVal: qtipccommon_enums.Type `
    ///
    pub fn setType(self: QNativeIpcKey, typeVal: u16) void {
        qtc.QNativeIpcKey_SetType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `nativeKey` instead
    ///
    pub const NativeKey = nativeKey;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeipckey.html#nativeKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeIpcKey `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn nativeKey(self: QNativeIpcKey, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QNativeIpcKey_NativeKey(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QNativeIpcKey.nativeKey: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setNativeKey` instead
    ///
    pub const SetNativeKey = setNativeKey;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeipckey.html#setNativeKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeIpcKey `
    ///
    /// ` newKey: []const u8 `
    ///
    pub fn setNativeKey(self: QNativeIpcKey, newKey: []const u8) void {
        const newKey_str = qtc.libqt_string{
            .len = newKey.len,
            .data = newKey.ptr,
        };
        qtc.QNativeIpcKey_SetNativeKey(@ptrCast(self.ptr), newKey_str);
    }

    /// ### DEPRECATED: Use `toString` instead
    ///
    pub const ToString = toString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeipckey.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNativeIpcKey `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toString(self: QNativeIpcKey, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QNativeIpcKey_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QNativeIpcKey.toString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fromString` instead
    ///
    pub const FromString = fromString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeipckey.html#fromString)
    ///
    /// ## Parameter(s):
    ///
    /// ` string: []const u8 `
    ///
    pub fn fromString(string: []const u8) QNativeIpcKey {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        return .{ .ptr = qtc.QNativeIpcKey_FromString(string_str) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnativeipckey.html#dtor.QNativeIpcKey)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QNativeIpcKey `
    ///
    pub fn delete(self: QNativeIpcKey) void {
        qtc.QNativeIpcKey_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtipccommon.html#public-types)
pub const enums = struct {
    pub const Type = enum {
        pub const SystemV: u16 = 81;
        pub const PosixRealtime: u16 = 256;
        pub const Windows: u16 = 257;
    };
};
