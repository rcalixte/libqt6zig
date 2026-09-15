const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDateTime = @import("libqt6").QDateTime;
const QJSEngine = @import("libqt6").QJSEngine;
const QJSPrimitiveValue = @import("libqt6").QJSPrimitiveValue;
const QJSValue = @import("libqt6").QJSValue;
const QMetaObject = @import("libqt6").QMetaObject;
const QObject = @import("libqt6").QObject;
const QRegularExpression = @import("libqt6").QRegularExpression;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const qjsmanagedvalue_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html)
pub const QJSManagedValue = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QJSManagedValue,

    pub const _is_QJSManagedValue = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QJSManagedValue object in C++ memory
    ///
    pub fn new() QJSManagedValue {
        return .{ .ptr = qtc.QJSManagedValue_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QJSManagedValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` value: QJSValue `
    ///
    /// ` _engine: QJSEngine `
    ///
    pub fn new2(value: anytype, _engine: anytype) QJSManagedValue {
        comptime _ = @TypeOf(value)._is_QJSValue;
        comptime _ = @TypeOf(_engine)._is_QJSEngine;
        return .{ .ptr = qtc.QJSManagedValue_new2(@ptrCast(value.ptr), @ptrCast(_engine.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QJSManagedValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` value: QJSPrimitiveValue `
    ///
    /// ` _engine: QJSEngine `
    ///
    pub fn new3(value: anytype, _engine: anytype) QJSManagedValue {
        comptime _ = @TypeOf(value)._is_QJSPrimitiveValue;
        comptime _ = @TypeOf(_engine)._is_QJSEngine;
        return .{ .ptr = qtc.QJSManagedValue_new3(@ptrCast(value.ptr), @ptrCast(_engine.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QJSManagedValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` variant: QVariant `
    ///
    /// ` _engine: QJSEngine `
    ///
    pub fn new4(variant: anytype, _engine: anytype) QJSManagedValue {
        comptime _ = @TypeOf(variant)._is_QVariant;
        comptime _ = @TypeOf(_engine)._is_QJSEngine;
        return .{ .ptr = qtc.QJSManagedValue_new4(@ptrCast(variant.ptr), @ptrCast(_engine.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QJSManagedValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` string: []const u8 `
    ///
    /// ` _engine: QJSEngine `
    ///
    pub fn new5(string: []const u8, _engine: anytype) QJSManagedValue {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        comptime _ = @TypeOf(_engine)._is_QJSEngine;
        return .{ .ptr = qtc.QJSManagedValue_new5(string_str, @ptrCast(_engine.ptr)) };
    }

    /// ### DEPRECATED: Use `equals` instead
    ///
    pub const Equals = equals;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#equals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    /// ` other: QJSManagedValue `
    ///
    pub fn equals(self: QJSManagedValue, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QJSManagedValue;
        return qtc.QJSManagedValue_Equals(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `strictlyEquals` instead
    ///
    pub const StrictlyEquals = strictlyEquals;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#strictlyEquals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    /// ` other: QJSManagedValue `
    ///
    pub fn strictlyEquals(self: QJSManagedValue, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QJSManagedValue;
        return qtc.QJSManagedValue_StrictlyEquals(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `engine` instead
    ///
    pub const Engine = engine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#engine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    pub fn engine(self: QJSManagedValue) QJSEngine {
        return .{ .ptr = qtc.QJSManagedValue_Engine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `prototype` instead
    ///
    pub const Prototype = prototype;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#prototype)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    pub fn prototype(self: QJSManagedValue) QJSManagedValue {
        return .{ .ptr = qtc.QJSManagedValue_Prototype(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPrototype` instead
    ///
    pub const SetPrototype = setPrototype;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#setPrototype)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    /// ` _prototype: QJSManagedValue `
    ///
    pub fn setPrototype(self: QJSManagedValue, _prototype: anytype) void {
        comptime _ = @TypeOf(_prototype)._is_QJSManagedValue;
        qtc.QJSManagedValue_SetPrototype(@ptrCast(self.ptr), @ptrCast(_prototype.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    /// ## Returns:
    ///
    /// ` qjsmanagedvalue_enums.Type `
    ///
    pub fn type0(self: QJSManagedValue) i32 {
        return qtc.QJSManagedValue_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isUndefined` instead
    ///
    pub const IsUndefined = isUndefined;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isUndefined)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    pub fn isUndefined(self: QJSManagedValue) bool {
        return qtc.QJSManagedValue_IsUndefined(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isBoolean` instead
    ///
    pub const IsBoolean = isBoolean;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isBoolean)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    pub fn isBoolean(self: QJSManagedValue) bool {
        return qtc.QJSManagedValue_IsBoolean(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isNumber` instead
    ///
    pub const IsNumber = isNumber;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    pub fn isNumber(self: QJSManagedValue) bool {
        return qtc.QJSManagedValue_IsNumber(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isString` instead
    ///
    pub const IsString = isString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    pub fn isString(self: QJSManagedValue) bool {
        return qtc.QJSManagedValue_IsString(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isObject` instead
    ///
    pub const IsObject = isObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    pub fn isObject(self: QJSManagedValue) bool {
        return qtc.QJSManagedValue_IsObject(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSymbol` instead
    ///
    pub const IsSymbol = isSymbol;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isSymbol)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    pub fn isSymbol(self: QJSManagedValue) bool {
        return qtc.QJSManagedValue_IsSymbol(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isFunction` instead
    ///
    pub const IsFunction = isFunction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isFunction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    pub fn isFunction(self: QJSManagedValue) bool {
        return qtc.QJSManagedValue_IsFunction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInteger` instead
    ///
    pub const IsInteger = isInteger;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    pub fn isInteger(self: QJSManagedValue) bool {
        return qtc.QJSManagedValue_IsInteger(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    pub fn isNull(self: QJSManagedValue) bool {
        return qtc.QJSManagedValue_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isRegularExpression` instead
    ///
    pub const IsRegularExpression = isRegularExpression;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isRegularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    pub fn isRegularExpression(self: QJSManagedValue) bool {
        return qtc.QJSManagedValue_IsRegularExpression(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isArray` instead
    ///
    pub const IsArray = isArray;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isArray)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    pub fn isArray(self: QJSManagedValue) bool {
        return qtc.QJSManagedValue_IsArray(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isUrl` instead
    ///
    pub const IsUrl = isUrl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    pub fn isUrl(self: QJSManagedValue) bool {
        return qtc.QJSManagedValue_IsUrl(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isVariant` instead
    ///
    pub const IsVariant = isVariant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isVariant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    pub fn isVariant(self: QJSManagedValue) bool {
        return qtc.QJSManagedValue_IsVariant(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isQObject` instead
    ///
    pub const IsQObject = isQObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isQObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    pub fn isQObject(self: QJSManagedValue) bool {
        return qtc.QJSManagedValue_IsQObject(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isQMetaObject` instead
    ///
    pub const IsQMetaObject = isQMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isQMetaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    pub fn isQMetaObject(self: QJSManagedValue) bool {
        return qtc.QJSManagedValue_IsQMetaObject(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDate` instead
    ///
    pub const IsDate = isDate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    pub fn isDate(self: QJSManagedValue) bool {
        return qtc.QJSManagedValue_IsDate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isError` instead
    ///
    pub const IsError = isError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    pub fn isError(self: QJSManagedValue) bool {
        return qtc.QJSManagedValue_IsError(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isJsMetaType` instead
    ///
    pub const IsJsMetaType = isJsMetaType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#isJsMetaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    pub fn isJsMetaType(self: QJSManagedValue) bool {
        return qtc.QJSManagedValue_IsJsMetaType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toString` instead
    ///
    pub const ToString = toString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toString(self: QJSManagedValue, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QJSManagedValue_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QJSManagedValue.toString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toNumber` instead
    ///
    pub const ToNumber = toNumber;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#toNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    pub fn toNumber(self: QJSManagedValue) f64 {
        return qtc.QJSManagedValue_ToNumber(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toBoolean` instead
    ///
    pub const ToBoolean = toBoolean;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#toBoolean)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    pub fn toBoolean(self: QJSManagedValue) bool {
        return qtc.QJSManagedValue_ToBoolean(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toPrimitive` instead
    ///
    pub const ToPrimitive = toPrimitive;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#toPrimitive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    pub fn toPrimitive(self: QJSManagedValue) QJSPrimitiveValue {
        return .{ .ptr = qtc.QJSManagedValue_ToPrimitive(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toJSValue` instead
    ///
    pub const ToJSValue = toJSValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#toJSValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    pub fn toJSValue(self: QJSManagedValue) QJSValue {
        return .{ .ptr = qtc.QJSManagedValue_ToJSValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toVariant` instead
    ///
    pub const ToVariant = toVariant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#toVariant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    pub fn toVariant(self: QJSManagedValue) QVariant {
        return .{ .ptr = qtc.QJSManagedValue_ToVariant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toInteger` instead
    ///
    pub const ToInteger = toInteger;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#toInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    pub fn toInteger(self: QJSManagedValue) i32 {
        return qtc.QJSManagedValue_ToInteger(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toRegularExpression` instead
    ///
    pub const ToRegularExpression = toRegularExpression;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#toRegularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    pub fn toRegularExpression(self: QJSManagedValue) QRegularExpression {
        return .{ .ptr = qtc.QJSManagedValue_ToRegularExpression(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toUrl` instead
    ///
    pub const ToUrl = toUrl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#toUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    pub fn toUrl(self: QJSManagedValue) QUrl {
        return .{ .ptr = qtc.QJSManagedValue_ToUrl(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toQObject` instead
    ///
    pub const ToQObject = toQObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#toQObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    pub fn toQObject(self: QJSManagedValue) QObject {
        return .{ .ptr = qtc.QJSManagedValue_ToQObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toQMetaObject` instead
    ///
    pub const ToQMetaObject = toQMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#toQMetaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    pub fn toQMetaObject(self: QJSManagedValue) QMetaObject {
        return .{ .ptr = qtc.QJSManagedValue_ToQMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toDateTime` instead
    ///
    pub const ToDateTime = toDateTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#toDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    pub fn toDateTime(self: QJSManagedValue) QDateTime {
        return .{ .ptr = qtc.QJSManagedValue_ToDateTime(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `hasProperty` instead
    ///
    pub const HasProperty = hasProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#hasProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    /// ` name: []const u8 `
    ///
    pub fn hasProperty(self: QJSManagedValue, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QJSManagedValue_HasProperty(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `hasOwnProperty` instead
    ///
    pub const HasOwnProperty = hasOwnProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#hasOwnProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    /// ` name: []const u8 `
    ///
    pub fn hasOwnProperty(self: QJSManagedValue, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QJSManagedValue_HasOwnProperty(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    /// ` name: []const u8 `
    ///
    pub fn property(self: QJSManagedValue, name: []const u8) QJSValue {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QJSManagedValue_Property(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    /// ` name: []const u8 `
    ///
    /// ` value: QJSValue `
    ///
    pub fn setProperty(self: QJSManagedValue, name: []const u8, value: anytype) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(value)._is_QJSValue;
        qtc.QJSManagedValue_SetProperty(@ptrCast(self.ptr), name_str, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `deleteProperty` instead
    ///
    pub const DeleteProperty = deleteProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#deleteProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    /// ` name: []const u8 `
    ///
    pub fn deleteProperty(self: QJSManagedValue, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QJSManagedValue_DeleteProperty(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `hasProperty2` instead
    ///
    pub const HasProperty2 = hasProperty2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#hasProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    /// ` arrayIndex: u32 `
    ///
    pub fn hasProperty2(self: QJSManagedValue, arrayIndex: u32) bool {
        return qtc.QJSManagedValue_HasProperty2(@ptrCast(self.ptr), @bitCast(arrayIndex));
    }

    /// ### DEPRECATED: Use `hasOwnProperty2` instead
    ///
    pub const HasOwnProperty2 = hasOwnProperty2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#hasOwnProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    /// ` arrayIndex: u32 `
    ///
    pub fn hasOwnProperty2(self: QJSManagedValue, arrayIndex: u32) bool {
        return qtc.QJSManagedValue_HasOwnProperty2(@ptrCast(self.ptr), @bitCast(arrayIndex));
    }

    /// ### DEPRECATED: Use `property2` instead
    ///
    pub const Property2 = property2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    /// ` arrayIndex: u32 `
    ///
    pub fn property2(self: QJSManagedValue, arrayIndex: u32) QJSValue {
        return .{ .ptr = qtc.QJSManagedValue_Property2(@ptrCast(self.ptr), @bitCast(arrayIndex)) };
    }

    /// ### DEPRECATED: Use `setProperty2` instead
    ///
    pub const SetProperty2 = setProperty2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    /// ` arrayIndex: u32 `
    ///
    /// ` value: QJSValue `
    ///
    pub fn setProperty2(self: QJSManagedValue, arrayIndex: u32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QJSValue;
        qtc.QJSManagedValue_SetProperty2(@ptrCast(self.ptr), @bitCast(arrayIndex), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `deleteProperty2` instead
    ///
    pub const DeleteProperty2 = deleteProperty2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#deleteProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    /// ` arrayIndex: u32 `
    ///
    pub fn deleteProperty2(self: QJSManagedValue, arrayIndex: u32) bool {
        return qtc.QJSManagedValue_DeleteProperty2(@ptrCast(self.ptr), @bitCast(arrayIndex));
    }

    /// ### DEPRECATED: Use `call` instead
    ///
    pub const Call = call;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#call)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    pub fn call(self: QJSManagedValue) QJSValue {
        return .{ .ptr = qtc.QJSManagedValue_Call(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `callWithInstance` instead
    ///
    pub const CallWithInstance = callWithInstance;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#callWithInstance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    /// ` instance: QJSValue `
    ///
    pub fn callWithInstance(self: QJSManagedValue, instance: anytype) QJSValue {
        comptime _ = @TypeOf(instance)._is_QJSValue;
        return .{ .ptr = qtc.QJSManagedValue_CallWithInstance(@ptrCast(self.ptr), @ptrCast(instance.ptr)) };
    }

    /// ### DEPRECATED: Use `callAsConstructor` instead
    ///
    pub const CallAsConstructor = callAsConstructor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#callAsConstructor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    pub fn callAsConstructor(self: QJSManagedValue) QJSValue {
        return .{ .ptr = qtc.QJSManagedValue_CallAsConstructor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `jsMetaType` instead
    ///
    pub const JsMetaType = jsMetaType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#jsMetaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    pub fn jsMetaType(self: QJSManagedValue) QJSManagedValue {
        return .{ .ptr = qtc.QJSManagedValue_JsMetaType(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `jsMetaMembers` instead
    ///
    pub const JsMetaMembers = jsMetaMembers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#jsMetaMembers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn jsMetaMembers(self: QJSManagedValue, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QJSManagedValue_JsMetaMembers(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QJSManagedValue.jsMetaMembers: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QJSManagedValue.jsMetaMembers: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `jsMetaInstantiate` instead
    ///
    pub const JsMetaInstantiate = jsMetaInstantiate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#jsMetaInstantiate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    pub fn jsMetaInstantiate(self: QJSManagedValue) QJSManagedValue {
        return .{ .ptr = qtc.QJSManagedValue_JsMetaInstantiate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `call1` instead
    ///
    pub const Call1 = call1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#call)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    /// ` arguments: []QJSValue `
    ///
    pub fn call1(self: QJSManagedValue, arguments: []QJSValue) QJSValue {
        const arguments_list = qtc.libqt_list{
            .len = arguments.len,
            .data = @ptrCast(arguments.ptr),
        };
        return .{ .ptr = qtc.QJSManagedValue_Call1(@ptrCast(self.ptr), arguments_list) };
    }

    /// ### DEPRECATED: Use `callWithInstance2` instead
    ///
    pub const CallWithInstance2 = callWithInstance2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#callWithInstance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    /// ` instance: QJSValue `
    ///
    /// ` arguments: []QJSValue `
    ///
    pub fn callWithInstance2(self: QJSManagedValue, instance: anytype, arguments: []QJSValue) QJSValue {
        comptime _ = @TypeOf(instance)._is_QJSValue;
        const arguments_list = qtc.libqt_list{
            .len = arguments.len,
            .data = @ptrCast(arguments.ptr),
        };
        return .{ .ptr = qtc.QJSManagedValue_CallWithInstance2(@ptrCast(self.ptr), @ptrCast(instance.ptr), arguments_list) };
    }

    /// ### DEPRECATED: Use `callAsConstructor1` instead
    ///
    pub const CallAsConstructor1 = callAsConstructor1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#callAsConstructor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    /// ` arguments: []QJSValue `
    ///
    pub fn callAsConstructor1(self: QJSManagedValue, arguments: []QJSValue) QJSValue {
        const arguments_list = qtc.libqt_list{
            .len = arguments.len,
            .data = @ptrCast(arguments.ptr),
        };
        return .{ .ptr = qtc.QJSManagedValue_CallAsConstructor1(@ptrCast(self.ptr), arguments_list) };
    }

    /// ### DEPRECATED: Use `jsMetaInstantiate1` instead
    ///
    pub const JsMetaInstantiate1 = jsMetaInstantiate1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#jsMetaInstantiate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSManagedValue `
    ///
    /// ` values: []QJSValue `
    ///
    pub fn jsMetaInstantiate1(self: QJSManagedValue, values: []QJSValue) QJSManagedValue {
        const values_list = qtc.libqt_list{
            .len = values.len,
            .data = @ptrCast(values.ptr),
        };
        return .{ .ptr = qtc.QJSManagedValue_JsMetaInstantiate1(@ptrCast(self.ptr), values_list) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#dtor.QJSManagedValue)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QJSManagedValue `
    ///
    pub fn delete(self: QJSManagedValue) void {
        qtc.QJSManagedValue_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qjsmanagedvalue.html#public-types)
pub const enums = struct {
    pub const Type = enum {
        pub const Undefined: i32 = 0;
        pub const Boolean: i32 = 1;
        pub const Number: i32 = 2;
        pub const String: i32 = 3;
        pub const Object: i32 = 4;
        pub const Symbol: i32 = 5;
        pub const Function: i32 = 6;
    };
};
