const C = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qitemselectionrange.html
pub const qitemselectionrange = struct {
    /// New constructs a new QItemSelectionRange object.
    ///
    ///
    pub fn New() ?*C.QItemSelectionRange {
        return C.QItemSelectionRange_new();
    }

    /// New2 constructs a new QItemSelectionRange object.
    ///
    /// ``` topL: ?*C.QModelIndex, bottomR: ?*C.QModelIndex ```
    pub fn New2(topL: ?*anyopaque, bottomR: ?*anyopaque) ?*C.QItemSelectionRange {
        return C.QItemSelectionRange_new2(@ptrCast(topL), @ptrCast(bottomR));
    }

    /// New3 constructs a new QItemSelectionRange object.
    ///
    /// ``` index: ?*C.QModelIndex ```
    pub fn New3(index: ?*anyopaque) ?*C.QItemSelectionRange {
        return C.QItemSelectionRange_new3(@ptrCast(index));
    }

    /// New4 constructs a new QItemSelectionRange object.
    ///
    /// ``` param1: ?*C.QItemSelectionRange ```
    pub fn New4(param1: ?*anyopaque) ?*C.QItemSelectionRange {
        return C.QItemSelectionRange_new4(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionrange.html#swap)
    ///
    /// ``` self: ?*C.QItemSelectionRange, other: ?*C.QItemSelectionRange ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QItemSelectionRange_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionrange.html#top)
    ///
    /// ``` self: ?*C.QItemSelectionRange ```
    pub fn Top(self: ?*anyopaque) i32 {
        return C.QItemSelectionRange_Top(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionrange.html#left)
    ///
    /// ``` self: ?*C.QItemSelectionRange ```
    pub fn Left(self: ?*anyopaque) i32 {
        return C.QItemSelectionRange_Left(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionrange.html#bottom)
    ///
    /// ``` self: ?*C.QItemSelectionRange ```
    pub fn Bottom(self: ?*anyopaque) i32 {
        return C.QItemSelectionRange_Bottom(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionrange.html#right)
    ///
    /// ``` self: ?*C.QItemSelectionRange ```
    pub fn Right(self: ?*anyopaque) i32 {
        return C.QItemSelectionRange_Right(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionrange.html#width)
    ///
    /// ``` self: ?*C.QItemSelectionRange ```
    pub fn Width(self: ?*anyopaque) i32 {
        return C.QItemSelectionRange_Width(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionrange.html#height)
    ///
    /// ``` self: ?*C.QItemSelectionRange ```
    pub fn Height(self: ?*anyopaque) i32 {
        return C.QItemSelectionRange_Height(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionrange.html#topLeft)
    ///
    /// ``` self: ?*C.QItemSelectionRange ```
    pub fn TopLeft(self: ?*anyopaque) ?*C.QPersistentModelIndex {
        return C.QItemSelectionRange_TopLeft(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionrange.html#bottomRight)
    ///
    /// ``` self: ?*C.QItemSelectionRange ```
    pub fn BottomRight(self: ?*anyopaque) ?*C.QPersistentModelIndex {
        return C.QItemSelectionRange_BottomRight(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionrange.html#parent)
    ///
    /// ``` self: ?*C.QItemSelectionRange ```
    pub fn Parent(self: ?*anyopaque) ?*C.QModelIndex {
        return C.QItemSelectionRange_Parent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionrange.html#model)
    ///
    /// ``` self: ?*C.QItemSelectionRange ```
    pub fn Model(self: ?*anyopaque) ?*C.QAbstractItemModel {
        return C.QItemSelectionRange_Model(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionrange.html#contains)
    ///
    /// ``` self: ?*C.QItemSelectionRange, index: ?*C.QModelIndex ```
    pub fn Contains(self: ?*anyopaque, index: ?*anyopaque) bool {
        return C.QItemSelectionRange_Contains(@ptrCast(self), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionrange.html#contains)
    ///
    /// ``` self: ?*C.QItemSelectionRange, row: i32, column: i32, parentIndex: ?*C.QModelIndex ```
    pub fn Contains2(self: ?*anyopaque, row: i32, column: i32, parentIndex: ?*anyopaque) bool {
        return C.QItemSelectionRange_Contains2(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(parentIndex));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionrange.html#intersects)
    ///
    /// ``` self: ?*C.QItemSelectionRange, other: ?*C.QItemSelectionRange ```
    pub fn Intersects(self: ?*anyopaque, other: ?*anyopaque) bool {
        return C.QItemSelectionRange_Intersects(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionrange.html#intersected)
    ///
    /// ``` self: ?*C.QItemSelectionRange, other: ?*C.QItemSelectionRange ```
    pub fn Intersected(self: ?*anyopaque, other: ?*anyopaque) ?*C.QItemSelectionRange {
        return C.QItemSelectionRange_Intersected(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionrange.html#operator==)
    ///
    /// ``` self: ?*C.QItemSelectionRange, other: ?*C.QItemSelectionRange ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return C.QItemSelectionRange_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionrange.html#operator!=)
    ///
    /// ``` self: ?*C.QItemSelectionRange, other: ?*C.QItemSelectionRange ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return C.QItemSelectionRange_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionrange.html#isValid)
    ///
    /// ``` self: ?*C.QItemSelectionRange ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return C.QItemSelectionRange_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionrange.html#isEmpty)
    ///
    /// ``` self: ?*C.QItemSelectionRange ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return C.QItemSelectionRange_IsEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionrange.html#indexes)
    ///
    /// ``` self: ?*C.QItemSelectionRange, allocator: std.mem.Allocator ```
    pub fn Indexes(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QModelIndex {
        const _arr: C.struct_libqt_list = C.QItemSelectionRange_Indexes(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QModelIndex, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QItemSelectionRange ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QItemSelectionRange_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qitemselectionmodel.html
pub const qitemselectionmodel = struct {
    /// New constructs a new QItemSelectionModel object.
    ///
    ///
    pub fn New() ?*C.QItemSelectionModel {
        return C.QItemSelectionModel_new();
    }

    /// New2 constructs a new QItemSelectionModel object.
    ///
    /// ``` model: ?*C.QAbstractItemModel, parent: ?*C.QObject ```
    pub fn New2(model: ?*anyopaque, parent: ?*anyopaque) ?*C.QItemSelectionModel {
        return C.QItemSelectionModel_new2(@ptrCast(model), @ptrCast(parent));
    }

    /// New3 constructs a new QItemSelectionModel object.
    ///
    /// ``` model: ?*C.QAbstractItemModel ```
    pub fn New3(model: ?*anyopaque) ?*C.QItemSelectionModel {
        return C.QItemSelectionModel_new3(@ptrCast(model));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QItemSelectionModel ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QItemSelectionModel_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QItemSelectionModel, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QItemSelectionModel_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QItemSelectionModel, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QItemSelectionModel_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QItemSelectionModel, slot: fn (?*C.QItemSelectionModel, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QItemSelectionModel_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QItemSelectionModel, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QItemSelectionModel_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QItemSelectionModel_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentIndex)
    ///
    /// ``` self: ?*C.QItemSelectionModel ```
    pub fn CurrentIndex(self: ?*anyopaque) ?*C.QModelIndex {
        return C.QItemSelectionModel_CurrentIndex(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#isSelected)
    ///
    /// ``` self: ?*C.QItemSelectionModel, index: ?*C.QModelIndex ```
    pub fn IsSelected(self: ?*anyopaque, index: ?*anyopaque) bool {
        return C.QItemSelectionModel_IsSelected(@ptrCast(self), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#isRowSelected)
    ///
    /// ``` self: ?*C.QItemSelectionModel, row: i32 ```
    pub fn IsRowSelected(self: ?*anyopaque, row: i32) bool {
        return C.QItemSelectionModel_IsRowSelected(@ptrCast(self), @intCast(row));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#isColumnSelected)
    ///
    /// ``` self: ?*C.QItemSelectionModel, column: i32 ```
    pub fn IsColumnSelected(self: ?*anyopaque, column: i32) bool {
        return C.QItemSelectionModel_IsColumnSelected(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#rowIntersectsSelection)
    ///
    /// ``` self: ?*C.QItemSelectionModel, row: i32 ```
    pub fn RowIntersectsSelection(self: ?*anyopaque, row: i32) bool {
        return C.QItemSelectionModel_RowIntersectsSelection(@ptrCast(self), @intCast(row));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#columnIntersectsSelection)
    ///
    /// ``` self: ?*C.QItemSelectionModel, column: i32 ```
    pub fn ColumnIntersectsSelection(self: ?*anyopaque, column: i32) bool {
        return C.QItemSelectionModel_ColumnIntersectsSelection(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#hasSelection)
    ///
    /// ``` self: ?*C.QItemSelectionModel ```
    pub fn HasSelection(self: ?*anyopaque) bool {
        return C.QItemSelectionModel_HasSelection(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectedIndexes)
    ///
    /// ``` self: ?*C.QItemSelectionModel, allocator: std.mem.Allocator ```
    pub fn SelectedIndexes(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QModelIndex {
        const _arr: C.struct_libqt_list = C.QItemSelectionModel_SelectedIndexes(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QModelIndex, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectedRows)
    ///
    /// ``` self: ?*C.QItemSelectionModel, allocator: std.mem.Allocator ```
    pub fn SelectedRows(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QModelIndex {
        const _arr: C.struct_libqt_list = C.QItemSelectionModel_SelectedRows(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QModelIndex, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectedColumns)
    ///
    /// ``` self: ?*C.QItemSelectionModel, allocator: std.mem.Allocator ```
    pub fn SelectedColumns(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QModelIndex {
        const _arr: C.struct_libqt_list = C.QItemSelectionModel_SelectedColumns(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QModelIndex, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#selection)
    ///
    /// ``` self: ?*C.QItemSelectionModel ```
    pub fn Selection(self: ?*anyopaque) ?*C.QItemSelection {
        return C.QItemSelectionModel_Selection(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#model)
    ///
    /// ``` self: ?*C.QItemSelectionModel ```
    pub fn Model(self: ?*anyopaque) ?*C.QAbstractItemModel {
        return C.QItemSelectionModel_Model(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#model)
    ///
    /// ``` self: ?*C.QItemSelectionModel ```
    pub fn Model2(self: ?*anyopaque) ?*C.QAbstractItemModel {
        return C.QItemSelectionModel_Model2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#setModel)
    ///
    /// ``` self: ?*C.QItemSelectionModel, model: ?*C.QAbstractItemModel ```
    pub fn SetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        C.QItemSelectionModel_SetModel(@ptrCast(self), @ptrCast(model));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#setCurrentIndex)
    ///
    /// ``` self: ?*C.QItemSelectionModel, index: ?*C.QModelIndex, command: i32 ```
    pub fn SetCurrentIndex(self: ?*anyopaque, index: ?*anyopaque, command: i64) void {
        C.QItemSelectionModel_SetCurrentIndex(@ptrCast(self), @ptrCast(index), @intCast(command));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QItemSelectionModel, slot: fn (?*C.QItemSelectionModel, ?*C.QModelIndex, i32) callconv(.c) void ```
    pub fn OnSetCurrentIndex(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i64) callconv(.c) void) void {
        C.QItemSelectionModel_OnSetCurrentIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QItemSelectionModel, index: ?*C.QModelIndex, command: i32 ```
    pub fn QBaseSetCurrentIndex(self: ?*anyopaque, index: ?*anyopaque, command: i64) void {
        C.QItemSelectionModel_QBaseSetCurrentIndex(@ptrCast(self), @ptrCast(index), @intCast(command));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#select)
    ///
    /// ``` self: ?*C.QItemSelectionModel, index: ?*C.QModelIndex, command: i32 ```
    pub fn Select(self: ?*anyopaque, index: ?*anyopaque, command: i64) void {
        C.QItemSelectionModel_Select(@ptrCast(self), @ptrCast(index), @intCast(command));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QItemSelectionModel, slot: fn (?*C.QItemSelectionModel, ?*C.QModelIndex, i32) callconv(.c) void ```
    pub fn OnSelect(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i64) callconv(.c) void) void {
        C.QItemSelectionModel_OnSelect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QItemSelectionModel, index: ?*C.QModelIndex, command: i32 ```
    pub fn QBaseSelect(self: ?*anyopaque, index: ?*anyopaque, command: i64) void {
        C.QItemSelectionModel_QBaseSelect(@ptrCast(self), @ptrCast(index), @intCast(command));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#select)
    ///
    /// ``` self: ?*C.QItemSelectionModel, selection: ?*C.QItemSelection, command: i32 ```
    pub fn Select2(self: ?*anyopaque, selection: ?*anyopaque, command: i64) void {
        C.QItemSelectionModel_Select2(@ptrCast(self), @ptrCast(selection), @intCast(command));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QItemSelectionModel, slot: fn (?*C.QItemSelectionModel, ?*C.QItemSelection, i32) callconv(.c) void ```
    pub fn OnSelect2(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i64) callconv(.c) void) void {
        C.QItemSelectionModel_OnSelect2(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QItemSelectionModel, selection: ?*C.QItemSelection, command: i32 ```
    pub fn QBaseSelect2(self: ?*anyopaque, selection: ?*anyopaque, command: i64) void {
        C.QItemSelectionModel_QBaseSelect2(@ptrCast(self), @ptrCast(selection), @intCast(command));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#clear)
    ///
    /// ``` self: ?*C.QItemSelectionModel ```
    pub fn Clear(self: ?*anyopaque) void {
        C.QItemSelectionModel_Clear(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QItemSelectionModel, slot: fn () callconv(.c) void ```
    pub fn OnClear(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QItemSelectionModel_OnClear(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QItemSelectionModel ```
    pub fn QBaseClear(self: ?*anyopaque) void {
        C.QItemSelectionModel_QBaseClear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#reset)
    ///
    /// ``` self: ?*C.QItemSelectionModel ```
    pub fn Reset(self: ?*anyopaque) void {
        C.QItemSelectionModel_Reset(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QItemSelectionModel, slot: fn () callconv(.c) void ```
    pub fn OnReset(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QItemSelectionModel_OnReset(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QItemSelectionModel ```
    pub fn QBaseReset(self: ?*anyopaque) void {
        C.QItemSelectionModel_QBaseReset(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#clearSelection)
    ///
    /// ``` self: ?*C.QItemSelectionModel ```
    pub fn ClearSelection(self: ?*anyopaque) void {
        C.QItemSelectionModel_ClearSelection(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#clearCurrentIndex)
    ///
    /// ``` self: ?*C.QItemSelectionModel ```
    pub fn ClearCurrentIndex(self: ?*anyopaque) void {
        C.QItemSelectionModel_ClearCurrentIndex(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QItemSelectionModel, slot: fn () callconv(.c) void ```
    pub fn OnClearCurrentIndex(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QItemSelectionModel_OnClearCurrentIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QItemSelectionModel ```
    pub fn QBaseClearCurrentIndex(self: ?*anyopaque) void {
        C.QItemSelectionModel_QBaseClearCurrentIndex(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectionChanged)
    ///
    /// ``` self: ?*C.QItemSelectionModel, selected: ?*C.QItemSelection, deselected: ?*C.QItemSelection ```
    pub fn SelectionChanged(self: ?*anyopaque, selected: ?*anyopaque, deselected: ?*anyopaque) void {
        C.QItemSelectionModel_SelectionChanged(@ptrCast(self), @ptrCast(selected), @ptrCast(deselected));
    }

    /// ``` self: ?*C.QItemSelectionModel, slot: fn (?*C.QItemSelectionModel, ?*C.QItemSelection, ?*C.QItemSelection) callconv(.c) void ```
    pub fn OnSelectionChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QItemSelectionModel_Connect_SelectionChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentChanged)
    ///
    /// ``` self: ?*C.QItemSelectionModel, current: ?*C.QModelIndex, previous: ?*C.QModelIndex ```
    pub fn CurrentChanged(self: ?*anyopaque, current: ?*anyopaque, previous: ?*anyopaque) void {
        C.QItemSelectionModel_CurrentChanged(@ptrCast(self), @ptrCast(current), @ptrCast(previous));
    }

    /// ``` self: ?*C.QItemSelectionModel, slot: fn (?*C.QItemSelectionModel, ?*C.QModelIndex, ?*C.QModelIndex) callconv(.c) void ```
    pub fn OnCurrentChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QItemSelectionModel_Connect_CurrentChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentRowChanged)
    ///
    /// ``` self: ?*C.QItemSelectionModel, current: ?*C.QModelIndex, previous: ?*C.QModelIndex ```
    pub fn CurrentRowChanged(self: ?*anyopaque, current: ?*anyopaque, previous: ?*anyopaque) void {
        C.QItemSelectionModel_CurrentRowChanged(@ptrCast(self), @ptrCast(current), @ptrCast(previous));
    }

    /// ``` self: ?*C.QItemSelectionModel, slot: fn (?*C.QItemSelectionModel, ?*C.QModelIndex, ?*C.QModelIndex) callconv(.c) void ```
    pub fn OnCurrentRowChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QItemSelectionModel_Connect_CurrentRowChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentColumnChanged)
    ///
    /// ``` self: ?*C.QItemSelectionModel, current: ?*C.QModelIndex, previous: ?*C.QModelIndex ```
    pub fn CurrentColumnChanged(self: ?*anyopaque, current: ?*anyopaque, previous: ?*anyopaque) void {
        C.QItemSelectionModel_CurrentColumnChanged(@ptrCast(self), @ptrCast(current), @ptrCast(previous));
    }

    /// ``` self: ?*C.QItemSelectionModel, slot: fn (?*C.QItemSelectionModel, ?*C.QModelIndex, ?*C.QModelIndex) callconv(.c) void ```
    pub fn OnCurrentColumnChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QItemSelectionModel_Connect_CurrentColumnChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#modelChanged)
    ///
    /// ``` self: ?*C.QItemSelectionModel, model: ?*C.QAbstractItemModel ```
    pub fn ModelChanged(self: ?*anyopaque, model: ?*anyopaque) void {
        C.QItemSelectionModel_ModelChanged(@ptrCast(self), @ptrCast(model));
    }

    /// ``` self: ?*C.QItemSelectionModel, slot: fn (?*C.QItemSelectionModel, ?*C.QAbstractItemModel) callconv(.c) void ```
    pub fn OnModelChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QItemSelectionModel_Connect_ModelChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#emitSelectionChanged)
    ///
    /// ``` self: ?*C.QItemSelectionModel, newSelection: ?*C.QItemSelection, oldSelection: ?*C.QItemSelection ```
    pub fn EmitSelectionChanged(self: ?*anyopaque, newSelection: ?*anyopaque, oldSelection: ?*anyopaque) void {
        C.QItemSelectionModel_EmitSelectionChanged(@ptrCast(self), @ptrCast(newSelection), @ptrCast(oldSelection));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QItemSelectionModel, slot: fn (?*C.QItemSelectionModel, ?*C.QItemSelection, ?*C.QItemSelection) callconv(.c) void ```
    pub fn OnEmitSelectionChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QItemSelectionModel_OnEmitSelectionChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QItemSelectionModel, newSelection: ?*C.QItemSelection, oldSelection: ?*C.QItemSelection ```
    pub fn QBaseEmitSelectionChanged(self: ?*anyopaque, newSelection: ?*anyopaque, oldSelection: ?*anyopaque) void {
        C.QItemSelectionModel_QBaseEmitSelectionChanged(@ptrCast(self), @ptrCast(newSelection), @ptrCast(oldSelection));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QItemSelectionModel_Tr2(s_Cstring, c_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QItemSelectionModel_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#isRowSelected)
    ///
    /// ``` self: ?*C.QItemSelectionModel, row: i32, parent: ?*C.QModelIndex ```
    pub fn IsRowSelected2(self: ?*anyopaque, row: i32, parent: ?*anyopaque) bool {
        return C.QItemSelectionModel_IsRowSelected2(@ptrCast(self), @intCast(row), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#isColumnSelected)
    ///
    /// ``` self: ?*C.QItemSelectionModel, column: i32, parent: ?*C.QModelIndex ```
    pub fn IsColumnSelected2(self: ?*anyopaque, column: i32, parent: ?*anyopaque) bool {
        return C.QItemSelectionModel_IsColumnSelected2(@ptrCast(self), @intCast(column), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#rowIntersectsSelection)
    ///
    /// ``` self: ?*C.QItemSelectionModel, row: i32, parent: ?*C.QModelIndex ```
    pub fn RowIntersectsSelection2(self: ?*anyopaque, row: i32, parent: ?*anyopaque) bool {
        return C.QItemSelectionModel_RowIntersectsSelection2(@ptrCast(self), @intCast(row), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#columnIntersectsSelection)
    ///
    /// ``` self: ?*C.QItemSelectionModel, column: i32, parent: ?*C.QModelIndex ```
    pub fn ColumnIntersectsSelection2(self: ?*anyopaque, column: i32, parent: ?*anyopaque) bool {
        return C.QItemSelectionModel_ColumnIntersectsSelection2(@ptrCast(self), @intCast(column), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectedRows)
    ///
    /// ``` self: ?*C.QItemSelectionModel, column: i32, allocator: std.mem.Allocator ```
    pub fn SelectedRows1(self: ?*anyopaque, column: i32, allocator: std.mem.Allocator) []?*C.QModelIndex {
        const _arr: C.struct_libqt_list = C.QItemSelectionModel_SelectedRows1(@ptrCast(self), @intCast(column));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QModelIndex, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectedColumns)
    ///
    /// ``` self: ?*C.QItemSelectionModel, row: i32, allocator: std.mem.Allocator ```
    pub fn SelectedColumns1(self: ?*anyopaque, row: i32, allocator: std.mem.Allocator) []?*C.QModelIndex {
        const _arr: C.struct_libqt_list = C.QItemSelectionModel_SelectedColumns1(@ptrCast(self), @intCast(row));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QModelIndex, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QItemSelectionModel, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QObject_ObjectName(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: ?*C.QItemSelectionModel, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QItemSelectionModel ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QItemSelectionModel ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QItemSelectionModel ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QItemSelectionModel ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QItemSelectionModel, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QItemSelectionModel ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QItemSelectionModel, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QItemSelectionModel, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QItemSelectionModel, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QItemSelectionModel, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QObject {
        const _arr: C.struct_libqt_list = C.QObject_Children(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QObject, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: ?*C.QItemSelectionModel, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QItemSelectionModel, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QItemSelectionModel, obj: ?*C.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        C.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) ?*C.QMetaObject__Connection {
        return C.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QItemSelectionModel, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, member: ?*C.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return C.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: ?*C.QMetaObject__Connection ```
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return C.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: ?*C.QItemSelectionModel ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QItemSelectionModel ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QItemSelectionModel, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QItemSelectionModel, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QItemSelectionModel, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: C.struct_libqt_list = C.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QItemSelectionModel ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QItemSelectionModel ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QItemSelectionModel ```
    pub fn Destroyed(self: ?*anyopaque) void {
        C.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: ?*C.QItemSelectionModel ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QItemSelectionModel, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QItemSelectionModel ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QItemSelectionModel, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return C.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) ?*C.QMetaObject__Connection {
        return C.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QItemSelectionModel, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QItemSelectionModel, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QItemSelectionModel, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QItemSelectionModel_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QItemSelectionModel, event: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QItemSelectionModel_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QItemSelectionModel, slot: fn (?*C.QItemSelectionModel, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QItemSelectionModel_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QItemSelectionModel, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QItemSelectionModel_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QItemSelectionModel, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QItemSelectionModel_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QItemSelectionModel, slot: fn (?*C.QItemSelectionModel, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QItemSelectionModel_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QItemSelectionModel, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QItemSelectionModel_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QItemSelectionModel, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QItemSelectionModel_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QItemSelectionModel, slot: fn (?*C.QItemSelectionModel, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QItemSelectionModel_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QItemSelectionModel, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QItemSelectionModel_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QItemSelectionModel, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QItemSelectionModel_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QItemSelectionModel, slot: fn (?*C.QItemSelectionModel, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QItemSelectionModel_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QItemSelectionModel, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QItemSelectionModel_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QItemSelectionModel, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QItemSelectionModel_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QItemSelectionModel, slot: fn (?*C.QItemSelectionModel, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QItemSelectionModel_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QItemSelectionModel, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QItemSelectionModel_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QItemSelectionModel, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QItemSelectionModel_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QItemSelectionModel, slot: fn (?*C.QItemSelectionModel, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QItemSelectionModel_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QItemSelectionModel, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QItemSelectionModel_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QItemSelectionModel, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QItemSelectionModel_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QItemSelectionModel, slot: fn (?*C.QItemSelectionModel, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QItemSelectionModel_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QItemSelectionModel ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QItemSelectionModel_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QItemSelectionModel ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QItemSelectionModel_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QItemSelectionModel, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QItemSelectionModel_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QItemSelectionModel ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QItemSelectionModel_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QItemSelectionModel ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QItemSelectionModel_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QItemSelectionModel, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QItemSelectionModel_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QItemSelectionModel, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QItemSelectionModel_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QItemSelectionModel, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QItemSelectionModel_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QItemSelectionModel, slot: fn (?*C.QItemSelectionModel, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QItemSelectionModel_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QItemSelectionModel, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QItemSelectionModel_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QItemSelectionModel, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QItemSelectionModel_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QItemSelectionModel, slot: fn (?*C.QItemSelectionModel, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QItemSelectionModel_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QItemSelectionModel ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QItemSelectionModel_Delete(@ptrCast(self));
    }
};
// Also inherits unprojectable QList<QItemSelectionRange>

/// https://doc.qt.io/qt-6/qitemselection.html
pub const qitemselection = struct {
    /// New constructs a new QItemSelection object.
    ///
    /// ``` topLeft: ?*C.QModelIndex, bottomRight: ?*C.QModelIndex ```
    pub fn New(topLeft: ?*anyopaque, bottomRight: ?*anyopaque) ?*C.QItemSelection {
        return C.QItemSelection_new(@ptrCast(topLeft), @ptrCast(bottomRight));
    }

    /// New2 constructs a new QItemSelection object.
    ///
    ///
    pub fn New2() ?*C.QItemSelection {
        return C.QItemSelection_new2();
    }

    /// New3 constructs a new QItemSelection object.
    ///
    /// ``` param1: ?*C.QItemSelection ```
    pub fn New3(param1: ?*anyopaque) ?*C.QItemSelection {
        return C.QItemSelection_new3(@ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselection.html#select)
    ///
    /// ``` self: ?*C.QItemSelection, topLeft: ?*C.QModelIndex, bottomRight: ?*C.QModelIndex ```
    pub fn Select(self: ?*anyopaque, topLeft: ?*anyopaque, bottomRight: ?*anyopaque) void {
        C.QItemSelection_Select(@ptrCast(self), @ptrCast(topLeft), @ptrCast(bottomRight));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselection.html#contains)
    ///
    /// ``` self: ?*C.QItemSelection, index: ?*C.QModelIndex ```
    pub fn Contains(self: ?*anyopaque, index: ?*anyopaque) bool {
        return C.QItemSelection_Contains(@ptrCast(self), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselection.html#indexes)
    ///
    /// ``` self: ?*C.QItemSelection, allocator: std.mem.Allocator ```
    pub fn Indexes(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QModelIndex {
        const _arr: C.struct_libqt_list = C.QItemSelection_Indexes(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QModelIndex, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselection.html#merge)
    ///
    /// ``` self: ?*C.QItemSelection, other: ?*C.QItemSelection, command: i32 ```
    pub fn Merge(self: ?*anyopaque, other: ?*anyopaque, command: i64) void {
        C.QItemSelection_Merge(@ptrCast(self), @ptrCast(other), @intCast(command));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselection.html#split)
    ///
    /// ``` range: ?*C.QItemSelectionRange, other: ?*C.QItemSelectionRange, result: ?*C.QItemSelection ```
    pub fn Split(range: ?*anyopaque, other: ?*anyopaque, result: ?*anyopaque) void {
        C.QItemSelection_Split(@ptrCast(range), @ptrCast(other), @ptrCast(result));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QItemSelection ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QItemSelection_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qitemselectionmodel.html#types
pub const enums = struct {
    pub const SelectionFlag = enum {
        pub const NoUpdate: i32 = 0;
        pub const Clear: i32 = 1;
        pub const Select: i32 = 2;
        pub const Deselect: i32 = 4;
        pub const Toggle: i32 = 8;
        pub const Current: i32 = 16;
        pub const Rows: i32 = 32;
        pub const Columns: i32 = 64;
        pub const SelectCurrent: i32 = 18;
        pub const ToggleCurrent: i32 = 24;
        pub const ClearAndSelect: i32 = 3;
    };
};
