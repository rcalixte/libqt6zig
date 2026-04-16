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

    /// New constructs a new QJsonValue object.
    ///
    pub fn New() QJsonValue {
        return .{ .ptr = qtc.QJsonValue_new() };
    }

    /// New2 constructs a new QJsonValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` b: bool `
    ///
    pub fn New2(b: bool) QJsonValue {
        return .{ .ptr = qtc.QJsonValue_new2(b) };
    }

    /// New3 constructs a new QJsonValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` n: f64 `
    ///
    pub fn New3(n: f64) QJsonValue {
        return .{ .ptr = qtc.QJsonValue_new3(@bitCast(n)) };
    }

    /// New4 constructs a new QJsonValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` n: i32 `
    ///
    pub fn New4(n: i32) QJsonValue {
        return .{ .ptr = qtc.QJsonValue_new4(@bitCast(n)) };
    }

    /// New5 constructs a new QJsonValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` v: i64 `
    ///
    pub fn New5(v: i64) QJsonValue {
        return .{ .ptr = qtc.QJsonValue_new5(@bitCast(v)) };
    }

    /// New6 constructs a new QJsonValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` s: []const u8 `
    ///
    pub fn New6(s: []const u8) QJsonValue {
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        return .{ .ptr = qtc.QJsonValue_new6(s_str) };
    }

    /// New7 constructs a new QJsonValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn New7(s: [:0]const u8) QJsonValue {
        const s_Cstring = s.ptr;
        return .{ .ptr = qtc.QJsonValue_new7(s_Cstring) };
    }

    /// New8 constructs a new QJsonValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` a: QJsonArray `
    ///
    pub fn New8(a: anytype) QJsonValue {
        comptime _ = @TypeOf(a)._is_QJsonArray;
        return .{ .ptr = qtc.QJsonValue_new8(@ptrCast(a.ptr)) };
    }

    /// New9 constructs a new QJsonValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` o: QJsonObject `
    ///
    pub fn New9(o: anytype) QJsonValue {
        comptime _ = @TypeOf(o)._is_QJsonObject;
        return .{ .ptr = qtc.QJsonValue_new9(@ptrCast(o.ptr)) };
    }

    /// New10 constructs a new QJsonValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QJsonValue `
    ///
    pub fn New10(other: anytype) QJsonValue {
        comptime _ = @TypeOf(other)._is_QJsonValue;
        return .{ .ptr = qtc.QJsonValue_new10(@ptrCast(other.ptr)) };
    }

    /// New11 constructs a new QJsonValue object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qjsonvalue_enums.Type `
    ///
    pub fn New11(param1: i32) QJsonValue {
        return .{ .ptr = qtc.QJsonValue_new11(@bitCast(param1)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    /// ` other: QJsonValue `
    ///
    pub fn OperatorAssign(self: QJsonValue, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QJsonValue;
        qtc.QJsonValue_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    /// ` other: QJsonValue `
    ///
    pub fn Swap(self: QJsonValue, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QJsonValue;
        qtc.QJsonValue_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#fromVariant)
    ///
    /// ## Parameter(s):
    ///
    /// ` variant: QVariant `
    ///
    pub fn FromVariant(variant: anytype) QJsonValue {
        comptime _ = @TypeOf(variant)._is_QVariant;
        return .{ .ptr = qtc.QJsonValue_FromVariant(@ptrCast(variant.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toVariant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    pub fn ToVariant(self: QJsonValue) QVariant {
        return .{ .ptr = qtc.QJsonValue_ToVariant(@ptrCast(self.ptr)) };
    }

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
    pub fn Type(self: QJsonValue) i32 {
        return qtc.QJsonValue_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    pub fn IsNull(self: QJsonValue) bool {
        return qtc.QJsonValue_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#isBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    pub fn IsBool(self: QJsonValue) bool {
        return qtc.QJsonValue_IsBool(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#isDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    pub fn IsDouble(self: QJsonValue) bool {
        return qtc.QJsonValue_IsDouble(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#isString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    pub fn IsString(self: QJsonValue) bool {
        return qtc.QJsonValue_IsString(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#isArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    pub fn IsArray(self: QJsonValue) bool {
        return qtc.QJsonValue_IsArray(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#isObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    pub fn IsObject(self: QJsonValue) bool {
        return qtc.QJsonValue_IsObject(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#isUndefined)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    pub fn IsUndefined(self: QJsonValue) bool {
        return qtc.QJsonValue_IsUndefined(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    pub fn ToBool(self: QJsonValue) bool {
        return qtc.QJsonValue_ToBool(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    pub fn ToInt(self: QJsonValue) i32 {
        return qtc.QJsonValue_ToInt(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    pub fn ToInteger(self: QJsonValue) i64 {
        return qtc.QJsonValue_ToInteger(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    pub fn ToDouble(self: QJsonValue) f64 {
        return qtc.QJsonValue_ToDouble(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: QJsonValue, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QJsonValue_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qjsonvalue.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn ToString2(self: QJsonValue, allocator: std.mem.Allocator, defaultValue: []const u8) []const u8 {
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        var _str = qtc.QJsonValue_ToString2(@ptrCast(self.ptr), defaultValue_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qjsonvalue.ToString2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    pub fn ToArray(self: QJsonValue) QJsonArray {
        return .{ .ptr = qtc.QJsonValue_ToArray(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    /// ` defaultValue: QJsonArray `
    ///
    pub fn ToArray2(self: QJsonValue, defaultValue: anytype) QJsonArray {
        comptime _ = @TypeOf(defaultValue)._is_QJsonArray;
        return .{ .ptr = qtc.QJsonValue_ToArray2(@ptrCast(self.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    pub fn ToObject(self: QJsonValue) QJsonObject {
        return .{ .ptr = qtc.QJsonValue_ToObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    /// ` defaultValue: QJsonObject `
    ///
    pub fn ToObject2(self: QJsonValue, defaultValue: anytype) QJsonObject {
        comptime _ = @TypeOf(defaultValue)._is_QJsonObject;
        return .{ .ptr = qtc.QJsonValue_ToObject2(@ptrCast(self.ptr), @ptrCast(defaultValue.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    /// ` key: []const u8 `
    ///
    pub fn OperatorSubscript(self: QJsonValue, key: []const u8) QJsonValue {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.QJsonValue_OperatorSubscript(@ptrCast(self.ptr), key_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    /// ` i: isize `
    ///
    pub fn OperatorSubscript4(self: QJsonValue, i: isize) QJsonValue {
        return .{ .ptr = qtc.QJsonValue_OperatorSubscript4(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    /// ` defaultValue: bool `
    ///
    pub fn ToBool1(self: QJsonValue, defaultValue: bool) bool {
        return qtc.QJsonValue_ToBool1(@ptrCast(self.ptr), defaultValue);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    /// ` defaultValue: i32 `
    ///
    pub fn ToInt1(self: QJsonValue, defaultValue: i32) i32 {
        return qtc.QJsonValue_ToInt1(@ptrCast(self.ptr), @bitCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    /// ` defaultValue: i64 `
    ///
    pub fn ToInteger1(self: QJsonValue, defaultValue: i64) i64 {
        return qtc.QJsonValue_ToInteger1(@ptrCast(self.ptr), @bitCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValue `
    ///
    /// ` defaultValue: f64 `
    ///
    pub fn ToDouble1(self: QJsonValue, defaultValue: f64) f64 {
        return qtc.QJsonValue_ToDouble1(@ptrCast(self.ptr), @bitCast(defaultValue));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalue.html#dtor.QJsonValue)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QJsonValue `
    ///
    pub fn Delete(self: QJsonValue) void {
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

    /// New constructs a new QJsonValueConstRef object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QJsonValueConstRef `
    ///
    pub fn New(other: anytype) QJsonValueConstRef {
        comptime _ = @TypeOf(other)._is_QJsonValueConstRef;
        return .{ .ptr = qtc.QJsonValueConstRef_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QJsonValueConstRef object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QJsonValueConstRef `
    ///
    pub fn New2(param1: anytype) QJsonValueConstRef {
        comptime _ = @TypeOf(param1)._is_QJsonValueConstRef;
        return .{ .ptr = qtc.QJsonValueConstRef_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueConstRef `
    ///
    pub fn ToQJsonValue(self: QJsonValueConstRef) QJsonValue {
        return .{ .ptr = qtc.QJsonValueConstRef_ToQJsonValue(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toVariant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueConstRef `
    ///
    pub fn ToVariant(self: QJsonValueConstRef) QVariant {
        return .{ .ptr = qtc.QJsonValueConstRef_ToVariant(@ptrCast(self.ptr)) };
    }

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
    pub fn Type(self: QJsonValueConstRef) i32 {
        return qtc.QJsonValueConstRef_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueConstRef `
    ///
    pub fn IsNull(self: QJsonValueConstRef) bool {
        return qtc.QJsonValueConstRef_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueConstRef `
    ///
    pub fn IsBool(self: QJsonValueConstRef) bool {
        return qtc.QJsonValueConstRef_IsBool(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueConstRef `
    ///
    pub fn IsDouble(self: QJsonValueConstRef) bool {
        return qtc.QJsonValueConstRef_IsDouble(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueConstRef `
    ///
    pub fn IsString(self: QJsonValueConstRef) bool {
        return qtc.QJsonValueConstRef_IsString(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueConstRef `
    ///
    pub fn IsArray(self: QJsonValueConstRef) bool {
        return qtc.QJsonValueConstRef_IsArray(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueConstRef `
    ///
    pub fn IsObject(self: QJsonValueConstRef) bool {
        return qtc.QJsonValueConstRef_IsObject(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#isUndefined)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueConstRef `
    ///
    pub fn IsUndefined(self: QJsonValueConstRef) bool {
        return qtc.QJsonValueConstRef_IsUndefined(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueConstRef `
    ///
    pub fn ToBool(self: QJsonValueConstRef) bool {
        return qtc.QJsonValueConstRef_ToBool(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueConstRef `
    ///
    pub fn ToInt(self: QJsonValueConstRef) i32 {
        return qtc.QJsonValueConstRef_ToInt(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueConstRef `
    ///
    pub fn ToInteger(self: QJsonValueConstRef) i64 {
        return qtc.QJsonValueConstRef_ToInteger(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueConstRef `
    ///
    pub fn ToDouble(self: QJsonValueConstRef) f64 {
        return qtc.QJsonValueConstRef_ToDouble(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueConstRef `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: QJsonValueConstRef, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QJsonValueConstRef_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qjsonvalueconstref.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueConstRef `
    ///
    pub fn ToArray(self: QJsonValueConstRef) QJsonArray {
        return .{ .ptr = qtc.QJsonValueConstRef_ToArray(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueConstRef `
    ///
    pub fn ToObject(self: QJsonValueConstRef) QJsonObject {
        return .{ .ptr = qtc.QJsonValueConstRef_ToObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueConstRef `
    ///
    /// ` i: isize `
    ///
    pub fn OperatorSubscript3(self: QJsonValueConstRef, i: isize) QJsonValue {
        return .{ .ptr = qtc.QJsonValueConstRef_OperatorSubscript3(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueConstRef `
    ///
    /// ` defaultValue: bool `
    ///
    pub fn ToBool1(self: QJsonValueConstRef, defaultValue: bool) bool {
        return qtc.QJsonValueConstRef_ToBool1(@ptrCast(self.ptr), defaultValue);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueConstRef `
    ///
    /// ` defaultValue: i32 `
    ///
    pub fn ToInt1(self: QJsonValueConstRef, defaultValue: i32) i32 {
        return qtc.QJsonValueConstRef_ToInt1(@ptrCast(self.ptr), @bitCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueConstRef `
    ///
    /// ` defaultValue: i64 `
    ///
    pub fn ToInteger1(self: QJsonValueConstRef, defaultValue: i64) i64 {
        return qtc.QJsonValueConstRef_ToInteger1(@ptrCast(self.ptr), @bitCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueConstRef `
    ///
    /// ` defaultValue: f64 `
    ///
    pub fn ToDouble1(self: QJsonValueConstRef, defaultValue: f64) f64 {
        return qtc.QJsonValueConstRef_ToDouble1(@ptrCast(self.ptr), @bitCast(defaultValue));
    }

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
    pub fn ToString1(self: QJsonValueConstRef, allocator: std.mem.Allocator, defaultValue: []const u8) []const u8 {
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        var _str = qtc.QJsonValueConstRef_ToString1(@ptrCast(self.ptr), defaultValue_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qjsonvalueconstref.ToString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueconstref.html#dtor.QJsonValueConstRef)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QJsonValueConstRef `
    ///
    pub fn Delete(self: QJsonValueConstRef) void {
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

    /// New constructs a new QJsonValueRef object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QJsonValueRef `
    ///
    pub fn New(other: anytype) QJsonValueRef {
        comptime _ = @TypeOf(other)._is_QJsonValueRef;
        return .{ .ptr = qtc.QJsonValueRef_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QJsonValueRef object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QJsonValueRef `
    ///
    pub fn New2(param1: anytype) QJsonValueRef {
        comptime _ = @TypeOf(param1)._is_QJsonValueRef;
        return .{ .ptr = qtc.QJsonValueRef_new2(@ptrCast(param1.ptr)) };
    }

    /// New3 constructs a new QJsonValueRef object.
    ///
    /// ## Parameter(s):
    ///
    /// ` array: QJsonArray `
    ///
    /// ` idx: isize `
    ///
    pub fn New3(array: anytype, idx: isize) QJsonValueRef {
        comptime _ = @TypeOf(array)._is_QJsonArray;
        return .{ .ptr = qtc.QJsonValueRef_new3(@ptrCast(array.ptr), @bitCast(idx)) };
    }

    /// New4 constructs a new QJsonValueRef object.
    ///
    /// ## Parameter(s):
    ///
    /// ` object: QJsonObject `
    ///
    /// ` idx: isize `
    ///
    pub fn New4(object: anytype, idx: isize) QJsonValueRef {
        comptime _ = @TypeOf(object)._is_QJsonObject;
        return .{ .ptr = qtc.QJsonValueRef_new4(@ptrCast(object.ptr), @bitCast(idx)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueRef `
    ///
    /// ` val: QJsonValue `
    ///
    pub fn OperatorAssign(self: QJsonValueRef, val: anytype) void {
        comptime _ = @TypeOf(val)._is_QJsonValue;
        qtc.QJsonValueRef_OperatorAssign(@ptrCast(self.ptr), @ptrCast(val.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueRef `
    ///
    /// ` val: QJsonValueRef `
    ///
    pub fn OperatorAssign2(self: QJsonValueRef, val: anytype) void {
        comptime _ = @TypeOf(val)._is_QJsonValueRef;
        qtc.QJsonValueRef_OperatorAssign2(@ptrCast(self.ptr), @ptrCast(val.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueRef `
    ///
    pub fn ToQJsonValue(self: QJsonValueRef) QJsonValue {
        return .{ .ptr = qtc.QJsonValueRef_ToQJsonValue(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toVariant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueRef `
    ///
    pub fn ToVariant(self: QJsonValueRef) QVariant {
        return .{ .ptr = qtc.QJsonValueRef_ToVariant(@ptrCast(self.ptr)) };
    }

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
    pub fn Type(self: QJsonValueRef) i32 {
        return qtc.QJsonValueRef_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueRef `
    ///
    pub fn IsNull(self: QJsonValueRef) bool {
        return qtc.QJsonValueRef_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#isBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueRef `
    ///
    pub fn IsBool(self: QJsonValueRef) bool {
        return qtc.QJsonValueRef_IsBool(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#isDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueRef `
    ///
    pub fn IsDouble(self: QJsonValueRef) bool {
        return qtc.QJsonValueRef_IsDouble(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#isString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueRef `
    ///
    pub fn IsString(self: QJsonValueRef) bool {
        return qtc.QJsonValueRef_IsString(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#isArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueRef `
    ///
    pub fn IsArray(self: QJsonValueRef) bool {
        return qtc.QJsonValueRef_IsArray(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#isObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueRef `
    ///
    pub fn IsObject(self: QJsonValueRef) bool {
        return qtc.QJsonValueRef_IsObject(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#isUndefined)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueRef `
    ///
    pub fn IsUndefined(self: QJsonValueRef) bool {
        return qtc.QJsonValueRef_IsUndefined(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueRef `
    ///
    pub fn ToBool(self: QJsonValueRef) bool {
        return qtc.QJsonValueRef_ToBool(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueRef `
    ///
    pub fn ToInt(self: QJsonValueRef) i32 {
        return qtc.QJsonValueRef_ToInt(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueRef `
    ///
    pub fn ToInteger(self: QJsonValueRef) i64 {
        return qtc.QJsonValueRef_ToInteger(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueRef `
    ///
    pub fn ToDouble(self: QJsonValueRef) f64 {
        return qtc.QJsonValueRef_ToDouble(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueRef `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: QJsonValueRef, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QJsonValueRef_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qjsonvalueref.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueRef `
    ///
    pub fn ToArray(self: QJsonValueRef) QJsonArray {
        return .{ .ptr = qtc.QJsonValueRef_ToArray(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueRef `
    ///
    pub fn ToObject(self: QJsonValueRef) QJsonObject {
        return .{ .ptr = qtc.QJsonValueRef_ToObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#operator-5b-5d)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueRef `
    ///
    /// ` i: isize `
    ///
    pub fn OperatorSubscript3(self: QJsonValueRef, i: isize) QJsonValue {
        return .{ .ptr = qtc.QJsonValueRef_OperatorSubscript3(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueRef `
    ///
    /// ` defaultValue: bool `
    ///
    pub fn ToBool1(self: QJsonValueRef, defaultValue: bool) bool {
        return qtc.QJsonValueRef_ToBool1(@ptrCast(self.ptr), defaultValue);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueRef `
    ///
    /// ` defaultValue: i32 `
    ///
    pub fn ToInt1(self: QJsonValueRef, defaultValue: i32) i32 {
        return qtc.QJsonValueRef_ToInt1(@ptrCast(self.ptr), @bitCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueRef `
    ///
    /// ` defaultValue: i64 `
    ///
    pub fn ToInteger1(self: QJsonValueRef, defaultValue: i64) i64 {
        return qtc.QJsonValueRef_ToInteger1(@ptrCast(self.ptr), @bitCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJsonValueRef `
    ///
    /// ` defaultValue: f64 `
    ///
    pub fn ToDouble1(self: QJsonValueRef, defaultValue: f64) f64 {
        return qtc.QJsonValueRef_ToDouble1(@ptrCast(self.ptr), @bitCast(defaultValue));
    }

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
    pub fn ToString1(self: QJsonValueRef, allocator: std.mem.Allocator, defaultValue: []const u8) []const u8 {
        const defaultValue_str = qtc.libqt_string{
            .len = defaultValue.len,
            .data = defaultValue.ptr,
        };
        var _str = qtc.QJsonValueRef_ToString1(@ptrCast(self.ptr), defaultValue_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qjsonvalueref.ToString1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsonvalueref.html#dtor.QJsonValueRef)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QJsonValueRef `
    ///
    pub fn Delete(self: QJsonValueRef) void {
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
