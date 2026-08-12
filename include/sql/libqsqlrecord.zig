const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QSqlField = @import("libqt6").QSqlField;
const QVariant = @import("libqt6").QVariant;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html)
pub const QSqlRecord = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSqlRecord,

    pub const _is_QSqlRecord = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSqlRecord object in C++ memory
    ///
    pub fn new() QSqlRecord {
        return .{ .ptr = qtc.QSqlRecord_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QSqlRecord object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSqlRecord `
    ///
    pub fn new2(other: anytype) QSqlRecord {
        comptime _ = @TypeOf(other)._is_QSqlRecord;
        return .{ .ptr = qtc.QSqlRecord_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    /// ` other: QSqlRecord `
    ///
    pub fn operatorAssign(self: QSqlRecord, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSqlRecord;
        qtc.QSqlRecord_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    /// ` other: QSqlRecord `
    ///
    pub fn swap(self: QSqlRecord, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSqlRecord;
        qtc.QSqlRecord_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    /// ` other: QSqlRecord `
    ///
    pub fn operatorEqual(self: QSqlRecord, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QSqlRecord;
        return qtc.QSqlRecord_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    /// ` other: QSqlRecord `
    ///
    pub fn operatorNotEqual(self: QSqlRecord, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QSqlRecord;
        return qtc.QSqlRecord_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `value` instead
    ///
    pub const Value = value;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    /// ` i: i32 `
    ///
    pub fn value(self: QSqlRecord, i: i32) QVariant {
        return .{ .ptr = qtc.QSqlRecord_Value(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### DEPRECATED: Use `value2` instead
    ///
    pub const Value2 = value2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    /// ` name: []const u8 `
    ///
    pub fn value2(self: QSqlRecord, name: []const u8) QVariant {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QSqlRecord_Value2(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `setValue` instead
    ///
    pub const SetValue = setValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#setValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    /// ` i: i32 `
    ///
    /// ` val: QVariant `
    ///
    pub fn setValue(self: QSqlRecord, i: i32, val: anytype) void {
        comptime _ = @TypeOf(val)._is_QVariant;
        qtc.QSqlRecord_SetValue(@ptrCast(self.ptr), @bitCast(i), @ptrCast(val.ptr));
    }

    /// ### DEPRECATED: Use `setValue2` instead
    ///
    pub const SetValue2 = setValue2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#setValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    /// ` name: []const u8 `
    ///
    /// ` val: QVariant `
    ///
    pub fn setValue2(self: QSqlRecord, name: []const u8, val: anytype) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(val)._is_QVariant;
        qtc.QSqlRecord_SetValue2(@ptrCast(self.ptr), name_str, @ptrCast(val.ptr));
    }

    /// ### DEPRECATED: Use `setNull` instead
    ///
    pub const SetNull = setNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#setNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    /// ` i: i32 `
    ///
    pub fn setNull(self: QSqlRecord, i: i32) void {
        qtc.QSqlRecord_SetNull(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### DEPRECATED: Use `setNull2` instead
    ///
    pub const SetNull2 = setNull2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#setNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setNull2(self: QSqlRecord, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QSqlRecord_SetNull2(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    /// ` i: i32 `
    ///
    pub fn isNull(self: QSqlRecord, i: i32) bool {
        return qtc.QSqlRecord_IsNull(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### DEPRECATED: Use `isNull2` instead
    ///
    pub const IsNull2 = isNull2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    /// ` name: []const u8 `
    ///
    pub fn isNull2(self: QSqlRecord, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QSqlRecord_IsNull2(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `indexOf` instead
    ///
    pub const IndexOf = indexOf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    /// ` name: []const u8 `
    ///
    pub fn indexOf(self: QSqlRecord, name: []const u8) i32 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QSqlRecord_IndexOf(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `fieldName` instead
    ///
    pub const FieldName = fieldName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#fieldName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` i: i32 `
    ///
    pub fn fieldName(self: QSqlRecord, allocator: std.mem.Allocator, i: i32) []const u8 {
        var _str = qtc.QSqlRecord_FieldName(@ptrCast(self.ptr), @bitCast(i));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSqlRecord.fieldName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `field` instead
    ///
    pub const Field = field;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#field)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    /// ` i: i32 `
    ///
    pub fn field(self: QSqlRecord, i: i32) QSqlField {
        return .{ .ptr = qtc.QSqlRecord_Field(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### DEPRECATED: Use `field2` instead
    ///
    pub const Field2 = field2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#field)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    /// ` name: []const u8 `
    ///
    pub fn field2(self: QSqlRecord, name: []const u8) QSqlField {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QSqlRecord_Field2(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `isGenerated` instead
    ///
    pub const IsGenerated = isGenerated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#isGenerated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    /// ` i: i32 `
    ///
    pub fn isGenerated(self: QSqlRecord, i: i32) bool {
        return qtc.QSqlRecord_IsGenerated(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### DEPRECATED: Use `isGenerated2` instead
    ///
    pub const IsGenerated2 = isGenerated2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#isGenerated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    /// ` name: []const u8 `
    ///
    pub fn isGenerated2(self: QSqlRecord, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QSqlRecord_IsGenerated2(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `setGenerated` instead
    ///
    pub const SetGenerated = setGenerated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#setGenerated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    /// ` name: []const u8 `
    ///
    /// ` generated: bool `
    ///
    pub fn setGenerated(self: QSqlRecord, name: []const u8, generated: bool) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QSqlRecord_SetGenerated(@ptrCast(self.ptr), name_str, generated);
    }

    /// ### DEPRECATED: Use `setGenerated2` instead
    ///
    pub const SetGenerated2 = setGenerated2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#setGenerated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    /// ` i: i32 `
    ///
    /// ` generated: bool `
    ///
    pub fn setGenerated2(self: QSqlRecord, i: i32, generated: bool) void {
        qtc.QSqlRecord_SetGenerated2(@ptrCast(self.ptr), @bitCast(i), generated);
    }

    /// ### DEPRECATED: Use `append` instead
    ///
    pub const Append = append;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    /// ` _field: QSqlField `
    ///
    pub fn append(self: QSqlRecord, _field: anytype) void {
        comptime _ = @TypeOf(_field)._is_QSqlField;
        qtc.QSqlRecord_Append(@ptrCast(self.ptr), @ptrCast(_field.ptr));
    }

    /// ### DEPRECATED: Use `replace` instead
    ///
    pub const Replace = replace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#replace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    /// ` pos: i32 `
    ///
    /// ` _field: QSqlField `
    ///
    pub fn replace(self: QSqlRecord, pos: i32, _field: anytype) void {
        comptime _ = @TypeOf(_field)._is_QSqlField;
        qtc.QSqlRecord_Replace(@ptrCast(self.ptr), @bitCast(pos), @ptrCast(_field.ptr));
    }

    /// ### DEPRECATED: Use `insert` instead
    ///
    pub const Insert = insert;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    /// ` pos: i32 `
    ///
    /// ` _field: QSqlField `
    ///
    pub fn insert(self: QSqlRecord, pos: i32, _field: anytype) void {
        comptime _ = @TypeOf(_field)._is_QSqlField;
        qtc.QSqlRecord_Insert(@ptrCast(self.ptr), @bitCast(pos), @ptrCast(_field.ptr));
    }

    /// ### DEPRECATED: Use `remove` instead
    ///
    pub const Remove = remove;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    /// ` pos: i32 `
    ///
    pub fn remove(self: QSqlRecord, pos: i32) void {
        qtc.QSqlRecord_Remove(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    pub fn isEmpty(self: QSqlRecord) bool {
        return qtc.QSqlRecord_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `contains` instead
    ///
    pub const Contains = contains;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    /// ` name: []const u8 `
    ///
    pub fn contains(self: QSqlRecord, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QSqlRecord_Contains(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    pub fn clear(self: QSqlRecord) void {
        qtc.QSqlRecord_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clearValues` instead
    ///
    pub const ClearValues = clearValues;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#clearValues)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    pub fn clearValues(self: QSqlRecord) void {
        qtc.QSqlRecord_ClearValues(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `count` instead
    ///
    pub const Count = count;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    pub fn count(self: QSqlRecord) i32 {
        return qtc.QSqlRecord_Count(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `keyValues` instead
    ///
    pub const KeyValues = keyValues;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#keyValues)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    /// ` keyFields: QSqlRecord `
    ///
    pub fn keyValues(self: QSqlRecord, keyFields: anytype) QSqlRecord {
        comptime _ = @TypeOf(keyFields)._is_QSqlRecord;
        return .{ .ptr = qtc.QSqlRecord_KeyValues(@ptrCast(self.ptr), @ptrCast(keyFields.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#dtor.QSqlRecord)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSqlRecord `
    ///
    pub fn delete(self: QSqlRecord) void {
        qtc.QSqlRecord_Delete(@ptrCast(self.ptr));
    }
};
