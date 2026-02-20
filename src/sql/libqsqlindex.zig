const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlindex.html)
pub const qsqlindex = struct {
    /// New constructs a new QSqlIndex object.
    ///
    pub fn New() QtC.QSqlIndex {
        return qtc.QSqlIndex_new();
    }

    /// New2 constructs a new QSqlIndex object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QSqlIndex `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QSqlIndex {
        return qtc.QSqlIndex_new2(@ptrCast(other));
    }

    /// New3 constructs a new QSqlIndex object.
    ///
    /// ## Parameter(s):
    ///
    /// ` cursorName: []const u8 `
    ///
    pub fn New3(cursorName: []const u8) QtC.QSqlIndex {
        const cursorName_str = qtc.libqt_string{
            .len = cursorName.len,
            .data = cursorName.ptr,
        };

        return qtc.QSqlIndex_new3(cursorName_str);
    }

    /// New4 constructs a new QSqlIndex object.
    ///
    /// ## Parameter(s):
    ///
    /// ` cursorName: []const u8 `
    ///
    /// ` name: []const u8 `
    ///
    pub fn New4(cursorName: []const u8, name: []const u8) QtC.QSqlIndex {
        const cursorName_str = qtc.libqt_string{
            .len = cursorName.len,
            .data = cursorName.ptr,
        };
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };

        return qtc.QSqlIndex_new4(cursorName_str, name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlindex.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlIndex `
    ///
    /// ` other: QtC.QSqlIndex `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSqlIndex_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlindex.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlIndex `
    ///
    /// ` other: QtC.QSqlIndex `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSqlIndex_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlindex.html#setCursorName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlIndex `
    ///
    /// ` cursorName: []const u8 `
    ///
    pub fn SetCursorName(self: ?*anyopaque, cursorName: []const u8) void {
        const cursorName_str = qtc.libqt_string{
            .len = cursorName.len,
            .data = cursorName.ptr,
        };
        qtc.QSqlIndex_SetCursorName(@ptrCast(self), cursorName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlindex.html#cursorName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlIndex `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CursorName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlIndex_CursorName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlindex.CursorName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlindex.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlIndex `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QSqlIndex_SetName(@ptrCast(self), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlindex.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlIndex `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlIndex_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlindex.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlindex.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlIndex `
    ///
    /// ` field: QtC.QSqlField `
    ///
    pub fn Append(self: ?*anyopaque, field: ?*anyopaque) void {
        qtc.QSqlIndex_Append(@ptrCast(self), @ptrCast(field));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlindex.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlIndex `
    ///
    /// ` field: QtC.QSqlField `
    ///
    /// ` desc: bool `
    ///
    pub fn Append2(self: ?*anyopaque, field: ?*anyopaque, desc: bool) void {
        qtc.QSqlIndex_Append2(@ptrCast(self), @ptrCast(field), desc);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlindex.html#isDescending)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlIndex `
    ///
    /// ` i: i32 `
    ///
    pub fn IsDescending(self: ?*anyopaque, i: i32) bool {
        return qtc.QSqlIndex_IsDescending(@ptrCast(self), @bitCast(i));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlindex.html#setDescending)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlIndex `
    ///
    /// ` i: i32 `
    ///
    /// ` desc: bool `
    ///
    pub fn SetDescending(self: ?*anyopaque, i: i32, desc: bool) void {
        qtc.QSqlIndex_SetDescending(@ptrCast(self), @bitCast(i), desc);
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlIndex `
    ///
    /// ` other: QtC.QSqlRecord `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QSqlRecord_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlIndex `
    ///
    /// ` other: QtC.QSqlRecord `
    ///
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QSqlRecord_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlIndex `
    ///
    /// ` i: i32 `
    ///
    pub fn Value(self: ?*anyopaque, i: i32) QtC.QVariant {
        return qtc.QSqlRecord_Value(@ptrCast(self), @bitCast(i));
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlIndex `
    ///
    /// ` name: []const u8 `
    ///
    pub fn Value2(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        return qtc.QSqlRecord_Value2(@ptrCast(self), name.ptr);
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#setValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlIndex `
    ///
    /// ` i: i32 `
    ///
    /// ` val: QtC.QVariant `
    ///
    pub fn SetValue(self: ?*anyopaque, i: i32, val: ?*anyopaque) void {
        qtc.QSqlRecord_SetValue(@ptrCast(self), @bitCast(i), @ptrCast(val));
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#setValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlIndex `
    ///
    /// ` name: []const u8 `
    ///
    /// ` val: QtC.QVariant `
    ///
    pub fn SetValue2(self: ?*anyopaque, name: []const u8, val: ?*anyopaque) void {
        qtc.QSqlRecord_SetValue2(@ptrCast(self), name.ptr, @ptrCast(val));
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#setNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlIndex `
    ///
    /// ` i: i32 `
    ///
    pub fn SetNull(self: ?*anyopaque, i: i32) void {
        qtc.QSqlRecord_SetNull(@ptrCast(self), @bitCast(i));
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#setNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlIndex `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetNull2(self: ?*anyopaque, name: []const u8) void {
        qtc.QSqlRecord_SetNull2(@ptrCast(self), name.ptr);
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlIndex `
    ///
    /// ` i: i32 `
    ///
    pub fn IsNull(self: ?*anyopaque, i: i32) bool {
        return qtc.QSqlRecord_IsNull(@ptrCast(self), @bitCast(i));
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlIndex `
    ///
    /// ` name: []const u8 `
    ///
    pub fn IsNull2(self: ?*anyopaque, name: []const u8) bool {
        return qtc.QSqlRecord_IsNull2(@ptrCast(self), name.ptr);
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlIndex `
    ///
    /// ` name: []const u8 `
    ///
    pub fn IndexOf(self: ?*anyopaque, name: []const u8) i32 {
        return qtc.QSqlRecord_IndexOf(@ptrCast(self), name.ptr);
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#fieldName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlIndex `
    ///
    /// ` i: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FieldName(self: ?*anyopaque, i: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlRecord_FieldName(@ptrCast(self), @bitCast(i));
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
    /// ` self: QtC.QSqlIndex `
    ///
    /// ` i: i32 `
    ///
    pub fn Field(self: ?*anyopaque, i: i32) QtC.QSqlField {
        return qtc.QSqlRecord_Field(@ptrCast(self), @bitCast(i));
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#field)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlIndex `
    ///
    /// ` name: []const u8 `
    ///
    pub fn Field2(self: ?*anyopaque, name: []const u8) QtC.QSqlField {
        return qtc.QSqlRecord_Field2(@ptrCast(self), name.ptr);
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#isGenerated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlIndex `
    ///
    /// ` i: i32 `
    ///
    pub fn IsGenerated(self: ?*anyopaque, i: i32) bool {
        return qtc.QSqlRecord_IsGenerated(@ptrCast(self), @bitCast(i));
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#isGenerated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlIndex `
    ///
    /// ` name: []const u8 `
    ///
    pub fn IsGenerated2(self: ?*anyopaque, name: []const u8) bool {
        return qtc.QSqlRecord_IsGenerated2(@ptrCast(self), name.ptr);
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#setGenerated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlIndex `
    ///
    /// ` name: []const u8 `
    ///
    /// ` generated: bool `
    ///
    pub fn SetGenerated(self: ?*anyopaque, name: []const u8, generated: bool) void {
        qtc.QSqlRecord_SetGenerated(@ptrCast(self), name.ptr, generated);
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#setGenerated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlIndex `
    ///
    /// ` i: i32 `
    ///
    /// ` generated: bool `
    ///
    pub fn SetGenerated2(self: ?*anyopaque, i: i32, generated: bool) void {
        qtc.QSqlRecord_SetGenerated2(@ptrCast(self), @bitCast(i), generated);
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#replace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlIndex `
    ///
    /// ` pos: i32 `
    ///
    /// ` field: QtC.QSqlField `
    ///
    pub fn Replace(self: ?*anyopaque, pos: i32, field: ?*anyopaque) void {
        qtc.QSqlRecord_Replace(@ptrCast(self), @bitCast(pos), @ptrCast(field));
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlIndex `
    ///
    /// ` pos: i32 `
    ///
    /// ` field: QtC.QSqlField `
    ///
    pub fn Insert(self: ?*anyopaque, pos: i32, field: ?*anyopaque) void {
        qtc.QSqlRecord_Insert(@ptrCast(self), @bitCast(pos), @ptrCast(field));
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlIndex `
    ///
    /// ` pos: i32 `
    ///
    pub fn Remove(self: ?*anyopaque, pos: i32) void {
        qtc.QSqlRecord_Remove(@ptrCast(self), @bitCast(pos));
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlIndex `
    ///
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QSqlRecord_IsEmpty(@ptrCast(self));
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlIndex `
    ///
    /// ` name: []const u8 `
    ///
    pub fn Contains(self: ?*anyopaque, name: []const u8) bool {
        return qtc.QSqlRecord_Contains(@ptrCast(self), name.ptr);
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlIndex `
    ///
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QSqlRecord_Clear(@ptrCast(self));
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#clearValues)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlIndex `
    ///
    pub fn ClearValues(self: ?*anyopaque) void {
        qtc.QSqlRecord_ClearValues(@ptrCast(self));
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlIndex `
    ///
    pub fn Count(self: ?*anyopaque) i32 {
        return qtc.QSqlRecord_Count(@ptrCast(self));
    }

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#keyValues)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSqlIndex `
    ///
    /// ` keyFields: QtC.QSqlRecord `
    ///
    pub fn KeyValues(self: ?*anyopaque, keyFields: ?*anyopaque) QtC.QSqlRecord {
        return qtc.QSqlRecord_KeyValues(@ptrCast(self), @ptrCast(keyFields));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlindex.html#dtor.QSqlIndex)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QSqlIndex `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSqlIndex_Delete(@ptrCast(self));
    }
};
