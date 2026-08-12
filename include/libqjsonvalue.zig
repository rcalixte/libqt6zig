const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QJsonArray = @import("libqt6").QJsonArray;
const QJsonObject = @import("libqt6").QJsonObject;
const QVariant = @import("libqt6").QVariant;
const qjsonvalue_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html)
pub const QJsonValue = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QJsonValue,

    pub const _is_QJsonValue = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QJsonValue object in C++ memory
    ///
    pub fn new() QJsonValue {
        return .{ .ptr = qtc.QJsonValue_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QJsonValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` b: bool `
    ///
    pub fn new2(b: bool) QJsonValue {
        return .{ .ptr = qtc.QJsonValue_new2(b) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QJsonValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` n: f64 `
    ///
    pub fn new3(n: f64) QJsonValue {
        return .{ .ptr = qtc.QJsonValue_new3(@bitCast(n)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QJsonValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` n: i32 `
    ///
    pub fn new4(n: i32) QJsonValue {
        return .{ .ptr = qtc.QJsonValue_new4(@bitCast(n)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QJsonValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` v: i64 `
    ///
    pub fn new5(v: i64) QJsonValue {
        return .{ .ptr = qtc.QJsonValue_new5(@bitCast(v)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QJsonValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` s: []const u8 `
    ///
    pub fn new6(s: []const u8) QJsonValue {
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        return .{ .ptr = qtc.QJsonValue_new6(s_str) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QJsonValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` s: []u8 `
    ///
    pub fn new7(s: []u8) QJsonValue {
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        return .{ .ptr = qtc.QJsonValue_new7(s_str) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new QJsonValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn new8(s: [:0]const u8) QJsonValue {
        const s_Cstring = s.ptr;
        return .{ .ptr = qtc.QJsonValue_new8(s_Cstring) };
    }

    /// ### DEPRECATED: Use `new9` instead
    ///
    pub const New9 = new9;

    /// Allocate a new QJsonValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` a: QJsonArray `
    ///
    pub fn new9(a: anytype) QJsonValue {
        comptime _ = @TypeOf(a)._is_QJsonArray;
        return .{ .ptr = qtc.QJsonValue_new9(@ptrCast(a.ptr)) };
    }

    /// ### DEPRECATED: Use `new10` instead
    ///
    pub const New10 = new10;

    /// Allocate a new QJsonValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` o: QJsonObject `
    ///
    pub fn new10(o: anytype) QJsonValue {
        comptime _ = @TypeOf(o)._is_QJsonObject;
        return .{ .ptr = qtc.QJsonValue_new10(@ptrCast(o.ptr)) };
    }

    /// ### DEPRECATED: Use `new11` instead
    ///
    pub const New11 = new11;

    /// Allocate a new QJsonValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QJsonValue `
    ///
    pub fn new11(other: anytype) QJsonValue {
        comptime _ = @TypeOf(other)._is_QJsonValue;
        return .{ .ptr = qtc.QJsonValue_new11(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new12` instead
    ///
    pub const New12 = new12;

    /// Allocate a new QJsonValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qjsonvalue_enums.Type `
    ///
    pub fn new12(param1: i32) QJsonValue {
        return .{ .ptr = qtc.QJsonValue_new12(@bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    /// ` other: QJsonValue `
    ///
    pub fn operatorAssign(self: QJsonValue, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QJsonValue;
        qtc.QJsonValue_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    /// ` other: QJsonValue `
    ///
    pub fn swap(self: QJsonValue, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QJsonValue;
        qtc.QJsonValue_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `fromVariant` instead
    ///
    pub const FromVariant = fromVariant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#fromVariant)
    ///
    /// ## Parameter(s):
    ///
    /// ` variant: QVariant `
    ///
    pub fn fromVariant(variant: anytype) QJsonValue {
        comptime _ = @TypeOf(variant)._is_QVariant;
        return .{ .ptr = qtc.QJsonValue_FromVariant(@ptrCast(variant.ptr)) };
    }

    /// ### DEPRECATED: Use `toVariant` instead
    ///
    pub const ToVariant = toVariant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toVariant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    pub fn toVariant(self: QJsonValue) QVariant {
        return .{ .ptr = qtc.QJsonValue_ToVariant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    /// ## Returns:
    ///
    /// ` qjsonvalue_enums.Type `
    ///
    pub fn type0(self: QJsonValue) i32 {
        return qtc.QJsonValue_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    pub fn isNull(self: QJsonValue) bool {
        return qtc.QJsonValue_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isBool` instead
    ///
    pub const IsBool = isBool;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#isBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    pub fn isBool(self: QJsonValue) bool {
        return qtc.QJsonValue_IsBool(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDouble` instead
    ///
    pub const IsDouble = isDouble;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#isDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    pub fn isDouble(self: QJsonValue) bool {
        return qtc.QJsonValue_IsDouble(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isString` instead
    ///
    pub const IsString = isString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#isString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    pub fn isString(self: QJsonValue) bool {
        return qtc.QJsonValue_IsString(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isArray` instead
    ///
    pub const IsArray = isArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#isArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    pub fn isArray(self: QJsonValue) bool {
        return qtc.QJsonValue_IsArray(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isObject` instead
    ///
    pub const IsObject = isObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#isObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    pub fn isObject(self: QJsonValue) bool {
        return qtc.QJsonValue_IsObject(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isUndefined` instead
    ///
    pub const IsUndefined = isUndefined;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#isUndefined)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    pub fn isUndefined(self: QJsonValue) bool {
        return qtc.QJsonValue_IsUndefined(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toBool` instead
    ///
    pub const ToBool = toBool;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    pub fn toBool(self: QJsonValue) bool {
        return qtc.QJsonValue_ToBool(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toInt` instead
    ///
    pub const ToInt = toInt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    pub fn toInt(self: QJsonValue) i32 {
        return qtc.QJsonValue_ToInt(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toInteger` instead
    ///
    pub const ToInteger = toInteger;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    pub fn toInteger(self: QJsonValue) i64 {
        return qtc.QJsonValue_ToInteger(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toDouble` instead
    ///
    pub const ToDouble = toDouble;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    pub fn toDouble(self: QJsonValue) f64 {
        return qtc.QJsonValue_ToDouble(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toString` instead
    ///
    pub const ToString = toString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toString(self: QJsonValue, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QJsonValue_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QJsonValue.toString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toString2` instead
    ///
    pub const ToString2 = toString2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` defaultValue: []const u8 `
    ///
    pub fn toString2(self: QJsonValue, allocator: std.mem.Allocator, defaultValue: []const u8) []const u8 {
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        var _str = qtc.QJsonValue_ToString2(@ptrCast(self.ptr), defaultValue_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QJsonValue.toString2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toArray` instead
    ///
    pub const ToArray = toArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    pub fn toArray(self: QJsonValue) QJsonArray {
        return .{ .ptr = qtc.QJsonValue_ToArray(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toArray2` instead
    ///
    pub const ToArray2 = toArray2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    /// ` defaultValue: QJsonArray `
    ///
    pub fn toArray2(self: QJsonValue, defaultValue: anytype) QJsonArray {
        comptime _ = @TypeOf(defaultValue)._is_QJsonArray;
        return .{ .ptr = qtc.QJsonValue_ToArray2(@ptrCast(self.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `toObject` instead
    ///
    pub const ToObject = toObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    pub fn toObject(self: QJsonValue) QJsonObject {
        return .{ .ptr = qtc.QJsonValue_ToObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toObject2` instead
    ///
    pub const ToObject2 = toObject2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    /// ` defaultValue: QJsonObject `
    ///
    pub fn toObject2(self: QJsonValue, defaultValue: anytype) QJsonObject {
        comptime _ = @TypeOf(defaultValue)._is_QJsonObject;
        return .{ .ptr = qtc.QJsonValue_ToObject2(@ptrCast(self.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorSubscript` instead
    ///
    pub const OperatorSubscript = operatorSubscript;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    /// ` key: []const u8 `
    ///
    pub fn operatorSubscript(self: QJsonValue, key: []const u8) QJsonValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QJsonValue_OperatorSubscript(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `operatorSubscript2` instead
    ///
    pub const OperatorSubscript2 = operatorSubscript2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    /// ` key: []const u8 `
    ///
    pub fn operatorSubscript2(self: QJsonValue, key: []const u8) QJsonValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QJsonValue_OperatorSubscript2(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `operatorSubscript3` instead
    ///
    pub const OperatorSubscript3 = operatorSubscript3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    /// ` key: []u8 `
    ///
    pub fn operatorSubscript3(self: QJsonValue, key: []u8) QJsonValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QJsonValue_OperatorSubscript3(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `operatorSubscript4` instead
    ///
    pub const OperatorSubscript4 = operatorSubscript4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    /// ` i: isize `
    ///
    pub fn operatorSubscript4(self: QJsonValue, i: isize) QJsonValue {
        return .{ .ptr = qtc.QJsonValue_OperatorSubscript4(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### DEPRECATED: Use `toBool1` instead
    ///
    pub const ToBool1 = toBool1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    /// ` defaultValue: bool `
    ///
    pub fn toBool1(self: QJsonValue, defaultValue: bool) bool {
        return qtc.QJsonValue_ToBool1(@ptrCast(self.ptr), defaultValue);
    }

    /// ### DEPRECATED: Use `toInt1` instead
    ///
    pub const ToInt1 = toInt1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    /// ` defaultValue: i32 `
    ///
    pub fn toInt1(self: QJsonValue, defaultValue: i32) i32 {
        return qtc.QJsonValue_ToInt1(@ptrCast(self.ptr), @bitCast(defaultValue));
    }

    /// ### DEPRECATED: Use `toInteger1` instead
    ///
    pub const ToInteger1 = toInteger1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    /// ` defaultValue: i64 `
    ///
    pub fn toInteger1(self: QJsonValue, defaultValue: i64) i64 {
        return qtc.QJsonValue_ToInteger1(@ptrCast(self.ptr), @bitCast(defaultValue));
    }

    /// ### DEPRECATED: Use `toDouble1` instead
    ///
    pub const ToDouble1 = toDouble1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    /// ` defaultValue: f64 `
    ///
    pub fn toDouble1(self: QJsonValue, defaultValue: f64) f64 {
        return qtc.QJsonValue_ToDouble1(@ptrCast(self.ptr), @bitCast(defaultValue));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#dtor.QJsonValue)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QJsonValue `
    ///
    pub fn delete(self: QJsonValue) void {
        qtc.QJsonValue_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html)
pub const QJsonValueConstRef = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QJsonValueConstRef,

    pub const _is_QJsonValueConstRef = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QJsonValueConstRef object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QJsonValueConstRef `
    ///
    pub fn new(other: anytype) QJsonValueConstRef {
        comptime _ = @TypeOf(other)._is_QJsonValueConstRef;
        return .{ .ptr = qtc.QJsonValueConstRef_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QJsonValueConstRef object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QJsonValueConstRef `
    ///
    pub fn new2(param1: anytype) QJsonValueConstRef {
        comptime _ = @TypeOf(param1)._is_QJsonValueConstRef;
        return .{ .ptr = qtc.QJsonValueConstRef_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `toQJsonValue` instead
    ///
    pub const ToQJsonValue = toQJsonValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueConstRef `
    ///
    pub fn toQJsonValue(self: QJsonValueConstRef) QJsonValue {
        return .{ .ptr = qtc.QJsonValueConstRef_ToQJsonValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toVariant` instead
    ///
    pub const ToVariant = toVariant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toVariant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueConstRef `
    ///
    pub fn toVariant(self: QJsonValueConstRef) QVariant {
        return .{ .ptr = qtc.QJsonValueConstRef_ToVariant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueConstRef `
    ///
    /// ## Returns:
    ///
    /// ` qjsonvalue_enums.Type `
    ///
    pub fn type0(self: QJsonValueConstRef) i32 {
        return qtc.QJsonValueConstRef_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueConstRef `
    ///
    pub fn isNull(self: QJsonValueConstRef) bool {
        return qtc.QJsonValueConstRef_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isBool` instead
    ///
    pub const IsBool = isBool;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueConstRef `
    ///
    pub fn isBool(self: QJsonValueConstRef) bool {
        return qtc.QJsonValueConstRef_IsBool(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDouble` instead
    ///
    pub const IsDouble = isDouble;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueConstRef `
    ///
    pub fn isDouble(self: QJsonValueConstRef) bool {
        return qtc.QJsonValueConstRef_IsDouble(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isString` instead
    ///
    pub const IsString = isString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueConstRef `
    ///
    pub fn isString(self: QJsonValueConstRef) bool {
        return qtc.QJsonValueConstRef_IsString(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isArray` instead
    ///
    pub const IsArray = isArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueConstRef `
    ///
    pub fn isArray(self: QJsonValueConstRef) bool {
        return qtc.QJsonValueConstRef_IsArray(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isObject` instead
    ///
    pub const IsObject = isObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueConstRef `
    ///
    pub fn isObject(self: QJsonValueConstRef) bool {
        return qtc.QJsonValueConstRef_IsObject(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isUndefined` instead
    ///
    pub const IsUndefined = isUndefined;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isUndefined)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueConstRef `
    ///
    pub fn isUndefined(self: QJsonValueConstRef) bool {
        return qtc.QJsonValueConstRef_IsUndefined(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toBool` instead
    ///
    pub const ToBool = toBool;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueConstRef `
    ///
    pub fn toBool(self: QJsonValueConstRef) bool {
        return qtc.QJsonValueConstRef_ToBool(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toInt` instead
    ///
    pub const ToInt = toInt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueConstRef `
    ///
    pub fn toInt(self: QJsonValueConstRef) i32 {
        return qtc.QJsonValueConstRef_ToInt(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toInteger` instead
    ///
    pub const ToInteger = toInteger;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueConstRef `
    ///
    pub fn toInteger(self: QJsonValueConstRef) i64 {
        return qtc.QJsonValueConstRef_ToInteger(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toDouble` instead
    ///
    pub const ToDouble = toDouble;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueConstRef `
    ///
    pub fn toDouble(self: QJsonValueConstRef) f64 {
        return qtc.QJsonValueConstRef_ToDouble(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toString` instead
    ///
    pub const ToString = toString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueConstRef `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toString(self: QJsonValueConstRef, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QJsonValueConstRef_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QJsonValueConstRef.toString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toArray` instead
    ///
    pub const ToArray = toArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueConstRef `
    ///
    pub fn toArray(self: QJsonValueConstRef) QJsonArray {
        return .{ .ptr = qtc.QJsonValueConstRef_ToArray(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toObject` instead
    ///
    pub const ToObject = toObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueConstRef `
    ///
    pub fn toObject(self: QJsonValueConstRef) QJsonObject {
        return .{ .ptr = qtc.QJsonValueConstRef_ToObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorSubscript` instead
    ///
    pub const OperatorSubscript = operatorSubscript;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueConstRef `
    ///
    /// ` key: []const u8 `
    ///
    pub fn operatorSubscript(self: QJsonValueConstRef, key: []const u8) QJsonValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QJsonValueConstRef_OperatorSubscript(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `operatorSubscript2` instead
    ///
    pub const OperatorSubscript2 = operatorSubscript2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueConstRef `
    ///
    /// ` key: []u8 `
    ///
    pub fn operatorSubscript2(self: QJsonValueConstRef, key: []u8) QJsonValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QJsonValueConstRef_OperatorSubscript2(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `operatorSubscript3` instead
    ///
    pub const OperatorSubscript3 = operatorSubscript3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueConstRef `
    ///
    /// ` i: isize `
    ///
    pub fn operatorSubscript3(self: QJsonValueConstRef, i: isize) QJsonValue {
        return .{ .ptr = qtc.QJsonValueConstRef_OperatorSubscript3(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### DEPRECATED: Use `toBool1` instead
    ///
    pub const ToBool1 = toBool1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueConstRef `
    ///
    /// ` defaultValue: bool `
    ///
    pub fn toBool1(self: QJsonValueConstRef, defaultValue: bool) bool {
        return qtc.QJsonValueConstRef_ToBool1(@ptrCast(self.ptr), defaultValue);
    }

    /// ### DEPRECATED: Use `toInt1` instead
    ///
    pub const ToInt1 = toInt1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueConstRef `
    ///
    /// ` defaultValue: i32 `
    ///
    pub fn toInt1(self: QJsonValueConstRef, defaultValue: i32) i32 {
        return qtc.QJsonValueConstRef_ToInt1(@ptrCast(self.ptr), @bitCast(defaultValue));
    }

    /// ### DEPRECATED: Use `toInteger1` instead
    ///
    pub const ToInteger1 = toInteger1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueConstRef `
    ///
    /// ` defaultValue: i64 `
    ///
    pub fn toInteger1(self: QJsonValueConstRef, defaultValue: i64) i64 {
        return qtc.QJsonValueConstRef_ToInteger1(@ptrCast(self.ptr), @bitCast(defaultValue));
    }

    /// ### DEPRECATED: Use `toDouble1` instead
    ///
    pub const ToDouble1 = toDouble1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueConstRef `
    ///
    /// ` defaultValue: f64 `
    ///
    pub fn toDouble1(self: QJsonValueConstRef, defaultValue: f64) f64 {
        return qtc.QJsonValueConstRef_ToDouble1(@ptrCast(self.ptr), @bitCast(defaultValue));
    }

    /// ### DEPRECATED: Use `toString1` instead
    ///
    pub const ToString1 = toString1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueConstRef `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` defaultValue: []const u8 `
    ///
    pub fn toString1(self: QJsonValueConstRef, allocator: std.mem.Allocator, defaultValue: []const u8) []const u8 {
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        var _str = qtc.QJsonValueConstRef_ToString1(@ptrCast(self.ptr), defaultValue_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QJsonValueConstRef.toString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#dtor.QJsonValueConstRef)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QJsonValueConstRef `
    ///
    pub fn delete(self: QJsonValueConstRef) void {
        qtc.QJsonValueConstRef_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html)
pub const QJsonValueRef = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QJsonValueRef,

    pub const _is_QJsonValueRef = {};
    pub const _is_QJsonValueConstRef = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QJsonValueRef object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QJsonValueRef `
    ///
    pub fn new(other: anytype) QJsonValueRef {
        comptime _ = @TypeOf(other)._is_QJsonValueRef;
        return .{ .ptr = qtc.QJsonValueRef_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QJsonValueRef object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QJsonValueRef `
    ///
    pub fn new2(param1: anytype) QJsonValueRef {
        comptime _ = @TypeOf(param1)._is_QJsonValueRef;
        return .{ .ptr = qtc.QJsonValueRef_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QJsonValueRef object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` array: QJsonArray `
    ///
    /// ` idx: isize `
    ///
    pub fn new3(array: anytype, idx: isize) QJsonValueRef {
        comptime _ = @TypeOf(array)._is_QJsonArray;
        return .{ .ptr = qtc.QJsonValueRef_new3(@ptrCast(array.ptr), @bitCast(idx)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QJsonValueRef object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` object: QJsonObject `
    ///
    /// ` idx: isize `
    ///
    pub fn new4(object: anytype, idx: isize) QJsonValueRef {
        comptime _ = @TypeOf(object)._is_QJsonObject;
        return .{ .ptr = qtc.QJsonValueRef_new4(@ptrCast(object.ptr), @bitCast(idx)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueRef `
    ///
    /// ` val: QJsonValue `
    ///
    pub fn operatorAssign(self: QJsonValueRef, val: anytype) void {
        comptime _ = @TypeOf(val)._is_QJsonValue;
        qtc.QJsonValueRef_OperatorAssign(@ptrCast(self.ptr), @ptrCast(val.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign2` instead
    ///
    pub const OperatorAssign2 = operatorAssign2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueRef `
    ///
    /// ` val: QJsonValueRef `
    ///
    pub fn operatorAssign2(self: QJsonValueRef, val: anytype) void {
        comptime _ = @TypeOf(val)._is_QJsonValueRef;
        qtc.QJsonValueRef_OperatorAssign2(@ptrCast(self.ptr), @ptrCast(val.ptr));
    }

    /// ### DEPRECATED: Use `toQJsonValue` instead
    ///
    pub const ToQJsonValue = toQJsonValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueRef `
    ///
    pub fn toQJsonValue(self: QJsonValueRef) QJsonValue {
        return .{ .ptr = qtc.QJsonValueRef_ToQJsonValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toVariant` instead
    ///
    pub const ToVariant = toVariant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toVariant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueRef `
    ///
    pub fn toVariant(self: QJsonValueRef) QVariant {
        return .{ .ptr = qtc.QJsonValueRef_ToVariant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueRef `
    ///
    /// ## Returns:
    ///
    /// ` qjsonvalue_enums.Type `
    ///
    pub fn type0(self: QJsonValueRef) i32 {
        return qtc.QJsonValueRef_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueRef `
    ///
    pub fn isNull(self: QJsonValueRef) bool {
        return qtc.QJsonValueRef_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isBool` instead
    ///
    pub const IsBool = isBool;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#isBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueRef `
    ///
    pub fn isBool(self: QJsonValueRef) bool {
        return qtc.QJsonValueRef_IsBool(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDouble` instead
    ///
    pub const IsDouble = isDouble;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#isDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueRef `
    ///
    pub fn isDouble(self: QJsonValueRef) bool {
        return qtc.QJsonValueRef_IsDouble(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isString` instead
    ///
    pub const IsString = isString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#isString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueRef `
    ///
    pub fn isString(self: QJsonValueRef) bool {
        return qtc.QJsonValueRef_IsString(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isArray` instead
    ///
    pub const IsArray = isArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#isArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueRef `
    ///
    pub fn isArray(self: QJsonValueRef) bool {
        return qtc.QJsonValueRef_IsArray(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isObject` instead
    ///
    pub const IsObject = isObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#isObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueRef `
    ///
    pub fn isObject(self: QJsonValueRef) bool {
        return qtc.QJsonValueRef_IsObject(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isUndefined` instead
    ///
    pub const IsUndefined = isUndefined;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#isUndefined)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueRef `
    ///
    pub fn isUndefined(self: QJsonValueRef) bool {
        return qtc.QJsonValueRef_IsUndefined(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toBool` instead
    ///
    pub const ToBool = toBool;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueRef `
    ///
    pub fn toBool(self: QJsonValueRef) bool {
        return qtc.QJsonValueRef_ToBool(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toInt` instead
    ///
    pub const ToInt = toInt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueRef `
    ///
    pub fn toInt(self: QJsonValueRef) i32 {
        return qtc.QJsonValueRef_ToInt(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toInteger` instead
    ///
    pub const ToInteger = toInteger;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueRef `
    ///
    pub fn toInteger(self: QJsonValueRef) i64 {
        return qtc.QJsonValueRef_ToInteger(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toDouble` instead
    ///
    pub const ToDouble = toDouble;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueRef `
    ///
    pub fn toDouble(self: QJsonValueRef) f64 {
        return qtc.QJsonValueRef_ToDouble(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toString` instead
    ///
    pub const ToString = toString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueRef `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toString(self: QJsonValueRef, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QJsonValueRef_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QJsonValueRef.toString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toArray` instead
    ///
    pub const ToArray = toArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueRef `
    ///
    pub fn toArray(self: QJsonValueRef) QJsonArray {
        return .{ .ptr = qtc.QJsonValueRef_ToArray(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toObject` instead
    ///
    pub const ToObject = toObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueRef `
    ///
    pub fn toObject(self: QJsonValueRef) QJsonObject {
        return .{ .ptr = qtc.QJsonValueRef_ToObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorSubscript` instead
    ///
    pub const OperatorSubscript = operatorSubscript;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueRef `
    ///
    /// ` key: []const u8 `
    ///
    pub fn operatorSubscript(self: QJsonValueRef, key: []const u8) QJsonValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QJsonValueRef_OperatorSubscript(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `operatorSubscript2` instead
    ///
    pub const OperatorSubscript2 = operatorSubscript2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueRef `
    ///
    /// ` key: []u8 `
    ///
    pub fn operatorSubscript2(self: QJsonValueRef, key: []u8) QJsonValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QJsonValueRef_OperatorSubscript2(@ptrCast(self.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `operatorSubscript3` instead
    ///
    pub const OperatorSubscript3 = operatorSubscript3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueRef `
    ///
    /// ` i: isize `
    ///
    pub fn operatorSubscript3(self: QJsonValueRef, i: isize) QJsonValue {
        return .{ .ptr = qtc.QJsonValueRef_OperatorSubscript3(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### DEPRECATED: Use `toBool1` instead
    ///
    pub const ToBool1 = toBool1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueRef `
    ///
    /// ` defaultValue: bool `
    ///
    pub fn toBool1(self: QJsonValueRef, defaultValue: bool) bool {
        return qtc.QJsonValueRef_ToBool1(@ptrCast(self.ptr), defaultValue);
    }

    /// ### DEPRECATED: Use `toInt1` instead
    ///
    pub const ToInt1 = toInt1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueRef `
    ///
    /// ` defaultValue: i32 `
    ///
    pub fn toInt1(self: QJsonValueRef, defaultValue: i32) i32 {
        return qtc.QJsonValueRef_ToInt1(@ptrCast(self.ptr), @bitCast(defaultValue));
    }

    /// ### DEPRECATED: Use `toInteger1` instead
    ///
    pub const ToInteger1 = toInteger1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueRef `
    ///
    /// ` defaultValue: i64 `
    ///
    pub fn toInteger1(self: QJsonValueRef, defaultValue: i64) i64 {
        return qtc.QJsonValueRef_ToInteger1(@ptrCast(self.ptr), @bitCast(defaultValue));
    }

    /// ### DEPRECATED: Use `toDouble1` instead
    ///
    pub const ToDouble1 = toDouble1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueRef `
    ///
    /// ` defaultValue: f64 `
    ///
    pub fn toDouble1(self: QJsonValueRef, defaultValue: f64) f64 {
        return qtc.QJsonValueRef_ToDouble1(@ptrCast(self.ptr), @bitCast(defaultValue));
    }

    /// ### DEPRECATED: Use `toString1` instead
    ///
    pub const ToString1 = toString1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueRef `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` defaultValue: []const u8 `
    ///
    pub fn toString1(self: QJsonValueRef, allocator: std.mem.Allocator, defaultValue: []const u8) []const u8 {
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        var _str = qtc.QJsonValueRef_ToString1(@ptrCast(self.ptr), defaultValue_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QJsonValueRef.toString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#dtor.QJsonValueRef)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QJsonValueRef `
    ///
    pub fn delete(self: QJsonValueRef) void {
        qtc.QJsonValueRef_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#public-types)
pub const enums = struct {
    pub const Type = enum(i32) {
        pub const Null: i32 = 0;
        pub const Bool: i32 = 1;
        pub const Double: i32 = 2;
        pub const String: i32 = 3;
        pub const Array: i32 = 4;
        pub const Object: i32 = 5;
        pub const Undefined: i32 = 128;
    };
};
