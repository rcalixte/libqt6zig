const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QSqlField = @import("libqt6").QSqlField;
const QSqlRecord = @import("libqt6").QSqlRecord;
const QVariant = @import("libqt6").QVariant;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlindex.html)
pub const QSqlIndex = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlindex.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSqlIndex,

    pub const _is_QSqlIndex = {};
    pub const _is_QSqlRecord = {};

    /// New constructs a new QSqlIndex object.
    ///
    pub fn New() QSqlIndex {
        return .{ .ptr = qtc.QSqlIndex_new() };
    }

    /// New2 constructs a new QSqlIndex object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSqlIndex `
    ///
    pub fn New2(other: anytype) QSqlIndex {
        comptime _ = @TypeOf(other)._is_QSqlIndex;
        return .{ .ptr = qtc.QSqlIndex_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QSqlIndex object.
    ///
    /// ## Parameter(s):
    ///
    /// ` cursorName: []const u8 `
    ///
    pub fn New3(cursorName: []const u8) QSqlIndex {
        const cursorName_str = qtc.libqt_string{
            .len = cursorName.len,
            .data = cursorName.ptr,
        };
        return .{ .ptr = qtc.QSqlIndex_new3(cursorName_str) };
    }

    /// New4 constructs a new QSqlIndex object.
    ///
    /// ## Parameter(s):
    ///
    /// ` cursorName: []const u8 `
    ///
    /// ` name: []const u8 `
    ///
    pub fn New4(cursorName: []const u8, name: []const u8) QSqlIndex {
        const cursorName_str = qtc.libqt_string{
            .len = cursorName.len,
            .data = cursorName.ptr,
        };
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QSqlIndex_new4(cursorName_str, name_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlindex.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` other: QSqlIndex `
    ///
    pub fn OperatorAssign(self: QSqlIndex, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSqlIndex;
        qtc.QSqlIndex_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlindex.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` other: QSqlIndex `
    ///
    pub fn Swap(self: QSqlIndex, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSqlIndex;
        qtc.QSqlIndex_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlindex.html#setCursorName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` cursorName: []const u8 `
    ///
    pub fn SetCursorName(self: QSqlIndex, cursorName: []const u8) void {
        const cursorName_str = qtc.libqt_string{
            .len = cursorName.len,
            .data = cursorName.ptr,
        };
        qtc.QSqlIndex_SetCursorName(@ptrCast(self.ptr), cursorName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlindex.html#cursorName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CursorName(self: QSqlIndex, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlIndex_CursorName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlindex.CursorName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlindex.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: QSqlIndex, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QSqlIndex_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlindex.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: QSqlIndex, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlIndex_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlindex.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlindex.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` field: QSqlField `
    ///
    pub fn Append(self: QSqlIndex, field: anytype) void {
        comptime _ = @TypeOf(field)._is_QSqlField;
        qtc.QSqlIndex_Append(@ptrCast(self.ptr), @ptrCast(field.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlindex.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` field: QSqlField `
    ///
    /// ` desc: bool `
    ///
    pub fn Append2(self: QSqlIndex, field: anytype, desc: bool) void {
        comptime _ = @TypeOf(field)._is_QSqlField;
        qtc.QSqlIndex_Append2(@ptrCast(self.ptr), @ptrCast(field.ptr), desc);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlindex.html#isDescending)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` i: i32 `
    ///
    pub fn IsDescending(self: QSqlIndex, i: i32) bool {
        return qtc.QSqlIndex_IsDescending(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlindex.html#setDescending)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` i: i32 `
    ///
    /// ` desc: bool `
    ///
    pub fn SetDescending(self: QSqlIndex, i: i32, desc: bool) void {
        qtc.QSqlIndex_SetDescending(@ptrCast(self.ptr), @bitCast(i), desc);
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` other: QSqlRecord `
    ///
    pub fn OperatorEqual(self: QSqlIndex, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QSqlRecord;
        return qtc.QSqlRecord_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` other: QSqlRecord `
    ///
    pub fn OperatorNotEqual(self: QSqlIndex, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QSqlRecord;
        return qtc.QSqlRecord_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` i: i32 `
    ///
    pub fn Value(self: QSqlIndex, i: i32) QVariant {
        return .{ .ptr = qtc.QSqlRecord_Value(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` name: []const u8 `
    ///
    pub fn Value2(self: QSqlIndex, name: []const u8) QVariant {
        return .{ .ptr = qtc.QSqlRecord_Value2(@ptrCast(self.ptr), name.ptr) };
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#setValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` i: i32 `
    ///
    /// ` val: QVariant `
    ///
    pub fn SetValue(self: QSqlIndex, i: i32, val: anytype) void {
        comptime _ = @TypeOf(val)._is_QVariant;
        qtc.QSqlRecord_SetValue(@ptrCast(self.ptr), @bitCast(i), @ptrCast(val.ptr));
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#setValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` name: []const u8 `
    ///
    /// ` val: QVariant `
    ///
    pub fn SetValue2(self: QSqlIndex, name: []const u8, val: anytype) void {
        comptime _ = @TypeOf(val)._is_QVariant;
        qtc.QSqlRecord_SetValue2(@ptrCast(self.ptr), name.ptr, @ptrCast(val.ptr));
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#setNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` i: i32 `
    ///
    pub fn SetNull(self: QSqlIndex, i: i32) void {
        qtc.QSqlRecord_SetNull(@ptrCast(self.ptr), @bitCast(i));
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#setNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetNull2(self: QSqlIndex, name: []const u8) void {
        qtc.QSqlRecord_SetNull2(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` i: i32 `
    ///
    pub fn IsNull(self: QSqlIndex, i: i32) bool {
        return qtc.QSqlRecord_IsNull(@ptrCast(self.ptr), @bitCast(i));
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` name: []const u8 `
    ///
    pub fn IsNull2(self: QSqlIndex, name: []const u8) bool {
        return qtc.QSqlRecord_IsNull2(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` name: []const u8 `
    ///
    pub fn IndexOf(self: QSqlIndex, name: []const u8) i32 {
        return qtc.QSqlRecord_IndexOf(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#fieldName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` i: i32 `
    ///
    pub fn FieldName(self: QSqlIndex, allocator: std.mem.Allocator, i: i32) []const u8 {
        var _str = qtc.QSqlRecord_FieldName(@ptrCast(self.ptr), @bitCast(i));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlindex.FieldName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#field)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` i: i32 `
    ///
    pub fn Field(self: QSqlIndex, i: i32) QSqlField {
        return .{ .ptr = qtc.QSqlRecord_Field(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#field)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` name: []const u8 `
    ///
    pub fn Field2(self: QSqlIndex, name: []const u8) QSqlField {
        return .{ .ptr = qtc.QSqlRecord_Field2(@ptrCast(self.ptr), name.ptr) };
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#isGenerated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` i: i32 `
    ///
    pub fn IsGenerated(self: QSqlIndex, i: i32) bool {
        return qtc.QSqlRecord_IsGenerated(@ptrCast(self.ptr), @bitCast(i));
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#isGenerated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` name: []const u8 `
    ///
    pub fn IsGenerated2(self: QSqlIndex, name: []const u8) bool {
        return qtc.QSqlRecord_IsGenerated2(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#setGenerated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` name: []const u8 `
    ///
    /// ` generated: bool `
    ///
    pub fn SetGenerated(self: QSqlIndex, name: []const u8, generated: bool) void {
        qtc.QSqlRecord_SetGenerated(@ptrCast(self.ptr), name.ptr, generated);
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#setGenerated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` i: i32 `
    ///
    /// ` generated: bool `
    ///
    pub fn SetGenerated2(self: QSqlIndex, i: i32, generated: bool) void {
        qtc.QSqlRecord_SetGenerated2(@ptrCast(self.ptr), @bitCast(i), generated);
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#replace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` pos: i32 `
    ///
    /// ` field: QSqlField `
    ///
    pub fn Replace(self: QSqlIndex, pos: i32, field: anytype) void {
        comptime _ = @TypeOf(field)._is_QSqlField;
        qtc.QSqlRecord_Replace(@ptrCast(self.ptr), @bitCast(pos), @ptrCast(field.ptr));
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` pos: i32 `
    ///
    /// ` field: QSqlField `
    ///
    pub fn Insert(self: QSqlIndex, pos: i32, field: anytype) void {
        comptime _ = @TypeOf(field)._is_QSqlField;
        qtc.QSqlRecord_Insert(@ptrCast(self.ptr), @bitCast(pos), @ptrCast(field.ptr));
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` pos: i32 `
    ///
    pub fn Remove(self: QSqlIndex, pos: i32) void {
        qtc.QSqlRecord_Remove(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    pub fn IsEmpty(self: QSqlIndex) bool {
        return qtc.QSqlRecord_IsEmpty(@ptrCast(self.ptr));
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` name: []const u8 `
    ///
    pub fn Contains(self: QSqlIndex, name: []const u8) bool {
        return qtc.QSqlRecord_Contains(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    pub fn Clear(self: QSqlIndex) void {
        qtc.QSqlRecord_Clear(@ptrCast(self.ptr));
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#clearValues)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    pub fn ClearValues(self: QSqlIndex) void {
        qtc.QSqlRecord_ClearValues(@ptrCast(self.ptr));
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    pub fn Count(self: QSqlIndex) i32 {
        return qtc.QSqlRecord_Count(@ptrCast(self.ptr));
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#keyValues)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` keyFields: QSqlRecord `
    ///
    pub fn KeyValues(self: QSqlIndex, keyFields: anytype) QSqlRecord {
        comptime _ = @TypeOf(keyFields)._is_QSqlRecord;
        return .{ .ptr = qtc.QSqlRecord_KeyValues(@ptrCast(self.ptr), @ptrCast(keyFields.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlindex.html#dtor.QSqlIndex)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QSqlIndex `
    ///
    pub fn Delete(self: QSqlIndex) void {
        qtc.QSqlIndex_Delete(@ptrCast(self.ptr));
    }
};
