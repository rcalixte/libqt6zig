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

    /// New constructs a new QSqlField object.
    ///
    pub fn New() QSqlField {
        return .{ .ptr = qtc.QSqlField_new() };
    }

    /// New2 constructs a new QSqlField object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSqlField `
    ///
    pub fn New2(other: anytype) QSqlField {
        comptime _ = @TypeOf(other)._is_QSqlField;
        return .{ .ptr = qtc.QSqlField_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QSqlField object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fieldName: []const u8 `
    ///
    /// ` typeVal: qvariant_enums.Type `
    ///
    pub fn New3(fieldName: []const u8, typeVal: i32) QSqlField {
        const fieldName_str = qtc.libqt_string{
            .len = fieldName.len,
            .data = fieldName.ptr,
        };
        return .{ .ptr = qtc.QSqlField_new3(fieldName_str, @bitCast(typeVal)) };
    }

    /// New4 constructs a new QSqlField object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fieldName: []const u8 `
    ///
    pub fn New4(fieldName: []const u8) QSqlField {
        const fieldName_str = qtc.libqt_string{
            .len = fieldName.len,
            .data = fieldName.ptr,
        };
        return .{ .ptr = qtc.QSqlField_new4(fieldName_str) };
    }

    /// New5 constructs a new QSqlField object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fieldName: []const u8 `
    ///
    /// ` typeVal: QMetaType `
    ///
    pub fn New5(fieldName: []const u8, typeVal: anytype) QSqlField {
        const fieldName_str = qtc.libqt_string{
            .len = fieldName.len,
            .data = fieldName.ptr,
        };
        comptime _ = @TypeOf(typeVal)._is_QMetaType;
        return .{ .ptr = qtc.QSqlField_new5(fieldName_str, @ptrCast(typeVal.ptr)) };
    }

    /// New6 constructs a new QSqlField object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fieldName: []const u8 `
    ///
    /// ` typeVal: QMetaType `
    ///
    /// ` tableName: []const u8 `
    ///
    pub fn New6(fieldName: []const u8, typeVal: anytype, tableName: []const u8) QSqlField {
        const fieldName_str = qtc.libqt_string{
            .len = fieldName.len,
            .data = fieldName.ptr,
        };
        comptime _ = @TypeOf(typeVal)._is_QMetaType;
        const tableName_str = qtc.libqt_string{
            .len = tableName.len,
            .data = tableName.ptr,
        };
        return .{ .ptr = qtc.QSqlField_new6(fieldName_str, @ptrCast(typeVal.ptr), tableName_str) };
    }

    /// New7 constructs a new QSqlField object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fieldName: []const u8 `
    ///
    /// ` typeVal: qvariant_enums.Type `
    ///
    /// ` tableName: []const u8 `
    ///
    pub fn New7(fieldName: []const u8, typeVal: i32, tableName: []const u8) QSqlField {
        const fieldName_str = qtc.libqt_string{
            .len = fieldName.len,
            .data = fieldName.ptr,
        };
        const tableName_str = qtc.libqt_string{
            .len = tableName.len,
            .data = tableName.ptr,
        };
        return .{ .ptr = qtc.QSqlField_new7(fieldName_str, @bitCast(typeVal), tableName_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    /// ` other: QSqlField `
    ///
    pub fn OperatorAssign(self: QSqlField, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSqlField;
        qtc.QSqlField_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    /// ` other: QSqlField `
    ///
    pub fn Swap(self: QSqlField, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSqlField;
        qtc.QSqlField_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    /// ` other: QSqlField `
    ///
    pub fn OperatorEqual(self: QSqlField, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QSqlField;
        return qtc.QSqlField_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    /// ` other: QSqlField `
    ///
    pub fn OperatorNotEqual(self: QSqlField, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QSqlField;
        return qtc.QSqlField_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#setValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetValue(self: QSqlField, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QSqlField_SetValue(@ptrCast(self.ptr), @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    pub fn Value(self: QSqlField) QVariant {
        return .{ .ptr = qtc.QSqlField_Value(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: QSqlField, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QSqlField_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: QSqlField, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlField_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlfield.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#setTableName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    /// ` tableName: []const u8 `
    ///
    pub fn SetTableName(self: QSqlField, tableName: []const u8) void {
        const tableName_str = qtc.libqt_string{
            .len = tableName.len,
            .data = tableName.ptr,
        };
        qtc.QSqlField_SetTableName(@ptrCast(self.ptr), tableName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#tableName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TableName(self: QSqlField, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlField_TableName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlfield.TableName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    pub fn IsNull(self: QSqlField) bool {
        return qtc.QSqlField_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#setReadOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    /// ` readOnly: bool `
    ///
    pub fn SetReadOnly(self: QSqlField, readOnly: bool) void {
        qtc.QSqlField_SetReadOnly(@ptrCast(self.ptr), readOnly);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#isReadOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    pub fn IsReadOnly(self: QSqlField) bool {
        return qtc.QSqlField_IsReadOnly(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    pub fn Clear(self: QSqlField) void {
        qtc.QSqlField_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#isAutoValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    pub fn IsAutoValue(self: QSqlField) bool {
        return qtc.QSqlField_IsAutoValue(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#metaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    pub fn MetaType(self: QSqlField) QMetaType {
        return .{ .ptr = qtc.QSqlField_MetaType(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#setMetaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    /// ` typeVal: QMetaType `
    ///
    pub fn SetMetaType(self: QSqlField, typeVal: anytype) void {
        comptime _ = @TypeOf(typeVal)._is_QMetaType;
        qtc.QSqlField_SetMetaType(@ptrCast(self.ptr), @ptrCast(typeVal.ptr));
    }

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
    pub fn Type(self: QSqlField) i32 {
        return qtc.QSqlField_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#setType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    /// ` typeVal: qvariant_enums.Type `
    ///
    pub fn SetType(self: QSqlField, typeVal: i32) void {
        qtc.QSqlField_SetType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#setRequiredStatus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    /// ` status: qsqlfield_enums.RequiredStatus `
    ///
    pub fn SetRequiredStatus(self: QSqlField, status: i32) void {
        qtc.QSqlField_SetRequiredStatus(@ptrCast(self.ptr), @bitCast(status));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#setRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    /// ` required: bool `
    ///
    pub fn SetRequired(self: QSqlField, required: bool) void {
        qtc.QSqlField_SetRequired(@ptrCast(self.ptr), required);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#setLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    /// ` fieldLength: i32 `
    ///
    pub fn SetLength(self: QSqlField, fieldLength: i32) void {
        qtc.QSqlField_SetLength(@ptrCast(self.ptr), @bitCast(fieldLength));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#setPrecision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    /// ` precision: i32 `
    ///
    pub fn SetPrecision(self: QSqlField, precision: i32) void {
        qtc.QSqlField_SetPrecision(@ptrCast(self.ptr), @bitCast(precision));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#setDefaultValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetDefaultValue(self: QSqlField, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QSqlField_SetDefaultValue(@ptrCast(self.ptr), @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#setSqlType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn SetSqlType(self: QSqlField, typeVal: i32) void {
        qtc.QSqlField_SetSqlType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#setGenerated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    /// ` gen: bool `
    ///
    pub fn SetGenerated(self: QSqlField, gen: bool) void {
        qtc.QSqlField_SetGenerated(@ptrCast(self.ptr), gen);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#setAutoValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    /// ` autoVal: bool `
    ///
    pub fn SetAutoValue(self: QSqlField, autoVal: bool) void {
        qtc.QSqlField_SetAutoValue(@ptrCast(self.ptr), autoVal);
    }

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
    pub fn RequiredStatus(self: QSqlField) i32 {
        return qtc.QSqlField_RequiredStatus(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    pub fn Length(self: QSqlField) i32 {
        return qtc.QSqlField_Length(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#precision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    pub fn Precision(self: QSqlField) i32 {
        return qtc.QSqlField_Precision(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#defaultValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    pub fn DefaultValue(self: QSqlField) QVariant {
        return .{ .ptr = qtc.QSqlField_DefaultValue(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#typeID)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    pub fn TypeID(self: QSqlField) i32 {
        return qtc.QSqlField_TypeID(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#isGenerated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    pub fn IsGenerated(self: QSqlField) bool {
        return qtc.QSqlField_IsGenerated(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlField `
    ///
    pub fn IsValid(self: QSqlField) bool {
        return qtc.QSqlField_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#dtor.QSqlField)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QSqlField `
    ///
    pub fn Delete(self: QSqlField) void {
        qtc.QSqlField_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#public-types)
pub const enums = struct {
    pub const RequiredStatus = enum(i32) {
        pub const Unknown: i32 = -1;
        pub const Optional: i32 = 0;
        pub const Required: i32 = 1;
    };
};
