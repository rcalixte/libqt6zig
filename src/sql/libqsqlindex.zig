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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSqlIndex object in C++ memory
    ///
    pub fn new() QSqlIndex {
        return .{ .ptr = qtc.QSqlIndex_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QSqlIndex object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QSqlIndex `
    ///
    pub fn new2(other: anytype) QSqlIndex {
        comptime _ = @TypeOf(other)._is_QSqlIndex;
        return .{ .ptr = qtc.QSqlIndex_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QSqlIndex object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _cursorName: []const u8 `
    ///
    pub fn new3(_cursorName: []const u8) QSqlIndex {
        const cursorName_str = qtc.libqt_string{
            .len = _cursorName.len,
            .data = _cursorName.ptr,
        };
        return .{ .ptr = qtc.QSqlIndex_new3(cursorName_str) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QSqlIndex object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _cursorName: []const u8 `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn new4(_cursorName: []const u8, _name: []const u8) QSqlIndex {
        const cursorName_str = qtc.libqt_string{
            .len = _cursorName.len,
            .data = _cursorName.ptr,
        };
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.QSqlIndex_new4(cursorName_str, name_str) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlindex.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` other: QSqlIndex `
    ///
    pub fn operatorAssign(self: QSqlIndex, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSqlIndex;
        qtc.QSqlIndex_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlindex.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` other: QSqlIndex `
    ///
    pub fn swap(self: QSqlIndex, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QSqlIndex;
        qtc.QSqlIndex_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setCursorName` instead
    ///
    pub const SetCursorName = setCursorName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlindex.html#setCursorName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` _cursorName: []const u8 `
    ///
    pub fn setCursorName(self: QSqlIndex, _cursorName: []const u8) void {
        const cursorName_str = qtc.libqt_string{
            .len = _cursorName.len,
            .data = _cursorName.ptr,
        };
        qtc.QSqlIndex_SetCursorName(@ptrCast(self.ptr), cursorName_str);
    }

    /// ### DEPRECATED: Use `cursorName` instead
    ///
    pub const CursorName = cursorName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlindex.html#cursorName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn cursorName(self: QSqlIndex, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlIndex_CursorName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSqlIndex.cursorName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlindex.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: QSqlIndex, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.QSqlIndex_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlindex.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QSqlIndex, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSqlIndex_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSqlIndex.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `append` instead
    ///
    pub const Append = append;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlindex.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` _field: QSqlField `
    ///
    pub fn append(self: QSqlIndex, _field: anytype) void {
        comptime _ = @TypeOf(_field)._is_QSqlField;
        qtc.QSqlIndex_Append(@ptrCast(self.ptr), @ptrCast(_field.ptr));
    }

    /// ### DEPRECATED: Use `append2` instead
    ///
    pub const Append2 = append2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlindex.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` _field: QSqlField `
    ///
    /// ` desc: bool `
    ///
    pub fn append2(self: QSqlIndex, _field: anytype, desc: bool) void {
        comptime _ = @TypeOf(_field)._is_QSqlField;
        qtc.QSqlIndex_Append2(@ptrCast(self.ptr), @ptrCast(_field.ptr), desc);
    }

    /// ### DEPRECATED: Use `isDescending` instead
    ///
    pub const IsDescending = isDescending;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlindex.html#isDescending)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` i: i32 `
    ///
    pub fn isDescending(self: QSqlIndex, i: i32) bool {
        return qtc.QSqlIndex_IsDescending(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### DEPRECATED: Use `setDescending` instead
    ///
    pub const SetDescending = setDescending;

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
    pub fn setDescending(self: QSqlIndex, i: i32, desc: bool) void {
        qtc.QSqlIndex_SetDescending(@ptrCast(self.ptr), @bitCast(i), desc);
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

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
    pub fn operatorEqual(self: QSqlIndex, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QSqlRecord;
        return qtc.QSqlRecord_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

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
    pub fn operatorNotEqual(self: QSqlIndex, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QSqlRecord;
        return qtc.QSqlRecord_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `value` instead
    ///
    pub const Value = value;

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
    pub fn value(self: QSqlIndex, i: i32) QVariant {
        return .{ .ptr = qtc.QSqlRecord_Value(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### DEPRECATED: Use `value2` instead
    ///
    pub const Value2 = value2;

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn value2(self: QSqlIndex, _name: []const u8) QVariant {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.QSqlRecord_Value2(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `setValue` instead
    ///
    pub const SetValue = setValue;

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
    pub fn setValue(self: QSqlIndex, i: i32, val: anytype) void {
        comptime _ = @TypeOf(val)._is_QVariant;
        qtc.QSqlRecord_SetValue(@ptrCast(self.ptr), @bitCast(i), @ptrCast(val.ptr));
    }

    /// ### DEPRECATED: Use `setValue2` instead
    ///
    pub const SetValue2 = setValue2;

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#setValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` val: QVariant `
    ///
    pub fn setValue2(self: QSqlIndex, _name: []const u8, val: anytype) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        comptime _ = @TypeOf(val)._is_QVariant;
        qtc.QSqlRecord_SetValue2(@ptrCast(self.ptr), name_str, @ptrCast(val.ptr));
    }

    /// ### DEPRECATED: Use `setNull` instead
    ///
    pub const SetNull = setNull;

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
    pub fn setNull(self: QSqlIndex, i: i32) void {
        qtc.QSqlRecord_SetNull(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### DEPRECATED: Use `setNull2` instead
    ///
    pub const SetNull2 = setNull2;

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#setNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setNull2(self: QSqlIndex, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.QSqlRecord_SetNull2(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

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
    pub fn isNull(self: QSqlIndex, i: i32) bool {
        return qtc.QSqlRecord_IsNull(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### DEPRECATED: Use `isNull2` instead
    ///
    pub const IsNull2 = isNull2;

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn isNull2(self: QSqlIndex, _name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return qtc.QSqlRecord_IsNull2(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `indexOf` instead
    ///
    pub const IndexOf = indexOf;

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn indexOf(self: QSqlIndex, _name: []const u8) i32 {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return qtc.QSqlRecord_IndexOf(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `fieldName` instead
    ///
    pub const FieldName = fieldName;

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
    pub fn fieldName(self: QSqlIndex, allocator: std.mem.Allocator, i: i32) []const u8 {
        var _str = qtc.QSqlRecord_FieldName(@ptrCast(self.ptr), @bitCast(i));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSqlIndex.fieldName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `field` instead
    ///
    pub const Field = field;

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
    pub fn field(self: QSqlIndex, i: i32) QSqlField {
        return .{ .ptr = qtc.QSqlRecord_Field(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### DEPRECATED: Use `field2` instead
    ///
    pub const Field2 = field2;

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#field)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn field2(self: QSqlIndex, _name: []const u8) QSqlField {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.QSqlRecord_Field2(@ptrCast(self.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `isGenerated` instead
    ///
    pub const IsGenerated = isGenerated;

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
    pub fn isGenerated(self: QSqlIndex, i: i32) bool {
        return qtc.QSqlRecord_IsGenerated(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### DEPRECATED: Use `isGenerated2` instead
    ///
    pub const IsGenerated2 = isGenerated2;

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#isGenerated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn isGenerated2(self: QSqlIndex, _name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return qtc.QSqlRecord_IsGenerated2(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `setGenerated` instead
    ///
    pub const SetGenerated = setGenerated;

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#setGenerated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` generated: bool `
    ///
    pub fn setGenerated(self: QSqlIndex, _name: []const u8, generated: bool) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.QSqlRecord_SetGenerated(@ptrCast(self.ptr), name_str, generated);
    }

    /// ### DEPRECATED: Use `setGenerated2` instead
    ///
    pub const SetGenerated2 = setGenerated2;

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
    pub fn setGenerated2(self: QSqlIndex, i: i32, generated: bool) void {
        qtc.QSqlRecord_SetGenerated2(@ptrCast(self.ptr), @bitCast(i), generated);
    }

    /// ### DEPRECATED: Use `replace` instead
    ///
    pub const Replace = replace;

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
    /// ` _field: QSqlField `
    ///
    pub fn replace(self: QSqlIndex, pos: i32, _field: anytype) void {
        comptime _ = @TypeOf(_field)._is_QSqlField;
        qtc.QSqlRecord_Replace(@ptrCast(self.ptr), @bitCast(pos), @ptrCast(_field.ptr));
    }

    /// ### DEPRECATED: Use `insert` instead
    ///
    pub const Insert = insert;

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
    /// ` _field: QSqlField `
    ///
    pub fn insert(self: QSqlIndex, pos: i32, _field: anytype) void {
        comptime _ = @TypeOf(_field)._is_QSqlField;
        qtc.QSqlRecord_Insert(@ptrCast(self.ptr), @bitCast(pos), @ptrCast(_field.ptr));
    }

    /// ### DEPRECATED: Use `remove` instead
    ///
    pub const Remove = remove;

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
    pub fn remove(self: QSqlIndex, pos: i32) void {
        qtc.QSqlRecord_Remove(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    pub fn isEmpty(self: QSqlIndex) bool {
        return qtc.QSqlRecord_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `contains` instead
    ///
    pub const Contains = contains;

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn contains(self: QSqlIndex, _name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return qtc.QSqlRecord_Contains(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    pub fn clear(self: QSqlIndex) void {
        qtc.QSqlRecord_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clearValues` instead
    ///
    pub const ClearValues = clearValues;

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#clearValues)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    pub fn clearValues(self: QSqlIndex) void {
        qtc.QSqlRecord_ClearValues(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `count` instead
    ///
    pub const Count = count;

    /// Inherited from QSqlRecord
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlrecord.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSqlIndex `
    ///
    pub fn count(self: QSqlIndex) i32 {
        return qtc.QSqlRecord_Count(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `keyValues` instead
    ///
    pub const KeyValues = keyValues;

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
    pub fn keyValues(self: QSqlIndex, keyFields: anytype) QSqlRecord {
        comptime _ = @TypeOf(keyFields)._is_QSqlRecord;
        return .{ .ptr = qtc.QSqlRecord_KeyValues(@ptrCast(self.ptr), @ptrCast(keyFields.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsqlindex.html#dtor.QSqlIndex)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSqlIndex `
    ///
    pub fn delete(self: QSqlIndex) void {
        qtc.QSqlIndex_Delete(@ptrCast(self.ptr));
    }
};
