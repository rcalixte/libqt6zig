const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qjsonvalue_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html)
pub const qjsonvalue = struct {
    /// New constructs a new QJsonValue object.
    ///
    pub fn New() QtC.QJsonValue {
        return qtc.QJsonValue_new();
    }

    /// New2 constructs a new QJsonValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` b: bool `
    ///
    pub fn New2(b: bool) QtC.QJsonValue {
        return qtc.QJsonValue_new2(b);
    }

    /// New3 constructs a new QJsonValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` n: f64 `
    ///
    pub fn New3(n: f64) QtC.QJsonValue {
        return qtc.QJsonValue_new3(@bitCast(n));
    }

    /// New4 constructs a new QJsonValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` n: i32 `
    ///
    pub fn New4(n: i32) QtC.QJsonValue {
        return qtc.QJsonValue_new4(@bitCast(n));
    }

    /// New5 constructs a new QJsonValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` v: i64 `
    ///
    pub fn New5(v: i64) QtC.QJsonValue {
        return qtc.QJsonValue_new5(@bitCast(v));
    }

    /// New6 constructs a new QJsonValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` s: []const u8 `
    ///
    pub fn New6(s: []const u8) QtC.QJsonValue {
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };

        return qtc.QJsonValue_new6(s_str);
    }

    /// New7 constructs a new QJsonValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn New7(s: [:0]const u8) QtC.QJsonValue {
        const s_Cstring = s.ptr;

        return qtc.QJsonValue_new7(s_Cstring);
    }

    /// New8 constructs a new QJsonValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` a: QtC.QJsonArray `
    ///
    pub fn New8(a: ?*anyopaque) QtC.QJsonValue {
        return qtc.QJsonValue_new8(@ptrCast(a));
    }

    /// New9 constructs a new QJsonValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` o: QtC.QJsonObject `
    ///
    pub fn New9(o: ?*anyopaque) QtC.QJsonValue {
        return qtc.QJsonValue_new9(@ptrCast(o));
    }

    /// New10 constructs a new QJsonValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QJsonValue `
    ///
    pub fn New10(other: ?*anyopaque) QtC.QJsonValue {
        return qtc.QJsonValue_new10(@ptrCast(other));
    }

    /// New11 constructs a new QJsonValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qjsonvalue_enums.Type `
    ///
    pub fn New11(param1: i32) QtC.QJsonValue {
        return qtc.QJsonValue_new11(@bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValue `
    ///
    /// ` other: QtC.QJsonValue `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QJsonValue_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValue `
    ///
    /// ` other: QtC.QJsonValue `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QJsonValue_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#fromVariant)
    ///
    /// ## Parameter(s):
    ///
    /// ` variant: QtC.QVariant `
    ///
    pub fn FromVariant(variant: ?*anyopaque) QtC.QJsonValue {
        return qtc.QJsonValue_FromVariant(@ptrCast(variant));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toVariant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValue `
    ///
    pub fn ToVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QJsonValue_ToVariant(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValue `
    ///
    /// ## Returns:
    ///
    /// ` qjsonvalue_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QJsonValue_Type(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValue `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QJsonValue_IsNull(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#isBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValue `
    ///
    pub fn IsBool(self: ?*anyopaque) bool {
        return qtc.QJsonValue_IsBool(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#isDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValue `
    ///
    pub fn IsDouble(self: ?*anyopaque) bool {
        return qtc.QJsonValue_IsDouble(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#isString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValue `
    ///
    pub fn IsString(self: ?*anyopaque) bool {
        return qtc.QJsonValue_IsString(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#isArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValue `
    ///
    pub fn IsArray(self: ?*anyopaque) bool {
        return qtc.QJsonValue_IsArray(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#isObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValue `
    ///
    pub fn IsObject(self: ?*anyopaque) bool {
        return qtc.QJsonValue_IsObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#isUndefined)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValue `
    ///
    pub fn IsUndefined(self: ?*anyopaque) bool {
        return qtc.QJsonValue_IsUndefined(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValue `
    ///
    pub fn ToBool(self: ?*anyopaque) bool {
        return qtc.QJsonValue_ToBool(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValue `
    ///
    pub fn ToInt(self: ?*anyopaque) i32 {
        return qtc.QJsonValue_ToInt(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValue `
    ///
    pub fn ToInteger(self: ?*anyopaque) i64 {
        return qtc.QJsonValue_ToInteger(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValue `
    ///
    pub fn ToDouble(self: ?*anyopaque) f64 {
        return qtc.QJsonValue_ToDouble(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValue `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QJsonValue_ToString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qjsonvalue.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValue `
    ///
    /// ` defaultValue: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString2(self: ?*anyopaque, defaultValue: []const u8, allocator: std.mem.Allocator) []const u8 {
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        var _str = qtc.QJsonValue_ToString2(@ptrCast(self), defaultValue_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qjsonvalue.ToString2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValue `
    ///
    pub fn ToArray(self: ?*anyopaque) QtC.QJsonArray {
        return qtc.QJsonValue_ToArray(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValue `
    ///
    /// ` defaultValue: QtC.QJsonArray `
    ///
    pub fn ToArray2(self: ?*anyopaque, defaultValue: ?*anyopaque) QtC.QJsonArray {
        return qtc.QJsonValue_ToArray2(@ptrCast(self), @ptrCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValue `
    ///
    pub fn ToObject(self: ?*anyopaque) QtC.QJsonObject {
        return qtc.QJsonValue_ToObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValue `
    ///
    /// ` defaultValue: QtC.QJsonObject `
    ///
    pub fn ToObject2(self: ?*anyopaque, defaultValue: ?*anyopaque) QtC.QJsonObject {
        return qtc.QJsonValue_ToObject2(@ptrCast(self), @ptrCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValue `
    ///
    /// ` key: []const u8 `
    ///
    pub fn OperatorSubscript(self: ?*anyopaque, key: []const u8) QtC.QJsonValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QJsonValue_OperatorSubscript(@ptrCast(self), key_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValue `
    ///
    /// ` i: i64 `
    ///
    pub fn OperatorSubscript4(self: ?*anyopaque, i: i64) QtC.QJsonValue {
        return qtc.QJsonValue_OperatorSubscript4(@ptrCast(self), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValue `
    ///
    /// ` defaultValue: bool `
    ///
    pub fn ToBool1(self: ?*anyopaque, defaultValue: bool) bool {
        return qtc.QJsonValue_ToBool1(@ptrCast(self), defaultValue);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValue `
    ///
    /// ` defaultValue: i32 `
    ///
    pub fn ToInt1(self: ?*anyopaque, defaultValue: i32) i32 {
        return qtc.QJsonValue_ToInt1(@ptrCast(self), @bitCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValue `
    ///
    /// ` defaultValue: i64 `
    ///
    pub fn ToInteger1(self: ?*anyopaque, defaultValue: i64) i64 {
        return qtc.QJsonValue_ToInteger1(@ptrCast(self), @bitCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValue `
    ///
    /// ` defaultValue: f64 `
    ///
    pub fn ToDouble1(self: ?*anyopaque, defaultValue: f64) f64 {
        return qtc.QJsonValue_ToDouble1(@ptrCast(self), @bitCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#dtor.QJsonValue)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QJsonValue `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QJsonValue_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html)
pub const qjsonvalueconstref = struct {
    /// New constructs a new QJsonValueConstRef object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QJsonValueConstRef `
    ///
    pub fn New(other: ?*anyopaque) QtC.QJsonValueConstRef {
        return qtc.QJsonValueConstRef_new(@ptrCast(other));
    }

    /// New2 constructs a new QJsonValueConstRef object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QJsonValueConstRef `
    ///
    pub fn New2(param1: ?*anyopaque) QtC.QJsonValueConstRef {
        return qtc.QJsonValueConstRef_new2(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValueConstRef `
    ///
    pub fn ToQJsonValue(self: ?*anyopaque) QtC.QJsonValue {
        return qtc.QJsonValueConstRef_ToQJsonValue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toVariant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValueConstRef `
    ///
    pub fn ToVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QJsonValueConstRef_ToVariant(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValueConstRef `
    ///
    /// ## Returns:
    ///
    /// ` qjsonvalue_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QJsonValueConstRef_Type(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValueConstRef `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QJsonValueConstRef_IsNull(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValueConstRef `
    ///
    pub fn IsBool(self: ?*anyopaque) bool {
        return qtc.QJsonValueConstRef_IsBool(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValueConstRef `
    ///
    pub fn IsDouble(self: ?*anyopaque) bool {
        return qtc.QJsonValueConstRef_IsDouble(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValueConstRef `
    ///
    pub fn IsString(self: ?*anyopaque) bool {
        return qtc.QJsonValueConstRef_IsString(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValueConstRef `
    ///
    pub fn IsArray(self: ?*anyopaque) bool {
        return qtc.QJsonValueConstRef_IsArray(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValueConstRef `
    ///
    pub fn IsObject(self: ?*anyopaque) bool {
        return qtc.QJsonValueConstRef_IsObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isUndefined)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValueConstRef `
    ///
    pub fn IsUndefined(self: ?*anyopaque) bool {
        return qtc.QJsonValueConstRef_IsUndefined(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValueConstRef `
    ///
    pub fn ToBool(self: ?*anyopaque) bool {
        return qtc.QJsonValueConstRef_ToBool(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValueConstRef `
    ///
    pub fn ToInt(self: ?*anyopaque) i32 {
        return qtc.QJsonValueConstRef_ToInt(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValueConstRef `
    ///
    pub fn ToInteger(self: ?*anyopaque) i64 {
        return qtc.QJsonValueConstRef_ToInteger(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValueConstRef `
    ///
    pub fn ToDouble(self: ?*anyopaque) f64 {
        return qtc.QJsonValueConstRef_ToDouble(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValueConstRef `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QJsonValueConstRef_ToString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qjsonvalueconstref.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValueConstRef `
    ///
    pub fn ToArray(self: ?*anyopaque) QtC.QJsonArray {
        return qtc.QJsonValueConstRef_ToArray(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValueConstRef `
    ///
    pub fn ToObject(self: ?*anyopaque) QtC.QJsonObject {
        return qtc.QJsonValueConstRef_ToObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValueConstRef `
    ///
    /// ` i: i64 `
    ///
    pub fn OperatorSubscript3(self: ?*anyopaque, i: i64) QtC.QJsonValue {
        return qtc.QJsonValueConstRef_OperatorSubscript3(@ptrCast(self), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValueConstRef `
    ///
    /// ` defaultValue: bool `
    ///
    pub fn ToBool1(self: ?*anyopaque, defaultValue: bool) bool {
        return qtc.QJsonValueConstRef_ToBool1(@ptrCast(self), defaultValue);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValueConstRef `
    ///
    /// ` defaultValue: i32 `
    ///
    pub fn ToInt1(self: ?*anyopaque, defaultValue: i32) i32 {
        return qtc.QJsonValueConstRef_ToInt1(@ptrCast(self), @bitCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValueConstRef `
    ///
    /// ` defaultValue: i64 `
    ///
    pub fn ToInteger1(self: ?*anyopaque, defaultValue: i64) i64 {
        return qtc.QJsonValueConstRef_ToInteger1(@ptrCast(self), @bitCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValueConstRef `
    ///
    /// ` defaultValue: f64 `
    ///
    pub fn ToDouble1(self: ?*anyopaque, defaultValue: f64) f64 {
        return qtc.QJsonValueConstRef_ToDouble1(@ptrCast(self), @bitCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValueConstRef `
    ///
    /// ` defaultValue: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString1(self: ?*anyopaque, defaultValue: []const u8, allocator: std.mem.Allocator) []const u8 {
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        var _str = qtc.QJsonValueConstRef_ToString1(@ptrCast(self), defaultValue_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qjsonvalueconstref.ToString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#dtor.QJsonValueConstRef)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QJsonValueConstRef `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QJsonValueConstRef_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html)
pub const qjsonvalueref = struct {
    /// New constructs a new QJsonValueRef object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QJsonValueRef `
    ///
    pub fn New(other: ?*anyopaque) QtC.QJsonValueRef {
        return qtc.QJsonValueRef_new(@ptrCast(other));
    }

    /// New2 constructs a new QJsonValueRef object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QJsonValueRef `
    ///
    pub fn New2(param1: ?*anyopaque) QtC.QJsonValueRef {
        return qtc.QJsonValueRef_new2(@ptrCast(param1));
    }

    /// New3 constructs a new QJsonValueRef object.
    ///
    /// ## Parameter(s):
    ///
    /// ` array: QtC.QJsonArray `
    ///
    /// ` idx: i64 `
    ///
    pub fn New3(array: ?*anyopaque, idx: i64) QtC.QJsonValueRef {
        return qtc.QJsonValueRef_new3(@ptrCast(array), @bitCast(idx));
    }

    /// New4 constructs a new QJsonValueRef object.
    ///
    /// ## Parameter(s):
    ///
    /// ` object: QtC.QJsonObject `
    ///
    /// ` idx: i64 `
    ///
    pub fn New4(object: ?*anyopaque, idx: i64) QtC.QJsonValueRef {
        return qtc.QJsonValueRef_new4(@ptrCast(object), @bitCast(idx));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValueRef `
    ///
    /// ` val: QtC.QJsonValue `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, val: ?*anyopaque) void {
        qtc.QJsonValueRef_OperatorAssign(@ptrCast(self), @ptrCast(val));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValueRef `
    ///
    /// ` val: QtC.QJsonValueRef `
    ///
    pub fn OperatorAssign2(self: ?*anyopaque, val: ?*anyopaque) void {
        qtc.QJsonValueRef_OperatorAssign2(@ptrCast(self), @ptrCast(val));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValueRef `
    ///
    pub fn ToQJsonValue(self: ?*anyopaque) QtC.QJsonValue {
        return qtc.QJsonValueRef_ToQJsonValue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toVariant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValueRef `
    ///
    pub fn ToVariant(self: ?*anyopaque) QtC.QVariant {
        return qtc.QJsonValueRef_ToVariant(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValueRef `
    ///
    /// ## Returns:
    ///
    /// ` qjsonvalue_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QJsonValueRef_Type(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValueRef `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QJsonValueRef_IsNull(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#isBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValueRef `
    ///
    pub fn IsBool(self: ?*anyopaque) bool {
        return qtc.QJsonValueRef_IsBool(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#isDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValueRef `
    ///
    pub fn IsDouble(self: ?*anyopaque) bool {
        return qtc.QJsonValueRef_IsDouble(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#isString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValueRef `
    ///
    pub fn IsString(self: ?*anyopaque) bool {
        return qtc.QJsonValueRef_IsString(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#isArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValueRef `
    ///
    pub fn IsArray(self: ?*anyopaque) bool {
        return qtc.QJsonValueRef_IsArray(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#isObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValueRef `
    ///
    pub fn IsObject(self: ?*anyopaque) bool {
        return qtc.QJsonValueRef_IsObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#isUndefined)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValueRef `
    ///
    pub fn IsUndefined(self: ?*anyopaque) bool {
        return qtc.QJsonValueRef_IsUndefined(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValueRef `
    ///
    pub fn ToBool(self: ?*anyopaque) bool {
        return qtc.QJsonValueRef_ToBool(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValueRef `
    ///
    pub fn ToInt(self: ?*anyopaque) i32 {
        return qtc.QJsonValueRef_ToInt(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValueRef `
    ///
    pub fn ToInteger(self: ?*anyopaque) i64 {
        return qtc.QJsonValueRef_ToInteger(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValueRef `
    ///
    pub fn ToDouble(self: ?*anyopaque) f64 {
        return qtc.QJsonValueRef_ToDouble(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValueRef `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QJsonValueRef_ToString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qjsonvalueref.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValueRef `
    ///
    pub fn ToArray(self: ?*anyopaque) QtC.QJsonArray {
        return qtc.QJsonValueRef_ToArray(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValueRef `
    ///
    pub fn ToObject(self: ?*anyopaque) QtC.QJsonObject {
        return qtc.QJsonValueRef_ToObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValueRef `
    ///
    /// ` i: i64 `
    ///
    pub fn OperatorSubscript3(self: ?*anyopaque, i: i64) QtC.QJsonValue {
        return qtc.QJsonValueRef_OperatorSubscript3(@ptrCast(self), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValueRef `
    ///
    /// ` defaultValue: bool `
    ///
    pub fn ToBool1(self: ?*anyopaque, defaultValue: bool) bool {
        return qtc.QJsonValueRef_ToBool1(@ptrCast(self), defaultValue);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValueRef `
    ///
    /// ` defaultValue: i32 `
    ///
    pub fn ToInt1(self: ?*anyopaque, defaultValue: i32) i32 {
        return qtc.QJsonValueRef_ToInt1(@ptrCast(self), @bitCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValueRef `
    ///
    /// ` defaultValue: i64 `
    ///
    pub fn ToInteger1(self: ?*anyopaque, defaultValue: i64) i64 {
        return qtc.QJsonValueRef_ToInteger1(@ptrCast(self), @bitCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValueRef `
    ///
    /// ` defaultValue: f64 `
    ///
    pub fn ToDouble1(self: ?*anyopaque, defaultValue: f64) f64 {
        return qtc.QJsonValueRef_ToDouble1(@ptrCast(self), @bitCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QJsonValueRef `
    ///
    /// ` defaultValue: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString1(self: ?*anyopaque, defaultValue: []const u8, allocator: std.mem.Allocator) []const u8 {
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        var _str = qtc.QJsonValueRef_ToString1(@ptrCast(self), defaultValue_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qjsonvalueref.ToString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#dtor.QJsonValueRef)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QJsonValueRef `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QJsonValueRef_Delete(@ptrCast(self));
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
