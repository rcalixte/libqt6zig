const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDateTime = @import("libqt6").QDateTime;
const QJSPrimitiveValue = @import("libqt6").QJSPrimitiveValue;
const QMetaObject = @import("libqt6").QMetaObject;
const QObject = @import("libqt6").QObject;
const QVariant = @import("libqt6").QVariant;
const qjsvalue_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html)
pub const QJSValue = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QJSValue,

    pub const _is_QJSValue = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QJSValue object in C++ memory
    ///
    pub fn new() QJSValue {
        return .{ .ptr = qtc.QJSValue_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QJSValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QJSValue `
    ///
    pub fn new2(other: anytype) QJSValue {
        comptime _ = @TypeOf(other)._is_QJSValue;
        return .{ .ptr = qtc.QJSValue_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QJSValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` value: bool `
    ///
    pub fn new3(value: bool) QJSValue {
        return .{ .ptr = qtc.QJSValue_new3(value) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QJSValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` value: i32 `
    ///
    pub fn new4(value: i32) QJSValue {
        return .{ .ptr = qtc.QJSValue_new4(@bitCast(value)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QJSValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` value: u32 `
    ///
    pub fn new5(value: u32) QJSValue {
        return .{ .ptr = qtc.QJSValue_new5(@bitCast(value)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QJSValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` value: f64 `
    ///
    pub fn new6(value: f64) QJSValue {
        return .{ .ptr = qtc.QJSValue_new6(@bitCast(value)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QJSValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` value: []const u8 `
    ///
    pub fn new7(value: []const u8) QJSValue {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        return .{ .ptr = qtc.QJSValue_new7(value_str) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new QJSValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` value: []u8 `
    ///
    pub fn new8(value: []u8) QJSValue {
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        return .{ .ptr = qtc.QJSValue_new8(value_str) };
    }

    /// ### DEPRECATED: Use `new9` instead
    ///
    pub const New9 = new9;

    /// Allocate a new QJSValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` str: [:0]const u8 `
    ///
    pub fn new9(str: [:0]const u8) QJSValue {
        const str_Cstring = str.ptr;
        return .{ .ptr = qtc.QJSValue_new9(str_Cstring) };
    }

    /// ### DEPRECATED: Use `new10` instead
    ///
    pub const New10 = new10;

    /// Allocate a new QJSValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` value: qjsvalue_enums.SpecialValue `
    ///
    pub fn new10(value: i32) QJSValue {
        return .{ .ptr = qtc.QJSValue_new10(@bitCast(value)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSValue `
    ///
    /// ` other: QJSValue `
    ///
    pub fn operatorAssign(self: QJSValue, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QJSValue;
        qtc.QJSValue_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isBool` instead
    ///
    pub const IsBool = isBool;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#isBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSValue `
    ///
    pub fn isBool(self: QJSValue) bool {
        return qtc.QJSValue_IsBool(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isNumber` instead
    ///
    pub const IsNumber = isNumber;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#isNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSValue `
    ///
    pub fn isNumber(self: QJSValue) bool {
        return qtc.QJSValue_IsNumber(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSValue `
    ///
    pub fn isNull(self: QJSValue) bool {
        return qtc.QJSValue_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isString` instead
    ///
    pub const IsString = isString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#isString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSValue `
    ///
    pub fn isString(self: QJSValue) bool {
        return qtc.QJSValue_IsString(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isUndefined` instead
    ///
    pub const IsUndefined = isUndefined;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#isUndefined)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSValue `
    ///
    pub fn isUndefined(self: QJSValue) bool {
        return qtc.QJSValue_IsUndefined(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isVariant` instead
    ///
    pub const IsVariant = isVariant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#isVariant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSValue `
    ///
    pub fn isVariant(self: QJSValue) bool {
        return qtc.QJSValue_IsVariant(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isQObject` instead
    ///
    pub const IsQObject = isQObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#isQObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSValue `
    ///
    pub fn isQObject(self: QJSValue) bool {
        return qtc.QJSValue_IsQObject(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isQMetaObject` instead
    ///
    pub const IsQMetaObject = isQMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#isQMetaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSValue `
    ///
    pub fn isQMetaObject(self: QJSValue) bool {
        return qtc.QJSValue_IsQMetaObject(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isObject` instead
    ///
    pub const IsObject = isObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#isObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSValue `
    ///
    pub fn isObject(self: QJSValue) bool {
        return qtc.QJSValue_IsObject(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDate` instead
    ///
    pub const IsDate = isDate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#isDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSValue `
    ///
    pub fn isDate(self: QJSValue) bool {
        return qtc.QJSValue_IsDate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isRegExp` instead
    ///
    pub const IsRegExp = isRegExp;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#isRegExp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSValue `
    ///
    pub fn isRegExp(self: QJSValue) bool {
        return qtc.QJSValue_IsRegExp(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isArray` instead
    ///
    pub const IsArray = isArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#isArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSValue `
    ///
    pub fn isArray(self: QJSValue) bool {
        return qtc.QJSValue_IsArray(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isError` instead
    ///
    pub const IsError = isError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#isError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSValue `
    ///
    pub fn isError(self: QJSValue) bool {
        return qtc.QJSValue_IsError(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isUrl` instead
    ///
    pub const IsUrl = isUrl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#isUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSValue `
    ///
    pub fn isUrl(self: QJSValue) bool {
        return qtc.QJSValue_IsUrl(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toString` instead
    ///
    pub const ToString = toString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSValue `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toString(self: QJSValue, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QJSValue_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QJSValue.toString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toNumber` instead
    ///
    pub const ToNumber = toNumber;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#toNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSValue `
    ///
    pub fn toNumber(self: QJSValue) f64 {
        return qtc.QJSValue_ToNumber(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toInt` instead
    ///
    pub const ToInt = toInt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#toInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSValue `
    ///
    pub fn toInt(self: QJSValue) i32 {
        return qtc.QJSValue_ToInt(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toUInt` instead
    ///
    pub const ToUInt = toUInt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#toUInt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSValue `
    ///
    pub fn toUInt(self: QJSValue) u32 {
        return qtc.QJSValue_ToUInt(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toBool` instead
    ///
    pub const ToBool = toBool;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#toBool)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSValue `
    ///
    pub fn toBool(self: QJSValue) bool {
        return qtc.QJSValue_ToBool(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toVariant` instead
    ///
    pub const ToVariant = toVariant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#toVariant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSValue `
    ///
    pub fn toVariant(self: QJSValue) QVariant {
        return .{ .ptr = qtc.QJSValue_ToVariant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toVariant2` instead
    ///
    pub const ToVariant2 = toVariant2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#toVariant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSValue `
    ///
    /// ` behavior: qjsvalue_enums.ObjectConversionBehavior `
    ///
    pub fn toVariant2(self: QJSValue, behavior: i32) QVariant {
        return .{ .ptr = qtc.QJSValue_ToVariant2(@ptrCast(self.ptr), @bitCast(behavior)) };
    }

    /// ### DEPRECATED: Use `toPrimitive` instead
    ///
    pub const ToPrimitive = toPrimitive;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#toPrimitive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSValue `
    ///
    pub fn toPrimitive(self: QJSValue) QJSPrimitiveValue {
        return .{ .ptr = qtc.QJSValue_ToPrimitive(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toQObject` instead
    ///
    pub const ToQObject = toQObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#toQObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSValue `
    ///
    pub fn toQObject(self: QJSValue) QObject {
        return .{ .ptr = qtc.QJSValue_ToQObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toQMetaObject` instead
    ///
    pub const ToQMetaObject = toQMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#toQMetaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSValue `
    ///
    pub fn toQMetaObject(self: QJSValue) QMetaObject {
        return .{ .ptr = qtc.QJSValue_ToQMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toDateTime` instead
    ///
    pub const ToDateTime = toDateTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#toDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSValue `
    ///
    pub fn toDateTime(self: QJSValue) QDateTime {
        return .{ .ptr = qtc.QJSValue_ToDateTime(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `equals` instead
    ///
    pub const Equals = equals;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#equals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSValue `
    ///
    /// ` other: QJSValue `
    ///
    pub fn equals(self: QJSValue, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QJSValue;
        return qtc.QJSValue_Equals(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `strictlyEquals` instead
    ///
    pub const StrictlyEquals = strictlyEquals;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#strictlyEquals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSValue `
    ///
    /// ` other: QJSValue `
    ///
    pub fn strictlyEquals(self: QJSValue, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QJSValue;
        return qtc.QJSValue_StrictlyEquals(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `prototype` instead
    ///
    pub const Prototype = prototype;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#prototype)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSValue `
    ///
    pub fn prototype(self: QJSValue) QJSValue {
        return .{ .ptr = qtc.QJSValue_Prototype(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPrototype` instead
    ///
    pub const SetPrototype = setPrototype;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#setPrototype)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSValue `
    ///
    /// ` _prototype: QJSValue `
    ///
    pub fn setPrototype(self: QJSValue, _prototype: anytype) void {
        comptime _ = @TypeOf(_prototype)._is_QJSValue;
        qtc.QJSValue_SetPrototype(@ptrCast(self.ptr), @ptrCast(_prototype.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSValue `
    ///
    /// ` name: []const u8 `
    ///
    pub fn property(self: QJSValue, name: []const u8) QJSValue {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QJSValue_Property(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSValue `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QJSValue `
    ///
    pub fn setProperty(self: QJSValue, name: []const u8, value: anytype) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QJSValue;
        qtc.QJSValue_SetProperty(@ptrCast(self.ptr), name_str, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `hasProperty` instead
    ///
    pub const HasProperty = hasProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#hasProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSValue `
    ///
    /// ` name: []const u8 `
    ///
    pub fn hasProperty(self: QJSValue, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QJSValue_HasProperty(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `hasOwnProperty` instead
    ///
    pub const HasOwnProperty = hasOwnProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#hasOwnProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSValue `
    ///
    /// ` name: []const u8 `
    ///
    pub fn hasOwnProperty(self: QJSValue, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QJSValue_HasOwnProperty(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `property2` instead
    ///
    pub const Property2 = property2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSValue `
    ///
    /// ` arrayIndex: u32 `
    ///
    pub fn property2(self: QJSValue, arrayIndex: u32) QJSValue {
        return .{ .ptr = qtc.QJSValue_Property2(@ptrCast(self.ptr), @bitCast(arrayIndex)) };
    }

    /// ### DEPRECATED: Use `setProperty2` instead
    ///
    pub const SetProperty2 = setProperty2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSValue `
    ///
    /// ` arrayIndex: u32 `
    ///
    /// ` value: QJSValue `
    ///
    pub fn setProperty2(self: QJSValue, arrayIndex: u32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QJSValue;
        qtc.QJSValue_SetProperty2(@ptrCast(self.ptr), @bitCast(arrayIndex), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `deleteProperty` instead
    ///
    pub const DeleteProperty = deleteProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#deleteProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSValue `
    ///
    /// ` name: []const u8 `
    ///
    pub fn deleteProperty(self: QJSValue, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QJSValue_DeleteProperty(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `isCallable` instead
    ///
    pub const IsCallable = isCallable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#isCallable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSValue `
    ///
    pub fn isCallable(self: QJSValue) bool {
        return qtc.QJSValue_IsCallable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `call` instead
    ///
    pub const Call = call;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#call)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSValue `
    ///
    pub fn call(self: QJSValue) QJSValue {
        return .{ .ptr = qtc.QJSValue_Call(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `callWithInstance` instead
    ///
    pub const CallWithInstance = callWithInstance;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#callWithInstance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSValue `
    ///
    /// ` instance: QJSValue `
    ///
    pub fn callWithInstance(self: QJSValue, instance: anytype) QJSValue {
        comptime _ = @TypeOf(instance)._is_QJSValue;
        return .{ .ptr = qtc.QJSValue_CallWithInstance(@ptrCast(self.ptr), @ptrCast(instance.ptr)) };
    }

    /// ### DEPRECATED: Use `callAsConstructor` instead
    ///
    pub const CallAsConstructor = callAsConstructor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#callAsConstructor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSValue `
    ///
    pub fn callAsConstructor(self: QJSValue) QJSValue {
        return .{ .ptr = qtc.QJSValue_CallAsConstructor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `errorType` instead
    ///
    pub const ErrorType = errorType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#errorType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSValue `
    ///
    /// ## Returns:
    ///
    /// ` qjsvalue_enums.ErrorType `
    ///
    pub fn errorType(self: QJSValue) i32 {
        return qtc.QJSValue_ErrorType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `call1` instead
    ///
    pub const Call1 = call1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#call)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSValue `
    ///
    /// ` args: []QJSValue `
    ///
    pub fn call1(self: QJSValue, args: []QJSValue) QJSValue {
        const args_list = qtc.libqt_list{
            .len = args.len,
            .data = @ptrCast(args.ptr),
        };
        return .{ .ptr = qtc.QJSValue_Call1(@ptrCast(self.ptr), args_list) };
    }

    /// ### DEPRECATED: Use `callWithInstance2` instead
    ///
    pub const CallWithInstance2 = callWithInstance2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#callWithInstance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSValue `
    ///
    /// ` instance: QJSValue `
    ///
    /// ` args: []QJSValue `
    ///
    pub fn callWithInstance2(self: QJSValue, instance: anytype, args: []QJSValue) QJSValue {
        comptime _ = @TypeOf(instance)._is_QJSValue;
        const args_list = qtc.libqt_list{
            .len = args.len,
            .data = @ptrCast(args.ptr),
        };
        return .{ .ptr = qtc.QJSValue_CallWithInstance2(@ptrCast(self.ptr), @ptrCast(instance.ptr), args_list) };
    }

    /// ### DEPRECATED: Use `callAsConstructor1` instead
    ///
    pub const CallAsConstructor1 = callAsConstructor1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#callAsConstructor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSValue `
    ///
    /// ` args: []QJSValue `
    ///
    pub fn callAsConstructor1(self: QJSValue, args: []QJSValue) QJSValue {
        const args_list = qtc.libqt_list{
            .len = args.len,
            .data = @ptrCast(args.ptr),
        };
        return .{ .ptr = qtc.QJSValue_CallAsConstructor1(@ptrCast(self.ptr), args_list) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#dtor.QJSValue)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QJSValue `
    ///
    pub fn delete(self: QJSValue) void {
        qtc.QJSValue_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qjsvalue.html#public-types)
pub const enums = struct {
    pub const SpecialValue = enum {
        pub const NullValue: i32 = 0;
        pub const UndefinedValue: i32 = 1;
    };

    pub const ErrorType = enum {
        pub const NoError: i32 = 0;
        pub const GenericError: i32 = 1;
        pub const EvalError: i32 = 2;
        pub const RangeError: i32 = 3;
        pub const ReferenceError: i32 = 4;
        pub const SyntaxError: i32 = 5;
        pub const TypeError: i32 = 6;
        pub const URIError: i32 = 7;
    };

    pub const ObjectConversionBehavior = enum {
        pub const ConvertJSObjects: i32 = 0;
        pub const RetainJSObjects: i32 = 1;
    };
};
