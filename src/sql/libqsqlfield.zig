const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qsqlfield_enums = enums;
const qvariant_enums = @import("../libqvariant.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html)
pub const qsqlfield = struct {
    /// New constructs a new QSqlField object.
    ///
    pub fn New() QtC.QSqlField {
        return qtc.QSqlField_new();
    }

    /// New2 constructs a new QSqlField object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QSqlField `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QSqlField {
        return qtc.QSqlField_new2(@ptrCast(other));
    }

    /// New3 constructs a new QSqlField object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fieldName: []const u8 `
    ///
    /// ` typeVal: qvariant_enums.Type `
    ///
    pub fn New3(fieldName: []const u8, typeVal: i32) QtC.QSqlField {
        const fieldName_str = qtc.libqt_string{
            .len = fieldName.len,
            .data = fieldName.ptr,
        };

        return qtc.QSqlField_new3(fieldName_str, @intCast(typeVal));
    }

    /// New4 constructs a new QSqlField object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fieldName: []const u8 `
    ///
    pub fn New4(fieldName: []const u8) QtC.QSqlField {
        const fieldName_str = qtc.libqt_string{
            .len = fieldName.len,
            .data = fieldName.ptr,
        };

        return qtc.QSqlField_new4(fieldName_str);
    }

    /// New5 constructs a new QSqlField object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fieldName: []const u8 `
    ///
    /// ` typeVal: QtC.QMetaType `
    ///
    pub fn New5(fieldName: []const u8, typeVal: QtC.QMetaType) QtC.QSqlField {
        const fieldName_str = qtc.libqt_string{
            .len = fieldName.len,
            .data = fieldName.ptr,
        };

        return qtc.QSqlField_new5(fieldName_str, @ptrCast(typeVal));
    }

    /// New6 constructs a new QSqlField object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fieldName: []const u8 `
    ///
    /// ` typeVal: QtC.QMetaType `
    ///
    /// ` tableName: []const u8 `
    ///
    pub fn New6(fieldName: []const u8, typeVal: QtC.QMetaType, tableName: []const u8) QtC.QSqlField {
        const fieldName_str = qtc.libqt_string{
            .len = fieldName.len,
            .data = fieldName.ptr,
        };
        const tableName_str = qtc.libqt_string{
            .len = tableName.len,
            .data = tableName.ptr,
        };

        return qtc.QSqlField_new6(fieldName_str, @ptrCast(typeVal), tableName_str);
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
    pub fn New7(fieldName: []const u8, typeVal: i32, tableName: []const u8) QtC.QSqlField {
        const fieldName_str = qtc.libqt_string{
            .len = fieldName.len,
            .data = fieldName.ptr,
        };
        const tableName_str = qtc.libqt_string{
            .len = tableName.len,
            .data = tableName.ptr,
        };

        return qtc.QSqlField_new7(fieldName_str, @intCast(typeVal), tableName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlField `
    ///
    /// ` other: QtC.QSqlField `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSqlField_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlField `
    ///
    /// ` other: QtC.QSqlField `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSqlField_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlField `
    ///
    /// ` other: QtC.QSqlField `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QSqlField_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlField `
    ///
    /// ` other: QtC.QSqlField `
    ///
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QSqlField_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#setValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlField `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetValue(self: ?*anyopaque, value: ?*anyopaque) void {
        qtc.QSqlField_SetValue(@ptrCast(self), @ptrCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlField `
    ///
    pub fn Value(self: ?*anyopaque) QtC.QVariant {
        return qtc.QSqlField_Value(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlField `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QSqlField_SetName(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlField `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlField_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlfield.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#setTableName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlField `
    ///
    /// ` tableName: []const u8 `
    ///
    pub fn SetTableName(self: ?*anyopaque, tableName: []const u8) void {
        const tableName_str = qtc.libqt_string{
            .len = tableName.len,
            .data = tableName.ptr,
        };
        qtc.QSqlField_SetTableName(@ptrCast(self), tableName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#tableName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlField `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TableName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlField_TableName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlfield.TableName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlField `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QSqlField_IsNull(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#setReadOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlField `
    ///
    /// ` readOnly: bool `
    ///
    pub fn SetReadOnly(self: ?*anyopaque, readOnly: bool) void {
        qtc.QSqlField_SetReadOnly(@ptrCast(self), readOnly);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#isReadOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlField `
    ///
    pub fn IsReadOnly(self: ?*anyopaque) bool {
        return qtc.QSqlField_IsReadOnly(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlField `
    ///
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QSqlField_Clear(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#isAutoValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlField `
    ///
    pub fn IsAutoValue(self: ?*anyopaque) bool {
        return qtc.QSqlField_IsAutoValue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#metaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlField `
    ///
    pub fn MetaType(self: ?*anyopaque) QtC.QMetaType {
        return qtc.QSqlField_MetaType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#setMetaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlField `
    ///
    /// ` typeVal: QtC.QMetaType `
    ///
    pub fn SetMetaType(self: ?*anyopaque, typeVal: QtC.QMetaType) void {
        qtc.QSqlField_SetMetaType(@ptrCast(self), @ptrCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlField `
    ///
    /// ## Returns:
    ///
    /// ` qvariant_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QSqlField_Type(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#setType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlField `
    ///
    /// ` typeVal: qvariant_enums.Type `
    ///
    pub fn SetType(self: ?*anyopaque, typeVal: i32) void {
        qtc.QSqlField_SetType(@ptrCast(self), @intCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#setRequiredStatus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlField `
    ///
    /// ` status: qsqlfield_enums.RequiredStatus `
    ///
    pub fn SetRequiredStatus(self: ?*anyopaque, status: i32) void {
        qtc.QSqlField_SetRequiredStatus(@ptrCast(self), @intCast(status));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#setRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlField `
    ///
    /// ` required: bool `
    ///
    pub fn SetRequired(self: ?*anyopaque, required: bool) void {
        qtc.QSqlField_SetRequired(@ptrCast(self), required);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#setLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlField `
    ///
    /// ` fieldLength: i32 `
    ///
    pub fn SetLength(self: ?*anyopaque, fieldLength: i32) void {
        qtc.QSqlField_SetLength(@ptrCast(self), @intCast(fieldLength));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#setPrecision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlField `
    ///
    /// ` precision: i32 `
    ///
    pub fn SetPrecision(self: ?*anyopaque, precision: i32) void {
        qtc.QSqlField_SetPrecision(@ptrCast(self), @intCast(precision));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#setDefaultValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlField `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetDefaultValue(self: ?*anyopaque, value: ?*anyopaque) void {
        qtc.QSqlField_SetDefaultValue(@ptrCast(self), @ptrCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#setSqlType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlField `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn SetSqlType(self: ?*anyopaque, typeVal: i32) void {
        qtc.QSqlField_SetSqlType(@ptrCast(self), @intCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#setGenerated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlField `
    ///
    /// ` gen: bool `
    ///
    pub fn SetGenerated(self: ?*anyopaque, gen: bool) void {
        qtc.QSqlField_SetGenerated(@ptrCast(self), gen);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#setAutoValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlField `
    ///
    /// ` autoVal: bool `
    ///
    pub fn SetAutoValue(self: ?*anyopaque, autoVal: bool) void {
        qtc.QSqlField_SetAutoValue(@ptrCast(self), autoVal);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#requiredStatus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlField `
    ///
    /// ## Returns:
    ///
    /// ` qsqlfield_enums.RequiredStatus `
    ///
    pub fn RequiredStatus(self: ?*anyopaque) i32 {
        return qtc.QSqlField_RequiredStatus(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#length)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlField `
    ///
    pub fn Length(self: ?*anyopaque) i32 {
        return qtc.QSqlField_Length(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#precision)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlField `
    ///
    pub fn Precision(self: ?*anyopaque) i32 {
        return qtc.QSqlField_Precision(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#defaultValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlField `
    ///
    pub fn DefaultValue(self: ?*anyopaque) QtC.QVariant {
        return qtc.QSqlField_DefaultValue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#typeID)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlField `
    ///
    pub fn TypeID(self: ?*anyopaque) i32 {
        return qtc.QSqlField_TypeID(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#isGenerated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlField `
    ///
    pub fn IsGenerated(self: ?*anyopaque) bool {
        return qtc.QSqlField_IsGenerated(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlField `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QSqlField_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlfield.html#dtor.QSqlField)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QSqlField `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSqlField_Delete(@ptrCast(self));
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
