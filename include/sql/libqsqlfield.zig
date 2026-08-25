const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QMetaType = @import("libqt6").QMetaType;
const QVariant = @import("libqt6").QVariant;
const qsqlfield_enums = enums;
const qvariant_enums = @import("../libqvariant.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html)
pub const QSqlField = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSqlField,

    pub const _is_QSqlField = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSqlField object in C++ memory
    ///
    pub fn new() QSqlField {
        return .{ .ptr = qtc.QSqlField_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QSqlField object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSqlField `
    ///
    pub fn new2(other: anytype) QSqlField {
        comptime _ = @TypeOf(other)._is_QSqlField;
        return .{ .ptr = qtc.QSqlField_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QSqlField object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` fieldName: []const u8 `
    ///
    /// ` typeVal: qvariant_enums.Type `
    ///
    pub fn new3(fieldName: []const u8, typeVal: i32) QSqlField {
        const fieldName_str = qtc.libqt_string{
            .len = fieldName.len,
            .data = fieldName.ptr,
        };
        return .{ .ptr = qtc.QSqlField_new3(fieldName_str, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QSqlField object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` fieldName: []const u8 `
    ///
    pub fn new4(fieldName: []const u8) QSqlField {
        const fieldName_str = qtc.libqt_string{
            .len = fieldName.len,
            .data = fieldName.ptr,
        };
        return .{ .ptr = qtc.QSqlField_new4(fieldName_str) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QSqlField object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` fieldName: []const u8 `
    ///
    /// ` typeVal: QMetaType `
    ///
    pub fn new5(fieldName: []const u8, typeVal: anytype) QSqlField {
        const fieldName_str = qtc.libqt_string{
            .len = fieldName.len,
            .data = fieldName.ptr,
        };
        comptime _ = @TypeOf(typeVal)._is_QMetaType;
        return .{ .ptr = qtc.QSqlField_new5(fieldName_str, @ptrCast(typeVal.ptr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QSqlField object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` fieldName: []const u8 `
    ///
    /// ` typeVal: QMetaType `
    ///
    /// ` _tableName: []const u8 `
    ///
    pub fn new6(fieldName: []const u8, typeVal: anytype, _tableName: []const u8) QSqlField {
        const fieldName_str = qtc.libqt_string{
            .len = fieldName.len,
            .data = fieldName.ptr,
        };
        comptime _ = @TypeOf(typeVal)._is_QMetaType;
        const tableName_str = qtc.libqt_string{
            .len = _tableName.len,
            .data = _tableName.ptr,
        };
        return .{ .ptr = qtc.QSqlField_new6(fieldName_str, @ptrCast(typeVal.ptr), tableName_str) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QSqlField object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` fieldName: []const u8 `
    ///
    /// ` typeVal: qvariant_enums.Type `
    ///
    /// ` _tableName: []const u8 `
    ///
    pub fn new7(fieldName: []const u8, typeVal: i32, _tableName: []const u8) QSqlField {
        const fieldName_str = qtc.libqt_string{
            .len = fieldName.len,
            .data = fieldName.ptr,
        };
        const tableName_str = qtc.libqt_string{
            .len = _tableName.len,
            .data = _tableName.ptr,
        };
        return .{ .ptr = qtc.QSqlField_new7(fieldName_str, @bitCast(typeVal), tableName_str) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    /// ` other: QSqlField `
    ///
    pub fn operatorAssign(self: QSqlField, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSqlField;
        qtc.QSqlField_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    /// ` other: QSqlField `
    ///
    pub fn swap(self: QSqlField, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSqlField;
        qtc.QSqlField_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    /// ` other: QSqlField `
    ///
    pub fn operatorEqual(self: QSqlField, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QSqlField;
        return qtc.QSqlField_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    /// ` other: QSqlField `
    ///
    pub fn operatorNotEqual(self: QSqlField, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QSqlField;
        return qtc.QSqlField_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setValue` instead
    ///
    pub const SetValue = setValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#setValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    /// ` _value: QVariant `
    ///
    pub fn setValue(self: QSqlField, _value: anytype) void {
        comptime _ = @TypeOf(_value)._is_QVariant;
        qtc.QSqlField_SetValue(@ptrCast(self.ptr), @ptrCast(_value.ptr));
    }

    /// ### DEPRECATED: Use `value` instead
    ///
    pub const Value = value;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    pub fn value(self: QSqlField) QVariant {
        return .{ .ptr = qtc.QSqlField_Value(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: QSqlField, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.QSqlField_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QSqlField, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlField_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSqlField.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setTableName` instead
    ///
    pub const SetTableName = setTableName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#setTableName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    /// ` _tableName: []const u8 `
    ///
    pub fn setTableName(self: QSqlField, _tableName: []const u8) void {
        const tableName_str = qtc.libqt_string{
            .len = _tableName.len,
            .data = _tableName.ptr,
        };
        qtc.QSqlField_SetTableName(@ptrCast(self.ptr), tableName_str);
    }

    /// ### DEPRECATED: Use `tableName` instead
    ///
    pub const TableName = tableName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#tableName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn tableName(self: QSqlField, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlField_TableName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSqlField.tableName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    pub fn isNull(self: QSqlField) bool {
        return qtc.QSqlField_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setReadOnly` instead
    ///
    pub const SetReadOnly = setReadOnly;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#setReadOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    /// ` readOnly: bool `
    ///
    pub fn setReadOnly(self: QSqlField, readOnly: bool) void {
        qtc.QSqlField_SetReadOnly(@ptrCast(self.ptr), readOnly);
    }

    /// ### DEPRECATED: Use `isReadOnly` instead
    ///
    pub const IsReadOnly = isReadOnly;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#isReadOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    pub fn isReadOnly(self: QSqlField) bool {
        return qtc.QSqlField_IsReadOnly(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    pub fn clear(self: QSqlField) void {
        qtc.QSqlField_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAutoValue` instead
    ///
    pub const IsAutoValue = isAutoValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#isAutoValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    pub fn isAutoValue(self: QSqlField) bool {
        return qtc.QSqlField_IsAutoValue(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `metaType` instead
    ///
    pub const MetaType = metaType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#metaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    pub fn metaType(self: QSqlField) QMetaType {
        return .{ .ptr = qtc.QSqlField_MetaType(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setMetaType` instead
    ///
    pub const SetMetaType = setMetaType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#setMetaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    /// ` typeVal: QMetaType `
    ///
    pub fn setMetaType(self: QSqlField, typeVal: anytype) void {
        comptime _ = @TypeOf(typeVal)._is_QMetaType;
        qtc.QSqlField_SetMetaType(@ptrCast(self.ptr), @ptrCast(typeVal.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    /// ## Returns:
    ///
    /// ` qvariant_enums.Type `
    ///
    pub fn type0(self: QSqlField) i32 {
        return qtc.QSqlField_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#setType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    /// ` typeVal: qvariant_enums.Type `
    ///
    pub fn setType(self: QSqlField, typeVal: i32) void {
        qtc.QSqlField_SetType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `setRequiredStatus` instead
    ///
    pub const SetRequiredStatus = setRequiredStatus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#setRequiredStatus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    /// ` status: qsqlfield_enums.RequiredStatus `
    ///
    pub fn setRequiredStatus(self: QSqlField, status: i32) void {
        qtc.QSqlField_SetRequiredStatus(@ptrCast(self.ptr), @bitCast(status));
    }

    /// ### DEPRECATED: Use `setRequired` instead
    ///
    pub const SetRequired = setRequired;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#setRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    /// ` required: bool `
    ///
    pub fn setRequired(self: QSqlField, required: bool) void {
        qtc.QSqlField_SetRequired(@ptrCast(self.ptr), required);
    }

    /// ### DEPRECATED: Use `setLength` instead
    ///
    pub const SetLength = setLength;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#setLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    /// ` fieldLength: i32 `
    ///
    pub fn setLength(self: QSqlField, fieldLength: i32) void {
        qtc.QSqlField_SetLength(@ptrCast(self.ptr), @bitCast(fieldLength));
    }

    /// ### DEPRECATED: Use `setPrecision` instead
    ///
    pub const SetPrecision = setPrecision;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#setPrecision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    /// ` _precision: i32 `
    ///
    pub fn setPrecision(self: QSqlField, _precision: i32) void {
        qtc.QSqlField_SetPrecision(@ptrCast(self.ptr), @bitCast(_precision));
    }

    /// ### DEPRECATED: Use `setDefaultValue` instead
    ///
    pub const SetDefaultValue = setDefaultValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#setDefaultValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    /// ` _value: QVariant `
    ///
    pub fn setDefaultValue(self: QSqlField, _value: anytype) void {
        comptime _ = @TypeOf(_value)._is_QVariant;
        qtc.QSqlField_SetDefaultValue(@ptrCast(self.ptr), @ptrCast(_value.ptr));
    }

    /// ### DEPRECATED: Use `setSqlType` instead
    ///
    pub const SetSqlType = setSqlType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#setSqlType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn setSqlType(self: QSqlField, typeVal: i32) void {
        qtc.QSqlField_SetSqlType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `setGenerated` instead
    ///
    pub const SetGenerated = setGenerated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#setGenerated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    /// ` gen: bool `
    ///
    pub fn setGenerated(self: QSqlField, gen: bool) void {
        qtc.QSqlField_SetGenerated(@ptrCast(self.ptr), gen);
    }

    /// ### DEPRECATED: Use `setAutoValue` instead
    ///
    pub const SetAutoValue = setAutoValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#setAutoValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    /// ` autoVal: bool `
    ///
    pub fn setAutoValue(self: QSqlField, autoVal: bool) void {
        qtc.QSqlField_SetAutoValue(@ptrCast(self.ptr), autoVal);
    }

    /// ### DEPRECATED: Use `requiredStatus` instead
    ///
    pub const RequiredStatus = requiredStatus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#requiredStatus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    /// ## Returns:
    ///
    /// ` qsqlfield_enums.RequiredStatus `
    ///
    pub fn requiredStatus(self: QSqlField) i32 {
        return qtc.QSqlField_RequiredStatus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `length` instead
    ///
    pub const Length = length;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    pub fn length(self: QSqlField) i32 {
        return qtc.QSqlField_Length(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `precision` instead
    ///
    pub const Precision = precision;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#precision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    pub fn precision(self: QSqlField) i32 {
        return qtc.QSqlField_Precision(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `defaultValue` instead
    ///
    pub const DefaultValue = defaultValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#defaultValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    pub fn defaultValue(self: QSqlField) QVariant {
        return .{ .ptr = qtc.QSqlField_DefaultValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `typeID` instead
    ///
    pub const TypeID = typeID;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#typeID)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    pub fn typeID(self: QSqlField) i32 {
        return qtc.QSqlField_TypeID(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isGenerated` instead
    ///
    pub const IsGenerated = isGenerated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#isGenerated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    pub fn isGenerated(self: QSqlField) bool {
        return qtc.QSqlField_IsGenerated(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    pub fn isValid(self: QSqlField) bool {
        return qtc.QSqlField_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#dtor.QSqlField)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSqlField `
    ///
    pub fn delete(self: QSqlField) void {
        qtc.QSqlField_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#public-types)
pub const enums = struct {
    pub const RequiredStatus = enum {
        pub const Unknown: i32 = -1;
        pub const Optional: i32 = 0;
        pub const Required: i32 = 1;
    };
};
