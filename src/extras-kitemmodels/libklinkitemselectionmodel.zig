const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qitemselectionmodel_enums = @import("../libqitemselectionmodel.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://api.kde.org/klinkitemselectionmodel.html
pub const klinkitemselectionmodel = struct {
    /// New constructs a new KLinkItemSelectionModel object.
    ///
    /// ``` targetModel: QtC.QAbstractItemModel, linkedItemSelectionModel: QtC.QItemSelectionModel ```
    pub fn New(targetModel: ?*anyopaque, linkedItemSelectionModel: ?*anyopaque) QtC.KLinkItemSelectionModel {
        return qtc.KLinkItemSelectionModel_new(@ptrCast(targetModel), @ptrCast(linkedItemSelectionModel));
    }

    /// New2 constructs a new KLinkItemSelectionModel object.
    ///
    ///
    pub fn New2() QtC.KLinkItemSelectionModel {
        return qtc.KLinkItemSelectionModel_new2();
    }

    /// New3 constructs a new KLinkItemSelectionModel object.
    ///
    /// ``` targetModel: QtC.QAbstractItemModel, linkedItemSelectionModel: QtC.QItemSelectionModel, parent: QtC.QObject ```
    pub fn New3(targetModel: ?*anyopaque, linkedItemSelectionModel: ?*anyopaque, parent: ?*anyopaque) QtC.KLinkItemSelectionModel {
        return qtc.KLinkItemSelectionModel_new3(@ptrCast(targetModel), @ptrCast(linkedItemSelectionModel), @ptrCast(parent));
    }

    /// New4 constructs a new KLinkItemSelectionModel object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New4(parent: ?*anyopaque) QtC.KLinkItemSelectionModel {
        return qtc.KLinkItemSelectionModel_new4(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KLinkItemSelectionModel_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KLinkItemSelectionModel, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KLinkItemSelectionModel_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KLinkItemSelectionModel, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KLinkItemSelectionModel_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, callback: *const fn (self: QtC.KLinkItemSelectionModel, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.KLinkItemSelectionModel_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KLinkItemSelectionModel_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KLinkItemSelectionModel_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klinkitemselectionmodel.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/klinkitemselectionmodel.html#linkedItemSelectionModel)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel ```
    pub fn LinkedItemSelectionModel(self: ?*anyopaque) QtC.QItemSelectionModel {
        return qtc.KLinkItemSelectionModel_LinkedItemSelectionModel(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/klinkitemselectionmodel.html#setLinkedItemSelectionModel)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, selectionModel: QtC.QItemSelectionModel ```
    pub fn SetLinkedItemSelectionModel(self: ?*anyopaque, selectionModel: ?*anyopaque) void {
        qtc.KLinkItemSelectionModel_SetLinkedItemSelectionModel(@ptrCast(self), @ptrCast(selectionModel));
    }

    /// [Qt documentation](https://api.kde.org/klinkitemselectionmodel.html#select)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, index: QtC.QModelIndex, command: flag of qitemselectionmodel_enums.SelectionFlag ```
    pub fn Select(self: ?*anyopaque, index: ?*anyopaque, command: i32) void {
        qtc.KLinkItemSelectionModel_Select(@ptrCast(self), @ptrCast(index), @intCast(command));
    }

    /// [Qt documentation](https://api.kde.org/klinkitemselectionmodel.html#select)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, callback: *const fn (self: QtC.KLinkItemSelectionModel, index: QtC.QModelIndex, command: flag of qitemselectionmodel_enums.SelectionFlag) callconv(.c) void ```
    pub fn OnSelect(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.KLinkItemSelectionModel_OnSelect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/klinkitemselectionmodel.html#select)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, index: QtC.QModelIndex, command: flag of qitemselectionmodel_enums.SelectionFlag ```
    pub fn QBaseSelect(self: ?*anyopaque, index: ?*anyopaque, command: i32) void {
        qtc.KLinkItemSelectionModel_QBaseSelect(@ptrCast(self), @ptrCast(index), @intCast(command));
    }

    /// [Qt documentation](https://api.kde.org/klinkitemselectionmodel.html#select)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, selection: QtC.QItemSelection, command: flag of qitemselectionmodel_enums.SelectionFlag ```
    pub fn Select2(self: ?*anyopaque, selection: ?*anyopaque, command: i32) void {
        qtc.KLinkItemSelectionModel_Select2(@ptrCast(self), @ptrCast(selection), @intCast(command));
    }

    /// [Qt documentation](https://api.kde.org/klinkitemselectionmodel.html#select)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, callback: *const fn (self: QtC.KLinkItemSelectionModel, selection: QtC.QItemSelection, command: flag of qitemselectionmodel_enums.SelectionFlag) callconv(.c) void ```
    pub fn OnSelect2(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.KLinkItemSelectionModel_OnSelect2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/klinkitemselectionmodel.html#select)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, selection: QtC.QItemSelection, command: flag of qitemselectionmodel_enums.SelectionFlag ```
    pub fn QBaseSelect2(self: ?*anyopaque, selection: ?*anyopaque, command: i32) void {
        qtc.KLinkItemSelectionModel_QBaseSelect2(@ptrCast(self), @ptrCast(selection), @intCast(command));
    }

    /// [Qt documentation](https://api.kde.org/klinkitemselectionmodel.html#linkedItemSelectionModelChanged)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel ```
    pub fn LinkedItemSelectionModelChanged(self: ?*anyopaque) void {
        qtc.KLinkItemSelectionModel_LinkedItemSelectionModelChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/klinkitemselectionmodel.html#linkedItemSelectionModelChanged)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, callback: *const fn (self: QtC.KLinkItemSelectionModel) callconv(.c) void ```
    pub fn OnLinkedItemSelectionModelChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KLinkItemSelectionModel_Connect_LinkedItemSelectionModelChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KLinkItemSelectionModel_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klinkitemselectionmodel.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KLinkItemSelectionModel_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klinkitemselectionmodel.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QItemSelectionModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentIndex)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel ```
    pub fn CurrentIndex(self: ?*anyopaque) QtC.QModelIndex {
        return qtc.QItemSelectionModel_CurrentIndex(@ptrCast(self));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#isSelected)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, index: QtC.QModelIndex ```
    pub fn IsSelected(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QItemSelectionModel_IsSelected(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#isRowSelected)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, row: i32 ```
    pub fn IsRowSelected(self: ?*anyopaque, row: i32) bool {
        return qtc.QItemSelectionModel_IsRowSelected(@ptrCast(self), @intCast(row));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#isColumnSelected)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, column: i32 ```
    pub fn IsColumnSelected(self: ?*anyopaque, column: i32) bool {
        return qtc.QItemSelectionModel_IsColumnSelected(@ptrCast(self), @intCast(column));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#rowIntersectsSelection)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, row: i32 ```
    pub fn RowIntersectsSelection(self: ?*anyopaque, row: i32) bool {
        return qtc.QItemSelectionModel_RowIntersectsSelection(@ptrCast(self), @intCast(row));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#columnIntersectsSelection)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, column: i32 ```
    pub fn ColumnIntersectsSelection(self: ?*anyopaque, column: i32) bool {
        return qtc.QItemSelectionModel_ColumnIntersectsSelection(@ptrCast(self), @intCast(column));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#hasSelection)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel ```
    pub fn HasSelection(self: ?*anyopaque) bool {
        return qtc.QItemSelectionModel_HasSelection(@ptrCast(self));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectedIndexes)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, allocator: std.mem.Allocator ```
    pub fn SelectedIndexes(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QModelIndex {
        const _arr: qtc.libqt_list = qtc.QItemSelectionModel_SelectedIndexes(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QModelIndex, _arr.len) catch @panic("klinkitemselectionmodel.SelectedIndexes: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QItemSelectionModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectedRows)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, allocator: std.mem.Allocator ```
    pub fn SelectedRows(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QModelIndex {
        const _arr: qtc.libqt_list = qtc.QItemSelectionModel_SelectedRows(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QModelIndex, _arr.len) catch @panic("klinkitemselectionmodel.SelectedRows: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QItemSelectionModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectedColumns)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, allocator: std.mem.Allocator ```
    pub fn SelectedColumns(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QModelIndex {
        const _arr: qtc.libqt_list = qtc.QItemSelectionModel_SelectedColumns(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QModelIndex, _arr.len) catch @panic("klinkitemselectionmodel.SelectedColumns: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QItemSelectionModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#selection)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel ```
    pub fn Selection(self: ?*anyopaque) QtC.QItemSelection {
        return qtc.QItemSelectionModel_Selection(@ptrCast(self));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#model)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel ```
    pub fn Model(self: ?*anyopaque) QtC.QAbstractItemModel {
        return qtc.QItemSelectionModel_Model(@ptrCast(self));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#model)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel ```
    pub fn Model2(self: ?*anyopaque) QtC.QAbstractItemModel {
        return qtc.QItemSelectionModel_Model2(@ptrCast(self));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#setModel)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, model: QtC.QAbstractItemModel ```
    pub fn SetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        qtc.QItemSelectionModel_SetModel(@ptrCast(self), @ptrCast(model));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#clearSelection)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel ```
    pub fn ClearSelection(self: ?*anyopaque) void {
        qtc.QItemSelectionModel_ClearSelection(@ptrCast(self));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectionChanged)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, selected: QtC.QItemSelection, deselected: QtC.QItemSelection ```
    pub fn SelectionChanged(self: ?*anyopaque, selected: ?*anyopaque, deselected: ?*anyopaque) void {
        qtc.QItemSelectionModel_SelectionChanged(@ptrCast(self), @ptrCast(selected), @ptrCast(deselected));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectionChanged)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, callback: *const fn (self: QtC.KLinkItemSelectionModel, selected: QtC.QItemSelection, deselected: QtC.QItemSelection) callconv(.c) void ```
    pub fn OnSelectionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QItemSelectionModel_Connect_SelectionChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentChanged)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, current: QtC.QModelIndex, previous: QtC.QModelIndex ```
    pub fn CurrentChanged(self: ?*anyopaque, current: ?*anyopaque, previous: ?*anyopaque) void {
        qtc.QItemSelectionModel_CurrentChanged(@ptrCast(self), @ptrCast(current), @ptrCast(previous));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentChanged)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, callback: *const fn (self: QtC.KLinkItemSelectionModel, current: QtC.QModelIndex, previous: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnCurrentChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QItemSelectionModel_Connect_CurrentChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentRowChanged)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, current: QtC.QModelIndex, previous: QtC.QModelIndex ```
    pub fn CurrentRowChanged(self: ?*anyopaque, current: ?*anyopaque, previous: ?*anyopaque) void {
        qtc.QItemSelectionModel_CurrentRowChanged(@ptrCast(self), @ptrCast(current), @ptrCast(previous));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentRowChanged)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, callback: *const fn (self: QtC.KLinkItemSelectionModel, current: QtC.QModelIndex, previous: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnCurrentRowChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QItemSelectionModel_Connect_CurrentRowChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentColumnChanged)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, current: QtC.QModelIndex, previous: QtC.QModelIndex ```
    pub fn CurrentColumnChanged(self: ?*anyopaque, current: ?*anyopaque, previous: ?*anyopaque) void {
        qtc.QItemSelectionModel_CurrentColumnChanged(@ptrCast(self), @ptrCast(current), @ptrCast(previous));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentColumnChanged)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, callback: *const fn (self: QtC.KLinkItemSelectionModel, current: QtC.QModelIndex, previous: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnCurrentColumnChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QItemSelectionModel_Connect_CurrentColumnChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#modelChanged)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, model: QtC.QAbstractItemModel ```
    pub fn ModelChanged(self: ?*anyopaque, model: ?*anyopaque) void {
        qtc.QItemSelectionModel_ModelChanged(@ptrCast(self), @ptrCast(model));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#modelChanged)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, callback: *const fn (self: QtC.KLinkItemSelectionModel, model: QtC.QAbstractItemModel) callconv(.c) void ```
    pub fn OnModelChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QItemSelectionModel_Connect_ModelChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#isRowSelected)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, row: i32, parent: QtC.QModelIndex ```
    pub fn IsRowSelected2(self: ?*anyopaque, row: i32, parent: ?*anyopaque) bool {
        return qtc.QItemSelectionModel_IsRowSelected2(@ptrCast(self), @intCast(row), @ptrCast(parent));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#isColumnSelected)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, column: i32, parent: QtC.QModelIndex ```
    pub fn IsColumnSelected2(self: ?*anyopaque, column: i32, parent: ?*anyopaque) bool {
        return qtc.QItemSelectionModel_IsColumnSelected2(@ptrCast(self), @intCast(column), @ptrCast(parent));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#rowIntersectsSelection)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, row: i32, parent: QtC.QModelIndex ```
    pub fn RowIntersectsSelection2(self: ?*anyopaque, row: i32, parent: ?*anyopaque) bool {
        return qtc.QItemSelectionModel_RowIntersectsSelection2(@ptrCast(self), @intCast(row), @ptrCast(parent));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#columnIntersectsSelection)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, column: i32, parent: QtC.QModelIndex ```
    pub fn ColumnIntersectsSelection2(self: ?*anyopaque, column: i32, parent: ?*anyopaque) bool {
        return qtc.QItemSelectionModel_ColumnIntersectsSelection2(@ptrCast(self), @intCast(column), @ptrCast(parent));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectedRows)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, column: i32, allocator: std.mem.Allocator ```
    pub fn SelectedRows1(self: ?*anyopaque, column: i32, allocator: std.mem.Allocator) []QtC.QModelIndex {
        const _arr: qtc.libqt_list = qtc.QItemSelectionModel_SelectedRows1(@ptrCast(self), @intCast(column));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QModelIndex, _arr.len) catch @panic("klinkitemselectionmodel.SelectedRows1: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QItemSelectionModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectedColumns)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, row: i32, allocator: std.mem.Allocator ```
    pub fn SelectedColumns1(self: ?*anyopaque, row: i32, allocator: std.mem.Allocator) []QtC.QModelIndex {
        const _arr: qtc.libqt_list = qtc.QItemSelectionModel_SelectedColumns1(@ptrCast(self), @intCast(row));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QModelIndex, _arr.len) catch @panic("klinkitemselectionmodel.SelectedColumns1: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klinkitemselectionmodel.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("klinkitemselectionmodel.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("klinkitemselectionmodel.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("klinkitemselectionmodel.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, callback: *const fn (self: QtC.KLinkItemSelectionModel) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, callback: *const fn (self: QtC.KLinkItemSelectionModel, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#setCurrentIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, index: QtC.QModelIndex, command: flag of qitemselectionmodel_enums.SelectionFlag ```
    pub fn SetCurrentIndex(self: ?*anyopaque, index: ?*anyopaque, command: i32) void {
        qtc.KLinkItemSelectionModel_SetCurrentIndex(@ptrCast(self), @ptrCast(index), @intCast(command));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#setCurrentIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, index: QtC.QModelIndex, command: flag of qitemselectionmodel_enums.SelectionFlag ```
    pub fn QBaseSetCurrentIndex(self: ?*anyopaque, index: ?*anyopaque, command: i32) void {
        qtc.KLinkItemSelectionModel_QBaseSetCurrentIndex(@ptrCast(self), @ptrCast(index), @intCast(command));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#setCurrentIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, callback: *const fn (self: QtC.KLinkItemSelectionModel, index: QtC.QModelIndex, command: flag of qitemselectionmodel_enums.SelectionFlag) callconv(.c) void ```
    pub fn OnSetCurrentIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.KLinkItemSelectionModel_OnSetCurrentIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#clear)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.KLinkItemSelectionModel_Clear(@ptrCast(self));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#clear)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel ```
    pub fn QBaseClear(self: ?*anyopaque) void {
        qtc.KLinkItemSelectionModel_QBaseClear(@ptrCast(self));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#clear)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, callback: *const fn () callconv(.c) void ```
    pub fn OnClear(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KLinkItemSelectionModel_OnClear(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#reset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel ```
    pub fn Reset(self: ?*anyopaque) void {
        qtc.KLinkItemSelectionModel_Reset(@ptrCast(self));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#reset)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel ```
    pub fn QBaseReset(self: ?*anyopaque) void {
        qtc.KLinkItemSelectionModel_QBaseReset(@ptrCast(self));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#reset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, callback: *const fn () callconv(.c) void ```
    pub fn OnReset(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KLinkItemSelectionModel_OnReset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#clearCurrentIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel ```
    pub fn ClearCurrentIndex(self: ?*anyopaque) void {
        qtc.KLinkItemSelectionModel_ClearCurrentIndex(@ptrCast(self));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#clearCurrentIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel ```
    pub fn QBaseClearCurrentIndex(self: ?*anyopaque) void {
        qtc.KLinkItemSelectionModel_QBaseClearCurrentIndex(@ptrCast(self));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#clearCurrentIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, callback: *const fn () callconv(.c) void ```
    pub fn OnClearCurrentIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KLinkItemSelectionModel_OnClearCurrentIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KLinkItemSelectionModel_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KLinkItemSelectionModel_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, callback: *const fn (self: QtC.KLinkItemSelectionModel, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KLinkItemSelectionModel_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KLinkItemSelectionModel_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KLinkItemSelectionModel_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, callback: *const fn (self: QtC.KLinkItemSelectionModel, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KLinkItemSelectionModel_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KLinkItemSelectionModel_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KLinkItemSelectionModel_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, callback: *const fn (self: QtC.KLinkItemSelectionModel, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KLinkItemSelectionModel_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KLinkItemSelectionModel_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KLinkItemSelectionModel_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, callback: *const fn (self: QtC.KLinkItemSelectionModel, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KLinkItemSelectionModel_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KLinkItemSelectionModel_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KLinkItemSelectionModel_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, callback: *const fn (self: QtC.KLinkItemSelectionModel, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KLinkItemSelectionModel_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KLinkItemSelectionModel_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KLinkItemSelectionModel_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, callback: *const fn (self: QtC.KLinkItemSelectionModel, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KLinkItemSelectionModel_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KLinkItemSelectionModel_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KLinkItemSelectionModel_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, callback: *const fn (self: QtC.KLinkItemSelectionModel, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KLinkItemSelectionModel_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#emitSelectionChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, newSelection: QtC.QItemSelection, oldSelection: QtC.QItemSelection ```
    pub fn EmitSelectionChanged(self: ?*anyopaque, newSelection: ?*anyopaque, oldSelection: ?*anyopaque) void {
        qtc.KLinkItemSelectionModel_EmitSelectionChanged(@ptrCast(self), @ptrCast(newSelection), @ptrCast(oldSelection));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#emitSelectionChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, newSelection: QtC.QItemSelection, oldSelection: QtC.QItemSelection ```
    pub fn QBaseEmitSelectionChanged(self: ?*anyopaque, newSelection: ?*anyopaque, oldSelection: ?*anyopaque) void {
        qtc.KLinkItemSelectionModel_QBaseEmitSelectionChanged(@ptrCast(self), @ptrCast(newSelection), @ptrCast(oldSelection));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qitemselectionmodel.html#emitSelectionChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, callback: *const fn (self: QtC.KLinkItemSelectionModel, newSelection: QtC.QItemSelection, oldSelection: QtC.QItemSelection) callconv(.c) void ```
    pub fn OnEmitSelectionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KLinkItemSelectionModel_OnEmitSelectionChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KLinkItemSelectionModel_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KLinkItemSelectionModel_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, callback: *const fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.KLinkItemSelectionModel_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KLinkItemSelectionModel_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KLinkItemSelectionModel_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KLinkItemSelectionModel_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KLinkItemSelectionModel_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KLinkItemSelectionModel_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, callback: *const fn (self: QtC.KLinkItemSelectionModel, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KLinkItemSelectionModel_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KLinkItemSelectionModel_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KLinkItemSelectionModel_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, callback: *const fn (self: QtC.KLinkItemSelectionModel, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KLinkItemSelectionModel_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KLinkItemSelectionModel, callback: *const fn (self: QtC.KLinkItemSelectionModel, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/klinkitemselectionmodel.html#dtor.KLinkItemSelectionModel)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KLinkItemSelectionModel ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KLinkItemSelectionModel_Delete(@ptrCast(self));
    }
};
