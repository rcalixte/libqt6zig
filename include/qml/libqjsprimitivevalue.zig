const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QMetaType = @import("libqt6").QMetaType;
const QVariant = @import("libqt6").QVariant;
const qjsprimitivevalue_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qjsprimitiveundefined.html)
pub const QJSPrimitiveUndefined = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsprimitiveundefined.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QJSPrimitiveUndefined,

    pub const _is_QJSPrimitiveUndefined = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QJSPrimitiveUndefined object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QJSPrimitiveUndefined `
    ///
    pub fn new(other: anytype) QJSPrimitiveUndefined {
        comptime _ = @TypeOf(other)._is_QJSPrimitiveUndefined;
        return .{ .ptr = qtc.QJSPrimitiveUndefined_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QJSPrimitiveUndefined object and invalidate the source QJSPrimitiveUndefined object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QJSPrimitiveUndefined `
    ///
    pub fn new2(other: anytype) QJSPrimitiveUndefined {
        comptime _ = @TypeOf(other)._is_QJSPrimitiveUndefined;
        return .{ .ptr = qtc.QJSPrimitiveUndefined_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QJSPrimitiveUndefined object in C++ memory
    ///
    pub fn new3() QJSPrimitiveUndefined {
        return .{ .ptr = qtc.QJSPrimitiveUndefined_new3() };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QJSPrimitiveUndefined object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QJSPrimitiveUndefined `
    ///
    pub fn new4(param1: anytype) QJSPrimitiveUndefined {
        comptime _ = @TypeOf(param1)._is_QJSPrimitiveUndefined;
        return .{ .ptr = qtc.QJSPrimitiveUndefined_new4(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QJSPrimitiveUndefined `
    ///
    /// ` other: QJSPrimitiveUndefined `
    ///
    pub fn copyAssign(self: QJSPrimitiveUndefined, other: QJSPrimitiveUndefined) void {
        qtc.QJSPrimitiveUndefined_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QJSPrimitiveUndefined `
    ///
    /// ` other: QJSPrimitiveUndefined `
    ///
    pub fn moveAssign(self: QJSPrimitiveUndefined, other: QJSPrimitiveUndefined) void {
        qtc.QJSPrimitiveUndefined_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsprimitiveundefined.html#dtor.QJSPrimitiveUndefined)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QJSPrimitiveUndefined `
    ///
    pub fn delete(self: QJSPrimitiveUndefined) void {
        qtc.QJSPrimitiveUndefined_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivenull.html)
pub const QJSPrimitiveNull = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivenull.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QJSPrimitiveNull,

    pub const _is_QJSPrimitiveNull = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QJSPrimitiveNull object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QJSPrimitiveNull `
    ///
    pub fn new(other: anytype) QJSPrimitiveNull {
        comptime _ = @TypeOf(other)._is_QJSPrimitiveNull;
        return .{ .ptr = qtc.QJSPrimitiveNull_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QJSPrimitiveNull object and invalidate the source QJSPrimitiveNull object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QJSPrimitiveNull `
    ///
    pub fn new2(other: anytype) QJSPrimitiveNull {
        comptime _ = @TypeOf(other)._is_QJSPrimitiveNull;
        return .{ .ptr = qtc.QJSPrimitiveNull_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QJSPrimitiveNull object in C++ memory
    ///
    pub fn new3() QJSPrimitiveNull {
        return .{ .ptr = qtc.QJSPrimitiveNull_new3() };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QJSPrimitiveNull object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QJSPrimitiveNull `
    ///
    pub fn new4(param1: anytype) QJSPrimitiveNull {
        comptime _ = @TypeOf(param1)._is_QJSPrimitiveNull;
        return .{ .ptr = qtc.QJSPrimitiveNull_new4(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QJSPrimitiveNull `
    ///
    /// ` other: QJSPrimitiveNull `
    ///
    pub fn copyAssign(self: QJSPrimitiveNull, other: QJSPrimitiveNull) void {
        qtc.QJSPrimitiveNull_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QJSPrimitiveNull `
    ///
    /// ` other: QJSPrimitiveNull `
    ///
    pub fn moveAssign(self: QJSPrimitiveNull, other: QJSPrimitiveNull) void {
        qtc.QJSPrimitiveNull_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivenull.html#dtor.QJSPrimitiveNull)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QJSPrimitiveNull `
    ///
    pub fn delete(self: QJSPrimitiveNull) void {
        qtc.QJSPrimitiveNull_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html)
pub const QJSPrimitiveValue = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QJSPrimitiveValue,

    pub const _is_QJSPrimitiveValue = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QJSPrimitiveValue object in C++ memory
    ///
    pub fn new() QJSPrimitiveValue {
        return .{ .ptr = qtc.QJSPrimitiveValue_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QJSPrimitiveValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` undefinedVal: QJSPrimitiveUndefined `
    ///
    pub fn new2(undefinedVal: anytype) QJSPrimitiveValue {
        comptime _ = @TypeOf(undefinedVal)._is_QJSPrimitiveUndefined;
        return .{ .ptr = qtc.QJSPrimitiveValue_new2(@ptrCast(undefinedVal.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QJSPrimitiveValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` nullVal: QJSPrimitiveNull `
    ///
    pub fn new3(nullVal: anytype) QJSPrimitiveValue {
        comptime _ = @TypeOf(nullVal)._is_QJSPrimitiveNull;
        return .{ .ptr = qtc.QJSPrimitiveValue_new3(@ptrCast(nullVal.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QJSPrimitiveValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` value: bool `
    ///
    pub fn new4(value: bool) QJSPrimitiveValue {
        return .{ .ptr = qtc.QJSPrimitiveValue_new4(value) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QJSPrimitiveValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` value: i32 `
    ///
    pub fn new5(value: i32) QJSPrimitiveValue {
        return .{ .ptr = qtc.QJSPrimitiveValue_new5(@bitCast(value)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QJSPrimitiveValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` value: f64 `
    ///
    pub fn new6(value: f64) QJSPrimitiveValue {
        return .{ .ptr = qtc.QJSPrimitiveValue_new6(@bitCast(value)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QJSPrimitiveValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` string: []const u8 `
    ///
    pub fn new7(string: []const u8) QJSPrimitiveValue {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        return .{ .ptr = qtc.QJSPrimitiveValue_new7(string_str) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new QJSPrimitiveValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: QMetaType `
    ///
    /// ` value: ?*const anyopaque `
    ///
    pub fn new8(typeVal: anytype, value: ?*const anyopaque) QJSPrimitiveValue {
        comptime _ = @TypeOf(typeVal)._is_QMetaType;
        return .{ .ptr = qtc.QJSPrimitiveValue_new8(@ptrCast(typeVal.ptr), @ptrCast(value)) };
    }

    /// ### DEPRECATED: Use `new9` instead
    ///
    pub const New9 = new9;

    /// Allocate a new QJSPrimitiveValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: QMetaType `
    ///
    pub fn new9(typeVal: anytype) QJSPrimitiveValue {
        comptime _ = @TypeOf(typeVal)._is_QMetaType;
        return .{ .ptr = qtc.QJSPrimitiveValue_new9(@ptrCast(typeVal.ptr)) };
    }

    /// ### DEPRECATED: Use `new10` instead
    ///
    pub const New10 = new10;

    /// Allocate a new QJSPrimitiveValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` variant: QVariant `
    ///
    pub fn new10(variant: anytype) QJSPrimitiveValue {
        comptime _ = @TypeOf(variant)._is_QVariant;
        return .{ .ptr = qtc.QJSPrimitiveValue_new10(@ptrCast(variant.ptr)) };
    }

    /// ### DEPRECATED: Use `new11` instead
    ///
    pub const New11 = new11;

    /// Allocate a new QJSPrimitiveValue object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QJSPrimitiveValue `
    ///
    pub fn new11(param1: anytype) QJSPrimitiveValue {
        comptime _ = @TypeOf(param1)._is_QJSPrimitiveValue;
        return .{ .ptr = qtc.QJSPrimitiveValue_new11(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSPrimitiveValue `
    ///
    /// ## Returns:
    ///
    /// ` qjsprimitivevalue_enums.Type `
    ///
    pub fn type0(self: QJSPrimitiveValue) u8 {
        return qtc.QJSPrimitiveValue_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `metaType` instead
    ///
    pub const MetaType = metaType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html#metaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSPrimitiveValue `
    ///
    pub fn metaType(self: QJSPrimitiveValue) QMetaType {
        return .{ .ptr = qtc.QJSPrimitiveValue_MetaType(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `data` instead
    ///
    pub const Data = data;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSPrimitiveValue `
    ///
    pub fn data(self: QJSPrimitiveValue) ?*anyopaque {
        return qtc.QJSPrimitiveValue_Data(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `data2` instead
    ///
    pub const Data2 = data2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSPrimitiveValue `
    ///
    pub fn data2(self: QJSPrimitiveValue) ?*const anyopaque {
        return qtc.QJSPrimitiveValue_Data2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `constData` instead
    ///
    pub const ConstData = constData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html#constData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSPrimitiveValue `
    ///
    pub fn constData(self: QJSPrimitiveValue) ?*const anyopaque {
        return qtc.QJSPrimitiveValue_ConstData(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toBoolean` instead
    ///
    pub const ToBoolean = toBoolean;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html#toBoolean)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSPrimitiveValue `
    ///
    pub fn toBoolean(self: QJSPrimitiveValue) bool {
        return qtc.QJSPrimitiveValue_ToBoolean(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toInteger` instead
    ///
    pub const ToInteger = toInteger;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html#toInteger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSPrimitiveValue `
    ///
    pub fn toInteger(self: QJSPrimitiveValue) i32 {
        return qtc.QJSPrimitiveValue_ToInteger(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toDouble` instead
    ///
    pub const ToDouble = toDouble;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html#toDouble)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSPrimitiveValue `
    ///
    pub fn toDouble(self: QJSPrimitiveValue) f64 {
        return qtc.QJSPrimitiveValue_ToDouble(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toString` instead
    ///
    pub const ToString = toString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSPrimitiveValue `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toString(self: QJSPrimitiveValue, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QJSPrimitiveValue_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QJSPrimitiveValue.toString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toVariant` instead
    ///
    pub const ToVariant = toVariant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html#toVariant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSPrimitiveValue `
    ///
    pub fn toVariant(self: QJSPrimitiveValue) QVariant {
        return .{ .ptr = qtc.QJSPrimitiveValue_ToVariant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorPlusPlus` instead
    ///
    pub const OperatorPlusPlus = operatorPlusPlus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSPrimitiveValue `
    ///
    pub fn operatorPlusPlus(self: QJSPrimitiveValue) QJSPrimitiveValue {
        return .{ .ptr = qtc.QJSPrimitiveValue_OperatorPlusPlus(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorPlusPlus2` instead
    ///
    pub const OperatorPlusPlus2 = operatorPlusPlus2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html#operator-2b-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSPrimitiveValue `
    ///
    /// ` param1: i32 `
    ///
    pub fn operatorPlusPlus2(self: QJSPrimitiveValue, param1: i32) QJSPrimitiveValue {
        return .{ .ptr = qtc.QJSPrimitiveValue_OperatorPlusPlus2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `operatorMinusMinus` instead
    ///
    pub const OperatorMinusMinus = operatorMinusMinus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html#operator--)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSPrimitiveValue `
    ///
    pub fn operatorMinusMinus(self: QJSPrimitiveValue) QJSPrimitiveValue {
        return .{ .ptr = qtc.QJSPrimitiveValue_OperatorMinusMinus(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMinusMinus2` instead
    ///
    pub const OperatorMinusMinus2 = operatorMinusMinus2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html#operator--)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSPrimitiveValue `
    ///
    /// ` param1: i32 `
    ///
    pub fn operatorMinusMinus2(self: QJSPrimitiveValue, param1: i32) QJSPrimitiveValue {
        return .{ .ptr = qtc.QJSPrimitiveValue_OperatorMinusMinus2(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `operatorPlus` instead
    ///
    pub const OperatorPlus = operatorPlus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html#operator-2b)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSPrimitiveValue `
    ///
    pub fn operatorPlus(self: QJSPrimitiveValue) QJSPrimitiveValue {
        return .{ .ptr = qtc.QJSPrimitiveValue_OperatorPlus(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorMinus` instead
    ///
    pub const OperatorMinus = operatorMinus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html#operator-)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSPrimitiveValue `
    ///
    pub fn operatorMinus(self: QJSPrimitiveValue) QJSPrimitiveValue {
        return .{ .ptr = qtc.QJSPrimitiveValue_OperatorMinus(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `strictlyEquals` instead
    ///
    pub const StrictlyEquals = strictlyEquals;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html#strictlyEquals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSPrimitiveValue `
    ///
    /// ` other: QJSPrimitiveValue `
    ///
    pub fn strictlyEquals(self: QJSPrimitiveValue, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QJSPrimitiveValue;
        return qtc.QJSPrimitiveValue_StrictlyEquals(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `equals` instead
    ///
    pub const Equals = equals;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html#equals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSPrimitiveValue `
    ///
    /// ` other: QJSPrimitiveValue `
    ///
    pub fn equals(self: QJSPrimitiveValue, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QJSPrimitiveValue;
        return qtc.QJSPrimitiveValue_Equals(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QJSPrimitiveValue `
    ///
    /// ` param1: QJSPrimitiveValue `
    ///
    pub fn operatorAssign(self: QJSPrimitiveValue, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QJSPrimitiveValue;
        qtc.QJSPrimitiveValue_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html#dtor.QJSPrimitiveValue)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QJSPrimitiveValue `
    ///
    pub fn delete(self: QJSPrimitiveValue) void {
        qtc.QJSPrimitiveValue_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qjsprimitivevalue.html#public-types)
pub const enums = struct {
    pub const Type = enum {
        pub const Undefined: u8 = 0;
        pub const Null: u8 = 1;
        pub const Boolean: u8 = 2;
        pub const Integer: u8 = 3;
        pub const Double: u8 = 4;
        pub const String: u8 = 5;
    };
};
