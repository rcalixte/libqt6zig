const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://doc.qt.io/qt-6/qsqlindex.html
pub const qsqlindex = struct {
    /// New constructs a new QSqlIndex object.
    ///
    ///
    pub fn New() QtC.QSqlIndex {
        return qtc.QSqlIndex_new();
    }

    /// New2 constructs a new QSqlIndex object.
    ///
    /// ``` other: QtC.QSqlIndex ```
    pub fn New2(other: ?*anyopaque) QtC.QSqlIndex {
        return qtc.QSqlIndex_new2(@ptrCast(other));
    }

    /// New3 constructs a new QSqlIndex object.
    ///
    /// ``` cursorName: []const u8 ```
    pub fn New3(cursorName: []const u8) QtC.QSqlIndex {
        const cursorName_str = qtc.libqt_string{
            .len = cursorName.len,
            .data = cursorName.ptr,
        };

        return qtc.QSqlIndex_new3(cursorName_str);
    }

    /// New4 constructs a new QSqlIndex object.
    ///
    /// ``` cursorName: []const u8, name: []const u8 ```
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlindex.html#operator-eq)
    ///
    /// ``` self: QtC.QSqlIndex, other: QtC.QSqlIndex ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSqlIndex_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlindex.html#swap)
    ///
    /// ``` self: QtC.QSqlIndex, other: QtC.QSqlIndex ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSqlIndex_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlindex.html#setCursorName)
    ///
    /// ``` self: QtC.QSqlIndex, cursorName: []const u8 ```
    pub fn SetCursorName(self: ?*anyopaque, cursorName: []const u8) void {
        const cursorName_str = qtc.libqt_string{
            .len = cursorName.len,
            .data = cursorName.ptr,
        };
        qtc.QSqlIndex_SetCursorName(@ptrCast(self), cursorName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlindex.html#cursorName)
    ///
    /// ``` self: QtC.QSqlIndex, allocator: std.mem.Allocator ```
    pub fn CursorName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlIndex_CursorName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlindex.CursorName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlindex.html#setName)
    ///
    /// ``` self: QtC.QSqlIndex, name: []const u8 ```
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QSqlIndex_SetName(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlindex.html#name)
    ///
    /// ``` self: QtC.QSqlIndex, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlIndex_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlindex.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlindex.html#append)
    ///
    /// ``` self: QtC.QSqlIndex, field: QtC.QSqlField ```
    pub fn Append(self: ?*anyopaque, field: ?*anyopaque) void {
        qtc.QSqlIndex_Append(@ptrCast(self), @ptrCast(field));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlindex.html#append)
    ///
    /// ``` self: QtC.QSqlIndex, field: QtC.QSqlField, desc: bool ```
    pub fn Append2(self: ?*anyopaque, field: ?*anyopaque, desc: bool) void {
        qtc.QSqlIndex_Append2(@ptrCast(self), @ptrCast(field), desc);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlindex.html#isDescending)
    ///
    /// ``` self: QtC.QSqlIndex, i: i32 ```
    pub fn IsDescending(self: ?*anyopaque, i: i32) bool {
        return qtc.QSqlIndex_IsDescending(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlindex.html#setDescending)
    ///
    /// ``` self: QtC.QSqlIndex, i: i32, desc: bool ```
    pub fn SetDescending(self: ?*anyopaque, i: i32, desc: bool) void {
        qtc.QSqlIndex_SetDescending(@ptrCast(self), @intCast(i), desc);
    }

    /// Inherited from QSqlRecord
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#operator-eq-eq)
    ///
    /// ``` self: QtC.QSqlIndex, other: QtC.QSqlRecord ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QSqlRecord_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QSqlRecord
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#operator-not-eq)
    ///
    /// ``` self: QtC.QSqlIndex, other: QtC.QSqlRecord ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QSqlRecord_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// Inherited from QSqlRecord
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#value)
    ///
    /// ``` self: QtC.QSqlIndex, i: i32 ```
    pub fn Value(self: ?*anyopaque, i: i32) QtC.QVariant {
        return qtc.QSqlRecord_Value(@ptrCast(self), @intCast(i));
    }

    /// Inherited from QSqlRecord
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#value)
    ///
    /// ``` self: QtC.QSqlIndex, name: []const u8 ```
    pub fn Value2(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QSqlRecord_Value2(@ptrCast(self), name_str);
    }

    /// Inherited from QSqlRecord
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#setValue)
    ///
    /// ``` self: QtC.QSqlIndex, i: i32, val: QtC.QVariant ```
    pub fn SetValue(self: ?*anyopaque, i: i32, val: ?*anyopaque) void {
        qtc.QSqlRecord_SetValue(@ptrCast(self), @intCast(i), @ptrCast(val));
    }

    /// Inherited from QSqlRecord
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#setValue)
    ///
    /// ``` self: QtC.QSqlIndex, name: []const u8, val: QtC.QVariant ```
    pub fn SetValue2(self: ?*anyopaque, name: []const u8, val: ?*anyopaque) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QSqlRecord_SetValue2(@ptrCast(self), name_str, @ptrCast(val));
    }

    /// Inherited from QSqlRecord
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#setNull)
    ///
    /// ``` self: QtC.QSqlIndex, i: i32 ```
    pub fn SetNull(self: ?*anyopaque, i: i32) void {
        qtc.QSqlRecord_SetNull(@ptrCast(self), @intCast(i));
    }

    /// Inherited from QSqlRecord
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#setNull)
    ///
    /// ``` self: QtC.QSqlIndex, name: []const u8 ```
    pub fn SetNull2(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QSqlRecord_SetNull2(@ptrCast(self), name_str);
    }

    /// Inherited from QSqlRecord
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#isNull)
    ///
    /// ``` self: QtC.QSqlIndex, i: i32 ```
    pub fn IsNull(self: ?*anyopaque, i: i32) bool {
        return qtc.QSqlRecord_IsNull(@ptrCast(self), @intCast(i));
    }

    /// Inherited from QSqlRecord
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#isNull)
    ///
    /// ``` self: QtC.QSqlIndex, name: []const u8 ```
    pub fn IsNull2(self: ?*anyopaque, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QSqlRecord_IsNull2(@ptrCast(self), name_str);
    }

    /// Inherited from QSqlRecord
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#indexOf)
    ///
    /// ``` self: QtC.QSqlIndex, name: []const u8 ```
    pub fn IndexOf(self: ?*anyopaque, name: []const u8) i32 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QSqlRecord_IndexOf(@ptrCast(self), name_str);
    }

    /// Inherited from QSqlRecord
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#fieldName)
    ///
    /// ``` self: QtC.QSqlIndex, i: i32, allocator: std.mem.Allocator ```
    pub fn FieldName(self: ?*anyopaque, i: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlRecord_FieldName(@ptrCast(self), @intCast(i));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlindex.FieldName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QSqlRecord
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#field)
    ///
    /// ``` self: QtC.QSqlIndex, i: i32 ```
    pub fn Field(self: ?*anyopaque, i: i32) QtC.QSqlField {
        return qtc.QSqlRecord_Field(@ptrCast(self), @intCast(i));
    }

    /// Inherited from QSqlRecord
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#field)
    ///
    /// ``` self: QtC.QSqlIndex, name: []const u8 ```
    pub fn Field2(self: ?*anyopaque, name: []const u8) QtC.QSqlField {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QSqlRecord_Field2(@ptrCast(self), name_str);
    }

    /// Inherited from QSqlRecord
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#isGenerated)
    ///
    /// ``` self: QtC.QSqlIndex, i: i32 ```
    pub fn IsGenerated(self: ?*anyopaque, i: i32) bool {
        return qtc.QSqlRecord_IsGenerated(@ptrCast(self), @intCast(i));
    }

    /// Inherited from QSqlRecord
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#isGenerated)
    ///
    /// ``` self: QtC.QSqlIndex, name: []const u8 ```
    pub fn IsGenerated2(self: ?*anyopaque, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QSqlRecord_IsGenerated2(@ptrCast(self), name_str);
    }

    /// Inherited from QSqlRecord
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#setGenerated)
    ///
    /// ``` self: QtC.QSqlIndex, name: []const u8, generated: bool ```
    pub fn SetGenerated(self: ?*anyopaque, name: []const u8, generated: bool) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QSqlRecord_SetGenerated(@ptrCast(self), name_str, generated);
    }

    /// Inherited from QSqlRecord
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#setGenerated)
    ///
    /// ``` self: QtC.QSqlIndex, i: i32, generated: bool ```
    pub fn SetGenerated2(self: ?*anyopaque, i: i32, generated: bool) void {
        qtc.QSqlRecord_SetGenerated2(@ptrCast(self), @intCast(i), generated);
    }

    /// Inherited from QSqlRecord
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#replace)
    ///
    /// ``` self: QtC.QSqlIndex, pos: i32, field: QtC.QSqlField ```
    pub fn Replace(self: ?*anyopaque, pos: i32, field: ?*anyopaque) void {
        qtc.QSqlRecord_Replace(@ptrCast(self), @intCast(pos), @ptrCast(field));
    }

    /// Inherited from QSqlRecord
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#insert)
    ///
    /// ``` self: QtC.QSqlIndex, pos: i32, field: QtC.QSqlField ```
    pub fn Insert(self: ?*anyopaque, pos: i32, field: ?*anyopaque) void {
        qtc.QSqlRecord_Insert(@ptrCast(self), @intCast(pos), @ptrCast(field));
    }

    /// Inherited from QSqlRecord
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#remove)
    ///
    /// ``` self: QtC.QSqlIndex, pos: i32 ```
    pub fn Remove(self: ?*anyopaque, pos: i32) void {
        qtc.QSqlRecord_Remove(@ptrCast(self), @intCast(pos));
    }

    /// Inherited from QSqlRecord
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#isEmpty)
    ///
    /// ``` self: QtC.QSqlIndex ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QSqlRecord_IsEmpty(@ptrCast(self));
    }

    /// Inherited from QSqlRecord
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#contains)
    ///
    /// ``` self: QtC.QSqlIndex, name: []const u8 ```
    pub fn Contains(self: ?*anyopaque, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QSqlRecord_Contains(@ptrCast(self), name_str);
    }

    /// Inherited from QSqlRecord
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#clear)
    ///
    /// ``` self: QtC.QSqlIndex ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QSqlRecord_Clear(@ptrCast(self));
    }

    /// Inherited from QSqlRecord
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#clearValues)
    ///
    /// ``` self: QtC.QSqlIndex ```
    pub fn ClearValues(self: ?*anyopaque) void {
        qtc.QSqlRecord_ClearValues(@ptrCast(self));
    }

    /// Inherited from QSqlRecord
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#count)
    ///
    /// ``` self: QtC.QSqlIndex ```
    pub fn Count(self: ?*anyopaque) i32 {
        return qtc.QSqlRecord_Count(@ptrCast(self));
    }

    /// Inherited from QSqlRecord
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#keyValues)
    ///
    /// ``` self: QtC.QSqlIndex, keyFields: QtC.QSqlRecord ```
    pub fn KeyValues(self: ?*anyopaque, keyFields: ?*anyopaque) QtC.QSqlRecord {
        return qtc.QSqlRecord_KeyValues(@ptrCast(self), @ptrCast(keyFields));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlindex.html#dtor.QSqlIndex)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QSqlIndex ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSqlIndex_Delete(@ptrCast(self));
    }
};
