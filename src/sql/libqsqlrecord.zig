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

    /// New constructs a new QSqlRecord object.
    ///
    pub fn New() QSqlRecord {
        return .{ .ptr = qtc.QSqlRecord_new() };
    }

    /// New2 constructs a new QSqlRecord object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSqlRecord `
    ///
    pub fn New2(other: anytype) QSqlRecord {
        comptime _ = @TypeOf(other)._is_QSqlRecord;
        return .{ .ptr = qtc.QSqlRecord_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    /// ` other: QSqlRecord `
    ///
    pub fn OperatorAssign(self: QSqlRecord, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSqlRecord;
        qtc.QSqlRecord_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    /// ` other: QSqlRecord `
    ///
    pub fn Swap(self: QSqlRecord, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSqlRecord;
        qtc.QSqlRecord_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    /// ` other: QSqlRecord `
    ///
    pub fn OperatorEqual(self: QSqlRecord, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QSqlRecord;
        return qtc.QSqlRecord_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    /// ` other: QSqlRecord `
    ///
    pub fn OperatorNotEqual(self: QSqlRecord, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QSqlRecord;
        return qtc.QSqlRecord_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    /// ` i: i32 `
    ///
    pub fn Value(self: QSqlRecord, i: i32) QVariant {
        return .{ .ptr = qtc.QSqlRecord_Value(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    /// ` name: []const u8 `
    ///
    pub fn Value2(self: QSqlRecord, name: []const u8) QVariant {
        return .{ .ptr = qtc.QSqlRecord_Value2(@ptrCast(self.ptr), name.ptr) };
    }

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
    pub fn SetValue(self: QSqlRecord, i: i32, val: anytype) void {
        comptime _ = @TypeOf(val)._is_QVariant;
        qtc.QSqlRecord_SetValue(@ptrCast(self.ptr), @bitCast(i), @ptrCast(val.ptr));
    }

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
    pub fn SetValue2(self: QSqlRecord, name: []const u8, val: anytype) void {
        comptime _ = @TypeOf(val)._is_QVariant;
        qtc.QSqlRecord_SetValue2(@ptrCast(self.ptr), name.ptr, @ptrCast(val.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#setNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    /// ` i: i32 `
    ///
    pub fn SetNull(self: QSqlRecord, i: i32) void {
        qtc.QSqlRecord_SetNull(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#setNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetNull2(self: QSqlRecord, name: []const u8) void {
        qtc.QSqlRecord_SetNull2(@ptrCast(self.ptr), name.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    /// ` i: i32 `
    ///
    pub fn IsNull(self: QSqlRecord, i: i32) bool {
        return qtc.QSqlRecord_IsNull(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    /// ` name: []const u8 `
    ///
    pub fn IsNull2(self: QSqlRecord, name: []const u8) bool {
        return qtc.QSqlRecord_IsNull2(@ptrCast(self.ptr), name.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    /// ` name: []const u8 `
    ///
    pub fn IndexOf(self: QSqlRecord, name: []const u8) i32 {
        return qtc.QSqlRecord_IndexOf(@ptrCast(self.ptr), name.ptr);
    }

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
    pub fn FieldName(self: QSqlRecord, allocator: std.mem.Allocator, i: i32) []const u8 {
        var _str = qtc.QSqlRecord_FieldName(@ptrCast(self.ptr), @bitCast(i));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlrecord.FieldName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#field)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    /// ` i: i32 `
    ///
    pub fn Field(self: QSqlRecord, i: i32) QSqlField {
        return .{ .ptr = qtc.QSqlRecord_Field(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#field)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    /// ` name: []const u8 `
    ///
    pub fn Field2(self: QSqlRecord, name: []const u8) QSqlField {
        return .{ .ptr = qtc.QSqlRecord_Field2(@ptrCast(self.ptr), name.ptr) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#isGenerated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    /// ` i: i32 `
    ///
    pub fn IsGenerated(self: QSqlRecord, i: i32) bool {
        return qtc.QSqlRecord_IsGenerated(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#isGenerated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    /// ` name: []const u8 `
    ///
    pub fn IsGenerated2(self: QSqlRecord, name: []const u8) bool {
        return qtc.QSqlRecord_IsGenerated2(@ptrCast(self.ptr), name.ptr);
    }

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
    pub fn SetGenerated(self: QSqlRecord, name: []const u8, generated: bool) void {
        qtc.QSqlRecord_SetGenerated(@ptrCast(self.ptr), name.ptr, generated);
    }

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
    pub fn SetGenerated2(self: QSqlRecord, i: i32, generated: bool) void {
        qtc.QSqlRecord_SetGenerated2(@ptrCast(self.ptr), @bitCast(i), generated);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    /// ` field: QSqlField `
    ///
    pub fn Append(self: QSqlRecord, field: anytype) void {
        comptime _ = @TypeOf(field)._is_QSqlField;
        qtc.QSqlRecord_Append(@ptrCast(self.ptr), @ptrCast(field.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#replace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    /// ` pos: i32 `
    ///
    /// ` field: QSqlField `
    ///
    pub fn Replace(self: QSqlRecord, pos: i32, field: anytype) void {
        comptime _ = @TypeOf(field)._is_QSqlField;
        qtc.QSqlRecord_Replace(@ptrCast(self.ptr), @bitCast(pos), @ptrCast(field.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    /// ` pos: i32 `
    ///
    /// ` field: QSqlField `
    ///
    pub fn Insert(self: QSqlRecord, pos: i32, field: anytype) void {
        comptime _ = @TypeOf(field)._is_QSqlField;
        qtc.QSqlRecord_Insert(@ptrCast(self.ptr), @bitCast(pos), @ptrCast(field.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    /// ` pos: i32 `
    ///
    pub fn Remove(self: QSqlRecord, pos: i32) void {
        qtc.QSqlRecord_Remove(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    pub fn IsEmpty(self: QSqlRecord) bool {
        return qtc.QSqlRecord_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    /// ` name: []const u8 `
    ///
    pub fn Contains(self: QSqlRecord, name: []const u8) bool {
        return qtc.QSqlRecord_Contains(@ptrCast(self.ptr), name.ptr);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    pub fn Clear(self: QSqlRecord) void {
        qtc.QSqlRecord_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#clearValues)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    pub fn ClearValues(self: QSqlRecord) void {
        qtc.QSqlRecord_ClearValues(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    pub fn Count(self: QSqlRecord) i32 {
        return qtc.QSqlRecord_Count(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#keyValues)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlRecord `
    ///
    /// ` keyFields: QSqlRecord `
    ///
    pub fn KeyValues(self: QSqlRecord, keyFields: anytype) QSqlRecord {
        comptime _ = @TypeOf(keyFields)._is_QSqlRecord;
        return .{ .ptr = qtc.QSqlRecord_KeyValues(@ptrCast(self.ptr), @ptrCast(keyFields.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#dtor.QSqlRecord)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QSqlRecord `
    ///
    pub fn Delete(self: QSqlRecord) void {
        qtc.QSqlRecord_Delete(@ptrCast(self.ptr));
    }
};
