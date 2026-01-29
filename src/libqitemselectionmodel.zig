const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qitemselectionmodel_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html)
pub const qitemselectionrange = struct {
    /// New constructs a new QItemSelectionRange object.
    ///
    pub fn New() QtC.QItemSelectionRange {
        return qtc.QItemSelectionRange_new();
    }

    /// New2 constructs a new QItemSelectionRange object.
    ///
    /// ## Parameter(s):
    ///
    /// ` topL: QtC.QModelIndex `
    ///
    /// ` bottomR: QtC.QModelIndex `
    ///
    pub fn New2(topL: ?*anyopaque, bottomR: ?*anyopaque) QtC.QItemSelectionRange {
        return qtc.QItemSelectionRange_new2(@ptrCast(topL), @ptrCast(bottomR));
    }

    /// New3 constructs a new QItemSelectionRange object.
    ///
    /// ## Parameter(s):
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn New3(index: ?*anyopaque) QtC.QItemSelectionRange {
        return qtc.QItemSelectionRange_new3(@ptrCast(index));
    }

    /// New4 constructs a new QItemSelectionRange object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QItemSelectionRange `
    ///
    pub fn New4(param1: ?*anyopaque) QtC.QItemSelectionRange {
        return qtc.QItemSelectionRange_new4(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionRange `
    ///
    /// ` other: QtC.QItemSelectionRange `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QItemSelectionRange_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#top)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionRange `
    ///
    pub fn Top(self: ?*anyopaque) i32 {
        return qtc.QItemSelectionRange_Top(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#left)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionRange `
    ///
    pub fn Left(self: ?*anyopaque) i32 {
        return qtc.QItemSelectionRange_Left(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#bottom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionRange `
    ///
    pub fn Bottom(self: ?*anyopaque) i32 {
        return qtc.QItemSelectionRange_Bottom(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#right)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionRange `
    ///
    pub fn Right(self: ?*anyopaque) i32 {
        return qtc.QItemSelectionRange_Right(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionRange `
    ///
    pub fn Width(self: ?*anyopaque) i32 {
        return qtc.QItemSelectionRange_Width(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionRange `
    ///
    pub fn Height(self: ?*anyopaque) i32 {
        return qtc.QItemSelectionRange_Height(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#topLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionRange `
    ///
    pub fn TopLeft(self: ?*anyopaque) QtC.QPersistentModelIndex {
        return qtc.QItemSelectionRange_TopLeft(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#bottomRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionRange `
    ///
    pub fn BottomRight(self: ?*anyopaque) QtC.QPersistentModelIndex {
        return qtc.QItemSelectionRange_BottomRight(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionRange `
    ///
    pub fn Parent(self: ?*anyopaque) QtC.QModelIndex {
        return qtc.QItemSelectionRange_Parent(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#model)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionRange `
    ///
    pub fn Model(self: ?*anyopaque) QtC.QAbstractItemModel {
        return qtc.QItemSelectionRange_Model(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionRange `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn Contains(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QItemSelectionRange_Contains(@ptrCast(self), @ptrCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionRange `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parentIndex: QtC.QModelIndex `
    ///
    pub fn Contains2(self: ?*anyopaque, row: i32, column: i32, parentIndex: ?*anyopaque) bool {
        return qtc.QItemSelectionRange_Contains2(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(parentIndex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#intersects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionRange `
    ///
    /// ` other: QtC.QItemSelectionRange `
    ///
    pub fn Intersects(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QItemSelectionRange_Intersects(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#intersected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionRange `
    ///
    /// ` other: QtC.QItemSelectionRange `
    ///
    pub fn Intersected(self: ?*anyopaque, other: ?*anyopaque) QtC.QItemSelectionRange {
        return qtc.QItemSelectionRange_Intersected(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionRange `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QItemSelectionRange_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionRange `
    ///
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QItemSelectionRange_IsEmpty(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#indexes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionRange `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Indexes(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QModelIndex {
        const _arr: qtc.libqt_list = qtc.QItemSelectionRange_Indexes(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QModelIndex, _arr.len) catch @panic("qitemselectionrange.Indexes: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#dtor.QItemSelectionRange)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QItemSelectionRange `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QItemSelectionRange_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html)
pub const qitemselectionmodel = struct {
    /// New constructs a new QItemSelectionModel object.
    ///
    pub fn New() QtC.QItemSelectionModel {
        return qtc.QItemSelectionModel_new();
    }

    /// New2 constructs a new QItemSelectionModel object.
    ///
    /// ## Parameter(s):
    ///
    /// ` model: QtC.QAbstractItemModel `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn New2(model: ?*anyopaque, parent: ?*anyopaque) QtC.QItemSelectionModel {
        return qtc.QItemSelectionModel_new2(@ptrCast(model), @ptrCast(parent));
    }

    /// New3 constructs a new QItemSelectionModel object.
    ///
    /// ## Parameter(s):
    ///
    /// ` model: QtC.QAbstractItemModel `
    ///
    pub fn New3(model: ?*anyopaque) QtC.QItemSelectionModel {
        return qtc.QItemSelectionModel_new3(@ptrCast(model));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QItemSelectionModel_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.QItemSelectionModel_OnMetaObject(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    pub fn QBaseMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QItemSelectionModel_QBaseMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QItemSelectionModel_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` callback: *const fn (self: QtC.QItemSelectionModel, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QItemSelectionModel_OnMetacast(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn QBaseMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QItemSelectionModel_QBaseMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QItemSelectionModel_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` callback: *const fn (self: QtC.QItemSelectionModel, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QItemSelectionModel_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QItemSelectionModel_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr(s: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qitemselectionmodel.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    pub fn CurrentIndex(self: ?*anyopaque) QtC.QModelIndex {
        return qtc.QItemSelectionModel_CurrentIndex(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#isSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn IsSelected(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QItemSelectionModel_IsSelected(@ptrCast(self), @ptrCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#isRowSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` row: i32 `
    ///
    pub fn IsRowSelected(self: ?*anyopaque, row: i32) bool {
        return qtc.QItemSelectionModel_IsRowSelected(@ptrCast(self), @intCast(row));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#isColumnSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` column: i32 `
    ///
    pub fn IsColumnSelected(self: ?*anyopaque, column: i32) bool {
        return qtc.QItemSelectionModel_IsColumnSelected(@ptrCast(self), @intCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#rowIntersectsSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` row: i32 `
    ///
    pub fn RowIntersectsSelection(self: ?*anyopaque, row: i32) bool {
        return qtc.QItemSelectionModel_RowIntersectsSelection(@ptrCast(self), @intCast(row));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#columnIntersectsSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` column: i32 `
    ///
    pub fn ColumnIntersectsSelection(self: ?*anyopaque, column: i32) bool {
        return qtc.QItemSelectionModel_ColumnIntersectsSelection(@ptrCast(self), @intCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#hasSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    pub fn HasSelection(self: ?*anyopaque) bool {
        return qtc.QItemSelectionModel_HasSelection(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectedIndexes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectedIndexes(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QModelIndex {
        const _arr: qtc.libqt_list = qtc.QItemSelectionModel_SelectedIndexes(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QModelIndex, _arr.len) catch @panic("qitemselectionmodel.SelectedIndexes: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectedRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectedRows(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QModelIndex {
        const _arr: qtc.libqt_list = qtc.QItemSelectionModel_SelectedRows(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QModelIndex, _arr.len) catch @panic("qitemselectionmodel.SelectedRows: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectedColumns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectedColumns(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QModelIndex {
        const _arr: qtc.libqt_list = qtc.QItemSelectionModel_SelectedColumns(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QModelIndex, _arr.len) catch @panic("qitemselectionmodel.SelectedColumns: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#selection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    pub fn Selection(self: ?*anyopaque) QtC.QItemSelection {
        return qtc.QItemSelectionModel_Selection(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#model)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    pub fn Model(self: ?*anyopaque) QtC.QAbstractItemModel {
        return qtc.QItemSelectionModel_Model(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#model)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    pub fn Model2(self: ?*anyopaque) QtC.QAbstractItemModel {
        return qtc.QItemSelectionModel_Model2(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#setModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` model: QtC.QAbstractItemModel `
    ///
    pub fn SetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        qtc.QItemSelectionModel_SetModel(@ptrCast(self), @ptrCast(model));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#setCurrentIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` command: flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn SetCurrentIndex(self: ?*anyopaque, index: ?*anyopaque, command: i32) void {
        qtc.QItemSelectionModel_SetCurrentIndex(@ptrCast(self), @ptrCast(index), @intCast(command));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#setCurrentIndex)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` callback: *const fn (self: QtC.QItemSelectionModel, index: QtC.QModelIndex, command: flag of qitemselectionmodel_enums.SelectionFlag) callconv(.c) void `
    ///
    pub fn OnSetCurrentIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QItemSelectionModel_OnSetCurrentIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#setCurrentIndex)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` command: flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn QBaseSetCurrentIndex(self: ?*anyopaque, index: ?*anyopaque, command: i32) void {
        qtc.QItemSelectionModel_QBaseSetCurrentIndex(@ptrCast(self), @ptrCast(index), @intCast(command));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#select)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` command: flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn Select(self: ?*anyopaque, index: ?*anyopaque, command: i32) void {
        qtc.QItemSelectionModel_Select(@ptrCast(self), @ptrCast(index), @intCast(command));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#select)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` callback: *const fn (self: QtC.QItemSelectionModel, index: QtC.QModelIndex, command: flag of qitemselectionmodel_enums.SelectionFlag) callconv(.c) void `
    ///
    pub fn OnSelect(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QItemSelectionModel_OnSelect(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#select)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` command: flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn QBaseSelect(self: ?*anyopaque, index: ?*anyopaque, command: i32) void {
        qtc.QItemSelectionModel_QBaseSelect(@ptrCast(self), @ptrCast(index), @intCast(command));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#select)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` selection: QtC.QItemSelection `
    ///
    /// ` command: flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn Select2(self: ?*anyopaque, selection: ?*anyopaque, command: i32) void {
        qtc.QItemSelectionModel_Select2(@ptrCast(self), @ptrCast(selection), @intCast(command));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#select)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` callback: *const fn (self: QtC.QItemSelectionModel, selection: QtC.QItemSelection, command: flag of qitemselectionmodel_enums.SelectionFlag) callconv(.c) void `
    ///
    pub fn OnSelect2(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QItemSelectionModel_OnSelect2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#select)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` selection: QtC.QItemSelection `
    ///
    /// ` command: flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn QBaseSelect2(self: ?*anyopaque, selection: ?*anyopaque, command: i32) void {
        qtc.QItemSelectionModel_QBaseSelect2(@ptrCast(self), @ptrCast(selection), @intCast(command));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QItemSelectionModel_Clear(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#clear)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnClear(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QItemSelectionModel_OnClear(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#clear)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    pub fn QBaseClear(self: ?*anyopaque) void {
        qtc.QItemSelectionModel_QBaseClear(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#reset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    pub fn Reset(self: ?*anyopaque) void {
        qtc.QItemSelectionModel_Reset(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#reset)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnReset(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QItemSelectionModel_OnReset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#reset)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    pub fn QBaseReset(self: ?*anyopaque) void {
        qtc.QItemSelectionModel_QBaseReset(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#clearSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    pub fn ClearSelection(self: ?*anyopaque) void {
        qtc.QItemSelectionModel_ClearSelection(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#clearCurrentIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    pub fn ClearCurrentIndex(self: ?*anyopaque) void {
        qtc.QItemSelectionModel_ClearCurrentIndex(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#clearCurrentIndex)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnClearCurrentIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QItemSelectionModel_OnClearCurrentIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#clearCurrentIndex)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    pub fn QBaseClearCurrentIndex(self: ?*anyopaque) void {
        qtc.QItemSelectionModel_QBaseClearCurrentIndex(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` selected: QtC.QItemSelection `
    ///
    /// ` deselected: QtC.QItemSelection `
    ///
    pub fn SelectionChanged(self: ?*anyopaque, selected: ?*anyopaque, deselected: ?*anyopaque) void {
        qtc.QItemSelectionModel_SelectionChanged(@ptrCast(self), @ptrCast(selected), @ptrCast(deselected));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` callback: *const fn (self: QtC.QItemSelectionModel, selected: QtC.QItemSelection, deselected: QtC.QItemSelection) callconv(.c) void `
    ///
    pub fn OnSelectionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QItemSelectionModel_Connect_SelectionChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` current: QtC.QModelIndex `
    ///
    /// ` previous: QtC.QModelIndex `
    ///
    pub fn CurrentChanged(self: ?*anyopaque, current: ?*anyopaque, previous: ?*anyopaque) void {
        qtc.QItemSelectionModel_CurrentChanged(@ptrCast(self), @ptrCast(current), @ptrCast(previous));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` callback: *const fn (self: QtC.QItemSelectionModel, current: QtC.QModelIndex, previous: QtC.QModelIndex) callconv(.c) void `
    ///
    pub fn OnCurrentChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QItemSelectionModel_Connect_CurrentChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentRowChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` current: QtC.QModelIndex `
    ///
    /// ` previous: QtC.QModelIndex `
    ///
    pub fn CurrentRowChanged(self: ?*anyopaque, current: ?*anyopaque, previous: ?*anyopaque) void {
        qtc.QItemSelectionModel_CurrentRowChanged(@ptrCast(self), @ptrCast(current), @ptrCast(previous));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentRowChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` callback: *const fn (self: QtC.QItemSelectionModel, current: QtC.QModelIndex, previous: QtC.QModelIndex) callconv(.c) void `
    ///
    pub fn OnCurrentRowChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QItemSelectionModel_Connect_CurrentRowChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentColumnChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` current: QtC.QModelIndex `
    ///
    /// ` previous: QtC.QModelIndex `
    ///
    pub fn CurrentColumnChanged(self: ?*anyopaque, current: ?*anyopaque, previous: ?*anyopaque) void {
        qtc.QItemSelectionModel_CurrentColumnChanged(@ptrCast(self), @ptrCast(current), @ptrCast(previous));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentColumnChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` callback: *const fn (self: QtC.QItemSelectionModel, current: QtC.QModelIndex, previous: QtC.QModelIndex) callconv(.c) void `
    ///
    pub fn OnCurrentColumnChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QItemSelectionModel_Connect_CurrentColumnChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#modelChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` model: QtC.QAbstractItemModel `
    ///
    pub fn ModelChanged(self: ?*anyopaque, model: ?*anyopaque) void {
        qtc.QItemSelectionModel_ModelChanged(@ptrCast(self), @ptrCast(model));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#modelChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` callback: *const fn (self: QtC.QItemSelectionModel, model: QtC.QAbstractItemModel) callconv(.c) void `
    ///
    pub fn OnModelChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QItemSelectionModel_Connect_ModelChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#emitSelectionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` newSelection: QtC.QItemSelection `
    ///
    /// ` oldSelection: QtC.QItemSelection `
    ///
    pub fn EmitSelectionChanged(self: ?*anyopaque, newSelection: ?*anyopaque, oldSelection: ?*anyopaque) void {
        qtc.QItemSelectionModel_EmitSelectionChanged(@ptrCast(self), @ptrCast(newSelection), @ptrCast(oldSelection));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#emitSelectionChanged)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` callback: *const fn (self: QtC.QItemSelectionModel, newSelection: QtC.QItemSelection, oldSelection: QtC.QItemSelection) callconv(.c) void `
    ///
    pub fn OnEmitSelectionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QItemSelectionModel_OnEmitSelectionChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#emitSelectionChanged)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` newSelection: QtC.QItemSelection `
    ///
    /// ` oldSelection: QtC.QItemSelection `
    ///
    pub fn QBaseEmitSelectionChanged(self: ?*anyopaque, newSelection: ?*anyopaque, oldSelection: ?*anyopaque) void {
        qtc.QItemSelectionModel_QBaseEmitSelectionChanged(@ptrCast(self), @ptrCast(newSelection), @ptrCast(oldSelection));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(s: [:0]const u8, c: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qitemselectionmodel.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr3(s: [:0]const u8, c: [:0]const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qitemselectionmodel.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#isRowSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` row: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn IsRowSelected2(self: ?*anyopaque, row: i32, parent: ?*anyopaque) bool {
        return qtc.QItemSelectionModel_IsRowSelected2(@ptrCast(self), @intCast(row), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#isColumnSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn IsColumnSelected2(self: ?*anyopaque, column: i32, parent: ?*anyopaque) bool {
        return qtc.QItemSelectionModel_IsColumnSelected2(@ptrCast(self), @intCast(column), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#rowIntersectsSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` row: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn RowIntersectsSelection2(self: ?*anyopaque, row: i32, parent: ?*anyopaque) bool {
        return qtc.QItemSelectionModel_RowIntersectsSelection2(@ptrCast(self), @intCast(row), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#columnIntersectsSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn ColumnIntersectsSelection2(self: ?*anyopaque, column: i32, parent: ?*anyopaque) bool {
        return qtc.QItemSelectionModel_ColumnIntersectsSelection2(@ptrCast(self), @intCast(column), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectedRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` column: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectedRows1(self: ?*anyopaque, column: i32, allocator: std.mem.Allocator) []QtC.QModelIndex {
        const _arr: qtc.libqt_list = qtc.QItemSelectionModel_SelectedRows1(@ptrCast(self), @intCast(column));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QModelIndex, _arr.len) catch @panic("qitemselectionmodel.SelectedRows1: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectedColumns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` row: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectedColumns1(self: ?*anyopaque, row: i32, allocator: std.mem.Allocator) []QtC.QModelIndex {
        const _arr: qtc.libqt_list = qtc.QItemSelectionModel_SelectedColumns1(@ptrCast(self), @intCast(row));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QModelIndex, _arr.len) catch @panic("qitemselectionmodel.SelectedColumns1: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qitemselectionmodel.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` thread: QtC.QThread `
    ///
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: ?*anyopaque, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @intCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qitemselectionmodel.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` filterObj: QtC.QObject `
    ///
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` obj: QtC.QObject `
    ///
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: QtC.QMetaMethod `
    ///
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMetaObject__Connection `
    ///
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, name: [:0]const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: ?*anyopaque, name: [:0]const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qitemselectionmodel.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qitemselectionmodel.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` callback: *const fn (self: QtC.QItemSelectionModel) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: ?*anyopaque, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: ?*anyopaque, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self), @intCast(time), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` param1: QtC.QObject `
    ///
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` callback: *const fn (self: QtC.QItemSelectionModel, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QItemSelectionModel_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QItemSelectionModel_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemSelectionModel`
    ///
    /// ` callback: *const fn (self: QtC.QItemSelectionModel, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QItemSelectionModel_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QItemSelectionModel_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QItemSelectionModel_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemSelectionModel`
    ///
    /// ` callback: *const fn (self: QtC.QItemSelectionModel, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QItemSelectionModel_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QItemSelectionModel_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QItemSelectionModel_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemSelectionModel`
    ///
    /// ` callback: *const fn (self: QtC.QItemSelectionModel, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QItemSelectionModel_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QItemSelectionModel_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QItemSelectionModel_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemSelectionModel`
    ///
    /// ` callback: *const fn (self: QtC.QItemSelectionModel, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QItemSelectionModel_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QItemSelectionModel_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QItemSelectionModel_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemSelectionModel`
    ///
    /// ` callback: *const fn (self: QtC.QItemSelectionModel, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QItemSelectionModel_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QItemSelectionModel_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QItemSelectionModel_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemSelectionModel`
    ///
    /// ` callback: *const fn (self: QtC.QItemSelectionModel, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QItemSelectionModel_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QItemSelectionModel_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QItemSelectionModel_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemSelectionModel`
    ///
    /// ` callback: *const fn (self: QtC.QItemSelectionModel, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QItemSelectionModel_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QItemSelectionModel_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QItemSelectionModel_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemSelectionModel`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QItemSelectionModel_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QItemSelectionModel_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QItemSelectionModel_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemSelectionModel`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QItemSelectionModel_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QItemSelectionModel_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn QBaseReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QItemSelectionModel_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemSelectionModel`
    ///
    /// ` callback: *const fn (self: QtC.QItemSelectionModel, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QItemSelectionModel_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QItemSelectionModel_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QItemSelectionModel_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemSelectionModel`
    ///
    /// ` callback: *const fn (self: QtC.QItemSelectionModel, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QItemSelectionModel_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    /// ` callback: *const fn (self: QtC.QItemSelectionModel, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#dtor.QItemSelectionModel)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QItemSelectionModel `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QItemSelectionModel_Delete(@ptrCast(self));
    }
};

// Also inherits unprojectable QList<QItemSelectionRange>

/// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselection.html)
pub const qitemselection = struct {
    /// New constructs a new QItemSelection object.
    ///
    /// ## Parameter(s):
    ///
    /// ` topLeft: QtC.QModelIndex `
    ///
    /// ` bottomRight: QtC.QModelIndex `
    ///
    pub fn New(topLeft: ?*anyopaque, bottomRight: ?*anyopaque) QtC.QItemSelection {
        return qtc.QItemSelection_new(@ptrCast(topLeft), @ptrCast(bottomRight));
    }

    /// New2 constructs a new QItemSelection object.
    ///
    pub fn New2() QtC.QItemSelection {
        return qtc.QItemSelection_new2();
    }

    /// New3 constructs a new QItemSelection object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QItemSelection `
    ///
    pub fn New3(param1: ?*anyopaque) QtC.QItemSelection {
        return qtc.QItemSelection_new3(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselection.html#select)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelection `
    ///
    /// ` topLeft: QtC.QModelIndex `
    ///
    /// ` bottomRight: QtC.QModelIndex `
    ///
    pub fn Select(self: ?*anyopaque, topLeft: ?*anyopaque, bottomRight: ?*anyopaque) void {
        qtc.QItemSelection_Select(@ptrCast(self), @ptrCast(topLeft), @ptrCast(bottomRight));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselection.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelection `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn Contains(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QItemSelection_Contains(@ptrCast(self), @ptrCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselection.html#indexes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Indexes(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QModelIndex {
        const _arr: qtc.libqt_list = qtc.QItemSelection_Indexes(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QModelIndex, _arr.len) catch @panic("qitemselection.Indexes: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselection.html#merge)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QItemSelection `
    ///
    /// ` other: QtC.QItemSelection `
    ///
    /// ` command: flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn Merge(self: ?*anyopaque, other: ?*anyopaque, command: i32) void {
        qtc.QItemSelection_Merge(@ptrCast(self), @ptrCast(other), @intCast(command));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselection.html#split)
    ///
    /// ## Parameter(s):
    ///
    /// ` range: QtC.QItemSelectionRange `
    ///
    /// ` other: QtC.QItemSelectionRange `
    ///
    /// ` result: QtC.QItemSelection `
    ///
    pub fn Split(range: ?*anyopaque, other: ?*anyopaque, result: ?*anyopaque) void {
        qtc.QItemSelection_Split(@ptrCast(range), @ptrCast(other), @ptrCast(result));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselection.html#dtor.QItemSelection)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QItemSelection `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QItemSelection_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#public-types)
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
