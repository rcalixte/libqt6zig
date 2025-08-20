const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://doc.qt.io/qt-6/qsqlrecord.html
pub const qsqlrecord = struct {
    /// New constructs a new QSqlRecord object.
    ///
    ///
    pub fn New() QtC.QSqlRecord {
        return qtc.QSqlRecord_new();
    }

    /// New2 constructs a new QSqlRecord object.
    ///
    /// ``` other: QtC.QSqlRecord ```
    pub fn New2(other: ?*anyopaque) QtC.QSqlRecord {
        return qtc.QSqlRecord_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#operator-eq)
    ///
    /// ``` self: QtC.QSqlRecord, other: QtC.QSqlRecord ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSqlRecord_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#swap)
    ///
    /// ``` self: QtC.QSqlRecord, other: QtC.QSqlRecord ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSqlRecord_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#operator-eq-eq)
    ///
    /// ``` self: QtC.QSqlRecord, other: QtC.QSqlRecord ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QSqlRecord_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#operator-not-eq)
    ///
    /// ``` self: QtC.QSqlRecord, other: QtC.QSqlRecord ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QSqlRecord_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#value)
    ///
    /// ``` self: QtC.QSqlRecord, i: i32 ```
    pub fn Value(self: ?*anyopaque, i: i32) QtC.QVariant {
        return qtc.QSqlRecord_Value(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#value)
    ///
    /// ``` self: QtC.QSqlRecord, name: []const u8 ```
    pub fn Value2(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QSqlRecord_Value2(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#setValue)
    ///
    /// ``` self: QtC.QSqlRecord, i: i32, val: QtC.QVariant ```
    pub fn SetValue(self: ?*anyopaque, i: i32, val: ?*anyopaque) void {
        qtc.QSqlRecord_SetValue(@ptrCast(self), @intCast(i), @ptrCast(val));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#setValue)
    ///
    /// ``` self: QtC.QSqlRecord, name: []const u8, val: QtC.QVariant ```
    pub fn SetValue2(self: ?*anyopaque, name: []const u8, val: ?*anyopaque) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QSqlRecord_SetValue2(@ptrCast(self), name_str, @ptrCast(val));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#setNull)
    ///
    /// ``` self: QtC.QSqlRecord, i: i32 ```
    pub fn SetNull(self: ?*anyopaque, i: i32) void {
        qtc.QSqlRecord_SetNull(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#setNull)
    ///
    /// ``` self: QtC.QSqlRecord, name: []const u8 ```
    pub fn SetNull2(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QSqlRecord_SetNull2(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#isNull)
    ///
    /// ``` self: QtC.QSqlRecord, i: i32 ```
    pub fn IsNull(self: ?*anyopaque, i: i32) bool {
        return qtc.QSqlRecord_IsNull(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#isNull)
    ///
    /// ``` self: QtC.QSqlRecord, name: []const u8 ```
    pub fn IsNull2(self: ?*anyopaque, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QSqlRecord_IsNull2(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#indexOf)
    ///
    /// ``` self: QtC.QSqlRecord, name: []const u8 ```
    pub fn IndexOf(self: ?*anyopaque, name: []const u8) i32 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QSqlRecord_IndexOf(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#fieldName)
    ///
    /// ``` self: QtC.QSqlRecord, i: i32, allocator: std.mem.Allocator ```
    pub fn FieldName(self: ?*anyopaque, i: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSqlRecord_FieldName(@ptrCast(self), @intCast(i));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsqlrecord.FieldName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#field)
    ///
    /// ``` self: QtC.QSqlRecord, i: i32 ```
    pub fn Field(self: ?*anyopaque, i: i32) QtC.QSqlField {
        return qtc.QSqlRecord_Field(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#field)
    ///
    /// ``` self: QtC.QSqlRecord, name: []const u8 ```
    pub fn Field2(self: ?*anyopaque, name: []const u8) QtC.QSqlField {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QSqlRecord_Field2(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#isGenerated)
    ///
    /// ``` self: QtC.QSqlRecord, i: i32 ```
    pub fn IsGenerated(self: ?*anyopaque, i: i32) bool {
        return qtc.QSqlRecord_IsGenerated(@ptrCast(self), @intCast(i));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#isGenerated)
    ///
    /// ``` self: QtC.QSqlRecord, name: []const u8 ```
    pub fn IsGenerated2(self: ?*anyopaque, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QSqlRecord_IsGenerated2(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#setGenerated)
    ///
    /// ``` self: QtC.QSqlRecord, name: []const u8, generated: bool ```
    pub fn SetGenerated(self: ?*anyopaque, name: []const u8, generated: bool) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QSqlRecord_SetGenerated(@ptrCast(self), name_str, generated);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#setGenerated)
    ///
    /// ``` self: QtC.QSqlRecord, i: i32, generated: bool ```
    pub fn SetGenerated2(self: ?*anyopaque, i: i32, generated: bool) void {
        qtc.QSqlRecord_SetGenerated2(@ptrCast(self), @intCast(i), generated);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#append)
    ///
    /// ``` self: QtC.QSqlRecord, field: QtC.QSqlField ```
    pub fn Append(self: ?*anyopaque, field: ?*anyopaque) void {
        qtc.QSqlRecord_Append(@ptrCast(self), @ptrCast(field));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#replace)
    ///
    /// ``` self: QtC.QSqlRecord, pos: i32, field: QtC.QSqlField ```
    pub fn Replace(self: ?*anyopaque, pos: i32, field: ?*anyopaque) void {
        qtc.QSqlRecord_Replace(@ptrCast(self), @intCast(pos), @ptrCast(field));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#insert)
    ///
    /// ``` self: QtC.QSqlRecord, pos: i32, field: QtC.QSqlField ```
    pub fn Insert(self: ?*anyopaque, pos: i32, field: ?*anyopaque) void {
        qtc.QSqlRecord_Insert(@ptrCast(self), @intCast(pos), @ptrCast(field));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#remove)
    ///
    /// ``` self: QtC.QSqlRecord, pos: i32 ```
    pub fn Remove(self: ?*anyopaque, pos: i32) void {
        qtc.QSqlRecord_Remove(@ptrCast(self), @intCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#isEmpty)
    ///
    /// ``` self: QtC.QSqlRecord ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QSqlRecord_IsEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#contains)
    ///
    /// ``` self: QtC.QSqlRecord, name: []const u8 ```
    pub fn Contains(self: ?*anyopaque, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QSqlRecord_Contains(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#clear)
    ///
    /// ``` self: QtC.QSqlRecord ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QSqlRecord_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#clearValues)
    ///
    /// ``` self: QtC.QSqlRecord ```
    pub fn ClearValues(self: ?*anyopaque) void {
        qtc.QSqlRecord_ClearValues(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#count)
    ///
    /// ``` self: QtC.QSqlRecord ```
    pub fn Count(self: ?*anyopaque) i32 {
        return qtc.QSqlRecord_Count(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#keyValues)
    ///
    /// ``` self: QtC.QSqlRecord, keyFields: QtC.QSqlRecord ```
    pub fn KeyValues(self: ?*anyopaque, keyFields: ?*anyopaque) QtC.QSqlRecord {
        return qtc.QSqlRecord_KeyValues(@ptrCast(self), @ptrCast(keyFields));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsqlrecord.html#dtor.QSqlRecord)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QSqlRecord ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSqlRecord_Delete(@ptrCast(self));
    }
};
