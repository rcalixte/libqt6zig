const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBrush = @import("libqt6").QBrush;
const QColor = @import("libqt6").QColor;
const QFont = @import("libqt6").QFont;
const QPen = @import("libqt6").QPen;
const QTextOption__Tab = @import("libqt6").QTextOption__Tab;
const QVariant = @import("libqt6").QVariant;
const qfont_enums = @import("libqfont.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qtextformat_enums = enums;
const std = @import("std");
const ArrayMap_i32_QVariant = std.array_hash_map.Auto(i32, QVariant);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlength.html)
pub const QTextLength = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlength.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTextLength,

    pub const _is_QTextLength = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTextLength object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTextLength `
    ///
    pub fn new(other: anytype) QTextLength {
        comptime _ = @TypeOf(other)._is_QTextLength;
        return .{ .ptr = qtc.QTextLength_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QTextLength object and invalidate the source QTextLength object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTextLength `
    ///
    pub fn new2(other: anytype) QTextLength {
        comptime _ = @TypeOf(other)._is_QTextLength;
        return .{ .ptr = qtc.QTextLength_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QTextLength object in C++ memory
    ///
    pub fn new3() QTextLength {
        return .{ .ptr = qtc.QTextLength_new3() };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QTextLength object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qtextformat_enums.Type `
    ///
    /// ` _value: f64 `
    ///
    pub fn new4(typeVal: i32, _value: f64) QTextLength {
        return .{ .ptr = qtc.QTextLength_new4(@bitCast(typeVal), @bitCast(_value)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QTextLength object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QTextLength `
    ///
    pub fn new5(param1: anytype) QTextLength {
        comptime _ = @TypeOf(param1)._is_QTextLength;
        return .{ .ptr = qtc.QTextLength_new5(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextLength `
    ///
    /// ` other: QTextLength `
    ///
    pub fn copyAssign(self: QTextLength, other: QTextLength) void {
        qtc.QTextLength_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextLength `
    ///
    /// ` other: QTextLength `
    ///
    pub fn moveAssign(self: QTextLength, other: QTextLength) void {
        qtc.QTextLength_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlength.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLength `
    ///
    /// ## Returns:
    ///
    /// ` qtextformat_enums.Type `
    ///
    pub fn type0(self: QTextLength) i32 {
        return qtc.QTextLength_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `value` instead
    ///
    pub const Value = value;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlength.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLength `
    ///
    /// ` maximumLength: f64 `
    ///
    pub fn value(self: QTextLength, maximumLength: f64) f64 {
        return qtc.QTextLength_Value(@ptrCast(self.ptr), @bitCast(maximumLength));
    }

    /// ### DEPRECATED: Use `rawValue` instead
    ///
    pub const RawValue = rawValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlength.html#rawValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLength `
    ///
    pub fn rawValue(self: QTextLength) f64 {
        return qtc.QTextLength_RawValue(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlength.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLength `
    ///
    /// ` other: QTextLength `
    ///
    pub fn operatorEqual(self: QTextLength, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QTextLength;
        return qtc.QTextLength_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlength.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLength `
    ///
    /// ` other: QTextLength `
    ///
    pub fn operatorNotEqual(self: QTextLength, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QTextLength;
        return qtc.QTextLength_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `toQVariant` instead
    ///
    pub const ToQVariant = toQVariant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlength.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLength `
    ///
    pub fn toQVariant(self: QTextLength) QVariant {
        return .{ .ptr = qtc.QTextLength_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlength.html#dtor.QTextLength)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextLength `
    ///
    pub fn delete(self: QTextLength) void {
        qtc.QTextLength_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html)
pub const QTextFormat = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTextFormat,

    pub const _is_QTextFormat = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTextFormat object in C++ memory
    ///
    pub fn new() QTextFormat {
        return .{ .ptr = qtc.QTextFormat_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QTextFormat object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: i32 `
    ///
    pub fn new2(typeVal: i32) QTextFormat {
        return .{ .ptr = qtc.QTextFormat_new2(@bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QTextFormat object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn new3(rhs: anytype) QTextFormat {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        return .{ .ptr = qtc.QTextFormat_new3(@ptrCast(rhs.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn operatorAssign(self: QTextFormat, rhs: anytype) void {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        qtc.QTextFormat_OperatorAssign(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ` other: QTextFormat `
    ///
    pub fn swap(self: QTextFormat, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTextFormat;
        qtc.QTextFormat_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `merge` instead
    ///
    pub const Merge = merge;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#merge)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ` other: QTextFormat `
    ///
    pub fn merge(self: QTextFormat, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTextFormat;
        qtc.QTextFormat_Merge(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    pub fn isValid(self: QTextFormat) bool {
        return qtc.QTextFormat_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    pub fn isEmpty(self: QTextFormat) bool {
        return qtc.QTextFormat_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    pub fn type0(self: QTextFormat) i32 {
        return qtc.QTextFormat_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `objectIndex` instead
    ///
    pub const ObjectIndex = objectIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#objectIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    pub fn objectIndex(self: QTextFormat) i32 {
        return qtc.QTextFormat_ObjectIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setObjectIndex` instead
    ///
    pub const SetObjectIndex = setObjectIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setObjectIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ` object: i32 `
    ///
    pub fn setObjectIndex(self: QTextFormat, object: i32) void {
        qtc.QTextFormat_SetObjectIndex(@ptrCast(self.ptr), @bitCast(object));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn property(self: QTextFormat, propertyId: i32) QVariant {
        return .{ .ptr = qtc.QTextFormat_Property(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ` propertyId: i32 `
    ///
    /// ` _value: QVariant `
    ///
    pub fn setProperty(self: QTextFormat, propertyId: i32, _value: anytype) void {
        comptime _ = @TypeOf(_value)._is_QVariant;
        qtc.QTextFormat_SetProperty(@ptrCast(self.ptr), @bitCast(propertyId), @ptrCast(_value.ptr));
    }

    /// ### DEPRECATED: Use `clearProperty` instead
    ///
    pub const ClearProperty = clearProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn clearProperty(self: QTextFormat, propertyId: i32) void {
        qtc.QTextFormat_ClearProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// ### DEPRECATED: Use `hasProperty` instead
    ///
    pub const HasProperty = hasProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#hasProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn hasProperty(self: QTextFormat, propertyId: i32) bool {
        return qtc.QTextFormat_HasProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// ### DEPRECATED: Use `boolProperty` instead
    ///
    pub const BoolProperty = boolProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#boolProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn boolProperty(self: QTextFormat, propertyId: i32) bool {
        return qtc.QTextFormat_BoolProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// ### DEPRECATED: Use `intProperty` instead
    ///
    pub const IntProperty = intProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#intProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn intProperty(self: QTextFormat, propertyId: i32) i32 {
        return qtc.QTextFormat_IntProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// ### DEPRECATED: Use `doubleProperty` instead
    ///
    pub const DoubleProperty = doubleProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#doubleProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn doubleProperty(self: QTextFormat, propertyId: i32) f64 {
        return qtc.QTextFormat_DoubleProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// ### DEPRECATED: Use `stringProperty` instead
    ///
    pub const StringProperty = stringProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#stringProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn stringProperty(self: QTextFormat, allocator: std.mem.Allocator, propertyId: i32) []const u8 {
        var _str = qtc.QTextFormat_StringProperty(@ptrCast(self.ptr), @bitCast(propertyId));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextFormat.stringProperty: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `colorProperty` instead
    ///
    pub const ColorProperty = colorProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#colorProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn colorProperty(self: QTextFormat, propertyId: i32) QColor {
        return .{ .ptr = qtc.QTextFormat_ColorProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// ### DEPRECATED: Use `penProperty` instead
    ///
    pub const PenProperty = penProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#penProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn penProperty(self: QTextFormat, propertyId: i32) QPen {
        return .{ .ptr = qtc.QTextFormat_PenProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// ### DEPRECATED: Use `brushProperty` instead
    ///
    pub const BrushProperty = brushProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#brushProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn brushProperty(self: QTextFormat, propertyId: i32) QBrush {
        return .{ .ptr = qtc.QTextFormat_BrushProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// ### DEPRECATED: Use `lengthProperty` instead
    ///
    pub const LengthProperty = lengthProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#lengthProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn lengthProperty(self: QTextFormat, propertyId: i32) QTextLength {
        return .{ .ptr = qtc.QTextFormat_LengthProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// ### DEPRECATED: Use `lengthVectorProperty` instead
    ///
    pub const LengthVectorProperty = lengthVectorProperty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#lengthVectorProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn lengthVectorProperty(self: QTextFormat, allocator: std.mem.Allocator, propertyId: i32) []QTextLength {
        const _arr: qtc.libqt_list = qtc.QTextFormat_LengthVectorProperty(@ptrCast(self.ptr), @bitCast(propertyId));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTextLength, _arr.len) catch @panic("QTextFormat.lengthVectorProperty: Memory allocation failed");
        const _data_val: [*]QtC.QTextLength = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setProperty2` instead
    ///
    pub const SetProperty2 = setProperty2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ` propertyId: i32 `
    ///
    /// ` lengths: []QTextLength `
    ///
    pub fn setProperty2(self: QTextFormat, propertyId: i32, lengths: []QTextLength) void {
        const lengths_list = qtc.libqt_list{
            .len = lengths.len,
            .data = @ptrCast(lengths.ptr),
        };
        qtc.QTextFormat_SetProperty2(@ptrCast(self.ptr), @bitCast(propertyId), lengths_list);
    }

    /// ### DEPRECATED: Use `properties` instead
    ///
    pub const Properties = properties;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#properties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn properties(self: QTextFormat, allocator: std.mem.Allocator) ArrayMap_i32_QVariant {
        const _map: qtc.libqt_map = qtc.QTextFormat_Properties(@ptrCast(self.ptr));
        var _ret: ArrayMap_i32_QVariant = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("QTextFormat.properties: Total capacity allocation failed");
        defer {
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]QtC.QVariant = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            _ret.putAssumeCapacity(_key, .{ .ptr = @ptrCast(_value) });
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `propertyCount` instead
    ///
    pub const PropertyCount = propertyCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#propertyCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    pub fn propertyCount(self: QTextFormat) i32 {
        return qtc.QTextFormat_PropertyCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setObjectType` instead
    ///
    pub const SetObjectType = setObjectType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setObjectType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn setObjectType(self: QTextFormat, typeVal: i32) void {
        qtc.QTextFormat_SetObjectType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `objectType` instead
    ///
    pub const ObjectType = objectType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#objectType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    pub fn objectType(self: QTextFormat) i32 {
        return qtc.QTextFormat_ObjectType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCharFormat` instead
    ///
    pub const IsCharFormat = isCharFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    pub fn isCharFormat(self: QTextFormat) bool {
        return qtc.QTextFormat_IsCharFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isBlockFormat` instead
    ///
    pub const IsBlockFormat = isBlockFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isBlockFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    pub fn isBlockFormat(self: QTextFormat) bool {
        return qtc.QTextFormat_IsBlockFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isListFormat` instead
    ///
    pub const IsListFormat = isListFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isListFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    pub fn isListFormat(self: QTextFormat) bool {
        return qtc.QTextFormat_IsListFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isFrameFormat` instead
    ///
    pub const IsFrameFormat = isFrameFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isFrameFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    pub fn isFrameFormat(self: QTextFormat) bool {
        return qtc.QTextFormat_IsFrameFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isImageFormat` instead
    ///
    pub const IsImageFormat = isImageFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isImageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    pub fn isImageFormat(self: QTextFormat) bool {
        return qtc.QTextFormat_IsImageFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isTableFormat` instead
    ///
    pub const IsTableFormat = isTableFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isTableFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    pub fn isTableFormat(self: QTextFormat) bool {
        return qtc.QTextFormat_IsTableFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isTableCellFormat` instead
    ///
    pub const IsTableCellFormat = isTableCellFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isTableCellFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    pub fn isTableCellFormat(self: QTextFormat) bool {
        return qtc.QTextFormat_IsTableCellFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toBlockFormat` instead
    ///
    pub const ToBlockFormat = toBlockFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toBlockFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    pub fn toBlockFormat(self: QTextFormat) QTextBlockFormat {
        return .{ .ptr = qtc.QTextFormat_ToBlockFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toCharFormat` instead
    ///
    pub const ToCharFormat = toCharFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    pub fn toCharFormat(self: QTextFormat) QTextCharFormat {
        return .{ .ptr = qtc.QTextFormat_ToCharFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toListFormat` instead
    ///
    pub const ToListFormat = toListFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toListFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    pub fn toListFormat(self: QTextFormat) QTextListFormat {
        return .{ .ptr = qtc.QTextFormat_ToListFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toTableFormat` instead
    ///
    pub const ToTableFormat = toTableFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toTableFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    pub fn toTableFormat(self: QTextFormat) QTextTableFormat {
        return .{ .ptr = qtc.QTextFormat_ToTableFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toFrameFormat` instead
    ///
    pub const ToFrameFormat = toFrameFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toFrameFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    pub fn toFrameFormat(self: QTextFormat) QTextFrameFormat {
        return .{ .ptr = qtc.QTextFormat_ToFrameFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toImageFormat` instead
    ///
    pub const ToImageFormat = toImageFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toImageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    pub fn toImageFormat(self: QTextFormat) QTextImageFormat {
        return .{ .ptr = qtc.QTextFormat_ToImageFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toTableCellFormat` instead
    ///
    pub const ToTableCellFormat = toTableCellFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toTableCellFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    pub fn toTableCellFormat(self: QTextFormat) QTextTableCellFormat {
        return .{ .ptr = qtc.QTextFormat_ToTableCellFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn operatorEqual(self: QTextFormat, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        return qtc.QTextFormat_OperatorEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn operatorNotEqual(self: QTextFormat, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        return qtc.QTextFormat_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `toQVariant` instead
    ///
    pub const ToQVariant = toQVariant;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    pub fn toQVariant(self: QTextFormat) QVariant {
        return .{ .ptr = qtc.QTextFormat_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLayoutDirection` instead
    ///
    pub const SetLayoutDirection = setLayoutDirection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setLayoutDirection(self: QTextFormat, direction: i32) void {
        qtc.QTextFormat_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// ### DEPRECATED: Use `layoutDirection` instead
    ///
    pub const LayoutDirection = layoutDirection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn layoutDirection(self: QTextFormat) i32 {
        return qtc.QTextFormat_LayoutDirection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBackground` instead
    ///
    pub const SetBackground = setBackground;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ` brush: QBrush `
    ///
    pub fn setBackground(self: QTextFormat, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTextFormat_SetBackground(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `background` instead
    ///
    pub const Background = background;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#background)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    pub fn background(self: QTextFormat) QBrush {
        return .{ .ptr = qtc.QTextFormat_Background(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `clearBackground` instead
    ///
    pub const ClearBackground = clearBackground;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    pub fn clearBackground(self: QTextFormat) void {
        qtc.QTextFormat_ClearBackground(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setForeground` instead
    ///
    pub const SetForeground = setForeground;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    /// ` brush: QBrush `
    ///
    pub fn setForeground(self: QTextFormat, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTextFormat_SetForeground(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `foreground` instead
    ///
    pub const Foreground = foreground;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#foreground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    pub fn foreground(self: QTextFormat) QBrush {
        return .{ .ptr = qtc.QTextFormat_Foreground(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `clearForeground` instead
    ///
    pub const ClearForeground = clearForeground;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFormat `
    ///
    pub fn clearForeground(self: QTextFormat) void {
        qtc.QTextFormat_ClearForeground(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#dtor.QTextFormat)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextFormat `
    ///
    pub fn delete(self: QTextFormat) void {
        qtc.QTextFormat_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html)
pub const QTextCharFormat = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTextCharFormat,

    pub const _is_QTextCharFormat = {};
    pub const _is_QTextFormat = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTextCharFormat object in C++ memory
    ///
    pub fn new() QTextCharFormat {
        return .{ .ptr = qtc.QTextCharFormat_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QTextCharFormat object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QTextCharFormat `
    ///
    pub fn new2(param1: anytype) QTextCharFormat {
        comptime _ = @TypeOf(param1)._is_QTextCharFormat;
        return .{ .ptr = qtc.QTextCharFormat_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn isValid(self: QTextCharFormat) bool {
        return qtc.QTextCharFormat_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFont` instead
    ///
    pub const SetFont = setFont;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` _font: QFont `
    ///
    pub fn setFont(self: QTextCharFormat, _font: anytype) void {
        comptime _ = @TypeOf(_font)._is_QFont;
        qtc.QTextCharFormat_SetFont(@ptrCast(self.ptr), @ptrCast(_font.ptr));
    }

    /// ### DEPRECATED: Use `font` instead
    ///
    pub const Font = font;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn font(self: QTextCharFormat) QFont {
        return .{ .ptr = qtc.QTextCharFormat_Font(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFontFamily` instead
    ///
    pub const SetFontFamily = setFontFamily;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFamily)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` family: []const u8 `
    ///
    pub fn setFontFamily(self: QTextCharFormat, family: []const u8) void {
        const family_str = qtc.libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        qtc.QTextCharFormat_SetFontFamily(@ptrCast(self.ptr), family_str);
    }

    /// ### DEPRECATED: Use `fontFamily` instead
    ///
    pub const FontFamily = fontFamily;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontFamily)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn fontFamily(self: QTextCharFormat, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextCharFormat_FontFamily(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextCharFormat.fontFamily: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setFontFamilies` instead
    ///
    pub const SetFontFamilies = setFontFamilies;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFamilies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` families: []const []const u8 `
    ///
    pub fn setFontFamilies(self: QTextCharFormat, allocator: std.mem.Allocator, families: []const []const u8) void {
        const families_arr = allocator.alloc(qtc.libqt_string, families.len) catch @panic("QTextCharFormat.setFontFamilies: Memory allocation failed");
        defer allocator.free(families_arr);
        for (families, 0..families.len) |str_item, i|
            families_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const families_list = qtc.libqt_list{
            .len = families.len,
            .data = families_arr.ptr,
        };
        qtc.QTextCharFormat_SetFontFamilies(@ptrCast(self.ptr), families_list);
    }

    /// ### DEPRECATED: Use `fontFamilies` instead
    ///
    pub const FontFamilies = fontFamilies;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontFamilies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn fontFamilies(self: QTextCharFormat) QVariant {
        return .{ .ptr = qtc.QTextCharFormat_FontFamilies(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFontStyleName` instead
    ///
    pub const SetFontStyleName = setFontStyleName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` styleName: []const u8 `
    ///
    pub fn setFontStyleName(self: QTextCharFormat, styleName: []const u8) void {
        const styleName_str = qtc.libqt_string{
            .len = styleName.len,
            .data = styleName.ptr,
        };
        qtc.QTextCharFormat_SetFontStyleName(@ptrCast(self.ptr), styleName_str);
    }

    /// ### DEPRECATED: Use `fontStyleName` instead
    ///
    pub const FontStyleName = fontStyleName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn fontStyleName(self: QTextCharFormat) QVariant {
        return .{ .ptr = qtc.QTextCharFormat_FontStyleName(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFontPointSize` instead
    ///
    pub const SetFontPointSize = setFontPointSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontPointSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` size: f64 `
    ///
    pub fn setFontPointSize(self: QTextCharFormat, size: f64) void {
        qtc.QTextCharFormat_SetFontPointSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `fontPointSize` instead
    ///
    pub const FontPointSize = fontPointSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontPointSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn fontPointSize(self: QTextCharFormat) f64 {
        return qtc.QTextCharFormat_FontPointSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontWeight` instead
    ///
    pub const SetFontWeight = setFontWeight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontWeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` weight: i32 `
    ///
    pub fn setFontWeight(self: QTextCharFormat, weight: i32) void {
        qtc.QTextCharFormat_SetFontWeight(@ptrCast(self.ptr), @bitCast(weight));
    }

    /// ### DEPRECATED: Use `fontWeight` instead
    ///
    pub const FontWeight = fontWeight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontWeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn fontWeight(self: QTextCharFormat) i32 {
        return qtc.QTextCharFormat_FontWeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontItalic` instead
    ///
    pub const SetFontItalic = setFontItalic;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontItalic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` italic: bool `
    ///
    pub fn setFontItalic(self: QTextCharFormat, italic: bool) void {
        qtc.QTextCharFormat_SetFontItalic(@ptrCast(self.ptr), italic);
    }

    /// ### DEPRECATED: Use `fontItalic` instead
    ///
    pub const FontItalic = fontItalic;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontItalic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn fontItalic(self: QTextCharFormat) bool {
        return qtc.QTextCharFormat_FontItalic(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontCapitalization` instead
    ///
    pub const SetFontCapitalization = setFontCapitalization;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontCapitalization)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` capitalization: qfont_enums.Capitalization `
    ///
    pub fn setFontCapitalization(self: QTextCharFormat, capitalization: i32) void {
        qtc.QTextCharFormat_SetFontCapitalization(@ptrCast(self.ptr), @bitCast(capitalization));
    }

    /// ### DEPRECATED: Use `fontCapitalization` instead
    ///
    pub const FontCapitalization = fontCapitalization;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontCapitalization)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.Capitalization `
    ///
    pub fn fontCapitalization(self: QTextCharFormat) i32 {
        return qtc.QTextCharFormat_FontCapitalization(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontLetterSpacingType` instead
    ///
    pub const SetFontLetterSpacingType = setFontLetterSpacingType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontLetterSpacingType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` letterSpacingType: qfont_enums.SpacingType `
    ///
    pub fn setFontLetterSpacingType(self: QTextCharFormat, letterSpacingType: i32) void {
        qtc.QTextCharFormat_SetFontLetterSpacingType(@ptrCast(self.ptr), @bitCast(letterSpacingType));
    }

    /// ### DEPRECATED: Use `fontLetterSpacingType` instead
    ///
    pub const FontLetterSpacingType = fontLetterSpacingType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontLetterSpacingType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.SpacingType `
    ///
    pub fn fontLetterSpacingType(self: QTextCharFormat) i32 {
        return qtc.QTextCharFormat_FontLetterSpacingType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontLetterSpacing` instead
    ///
    pub const SetFontLetterSpacing = setFontLetterSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontLetterSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` spacing: f64 `
    ///
    pub fn setFontLetterSpacing(self: QTextCharFormat, spacing: f64) void {
        qtc.QTextCharFormat_SetFontLetterSpacing(@ptrCast(self.ptr), @bitCast(spacing));
    }

    /// ### DEPRECATED: Use `fontLetterSpacing` instead
    ///
    pub const FontLetterSpacing = fontLetterSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontLetterSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn fontLetterSpacing(self: QTextCharFormat) f64 {
        return qtc.QTextCharFormat_FontLetterSpacing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontWordSpacing` instead
    ///
    pub const SetFontWordSpacing = setFontWordSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontWordSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` spacing: f64 `
    ///
    pub fn setFontWordSpacing(self: QTextCharFormat, spacing: f64) void {
        qtc.QTextCharFormat_SetFontWordSpacing(@ptrCast(self.ptr), @bitCast(spacing));
    }

    /// ### DEPRECATED: Use `fontWordSpacing` instead
    ///
    pub const FontWordSpacing = fontWordSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontWordSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn fontWordSpacing(self: QTextCharFormat) f64 {
        return qtc.QTextCharFormat_FontWordSpacing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontUnderline` instead
    ///
    pub const SetFontUnderline = setFontUnderline;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontUnderline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` underline: bool `
    ///
    pub fn setFontUnderline(self: QTextCharFormat, underline: bool) void {
        qtc.QTextCharFormat_SetFontUnderline(@ptrCast(self.ptr), underline);
    }

    /// ### DEPRECATED: Use `fontUnderline` instead
    ///
    pub const FontUnderline = fontUnderline;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontUnderline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn fontUnderline(self: QTextCharFormat) bool {
        return qtc.QTextCharFormat_FontUnderline(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontOverline` instead
    ///
    pub const SetFontOverline = setFontOverline;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontOverline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` overline: bool `
    ///
    pub fn setFontOverline(self: QTextCharFormat, overline: bool) void {
        qtc.QTextCharFormat_SetFontOverline(@ptrCast(self.ptr), overline);
    }

    /// ### DEPRECATED: Use `fontOverline` instead
    ///
    pub const FontOverline = fontOverline;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontOverline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn fontOverline(self: QTextCharFormat) bool {
        return qtc.QTextCharFormat_FontOverline(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontStrikeOut` instead
    ///
    pub const SetFontStrikeOut = setFontStrikeOut;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStrikeOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` strikeOut: bool `
    ///
    pub fn setFontStrikeOut(self: QTextCharFormat, strikeOut: bool) void {
        qtc.QTextCharFormat_SetFontStrikeOut(@ptrCast(self.ptr), strikeOut);
    }

    /// ### DEPRECATED: Use `fontStrikeOut` instead
    ///
    pub const FontStrikeOut = fontStrikeOut;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontStrikeOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn fontStrikeOut(self: QTextCharFormat) bool {
        return qtc.QTextCharFormat_FontStrikeOut(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setUnderlineColor` instead
    ///
    pub const SetUnderlineColor = setUnderlineColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setUnderlineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` color: QColor `
    ///
    pub fn setUnderlineColor(self: QTextCharFormat, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QTextCharFormat_SetUnderlineColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `underlineColor` instead
    ///
    pub const UnderlineColor = underlineColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#underlineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn underlineColor(self: QTextCharFormat) QColor {
        return .{ .ptr = qtc.QTextCharFormat_UnderlineColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFontFixedPitch` instead
    ///
    pub const SetFontFixedPitch = setFontFixedPitch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFixedPitch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` fixedPitch: bool `
    ///
    pub fn setFontFixedPitch(self: QTextCharFormat, fixedPitch: bool) void {
        qtc.QTextCharFormat_SetFontFixedPitch(@ptrCast(self.ptr), fixedPitch);
    }

    /// ### DEPRECATED: Use `fontFixedPitch` instead
    ///
    pub const FontFixedPitch = fontFixedPitch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontFixedPitch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn fontFixedPitch(self: QTextCharFormat) bool {
        return qtc.QTextCharFormat_FontFixedPitch(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontStretch` instead
    ///
    pub const SetFontStretch = setFontStretch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` factor: i32 `
    ///
    pub fn setFontStretch(self: QTextCharFormat, factor: i32) void {
        qtc.QTextCharFormat_SetFontStretch(@ptrCast(self.ptr), @bitCast(factor));
    }

    /// ### DEPRECATED: Use `fontStretch` instead
    ///
    pub const FontStretch = fontStretch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn fontStretch(self: QTextCharFormat) i32 {
        return qtc.QTextCharFormat_FontStretch(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontStyleHint` instead
    ///
    pub const SetFontStyleHint = setFontStyleHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` hint: qfont_enums.StyleHint `
    ///
    pub fn setFontStyleHint(self: QTextCharFormat, hint: i32) void {
        qtc.QTextCharFormat_SetFontStyleHint(@ptrCast(self.ptr), @bitCast(hint));
    }

    /// ### DEPRECATED: Use `setFontStyleStrategy` instead
    ///
    pub const SetFontStyleStrategy = setFontStyleStrategy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleStrategy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` strategy: qfont_enums.StyleStrategy `
    ///
    pub fn setFontStyleStrategy(self: QTextCharFormat, strategy: i32) void {
        qtc.QTextCharFormat_SetFontStyleStrategy(@ptrCast(self.ptr), @bitCast(strategy));
    }

    /// ### DEPRECATED: Use `fontStyleHint` instead
    ///
    pub const FontStyleHint = fontStyleHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.StyleHint `
    ///
    pub fn fontStyleHint(self: QTextCharFormat) i32 {
        return qtc.QTextCharFormat_FontStyleHint(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `fontStyleStrategy` instead
    ///
    pub const FontStyleStrategy = fontStyleStrategy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleStrategy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.StyleStrategy `
    ///
    pub fn fontStyleStrategy(self: QTextCharFormat) i32 {
        return qtc.QTextCharFormat_FontStyleStrategy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontHintingPreference` instead
    ///
    pub const SetFontHintingPreference = setFontHintingPreference;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontHintingPreference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` hintingPreference: qfont_enums.HintingPreference `
    ///
    pub fn setFontHintingPreference(self: QTextCharFormat, hintingPreference: i32) void {
        qtc.QTextCharFormat_SetFontHintingPreference(@ptrCast(self.ptr), @bitCast(hintingPreference));
    }

    /// ### DEPRECATED: Use `fontHintingPreference` instead
    ///
    pub const FontHintingPreference = fontHintingPreference;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontHintingPreference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.HintingPreference `
    ///
    pub fn fontHintingPreference(self: QTextCharFormat) i32 {
        return qtc.QTextCharFormat_FontHintingPreference(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontKerning` instead
    ///
    pub const SetFontKerning = setFontKerning;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontKerning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` enable: bool `
    ///
    pub fn setFontKerning(self: QTextCharFormat, enable: bool) void {
        qtc.QTextCharFormat_SetFontKerning(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `fontKerning` instead
    ///
    pub const FontKerning = fontKerning;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontKerning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn fontKerning(self: QTextCharFormat) bool {
        return qtc.QTextCharFormat_FontKerning(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setUnderlineStyle` instead
    ///
    pub const SetUnderlineStyle = setUnderlineStyle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setUnderlineStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` style: qtextformat_enums.UnderlineStyle `
    ///
    pub fn setUnderlineStyle(self: QTextCharFormat, style: i32) void {
        qtc.QTextCharFormat_SetUnderlineStyle(@ptrCast(self.ptr), @bitCast(style));
    }

    /// ### DEPRECATED: Use `underlineStyle` instead
    ///
    pub const UnderlineStyle = underlineStyle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#underlineStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ## Returns:
    ///
    /// ` qtextformat_enums.UnderlineStyle `
    ///
    pub fn underlineStyle(self: QTextCharFormat) i32 {
        return qtc.QTextCharFormat_UnderlineStyle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVerticalAlignment` instead
    ///
    pub const SetVerticalAlignment = setVerticalAlignment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setVerticalAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` alignment: qtextformat_enums.VerticalAlignment `
    ///
    pub fn setVerticalAlignment(self: QTextCharFormat, alignment: i32) void {
        qtc.QTextCharFormat_SetVerticalAlignment(@ptrCast(self.ptr), @bitCast(alignment));
    }

    /// ### DEPRECATED: Use `verticalAlignment` instead
    ///
    pub const VerticalAlignment = verticalAlignment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#verticalAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ## Returns:
    ///
    /// ` qtextformat_enums.VerticalAlignment `
    ///
    pub fn verticalAlignment(self: QTextCharFormat) i32 {
        return qtc.QTextCharFormat_VerticalAlignment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTextOutline` instead
    ///
    pub const SetTextOutline = setTextOutline;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setTextOutline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` pen: QPen `
    ///
    pub fn setTextOutline(self: QTextCharFormat, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QTextCharFormat_SetTextOutline(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### DEPRECATED: Use `textOutline` instead
    ///
    pub const TextOutline = textOutline;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#textOutline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn textOutline(self: QTextCharFormat) QPen {
        return .{ .ptr = qtc.QTextCharFormat_TextOutline(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setToolTip` instead
    ///
    pub const SetToolTip = setToolTip;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` tip: []const u8 `
    ///
    pub fn setToolTip(self: QTextCharFormat, tip: []const u8) void {
        const tip_str = qtc.libqt_string{
            .len = tip.len,
            .data = tip.ptr,
        };
        qtc.QTextCharFormat_SetToolTip(@ptrCast(self.ptr), tip_str);
    }

    /// ### DEPRECATED: Use `toolTip` instead
    ///
    pub const ToolTip = toolTip;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#toolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toolTip(self: QTextCharFormat, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextCharFormat_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextCharFormat.toolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setSuperScriptBaseline` instead
    ///
    pub const SetSuperScriptBaseline = setSuperScriptBaseline;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setSuperScriptBaseline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` baseline: f64 `
    ///
    pub fn setSuperScriptBaseline(self: QTextCharFormat, baseline: f64) void {
        qtc.QTextCharFormat_SetSuperScriptBaseline(@ptrCast(self.ptr), @bitCast(baseline));
    }

    /// ### DEPRECATED: Use `superScriptBaseline` instead
    ///
    pub const SuperScriptBaseline = superScriptBaseline;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#superScriptBaseline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn superScriptBaseline(self: QTextCharFormat) f64 {
        return qtc.QTextCharFormat_SuperScriptBaseline(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSubScriptBaseline` instead
    ///
    pub const SetSubScriptBaseline = setSubScriptBaseline;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setSubScriptBaseline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` baseline: f64 `
    ///
    pub fn setSubScriptBaseline(self: QTextCharFormat, baseline: f64) void {
        qtc.QTextCharFormat_SetSubScriptBaseline(@ptrCast(self.ptr), @bitCast(baseline));
    }

    /// ### DEPRECATED: Use `subScriptBaseline` instead
    ///
    pub const SubScriptBaseline = subScriptBaseline;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#subScriptBaseline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn subScriptBaseline(self: QTextCharFormat) f64 {
        return qtc.QTextCharFormat_SubScriptBaseline(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBaselineOffset` instead
    ///
    pub const SetBaselineOffset = setBaselineOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setBaselineOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` baseline: f64 `
    ///
    pub fn setBaselineOffset(self: QTextCharFormat, baseline: f64) void {
        qtc.QTextCharFormat_SetBaselineOffset(@ptrCast(self.ptr), @bitCast(baseline));
    }

    /// ### DEPRECATED: Use `baselineOffset` instead
    ///
    pub const BaselineOffset = baselineOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#baselineOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn baselineOffset(self: QTextCharFormat) f64 {
        return qtc.QTextCharFormat_BaselineOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAnchor` instead
    ///
    pub const SetAnchor = setAnchor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` anchor: bool `
    ///
    pub fn setAnchor(self: QTextCharFormat, anchor: bool) void {
        qtc.QTextCharFormat_SetAnchor(@ptrCast(self.ptr), anchor);
    }

    /// ### DEPRECATED: Use `isAnchor` instead
    ///
    pub const IsAnchor = isAnchor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#isAnchor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn isAnchor(self: QTextCharFormat) bool {
        return qtc.QTextCharFormat_IsAnchor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAnchorHref` instead
    ///
    pub const SetAnchorHref = setAnchorHref;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchorHref)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` _value: []const u8 `
    ///
    pub fn setAnchorHref(self: QTextCharFormat, _value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = _value.len,
            .data = _value.ptr,
        };
        qtc.QTextCharFormat_SetAnchorHref(@ptrCast(self.ptr), value_str);
    }

    /// ### DEPRECATED: Use `anchorHref` instead
    ///
    pub const AnchorHref = anchorHref;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#anchorHref)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn anchorHref(self: QTextCharFormat, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextCharFormat_AnchorHref(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextCharFormat.anchorHref: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setAnchorNames` instead
    ///
    pub const SetAnchorNames = setAnchorNames;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchorNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` names: []const []const u8 `
    ///
    pub fn setAnchorNames(self: QTextCharFormat, allocator: std.mem.Allocator, names: []const []const u8) void {
        const names_arr = allocator.alloc(qtc.libqt_string, names.len) catch @panic("QTextCharFormat.setAnchorNames: Memory allocation failed");
        defer allocator.free(names_arr);
        for (names, 0..names.len) |str_item, i|
            names_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const names_list = qtc.libqt_list{
            .len = names.len,
            .data = names_arr.ptr,
        };
        qtc.QTextCharFormat_SetAnchorNames(@ptrCast(self.ptr), names_list);
    }

    /// ### DEPRECATED: Use `anchorNames` instead
    ///
    pub const AnchorNames = anchorNames;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#anchorNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn anchorNames(self: QTextCharFormat, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QTextCharFormat_AnchorNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QTextCharFormat.anchorNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QTextCharFormat.anchorNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setTableCellRowSpan` instead
    ///
    pub const SetTableCellRowSpan = setTableCellRowSpan;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setTableCellRowSpan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` _tableCellRowSpan: i32 `
    ///
    pub fn setTableCellRowSpan(self: QTextCharFormat, _tableCellRowSpan: i32) void {
        qtc.QTextCharFormat_SetTableCellRowSpan(@ptrCast(self.ptr), @bitCast(_tableCellRowSpan));
    }

    /// ### DEPRECATED: Use `tableCellRowSpan` instead
    ///
    pub const TableCellRowSpan = tableCellRowSpan;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#tableCellRowSpan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn tableCellRowSpan(self: QTextCharFormat) i32 {
        return qtc.QTextCharFormat_TableCellRowSpan(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTableCellColumnSpan` instead
    ///
    pub const SetTableCellColumnSpan = setTableCellColumnSpan;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setTableCellColumnSpan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` _tableCellColumnSpan: i32 `
    ///
    pub fn setTableCellColumnSpan(self: QTextCharFormat, _tableCellColumnSpan: i32) void {
        qtc.QTextCharFormat_SetTableCellColumnSpan(@ptrCast(self.ptr), @bitCast(_tableCellColumnSpan));
    }

    /// ### DEPRECATED: Use `tableCellColumnSpan` instead
    ///
    pub const TableCellColumnSpan = tableCellColumnSpan;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#tableCellColumnSpan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn tableCellColumnSpan(self: QTextCharFormat) i32 {
        return qtc.QTextCharFormat_TableCellColumnSpan(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFont2` instead
    ///
    pub const SetFont2 = setFont2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` _font: QFont `
    ///
    /// ` behavior: qtextformat_enums.FontPropertiesInheritanceBehavior `
    ///
    pub fn setFont2(self: QTextCharFormat, _font: anytype, behavior: i32) void {
        comptime _ = @TypeOf(_font)._is_QFont;
        qtc.QTextCharFormat_SetFont2(@ptrCast(self.ptr), @ptrCast(_font.ptr), @bitCast(behavior));
    }

    /// ### DEPRECATED: Use `setFontStyleHint2` instead
    ///
    pub const SetFontStyleHint2 = setFontStyleHint2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` hint: qfont_enums.StyleHint `
    ///
    /// ` strategy: qfont_enums.StyleStrategy `
    ///
    pub fn setFontStyleHint2(self: QTextCharFormat, hint: i32, strategy: i32) void {
        qtc.QTextCharFormat_SetFontStyleHint2(@ptrCast(self.ptr), @bitCast(hint), @bitCast(strategy));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn operatorAssign(self: QTextCharFormat, rhs: anytype) void {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        qtc.QTextFormat_OperatorAssign(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` other: QTextFormat `
    ///
    pub fn swap(self: QTextCharFormat, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTextFormat;
        qtc.QTextFormat_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `merge` instead
    ///
    pub const Merge = merge;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#merge)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` other: QTextFormat `
    ///
    pub fn merge(self: QTextCharFormat, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTextFormat;
        qtc.QTextFormat_Merge(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn isEmpty(self: QTextCharFormat) bool {
        return qtc.QTextFormat_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn type0(self: QTextCharFormat) i32 {
        return qtc.QTextFormat_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `objectIndex` instead
    ///
    pub const ObjectIndex = objectIndex;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#objectIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn objectIndex(self: QTextCharFormat) i32 {
        return qtc.QTextFormat_ObjectIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setObjectIndex` instead
    ///
    pub const SetObjectIndex = setObjectIndex;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setObjectIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` object: i32 `
    ///
    pub fn setObjectIndex(self: QTextCharFormat, object: i32) void {
        qtc.QTextFormat_SetObjectIndex(@ptrCast(self.ptr), @bitCast(object));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn property(self: QTextCharFormat, propertyId: i32) QVariant {
        return .{ .ptr = qtc.QTextFormat_Property(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` propertyId: i32 `
    ///
    /// ` _value: QVariant `
    ///
    pub fn setProperty(self: QTextCharFormat, propertyId: i32, _value: anytype) void {
        comptime _ = @TypeOf(_value)._is_QVariant;
        qtc.QTextFormat_SetProperty(@ptrCast(self.ptr), @bitCast(propertyId), @ptrCast(_value.ptr));
    }

    /// ### DEPRECATED: Use `clearProperty` instead
    ///
    pub const ClearProperty = clearProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn clearProperty(self: QTextCharFormat, propertyId: i32) void {
        qtc.QTextFormat_ClearProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// ### DEPRECATED: Use `hasProperty` instead
    ///
    pub const HasProperty = hasProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#hasProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn hasProperty(self: QTextCharFormat, propertyId: i32) bool {
        return qtc.QTextFormat_HasProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// ### DEPRECATED: Use `boolProperty` instead
    ///
    pub const BoolProperty = boolProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#boolProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn boolProperty(self: QTextCharFormat, propertyId: i32) bool {
        return qtc.QTextFormat_BoolProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// ### DEPRECATED: Use `intProperty` instead
    ///
    pub const IntProperty = intProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#intProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn intProperty(self: QTextCharFormat, propertyId: i32) i32 {
        return qtc.QTextFormat_IntProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// ### DEPRECATED: Use `doubleProperty` instead
    ///
    pub const DoubleProperty = doubleProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#doubleProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn doubleProperty(self: QTextCharFormat, propertyId: i32) f64 {
        return qtc.QTextFormat_DoubleProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// ### DEPRECATED: Use `stringProperty` instead
    ///
    pub const StringProperty = stringProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#stringProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn stringProperty(self: QTextCharFormat, allocator: std.mem.Allocator, propertyId: i32) []const u8 {
        var _str = qtc.QTextFormat_StringProperty(@ptrCast(self.ptr), @bitCast(propertyId));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextCharFormat.stringProperty: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `colorProperty` instead
    ///
    pub const ColorProperty = colorProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#colorProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn colorProperty(self: QTextCharFormat, propertyId: i32) QColor {
        return .{ .ptr = qtc.QTextFormat_ColorProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// ### DEPRECATED: Use `penProperty` instead
    ///
    pub const PenProperty = penProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#penProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn penProperty(self: QTextCharFormat, propertyId: i32) QPen {
        return .{ .ptr = qtc.QTextFormat_PenProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// ### DEPRECATED: Use `brushProperty` instead
    ///
    pub const BrushProperty = brushProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#brushProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn brushProperty(self: QTextCharFormat, propertyId: i32) QBrush {
        return .{ .ptr = qtc.QTextFormat_BrushProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// ### DEPRECATED: Use `lengthProperty` instead
    ///
    pub const LengthProperty = lengthProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#lengthProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn lengthProperty(self: QTextCharFormat, propertyId: i32) QTextLength {
        return .{ .ptr = qtc.QTextFormat_LengthProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// ### DEPRECATED: Use `lengthVectorProperty` instead
    ///
    pub const LengthVectorProperty = lengthVectorProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#lengthVectorProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn lengthVectorProperty(self: QTextCharFormat, allocator: std.mem.Allocator, propertyId: i32) []QTextLength {
        const _arr: qtc.libqt_list = qtc.QTextFormat_LengthVectorProperty(@ptrCast(self.ptr), @bitCast(propertyId));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTextLength, _arr.len) catch @panic("QTextCharFormat.lengthVectorProperty: Memory allocation failed");
        const _data_val: [*]QtC.QTextLength = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setProperty2` instead
    ///
    pub const SetProperty2 = setProperty2;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` propertyId: i32 `
    ///
    /// ` lengths: []QTextLength `
    ///
    pub fn setProperty2(self: QTextCharFormat, propertyId: i32, lengths: []QTextLength) void {
        const lengths_list = qtc.libqt_list{
            .len = lengths.len,
            .data = @ptrCast(lengths.ptr),
        };
        qtc.QTextFormat_SetProperty2(@ptrCast(self.ptr), @bitCast(propertyId), lengths_list);
    }

    /// ### DEPRECATED: Use `properties` instead
    ///
    pub const Properties = properties;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#properties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn properties(self: QTextCharFormat, allocator: std.mem.Allocator) ArrayMap_i32_QVariant {
        const _map: qtc.libqt_map = qtc.QTextFormat_Properties(@ptrCast(self.ptr));
        var _ret: ArrayMap_i32_QVariant = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("QTextCharFormat.properties: Total capacity allocation failed");
        defer {
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]QtC.QVariant = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            _ret.putAssumeCapacity(_key, .{ .ptr = @ptrCast(_value) });
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `propertyCount` instead
    ///
    pub const PropertyCount = propertyCount;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#propertyCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn propertyCount(self: QTextCharFormat) i32 {
        return qtc.QTextFormat_PropertyCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setObjectType` instead
    ///
    pub const SetObjectType = setObjectType;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setObjectType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn setObjectType(self: QTextCharFormat, typeVal: i32) void {
        qtc.QTextFormat_SetObjectType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `objectType` instead
    ///
    pub const ObjectType = objectType;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#objectType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn objectType(self: QTextCharFormat) i32 {
        return qtc.QTextFormat_ObjectType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCharFormat` instead
    ///
    pub const IsCharFormat = isCharFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn isCharFormat(self: QTextCharFormat) bool {
        return qtc.QTextFormat_IsCharFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isBlockFormat` instead
    ///
    pub const IsBlockFormat = isBlockFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isBlockFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn isBlockFormat(self: QTextCharFormat) bool {
        return qtc.QTextFormat_IsBlockFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isListFormat` instead
    ///
    pub const IsListFormat = isListFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isListFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn isListFormat(self: QTextCharFormat) bool {
        return qtc.QTextFormat_IsListFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isFrameFormat` instead
    ///
    pub const IsFrameFormat = isFrameFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isFrameFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn isFrameFormat(self: QTextCharFormat) bool {
        return qtc.QTextFormat_IsFrameFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isImageFormat` instead
    ///
    pub const IsImageFormat = isImageFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isImageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn isImageFormat(self: QTextCharFormat) bool {
        return qtc.QTextFormat_IsImageFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isTableFormat` instead
    ///
    pub const IsTableFormat = isTableFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isTableFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn isTableFormat(self: QTextCharFormat) bool {
        return qtc.QTextFormat_IsTableFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isTableCellFormat` instead
    ///
    pub const IsTableCellFormat = isTableCellFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isTableCellFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn isTableCellFormat(self: QTextCharFormat) bool {
        return qtc.QTextFormat_IsTableCellFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toBlockFormat` instead
    ///
    pub const ToBlockFormat = toBlockFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toBlockFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn toBlockFormat(self: QTextCharFormat) QTextBlockFormat {
        return .{ .ptr = qtc.QTextFormat_ToBlockFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toCharFormat` instead
    ///
    pub const ToCharFormat = toCharFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn toCharFormat(self: QTextCharFormat) QTextCharFormat {
        return .{ .ptr = qtc.QTextFormat_ToCharFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toListFormat` instead
    ///
    pub const ToListFormat = toListFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toListFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn toListFormat(self: QTextCharFormat) QTextListFormat {
        return .{ .ptr = qtc.QTextFormat_ToListFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toTableFormat` instead
    ///
    pub const ToTableFormat = toTableFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toTableFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn toTableFormat(self: QTextCharFormat) QTextTableFormat {
        return .{ .ptr = qtc.QTextFormat_ToTableFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toFrameFormat` instead
    ///
    pub const ToFrameFormat = toFrameFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toFrameFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn toFrameFormat(self: QTextCharFormat) QTextFrameFormat {
        return .{ .ptr = qtc.QTextFormat_ToFrameFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toImageFormat` instead
    ///
    pub const ToImageFormat = toImageFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toImageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn toImageFormat(self: QTextCharFormat) QTextImageFormat {
        return .{ .ptr = qtc.QTextFormat_ToImageFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toTableCellFormat` instead
    ///
    pub const ToTableCellFormat = toTableCellFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toTableCellFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn toTableCellFormat(self: QTextCharFormat) QTextTableCellFormat {
        return .{ .ptr = qtc.QTextFormat_ToTableCellFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn operatorEqual(self: QTextCharFormat, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        return qtc.QTextFormat_OperatorEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn operatorNotEqual(self: QTextCharFormat, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        return qtc.QTextFormat_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `toQVariant` instead
    ///
    pub const ToQVariant = toQVariant;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn toQVariant(self: QTextCharFormat) QVariant {
        return .{ .ptr = qtc.QTextFormat_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLayoutDirection` instead
    ///
    pub const SetLayoutDirection = setLayoutDirection;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setLayoutDirection(self: QTextCharFormat, direction: i32) void {
        qtc.QTextFormat_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// ### DEPRECATED: Use `layoutDirection` instead
    ///
    pub const LayoutDirection = layoutDirection;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn layoutDirection(self: QTextCharFormat) i32 {
        return qtc.QTextFormat_LayoutDirection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBackground` instead
    ///
    pub const SetBackground = setBackground;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` brush: QBrush `
    ///
    pub fn setBackground(self: QTextCharFormat, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTextFormat_SetBackground(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `background` instead
    ///
    pub const Background = background;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#background)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn background(self: QTextCharFormat) QBrush {
        return .{ .ptr = qtc.QTextFormat_Background(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `clearBackground` instead
    ///
    pub const ClearBackground = clearBackground;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn clearBackground(self: QTextCharFormat) void {
        qtc.QTextFormat_ClearBackground(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setForeground` instead
    ///
    pub const SetForeground = setForeground;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    /// ` brush: QBrush `
    ///
    pub fn setForeground(self: QTextCharFormat, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTextFormat_SetForeground(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `foreground` instead
    ///
    pub const Foreground = foreground;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#foreground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn foreground(self: QTextCharFormat) QBrush {
        return .{ .ptr = qtc.QTextFormat_Foreground(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `clearForeground` instead
    ///
    pub const ClearForeground = clearForeground;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn clearForeground(self: QTextCharFormat) void {
        qtc.QTextFormat_ClearForeground(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#dtor.QTextCharFormat)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextCharFormat `
    ///
    pub fn delete(self: QTextCharFormat) void {
        qtc.QTextCharFormat_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html)
pub const QTextBlockFormat = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTextBlockFormat,

    pub const _is_QTextBlockFormat = {};
    pub const _is_QTextFormat = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTextBlockFormat object in C++ memory
    ///
    pub fn new() QTextBlockFormat {
        return .{ .ptr = qtc.QTextBlockFormat_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QTextBlockFormat object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QTextBlockFormat `
    ///
    pub fn new2(param1: anytype) QTextBlockFormat {
        comptime _ = @TypeOf(param1)._is_QTextBlockFormat;
        return .{ .ptr = qtc.QTextBlockFormat_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn isValid(self: QTextBlockFormat) bool {
        return qtc.QTextBlockFormat_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAlignment` instead
    ///
    pub const SetAlignment = setAlignment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` _alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn setAlignment(self: QTextBlockFormat, _alignment: i32) void {
        qtc.QTextBlockFormat_SetAlignment(@ptrCast(self.ptr), @bitCast(_alignment));
    }

    /// ### DEPRECATED: Use `alignment` instead
    ///
    pub const Alignment = alignment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn alignment(self: QTextBlockFormat) i32 {
        return qtc.QTextBlockFormat_Alignment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTopMargin` instead
    ///
    pub const SetTopMargin = setTopMargin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#setTopMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` margin: f64 `
    ///
    pub fn setTopMargin(self: QTextBlockFormat, margin: f64) void {
        qtc.QTextBlockFormat_SetTopMargin(@ptrCast(self.ptr), @bitCast(margin));
    }

    /// ### DEPRECATED: Use `topMargin` instead
    ///
    pub const TopMargin = topMargin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#topMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn topMargin(self: QTextBlockFormat) f64 {
        return qtc.QTextBlockFormat_TopMargin(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBottomMargin` instead
    ///
    pub const SetBottomMargin = setBottomMargin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#setBottomMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` margin: f64 `
    ///
    pub fn setBottomMargin(self: QTextBlockFormat, margin: f64) void {
        qtc.QTextBlockFormat_SetBottomMargin(@ptrCast(self.ptr), @bitCast(margin));
    }

    /// ### DEPRECATED: Use `bottomMargin` instead
    ///
    pub const BottomMargin = bottomMargin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#bottomMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn bottomMargin(self: QTextBlockFormat) f64 {
        return qtc.QTextBlockFormat_BottomMargin(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLeftMargin` instead
    ///
    pub const SetLeftMargin = setLeftMargin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#setLeftMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` margin: f64 `
    ///
    pub fn setLeftMargin(self: QTextBlockFormat, margin: f64) void {
        qtc.QTextBlockFormat_SetLeftMargin(@ptrCast(self.ptr), @bitCast(margin));
    }

    /// ### DEPRECATED: Use `leftMargin` instead
    ///
    pub const LeftMargin = leftMargin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#leftMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn leftMargin(self: QTextBlockFormat) f64 {
        return qtc.QTextBlockFormat_LeftMargin(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRightMargin` instead
    ///
    pub const SetRightMargin = setRightMargin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#setRightMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` margin: f64 `
    ///
    pub fn setRightMargin(self: QTextBlockFormat, margin: f64) void {
        qtc.QTextBlockFormat_SetRightMargin(@ptrCast(self.ptr), @bitCast(margin));
    }

    /// ### DEPRECATED: Use `rightMargin` instead
    ///
    pub const RightMargin = rightMargin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#rightMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn rightMargin(self: QTextBlockFormat) f64 {
        return qtc.QTextBlockFormat_RightMargin(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTextIndent` instead
    ///
    pub const SetTextIndent = setTextIndent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#setTextIndent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` aindent: f64 `
    ///
    pub fn setTextIndent(self: QTextBlockFormat, aindent: f64) void {
        qtc.QTextBlockFormat_SetTextIndent(@ptrCast(self.ptr), @bitCast(aindent));
    }

    /// ### DEPRECATED: Use `textIndent` instead
    ///
    pub const TextIndent = textIndent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#textIndent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn textIndent(self: QTextBlockFormat) f64 {
        return qtc.QTextBlockFormat_TextIndent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setIndent` instead
    ///
    pub const SetIndent = setIndent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#setIndent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` _indent: i32 `
    ///
    pub fn setIndent(self: QTextBlockFormat, _indent: i32) void {
        qtc.QTextBlockFormat_SetIndent(@ptrCast(self.ptr), @bitCast(_indent));
    }

    /// ### DEPRECATED: Use `indent` instead
    ///
    pub const Indent = indent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#indent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn indent(self: QTextBlockFormat) i32 {
        return qtc.QTextBlockFormat_Indent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHeadingLevel` instead
    ///
    pub const SetHeadingLevel = setHeadingLevel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#setHeadingLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` alevel: i32 `
    ///
    pub fn setHeadingLevel(self: QTextBlockFormat, alevel: i32) void {
        qtc.QTextBlockFormat_SetHeadingLevel(@ptrCast(self.ptr), @bitCast(alevel));
    }

    /// ### DEPRECATED: Use `headingLevel` instead
    ///
    pub const HeadingLevel = headingLevel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#headingLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn headingLevel(self: QTextBlockFormat) i32 {
        return qtc.QTextBlockFormat_HeadingLevel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLineHeight` instead
    ///
    pub const SetLineHeight = setLineHeight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#setLineHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` height: f64 `
    ///
    /// ` heightType: i32 `
    ///
    pub fn setLineHeight(self: QTextBlockFormat, height: f64, heightType: i32) void {
        qtc.QTextBlockFormat_SetLineHeight(@ptrCast(self.ptr), @bitCast(height), @bitCast(heightType));
    }

    /// ### DEPRECATED: Use `lineHeight` instead
    ///
    pub const LineHeight = lineHeight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#lineHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` scriptLineHeight: f64 `
    ///
    /// ` scaling: f64 `
    ///
    pub fn lineHeight(self: QTextBlockFormat, scriptLineHeight: f64, scaling: f64) f64 {
        return qtc.QTextBlockFormat_LineHeight(@ptrCast(self.ptr), @bitCast(scriptLineHeight), @bitCast(scaling));
    }

    /// ### DEPRECATED: Use `lineHeight2` instead
    ///
    pub const LineHeight2 = lineHeight2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#lineHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn lineHeight2(self: QTextBlockFormat) f64 {
        return qtc.QTextBlockFormat_LineHeight2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lineHeightType` instead
    ///
    pub const LineHeightType = lineHeightType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#lineHeightType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn lineHeightType(self: QTextBlockFormat) i32 {
        return qtc.QTextBlockFormat_LineHeightType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setNonBreakableLines` instead
    ///
    pub const SetNonBreakableLines = setNonBreakableLines;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#setNonBreakableLines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` b: bool `
    ///
    pub fn setNonBreakableLines(self: QTextBlockFormat, b: bool) void {
        qtc.QTextBlockFormat_SetNonBreakableLines(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `nonBreakableLines` instead
    ///
    pub const NonBreakableLines = nonBreakableLines;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#nonBreakableLines)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn nonBreakableLines(self: QTextBlockFormat) bool {
        return qtc.QTextBlockFormat_NonBreakableLines(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPageBreakPolicy` instead
    ///
    pub const SetPageBreakPolicy = setPageBreakPolicy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#setPageBreakPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` flags: flag of qtextformat_enums.PageBreakFlag `
    ///
    pub fn setPageBreakPolicy(self: QTextBlockFormat, flags: i32) void {
        qtc.QTextBlockFormat_SetPageBreakPolicy(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `pageBreakPolicy` instead
    ///
    pub const PageBreakPolicy = pageBreakPolicy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#pageBreakPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ## Returns:
    ///
    /// ` flag of qtextformat_enums.PageBreakFlag `
    ///
    pub fn pageBreakPolicy(self: QTextBlockFormat) i32 {
        return qtc.QTextBlockFormat_PageBreakPolicy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTabPositions` instead
    ///
    pub const SetTabPositions = setTabPositions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#setTabPositions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` tabs: []QTextOption__Tab `
    ///
    pub fn setTabPositions(self: QTextBlockFormat, tabs: []QTextOption__Tab) void {
        const tabs_list = qtc.libqt_list{
            .len = tabs.len,
            .data = @ptrCast(tabs.ptr),
        };
        qtc.QTextBlockFormat_SetTabPositions(@ptrCast(self.ptr), tabs_list);
    }

    /// ### DEPRECATED: Use `tabPositions` instead
    ///
    pub const TabPositions = tabPositions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#tabPositions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn tabPositions(self: QTextBlockFormat, allocator: std.mem.Allocator) []QTextOption__Tab {
        const _arr: qtc.libqt_list = qtc.QTextBlockFormat_TabPositions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTextOption__Tab, _arr.len) catch @panic("QTextBlockFormat.tabPositions: Memory allocation failed");
        const _data_val: [*]QtC.QTextOption__Tab = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setMarker` instead
    ///
    pub const SetMarker = setMarker;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#setMarker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` _marker: qtextformat_enums.MarkerType `
    ///
    pub fn setMarker(self: QTextBlockFormat, _marker: i32) void {
        qtc.QTextBlockFormat_SetMarker(@ptrCast(self.ptr), @bitCast(_marker));
    }

    /// ### DEPRECATED: Use `marker` instead
    ///
    pub const Marker = marker;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#marker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ## Returns:
    ///
    /// ` qtextformat_enums.MarkerType `
    ///
    pub fn marker(self: QTextBlockFormat) i32 {
        return qtc.QTextBlockFormat_Marker(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn operatorAssign(self: QTextBlockFormat, rhs: anytype) void {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        qtc.QTextFormat_OperatorAssign(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` other: QTextFormat `
    ///
    pub fn swap(self: QTextBlockFormat, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTextFormat;
        qtc.QTextFormat_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `merge` instead
    ///
    pub const Merge = merge;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#merge)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` other: QTextFormat `
    ///
    pub fn merge(self: QTextBlockFormat, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTextFormat;
        qtc.QTextFormat_Merge(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn isEmpty(self: QTextBlockFormat) bool {
        return qtc.QTextFormat_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn type0(self: QTextBlockFormat) i32 {
        return qtc.QTextFormat_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `objectIndex` instead
    ///
    pub const ObjectIndex = objectIndex;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#objectIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn objectIndex(self: QTextBlockFormat) i32 {
        return qtc.QTextFormat_ObjectIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setObjectIndex` instead
    ///
    pub const SetObjectIndex = setObjectIndex;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setObjectIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` object: i32 `
    ///
    pub fn setObjectIndex(self: QTextBlockFormat, object: i32) void {
        qtc.QTextFormat_SetObjectIndex(@ptrCast(self.ptr), @bitCast(object));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn property(self: QTextBlockFormat, propertyId: i32) QVariant {
        return .{ .ptr = qtc.QTextFormat_Property(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` propertyId: i32 `
    ///
    /// ` _value: QVariant `
    ///
    pub fn setProperty(self: QTextBlockFormat, propertyId: i32, _value: anytype) void {
        comptime _ = @TypeOf(_value)._is_QVariant;
        qtc.QTextFormat_SetProperty(@ptrCast(self.ptr), @bitCast(propertyId), @ptrCast(_value.ptr));
    }

    /// ### DEPRECATED: Use `clearProperty` instead
    ///
    pub const ClearProperty = clearProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn clearProperty(self: QTextBlockFormat, propertyId: i32) void {
        qtc.QTextFormat_ClearProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// ### DEPRECATED: Use `hasProperty` instead
    ///
    pub const HasProperty = hasProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#hasProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn hasProperty(self: QTextBlockFormat, propertyId: i32) bool {
        return qtc.QTextFormat_HasProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// ### DEPRECATED: Use `boolProperty` instead
    ///
    pub const BoolProperty = boolProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#boolProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn boolProperty(self: QTextBlockFormat, propertyId: i32) bool {
        return qtc.QTextFormat_BoolProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// ### DEPRECATED: Use `intProperty` instead
    ///
    pub const IntProperty = intProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#intProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn intProperty(self: QTextBlockFormat, propertyId: i32) i32 {
        return qtc.QTextFormat_IntProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// ### DEPRECATED: Use `doubleProperty` instead
    ///
    pub const DoubleProperty = doubleProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#doubleProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn doubleProperty(self: QTextBlockFormat, propertyId: i32) f64 {
        return qtc.QTextFormat_DoubleProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// ### DEPRECATED: Use `stringProperty` instead
    ///
    pub const StringProperty = stringProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#stringProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn stringProperty(self: QTextBlockFormat, allocator: std.mem.Allocator, propertyId: i32) []const u8 {
        var _str = qtc.QTextFormat_StringProperty(@ptrCast(self.ptr), @bitCast(propertyId));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextBlockFormat.stringProperty: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `colorProperty` instead
    ///
    pub const ColorProperty = colorProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#colorProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn colorProperty(self: QTextBlockFormat, propertyId: i32) QColor {
        return .{ .ptr = qtc.QTextFormat_ColorProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// ### DEPRECATED: Use `penProperty` instead
    ///
    pub const PenProperty = penProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#penProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn penProperty(self: QTextBlockFormat, propertyId: i32) QPen {
        return .{ .ptr = qtc.QTextFormat_PenProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// ### DEPRECATED: Use `brushProperty` instead
    ///
    pub const BrushProperty = brushProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#brushProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn brushProperty(self: QTextBlockFormat, propertyId: i32) QBrush {
        return .{ .ptr = qtc.QTextFormat_BrushProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// ### DEPRECATED: Use `lengthProperty` instead
    ///
    pub const LengthProperty = lengthProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#lengthProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn lengthProperty(self: QTextBlockFormat, propertyId: i32) QTextLength {
        return .{ .ptr = qtc.QTextFormat_LengthProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// ### DEPRECATED: Use `lengthVectorProperty` instead
    ///
    pub const LengthVectorProperty = lengthVectorProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#lengthVectorProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn lengthVectorProperty(self: QTextBlockFormat, allocator: std.mem.Allocator, propertyId: i32) []QTextLength {
        const _arr: qtc.libqt_list = qtc.QTextFormat_LengthVectorProperty(@ptrCast(self.ptr), @bitCast(propertyId));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTextLength, _arr.len) catch @panic("QTextBlockFormat.lengthVectorProperty: Memory allocation failed");
        const _data_val: [*]QtC.QTextLength = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setProperty2` instead
    ///
    pub const SetProperty2 = setProperty2;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` propertyId: i32 `
    ///
    /// ` lengths: []QTextLength `
    ///
    pub fn setProperty2(self: QTextBlockFormat, propertyId: i32, lengths: []QTextLength) void {
        const lengths_list = qtc.libqt_list{
            .len = lengths.len,
            .data = @ptrCast(lengths.ptr),
        };
        qtc.QTextFormat_SetProperty2(@ptrCast(self.ptr), @bitCast(propertyId), lengths_list);
    }

    /// ### DEPRECATED: Use `properties` instead
    ///
    pub const Properties = properties;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#properties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn properties(self: QTextBlockFormat, allocator: std.mem.Allocator) ArrayMap_i32_QVariant {
        const _map: qtc.libqt_map = qtc.QTextFormat_Properties(@ptrCast(self.ptr));
        var _ret: ArrayMap_i32_QVariant = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("QTextBlockFormat.properties: Total capacity allocation failed");
        defer {
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]QtC.QVariant = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            _ret.putAssumeCapacity(_key, .{ .ptr = @ptrCast(_value) });
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `propertyCount` instead
    ///
    pub const PropertyCount = propertyCount;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#propertyCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn propertyCount(self: QTextBlockFormat) i32 {
        return qtc.QTextFormat_PropertyCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setObjectType` instead
    ///
    pub const SetObjectType = setObjectType;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setObjectType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn setObjectType(self: QTextBlockFormat, typeVal: i32) void {
        qtc.QTextFormat_SetObjectType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `objectType` instead
    ///
    pub const ObjectType = objectType;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#objectType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn objectType(self: QTextBlockFormat) i32 {
        return qtc.QTextFormat_ObjectType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCharFormat` instead
    ///
    pub const IsCharFormat = isCharFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn isCharFormat(self: QTextBlockFormat) bool {
        return qtc.QTextFormat_IsCharFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isBlockFormat` instead
    ///
    pub const IsBlockFormat = isBlockFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isBlockFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn isBlockFormat(self: QTextBlockFormat) bool {
        return qtc.QTextFormat_IsBlockFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isListFormat` instead
    ///
    pub const IsListFormat = isListFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isListFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn isListFormat(self: QTextBlockFormat) bool {
        return qtc.QTextFormat_IsListFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isFrameFormat` instead
    ///
    pub const IsFrameFormat = isFrameFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isFrameFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn isFrameFormat(self: QTextBlockFormat) bool {
        return qtc.QTextFormat_IsFrameFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isImageFormat` instead
    ///
    pub const IsImageFormat = isImageFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isImageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn isImageFormat(self: QTextBlockFormat) bool {
        return qtc.QTextFormat_IsImageFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isTableFormat` instead
    ///
    pub const IsTableFormat = isTableFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isTableFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn isTableFormat(self: QTextBlockFormat) bool {
        return qtc.QTextFormat_IsTableFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isTableCellFormat` instead
    ///
    pub const IsTableCellFormat = isTableCellFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isTableCellFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn isTableCellFormat(self: QTextBlockFormat) bool {
        return qtc.QTextFormat_IsTableCellFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toBlockFormat` instead
    ///
    pub const ToBlockFormat = toBlockFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toBlockFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn toBlockFormat(self: QTextBlockFormat) QTextBlockFormat {
        return .{ .ptr = qtc.QTextFormat_ToBlockFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toCharFormat` instead
    ///
    pub const ToCharFormat = toCharFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn toCharFormat(self: QTextBlockFormat) QTextCharFormat {
        return .{ .ptr = qtc.QTextFormat_ToCharFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toListFormat` instead
    ///
    pub const ToListFormat = toListFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toListFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn toListFormat(self: QTextBlockFormat) QTextListFormat {
        return .{ .ptr = qtc.QTextFormat_ToListFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toTableFormat` instead
    ///
    pub const ToTableFormat = toTableFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toTableFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn toTableFormat(self: QTextBlockFormat) QTextTableFormat {
        return .{ .ptr = qtc.QTextFormat_ToTableFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toFrameFormat` instead
    ///
    pub const ToFrameFormat = toFrameFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toFrameFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn toFrameFormat(self: QTextBlockFormat) QTextFrameFormat {
        return .{ .ptr = qtc.QTextFormat_ToFrameFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toImageFormat` instead
    ///
    pub const ToImageFormat = toImageFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toImageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn toImageFormat(self: QTextBlockFormat) QTextImageFormat {
        return .{ .ptr = qtc.QTextFormat_ToImageFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toTableCellFormat` instead
    ///
    pub const ToTableCellFormat = toTableCellFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toTableCellFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn toTableCellFormat(self: QTextBlockFormat) QTextTableCellFormat {
        return .{ .ptr = qtc.QTextFormat_ToTableCellFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn operatorEqual(self: QTextBlockFormat, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        return qtc.QTextFormat_OperatorEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn operatorNotEqual(self: QTextBlockFormat, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        return qtc.QTextFormat_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `toQVariant` instead
    ///
    pub const ToQVariant = toQVariant;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn toQVariant(self: QTextBlockFormat) QVariant {
        return .{ .ptr = qtc.QTextFormat_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLayoutDirection` instead
    ///
    pub const SetLayoutDirection = setLayoutDirection;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setLayoutDirection(self: QTextBlockFormat, direction: i32) void {
        qtc.QTextFormat_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// ### DEPRECATED: Use `layoutDirection` instead
    ///
    pub const LayoutDirection = layoutDirection;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn layoutDirection(self: QTextBlockFormat) i32 {
        return qtc.QTextFormat_LayoutDirection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBackground` instead
    ///
    pub const SetBackground = setBackground;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` brush: QBrush `
    ///
    pub fn setBackground(self: QTextBlockFormat, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTextFormat_SetBackground(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `background` instead
    ///
    pub const Background = background;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#background)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn background(self: QTextBlockFormat) QBrush {
        return .{ .ptr = qtc.QTextFormat_Background(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `clearBackground` instead
    ///
    pub const ClearBackground = clearBackground;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn clearBackground(self: QTextBlockFormat) void {
        qtc.QTextFormat_ClearBackground(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setForeground` instead
    ///
    pub const SetForeground = setForeground;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    /// ` brush: QBrush `
    ///
    pub fn setForeground(self: QTextBlockFormat, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTextFormat_SetForeground(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `foreground` instead
    ///
    pub const Foreground = foreground;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#foreground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn foreground(self: QTextBlockFormat) QBrush {
        return .{ .ptr = qtc.QTextFormat_Foreground(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `clearForeground` instead
    ///
    pub const ClearForeground = clearForeground;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn clearForeground(self: QTextBlockFormat) void {
        qtc.QTextFormat_ClearForeground(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextblockformat.html#dtor.QTextBlockFormat)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextBlockFormat `
    ///
    pub fn delete(self: QTextBlockFormat) void {
        qtc.QTextBlockFormat_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlistformat.html)
pub const QTextListFormat = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlistformat.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTextListFormat,

    pub const _is_QTextListFormat = {};
    pub const _is_QTextFormat = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTextListFormat object in C++ memory
    ///
    pub fn new() QTextListFormat {
        return .{ .ptr = qtc.QTextListFormat_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QTextListFormat object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QTextListFormat `
    ///
    pub fn new2(param1: anytype) QTextListFormat {
        comptime _ = @TypeOf(param1)._is_QTextListFormat;
        return .{ .ptr = qtc.QTextListFormat_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlistformat.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn isValid(self: QTextListFormat) bool {
        return qtc.QTextListFormat_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setStyle` instead
    ///
    pub const SetStyle = setStyle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlistformat.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` _style: qtextformat_enums.Style `
    ///
    pub fn setStyle(self: QTextListFormat, _style: i32) void {
        qtc.QTextListFormat_SetStyle(@ptrCast(self.ptr), @bitCast(_style));
    }

    /// ### DEPRECATED: Use `style` instead
    ///
    pub const Style = style;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlistformat.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ## Returns:
    ///
    /// ` qtextformat_enums.Style `
    ///
    pub fn style(self: QTextListFormat) i32 {
        return qtc.QTextListFormat_Style(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setIndent` instead
    ///
    pub const SetIndent = setIndent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlistformat.html#setIndent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` _indent: i32 `
    ///
    pub fn setIndent(self: QTextListFormat, _indent: i32) void {
        qtc.QTextListFormat_SetIndent(@ptrCast(self.ptr), @bitCast(_indent));
    }

    /// ### DEPRECATED: Use `indent` instead
    ///
    pub const Indent = indent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlistformat.html#indent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn indent(self: QTextListFormat) i32 {
        return qtc.QTextListFormat_Indent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setNumberPrefix` instead
    ///
    pub const SetNumberPrefix = setNumberPrefix;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlistformat.html#setNumberPrefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` _numberPrefix: []const u8 `
    ///
    pub fn setNumberPrefix(self: QTextListFormat, _numberPrefix: []const u8) void {
        const numberPrefix_str = qtc.libqt_string{
            .len = _numberPrefix.len,
            .data = _numberPrefix.ptr,
        };
        qtc.QTextListFormat_SetNumberPrefix(@ptrCast(self.ptr), numberPrefix_str);
    }

    /// ### DEPRECATED: Use `numberPrefix` instead
    ///
    pub const NumberPrefix = numberPrefix;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlistformat.html#numberPrefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn numberPrefix(self: QTextListFormat, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextListFormat_NumberPrefix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextListFormat.numberPrefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setNumberSuffix` instead
    ///
    pub const SetNumberSuffix = setNumberSuffix;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlistformat.html#setNumberSuffix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` _numberSuffix: []const u8 `
    ///
    pub fn setNumberSuffix(self: QTextListFormat, _numberSuffix: []const u8) void {
        const numberSuffix_str = qtc.libqt_string{
            .len = _numberSuffix.len,
            .data = _numberSuffix.ptr,
        };
        qtc.QTextListFormat_SetNumberSuffix(@ptrCast(self.ptr), numberSuffix_str);
    }

    /// ### DEPRECATED: Use `numberSuffix` instead
    ///
    pub const NumberSuffix = numberSuffix;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlistformat.html#numberSuffix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn numberSuffix(self: QTextListFormat, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextListFormat_NumberSuffix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextListFormat.numberSuffix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setStart` instead
    ///
    pub const SetStart = setStart;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlistformat.html#setStart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` _indent: i32 `
    ///
    pub fn setStart(self: QTextListFormat, _indent: i32) void {
        qtc.QTextListFormat_SetStart(@ptrCast(self.ptr), @bitCast(_indent));
    }

    /// ### DEPRECATED: Use `start` instead
    ///
    pub const Start = start;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlistformat.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn start(self: QTextListFormat) i32 {
        return qtc.QTextListFormat_Start(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn operatorAssign(self: QTextListFormat, rhs: anytype) void {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        qtc.QTextFormat_OperatorAssign(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` other: QTextFormat `
    ///
    pub fn swap(self: QTextListFormat, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTextFormat;
        qtc.QTextFormat_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `merge` instead
    ///
    pub const Merge = merge;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#merge)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` other: QTextFormat `
    ///
    pub fn merge(self: QTextListFormat, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTextFormat;
        qtc.QTextFormat_Merge(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn isEmpty(self: QTextListFormat) bool {
        return qtc.QTextFormat_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn type0(self: QTextListFormat) i32 {
        return qtc.QTextFormat_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `objectIndex` instead
    ///
    pub const ObjectIndex = objectIndex;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#objectIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn objectIndex(self: QTextListFormat) i32 {
        return qtc.QTextFormat_ObjectIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setObjectIndex` instead
    ///
    pub const SetObjectIndex = setObjectIndex;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setObjectIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` object: i32 `
    ///
    pub fn setObjectIndex(self: QTextListFormat, object: i32) void {
        qtc.QTextFormat_SetObjectIndex(@ptrCast(self.ptr), @bitCast(object));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn property(self: QTextListFormat, propertyId: i32) QVariant {
        return .{ .ptr = qtc.QTextFormat_Property(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` propertyId: i32 `
    ///
    /// ` _value: QVariant `
    ///
    pub fn setProperty(self: QTextListFormat, propertyId: i32, _value: anytype) void {
        comptime _ = @TypeOf(_value)._is_QVariant;
        qtc.QTextFormat_SetProperty(@ptrCast(self.ptr), @bitCast(propertyId), @ptrCast(_value.ptr));
    }

    /// ### DEPRECATED: Use `clearProperty` instead
    ///
    pub const ClearProperty = clearProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn clearProperty(self: QTextListFormat, propertyId: i32) void {
        qtc.QTextFormat_ClearProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// ### DEPRECATED: Use `hasProperty` instead
    ///
    pub const HasProperty = hasProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#hasProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn hasProperty(self: QTextListFormat, propertyId: i32) bool {
        return qtc.QTextFormat_HasProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// ### DEPRECATED: Use `boolProperty` instead
    ///
    pub const BoolProperty = boolProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#boolProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn boolProperty(self: QTextListFormat, propertyId: i32) bool {
        return qtc.QTextFormat_BoolProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// ### DEPRECATED: Use `intProperty` instead
    ///
    pub const IntProperty = intProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#intProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn intProperty(self: QTextListFormat, propertyId: i32) i32 {
        return qtc.QTextFormat_IntProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// ### DEPRECATED: Use `doubleProperty` instead
    ///
    pub const DoubleProperty = doubleProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#doubleProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn doubleProperty(self: QTextListFormat, propertyId: i32) f64 {
        return qtc.QTextFormat_DoubleProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// ### DEPRECATED: Use `stringProperty` instead
    ///
    pub const StringProperty = stringProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#stringProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn stringProperty(self: QTextListFormat, allocator: std.mem.Allocator, propertyId: i32) []const u8 {
        var _str = qtc.QTextFormat_StringProperty(@ptrCast(self.ptr), @bitCast(propertyId));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextListFormat.stringProperty: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `colorProperty` instead
    ///
    pub const ColorProperty = colorProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#colorProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn colorProperty(self: QTextListFormat, propertyId: i32) QColor {
        return .{ .ptr = qtc.QTextFormat_ColorProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// ### DEPRECATED: Use `penProperty` instead
    ///
    pub const PenProperty = penProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#penProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn penProperty(self: QTextListFormat, propertyId: i32) QPen {
        return .{ .ptr = qtc.QTextFormat_PenProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// ### DEPRECATED: Use `brushProperty` instead
    ///
    pub const BrushProperty = brushProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#brushProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn brushProperty(self: QTextListFormat, propertyId: i32) QBrush {
        return .{ .ptr = qtc.QTextFormat_BrushProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// ### DEPRECATED: Use `lengthProperty` instead
    ///
    pub const LengthProperty = lengthProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#lengthProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn lengthProperty(self: QTextListFormat, propertyId: i32) QTextLength {
        return .{ .ptr = qtc.QTextFormat_LengthProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// ### DEPRECATED: Use `lengthVectorProperty` instead
    ///
    pub const LengthVectorProperty = lengthVectorProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#lengthVectorProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn lengthVectorProperty(self: QTextListFormat, allocator: std.mem.Allocator, propertyId: i32) []QTextLength {
        const _arr: qtc.libqt_list = qtc.QTextFormat_LengthVectorProperty(@ptrCast(self.ptr), @bitCast(propertyId));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTextLength, _arr.len) catch @panic("QTextListFormat.lengthVectorProperty: Memory allocation failed");
        const _data_val: [*]QtC.QTextLength = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setProperty2` instead
    ///
    pub const SetProperty2 = setProperty2;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` propertyId: i32 `
    ///
    /// ` lengths: []QTextLength `
    ///
    pub fn setProperty2(self: QTextListFormat, propertyId: i32, lengths: []QTextLength) void {
        const lengths_list = qtc.libqt_list{
            .len = lengths.len,
            .data = @ptrCast(lengths.ptr),
        };
        qtc.QTextFormat_SetProperty2(@ptrCast(self.ptr), @bitCast(propertyId), lengths_list);
    }

    /// ### DEPRECATED: Use `properties` instead
    ///
    pub const Properties = properties;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#properties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn properties(self: QTextListFormat, allocator: std.mem.Allocator) ArrayMap_i32_QVariant {
        const _map: qtc.libqt_map = qtc.QTextFormat_Properties(@ptrCast(self.ptr));
        var _ret: ArrayMap_i32_QVariant = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("QTextListFormat.properties: Total capacity allocation failed");
        defer {
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]QtC.QVariant = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            _ret.putAssumeCapacity(_key, .{ .ptr = @ptrCast(_value) });
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `propertyCount` instead
    ///
    pub const PropertyCount = propertyCount;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#propertyCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn propertyCount(self: QTextListFormat) i32 {
        return qtc.QTextFormat_PropertyCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setObjectType` instead
    ///
    pub const SetObjectType = setObjectType;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setObjectType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn setObjectType(self: QTextListFormat, typeVal: i32) void {
        qtc.QTextFormat_SetObjectType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `objectType` instead
    ///
    pub const ObjectType = objectType;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#objectType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn objectType(self: QTextListFormat) i32 {
        return qtc.QTextFormat_ObjectType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCharFormat` instead
    ///
    pub const IsCharFormat = isCharFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn isCharFormat(self: QTextListFormat) bool {
        return qtc.QTextFormat_IsCharFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isBlockFormat` instead
    ///
    pub const IsBlockFormat = isBlockFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isBlockFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn isBlockFormat(self: QTextListFormat) bool {
        return qtc.QTextFormat_IsBlockFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isListFormat` instead
    ///
    pub const IsListFormat = isListFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isListFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn isListFormat(self: QTextListFormat) bool {
        return qtc.QTextFormat_IsListFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isFrameFormat` instead
    ///
    pub const IsFrameFormat = isFrameFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isFrameFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn isFrameFormat(self: QTextListFormat) bool {
        return qtc.QTextFormat_IsFrameFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isImageFormat` instead
    ///
    pub const IsImageFormat = isImageFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isImageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn isImageFormat(self: QTextListFormat) bool {
        return qtc.QTextFormat_IsImageFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isTableFormat` instead
    ///
    pub const IsTableFormat = isTableFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isTableFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn isTableFormat(self: QTextListFormat) bool {
        return qtc.QTextFormat_IsTableFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isTableCellFormat` instead
    ///
    pub const IsTableCellFormat = isTableCellFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isTableCellFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn isTableCellFormat(self: QTextListFormat) bool {
        return qtc.QTextFormat_IsTableCellFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toBlockFormat` instead
    ///
    pub const ToBlockFormat = toBlockFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toBlockFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn toBlockFormat(self: QTextListFormat) QTextBlockFormat {
        return .{ .ptr = qtc.QTextFormat_ToBlockFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toCharFormat` instead
    ///
    pub const ToCharFormat = toCharFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn toCharFormat(self: QTextListFormat) QTextCharFormat {
        return .{ .ptr = qtc.QTextFormat_ToCharFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toListFormat` instead
    ///
    pub const ToListFormat = toListFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toListFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn toListFormat(self: QTextListFormat) QTextListFormat {
        return .{ .ptr = qtc.QTextFormat_ToListFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toTableFormat` instead
    ///
    pub const ToTableFormat = toTableFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toTableFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn toTableFormat(self: QTextListFormat) QTextTableFormat {
        return .{ .ptr = qtc.QTextFormat_ToTableFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toFrameFormat` instead
    ///
    pub const ToFrameFormat = toFrameFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toFrameFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn toFrameFormat(self: QTextListFormat) QTextFrameFormat {
        return .{ .ptr = qtc.QTextFormat_ToFrameFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toImageFormat` instead
    ///
    pub const ToImageFormat = toImageFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toImageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn toImageFormat(self: QTextListFormat) QTextImageFormat {
        return .{ .ptr = qtc.QTextFormat_ToImageFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toTableCellFormat` instead
    ///
    pub const ToTableCellFormat = toTableCellFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toTableCellFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn toTableCellFormat(self: QTextListFormat) QTextTableCellFormat {
        return .{ .ptr = qtc.QTextFormat_ToTableCellFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn operatorEqual(self: QTextListFormat, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        return qtc.QTextFormat_OperatorEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn operatorNotEqual(self: QTextListFormat, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        return qtc.QTextFormat_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `toQVariant` instead
    ///
    pub const ToQVariant = toQVariant;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn toQVariant(self: QTextListFormat) QVariant {
        return .{ .ptr = qtc.QTextFormat_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLayoutDirection` instead
    ///
    pub const SetLayoutDirection = setLayoutDirection;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setLayoutDirection(self: QTextListFormat, direction: i32) void {
        qtc.QTextFormat_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// ### DEPRECATED: Use `layoutDirection` instead
    ///
    pub const LayoutDirection = layoutDirection;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn layoutDirection(self: QTextListFormat) i32 {
        return qtc.QTextFormat_LayoutDirection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBackground` instead
    ///
    pub const SetBackground = setBackground;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` brush: QBrush `
    ///
    pub fn setBackground(self: QTextListFormat, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTextFormat_SetBackground(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `background` instead
    ///
    pub const Background = background;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#background)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn background(self: QTextListFormat) QBrush {
        return .{ .ptr = qtc.QTextFormat_Background(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `clearBackground` instead
    ///
    pub const ClearBackground = clearBackground;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn clearBackground(self: QTextListFormat) void {
        qtc.QTextFormat_ClearBackground(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setForeground` instead
    ///
    pub const SetForeground = setForeground;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    /// ` brush: QBrush `
    ///
    pub fn setForeground(self: QTextListFormat, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTextFormat_SetForeground(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `foreground` instead
    ///
    pub const Foreground = foreground;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#foreground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn foreground(self: QTextListFormat) QBrush {
        return .{ .ptr = qtc.QTextFormat_Foreground(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `clearForeground` instead
    ///
    pub const ClearForeground = clearForeground;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn clearForeground(self: QTextListFormat) void {
        qtc.QTextFormat_ClearForeground(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlistformat.html#dtor.QTextListFormat)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextListFormat `
    ///
    pub fn delete(self: QTextListFormat) void {
        qtc.QTextListFormat_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextimageformat.html)
pub const QTextImageFormat = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextimageformat.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTextImageFormat,

    pub const _is_QTextImageFormat = {};
    pub const _is_QTextCharFormat = {};
    pub const _is_QTextFormat = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTextImageFormat object in C++ memory
    ///
    pub fn new() QTextImageFormat {
        return .{ .ptr = qtc.QTextImageFormat_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QTextImageFormat object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QTextImageFormat `
    ///
    pub fn new2(param1: anytype) QTextImageFormat {
        comptime _ = @TypeOf(param1)._is_QTextImageFormat;
        return .{ .ptr = qtc.QTextImageFormat_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextimageformat.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn isValid(self: QTextImageFormat) bool {
        return qtc.QTextImageFormat_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextimageformat.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: QTextImageFormat, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.QTextImageFormat_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextimageformat.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QTextImageFormat, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextImageFormat_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextImageFormat.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setWidth` instead
    ///
    pub const SetWidth = setWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextimageformat.html#setWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` _width: f64 `
    ///
    pub fn setWidth(self: QTextImageFormat, _width: f64) void {
        qtc.QTextImageFormat_SetWidth(@ptrCast(self.ptr), @bitCast(_width));
    }

    /// ### DEPRECATED: Use `width` instead
    ///
    pub const Width = width;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextimageformat.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn width(self: QTextImageFormat) f64 {
        return qtc.QTextImageFormat_Width(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMaximumWidth` instead
    ///
    pub const SetMaximumWidth = setMaximumWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextimageformat.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` maxWidth: QTextLength `
    ///
    pub fn setMaximumWidth(self: QTextImageFormat, maxWidth: anytype) void {
        comptime _ = @TypeOf(maxWidth)._is_QTextLength;
        qtc.QTextImageFormat_SetMaximumWidth(@ptrCast(self.ptr), @ptrCast(maxWidth.ptr));
    }

    /// ### DEPRECATED: Use `maximumWidth` instead
    ///
    pub const MaximumWidth = maximumWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextimageformat.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn maximumWidth(self: QTextImageFormat) QTextLength {
        return .{ .ptr = qtc.QTextImageFormat_MaximumWidth(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setHeight` instead
    ///
    pub const SetHeight = setHeight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextimageformat.html#setHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` _height: f64 `
    ///
    pub fn setHeight(self: QTextImageFormat, _height: f64) void {
        qtc.QTextImageFormat_SetHeight(@ptrCast(self.ptr), @bitCast(_height));
    }

    /// ### DEPRECATED: Use `height` instead
    ///
    pub const Height = height;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextimageformat.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn height(self: QTextImageFormat) f64 {
        return qtc.QTextImageFormat_Height(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setQuality` instead
    ///
    pub const SetQuality = setQuality;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextimageformat.html#setQuality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` _quality: i32 `
    ///
    pub fn setQuality(self: QTextImageFormat, _quality: i32) void {
        qtc.QTextImageFormat_SetQuality(@ptrCast(self.ptr), @bitCast(_quality));
    }

    /// ### DEPRECATED: Use `setQuality2` instead
    ///
    pub const SetQuality2 = setQuality2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextimageformat.html#setQuality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn setQuality2(self: QTextImageFormat) void {
        qtc.QTextImageFormat_SetQuality2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `quality` instead
    ///
    pub const Quality = quality;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextimageformat.html#quality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn quality(self: QTextImageFormat) i32 {
        return qtc.QTextImageFormat_Quality(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFont` instead
    ///
    pub const SetFont = setFont;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` _font: QFont `
    ///
    pub fn setFont(self: QTextImageFormat, _font: anytype) void {
        comptime _ = @TypeOf(_font)._is_QFont;
        qtc.QTextCharFormat_SetFont(@ptrCast(self.ptr), @ptrCast(_font.ptr));
    }

    /// ### DEPRECATED: Use `font` instead
    ///
    pub const Font = font;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn font(self: QTextImageFormat) QFont {
        return .{ .ptr = qtc.QTextCharFormat_Font(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFontFamily` instead
    ///
    pub const SetFontFamily = setFontFamily;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFamily)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` family: []const u8 `
    ///
    pub fn setFontFamily(self: QTextImageFormat, family: []const u8) void {
        const family_str = qtc.libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        qtc.QTextCharFormat_SetFontFamily(@ptrCast(self.ptr), family_str);
    }

    /// ### DEPRECATED: Use `fontFamily` instead
    ///
    pub const FontFamily = fontFamily;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontFamily)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn fontFamily(self: QTextImageFormat, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextCharFormat_FontFamily(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextImageFormat.fontFamily: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setFontFamilies` instead
    ///
    pub const SetFontFamilies = setFontFamilies;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFamilies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` families: []const []const u8 `
    ///
    pub fn setFontFamilies(self: QTextImageFormat, allocator: std.mem.Allocator, families: []const []const u8) void {
        const families_arr = allocator.alloc(qtc.libqt_string, families.len) catch @panic("QTextImageFormat.setFontFamilies: Memory allocation failed");
        defer allocator.free(families_arr);
        for (families, 0..families.len) |str_item, i|
            families_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const families_list = qtc.libqt_list{
            .len = families.len,
            .data = families_arr.ptr,
        };
        qtc.QTextCharFormat_SetFontFamilies(@ptrCast(self.ptr), families_list);
    }

    /// ### DEPRECATED: Use `fontFamilies` instead
    ///
    pub const FontFamilies = fontFamilies;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontFamilies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn fontFamilies(self: QTextImageFormat) QVariant {
        return .{ .ptr = qtc.QTextCharFormat_FontFamilies(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFontStyleName` instead
    ///
    pub const SetFontStyleName = setFontStyleName;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` styleName: []const u8 `
    ///
    pub fn setFontStyleName(self: QTextImageFormat, styleName: []const u8) void {
        const styleName_str = qtc.libqt_string{
            .len = styleName.len,
            .data = styleName.ptr,
        };
        qtc.QTextCharFormat_SetFontStyleName(@ptrCast(self.ptr), styleName_str);
    }

    /// ### DEPRECATED: Use `fontStyleName` instead
    ///
    pub const FontStyleName = fontStyleName;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn fontStyleName(self: QTextImageFormat) QVariant {
        return .{ .ptr = qtc.QTextCharFormat_FontStyleName(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFontPointSize` instead
    ///
    pub const SetFontPointSize = setFontPointSize;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontPointSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` size: f64 `
    ///
    pub fn setFontPointSize(self: QTextImageFormat, size: f64) void {
        qtc.QTextCharFormat_SetFontPointSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `fontPointSize` instead
    ///
    pub const FontPointSize = fontPointSize;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontPointSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn fontPointSize(self: QTextImageFormat) f64 {
        return qtc.QTextCharFormat_FontPointSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontWeight` instead
    ///
    pub const SetFontWeight = setFontWeight;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontWeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` weight: i32 `
    ///
    pub fn setFontWeight(self: QTextImageFormat, weight: i32) void {
        qtc.QTextCharFormat_SetFontWeight(@ptrCast(self.ptr), @bitCast(weight));
    }

    /// ### DEPRECATED: Use `fontWeight` instead
    ///
    pub const FontWeight = fontWeight;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontWeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn fontWeight(self: QTextImageFormat) i32 {
        return qtc.QTextCharFormat_FontWeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontItalic` instead
    ///
    pub const SetFontItalic = setFontItalic;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontItalic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` italic: bool `
    ///
    pub fn setFontItalic(self: QTextImageFormat, italic: bool) void {
        qtc.QTextCharFormat_SetFontItalic(@ptrCast(self.ptr), italic);
    }

    /// ### DEPRECATED: Use `fontItalic` instead
    ///
    pub const FontItalic = fontItalic;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontItalic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn fontItalic(self: QTextImageFormat) bool {
        return qtc.QTextCharFormat_FontItalic(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontCapitalization` instead
    ///
    pub const SetFontCapitalization = setFontCapitalization;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontCapitalization)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` capitalization: qfont_enums.Capitalization `
    ///
    pub fn setFontCapitalization(self: QTextImageFormat, capitalization: i32) void {
        qtc.QTextCharFormat_SetFontCapitalization(@ptrCast(self.ptr), @bitCast(capitalization));
    }

    /// ### DEPRECATED: Use `fontCapitalization` instead
    ///
    pub const FontCapitalization = fontCapitalization;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontCapitalization)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.Capitalization `
    ///
    pub fn fontCapitalization(self: QTextImageFormat) i32 {
        return qtc.QTextCharFormat_FontCapitalization(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontLetterSpacingType` instead
    ///
    pub const SetFontLetterSpacingType = setFontLetterSpacingType;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontLetterSpacingType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` letterSpacingType: qfont_enums.SpacingType `
    ///
    pub fn setFontLetterSpacingType(self: QTextImageFormat, letterSpacingType: i32) void {
        qtc.QTextCharFormat_SetFontLetterSpacingType(@ptrCast(self.ptr), @bitCast(letterSpacingType));
    }

    /// ### DEPRECATED: Use `fontLetterSpacingType` instead
    ///
    pub const FontLetterSpacingType = fontLetterSpacingType;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontLetterSpacingType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.SpacingType `
    ///
    pub fn fontLetterSpacingType(self: QTextImageFormat) i32 {
        return qtc.QTextCharFormat_FontLetterSpacingType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontLetterSpacing` instead
    ///
    pub const SetFontLetterSpacing = setFontLetterSpacing;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontLetterSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` spacing: f64 `
    ///
    pub fn setFontLetterSpacing(self: QTextImageFormat, spacing: f64) void {
        qtc.QTextCharFormat_SetFontLetterSpacing(@ptrCast(self.ptr), @bitCast(spacing));
    }

    /// ### DEPRECATED: Use `fontLetterSpacing` instead
    ///
    pub const FontLetterSpacing = fontLetterSpacing;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontLetterSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn fontLetterSpacing(self: QTextImageFormat) f64 {
        return qtc.QTextCharFormat_FontLetterSpacing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontWordSpacing` instead
    ///
    pub const SetFontWordSpacing = setFontWordSpacing;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontWordSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` spacing: f64 `
    ///
    pub fn setFontWordSpacing(self: QTextImageFormat, spacing: f64) void {
        qtc.QTextCharFormat_SetFontWordSpacing(@ptrCast(self.ptr), @bitCast(spacing));
    }

    /// ### DEPRECATED: Use `fontWordSpacing` instead
    ///
    pub const FontWordSpacing = fontWordSpacing;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontWordSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn fontWordSpacing(self: QTextImageFormat) f64 {
        return qtc.QTextCharFormat_FontWordSpacing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontUnderline` instead
    ///
    pub const SetFontUnderline = setFontUnderline;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontUnderline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` underline: bool `
    ///
    pub fn setFontUnderline(self: QTextImageFormat, underline: bool) void {
        qtc.QTextCharFormat_SetFontUnderline(@ptrCast(self.ptr), underline);
    }

    /// ### DEPRECATED: Use `fontUnderline` instead
    ///
    pub const FontUnderline = fontUnderline;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontUnderline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn fontUnderline(self: QTextImageFormat) bool {
        return qtc.QTextCharFormat_FontUnderline(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontOverline` instead
    ///
    pub const SetFontOverline = setFontOverline;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontOverline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` overline: bool `
    ///
    pub fn setFontOverline(self: QTextImageFormat, overline: bool) void {
        qtc.QTextCharFormat_SetFontOverline(@ptrCast(self.ptr), overline);
    }

    /// ### DEPRECATED: Use `fontOverline` instead
    ///
    pub const FontOverline = fontOverline;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontOverline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn fontOverline(self: QTextImageFormat) bool {
        return qtc.QTextCharFormat_FontOverline(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontStrikeOut` instead
    ///
    pub const SetFontStrikeOut = setFontStrikeOut;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStrikeOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` strikeOut: bool `
    ///
    pub fn setFontStrikeOut(self: QTextImageFormat, strikeOut: bool) void {
        qtc.QTextCharFormat_SetFontStrikeOut(@ptrCast(self.ptr), strikeOut);
    }

    /// ### DEPRECATED: Use `fontStrikeOut` instead
    ///
    pub const FontStrikeOut = fontStrikeOut;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontStrikeOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn fontStrikeOut(self: QTextImageFormat) bool {
        return qtc.QTextCharFormat_FontStrikeOut(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setUnderlineColor` instead
    ///
    pub const SetUnderlineColor = setUnderlineColor;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setUnderlineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` color: QColor `
    ///
    pub fn setUnderlineColor(self: QTextImageFormat, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QTextCharFormat_SetUnderlineColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `underlineColor` instead
    ///
    pub const UnderlineColor = underlineColor;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#underlineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn underlineColor(self: QTextImageFormat) QColor {
        return .{ .ptr = qtc.QTextCharFormat_UnderlineColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFontFixedPitch` instead
    ///
    pub const SetFontFixedPitch = setFontFixedPitch;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFixedPitch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` fixedPitch: bool `
    ///
    pub fn setFontFixedPitch(self: QTextImageFormat, fixedPitch: bool) void {
        qtc.QTextCharFormat_SetFontFixedPitch(@ptrCast(self.ptr), fixedPitch);
    }

    /// ### DEPRECATED: Use `fontFixedPitch` instead
    ///
    pub const FontFixedPitch = fontFixedPitch;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontFixedPitch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn fontFixedPitch(self: QTextImageFormat) bool {
        return qtc.QTextCharFormat_FontFixedPitch(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontStretch` instead
    ///
    pub const SetFontStretch = setFontStretch;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` factor: i32 `
    ///
    pub fn setFontStretch(self: QTextImageFormat, factor: i32) void {
        qtc.QTextCharFormat_SetFontStretch(@ptrCast(self.ptr), @bitCast(factor));
    }

    /// ### DEPRECATED: Use `fontStretch` instead
    ///
    pub const FontStretch = fontStretch;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn fontStretch(self: QTextImageFormat) i32 {
        return qtc.QTextCharFormat_FontStretch(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontStyleHint` instead
    ///
    pub const SetFontStyleHint = setFontStyleHint;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` hint: qfont_enums.StyleHint `
    ///
    pub fn setFontStyleHint(self: QTextImageFormat, hint: i32) void {
        qtc.QTextCharFormat_SetFontStyleHint(@ptrCast(self.ptr), @bitCast(hint));
    }

    /// ### DEPRECATED: Use `setFontStyleStrategy` instead
    ///
    pub const SetFontStyleStrategy = setFontStyleStrategy;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleStrategy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` strategy: qfont_enums.StyleStrategy `
    ///
    pub fn setFontStyleStrategy(self: QTextImageFormat, strategy: i32) void {
        qtc.QTextCharFormat_SetFontStyleStrategy(@ptrCast(self.ptr), @bitCast(strategy));
    }

    /// ### DEPRECATED: Use `fontStyleHint` instead
    ///
    pub const FontStyleHint = fontStyleHint;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.StyleHint `
    ///
    pub fn fontStyleHint(self: QTextImageFormat) i32 {
        return qtc.QTextCharFormat_FontStyleHint(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `fontStyleStrategy` instead
    ///
    pub const FontStyleStrategy = fontStyleStrategy;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleStrategy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.StyleStrategy `
    ///
    pub fn fontStyleStrategy(self: QTextImageFormat) i32 {
        return qtc.QTextCharFormat_FontStyleStrategy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontHintingPreference` instead
    ///
    pub const SetFontHintingPreference = setFontHintingPreference;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontHintingPreference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` hintingPreference: qfont_enums.HintingPreference `
    ///
    pub fn setFontHintingPreference(self: QTextImageFormat, hintingPreference: i32) void {
        qtc.QTextCharFormat_SetFontHintingPreference(@ptrCast(self.ptr), @bitCast(hintingPreference));
    }

    /// ### DEPRECATED: Use `fontHintingPreference` instead
    ///
    pub const FontHintingPreference = fontHintingPreference;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontHintingPreference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.HintingPreference `
    ///
    pub fn fontHintingPreference(self: QTextImageFormat) i32 {
        return qtc.QTextCharFormat_FontHintingPreference(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontKerning` instead
    ///
    pub const SetFontKerning = setFontKerning;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontKerning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` enable: bool `
    ///
    pub fn setFontKerning(self: QTextImageFormat, enable: bool) void {
        qtc.QTextCharFormat_SetFontKerning(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `fontKerning` instead
    ///
    pub const FontKerning = fontKerning;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontKerning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn fontKerning(self: QTextImageFormat) bool {
        return qtc.QTextCharFormat_FontKerning(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setUnderlineStyle` instead
    ///
    pub const SetUnderlineStyle = setUnderlineStyle;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setUnderlineStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` _style: qtextformat_enums.UnderlineStyle `
    ///
    pub fn setUnderlineStyle(self: QTextImageFormat, _style: i32) void {
        qtc.QTextCharFormat_SetUnderlineStyle(@ptrCast(self.ptr), @bitCast(_style));
    }

    /// ### DEPRECATED: Use `underlineStyle` instead
    ///
    pub const UnderlineStyle = underlineStyle;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#underlineStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ## Returns:
    ///
    /// ` qtextformat_enums.UnderlineStyle `
    ///
    pub fn underlineStyle(self: QTextImageFormat) i32 {
        return qtc.QTextCharFormat_UnderlineStyle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVerticalAlignment` instead
    ///
    pub const SetVerticalAlignment = setVerticalAlignment;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setVerticalAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` _alignment: qtextformat_enums.VerticalAlignment `
    ///
    pub fn setVerticalAlignment(self: QTextImageFormat, _alignment: i32) void {
        qtc.QTextCharFormat_SetVerticalAlignment(@ptrCast(self.ptr), @bitCast(_alignment));
    }

    /// ### DEPRECATED: Use `verticalAlignment` instead
    ///
    pub const VerticalAlignment = verticalAlignment;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#verticalAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ## Returns:
    ///
    /// ` qtextformat_enums.VerticalAlignment `
    ///
    pub fn verticalAlignment(self: QTextImageFormat) i32 {
        return qtc.QTextCharFormat_VerticalAlignment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTextOutline` instead
    ///
    pub const SetTextOutline = setTextOutline;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setTextOutline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` pen: QPen `
    ///
    pub fn setTextOutline(self: QTextImageFormat, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QTextCharFormat_SetTextOutline(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### DEPRECATED: Use `textOutline` instead
    ///
    pub const TextOutline = textOutline;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#textOutline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn textOutline(self: QTextImageFormat) QPen {
        return .{ .ptr = qtc.QTextCharFormat_TextOutline(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setToolTip` instead
    ///
    pub const SetToolTip = setToolTip;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` tip: []const u8 `
    ///
    pub fn setToolTip(self: QTextImageFormat, tip: []const u8) void {
        const tip_str = qtc.libqt_string{
            .len = tip.len,
            .data = tip.ptr,
        };
        qtc.QTextCharFormat_SetToolTip(@ptrCast(self.ptr), tip_str);
    }

    /// ### DEPRECATED: Use `toolTip` instead
    ///
    pub const ToolTip = toolTip;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#toolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toolTip(self: QTextImageFormat, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextCharFormat_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextImageFormat.toolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setSuperScriptBaseline` instead
    ///
    pub const SetSuperScriptBaseline = setSuperScriptBaseline;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setSuperScriptBaseline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` baseline: f64 `
    ///
    pub fn setSuperScriptBaseline(self: QTextImageFormat, baseline: f64) void {
        qtc.QTextCharFormat_SetSuperScriptBaseline(@ptrCast(self.ptr), @bitCast(baseline));
    }

    /// ### DEPRECATED: Use `superScriptBaseline` instead
    ///
    pub const SuperScriptBaseline = superScriptBaseline;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#superScriptBaseline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn superScriptBaseline(self: QTextImageFormat) f64 {
        return qtc.QTextCharFormat_SuperScriptBaseline(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSubScriptBaseline` instead
    ///
    pub const SetSubScriptBaseline = setSubScriptBaseline;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setSubScriptBaseline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` baseline: f64 `
    ///
    pub fn setSubScriptBaseline(self: QTextImageFormat, baseline: f64) void {
        qtc.QTextCharFormat_SetSubScriptBaseline(@ptrCast(self.ptr), @bitCast(baseline));
    }

    /// ### DEPRECATED: Use `subScriptBaseline` instead
    ///
    pub const SubScriptBaseline = subScriptBaseline;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#subScriptBaseline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn subScriptBaseline(self: QTextImageFormat) f64 {
        return qtc.QTextCharFormat_SubScriptBaseline(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBaselineOffset` instead
    ///
    pub const SetBaselineOffset = setBaselineOffset;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setBaselineOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` baseline: f64 `
    ///
    pub fn setBaselineOffset(self: QTextImageFormat, baseline: f64) void {
        qtc.QTextCharFormat_SetBaselineOffset(@ptrCast(self.ptr), @bitCast(baseline));
    }

    /// ### DEPRECATED: Use `baselineOffset` instead
    ///
    pub const BaselineOffset = baselineOffset;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#baselineOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn baselineOffset(self: QTextImageFormat) f64 {
        return qtc.QTextCharFormat_BaselineOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAnchor` instead
    ///
    pub const SetAnchor = setAnchor;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` anchor: bool `
    ///
    pub fn setAnchor(self: QTextImageFormat, anchor: bool) void {
        qtc.QTextCharFormat_SetAnchor(@ptrCast(self.ptr), anchor);
    }

    /// ### DEPRECATED: Use `isAnchor` instead
    ///
    pub const IsAnchor = isAnchor;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#isAnchor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn isAnchor(self: QTextImageFormat) bool {
        return qtc.QTextCharFormat_IsAnchor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAnchorHref` instead
    ///
    pub const SetAnchorHref = setAnchorHref;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchorHref)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` _value: []const u8 `
    ///
    pub fn setAnchorHref(self: QTextImageFormat, _value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = _value.len,
            .data = _value.ptr,
        };
        qtc.QTextCharFormat_SetAnchorHref(@ptrCast(self.ptr), value_str);
    }

    /// ### DEPRECATED: Use `anchorHref` instead
    ///
    pub const AnchorHref = anchorHref;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#anchorHref)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn anchorHref(self: QTextImageFormat, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextCharFormat_AnchorHref(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextImageFormat.anchorHref: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setAnchorNames` instead
    ///
    pub const SetAnchorNames = setAnchorNames;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchorNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` names: []const []const u8 `
    ///
    pub fn setAnchorNames(self: QTextImageFormat, allocator: std.mem.Allocator, names: []const []const u8) void {
        const names_arr = allocator.alloc(qtc.libqt_string, names.len) catch @panic("QTextImageFormat.setAnchorNames: Memory allocation failed");
        defer allocator.free(names_arr);
        for (names, 0..names.len) |str_item, i|
            names_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const names_list = qtc.libqt_list{
            .len = names.len,
            .data = names_arr.ptr,
        };
        qtc.QTextCharFormat_SetAnchorNames(@ptrCast(self.ptr), names_list);
    }

    /// ### DEPRECATED: Use `anchorNames` instead
    ///
    pub const AnchorNames = anchorNames;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#anchorNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn anchorNames(self: QTextImageFormat, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QTextCharFormat_AnchorNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QTextImageFormat.anchorNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QTextImageFormat.anchorNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setTableCellRowSpan` instead
    ///
    pub const SetTableCellRowSpan = setTableCellRowSpan;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setTableCellRowSpan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` _tableCellRowSpan: i32 `
    ///
    pub fn setTableCellRowSpan(self: QTextImageFormat, _tableCellRowSpan: i32) void {
        qtc.QTextCharFormat_SetTableCellRowSpan(@ptrCast(self.ptr), @bitCast(_tableCellRowSpan));
    }

    /// ### DEPRECATED: Use `tableCellRowSpan` instead
    ///
    pub const TableCellRowSpan = tableCellRowSpan;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#tableCellRowSpan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn tableCellRowSpan(self: QTextImageFormat) i32 {
        return qtc.QTextCharFormat_TableCellRowSpan(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTableCellColumnSpan` instead
    ///
    pub const SetTableCellColumnSpan = setTableCellColumnSpan;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setTableCellColumnSpan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` _tableCellColumnSpan: i32 `
    ///
    pub fn setTableCellColumnSpan(self: QTextImageFormat, _tableCellColumnSpan: i32) void {
        qtc.QTextCharFormat_SetTableCellColumnSpan(@ptrCast(self.ptr), @bitCast(_tableCellColumnSpan));
    }

    /// ### DEPRECATED: Use `tableCellColumnSpan` instead
    ///
    pub const TableCellColumnSpan = tableCellColumnSpan;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#tableCellColumnSpan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn tableCellColumnSpan(self: QTextImageFormat) i32 {
        return qtc.QTextCharFormat_TableCellColumnSpan(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFont2` instead
    ///
    pub const SetFont2 = setFont2;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` _font: QFont `
    ///
    /// ` behavior: qtextformat_enums.FontPropertiesInheritanceBehavior `
    ///
    pub fn setFont2(self: QTextImageFormat, _font: anytype, behavior: i32) void {
        comptime _ = @TypeOf(_font)._is_QFont;
        qtc.QTextCharFormat_SetFont2(@ptrCast(self.ptr), @ptrCast(_font.ptr), @bitCast(behavior));
    }

    /// ### DEPRECATED: Use `setFontStyleHint2` instead
    ///
    pub const SetFontStyleHint2 = setFontStyleHint2;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` hint: qfont_enums.StyleHint `
    ///
    /// ` strategy: qfont_enums.StyleStrategy `
    ///
    pub fn setFontStyleHint2(self: QTextImageFormat, hint: i32, strategy: i32) void {
        qtc.QTextCharFormat_SetFontStyleHint2(@ptrCast(self.ptr), @bitCast(hint), @bitCast(strategy));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn operatorAssign(self: QTextImageFormat, rhs: anytype) void {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        qtc.QTextFormat_OperatorAssign(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` other: QTextFormat `
    ///
    pub fn swap(self: QTextImageFormat, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTextFormat;
        qtc.QTextFormat_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `merge` instead
    ///
    pub const Merge = merge;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#merge)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` other: QTextFormat `
    ///
    pub fn merge(self: QTextImageFormat, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTextFormat;
        qtc.QTextFormat_Merge(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn isEmpty(self: QTextImageFormat) bool {
        return qtc.QTextFormat_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn type0(self: QTextImageFormat) i32 {
        return qtc.QTextFormat_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `objectIndex` instead
    ///
    pub const ObjectIndex = objectIndex;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#objectIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn objectIndex(self: QTextImageFormat) i32 {
        return qtc.QTextFormat_ObjectIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setObjectIndex` instead
    ///
    pub const SetObjectIndex = setObjectIndex;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setObjectIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` object: i32 `
    ///
    pub fn setObjectIndex(self: QTextImageFormat, object: i32) void {
        qtc.QTextFormat_SetObjectIndex(@ptrCast(self.ptr), @bitCast(object));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn property(self: QTextImageFormat, propertyId: i32) QVariant {
        return .{ .ptr = qtc.QTextFormat_Property(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` propertyId: i32 `
    ///
    /// ` _value: QVariant `
    ///
    pub fn setProperty(self: QTextImageFormat, propertyId: i32, _value: anytype) void {
        comptime _ = @TypeOf(_value)._is_QVariant;
        qtc.QTextFormat_SetProperty(@ptrCast(self.ptr), @bitCast(propertyId), @ptrCast(_value.ptr));
    }

    /// ### DEPRECATED: Use `clearProperty` instead
    ///
    pub const ClearProperty = clearProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn clearProperty(self: QTextImageFormat, propertyId: i32) void {
        qtc.QTextFormat_ClearProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// ### DEPRECATED: Use `hasProperty` instead
    ///
    pub const HasProperty = hasProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#hasProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn hasProperty(self: QTextImageFormat, propertyId: i32) bool {
        return qtc.QTextFormat_HasProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// ### DEPRECATED: Use `boolProperty` instead
    ///
    pub const BoolProperty = boolProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#boolProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn boolProperty(self: QTextImageFormat, propertyId: i32) bool {
        return qtc.QTextFormat_BoolProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// ### DEPRECATED: Use `intProperty` instead
    ///
    pub const IntProperty = intProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#intProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn intProperty(self: QTextImageFormat, propertyId: i32) i32 {
        return qtc.QTextFormat_IntProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// ### DEPRECATED: Use `doubleProperty` instead
    ///
    pub const DoubleProperty = doubleProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#doubleProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn doubleProperty(self: QTextImageFormat, propertyId: i32) f64 {
        return qtc.QTextFormat_DoubleProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// ### DEPRECATED: Use `stringProperty` instead
    ///
    pub const StringProperty = stringProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#stringProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn stringProperty(self: QTextImageFormat, allocator: std.mem.Allocator, propertyId: i32) []const u8 {
        var _str = qtc.QTextFormat_StringProperty(@ptrCast(self.ptr), @bitCast(propertyId));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextImageFormat.stringProperty: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `colorProperty` instead
    ///
    pub const ColorProperty = colorProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#colorProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn colorProperty(self: QTextImageFormat, propertyId: i32) QColor {
        return .{ .ptr = qtc.QTextFormat_ColorProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// ### DEPRECATED: Use `penProperty` instead
    ///
    pub const PenProperty = penProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#penProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn penProperty(self: QTextImageFormat, propertyId: i32) QPen {
        return .{ .ptr = qtc.QTextFormat_PenProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// ### DEPRECATED: Use `brushProperty` instead
    ///
    pub const BrushProperty = brushProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#brushProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn brushProperty(self: QTextImageFormat, propertyId: i32) QBrush {
        return .{ .ptr = qtc.QTextFormat_BrushProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// ### DEPRECATED: Use `lengthProperty` instead
    ///
    pub const LengthProperty = lengthProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#lengthProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn lengthProperty(self: QTextImageFormat, propertyId: i32) QTextLength {
        return .{ .ptr = qtc.QTextFormat_LengthProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// ### DEPRECATED: Use `lengthVectorProperty` instead
    ///
    pub const LengthVectorProperty = lengthVectorProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#lengthVectorProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn lengthVectorProperty(self: QTextImageFormat, allocator: std.mem.Allocator, propertyId: i32) []QTextLength {
        const _arr: qtc.libqt_list = qtc.QTextFormat_LengthVectorProperty(@ptrCast(self.ptr), @bitCast(propertyId));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTextLength, _arr.len) catch @panic("QTextImageFormat.lengthVectorProperty: Memory allocation failed");
        const _data_val: [*]QtC.QTextLength = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setProperty2` instead
    ///
    pub const SetProperty2 = setProperty2;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` propertyId: i32 `
    ///
    /// ` lengths: []QTextLength `
    ///
    pub fn setProperty2(self: QTextImageFormat, propertyId: i32, lengths: []QTextLength) void {
        const lengths_list = qtc.libqt_list{
            .len = lengths.len,
            .data = @ptrCast(lengths.ptr),
        };
        qtc.QTextFormat_SetProperty2(@ptrCast(self.ptr), @bitCast(propertyId), lengths_list);
    }

    /// ### DEPRECATED: Use `properties` instead
    ///
    pub const Properties = properties;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#properties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn properties(self: QTextImageFormat, allocator: std.mem.Allocator) ArrayMap_i32_QVariant {
        const _map: qtc.libqt_map = qtc.QTextFormat_Properties(@ptrCast(self.ptr));
        var _ret: ArrayMap_i32_QVariant = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("QTextImageFormat.properties: Total capacity allocation failed");
        defer {
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]QtC.QVariant = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            _ret.putAssumeCapacity(_key, .{ .ptr = @ptrCast(_value) });
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `propertyCount` instead
    ///
    pub const PropertyCount = propertyCount;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#propertyCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn propertyCount(self: QTextImageFormat) i32 {
        return qtc.QTextFormat_PropertyCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setObjectType` instead
    ///
    pub const SetObjectType = setObjectType;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setObjectType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn setObjectType(self: QTextImageFormat, typeVal: i32) void {
        qtc.QTextFormat_SetObjectType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `objectType` instead
    ///
    pub const ObjectType = objectType;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#objectType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn objectType(self: QTextImageFormat) i32 {
        return qtc.QTextFormat_ObjectType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCharFormat` instead
    ///
    pub const IsCharFormat = isCharFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn isCharFormat(self: QTextImageFormat) bool {
        return qtc.QTextFormat_IsCharFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isBlockFormat` instead
    ///
    pub const IsBlockFormat = isBlockFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isBlockFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn isBlockFormat(self: QTextImageFormat) bool {
        return qtc.QTextFormat_IsBlockFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isListFormat` instead
    ///
    pub const IsListFormat = isListFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isListFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn isListFormat(self: QTextImageFormat) bool {
        return qtc.QTextFormat_IsListFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isFrameFormat` instead
    ///
    pub const IsFrameFormat = isFrameFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isFrameFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn isFrameFormat(self: QTextImageFormat) bool {
        return qtc.QTextFormat_IsFrameFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isImageFormat` instead
    ///
    pub const IsImageFormat = isImageFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isImageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn isImageFormat(self: QTextImageFormat) bool {
        return qtc.QTextFormat_IsImageFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isTableFormat` instead
    ///
    pub const IsTableFormat = isTableFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isTableFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn isTableFormat(self: QTextImageFormat) bool {
        return qtc.QTextFormat_IsTableFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isTableCellFormat` instead
    ///
    pub const IsTableCellFormat = isTableCellFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isTableCellFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn isTableCellFormat(self: QTextImageFormat) bool {
        return qtc.QTextFormat_IsTableCellFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toBlockFormat` instead
    ///
    pub const ToBlockFormat = toBlockFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toBlockFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn toBlockFormat(self: QTextImageFormat) QTextBlockFormat {
        return .{ .ptr = qtc.QTextFormat_ToBlockFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toCharFormat` instead
    ///
    pub const ToCharFormat = toCharFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn toCharFormat(self: QTextImageFormat) QTextCharFormat {
        return .{ .ptr = qtc.QTextFormat_ToCharFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toListFormat` instead
    ///
    pub const ToListFormat = toListFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toListFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn toListFormat(self: QTextImageFormat) QTextListFormat {
        return .{ .ptr = qtc.QTextFormat_ToListFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toTableFormat` instead
    ///
    pub const ToTableFormat = toTableFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toTableFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn toTableFormat(self: QTextImageFormat) QTextTableFormat {
        return .{ .ptr = qtc.QTextFormat_ToTableFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toFrameFormat` instead
    ///
    pub const ToFrameFormat = toFrameFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toFrameFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn toFrameFormat(self: QTextImageFormat) QTextFrameFormat {
        return .{ .ptr = qtc.QTextFormat_ToFrameFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toImageFormat` instead
    ///
    pub const ToImageFormat = toImageFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toImageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn toImageFormat(self: QTextImageFormat) QTextImageFormat {
        return .{ .ptr = qtc.QTextFormat_ToImageFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toTableCellFormat` instead
    ///
    pub const ToTableCellFormat = toTableCellFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toTableCellFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn toTableCellFormat(self: QTextImageFormat) QTextTableCellFormat {
        return .{ .ptr = qtc.QTextFormat_ToTableCellFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn operatorEqual(self: QTextImageFormat, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        return qtc.QTextFormat_OperatorEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn operatorNotEqual(self: QTextImageFormat, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        return qtc.QTextFormat_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `toQVariant` instead
    ///
    pub const ToQVariant = toQVariant;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn toQVariant(self: QTextImageFormat) QVariant {
        return .{ .ptr = qtc.QTextFormat_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLayoutDirection` instead
    ///
    pub const SetLayoutDirection = setLayoutDirection;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setLayoutDirection(self: QTextImageFormat, direction: i32) void {
        qtc.QTextFormat_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// ### DEPRECATED: Use `layoutDirection` instead
    ///
    pub const LayoutDirection = layoutDirection;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn layoutDirection(self: QTextImageFormat) i32 {
        return qtc.QTextFormat_LayoutDirection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBackground` instead
    ///
    pub const SetBackground = setBackground;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` brush: QBrush `
    ///
    pub fn setBackground(self: QTextImageFormat, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTextFormat_SetBackground(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `background` instead
    ///
    pub const Background = background;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#background)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn background(self: QTextImageFormat) QBrush {
        return .{ .ptr = qtc.QTextFormat_Background(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `clearBackground` instead
    ///
    pub const ClearBackground = clearBackground;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn clearBackground(self: QTextImageFormat) void {
        qtc.QTextFormat_ClearBackground(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setForeground` instead
    ///
    pub const SetForeground = setForeground;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    /// ` brush: QBrush `
    ///
    pub fn setForeground(self: QTextImageFormat, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTextFormat_SetForeground(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `foreground` instead
    ///
    pub const Foreground = foreground;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#foreground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn foreground(self: QTextImageFormat) QBrush {
        return .{ .ptr = qtc.QTextFormat_Foreground(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `clearForeground` instead
    ///
    pub const ClearForeground = clearForeground;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn clearForeground(self: QTextImageFormat) void {
        qtc.QTextFormat_ClearForeground(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextimageformat.html#dtor.QTextImageFormat)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextImageFormat `
    ///
    pub fn delete(self: QTextImageFormat) void {
        qtc.QTextImageFormat_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html)
pub const QTextFrameFormat = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTextFrameFormat,

    pub const _is_QTextFrameFormat = {};
    pub const _is_QTextFormat = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTextFrameFormat object in C++ memory
    ///
    pub fn new() QTextFrameFormat {
        return .{ .ptr = qtc.QTextFrameFormat_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QTextFrameFormat object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QTextFrameFormat `
    ///
    pub fn new2(param1: anytype) QTextFrameFormat {
        comptime _ = @TypeOf(param1)._is_QTextFrameFormat;
        return .{ .ptr = qtc.QTextFrameFormat_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn isValid(self: QTextFrameFormat) bool {
        return qtc.QTextFrameFormat_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPosition` instead
    ///
    pub const SetPosition = setPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` f: qtextformat_enums.Position `
    ///
    pub fn setPosition(self: QTextFrameFormat, f: i32) void {
        qtc.QTextFrameFormat_SetPosition(@ptrCast(self.ptr), @bitCast(f));
    }

    /// ### DEPRECATED: Use `position` instead
    ///
    pub const Position = position;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ## Returns:
    ///
    /// ` qtextformat_enums.Position `
    ///
    pub fn position(self: QTextFrameFormat) i32 {
        return qtc.QTextFrameFormat_Position(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBorder` instead
    ///
    pub const SetBorder = setBorder;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setBorder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` _border: f64 `
    ///
    pub fn setBorder(self: QTextFrameFormat, _border: f64) void {
        qtc.QTextFrameFormat_SetBorder(@ptrCast(self.ptr), @bitCast(_border));
    }

    /// ### DEPRECATED: Use `border` instead
    ///
    pub const Border = border;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#border)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn border(self: QTextFrameFormat) f64 {
        return qtc.QTextFrameFormat_Border(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBorderBrush` instead
    ///
    pub const SetBorderBrush = setBorderBrush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setBorderBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` brush: QBrush `
    ///
    pub fn setBorderBrush(self: QTextFrameFormat, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTextFrameFormat_SetBorderBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `borderBrush` instead
    ///
    pub const BorderBrush = borderBrush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#borderBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn borderBrush(self: QTextFrameFormat) QBrush {
        return .{ .ptr = qtc.QTextFrameFormat_BorderBrush(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBorderStyle` instead
    ///
    pub const SetBorderStyle = setBorderStyle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setBorderStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` _style: qtextformat_enums.BorderStyle `
    ///
    pub fn setBorderStyle(self: QTextFrameFormat, _style: i32) void {
        qtc.QTextFrameFormat_SetBorderStyle(@ptrCast(self.ptr), @bitCast(_style));
    }

    /// ### DEPRECATED: Use `borderStyle` instead
    ///
    pub const BorderStyle = borderStyle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#borderStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ## Returns:
    ///
    /// ` qtextformat_enums.BorderStyle `
    ///
    pub fn borderStyle(self: QTextFrameFormat) i32 {
        return qtc.QTextFrameFormat_BorderStyle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMargin` instead
    ///
    pub const SetMargin = setMargin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` _margin: f64 `
    ///
    pub fn setMargin(self: QTextFrameFormat, _margin: f64) void {
        qtc.QTextFrameFormat_SetMargin(@ptrCast(self.ptr), @bitCast(_margin));
    }

    /// ### DEPRECATED: Use `margin` instead
    ///
    pub const Margin = margin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#margin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn margin(self: QTextFrameFormat) f64 {
        return qtc.QTextFrameFormat_Margin(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTopMargin` instead
    ///
    pub const SetTopMargin = setTopMargin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setTopMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` _margin: f64 `
    ///
    pub fn setTopMargin(self: QTextFrameFormat, _margin: f64) void {
        qtc.QTextFrameFormat_SetTopMargin(@ptrCast(self.ptr), @bitCast(_margin));
    }

    /// ### DEPRECATED: Use `topMargin` instead
    ///
    pub const TopMargin = topMargin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#topMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn topMargin(self: QTextFrameFormat) f64 {
        return qtc.QTextFrameFormat_TopMargin(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBottomMargin` instead
    ///
    pub const SetBottomMargin = setBottomMargin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setBottomMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` _margin: f64 `
    ///
    pub fn setBottomMargin(self: QTextFrameFormat, _margin: f64) void {
        qtc.QTextFrameFormat_SetBottomMargin(@ptrCast(self.ptr), @bitCast(_margin));
    }

    /// ### DEPRECATED: Use `bottomMargin` instead
    ///
    pub const BottomMargin = bottomMargin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#bottomMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn bottomMargin(self: QTextFrameFormat) f64 {
        return qtc.QTextFrameFormat_BottomMargin(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLeftMargin` instead
    ///
    pub const SetLeftMargin = setLeftMargin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setLeftMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` _margin: f64 `
    ///
    pub fn setLeftMargin(self: QTextFrameFormat, _margin: f64) void {
        qtc.QTextFrameFormat_SetLeftMargin(@ptrCast(self.ptr), @bitCast(_margin));
    }

    /// ### DEPRECATED: Use `leftMargin` instead
    ///
    pub const LeftMargin = leftMargin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#leftMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn leftMargin(self: QTextFrameFormat) f64 {
        return qtc.QTextFrameFormat_LeftMargin(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRightMargin` instead
    ///
    pub const SetRightMargin = setRightMargin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setRightMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` _margin: f64 `
    ///
    pub fn setRightMargin(self: QTextFrameFormat, _margin: f64) void {
        qtc.QTextFrameFormat_SetRightMargin(@ptrCast(self.ptr), @bitCast(_margin));
    }

    /// ### DEPRECATED: Use `rightMargin` instead
    ///
    pub const RightMargin = rightMargin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#rightMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn rightMargin(self: QTextFrameFormat) f64 {
        return qtc.QTextFrameFormat_RightMargin(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPadding` instead
    ///
    pub const SetPadding = setPadding;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setPadding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` _padding: f64 `
    ///
    pub fn setPadding(self: QTextFrameFormat, _padding: f64) void {
        qtc.QTextFrameFormat_SetPadding(@ptrCast(self.ptr), @bitCast(_padding));
    }

    /// ### DEPRECATED: Use `padding` instead
    ///
    pub const Padding = padding;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#padding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn padding(self: QTextFrameFormat) f64 {
        return qtc.QTextFrameFormat_Padding(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWidth` instead
    ///
    pub const SetWidth = setWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` _width: f64 `
    ///
    pub fn setWidth(self: QTextFrameFormat, _width: f64) void {
        qtc.QTextFrameFormat_SetWidth(@ptrCast(self.ptr), @bitCast(_width));
    }

    /// ### DEPRECATED: Use `setWidth2` instead
    ///
    pub const SetWidth2 = setWidth2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` length: QTextLength `
    ///
    pub fn setWidth2(self: QTextFrameFormat, length: anytype) void {
        comptime _ = @TypeOf(length)._is_QTextLength;
        qtc.QTextFrameFormat_SetWidth2(@ptrCast(self.ptr), @ptrCast(length.ptr));
    }

    /// ### DEPRECATED: Use `width` instead
    ///
    pub const Width = width;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn width(self: QTextFrameFormat) QTextLength {
        return .{ .ptr = qtc.QTextFrameFormat_Width(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setHeight` instead
    ///
    pub const SetHeight = setHeight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` _height: f64 `
    ///
    pub fn setHeight(self: QTextFrameFormat, _height: f64) void {
        qtc.QTextFrameFormat_SetHeight(@ptrCast(self.ptr), @bitCast(_height));
    }

    /// ### DEPRECATED: Use `setHeight2` instead
    ///
    pub const SetHeight2 = setHeight2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` _height: QTextLength `
    ///
    pub fn setHeight2(self: QTextFrameFormat, _height: anytype) void {
        comptime _ = @TypeOf(_height)._is_QTextLength;
        qtc.QTextFrameFormat_SetHeight2(@ptrCast(self.ptr), @ptrCast(_height.ptr));
    }

    /// ### DEPRECATED: Use `height` instead
    ///
    pub const Height = height;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn height(self: QTextFrameFormat) QTextLength {
        return .{ .ptr = qtc.QTextFrameFormat_Height(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPageBreakPolicy` instead
    ///
    pub const SetPageBreakPolicy = setPageBreakPolicy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setPageBreakPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` flags: flag of qtextformat_enums.PageBreakFlag `
    ///
    pub fn setPageBreakPolicy(self: QTextFrameFormat, flags: i32) void {
        qtc.QTextFrameFormat_SetPageBreakPolicy(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `pageBreakPolicy` instead
    ///
    pub const PageBreakPolicy = pageBreakPolicy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#pageBreakPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ## Returns:
    ///
    /// ` flag of qtextformat_enums.PageBreakFlag `
    ///
    pub fn pageBreakPolicy(self: QTextFrameFormat) i32 {
        return qtc.QTextFrameFormat_PageBreakPolicy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn operatorAssign(self: QTextFrameFormat, rhs: anytype) void {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        qtc.QTextFormat_OperatorAssign(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` other: QTextFormat `
    ///
    pub fn swap(self: QTextFrameFormat, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTextFormat;
        qtc.QTextFormat_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `merge` instead
    ///
    pub const Merge = merge;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#merge)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` other: QTextFormat `
    ///
    pub fn merge(self: QTextFrameFormat, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTextFormat;
        qtc.QTextFormat_Merge(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn isEmpty(self: QTextFrameFormat) bool {
        return qtc.QTextFormat_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn type0(self: QTextFrameFormat) i32 {
        return qtc.QTextFormat_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `objectIndex` instead
    ///
    pub const ObjectIndex = objectIndex;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#objectIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn objectIndex(self: QTextFrameFormat) i32 {
        return qtc.QTextFormat_ObjectIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setObjectIndex` instead
    ///
    pub const SetObjectIndex = setObjectIndex;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setObjectIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` object: i32 `
    ///
    pub fn setObjectIndex(self: QTextFrameFormat, object: i32) void {
        qtc.QTextFormat_SetObjectIndex(@ptrCast(self.ptr), @bitCast(object));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn property(self: QTextFrameFormat, propertyId: i32) QVariant {
        return .{ .ptr = qtc.QTextFormat_Property(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` propertyId: i32 `
    ///
    /// ` _value: QVariant `
    ///
    pub fn setProperty(self: QTextFrameFormat, propertyId: i32, _value: anytype) void {
        comptime _ = @TypeOf(_value)._is_QVariant;
        qtc.QTextFormat_SetProperty(@ptrCast(self.ptr), @bitCast(propertyId), @ptrCast(_value.ptr));
    }

    /// ### DEPRECATED: Use `clearProperty` instead
    ///
    pub const ClearProperty = clearProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn clearProperty(self: QTextFrameFormat, propertyId: i32) void {
        qtc.QTextFormat_ClearProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// ### DEPRECATED: Use `hasProperty` instead
    ///
    pub const HasProperty = hasProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#hasProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn hasProperty(self: QTextFrameFormat, propertyId: i32) bool {
        return qtc.QTextFormat_HasProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// ### DEPRECATED: Use `boolProperty` instead
    ///
    pub const BoolProperty = boolProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#boolProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn boolProperty(self: QTextFrameFormat, propertyId: i32) bool {
        return qtc.QTextFormat_BoolProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// ### DEPRECATED: Use `intProperty` instead
    ///
    pub const IntProperty = intProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#intProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn intProperty(self: QTextFrameFormat, propertyId: i32) i32 {
        return qtc.QTextFormat_IntProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// ### DEPRECATED: Use `doubleProperty` instead
    ///
    pub const DoubleProperty = doubleProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#doubleProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn doubleProperty(self: QTextFrameFormat, propertyId: i32) f64 {
        return qtc.QTextFormat_DoubleProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// ### DEPRECATED: Use `stringProperty` instead
    ///
    pub const StringProperty = stringProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#stringProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn stringProperty(self: QTextFrameFormat, allocator: std.mem.Allocator, propertyId: i32) []const u8 {
        var _str = qtc.QTextFormat_StringProperty(@ptrCast(self.ptr), @bitCast(propertyId));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextFrameFormat.stringProperty: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `colorProperty` instead
    ///
    pub const ColorProperty = colorProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#colorProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn colorProperty(self: QTextFrameFormat, propertyId: i32) QColor {
        return .{ .ptr = qtc.QTextFormat_ColorProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// ### DEPRECATED: Use `penProperty` instead
    ///
    pub const PenProperty = penProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#penProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn penProperty(self: QTextFrameFormat, propertyId: i32) QPen {
        return .{ .ptr = qtc.QTextFormat_PenProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// ### DEPRECATED: Use `brushProperty` instead
    ///
    pub const BrushProperty = brushProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#brushProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn brushProperty(self: QTextFrameFormat, propertyId: i32) QBrush {
        return .{ .ptr = qtc.QTextFormat_BrushProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// ### DEPRECATED: Use `lengthProperty` instead
    ///
    pub const LengthProperty = lengthProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#lengthProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn lengthProperty(self: QTextFrameFormat, propertyId: i32) QTextLength {
        return .{ .ptr = qtc.QTextFormat_LengthProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// ### DEPRECATED: Use `lengthVectorProperty` instead
    ///
    pub const LengthVectorProperty = lengthVectorProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#lengthVectorProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn lengthVectorProperty(self: QTextFrameFormat, allocator: std.mem.Allocator, propertyId: i32) []QTextLength {
        const _arr: qtc.libqt_list = qtc.QTextFormat_LengthVectorProperty(@ptrCast(self.ptr), @bitCast(propertyId));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTextLength, _arr.len) catch @panic("QTextFrameFormat.lengthVectorProperty: Memory allocation failed");
        const _data_val: [*]QtC.QTextLength = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setProperty2` instead
    ///
    pub const SetProperty2 = setProperty2;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` propertyId: i32 `
    ///
    /// ` lengths: []QTextLength `
    ///
    pub fn setProperty2(self: QTextFrameFormat, propertyId: i32, lengths: []QTextLength) void {
        const lengths_list = qtc.libqt_list{
            .len = lengths.len,
            .data = @ptrCast(lengths.ptr),
        };
        qtc.QTextFormat_SetProperty2(@ptrCast(self.ptr), @bitCast(propertyId), lengths_list);
    }

    /// ### DEPRECATED: Use `properties` instead
    ///
    pub const Properties = properties;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#properties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn properties(self: QTextFrameFormat, allocator: std.mem.Allocator) ArrayMap_i32_QVariant {
        const _map: qtc.libqt_map = qtc.QTextFormat_Properties(@ptrCast(self.ptr));
        var _ret: ArrayMap_i32_QVariant = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("QTextFrameFormat.properties: Total capacity allocation failed");
        defer {
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]QtC.QVariant = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            _ret.putAssumeCapacity(_key, .{ .ptr = @ptrCast(_value) });
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `propertyCount` instead
    ///
    pub const PropertyCount = propertyCount;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#propertyCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn propertyCount(self: QTextFrameFormat) i32 {
        return qtc.QTextFormat_PropertyCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setObjectType` instead
    ///
    pub const SetObjectType = setObjectType;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setObjectType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn setObjectType(self: QTextFrameFormat, typeVal: i32) void {
        qtc.QTextFormat_SetObjectType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `objectType` instead
    ///
    pub const ObjectType = objectType;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#objectType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn objectType(self: QTextFrameFormat) i32 {
        return qtc.QTextFormat_ObjectType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCharFormat` instead
    ///
    pub const IsCharFormat = isCharFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn isCharFormat(self: QTextFrameFormat) bool {
        return qtc.QTextFormat_IsCharFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isBlockFormat` instead
    ///
    pub const IsBlockFormat = isBlockFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isBlockFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn isBlockFormat(self: QTextFrameFormat) bool {
        return qtc.QTextFormat_IsBlockFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isListFormat` instead
    ///
    pub const IsListFormat = isListFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isListFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn isListFormat(self: QTextFrameFormat) bool {
        return qtc.QTextFormat_IsListFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isFrameFormat` instead
    ///
    pub const IsFrameFormat = isFrameFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isFrameFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn isFrameFormat(self: QTextFrameFormat) bool {
        return qtc.QTextFormat_IsFrameFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isImageFormat` instead
    ///
    pub const IsImageFormat = isImageFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isImageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn isImageFormat(self: QTextFrameFormat) bool {
        return qtc.QTextFormat_IsImageFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isTableFormat` instead
    ///
    pub const IsTableFormat = isTableFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isTableFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn isTableFormat(self: QTextFrameFormat) bool {
        return qtc.QTextFormat_IsTableFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isTableCellFormat` instead
    ///
    pub const IsTableCellFormat = isTableCellFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isTableCellFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn isTableCellFormat(self: QTextFrameFormat) bool {
        return qtc.QTextFormat_IsTableCellFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toBlockFormat` instead
    ///
    pub const ToBlockFormat = toBlockFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toBlockFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn toBlockFormat(self: QTextFrameFormat) QTextBlockFormat {
        return .{ .ptr = qtc.QTextFormat_ToBlockFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toCharFormat` instead
    ///
    pub const ToCharFormat = toCharFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn toCharFormat(self: QTextFrameFormat) QTextCharFormat {
        return .{ .ptr = qtc.QTextFormat_ToCharFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toListFormat` instead
    ///
    pub const ToListFormat = toListFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toListFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn toListFormat(self: QTextFrameFormat) QTextListFormat {
        return .{ .ptr = qtc.QTextFormat_ToListFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toTableFormat` instead
    ///
    pub const ToTableFormat = toTableFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toTableFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn toTableFormat(self: QTextFrameFormat) QTextTableFormat {
        return .{ .ptr = qtc.QTextFormat_ToTableFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toFrameFormat` instead
    ///
    pub const ToFrameFormat = toFrameFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toFrameFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn toFrameFormat(self: QTextFrameFormat) QTextFrameFormat {
        return .{ .ptr = qtc.QTextFormat_ToFrameFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toImageFormat` instead
    ///
    pub const ToImageFormat = toImageFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toImageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn toImageFormat(self: QTextFrameFormat) QTextImageFormat {
        return .{ .ptr = qtc.QTextFormat_ToImageFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toTableCellFormat` instead
    ///
    pub const ToTableCellFormat = toTableCellFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toTableCellFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn toTableCellFormat(self: QTextFrameFormat) QTextTableCellFormat {
        return .{ .ptr = qtc.QTextFormat_ToTableCellFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn operatorEqual(self: QTextFrameFormat, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        return qtc.QTextFormat_OperatorEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn operatorNotEqual(self: QTextFrameFormat, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        return qtc.QTextFormat_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `toQVariant` instead
    ///
    pub const ToQVariant = toQVariant;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn toQVariant(self: QTextFrameFormat) QVariant {
        return .{ .ptr = qtc.QTextFormat_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLayoutDirection` instead
    ///
    pub const SetLayoutDirection = setLayoutDirection;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setLayoutDirection(self: QTextFrameFormat, direction: i32) void {
        qtc.QTextFormat_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// ### DEPRECATED: Use `layoutDirection` instead
    ///
    pub const LayoutDirection = layoutDirection;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn layoutDirection(self: QTextFrameFormat) i32 {
        return qtc.QTextFormat_LayoutDirection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBackground` instead
    ///
    pub const SetBackground = setBackground;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` brush: QBrush `
    ///
    pub fn setBackground(self: QTextFrameFormat, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTextFormat_SetBackground(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `background` instead
    ///
    pub const Background = background;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#background)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn background(self: QTextFrameFormat) QBrush {
        return .{ .ptr = qtc.QTextFormat_Background(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `clearBackground` instead
    ///
    pub const ClearBackground = clearBackground;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn clearBackground(self: QTextFrameFormat) void {
        qtc.QTextFormat_ClearBackground(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setForeground` instead
    ///
    pub const SetForeground = setForeground;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    /// ` brush: QBrush `
    ///
    pub fn setForeground(self: QTextFrameFormat, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTextFormat_SetForeground(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `foreground` instead
    ///
    pub const Foreground = foreground;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#foreground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn foreground(self: QTextFrameFormat) QBrush {
        return .{ .ptr = qtc.QTextFormat_Foreground(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `clearForeground` instead
    ///
    pub const ClearForeground = clearForeground;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn clearForeground(self: QTextFrameFormat) void {
        qtc.QTextFormat_ClearForeground(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#dtor.QTextFrameFormat)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextFrameFormat `
    ///
    pub fn delete(self: QTextFrameFormat) void {
        qtc.QTextFrameFormat_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttableformat.html)
pub const QTextTableFormat = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttableformat.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTextTableFormat,

    pub const _is_QTextTableFormat = {};
    pub const _is_QTextFrameFormat = {};
    pub const _is_QTextFormat = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTextTableFormat object in C++ memory
    ///
    pub fn new() QTextTableFormat {
        return .{ .ptr = qtc.QTextTableFormat_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QTextTableFormat object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QTextTableFormat `
    ///
    pub fn new2(param1: anytype) QTextTableFormat {
        comptime _ = @TypeOf(param1)._is_QTextTableFormat;
        return .{ .ptr = qtc.QTextTableFormat_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttableformat.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn isValid(self: QTextTableFormat) bool {
        return qtc.QTextTableFormat_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `columns` instead
    ///
    pub const Columns = columns;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttableformat.html#columns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn columns(self: QTextTableFormat) i32 {
        return qtc.QTextTableFormat_Columns(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setColumns` instead
    ///
    pub const SetColumns = setColumns;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttableformat.html#setColumns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` _columns: i32 `
    ///
    pub fn setColumns(self: QTextTableFormat, _columns: i32) void {
        qtc.QTextTableFormat_SetColumns(@ptrCast(self.ptr), @bitCast(_columns));
    }

    /// ### DEPRECATED: Use `setColumnWidthConstraints` instead
    ///
    pub const SetColumnWidthConstraints = setColumnWidthConstraints;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttableformat.html#setColumnWidthConstraints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` constraints: []QTextLength `
    ///
    pub fn setColumnWidthConstraints(self: QTextTableFormat, constraints: []QTextLength) void {
        const constraints_list = qtc.libqt_list{
            .len = constraints.len,
            .data = @ptrCast(constraints.ptr),
        };
        qtc.QTextTableFormat_SetColumnWidthConstraints(@ptrCast(self.ptr), constraints_list);
    }

    /// ### DEPRECATED: Use `columnWidthConstraints` instead
    ///
    pub const ColumnWidthConstraints = columnWidthConstraints;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttableformat.html#columnWidthConstraints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn columnWidthConstraints(self: QTextTableFormat, allocator: std.mem.Allocator) []QTextLength {
        const _arr: qtc.libqt_list = qtc.QTextTableFormat_ColumnWidthConstraints(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTextLength, _arr.len) catch @panic("QTextTableFormat.columnWidthConstraints: Memory allocation failed");
        const _data_val: [*]QtC.QTextLength = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `clearColumnWidthConstraints` instead
    ///
    pub const ClearColumnWidthConstraints = clearColumnWidthConstraints;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttableformat.html#clearColumnWidthConstraints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn clearColumnWidthConstraints(self: QTextTableFormat) void {
        qtc.QTextTableFormat_ClearColumnWidthConstraints(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `cellSpacing` instead
    ///
    pub const CellSpacing = cellSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttableformat.html#cellSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn cellSpacing(self: QTextTableFormat) f64 {
        return qtc.QTextTableFormat_CellSpacing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCellSpacing` instead
    ///
    pub const SetCellSpacing = setCellSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttableformat.html#setCellSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` spacing: f64 `
    ///
    pub fn setCellSpacing(self: QTextTableFormat, spacing: f64) void {
        qtc.QTextTableFormat_SetCellSpacing(@ptrCast(self.ptr), @bitCast(spacing));
    }

    /// ### DEPRECATED: Use `cellPadding` instead
    ///
    pub const CellPadding = cellPadding;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttableformat.html#cellPadding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn cellPadding(self: QTextTableFormat) f64 {
        return qtc.QTextTableFormat_CellPadding(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCellPadding` instead
    ///
    pub const SetCellPadding = setCellPadding;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttableformat.html#setCellPadding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` _padding: f64 `
    ///
    pub fn setCellPadding(self: QTextTableFormat, _padding: f64) void {
        qtc.QTextTableFormat_SetCellPadding(@ptrCast(self.ptr), @bitCast(_padding));
    }

    /// ### DEPRECATED: Use `setAlignment` instead
    ///
    pub const SetAlignment = setAlignment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttableformat.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` _alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn setAlignment(self: QTextTableFormat, _alignment: i32) void {
        qtc.QTextTableFormat_SetAlignment(@ptrCast(self.ptr), @bitCast(_alignment));
    }

    /// ### DEPRECATED: Use `alignment` instead
    ///
    pub const Alignment = alignment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttableformat.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn alignment(self: QTextTableFormat) i32 {
        return qtc.QTextTableFormat_Alignment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHeaderRowCount` instead
    ///
    pub const SetHeaderRowCount = setHeaderRowCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttableformat.html#setHeaderRowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` count: i32 `
    ///
    pub fn setHeaderRowCount(self: QTextTableFormat, count: i32) void {
        qtc.QTextTableFormat_SetHeaderRowCount(@ptrCast(self.ptr), @bitCast(count));
    }

    /// ### DEPRECATED: Use `headerRowCount` instead
    ///
    pub const HeaderRowCount = headerRowCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttableformat.html#headerRowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn headerRowCount(self: QTextTableFormat) i32 {
        return qtc.QTextTableFormat_HeaderRowCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBorderCollapse` instead
    ///
    pub const SetBorderCollapse = setBorderCollapse;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttableformat.html#setBorderCollapse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` _borderCollapse: bool `
    ///
    pub fn setBorderCollapse(self: QTextTableFormat, _borderCollapse: bool) void {
        qtc.QTextTableFormat_SetBorderCollapse(@ptrCast(self.ptr), _borderCollapse);
    }

    /// ### DEPRECATED: Use `borderCollapse` instead
    ///
    pub const BorderCollapse = borderCollapse;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttableformat.html#borderCollapse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn borderCollapse(self: QTextTableFormat) bool {
        return qtc.QTextTableFormat_BorderCollapse(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPosition` instead
    ///
    pub const SetPosition = setPosition;

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` f: qtextformat_enums.Position `
    ///
    pub fn setPosition(self: QTextTableFormat, f: i32) void {
        qtc.QTextFrameFormat_SetPosition(@ptrCast(self.ptr), @bitCast(f));
    }

    /// ### DEPRECATED: Use `position` instead
    ///
    pub const Position = position;

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ## Returns:
    ///
    /// ` qtextformat_enums.Position `
    ///
    pub fn position(self: QTextTableFormat) i32 {
        return qtc.QTextFrameFormat_Position(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBorder` instead
    ///
    pub const SetBorder = setBorder;

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setBorder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` _border: f64 `
    ///
    pub fn setBorder(self: QTextTableFormat, _border: f64) void {
        qtc.QTextFrameFormat_SetBorder(@ptrCast(self.ptr), @bitCast(_border));
    }

    /// ### DEPRECATED: Use `border` instead
    ///
    pub const Border = border;

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#border)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn border(self: QTextTableFormat) f64 {
        return qtc.QTextFrameFormat_Border(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBorderBrush` instead
    ///
    pub const SetBorderBrush = setBorderBrush;

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setBorderBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` brush: QBrush `
    ///
    pub fn setBorderBrush(self: QTextTableFormat, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTextFrameFormat_SetBorderBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `borderBrush` instead
    ///
    pub const BorderBrush = borderBrush;

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#borderBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn borderBrush(self: QTextTableFormat) QBrush {
        return .{ .ptr = qtc.QTextFrameFormat_BorderBrush(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBorderStyle` instead
    ///
    pub const SetBorderStyle = setBorderStyle;

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setBorderStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` _style: qtextformat_enums.BorderStyle `
    ///
    pub fn setBorderStyle(self: QTextTableFormat, _style: i32) void {
        qtc.QTextFrameFormat_SetBorderStyle(@ptrCast(self.ptr), @bitCast(_style));
    }

    /// ### DEPRECATED: Use `borderStyle` instead
    ///
    pub const BorderStyle = borderStyle;

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#borderStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ## Returns:
    ///
    /// ` qtextformat_enums.BorderStyle `
    ///
    pub fn borderStyle(self: QTextTableFormat) i32 {
        return qtc.QTextFrameFormat_BorderStyle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMargin` instead
    ///
    pub const SetMargin = setMargin;

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` _margin: f64 `
    ///
    pub fn setMargin(self: QTextTableFormat, _margin: f64) void {
        qtc.QTextFrameFormat_SetMargin(@ptrCast(self.ptr), @bitCast(_margin));
    }

    /// ### DEPRECATED: Use `margin` instead
    ///
    pub const Margin = margin;

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#margin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn margin(self: QTextTableFormat) f64 {
        return qtc.QTextFrameFormat_Margin(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTopMargin` instead
    ///
    pub const SetTopMargin = setTopMargin;

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setTopMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` _margin: f64 `
    ///
    pub fn setTopMargin(self: QTextTableFormat, _margin: f64) void {
        qtc.QTextFrameFormat_SetTopMargin(@ptrCast(self.ptr), @bitCast(_margin));
    }

    /// ### DEPRECATED: Use `topMargin` instead
    ///
    pub const TopMargin = topMargin;

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#topMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn topMargin(self: QTextTableFormat) f64 {
        return qtc.QTextFrameFormat_TopMargin(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBottomMargin` instead
    ///
    pub const SetBottomMargin = setBottomMargin;

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setBottomMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` _margin: f64 `
    ///
    pub fn setBottomMargin(self: QTextTableFormat, _margin: f64) void {
        qtc.QTextFrameFormat_SetBottomMargin(@ptrCast(self.ptr), @bitCast(_margin));
    }

    /// ### DEPRECATED: Use `bottomMargin` instead
    ///
    pub const BottomMargin = bottomMargin;

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#bottomMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn bottomMargin(self: QTextTableFormat) f64 {
        return qtc.QTextFrameFormat_BottomMargin(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLeftMargin` instead
    ///
    pub const SetLeftMargin = setLeftMargin;

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setLeftMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` _margin: f64 `
    ///
    pub fn setLeftMargin(self: QTextTableFormat, _margin: f64) void {
        qtc.QTextFrameFormat_SetLeftMargin(@ptrCast(self.ptr), @bitCast(_margin));
    }

    /// ### DEPRECATED: Use `leftMargin` instead
    ///
    pub const LeftMargin = leftMargin;

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#leftMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn leftMargin(self: QTextTableFormat) f64 {
        return qtc.QTextFrameFormat_LeftMargin(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRightMargin` instead
    ///
    pub const SetRightMargin = setRightMargin;

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setRightMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` _margin: f64 `
    ///
    pub fn setRightMargin(self: QTextTableFormat, _margin: f64) void {
        qtc.QTextFrameFormat_SetRightMargin(@ptrCast(self.ptr), @bitCast(_margin));
    }

    /// ### DEPRECATED: Use `rightMargin` instead
    ///
    pub const RightMargin = rightMargin;

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#rightMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn rightMargin(self: QTextTableFormat) f64 {
        return qtc.QTextFrameFormat_RightMargin(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPadding` instead
    ///
    pub const SetPadding = setPadding;

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setPadding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` _padding: f64 `
    ///
    pub fn setPadding(self: QTextTableFormat, _padding: f64) void {
        qtc.QTextFrameFormat_SetPadding(@ptrCast(self.ptr), @bitCast(_padding));
    }

    /// ### DEPRECATED: Use `padding` instead
    ///
    pub const Padding = padding;

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#padding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn padding(self: QTextTableFormat) f64 {
        return qtc.QTextFrameFormat_Padding(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWidth` instead
    ///
    pub const SetWidth = setWidth;

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` _width: f64 `
    ///
    pub fn setWidth(self: QTextTableFormat, _width: f64) void {
        qtc.QTextFrameFormat_SetWidth(@ptrCast(self.ptr), @bitCast(_width));
    }

    /// ### DEPRECATED: Use `setWidth2` instead
    ///
    pub const SetWidth2 = setWidth2;

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` length: QTextLength `
    ///
    pub fn setWidth2(self: QTextTableFormat, length: anytype) void {
        comptime _ = @TypeOf(length)._is_QTextLength;
        qtc.QTextFrameFormat_SetWidth2(@ptrCast(self.ptr), @ptrCast(length.ptr));
    }

    /// ### DEPRECATED: Use `width` instead
    ///
    pub const Width = width;

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn width(self: QTextTableFormat) QTextLength {
        return .{ .ptr = qtc.QTextFrameFormat_Width(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setHeight` instead
    ///
    pub const SetHeight = setHeight;

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` _height: f64 `
    ///
    pub fn setHeight(self: QTextTableFormat, _height: f64) void {
        qtc.QTextFrameFormat_SetHeight(@ptrCast(self.ptr), @bitCast(_height));
    }

    /// ### DEPRECATED: Use `setHeight2` instead
    ///
    pub const SetHeight2 = setHeight2;

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` _height: QTextLength `
    ///
    pub fn setHeight2(self: QTextTableFormat, _height: anytype) void {
        comptime _ = @TypeOf(_height)._is_QTextLength;
        qtc.QTextFrameFormat_SetHeight2(@ptrCast(self.ptr), @ptrCast(_height.ptr));
    }

    /// ### DEPRECATED: Use `height` instead
    ///
    pub const Height = height;

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn height(self: QTextTableFormat) QTextLength {
        return .{ .ptr = qtc.QTextFrameFormat_Height(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPageBreakPolicy` instead
    ///
    pub const SetPageBreakPolicy = setPageBreakPolicy;

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#setPageBreakPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` flags: flag of qtextformat_enums.PageBreakFlag `
    ///
    pub fn setPageBreakPolicy(self: QTextTableFormat, flags: i32) void {
        qtc.QTextFrameFormat_SetPageBreakPolicy(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `pageBreakPolicy` instead
    ///
    pub const PageBreakPolicy = pageBreakPolicy;

    /// Inherited from QTextFrameFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextframeformat.html#pageBreakPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ## Returns:
    ///
    /// ` flag of qtextformat_enums.PageBreakFlag `
    ///
    pub fn pageBreakPolicy(self: QTextTableFormat) i32 {
        return qtc.QTextFrameFormat_PageBreakPolicy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn operatorAssign(self: QTextTableFormat, rhs: anytype) void {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        qtc.QTextFormat_OperatorAssign(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` other: QTextFormat `
    ///
    pub fn swap(self: QTextTableFormat, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTextFormat;
        qtc.QTextFormat_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `merge` instead
    ///
    pub const Merge = merge;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#merge)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` other: QTextFormat `
    ///
    pub fn merge(self: QTextTableFormat, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTextFormat;
        qtc.QTextFormat_Merge(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn isEmpty(self: QTextTableFormat) bool {
        return qtc.QTextFormat_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn type0(self: QTextTableFormat) i32 {
        return qtc.QTextFormat_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `objectIndex` instead
    ///
    pub const ObjectIndex = objectIndex;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#objectIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn objectIndex(self: QTextTableFormat) i32 {
        return qtc.QTextFormat_ObjectIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setObjectIndex` instead
    ///
    pub const SetObjectIndex = setObjectIndex;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setObjectIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` object: i32 `
    ///
    pub fn setObjectIndex(self: QTextTableFormat, object: i32) void {
        qtc.QTextFormat_SetObjectIndex(@ptrCast(self.ptr), @bitCast(object));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn property(self: QTextTableFormat, propertyId: i32) QVariant {
        return .{ .ptr = qtc.QTextFormat_Property(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` propertyId: i32 `
    ///
    /// ` _value: QVariant `
    ///
    pub fn setProperty(self: QTextTableFormat, propertyId: i32, _value: anytype) void {
        comptime _ = @TypeOf(_value)._is_QVariant;
        qtc.QTextFormat_SetProperty(@ptrCast(self.ptr), @bitCast(propertyId), @ptrCast(_value.ptr));
    }

    /// ### DEPRECATED: Use `clearProperty` instead
    ///
    pub const ClearProperty = clearProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn clearProperty(self: QTextTableFormat, propertyId: i32) void {
        qtc.QTextFormat_ClearProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// ### DEPRECATED: Use `hasProperty` instead
    ///
    pub const HasProperty = hasProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#hasProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn hasProperty(self: QTextTableFormat, propertyId: i32) bool {
        return qtc.QTextFormat_HasProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// ### DEPRECATED: Use `boolProperty` instead
    ///
    pub const BoolProperty = boolProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#boolProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn boolProperty(self: QTextTableFormat, propertyId: i32) bool {
        return qtc.QTextFormat_BoolProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// ### DEPRECATED: Use `intProperty` instead
    ///
    pub const IntProperty = intProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#intProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn intProperty(self: QTextTableFormat, propertyId: i32) i32 {
        return qtc.QTextFormat_IntProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// ### DEPRECATED: Use `doubleProperty` instead
    ///
    pub const DoubleProperty = doubleProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#doubleProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn doubleProperty(self: QTextTableFormat, propertyId: i32) f64 {
        return qtc.QTextFormat_DoubleProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// ### DEPRECATED: Use `stringProperty` instead
    ///
    pub const StringProperty = stringProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#stringProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn stringProperty(self: QTextTableFormat, allocator: std.mem.Allocator, propertyId: i32) []const u8 {
        var _str = qtc.QTextFormat_StringProperty(@ptrCast(self.ptr), @bitCast(propertyId));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextTableFormat.stringProperty: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `colorProperty` instead
    ///
    pub const ColorProperty = colorProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#colorProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn colorProperty(self: QTextTableFormat, propertyId: i32) QColor {
        return .{ .ptr = qtc.QTextFormat_ColorProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// ### DEPRECATED: Use `penProperty` instead
    ///
    pub const PenProperty = penProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#penProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn penProperty(self: QTextTableFormat, propertyId: i32) QPen {
        return .{ .ptr = qtc.QTextFormat_PenProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// ### DEPRECATED: Use `brushProperty` instead
    ///
    pub const BrushProperty = brushProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#brushProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn brushProperty(self: QTextTableFormat, propertyId: i32) QBrush {
        return .{ .ptr = qtc.QTextFormat_BrushProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// ### DEPRECATED: Use `lengthProperty` instead
    ///
    pub const LengthProperty = lengthProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#lengthProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn lengthProperty(self: QTextTableFormat, propertyId: i32) QTextLength {
        return .{ .ptr = qtc.QTextFormat_LengthProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// ### DEPRECATED: Use `lengthVectorProperty` instead
    ///
    pub const LengthVectorProperty = lengthVectorProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#lengthVectorProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn lengthVectorProperty(self: QTextTableFormat, allocator: std.mem.Allocator, propertyId: i32) []QTextLength {
        const _arr: qtc.libqt_list = qtc.QTextFormat_LengthVectorProperty(@ptrCast(self.ptr), @bitCast(propertyId));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTextLength, _arr.len) catch @panic("QTextTableFormat.lengthVectorProperty: Memory allocation failed");
        const _data_val: [*]QtC.QTextLength = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setProperty2` instead
    ///
    pub const SetProperty2 = setProperty2;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` propertyId: i32 `
    ///
    /// ` lengths: []QTextLength `
    ///
    pub fn setProperty2(self: QTextTableFormat, propertyId: i32, lengths: []QTextLength) void {
        const lengths_list = qtc.libqt_list{
            .len = lengths.len,
            .data = @ptrCast(lengths.ptr),
        };
        qtc.QTextFormat_SetProperty2(@ptrCast(self.ptr), @bitCast(propertyId), lengths_list);
    }

    /// ### DEPRECATED: Use `properties` instead
    ///
    pub const Properties = properties;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#properties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn properties(self: QTextTableFormat, allocator: std.mem.Allocator) ArrayMap_i32_QVariant {
        const _map: qtc.libqt_map = qtc.QTextFormat_Properties(@ptrCast(self.ptr));
        var _ret: ArrayMap_i32_QVariant = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("QTextTableFormat.properties: Total capacity allocation failed");
        defer {
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]QtC.QVariant = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            _ret.putAssumeCapacity(_key, .{ .ptr = @ptrCast(_value) });
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `propertyCount` instead
    ///
    pub const PropertyCount = propertyCount;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#propertyCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn propertyCount(self: QTextTableFormat) i32 {
        return qtc.QTextFormat_PropertyCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setObjectType` instead
    ///
    pub const SetObjectType = setObjectType;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setObjectType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn setObjectType(self: QTextTableFormat, typeVal: i32) void {
        qtc.QTextFormat_SetObjectType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `objectType` instead
    ///
    pub const ObjectType = objectType;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#objectType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn objectType(self: QTextTableFormat) i32 {
        return qtc.QTextFormat_ObjectType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCharFormat` instead
    ///
    pub const IsCharFormat = isCharFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn isCharFormat(self: QTextTableFormat) bool {
        return qtc.QTextFormat_IsCharFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isBlockFormat` instead
    ///
    pub const IsBlockFormat = isBlockFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isBlockFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn isBlockFormat(self: QTextTableFormat) bool {
        return qtc.QTextFormat_IsBlockFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isListFormat` instead
    ///
    pub const IsListFormat = isListFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isListFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn isListFormat(self: QTextTableFormat) bool {
        return qtc.QTextFormat_IsListFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isFrameFormat` instead
    ///
    pub const IsFrameFormat = isFrameFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isFrameFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn isFrameFormat(self: QTextTableFormat) bool {
        return qtc.QTextFormat_IsFrameFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isImageFormat` instead
    ///
    pub const IsImageFormat = isImageFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isImageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn isImageFormat(self: QTextTableFormat) bool {
        return qtc.QTextFormat_IsImageFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isTableFormat` instead
    ///
    pub const IsTableFormat = isTableFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isTableFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn isTableFormat(self: QTextTableFormat) bool {
        return qtc.QTextFormat_IsTableFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isTableCellFormat` instead
    ///
    pub const IsTableCellFormat = isTableCellFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isTableCellFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn isTableCellFormat(self: QTextTableFormat) bool {
        return qtc.QTextFormat_IsTableCellFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toBlockFormat` instead
    ///
    pub const ToBlockFormat = toBlockFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toBlockFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn toBlockFormat(self: QTextTableFormat) QTextBlockFormat {
        return .{ .ptr = qtc.QTextFormat_ToBlockFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toCharFormat` instead
    ///
    pub const ToCharFormat = toCharFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn toCharFormat(self: QTextTableFormat) QTextCharFormat {
        return .{ .ptr = qtc.QTextFormat_ToCharFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toListFormat` instead
    ///
    pub const ToListFormat = toListFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toListFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn toListFormat(self: QTextTableFormat) QTextListFormat {
        return .{ .ptr = qtc.QTextFormat_ToListFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toTableFormat` instead
    ///
    pub const ToTableFormat = toTableFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toTableFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn toTableFormat(self: QTextTableFormat) QTextTableFormat {
        return .{ .ptr = qtc.QTextFormat_ToTableFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toFrameFormat` instead
    ///
    pub const ToFrameFormat = toFrameFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toFrameFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn toFrameFormat(self: QTextTableFormat) QTextFrameFormat {
        return .{ .ptr = qtc.QTextFormat_ToFrameFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toImageFormat` instead
    ///
    pub const ToImageFormat = toImageFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toImageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn toImageFormat(self: QTextTableFormat) QTextImageFormat {
        return .{ .ptr = qtc.QTextFormat_ToImageFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toTableCellFormat` instead
    ///
    pub const ToTableCellFormat = toTableCellFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toTableCellFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn toTableCellFormat(self: QTextTableFormat) QTextTableCellFormat {
        return .{ .ptr = qtc.QTextFormat_ToTableCellFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn operatorEqual(self: QTextTableFormat, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        return qtc.QTextFormat_OperatorEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn operatorNotEqual(self: QTextTableFormat, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        return qtc.QTextFormat_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `toQVariant` instead
    ///
    pub const ToQVariant = toQVariant;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn toQVariant(self: QTextTableFormat) QVariant {
        return .{ .ptr = qtc.QTextFormat_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLayoutDirection` instead
    ///
    pub const SetLayoutDirection = setLayoutDirection;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setLayoutDirection(self: QTextTableFormat, direction: i32) void {
        qtc.QTextFormat_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// ### DEPRECATED: Use `layoutDirection` instead
    ///
    pub const LayoutDirection = layoutDirection;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn layoutDirection(self: QTextTableFormat) i32 {
        return qtc.QTextFormat_LayoutDirection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBackground` instead
    ///
    pub const SetBackground = setBackground;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` brush: QBrush `
    ///
    pub fn setBackground(self: QTextTableFormat, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTextFormat_SetBackground(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `background` instead
    ///
    pub const Background = background;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#background)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn background(self: QTextTableFormat) QBrush {
        return .{ .ptr = qtc.QTextFormat_Background(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `clearBackground` instead
    ///
    pub const ClearBackground = clearBackground;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn clearBackground(self: QTextTableFormat) void {
        qtc.QTextFormat_ClearBackground(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setForeground` instead
    ///
    pub const SetForeground = setForeground;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    /// ` brush: QBrush `
    ///
    pub fn setForeground(self: QTextTableFormat, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTextFormat_SetForeground(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `foreground` instead
    ///
    pub const Foreground = foreground;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#foreground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn foreground(self: QTextTableFormat) QBrush {
        return .{ .ptr = qtc.QTextFormat_Foreground(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `clearForeground` instead
    ///
    pub const ClearForeground = clearForeground;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn clearForeground(self: QTextTableFormat) void {
        qtc.QTextFormat_ClearForeground(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttableformat.html#dtor.QTextTableFormat)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextTableFormat `
    ///
    pub fn delete(self: QTextTableFormat) void {
        qtc.QTextTableFormat_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html)
pub const QTextTableCellFormat = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTextTableCellFormat,

    pub const _is_QTextTableCellFormat = {};
    pub const _is_QTextCharFormat = {};
    pub const _is_QTextFormat = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTextTableCellFormat object in C++ memory
    ///
    pub fn new() QTextTableCellFormat {
        return .{ .ptr = qtc.QTextTableCellFormat_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QTextTableCellFormat object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QTextTableCellFormat `
    ///
    pub fn new2(param1: anytype) QTextTableCellFormat {
        comptime _ = @TypeOf(param1)._is_QTextTableCellFormat;
        return .{ .ptr = qtc.QTextTableCellFormat_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn isValid(self: QTextTableCellFormat) bool {
        return qtc.QTextTableCellFormat_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTopPadding` instead
    ///
    pub const SetTopPadding = setTopPadding;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#setTopPadding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` _padding: f64 `
    ///
    pub fn setTopPadding(self: QTextTableCellFormat, _padding: f64) void {
        qtc.QTextTableCellFormat_SetTopPadding(@ptrCast(self.ptr), @bitCast(_padding));
    }

    /// ### DEPRECATED: Use `topPadding` instead
    ///
    pub const TopPadding = topPadding;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#topPadding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn topPadding(self: QTextTableCellFormat) f64 {
        return qtc.QTextTableCellFormat_TopPadding(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBottomPadding` instead
    ///
    pub const SetBottomPadding = setBottomPadding;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#setBottomPadding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` _padding: f64 `
    ///
    pub fn setBottomPadding(self: QTextTableCellFormat, _padding: f64) void {
        qtc.QTextTableCellFormat_SetBottomPadding(@ptrCast(self.ptr), @bitCast(_padding));
    }

    /// ### DEPRECATED: Use `bottomPadding` instead
    ///
    pub const BottomPadding = bottomPadding;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#bottomPadding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn bottomPadding(self: QTextTableCellFormat) f64 {
        return qtc.QTextTableCellFormat_BottomPadding(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLeftPadding` instead
    ///
    pub const SetLeftPadding = setLeftPadding;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#setLeftPadding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` _padding: f64 `
    ///
    pub fn setLeftPadding(self: QTextTableCellFormat, _padding: f64) void {
        qtc.QTextTableCellFormat_SetLeftPadding(@ptrCast(self.ptr), @bitCast(_padding));
    }

    /// ### DEPRECATED: Use `leftPadding` instead
    ///
    pub const LeftPadding = leftPadding;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#leftPadding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn leftPadding(self: QTextTableCellFormat) f64 {
        return qtc.QTextTableCellFormat_LeftPadding(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRightPadding` instead
    ///
    pub const SetRightPadding = setRightPadding;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#setRightPadding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` _padding: f64 `
    ///
    pub fn setRightPadding(self: QTextTableCellFormat, _padding: f64) void {
        qtc.QTextTableCellFormat_SetRightPadding(@ptrCast(self.ptr), @bitCast(_padding));
    }

    /// ### DEPRECATED: Use `rightPadding` instead
    ///
    pub const RightPadding = rightPadding;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#rightPadding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn rightPadding(self: QTextTableCellFormat) f64 {
        return qtc.QTextTableCellFormat_RightPadding(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPadding` instead
    ///
    pub const SetPadding = setPadding;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#setPadding)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` _padding: f64 `
    ///
    pub fn setPadding(self: QTextTableCellFormat, _padding: f64) void {
        qtc.QTextTableCellFormat_SetPadding(@ptrCast(self.ptr), @bitCast(_padding));
    }

    /// ### DEPRECATED: Use `setTopBorder` instead
    ///
    pub const SetTopBorder = setTopBorder;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#setTopBorder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` _width: f64 `
    ///
    pub fn setTopBorder(self: QTextTableCellFormat, _width: f64) void {
        qtc.QTextTableCellFormat_SetTopBorder(@ptrCast(self.ptr), @bitCast(_width));
    }

    /// ### DEPRECATED: Use `topBorder` instead
    ///
    pub const TopBorder = topBorder;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#topBorder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn topBorder(self: QTextTableCellFormat) f64 {
        return qtc.QTextTableCellFormat_TopBorder(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBottomBorder` instead
    ///
    pub const SetBottomBorder = setBottomBorder;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#setBottomBorder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` _width: f64 `
    ///
    pub fn setBottomBorder(self: QTextTableCellFormat, _width: f64) void {
        qtc.QTextTableCellFormat_SetBottomBorder(@ptrCast(self.ptr), @bitCast(_width));
    }

    /// ### DEPRECATED: Use `bottomBorder` instead
    ///
    pub const BottomBorder = bottomBorder;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#bottomBorder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn bottomBorder(self: QTextTableCellFormat) f64 {
        return qtc.QTextTableCellFormat_BottomBorder(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLeftBorder` instead
    ///
    pub const SetLeftBorder = setLeftBorder;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#setLeftBorder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` _width: f64 `
    ///
    pub fn setLeftBorder(self: QTextTableCellFormat, _width: f64) void {
        qtc.QTextTableCellFormat_SetLeftBorder(@ptrCast(self.ptr), @bitCast(_width));
    }

    /// ### DEPRECATED: Use `leftBorder` instead
    ///
    pub const LeftBorder = leftBorder;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#leftBorder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn leftBorder(self: QTextTableCellFormat) f64 {
        return qtc.QTextTableCellFormat_LeftBorder(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRightBorder` instead
    ///
    pub const SetRightBorder = setRightBorder;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#setRightBorder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` _width: f64 `
    ///
    pub fn setRightBorder(self: QTextTableCellFormat, _width: f64) void {
        qtc.QTextTableCellFormat_SetRightBorder(@ptrCast(self.ptr), @bitCast(_width));
    }

    /// ### DEPRECATED: Use `rightBorder` instead
    ///
    pub const RightBorder = rightBorder;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#rightBorder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn rightBorder(self: QTextTableCellFormat) f64 {
        return qtc.QTextTableCellFormat_RightBorder(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBorder` instead
    ///
    pub const SetBorder = setBorder;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#setBorder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` _width: f64 `
    ///
    pub fn setBorder(self: QTextTableCellFormat, _width: f64) void {
        qtc.QTextTableCellFormat_SetBorder(@ptrCast(self.ptr), @bitCast(_width));
    }

    /// ### DEPRECATED: Use `setTopBorderStyle` instead
    ///
    pub const SetTopBorderStyle = setTopBorderStyle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#setTopBorderStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` _style: qtextformat_enums.BorderStyle `
    ///
    pub fn setTopBorderStyle(self: QTextTableCellFormat, _style: i32) void {
        qtc.QTextTableCellFormat_SetTopBorderStyle(@ptrCast(self.ptr), @bitCast(_style));
    }

    /// ### DEPRECATED: Use `topBorderStyle` instead
    ///
    pub const TopBorderStyle = topBorderStyle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#topBorderStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ## Returns:
    ///
    /// ` qtextformat_enums.BorderStyle `
    ///
    pub fn topBorderStyle(self: QTextTableCellFormat) i32 {
        return qtc.QTextTableCellFormat_TopBorderStyle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBottomBorderStyle` instead
    ///
    pub const SetBottomBorderStyle = setBottomBorderStyle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#setBottomBorderStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` _style: qtextformat_enums.BorderStyle `
    ///
    pub fn setBottomBorderStyle(self: QTextTableCellFormat, _style: i32) void {
        qtc.QTextTableCellFormat_SetBottomBorderStyle(@ptrCast(self.ptr), @bitCast(_style));
    }

    /// ### DEPRECATED: Use `bottomBorderStyle` instead
    ///
    pub const BottomBorderStyle = bottomBorderStyle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#bottomBorderStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ## Returns:
    ///
    /// ` qtextformat_enums.BorderStyle `
    ///
    pub fn bottomBorderStyle(self: QTextTableCellFormat) i32 {
        return qtc.QTextTableCellFormat_BottomBorderStyle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLeftBorderStyle` instead
    ///
    pub const SetLeftBorderStyle = setLeftBorderStyle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#setLeftBorderStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` _style: qtextformat_enums.BorderStyle `
    ///
    pub fn setLeftBorderStyle(self: QTextTableCellFormat, _style: i32) void {
        qtc.QTextTableCellFormat_SetLeftBorderStyle(@ptrCast(self.ptr), @bitCast(_style));
    }

    /// ### DEPRECATED: Use `leftBorderStyle` instead
    ///
    pub const LeftBorderStyle = leftBorderStyle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#leftBorderStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ## Returns:
    ///
    /// ` qtextformat_enums.BorderStyle `
    ///
    pub fn leftBorderStyle(self: QTextTableCellFormat) i32 {
        return qtc.QTextTableCellFormat_LeftBorderStyle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRightBorderStyle` instead
    ///
    pub const SetRightBorderStyle = setRightBorderStyle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#setRightBorderStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` _style: qtextformat_enums.BorderStyle `
    ///
    pub fn setRightBorderStyle(self: QTextTableCellFormat, _style: i32) void {
        qtc.QTextTableCellFormat_SetRightBorderStyle(@ptrCast(self.ptr), @bitCast(_style));
    }

    /// ### DEPRECATED: Use `rightBorderStyle` instead
    ///
    pub const RightBorderStyle = rightBorderStyle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#rightBorderStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ## Returns:
    ///
    /// ` qtextformat_enums.BorderStyle `
    ///
    pub fn rightBorderStyle(self: QTextTableCellFormat) i32 {
        return qtc.QTextTableCellFormat_RightBorderStyle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBorderStyle` instead
    ///
    pub const SetBorderStyle = setBorderStyle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#setBorderStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` _style: qtextformat_enums.BorderStyle `
    ///
    pub fn setBorderStyle(self: QTextTableCellFormat, _style: i32) void {
        qtc.QTextTableCellFormat_SetBorderStyle(@ptrCast(self.ptr), @bitCast(_style));
    }

    /// ### DEPRECATED: Use `setTopBorderBrush` instead
    ///
    pub const SetTopBorderBrush = setTopBorderBrush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#setTopBorderBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` brush: QBrush `
    ///
    pub fn setTopBorderBrush(self: QTextTableCellFormat, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTextTableCellFormat_SetTopBorderBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `topBorderBrush` instead
    ///
    pub const TopBorderBrush = topBorderBrush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#topBorderBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn topBorderBrush(self: QTextTableCellFormat) QBrush {
        return .{ .ptr = qtc.QTextTableCellFormat_TopBorderBrush(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBottomBorderBrush` instead
    ///
    pub const SetBottomBorderBrush = setBottomBorderBrush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#setBottomBorderBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` brush: QBrush `
    ///
    pub fn setBottomBorderBrush(self: QTextTableCellFormat, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTextTableCellFormat_SetBottomBorderBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `bottomBorderBrush` instead
    ///
    pub const BottomBorderBrush = bottomBorderBrush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#bottomBorderBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn bottomBorderBrush(self: QTextTableCellFormat) QBrush {
        return .{ .ptr = qtc.QTextTableCellFormat_BottomBorderBrush(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLeftBorderBrush` instead
    ///
    pub const SetLeftBorderBrush = setLeftBorderBrush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#setLeftBorderBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` brush: QBrush `
    ///
    pub fn setLeftBorderBrush(self: QTextTableCellFormat, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTextTableCellFormat_SetLeftBorderBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `leftBorderBrush` instead
    ///
    pub const LeftBorderBrush = leftBorderBrush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#leftBorderBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn leftBorderBrush(self: QTextTableCellFormat) QBrush {
        return .{ .ptr = qtc.QTextTableCellFormat_LeftBorderBrush(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRightBorderBrush` instead
    ///
    pub const SetRightBorderBrush = setRightBorderBrush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#setRightBorderBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` brush: QBrush `
    ///
    pub fn setRightBorderBrush(self: QTextTableCellFormat, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTextTableCellFormat_SetRightBorderBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `rightBorderBrush` instead
    ///
    pub const RightBorderBrush = rightBorderBrush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#rightBorderBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn rightBorderBrush(self: QTextTableCellFormat) QBrush {
        return .{ .ptr = qtc.QTextTableCellFormat_RightBorderBrush(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBorderBrush` instead
    ///
    pub const SetBorderBrush = setBorderBrush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#setBorderBrush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` brush: QBrush `
    ///
    pub fn setBorderBrush(self: QTextTableCellFormat, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTextTableCellFormat_SetBorderBrush(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `setFont` instead
    ///
    pub const SetFont = setFont;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` _font: QFont `
    ///
    pub fn setFont(self: QTextTableCellFormat, _font: anytype) void {
        comptime _ = @TypeOf(_font)._is_QFont;
        qtc.QTextCharFormat_SetFont(@ptrCast(self.ptr), @ptrCast(_font.ptr));
    }

    /// ### DEPRECATED: Use `font` instead
    ///
    pub const Font = font;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn font(self: QTextTableCellFormat) QFont {
        return .{ .ptr = qtc.QTextCharFormat_Font(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFontFamily` instead
    ///
    pub const SetFontFamily = setFontFamily;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFamily)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` family: []const u8 `
    ///
    pub fn setFontFamily(self: QTextTableCellFormat, family: []const u8) void {
        const family_str = qtc.libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        qtc.QTextCharFormat_SetFontFamily(@ptrCast(self.ptr), family_str);
    }

    /// ### DEPRECATED: Use `fontFamily` instead
    ///
    pub const FontFamily = fontFamily;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontFamily)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn fontFamily(self: QTextTableCellFormat, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextCharFormat_FontFamily(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextTableCellFormat.fontFamily: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setFontFamilies` instead
    ///
    pub const SetFontFamilies = setFontFamilies;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFamilies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` families: []const []const u8 `
    ///
    pub fn setFontFamilies(self: QTextTableCellFormat, allocator: std.mem.Allocator, families: []const []const u8) void {
        const families_arr = allocator.alloc(qtc.libqt_string, families.len) catch @panic("QTextTableCellFormat.setFontFamilies: Memory allocation failed");
        defer allocator.free(families_arr);
        for (families, 0..families.len) |str_item, i|
            families_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const families_list = qtc.libqt_list{
            .len = families.len,
            .data = families_arr.ptr,
        };
        qtc.QTextCharFormat_SetFontFamilies(@ptrCast(self.ptr), families_list);
    }

    /// ### DEPRECATED: Use `fontFamilies` instead
    ///
    pub const FontFamilies = fontFamilies;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontFamilies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn fontFamilies(self: QTextTableCellFormat) QVariant {
        return .{ .ptr = qtc.QTextCharFormat_FontFamilies(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFontStyleName` instead
    ///
    pub const SetFontStyleName = setFontStyleName;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` styleName: []const u8 `
    ///
    pub fn setFontStyleName(self: QTextTableCellFormat, styleName: []const u8) void {
        const styleName_str = qtc.libqt_string{
            .len = styleName.len,
            .data = styleName.ptr,
        };
        qtc.QTextCharFormat_SetFontStyleName(@ptrCast(self.ptr), styleName_str);
    }

    /// ### DEPRECATED: Use `fontStyleName` instead
    ///
    pub const FontStyleName = fontStyleName;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn fontStyleName(self: QTextTableCellFormat) QVariant {
        return .{ .ptr = qtc.QTextCharFormat_FontStyleName(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFontPointSize` instead
    ///
    pub const SetFontPointSize = setFontPointSize;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontPointSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` size: f64 `
    ///
    pub fn setFontPointSize(self: QTextTableCellFormat, size: f64) void {
        qtc.QTextCharFormat_SetFontPointSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `fontPointSize` instead
    ///
    pub const FontPointSize = fontPointSize;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontPointSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn fontPointSize(self: QTextTableCellFormat) f64 {
        return qtc.QTextCharFormat_FontPointSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontWeight` instead
    ///
    pub const SetFontWeight = setFontWeight;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontWeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` weight: i32 `
    ///
    pub fn setFontWeight(self: QTextTableCellFormat, weight: i32) void {
        qtc.QTextCharFormat_SetFontWeight(@ptrCast(self.ptr), @bitCast(weight));
    }

    /// ### DEPRECATED: Use `fontWeight` instead
    ///
    pub const FontWeight = fontWeight;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontWeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn fontWeight(self: QTextTableCellFormat) i32 {
        return qtc.QTextCharFormat_FontWeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontItalic` instead
    ///
    pub const SetFontItalic = setFontItalic;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontItalic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` italic: bool `
    ///
    pub fn setFontItalic(self: QTextTableCellFormat, italic: bool) void {
        qtc.QTextCharFormat_SetFontItalic(@ptrCast(self.ptr), italic);
    }

    /// ### DEPRECATED: Use `fontItalic` instead
    ///
    pub const FontItalic = fontItalic;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontItalic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn fontItalic(self: QTextTableCellFormat) bool {
        return qtc.QTextCharFormat_FontItalic(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontCapitalization` instead
    ///
    pub const SetFontCapitalization = setFontCapitalization;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontCapitalization)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` capitalization: qfont_enums.Capitalization `
    ///
    pub fn setFontCapitalization(self: QTextTableCellFormat, capitalization: i32) void {
        qtc.QTextCharFormat_SetFontCapitalization(@ptrCast(self.ptr), @bitCast(capitalization));
    }

    /// ### DEPRECATED: Use `fontCapitalization` instead
    ///
    pub const FontCapitalization = fontCapitalization;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontCapitalization)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.Capitalization `
    ///
    pub fn fontCapitalization(self: QTextTableCellFormat) i32 {
        return qtc.QTextCharFormat_FontCapitalization(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontLetterSpacingType` instead
    ///
    pub const SetFontLetterSpacingType = setFontLetterSpacingType;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontLetterSpacingType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` letterSpacingType: qfont_enums.SpacingType `
    ///
    pub fn setFontLetterSpacingType(self: QTextTableCellFormat, letterSpacingType: i32) void {
        qtc.QTextCharFormat_SetFontLetterSpacingType(@ptrCast(self.ptr), @bitCast(letterSpacingType));
    }

    /// ### DEPRECATED: Use `fontLetterSpacingType` instead
    ///
    pub const FontLetterSpacingType = fontLetterSpacingType;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontLetterSpacingType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.SpacingType `
    ///
    pub fn fontLetterSpacingType(self: QTextTableCellFormat) i32 {
        return qtc.QTextCharFormat_FontLetterSpacingType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontLetterSpacing` instead
    ///
    pub const SetFontLetterSpacing = setFontLetterSpacing;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontLetterSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` spacing: f64 `
    ///
    pub fn setFontLetterSpacing(self: QTextTableCellFormat, spacing: f64) void {
        qtc.QTextCharFormat_SetFontLetterSpacing(@ptrCast(self.ptr), @bitCast(spacing));
    }

    /// ### DEPRECATED: Use `fontLetterSpacing` instead
    ///
    pub const FontLetterSpacing = fontLetterSpacing;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontLetterSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn fontLetterSpacing(self: QTextTableCellFormat) f64 {
        return qtc.QTextCharFormat_FontLetterSpacing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontWordSpacing` instead
    ///
    pub const SetFontWordSpacing = setFontWordSpacing;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontWordSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` spacing: f64 `
    ///
    pub fn setFontWordSpacing(self: QTextTableCellFormat, spacing: f64) void {
        qtc.QTextCharFormat_SetFontWordSpacing(@ptrCast(self.ptr), @bitCast(spacing));
    }

    /// ### DEPRECATED: Use `fontWordSpacing` instead
    ///
    pub const FontWordSpacing = fontWordSpacing;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontWordSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn fontWordSpacing(self: QTextTableCellFormat) f64 {
        return qtc.QTextCharFormat_FontWordSpacing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontUnderline` instead
    ///
    pub const SetFontUnderline = setFontUnderline;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontUnderline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` underline: bool `
    ///
    pub fn setFontUnderline(self: QTextTableCellFormat, underline: bool) void {
        qtc.QTextCharFormat_SetFontUnderline(@ptrCast(self.ptr), underline);
    }

    /// ### DEPRECATED: Use `fontUnderline` instead
    ///
    pub const FontUnderline = fontUnderline;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontUnderline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn fontUnderline(self: QTextTableCellFormat) bool {
        return qtc.QTextCharFormat_FontUnderline(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontOverline` instead
    ///
    pub const SetFontOverline = setFontOverline;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontOverline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` overline: bool `
    ///
    pub fn setFontOverline(self: QTextTableCellFormat, overline: bool) void {
        qtc.QTextCharFormat_SetFontOverline(@ptrCast(self.ptr), overline);
    }

    /// ### DEPRECATED: Use `fontOverline` instead
    ///
    pub const FontOverline = fontOverline;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontOverline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn fontOverline(self: QTextTableCellFormat) bool {
        return qtc.QTextCharFormat_FontOverline(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontStrikeOut` instead
    ///
    pub const SetFontStrikeOut = setFontStrikeOut;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStrikeOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` strikeOut: bool `
    ///
    pub fn setFontStrikeOut(self: QTextTableCellFormat, strikeOut: bool) void {
        qtc.QTextCharFormat_SetFontStrikeOut(@ptrCast(self.ptr), strikeOut);
    }

    /// ### DEPRECATED: Use `fontStrikeOut` instead
    ///
    pub const FontStrikeOut = fontStrikeOut;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontStrikeOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn fontStrikeOut(self: QTextTableCellFormat) bool {
        return qtc.QTextCharFormat_FontStrikeOut(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setUnderlineColor` instead
    ///
    pub const SetUnderlineColor = setUnderlineColor;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setUnderlineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` color: QColor `
    ///
    pub fn setUnderlineColor(self: QTextTableCellFormat, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.QTextCharFormat_SetUnderlineColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### DEPRECATED: Use `underlineColor` instead
    ///
    pub const UnderlineColor = underlineColor;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#underlineColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn underlineColor(self: QTextTableCellFormat) QColor {
        return .{ .ptr = qtc.QTextCharFormat_UnderlineColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFontFixedPitch` instead
    ///
    pub const SetFontFixedPitch = setFontFixedPitch;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontFixedPitch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` fixedPitch: bool `
    ///
    pub fn setFontFixedPitch(self: QTextTableCellFormat, fixedPitch: bool) void {
        qtc.QTextCharFormat_SetFontFixedPitch(@ptrCast(self.ptr), fixedPitch);
    }

    /// ### DEPRECATED: Use `fontFixedPitch` instead
    ///
    pub const FontFixedPitch = fontFixedPitch;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontFixedPitch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn fontFixedPitch(self: QTextTableCellFormat) bool {
        return qtc.QTextCharFormat_FontFixedPitch(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontStretch` instead
    ///
    pub const SetFontStretch = setFontStretch;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` factor: i32 `
    ///
    pub fn setFontStretch(self: QTextTableCellFormat, factor: i32) void {
        qtc.QTextCharFormat_SetFontStretch(@ptrCast(self.ptr), @bitCast(factor));
    }

    /// ### DEPRECATED: Use `fontStretch` instead
    ///
    pub const FontStretch = fontStretch;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn fontStretch(self: QTextTableCellFormat) i32 {
        return qtc.QTextCharFormat_FontStretch(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontStyleHint` instead
    ///
    pub const SetFontStyleHint = setFontStyleHint;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` hint: qfont_enums.StyleHint `
    ///
    pub fn setFontStyleHint(self: QTextTableCellFormat, hint: i32) void {
        qtc.QTextCharFormat_SetFontStyleHint(@ptrCast(self.ptr), @bitCast(hint));
    }

    /// ### DEPRECATED: Use `setFontStyleStrategy` instead
    ///
    pub const SetFontStyleStrategy = setFontStyleStrategy;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleStrategy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` strategy: qfont_enums.StyleStrategy `
    ///
    pub fn setFontStyleStrategy(self: QTextTableCellFormat, strategy: i32) void {
        qtc.QTextCharFormat_SetFontStyleStrategy(@ptrCast(self.ptr), @bitCast(strategy));
    }

    /// ### DEPRECATED: Use `fontStyleHint` instead
    ///
    pub const FontStyleHint = fontStyleHint;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.StyleHint `
    ///
    pub fn fontStyleHint(self: QTextTableCellFormat) i32 {
        return qtc.QTextCharFormat_FontStyleHint(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `fontStyleStrategy` instead
    ///
    pub const FontStyleStrategy = fontStyleStrategy;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontStyleStrategy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.StyleStrategy `
    ///
    pub fn fontStyleStrategy(self: QTextTableCellFormat) i32 {
        return qtc.QTextCharFormat_FontStyleStrategy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontHintingPreference` instead
    ///
    pub const SetFontHintingPreference = setFontHintingPreference;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontHintingPreference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` hintingPreference: qfont_enums.HintingPreference `
    ///
    pub fn setFontHintingPreference(self: QTextTableCellFormat, hintingPreference: i32) void {
        qtc.QTextCharFormat_SetFontHintingPreference(@ptrCast(self.ptr), @bitCast(hintingPreference));
    }

    /// ### DEPRECATED: Use `fontHintingPreference` instead
    ///
    pub const FontHintingPreference = fontHintingPreference;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontHintingPreference)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ## Returns:
    ///
    /// ` qfont_enums.HintingPreference `
    ///
    pub fn fontHintingPreference(self: QTextTableCellFormat) i32 {
        return qtc.QTextCharFormat_FontHintingPreference(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFontKerning` instead
    ///
    pub const SetFontKerning = setFontKerning;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontKerning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` enable: bool `
    ///
    pub fn setFontKerning(self: QTextTableCellFormat, enable: bool) void {
        qtc.QTextCharFormat_SetFontKerning(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `fontKerning` instead
    ///
    pub const FontKerning = fontKerning;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#fontKerning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn fontKerning(self: QTextTableCellFormat) bool {
        return qtc.QTextCharFormat_FontKerning(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setUnderlineStyle` instead
    ///
    pub const SetUnderlineStyle = setUnderlineStyle;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setUnderlineStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` _style: qtextformat_enums.UnderlineStyle `
    ///
    pub fn setUnderlineStyle(self: QTextTableCellFormat, _style: i32) void {
        qtc.QTextCharFormat_SetUnderlineStyle(@ptrCast(self.ptr), @bitCast(_style));
    }

    /// ### DEPRECATED: Use `underlineStyle` instead
    ///
    pub const UnderlineStyle = underlineStyle;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#underlineStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ## Returns:
    ///
    /// ` qtextformat_enums.UnderlineStyle `
    ///
    pub fn underlineStyle(self: QTextTableCellFormat) i32 {
        return qtc.QTextCharFormat_UnderlineStyle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVerticalAlignment` instead
    ///
    pub const SetVerticalAlignment = setVerticalAlignment;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setVerticalAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` _alignment: qtextformat_enums.VerticalAlignment `
    ///
    pub fn setVerticalAlignment(self: QTextTableCellFormat, _alignment: i32) void {
        qtc.QTextCharFormat_SetVerticalAlignment(@ptrCast(self.ptr), @bitCast(_alignment));
    }

    /// ### DEPRECATED: Use `verticalAlignment` instead
    ///
    pub const VerticalAlignment = verticalAlignment;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#verticalAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ## Returns:
    ///
    /// ` qtextformat_enums.VerticalAlignment `
    ///
    pub fn verticalAlignment(self: QTextTableCellFormat) i32 {
        return qtc.QTextCharFormat_VerticalAlignment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTextOutline` instead
    ///
    pub const SetTextOutline = setTextOutline;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setTextOutline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` pen: QPen `
    ///
    pub fn setTextOutline(self: QTextTableCellFormat, pen: anytype) void {
        comptime _ = @TypeOf(pen)._is_QPen;
        qtc.QTextCharFormat_SetTextOutline(@ptrCast(self.ptr), @ptrCast(pen.ptr));
    }

    /// ### DEPRECATED: Use `textOutline` instead
    ///
    pub const TextOutline = textOutline;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#textOutline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn textOutline(self: QTextTableCellFormat) QPen {
        return .{ .ptr = qtc.QTextCharFormat_TextOutline(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setToolTip` instead
    ///
    pub const SetToolTip = setToolTip;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` tip: []const u8 `
    ///
    pub fn setToolTip(self: QTextTableCellFormat, tip: []const u8) void {
        const tip_str = qtc.libqt_string{
            .len = tip.len,
            .data = tip.ptr,
        };
        qtc.QTextCharFormat_SetToolTip(@ptrCast(self.ptr), tip_str);
    }

    /// ### DEPRECATED: Use `toolTip` instead
    ///
    pub const ToolTip = toolTip;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#toolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toolTip(self: QTextTableCellFormat, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextCharFormat_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextTableCellFormat.toolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setSuperScriptBaseline` instead
    ///
    pub const SetSuperScriptBaseline = setSuperScriptBaseline;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setSuperScriptBaseline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` baseline: f64 `
    ///
    pub fn setSuperScriptBaseline(self: QTextTableCellFormat, baseline: f64) void {
        qtc.QTextCharFormat_SetSuperScriptBaseline(@ptrCast(self.ptr), @bitCast(baseline));
    }

    /// ### DEPRECATED: Use `superScriptBaseline` instead
    ///
    pub const SuperScriptBaseline = superScriptBaseline;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#superScriptBaseline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn superScriptBaseline(self: QTextTableCellFormat) f64 {
        return qtc.QTextCharFormat_SuperScriptBaseline(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSubScriptBaseline` instead
    ///
    pub const SetSubScriptBaseline = setSubScriptBaseline;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setSubScriptBaseline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` baseline: f64 `
    ///
    pub fn setSubScriptBaseline(self: QTextTableCellFormat, baseline: f64) void {
        qtc.QTextCharFormat_SetSubScriptBaseline(@ptrCast(self.ptr), @bitCast(baseline));
    }

    /// ### DEPRECATED: Use `subScriptBaseline` instead
    ///
    pub const SubScriptBaseline = subScriptBaseline;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#subScriptBaseline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn subScriptBaseline(self: QTextTableCellFormat) f64 {
        return qtc.QTextCharFormat_SubScriptBaseline(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBaselineOffset` instead
    ///
    pub const SetBaselineOffset = setBaselineOffset;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setBaselineOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` baseline: f64 `
    ///
    pub fn setBaselineOffset(self: QTextTableCellFormat, baseline: f64) void {
        qtc.QTextCharFormat_SetBaselineOffset(@ptrCast(self.ptr), @bitCast(baseline));
    }

    /// ### DEPRECATED: Use `baselineOffset` instead
    ///
    pub const BaselineOffset = baselineOffset;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#baselineOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn baselineOffset(self: QTextTableCellFormat) f64 {
        return qtc.QTextCharFormat_BaselineOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAnchor` instead
    ///
    pub const SetAnchor = setAnchor;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` anchor: bool `
    ///
    pub fn setAnchor(self: QTextTableCellFormat, anchor: bool) void {
        qtc.QTextCharFormat_SetAnchor(@ptrCast(self.ptr), anchor);
    }

    /// ### DEPRECATED: Use `isAnchor` instead
    ///
    pub const IsAnchor = isAnchor;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#isAnchor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn isAnchor(self: QTextTableCellFormat) bool {
        return qtc.QTextCharFormat_IsAnchor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAnchorHref` instead
    ///
    pub const SetAnchorHref = setAnchorHref;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchorHref)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` _value: []const u8 `
    ///
    pub fn setAnchorHref(self: QTextTableCellFormat, _value: []const u8) void {
        const value_str = qtc.libqt_string{
            .len = _value.len,
            .data = _value.ptr,
        };
        qtc.QTextCharFormat_SetAnchorHref(@ptrCast(self.ptr), value_str);
    }

    /// ### DEPRECATED: Use `anchorHref` instead
    ///
    pub const AnchorHref = anchorHref;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#anchorHref)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn anchorHref(self: QTextTableCellFormat, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextCharFormat_AnchorHref(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextTableCellFormat.anchorHref: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setAnchorNames` instead
    ///
    pub const SetAnchorNames = setAnchorNames;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setAnchorNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` names: []const []const u8 `
    ///
    pub fn setAnchorNames(self: QTextTableCellFormat, allocator: std.mem.Allocator, names: []const []const u8) void {
        const names_arr = allocator.alloc(qtc.libqt_string, names.len) catch @panic("QTextTableCellFormat.setAnchorNames: Memory allocation failed");
        defer allocator.free(names_arr);
        for (names, 0..names.len) |str_item, i|
            names_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const names_list = qtc.libqt_list{
            .len = names.len,
            .data = names_arr.ptr,
        };
        qtc.QTextCharFormat_SetAnchorNames(@ptrCast(self.ptr), names_list);
    }

    /// ### DEPRECATED: Use `anchorNames` instead
    ///
    pub const AnchorNames = anchorNames;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#anchorNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn anchorNames(self: QTextTableCellFormat, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QTextCharFormat_AnchorNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QTextTableCellFormat.anchorNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QTextTableCellFormat.anchorNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setTableCellRowSpan` instead
    ///
    pub const SetTableCellRowSpan = setTableCellRowSpan;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setTableCellRowSpan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` _tableCellRowSpan: i32 `
    ///
    pub fn setTableCellRowSpan(self: QTextTableCellFormat, _tableCellRowSpan: i32) void {
        qtc.QTextCharFormat_SetTableCellRowSpan(@ptrCast(self.ptr), @bitCast(_tableCellRowSpan));
    }

    /// ### DEPRECATED: Use `tableCellRowSpan` instead
    ///
    pub const TableCellRowSpan = tableCellRowSpan;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#tableCellRowSpan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn tableCellRowSpan(self: QTextTableCellFormat) i32 {
        return qtc.QTextCharFormat_TableCellRowSpan(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTableCellColumnSpan` instead
    ///
    pub const SetTableCellColumnSpan = setTableCellColumnSpan;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setTableCellColumnSpan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` _tableCellColumnSpan: i32 `
    ///
    pub fn setTableCellColumnSpan(self: QTextTableCellFormat, _tableCellColumnSpan: i32) void {
        qtc.QTextCharFormat_SetTableCellColumnSpan(@ptrCast(self.ptr), @bitCast(_tableCellColumnSpan));
    }

    /// ### DEPRECATED: Use `tableCellColumnSpan` instead
    ///
    pub const TableCellColumnSpan = tableCellColumnSpan;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#tableCellColumnSpan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn tableCellColumnSpan(self: QTextTableCellFormat) i32 {
        return qtc.QTextCharFormat_TableCellColumnSpan(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFont2` instead
    ///
    pub const SetFont2 = setFont2;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` _font: QFont `
    ///
    /// ` behavior: qtextformat_enums.FontPropertiesInheritanceBehavior `
    ///
    pub fn setFont2(self: QTextTableCellFormat, _font: anytype, behavior: i32) void {
        comptime _ = @TypeOf(_font)._is_QFont;
        qtc.QTextCharFormat_SetFont2(@ptrCast(self.ptr), @ptrCast(_font.ptr), @bitCast(behavior));
    }

    /// ### DEPRECATED: Use `setFontStyleHint2` instead
    ///
    pub const SetFontStyleHint2 = setFontStyleHint2;

    /// Inherited from QTextCharFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextcharformat.html#setFontStyleHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` hint: qfont_enums.StyleHint `
    ///
    /// ` strategy: qfont_enums.StyleStrategy `
    ///
    pub fn setFontStyleHint2(self: QTextTableCellFormat, hint: i32, strategy: i32) void {
        qtc.QTextCharFormat_SetFontStyleHint2(@ptrCast(self.ptr), @bitCast(hint), @bitCast(strategy));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn operatorAssign(self: QTextTableCellFormat, rhs: anytype) void {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        qtc.QTextFormat_OperatorAssign(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` other: QTextFormat `
    ///
    pub fn swap(self: QTextTableCellFormat, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTextFormat;
        qtc.QTextFormat_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `merge` instead
    ///
    pub const Merge = merge;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#merge)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` other: QTextFormat `
    ///
    pub fn merge(self: QTextTableCellFormat, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTextFormat;
        qtc.QTextFormat_Merge(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn isEmpty(self: QTextTableCellFormat) bool {
        return qtc.QTextFormat_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn type0(self: QTextTableCellFormat) i32 {
        return qtc.QTextFormat_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `objectIndex` instead
    ///
    pub const ObjectIndex = objectIndex;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#objectIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn objectIndex(self: QTextTableCellFormat) i32 {
        return qtc.QTextFormat_ObjectIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setObjectIndex` instead
    ///
    pub const SetObjectIndex = setObjectIndex;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setObjectIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` object: i32 `
    ///
    pub fn setObjectIndex(self: QTextTableCellFormat, object: i32) void {
        qtc.QTextFormat_SetObjectIndex(@ptrCast(self.ptr), @bitCast(object));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn property(self: QTextTableCellFormat, propertyId: i32) QVariant {
        return .{ .ptr = qtc.QTextFormat_Property(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` propertyId: i32 `
    ///
    /// ` _value: QVariant `
    ///
    pub fn setProperty(self: QTextTableCellFormat, propertyId: i32, _value: anytype) void {
        comptime _ = @TypeOf(_value)._is_QVariant;
        qtc.QTextFormat_SetProperty(@ptrCast(self.ptr), @bitCast(propertyId), @ptrCast(_value.ptr));
    }

    /// ### DEPRECATED: Use `clearProperty` instead
    ///
    pub const ClearProperty = clearProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn clearProperty(self: QTextTableCellFormat, propertyId: i32) void {
        qtc.QTextFormat_ClearProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// ### DEPRECATED: Use `hasProperty` instead
    ///
    pub const HasProperty = hasProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#hasProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn hasProperty(self: QTextTableCellFormat, propertyId: i32) bool {
        return qtc.QTextFormat_HasProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// ### DEPRECATED: Use `boolProperty` instead
    ///
    pub const BoolProperty = boolProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#boolProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn boolProperty(self: QTextTableCellFormat, propertyId: i32) bool {
        return qtc.QTextFormat_BoolProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// ### DEPRECATED: Use `intProperty` instead
    ///
    pub const IntProperty = intProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#intProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn intProperty(self: QTextTableCellFormat, propertyId: i32) i32 {
        return qtc.QTextFormat_IntProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// ### DEPRECATED: Use `doubleProperty` instead
    ///
    pub const DoubleProperty = doubleProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#doubleProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn doubleProperty(self: QTextTableCellFormat, propertyId: i32) f64 {
        return qtc.QTextFormat_DoubleProperty(@ptrCast(self.ptr), @bitCast(propertyId));
    }

    /// ### DEPRECATED: Use `stringProperty` instead
    ///
    pub const StringProperty = stringProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#stringProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn stringProperty(self: QTextTableCellFormat, allocator: std.mem.Allocator, propertyId: i32) []const u8 {
        var _str = qtc.QTextFormat_StringProperty(@ptrCast(self.ptr), @bitCast(propertyId));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextTableCellFormat.stringProperty: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `colorProperty` instead
    ///
    pub const ColorProperty = colorProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#colorProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn colorProperty(self: QTextTableCellFormat, propertyId: i32) QColor {
        return .{ .ptr = qtc.QTextFormat_ColorProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// ### DEPRECATED: Use `penProperty` instead
    ///
    pub const PenProperty = penProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#penProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn penProperty(self: QTextTableCellFormat, propertyId: i32) QPen {
        return .{ .ptr = qtc.QTextFormat_PenProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// ### DEPRECATED: Use `brushProperty` instead
    ///
    pub const BrushProperty = brushProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#brushProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn brushProperty(self: QTextTableCellFormat, propertyId: i32) QBrush {
        return .{ .ptr = qtc.QTextFormat_BrushProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// ### DEPRECATED: Use `lengthProperty` instead
    ///
    pub const LengthProperty = lengthProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#lengthProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn lengthProperty(self: QTextTableCellFormat, propertyId: i32) QTextLength {
        return .{ .ptr = qtc.QTextFormat_LengthProperty(@ptrCast(self.ptr), @bitCast(propertyId)) };
    }

    /// ### DEPRECATED: Use `lengthVectorProperty` instead
    ///
    pub const LengthVectorProperty = lengthVectorProperty;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#lengthVectorProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` propertyId: i32 `
    ///
    pub fn lengthVectorProperty(self: QTextTableCellFormat, allocator: std.mem.Allocator, propertyId: i32) []QTextLength {
        const _arr: qtc.libqt_list = qtc.QTextFormat_LengthVectorProperty(@ptrCast(self.ptr), @bitCast(propertyId));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTextLength, _arr.len) catch @panic("QTextTableCellFormat.lengthVectorProperty: Memory allocation failed");
        const _data_val: [*]QtC.QTextLength = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setProperty2` instead
    ///
    pub const SetProperty2 = setProperty2;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` propertyId: i32 `
    ///
    /// ` lengths: []QTextLength `
    ///
    pub fn setProperty2(self: QTextTableCellFormat, propertyId: i32, lengths: []QTextLength) void {
        const lengths_list = qtc.libqt_list{
            .len = lengths.len,
            .data = @ptrCast(lengths.ptr),
        };
        qtc.QTextFormat_SetProperty2(@ptrCast(self.ptr), @bitCast(propertyId), lengths_list);
    }

    /// ### DEPRECATED: Use `properties` instead
    ///
    pub const Properties = properties;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#properties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn properties(self: QTextTableCellFormat, allocator: std.mem.Allocator) ArrayMap_i32_QVariant {
        const _map: qtc.libqt_map = qtc.QTextFormat_Properties(@ptrCast(self.ptr));
        var _ret: ArrayMap_i32_QVariant = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("QTextTableCellFormat.properties: Total capacity allocation failed");
        defer {
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]QtC.QVariant = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            _ret.putAssumeCapacity(_key, .{ .ptr = @ptrCast(_value) });
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `propertyCount` instead
    ///
    pub const PropertyCount = propertyCount;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#propertyCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn propertyCount(self: QTextTableCellFormat) i32 {
        return qtc.QTextFormat_PropertyCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setObjectType` instead
    ///
    pub const SetObjectType = setObjectType;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setObjectType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn setObjectType(self: QTextTableCellFormat, typeVal: i32) void {
        qtc.QTextFormat_SetObjectType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `objectType` instead
    ///
    pub const ObjectType = objectType;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#objectType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn objectType(self: QTextTableCellFormat) i32 {
        return qtc.QTextFormat_ObjectType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCharFormat` instead
    ///
    pub const IsCharFormat = isCharFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn isCharFormat(self: QTextTableCellFormat) bool {
        return qtc.QTextFormat_IsCharFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isBlockFormat` instead
    ///
    pub const IsBlockFormat = isBlockFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isBlockFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn isBlockFormat(self: QTextTableCellFormat) bool {
        return qtc.QTextFormat_IsBlockFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isListFormat` instead
    ///
    pub const IsListFormat = isListFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isListFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn isListFormat(self: QTextTableCellFormat) bool {
        return qtc.QTextFormat_IsListFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isFrameFormat` instead
    ///
    pub const IsFrameFormat = isFrameFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isFrameFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn isFrameFormat(self: QTextTableCellFormat) bool {
        return qtc.QTextFormat_IsFrameFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isImageFormat` instead
    ///
    pub const IsImageFormat = isImageFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isImageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn isImageFormat(self: QTextTableCellFormat) bool {
        return qtc.QTextFormat_IsImageFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isTableFormat` instead
    ///
    pub const IsTableFormat = isTableFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isTableFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn isTableFormat(self: QTextTableCellFormat) bool {
        return qtc.QTextFormat_IsTableFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isTableCellFormat` instead
    ///
    pub const IsTableCellFormat = isTableCellFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#isTableCellFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn isTableCellFormat(self: QTextTableCellFormat) bool {
        return qtc.QTextFormat_IsTableCellFormat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toBlockFormat` instead
    ///
    pub const ToBlockFormat = toBlockFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toBlockFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn toBlockFormat(self: QTextTableCellFormat) QTextBlockFormat {
        return .{ .ptr = qtc.QTextFormat_ToBlockFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toCharFormat` instead
    ///
    pub const ToCharFormat = toCharFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn toCharFormat(self: QTextTableCellFormat) QTextCharFormat {
        return .{ .ptr = qtc.QTextFormat_ToCharFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toListFormat` instead
    ///
    pub const ToListFormat = toListFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toListFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn toListFormat(self: QTextTableCellFormat) QTextListFormat {
        return .{ .ptr = qtc.QTextFormat_ToListFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toTableFormat` instead
    ///
    pub const ToTableFormat = toTableFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toTableFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn toTableFormat(self: QTextTableCellFormat) QTextTableFormat {
        return .{ .ptr = qtc.QTextFormat_ToTableFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toFrameFormat` instead
    ///
    pub const ToFrameFormat = toFrameFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toFrameFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn toFrameFormat(self: QTextTableCellFormat) QTextFrameFormat {
        return .{ .ptr = qtc.QTextFormat_ToFrameFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toImageFormat` instead
    ///
    pub const ToImageFormat = toImageFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toImageFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn toImageFormat(self: QTextTableCellFormat) QTextImageFormat {
        return .{ .ptr = qtc.QTextFormat_ToImageFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toTableCellFormat` instead
    ///
    pub const ToTableCellFormat = toTableCellFormat;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#toTableCellFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn toTableCellFormat(self: QTextTableCellFormat) QTextTableCellFormat {
        return .{ .ptr = qtc.QTextFormat_ToTableCellFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn operatorEqual(self: QTextTableCellFormat, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        return qtc.QTextFormat_OperatorEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` rhs: QTextFormat `
    ///
    pub fn operatorNotEqual(self: QTextTableCellFormat, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_QTextFormat;
        return qtc.QTextFormat_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `toQVariant` instead
    ///
    pub const ToQVariant = toQVariant;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#operator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn toQVariant(self: QTextTableCellFormat) QVariant {
        return .{ .ptr = qtc.QTextFormat_ToQVariant(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLayoutDirection` instead
    ///
    pub const SetLayoutDirection = setLayoutDirection;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setLayoutDirection(self: QTextTableCellFormat, direction: i32) void {
        qtc.QTextFormat_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// ### DEPRECATED: Use `layoutDirection` instead
    ///
    pub const LayoutDirection = layoutDirection;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn layoutDirection(self: QTextTableCellFormat) i32 {
        return qtc.QTextFormat_LayoutDirection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBackground` instead
    ///
    pub const SetBackground = setBackground;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` brush: QBrush `
    ///
    pub fn setBackground(self: QTextTableCellFormat, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTextFormat_SetBackground(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `background` instead
    ///
    pub const Background = background;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#background)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn background(self: QTextTableCellFormat) QBrush {
        return .{ .ptr = qtc.QTextFormat_Background(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `clearBackground` instead
    ///
    pub const ClearBackground = clearBackground;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn clearBackground(self: QTextTableCellFormat) void {
        qtc.QTextFormat_ClearBackground(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setForeground` instead
    ///
    pub const SetForeground = setForeground;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#setForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    /// ` brush: QBrush `
    ///
    pub fn setForeground(self: QTextTableCellFormat, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTextFormat_SetForeground(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `foreground` instead
    ///
    pub const Foreground = foreground;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#foreground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn foreground(self: QTextTableCellFormat) QBrush {
        return .{ .ptr = qtc.QTextFormat_Foreground(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `clearForeground` instead
    ///
    pub const ClearForeground = clearForeground;

    /// Inherited from QTextFormat
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#clearForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn clearForeground(self: QTextTableCellFormat) void {
        qtc.QTextFormat_ClearForeground(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttablecellformat.html#dtor.QTextTableCellFormat)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextTableCellFormat `
    ///
    pub fn delete(self: QTextTableCellFormat) void {
        qtc.QTextTableCellFormat_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextformat.html#public-types)
pub const enums = struct {
    pub const Type = enum(i32) {
        pub const VariableLength: i32 = 0;
        pub const FixedLength: i32 = 1;
        pub const PercentageLength: i32 = 2;
    };

    pub const FormatType = enum(i32) {
        pub const InvalidFormat: i32 = -1;
        pub const BlockFormat: i32 = 1;
        pub const CharFormat: i32 = 2;
        pub const ListFormat: i32 = 3;
        pub const FrameFormat: i32 = 5;
        pub const UserFormat: i32 = 100;
    };

    pub const Property = enum(i32) {
        pub const ObjectIndex: i32 = 0;
        pub const CssFloat: i32 = 2048;
        pub const LayoutDirection: i32 = 2049;
        pub const OutlinePen: i32 = 2064;
        pub const BackgroundBrush: i32 = 2080;
        pub const ForegroundBrush: i32 = 2081;
        pub const BackgroundImageUrl: i32 = 2083;
        pub const BlockAlignment: i32 = 4112;
        pub const BlockTopMargin: i32 = 4144;
        pub const BlockBottomMargin: i32 = 4145;
        pub const BlockLeftMargin: i32 = 4146;
        pub const BlockRightMargin: i32 = 4147;
        pub const TextIndent: i32 = 4148;
        pub const TabPositions: i32 = 4149;
        pub const BlockIndent: i32 = 4160;
        pub const LineHeight: i32 = 4168;
        pub const LineHeightType: i32 = 4169;
        pub const BlockNonBreakableLines: i32 = 4176;
        pub const BlockTrailingHorizontalRulerWidth: i32 = 4192;
        pub const HeadingLevel: i32 = 4208;
        pub const BlockQuoteLevel: i32 = 4224;
        pub const BlockCodeLanguage: i32 = 4240;
        pub const BlockCodeFence: i32 = 4241;
        pub const BlockMarker: i32 = 4256;
        pub const FirstFontProperty: i32 = 8160;
        pub const FontCapitalization: i32 = 8160;
        pub const FontLetterSpacing: i32 = 8161;
        pub const FontWordSpacing: i32 = 8162;
        pub const FontStyleHint: i32 = 8163;
        pub const FontStyleStrategy: i32 = 8164;
        pub const FontKerning: i32 = 8165;
        pub const FontHintingPreference: i32 = 8166;
        pub const FontFamilies: i32 = 8167;
        pub const FontStyleName: i32 = 8168;
        pub const FontLetterSpacingType: i32 = 8169;
        pub const FontStretch: i32 = 8170;
        pub const FontFamily: i32 = 8192;
        pub const FontPointSize: i32 = 8193;
        pub const FontSizeAdjustment: i32 = 8194;
        pub const FontSizeIncrement: i32 = 8194;
        pub const FontWeight: i32 = 8195;
        pub const FontItalic: i32 = 8196;
        pub const FontUnderline: i32 = 8197;
        pub const FontOverline: i32 = 8198;
        pub const FontStrikeOut: i32 = 8199;
        pub const FontFixedPitch: i32 = 8200;
        pub const FontPixelSize: i32 = 8201;
        pub const LastFontProperty: i32 = 8201;
        pub const TextUnderlineColor: i32 = 8224;
        pub const TextVerticalAlignment: i32 = 8225;
        pub const TextOutline: i32 = 8226;
        pub const TextUnderlineStyle: i32 = 8227;
        pub const TextToolTip: i32 = 8228;
        pub const TextSuperScriptBaseline: i32 = 8229;
        pub const TextSubScriptBaseline: i32 = 8230;
        pub const TextBaselineOffset: i32 = 8231;
        pub const IsAnchor: i32 = 8240;
        pub const AnchorHref: i32 = 8241;
        pub const AnchorName: i32 = 8242;
        pub const OldFontLetterSpacingType: i32 = 8243;
        pub const OldFontStretch: i32 = 8244;
        pub const OldTextUnderlineColor: i32 = 8208;
        pub const OldFontFamily: i32 = 8192;
        pub const ObjectType: i32 = 12032;
        pub const ListStyle: i32 = 12288;
        pub const ListIndent: i32 = 12289;
        pub const ListNumberPrefix: i32 = 12290;
        pub const ListNumberSuffix: i32 = 12291;
        pub const ListStart: i32 = 12292;
        pub const FrameBorder: i32 = 16384;
        pub const FrameMargin: i32 = 16385;
        pub const FramePadding: i32 = 16386;
        pub const FrameWidth: i32 = 16387;
        pub const FrameHeight: i32 = 16388;
        pub const FrameTopMargin: i32 = 16389;
        pub const FrameBottomMargin: i32 = 16390;
        pub const FrameLeftMargin: i32 = 16391;
        pub const FrameRightMargin: i32 = 16392;
        pub const FrameBorderBrush: i32 = 16393;
        pub const FrameBorderStyle: i32 = 16400;
        pub const TableColumns: i32 = 16640;
        pub const TableColumnWidthConstraints: i32 = 16641;
        pub const TableCellSpacing: i32 = 16642;
        pub const TableCellPadding: i32 = 16643;
        pub const TableHeaderRowCount: i32 = 16644;
        pub const TableBorderCollapse: i32 = 16645;
        pub const TableCellRowSpan: i32 = 18448;
        pub const TableCellColumnSpan: i32 = 18449;
        pub const TableCellTopPadding: i32 = 18450;
        pub const TableCellBottomPadding: i32 = 18451;
        pub const TableCellLeftPadding: i32 = 18452;
        pub const TableCellRightPadding: i32 = 18453;
        pub const TableCellTopBorder: i32 = 18454;
        pub const TableCellBottomBorder: i32 = 18455;
        pub const TableCellLeftBorder: i32 = 18456;
        pub const TableCellRightBorder: i32 = 18457;
        pub const TableCellTopBorderStyle: i32 = 18458;
        pub const TableCellBottomBorderStyle: i32 = 18459;
        pub const TableCellLeftBorderStyle: i32 = 18460;
        pub const TableCellRightBorderStyle: i32 = 18461;
        pub const TableCellTopBorderBrush: i32 = 18462;
        pub const TableCellBottomBorderBrush: i32 = 18463;
        pub const TableCellLeftBorderBrush: i32 = 18464;
        pub const TableCellRightBorderBrush: i32 = 18465;
        pub const ImageName: i32 = 20480;
        pub const ImageTitle: i32 = 20481;
        pub const ImageAltText: i32 = 20482;
        pub const ImageWidth: i32 = 20496;
        pub const ImageHeight: i32 = 20497;
        pub const ImageQuality: i32 = 20500;
        pub const ImageMaxWidth: i32 = 20501;
        pub const FullWidthSelection: i32 = 24576;
        pub const PageBreakPolicy: i32 = 28672;
        pub const UserProperty: i32 = 1048576;
    };

    pub const ObjectTypes = enum(i32) {
        pub const NoObject: i32 = 0;
        pub const ImageObject: i32 = 1;
        pub const TableObject: i32 = 2;
        pub const TableCellObject: i32 = 3;
        pub const UserObject: i32 = 4096;
    };

    pub const PageBreakFlag = enum(i32) {
        pub const PageBreak_Auto: i32 = 0;
        pub const PageBreak_AlwaysBefore: i32 = 1;
        pub const PageBreak_AlwaysAfter: i32 = 16;
    };

    pub const VerticalAlignment = enum(i32) {
        pub const AlignNormal: i32 = 0;
        pub const AlignSuperScript: i32 = 1;
        pub const AlignSubScript: i32 = 2;
        pub const AlignMiddle: i32 = 3;
        pub const AlignTop: i32 = 4;
        pub const AlignBottom: i32 = 5;
        pub const AlignBaseline: i32 = 6;
    };

    pub const UnderlineStyle = enum(i32) {
        pub const NoUnderline: i32 = 0;
        pub const SingleUnderline: i32 = 1;
        pub const DashUnderline: i32 = 2;
        pub const DotLine: i32 = 3;
        pub const DashDotLine: i32 = 4;
        pub const DashDotDotLine: i32 = 5;
        pub const WaveUnderline: i32 = 6;
        pub const SpellCheckUnderline: i32 = 7;
    };

    pub const FontPropertiesInheritanceBehavior = enum(i32) {
        pub const FontPropertiesSpecifiedOnly: i32 = 0;
        pub const FontPropertiesAll: i32 = 1;
    };

    pub const LineHeightTypes = enum(i32) {
        pub const SingleHeight: i32 = 0;
        pub const ProportionalHeight: i32 = 1;
        pub const FixedHeight: i32 = 2;
        pub const MinimumHeight: i32 = 3;
        pub const LineDistanceHeight: i32 = 4;
    };

    pub const MarkerType = enum(i32) {
        pub const NoMarker: i32 = 0;
        pub const Unchecked: i32 = 1;
        pub const Checked: i32 = 2;
    };

    pub const Style = enum(i32) {
        pub const ListDisc: i32 = -1;
        pub const ListCircle: i32 = -2;
        pub const ListSquare: i32 = -3;
        pub const ListDecimal: i32 = -4;
        pub const ListLowerAlpha: i32 = -5;
        pub const ListUpperAlpha: i32 = -6;
        pub const ListLowerRoman: i32 = -7;
        pub const ListUpperRoman: i32 = -8;
        pub const ListStyleUndefined: i32 = 0;
    };

    pub const Position = enum(i32) {
        pub const InFlow: i32 = 0;
        pub const FloatLeft: i32 = 1;
        pub const FloatRight: i32 = 2;
    };

    pub const BorderStyle = enum(i32) {
        pub const BorderStyle_None: i32 = 0;
        pub const BorderStyle_Dotted: i32 = 1;
        pub const BorderStyle_Dashed: i32 = 2;
        pub const BorderStyle_Solid: i32 = 3;
        pub const BorderStyle_Double: i32 = 4;
        pub const BorderStyle_DotDash: i32 = 5;
        pub const BorderStyle_DotDotDash: i32 = 6;
        pub const BorderStyle_Groove: i32 = 7;
        pub const BorderStyle_Ridge: i32 = 8;
        pub const BorderStyle_Inset: i32 = 9;
        pub const BorderStyle_Outset: i32 = 10;
    };
};
