const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qjsonvalue_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qjsonvalue.html
pub const qjsonvalue = struct {
    /// New constructs a new QJsonValue object.
    ///
    ///
    pub fn New() QtC.QJsonValue {
        return qtc.QJsonValue_new();
    }

    /// New2 constructs a new QJsonValue object.
    ///
    /// ``` b: bool ```
    pub fn New2(b: bool) QtC.QJsonValue {
        return qtc.QJsonValue_new2(b);
    }

    /// New3 constructs a new QJsonValue object.
    ///
    /// ``` n: f64 ```
    pub fn New3(n: f64) QtC.QJsonValue {
        return qtc.QJsonValue_new3(@floatCast(n));
    }

    /// New4 constructs a new QJsonValue object.
    ///
    /// ``` n: i32 ```
    pub fn New4(n: i32) QtC.QJsonValue {
        return qtc.QJsonValue_new4(@intCast(n));
    }

    /// New5 constructs a new QJsonValue object.
    ///
    /// ``` v: i64 ```
    pub fn New5(v: i64) QtC.QJsonValue {
        return qtc.QJsonValue_new5(@intCast(v));
    }

    /// New6 constructs a new QJsonValue object.
    ///
    /// ``` s: []const u8 ```
    pub fn New6(s: []const u8) QtC.QJsonValue {
        const s_str = qtc.struct_libqt_string{
            .len = s.len,
            .data = @constCast(s.ptr),
        };

        return qtc.QJsonValue_new6(s_str);
    }

    /// New7 constructs a new QJsonValue object.
    ///
    /// ``` s: []const u8 ```
    pub fn New7(s: []const u8) QtC.QJsonValue {
        const s_Cstring = @constCast(s.ptr);

        return qtc.QJsonValue_new7(s_Cstring);
    }

    /// New8 constructs a new QJsonValue object.
    ///
    /// ``` a: QtC.QJsonArray ```
    pub fn New8(a: ?*anyopaque) QtC.QJsonValue {
        return qtc.QJsonValue_new8(@ptrCast(a));
    }

    /// New9 constructs a new QJsonValue object.
    ///
    /// ``` o: QtC.QJsonObject ```
    pub fn New9(o: ?*anyopaque) QtC.QJsonValue {
        return qtc.QJsonValue_new9(@ptrCast(o));
    }

    /// New10 constructs a new QJsonValue object.
    ///
    /// ``` other: QtC.QJsonValue ```
    pub fn New10(other: ?*anyopaque) QtC.QJsonValue {
        return qtc.QJsonValue_new10(@ptrCast(other));
    }

    /// New11 constructs a new QJsonValue object.
    ///
    /// ``` param1: qjsonvalue_enums.Type ```
    pub fn New11(param1: i64) QtC.QJsonValue {
        return qtc.QJsonValue_new11(@intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#operator=)
    ///
    /// ``` self: QtC.QJsonValue, other: QtC.QJsonValue ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QJsonValue_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#swap)
    ///
    /// ``` self: QtC.QJsonValue, other: QtC.QJsonValue ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QJsonValue_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#fromVariant)
    ///
    /// ``` variant: QtC.QVariant ```
    pub fn FromVariant(variant: ?*anyopaque) QtC.QJsonValue {
        return qtc.QJsonValue_FromVariant(@ptrCast(variant));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#toVariant)
    ///
    /// ``` self: QtC.QJsonValue ```
    pub fn ToVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QJsonValue_ToVariant(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#type)
    ///
    /// ``` self: QtC.QJsonValue ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QJsonValue_Type(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#isNull)
    ///
    /// ``` self: QtC.QJsonValue ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QJsonValue_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#isBool)
    ///
    /// ``` self: QtC.QJsonValue ```
    pub fn IsBool(self: ?*anyopaque) bool {
        return qtc.QJsonValue_IsBool(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#isDouble)
    ///
    /// ``` self: QtC.QJsonValue ```
    pub fn IsDouble(self: ?*anyopaque) bool {
        return qtc.QJsonValue_IsDouble(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#isString)
    ///
    /// ``` self: QtC.QJsonValue ```
    pub fn IsString(self: ?*anyopaque) bool {
        return qtc.QJsonValue_IsString(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#isArray)
    ///
    /// ``` self: QtC.QJsonValue ```
    pub fn IsArray(self: ?*anyopaque) bool {
        return qtc.QJsonValue_IsArray(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#isObject)
    ///
    /// ``` self: QtC.QJsonValue ```
    pub fn IsObject(self: ?*anyopaque) bool {
        return qtc.QJsonValue_IsObject(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#isUndefined)
    ///
    /// ``` self: QtC.QJsonValue ```
    pub fn IsUndefined(self: ?*anyopaque) bool {
        return qtc.QJsonValue_IsUndefined(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#toBool)
    ///
    /// ``` self: QtC.QJsonValue ```
    pub fn ToBool(self: ?*anyopaque) bool {
        return qtc.QJsonValue_ToBool(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#toInt)
    ///
    /// ``` self: QtC.QJsonValue ```
    pub fn ToInt(self: ?*anyopaque) i32 {
        return qtc.QJsonValue_ToInt(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#toInteger)
    ///
    /// ``` self: QtC.QJsonValue ```
    pub fn ToInteger(self: ?*anyopaque) i64 {
        return qtc.QJsonValue_ToInteger(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#toDouble)
    ///
    /// ``` self: QtC.QJsonValue ```
    pub fn ToDouble(self: ?*anyopaque) f64 {
        return qtc.QJsonValue_ToDouble(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#toString)
    ///
    /// ``` self: QtC.QJsonValue, allocator: std.mem.Allocator ```
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QJsonValue_ToString(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qjsonvalue.ToString: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#toString)
    ///
    /// ``` self: QtC.QJsonValue, defaultValue: []const u8, allocator: std.mem.Allocator ```
    pub fn ToStringWithDefaultValue(self: ?*anyopaque, defaultValue: []const u8, allocator: std.mem.Allocator) []const u8 {
        const defaultValue_str = qtc.struct_libqt_string{
            .len = defaultValue.len,
            .data = @constCast(defaultValue.ptr),
        };
        const _str = qtc.QJsonValue_ToStringWithDefaultValue(@ptrCast(self), defaultValue_str);
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qjsonvalue.ToStringWithDefaultValue: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#toArray)
    ///
    /// ``` self: QtC.QJsonValue ```
    pub fn ToArray(self: ?*anyopaque) QtC.QJsonArray {
        return qtc.QJsonValue_ToArray(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#toArray)
    ///
    /// ``` self: QtC.QJsonValue, defaultValue: QtC.QJsonArray ```
    pub fn ToArrayWithDefaultValue(self: ?*anyopaque, defaultValue: ?*anyopaque) QtC.QJsonArray {
        return qtc.QJsonValue_ToArrayWithDefaultValue(@ptrCast(self), @ptrCast(defaultValue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#toObject)
    ///
    /// ``` self: QtC.QJsonValue ```
    pub fn ToObject(self: ?*anyopaque) QtC.QJsonObject {
        return qtc.QJsonValue_ToObject(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#toObject)
    ///
    /// ``` self: QtC.QJsonValue, defaultValue: QtC.QJsonObject ```
    pub fn ToObjectWithDefaultValue(self: ?*anyopaque, defaultValue: ?*anyopaque) QtC.QJsonObject {
        return qtc.QJsonValue_ToObjectWithDefaultValue(@ptrCast(self), @ptrCast(defaultValue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#operator[])
    ///
    /// ``` self: QtC.QJsonValue, key: []const u8 ```
    pub fn OperatorSubscript(self: ?*anyopaque, key: []const u8) QtC.QJsonValue {
        const key_str = qtc.struct_libqt_string{
            .len = key.len,
            .data = @constCast(key.ptr),
        };
        return qtc.QJsonValue_OperatorSubscript(@ptrCast(self), key_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#operator[])
    ///
    /// ``` self: QtC.QJsonValue, i: i64 ```
    pub fn OperatorSubscriptWithQsizetype(self: ?*anyopaque, i: i64) QtC.QJsonValue {
        return qtc.QJsonValue_OperatorSubscriptWithQsizetype(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#operator==)
    ///
    /// ``` self: QtC.QJsonValue, other: QtC.QJsonValue ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QJsonValue_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#operator!=)
    ///
    /// ``` self: QtC.QJsonValue, other: QtC.QJsonValue ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QJsonValue_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#toBool)
    ///
    /// ``` self: QtC.QJsonValue, defaultValue: bool ```
    pub fn ToBool1(self: ?*anyopaque, defaultValue: bool) bool {
        return qtc.QJsonValue_ToBool1(@ptrCast(self), defaultValue);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#toInt)
    ///
    /// ``` self: QtC.QJsonValue, defaultValue: i32 ```
    pub fn ToInt1(self: ?*anyopaque, defaultValue: i32) i32 {
        return qtc.QJsonValue_ToInt1(@ptrCast(self), @intCast(defaultValue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#toInteger)
    ///
    /// ``` self: QtC.QJsonValue, defaultValue: i64 ```
    pub fn ToInteger1(self: ?*anyopaque, defaultValue: i64) i64 {
        return qtc.QJsonValue_ToInteger1(@ptrCast(self), @intCast(defaultValue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#toDouble)
    ///
    /// ``` self: QtC.QJsonValue, defaultValue: f64 ```
    pub fn ToDouble1(self: ?*anyopaque, defaultValue: f64) f64 {
        return qtc.QJsonValue_ToDouble1(@ptrCast(self), @floatCast(defaultValue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalue.html#dtor.QJsonValue)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QJsonValue ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QJsonValue_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qjsonvalueconstref.html
pub const qjsonvalueconstref = struct {
    /// New constructs a new QJsonValueConstRef object.
    ///
    /// ``` other: QtC.QJsonValueConstRef ```
    pub fn New(other: ?*anyopaque) QtC.QJsonValueConstRef {
        return qtc.QJsonValueConstRef_new(@ptrCast(other));
    }

    /// New2 constructs a new QJsonValueConstRef object.
    ///
    /// ``` param1: QtC.QJsonValueConstRef ```
    pub fn New2(param1: ?*anyopaque) QtC.QJsonValueConstRef {
        return qtc.QJsonValueConstRef_new2(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#operator QJsonValue)
    ///
    /// ``` self: QtC.QJsonValueConstRef ```
    pub fn ToQJsonValue(self: ?*anyopaque) QtC.QJsonValue {
        return qtc.QJsonValueConstRef_ToQJsonValue(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toVariant)
    ///
    /// ``` self: QtC.QJsonValueConstRef ```
    pub fn ToVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QJsonValueConstRef_ToVariant(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#type)
    ///
    /// ``` self: QtC.QJsonValueConstRef ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QJsonValueConstRef_Type(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isNull)
    ///
    /// ``` self: QtC.QJsonValueConstRef ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QJsonValueConstRef_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isBool)
    ///
    /// ``` self: QtC.QJsonValueConstRef ```
    pub fn IsBool(self: ?*anyopaque) bool {
        return qtc.QJsonValueConstRef_IsBool(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isDouble)
    ///
    /// ``` self: QtC.QJsonValueConstRef ```
    pub fn IsDouble(self: ?*anyopaque) bool {
        return qtc.QJsonValueConstRef_IsDouble(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isString)
    ///
    /// ``` self: QtC.QJsonValueConstRef ```
    pub fn IsString(self: ?*anyopaque) bool {
        return qtc.QJsonValueConstRef_IsString(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isArray)
    ///
    /// ``` self: QtC.QJsonValueConstRef ```
    pub fn IsArray(self: ?*anyopaque) bool {
        return qtc.QJsonValueConstRef_IsArray(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isObject)
    ///
    /// ``` self: QtC.QJsonValueConstRef ```
    pub fn IsObject(self: ?*anyopaque) bool {
        return qtc.QJsonValueConstRef_IsObject(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isUndefined)
    ///
    /// ``` self: QtC.QJsonValueConstRef ```
    pub fn IsUndefined(self: ?*anyopaque) bool {
        return qtc.QJsonValueConstRef_IsUndefined(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toBool)
    ///
    /// ``` self: QtC.QJsonValueConstRef ```
    pub fn ToBool(self: ?*anyopaque) bool {
        return qtc.QJsonValueConstRef_ToBool(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toInt)
    ///
    /// ``` self: QtC.QJsonValueConstRef ```
    pub fn ToInt(self: ?*anyopaque) i32 {
        return qtc.QJsonValueConstRef_ToInt(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toInteger)
    ///
    /// ``` self: QtC.QJsonValueConstRef ```
    pub fn ToInteger(self: ?*anyopaque) i64 {
        return qtc.QJsonValueConstRef_ToInteger(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toDouble)
    ///
    /// ``` self: QtC.QJsonValueConstRef ```
    pub fn ToDouble(self: ?*anyopaque) f64 {
        return qtc.QJsonValueConstRef_ToDouble(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toString)
    ///
    /// ``` self: QtC.QJsonValueConstRef, allocator: std.mem.Allocator ```
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QJsonValueConstRef_ToString(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qjsonvalueconstref.ToString: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toArray)
    ///
    /// ``` self: QtC.QJsonValueConstRef ```
    pub fn ToArray(self: ?*anyopaque) QtC.QJsonArray {
        return qtc.QJsonValueConstRef_ToArray(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toObject)
    ///
    /// ``` self: QtC.QJsonValueConstRef ```
    pub fn ToObject(self: ?*anyopaque) QtC.QJsonObject {
        return qtc.QJsonValueConstRef_ToObject(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#operator[])
    ///
    /// ``` self: QtC.QJsonValueConstRef, i: i64 ```
    pub fn OperatorSubscriptWithQsizetype(self: ?*anyopaque, i: i64) QtC.QJsonValue {
        return qtc.QJsonValueConstRef_OperatorSubscriptWithQsizetype(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#operator==)
    ///
    /// ``` self: QtC.QJsonValueConstRef, other: QtC.QJsonValue ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QJsonValueConstRef_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#operator!=)
    ///
    /// ``` self: QtC.QJsonValueConstRef, other: QtC.QJsonValue ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QJsonValueConstRef_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toBool)
    ///
    /// ``` self: QtC.QJsonValueConstRef, defaultValue: bool ```
    pub fn ToBool1(self: ?*anyopaque, defaultValue: bool) bool {
        return qtc.QJsonValueConstRef_ToBool1(@ptrCast(self), defaultValue);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toInt)
    ///
    /// ``` self: QtC.QJsonValueConstRef, defaultValue: i32 ```
    pub fn ToInt1(self: ?*anyopaque, defaultValue: i32) i32 {
        return qtc.QJsonValueConstRef_ToInt1(@ptrCast(self), @intCast(defaultValue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toInteger)
    ///
    /// ``` self: QtC.QJsonValueConstRef, defaultValue: i64 ```
    pub fn ToInteger1(self: ?*anyopaque, defaultValue: i64) i64 {
        return qtc.QJsonValueConstRef_ToInteger1(@ptrCast(self), @intCast(defaultValue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toDouble)
    ///
    /// ``` self: QtC.QJsonValueConstRef, defaultValue: f64 ```
    pub fn ToDouble1(self: ?*anyopaque, defaultValue: f64) f64 {
        return qtc.QJsonValueConstRef_ToDouble1(@ptrCast(self), @floatCast(defaultValue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toString)
    ///
    /// ``` self: QtC.QJsonValueConstRef, defaultValue: []const u8, allocator: std.mem.Allocator ```
    pub fn ToString1(self: ?*anyopaque, defaultValue: []const u8, allocator: std.mem.Allocator) []const u8 {
        const defaultValue_str = qtc.struct_libqt_string{
            .len = defaultValue.len,
            .data = @constCast(defaultValue.ptr),
        };
        const _str = qtc.QJsonValueConstRef_ToString1(@ptrCast(self), defaultValue_str);
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qjsonvalueconstref.ToString1: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueconstref.html#dtor.QJsonValueConstRef)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QJsonValueConstRef ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QJsonValueConstRef_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qjsonvalueref.html
pub const qjsonvalueref = struct {
    /// New constructs a new QJsonValueRef object.
    ///
    /// ``` other: QtC.QJsonValueRef ```
    pub fn New(other: ?*anyopaque) QtC.QJsonValueRef {
        return qtc.QJsonValueRef_new(@ptrCast(other));
    }

    /// New2 constructs a new QJsonValueRef object.
    ///
    /// ``` param1: QtC.QJsonValueRef ```
    pub fn New2(param1: ?*anyopaque) QtC.QJsonValueRef {
        return qtc.QJsonValueRef_new2(@ptrCast(param1));
    }

    /// New3 constructs a new QJsonValueRef object.
    ///
    /// ``` array: QtC.QJsonArray, idx: i64 ```
    pub fn New3(array: ?*anyopaque, idx: i64) QtC.QJsonValueRef {
        return qtc.QJsonValueRef_new3(@ptrCast(array), @intCast(idx));
    }

    /// New4 constructs a new QJsonValueRef object.
    ///
    /// ``` object: QtC.QJsonObject, idx: i64 ```
    pub fn New4(object: ?*anyopaque, idx: i64) QtC.QJsonValueRef {
        return qtc.QJsonValueRef_new4(@ptrCast(object), @intCast(idx));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#operator=)
    ///
    /// ``` self: QtC.QJsonValueRef, val: QtC.QJsonValue ```
    pub fn OperatorAssign(self: ?*anyopaque, val: ?*anyopaque) void {
        qtc.QJsonValueRef_OperatorAssign(@ptrCast(self), @ptrCast(val));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#operator=)
    ///
    /// ``` self: QtC.QJsonValueRef, val: QtC.QJsonValueRef ```
    pub fn OperatorAssignWithVal(self: ?*anyopaque, val: ?*anyopaque) void {
        qtc.QJsonValueRef_OperatorAssignWithVal(@ptrCast(self), @ptrCast(val));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#operator QJsonValue)
    ///
    /// ``` self: QtC.QJsonValueRef ```
    pub fn ToQJsonValue(self: ?*anyopaque) QtC.QJsonValue {
        return qtc.QJsonValueRef_ToQJsonValue(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#toVariant)
    ///
    /// ``` self: QtC.QJsonValueRef ```
    pub fn ToVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QJsonValueRef_ToVariant(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#type)
    ///
    /// ``` self: QtC.QJsonValueRef ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QJsonValueRef_Type(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#isNull)
    ///
    /// ``` self: QtC.QJsonValueRef ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QJsonValueRef_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#isBool)
    ///
    /// ``` self: QtC.QJsonValueRef ```
    pub fn IsBool(self: ?*anyopaque) bool {
        return qtc.QJsonValueRef_IsBool(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#isDouble)
    ///
    /// ``` self: QtC.QJsonValueRef ```
    pub fn IsDouble(self: ?*anyopaque) bool {
        return qtc.QJsonValueRef_IsDouble(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#isString)
    ///
    /// ``` self: QtC.QJsonValueRef ```
    pub fn IsString(self: ?*anyopaque) bool {
        return qtc.QJsonValueRef_IsString(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#isArray)
    ///
    /// ``` self: QtC.QJsonValueRef ```
    pub fn IsArray(self: ?*anyopaque) bool {
        return qtc.QJsonValueRef_IsArray(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#isObject)
    ///
    /// ``` self: QtC.QJsonValueRef ```
    pub fn IsObject(self: ?*anyopaque) bool {
        return qtc.QJsonValueRef_IsObject(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#isUndefined)
    ///
    /// ``` self: QtC.QJsonValueRef ```
    pub fn IsUndefined(self: ?*anyopaque) bool {
        return qtc.QJsonValueRef_IsUndefined(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#toBool)
    ///
    /// ``` self: QtC.QJsonValueRef ```
    pub fn ToBool(self: ?*anyopaque) bool {
        return qtc.QJsonValueRef_ToBool(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#toInt)
    ///
    /// ``` self: QtC.QJsonValueRef ```
    pub fn ToInt(self: ?*anyopaque) i32 {
        return qtc.QJsonValueRef_ToInt(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#toInteger)
    ///
    /// ``` self: QtC.QJsonValueRef ```
    pub fn ToInteger(self: ?*anyopaque) i64 {
        return qtc.QJsonValueRef_ToInteger(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#toDouble)
    ///
    /// ``` self: QtC.QJsonValueRef ```
    pub fn ToDouble(self: ?*anyopaque) f64 {
        return qtc.QJsonValueRef_ToDouble(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#toString)
    ///
    /// ``` self: QtC.QJsonValueRef, allocator: std.mem.Allocator ```
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QJsonValueRef_ToString(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qjsonvalueref.ToString: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#toArray)
    ///
    /// ``` self: QtC.QJsonValueRef ```
    pub fn ToArray(self: ?*anyopaque) QtC.QJsonArray {
        return qtc.QJsonValueRef_ToArray(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#toObject)
    ///
    /// ``` self: QtC.QJsonValueRef ```
    pub fn ToObject(self: ?*anyopaque) QtC.QJsonObject {
        return qtc.QJsonValueRef_ToObject(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#operator[])
    ///
    /// ``` self: QtC.QJsonValueRef, i: i64 ```
    pub fn OperatorSubscriptWithQsizetype(self: ?*anyopaque, i: i64) QtC.QJsonValue {
        return qtc.QJsonValueRef_OperatorSubscriptWithQsizetype(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#operator==)
    ///
    /// ``` self: QtC.QJsonValueRef, other: QtC.QJsonValue ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QJsonValueRef_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#operator!=)
    ///
    /// ``` self: QtC.QJsonValueRef, other: QtC.QJsonValue ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QJsonValueRef_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#toBool)
    ///
    /// ``` self: QtC.QJsonValueRef, defaultValue: bool ```
    pub fn ToBool1(self: ?*anyopaque, defaultValue: bool) bool {
        return qtc.QJsonValueRef_ToBool1(@ptrCast(self), defaultValue);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#toInt)
    ///
    /// ``` self: QtC.QJsonValueRef, defaultValue: i32 ```
    pub fn ToInt1(self: ?*anyopaque, defaultValue: i32) i32 {
        return qtc.QJsonValueRef_ToInt1(@ptrCast(self), @intCast(defaultValue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#toInteger)
    ///
    /// ``` self: QtC.QJsonValueRef, defaultValue: i64 ```
    pub fn ToInteger1(self: ?*anyopaque, defaultValue: i64) i64 {
        return qtc.QJsonValueRef_ToInteger1(@ptrCast(self), @intCast(defaultValue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#toDouble)
    ///
    /// ``` self: QtC.QJsonValueRef, defaultValue: f64 ```
    pub fn ToDouble1(self: ?*anyopaque, defaultValue: f64) f64 {
        return qtc.QJsonValueRef_ToDouble1(@ptrCast(self), @floatCast(defaultValue));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#toString)
    ///
    /// ``` self: QtC.QJsonValueRef, defaultValue: []const u8, allocator: std.mem.Allocator ```
    pub fn ToString1(self: ?*anyopaque, defaultValue: []const u8, allocator: std.mem.Allocator) []const u8 {
        const defaultValue_str = qtc.struct_libqt_string{
            .len = defaultValue.len,
            .data = @constCast(defaultValue.ptr),
        };
        const _str = qtc.QJsonValueRef_ToString1(@ptrCast(self), defaultValue_str);
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qjsonvalueref.ToString1: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qjsonvalueref.html#dtor.QJsonValueRef)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QJsonValueRef ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QJsonValueRef_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qjsonvalue.html#types
pub const enums = struct {
    pub const Type = enum {
        pub const Null: i32 = 0;
        pub const Bool: i32 = 1;
        pub const Double: i32 = 2;
        pub const String: i32 = 3;
        pub const Array: i32 = 4;
        pub const Object: i32 = 5;
        pub const Undefined: i32 = 128;
    };
};
