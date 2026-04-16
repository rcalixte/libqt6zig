const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAbstractItemModel = @import("libqt6").QAbstractItemModel;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QItemSelection = @import("libqt6").QItemSelection;
const QItemSelectionModel = @import("libqt6").QItemSelectionModel;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QModelIndex = @import("libqt6").QModelIndex;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const kbreadcrumbselectionmodel_enums = enums;
const qitemselectionmodel_enums = @import("../libqitemselectionmodel.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kbreadcrumbselectionmodel.html)
pub const KBreadcrumbSelectionModel = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kbreadcrumbselectionmodel.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KBreadcrumbSelectionModel,

    pub const _is_KBreadcrumbSelectionModel = {};
    pub const _is_QItemSelectionModel = {};
    pub const _is_QObject = {};

    /// New constructs a new KBreadcrumbSelectionModel object.
    ///
    /// ## Parameter(s):
    ///
    /// ` selectionModel: QItemSelectionModel `
    ///
    pub fn New(selectionModel: anytype) KBreadcrumbSelectionModel {
        comptime _ = @TypeOf(selectionModel)._is_QItemSelectionModel;
        return .{ .ptr = qtc.KBreadcrumbSelectionModel_new(@ptrCast(selectionModel.ptr)) };
    }

    /// New2 constructs a new KBreadcrumbSelectionModel object.
    ///
    /// ## Parameter(s):
    ///
    /// ` selectionModel: QItemSelectionModel `
    ///
    /// ` target: kbreadcrumbselectionmodel_enums.BreadcrumbTarget `
    ///
    pub fn New2(selectionModel: anytype, target: i32) KBreadcrumbSelectionModel {
        comptime _ = @TypeOf(selectionModel)._is_QItemSelectionModel;
        return .{ .ptr = qtc.KBreadcrumbSelectionModel_new2(@ptrCast(selectionModel.ptr), @bitCast(target)) };
    }

    /// New3 constructs a new KBreadcrumbSelectionModel object.
    ///
    /// ## Parameter(s):
    ///
    /// ` selectionModel: QItemSelectionModel `
    ///
    /// ` parent: QObject `
    ///
    pub fn New3(selectionModel: anytype, parent: anytype) KBreadcrumbSelectionModel {
        comptime _ = @TypeOf(selectionModel)._is_QItemSelectionModel;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KBreadcrumbSelectionModel_new3(@ptrCast(selectionModel.ptr), @ptrCast(parent.ptr)) };
    }

    /// New4 constructs a new KBreadcrumbSelectionModel object.
    ///
    /// ## Parameter(s):
    ///
    /// ` selectionModel: QItemSelectionModel `
    ///
    /// ` target: kbreadcrumbselectionmodel_enums.BreadcrumbTarget `
    ///
    /// ` parent: QObject `
    ///
    pub fn New4(selectionModel: anytype, target: i32, parent: anytype) KBreadcrumbSelectionModel {
        comptime _ = @TypeOf(selectionModel)._is_QItemSelectionModel;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KBreadcrumbSelectionModel_new4(@ptrCast(selectionModel.ptr), @bitCast(target), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn MetaObject(self: KBreadcrumbSelectionModel) QMetaObject {
        return .{ .ptr = qtc.KBreadcrumbSelectionModel_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KBreadcrumbSelectionModel, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KBreadcrumbSelectionModel_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn SuperMetaObject(self: KBreadcrumbSelectionModel) QMetaObject {
        return .{ .ptr = qtc.KBreadcrumbSelectionModel_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KBreadcrumbSelectionModel, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KBreadcrumbSelectionModel_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` callback: *const fn (self: KBreadcrumbSelectionModel, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KBreadcrumbSelectionModel, callback: *const fn (KBreadcrumbSelectionModel, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KBreadcrumbSelectionModel_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KBreadcrumbSelectionModel, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KBreadcrumbSelectionModel_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KBreadcrumbSelectionModel, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KBreadcrumbSelectionModel_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` callback: *const fn (self: KBreadcrumbSelectionModel, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KBreadcrumbSelectionModel, callback: *const fn (KBreadcrumbSelectionModel, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KBreadcrumbSelectionModel_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KBreadcrumbSelectionModel, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KBreadcrumbSelectionModel_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn Tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbreadcrumbselectionmodel.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kbreadcrumbselectionmodel.html#isActualSelectionIncluded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn IsActualSelectionIncluded(self: KBreadcrumbSelectionModel) bool {
        return qtc.KBreadcrumbSelectionModel_IsActualSelectionIncluded(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbreadcrumbselectionmodel.html#setActualSelectionIncluded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` isActualSelectionIncluded: bool `
    ///
    pub fn SetActualSelectionIncluded(self: KBreadcrumbSelectionModel, isActualSelectionIncluded: bool) void {
        qtc.KBreadcrumbSelectionModel_SetActualSelectionIncluded(@ptrCast(self.ptr), isActualSelectionIncluded);
    }

    /// ### [Upstream resources](https://api.kde.org/kbreadcrumbselectionmodel.html#breadcrumbLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn BreadcrumbLength(self: KBreadcrumbSelectionModel) i32 {
        return qtc.KBreadcrumbSelectionModel_BreadcrumbLength(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbreadcrumbselectionmodel.html#setBreadcrumbLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` breadcrumbLength: i32 `
    ///
    pub fn SetBreadcrumbLength(self: KBreadcrumbSelectionModel, breadcrumbLength: i32) void {
        qtc.KBreadcrumbSelectionModel_SetBreadcrumbLength(@ptrCast(self.ptr), @bitCast(breadcrumbLength));
    }

    /// ### [Upstream resources](https://api.kde.org/kbreadcrumbselectionmodel.html#select)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` command: flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn Select(self: KBreadcrumbSelectionModel, index: anytype, command: i32) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KBreadcrumbSelectionModel_Select(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(command));
    }

    /// ### [Upstream resources](https://api.kde.org/kbreadcrumbselectionmodel.html#select)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` callback: *const fn (self: KBreadcrumbSelectionModel, index: QModelIndex, command: flag of qitemselectionmodel_enums.SelectionFlag) callconv(.c) void `
    ///
    pub fn OnSelect(self: KBreadcrumbSelectionModel, callback: *const fn (KBreadcrumbSelectionModel, QModelIndex, i32) callconv(.c) void) void {
        qtc.KBreadcrumbSelectionModel_OnSelect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSelect` instead
    ///
    pub const QBaseSelect = SuperSelect;

    /// ### [Upstream resources](https://api.kde.org/kbreadcrumbselectionmodel.html#select)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` command: flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn SuperSelect(self: KBreadcrumbSelectionModel, index: anytype, command: i32) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KBreadcrumbSelectionModel_SuperSelect(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(command));
    }

    /// ### [Upstream resources](https://api.kde.org/kbreadcrumbselectionmodel.html#select)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` selection: QItemSelection `
    ///
    /// ` command: flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn Select2(self: KBreadcrumbSelectionModel, selection: anytype, command: i32) void {
        comptime _ = @TypeOf(selection)._is_QItemSelection;
        qtc.KBreadcrumbSelectionModel_Select2(@ptrCast(self.ptr), @ptrCast(selection.ptr), @bitCast(command));
    }

    /// ### [Upstream resources](https://api.kde.org/kbreadcrumbselectionmodel.html#select)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` callback: *const fn (self: KBreadcrumbSelectionModel, selection: QItemSelection, command: flag of qitemselectionmodel_enums.SelectionFlag) callconv(.c) void `
    ///
    pub fn OnSelect2(self: KBreadcrumbSelectionModel, callback: *const fn (KBreadcrumbSelectionModel, QItemSelection, i32) callconv(.c) void) void {
        qtc.KBreadcrumbSelectionModel_OnSelect2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSelect2` instead
    ///
    pub const QBaseSelect2 = SuperSelect2;

    /// ### [Upstream resources](https://api.kde.org/kbreadcrumbselectionmodel.html#select)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` selection: QItemSelection `
    ///
    /// ` command: flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn SuperSelect2(self: KBreadcrumbSelectionModel, selection: anytype, command: i32) void {
        comptime _ = @TypeOf(selection)._is_QItemSelection;
        qtc.KBreadcrumbSelectionModel_SuperSelect2(@ptrCast(self.ptr), @ptrCast(selection.ptr), @bitCast(command));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    pub fn Tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbreadcrumbselectionmodel.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn Tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbreadcrumbselectionmodel.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn CurrentIndex(self: KBreadcrumbSelectionModel) QModelIndex {
        return .{ .ptr = qtc.QItemSelectionModel_CurrentIndex(@ptrCast(self.ptr)) };
    }

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#isSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn IsSelected(self: KBreadcrumbSelectionModel, index: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QItemSelectionModel_IsSelected(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#isRowSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` row: i32 `
    ///
    pub fn IsRowSelected(self: KBreadcrumbSelectionModel, row: i32) bool {
        return qtc.QItemSelectionModel_IsRowSelected(@ptrCast(self.ptr), @bitCast(row));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#isColumnSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` column: i32 `
    ///
    pub fn IsColumnSelected(self: KBreadcrumbSelectionModel, column: i32) bool {
        return qtc.QItemSelectionModel_IsColumnSelected(@ptrCast(self.ptr), @bitCast(column));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#rowIntersectsSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` row: i32 `
    ///
    pub fn RowIntersectsSelection(self: KBreadcrumbSelectionModel, row: i32) bool {
        return qtc.QItemSelectionModel_RowIntersectsSelection(@ptrCast(self.ptr), @bitCast(row));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#columnIntersectsSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` column: i32 `
    ///
    pub fn ColumnIntersectsSelection(self: KBreadcrumbSelectionModel, column: i32) bool {
        return qtc.QItemSelectionModel_ColumnIntersectsSelection(@ptrCast(self.ptr), @bitCast(column));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#hasSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn HasSelection(self: KBreadcrumbSelectionModel) bool {
        return qtc.QItemSelectionModel_HasSelection(@ptrCast(self.ptr));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectedIndexes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectedIndexes(self: KBreadcrumbSelectionModel, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.QItemSelectionModel_SelectedIndexes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("kbreadcrumbselectionmodel.SelectedIndexes: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectedRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectedRows(self: KBreadcrumbSelectionModel, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.QItemSelectionModel_SelectedRows(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("kbreadcrumbselectionmodel.SelectedRows: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectedColumns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectedColumns(self: KBreadcrumbSelectionModel, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.QItemSelectionModel_SelectedColumns(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("kbreadcrumbselectionmodel.SelectedColumns: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#selection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn Selection(self: KBreadcrumbSelectionModel) QItemSelection {
        return .{ .ptr = qtc.QItemSelectionModel_Selection(@ptrCast(self.ptr)) };
    }

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#model)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn Model(self: KBreadcrumbSelectionModel) QAbstractItemModel {
        return .{ .ptr = qtc.QItemSelectionModel_Model(@ptrCast(self.ptr)) };
    }

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#model)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn Model2(self: KBreadcrumbSelectionModel) QAbstractItemModel {
        return .{ .ptr = qtc.QItemSelectionModel_Model2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#setModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` model: QAbstractItemModel `
    ///
    pub fn SetModel(self: KBreadcrumbSelectionModel, model: anytype) void {
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        qtc.QItemSelectionModel_SetModel(@ptrCast(self.ptr), @ptrCast(model.ptr));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#clearSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn ClearSelection(self: KBreadcrumbSelectionModel) void {
        qtc.QItemSelectionModel_ClearSelection(@ptrCast(self.ptr));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` selected: QItemSelection `
    ///
    /// ` deselected: QItemSelection `
    ///
    pub fn SelectionChanged(self: KBreadcrumbSelectionModel, selected: anytype, deselected: anytype) void {
        comptime _ = @TypeOf(selected)._is_QItemSelection;
        comptime _ = @TypeOf(deselected)._is_QItemSelection;
        qtc.QItemSelectionModel_SelectionChanged(@ptrCast(self.ptr), @ptrCast(selected.ptr), @ptrCast(deselected.ptr));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` callback: *const fn (self: KBreadcrumbSelectionModel, selected: QItemSelection, deselected: QItemSelection) callconv(.c) void `
    ///
    pub fn OnSelectionChanged(self: KBreadcrumbSelectionModel, callback: *const fn (KBreadcrumbSelectionModel, QItemSelection, QItemSelection) callconv(.c) void) void {
        qtc.QItemSelectionModel_Connect_SelectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` current: QModelIndex `
    ///
    /// ` previous: QModelIndex `
    ///
    pub fn CurrentChanged(self: KBreadcrumbSelectionModel, current: anytype, previous: anytype) void {
        comptime _ = @TypeOf(current)._is_QModelIndex;
        comptime _ = @TypeOf(previous)._is_QModelIndex;
        qtc.QItemSelectionModel_CurrentChanged(@ptrCast(self.ptr), @ptrCast(current.ptr), @ptrCast(previous.ptr));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` callback: *const fn (self: KBreadcrumbSelectionModel, current: QModelIndex, previous: QModelIndex) callconv(.c) void `
    ///
    pub fn OnCurrentChanged(self: KBreadcrumbSelectionModel, callback: *const fn (KBreadcrumbSelectionModel, QModelIndex, QModelIndex) callconv(.c) void) void {
        qtc.QItemSelectionModel_Connect_CurrentChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentRowChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` current: QModelIndex `
    ///
    /// ` previous: QModelIndex `
    ///
    pub fn CurrentRowChanged(self: KBreadcrumbSelectionModel, current: anytype, previous: anytype) void {
        comptime _ = @TypeOf(current)._is_QModelIndex;
        comptime _ = @TypeOf(previous)._is_QModelIndex;
        qtc.QItemSelectionModel_CurrentRowChanged(@ptrCast(self.ptr), @ptrCast(current.ptr), @ptrCast(previous.ptr));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentRowChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` callback: *const fn (self: KBreadcrumbSelectionModel, current: QModelIndex, previous: QModelIndex) callconv(.c) void `
    ///
    pub fn OnCurrentRowChanged(self: KBreadcrumbSelectionModel, callback: *const fn (KBreadcrumbSelectionModel, QModelIndex, QModelIndex) callconv(.c) void) void {
        qtc.QItemSelectionModel_Connect_CurrentRowChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentColumnChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` current: QModelIndex `
    ///
    /// ` previous: QModelIndex `
    ///
    pub fn CurrentColumnChanged(self: KBreadcrumbSelectionModel, current: anytype, previous: anytype) void {
        comptime _ = @TypeOf(current)._is_QModelIndex;
        comptime _ = @TypeOf(previous)._is_QModelIndex;
        qtc.QItemSelectionModel_CurrentColumnChanged(@ptrCast(self.ptr), @ptrCast(current.ptr), @ptrCast(previous.ptr));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentColumnChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` callback: *const fn (self: KBreadcrumbSelectionModel, current: QModelIndex, previous: QModelIndex) callconv(.c) void `
    ///
    pub fn OnCurrentColumnChanged(self: KBreadcrumbSelectionModel, callback: *const fn (KBreadcrumbSelectionModel, QModelIndex, QModelIndex) callconv(.c) void) void {
        qtc.QItemSelectionModel_Connect_CurrentColumnChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#modelChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` model: QAbstractItemModel `
    ///
    pub fn ModelChanged(self: KBreadcrumbSelectionModel, model: anytype) void {
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        qtc.QItemSelectionModel_ModelChanged(@ptrCast(self.ptr), @ptrCast(model.ptr));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#modelChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` callback: *const fn (self: KBreadcrumbSelectionModel, model: QAbstractItemModel) callconv(.c) void `
    ///
    pub fn OnModelChanged(self: KBreadcrumbSelectionModel, callback: *const fn (KBreadcrumbSelectionModel, QAbstractItemModel) callconv(.c) void) void {
        qtc.QItemSelectionModel_Connect_ModelChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#isRowSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` row: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn IsRowSelected2(self: KBreadcrumbSelectionModel, row: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QItemSelectionModel_IsRowSelected2(@ptrCast(self.ptr), @bitCast(row), @ptrCast(parent.ptr));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#isColumnSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn IsColumnSelected2(self: KBreadcrumbSelectionModel, column: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QItemSelectionModel_IsColumnSelected2(@ptrCast(self.ptr), @bitCast(column), @ptrCast(parent.ptr));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#rowIntersectsSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` row: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn RowIntersectsSelection2(self: KBreadcrumbSelectionModel, row: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QItemSelectionModel_RowIntersectsSelection2(@ptrCast(self.ptr), @bitCast(row), @ptrCast(parent.ptr));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#columnIntersectsSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn ColumnIntersectsSelection2(self: KBreadcrumbSelectionModel, column: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QItemSelectionModel_ColumnIntersectsSelection2(@ptrCast(self.ptr), @bitCast(column), @ptrCast(parent.ptr));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectedRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` column: i32 `
    ///
    pub fn SelectedRows1(self: KBreadcrumbSelectionModel, allocator: std.mem.Allocator, column: i32) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.QItemSelectionModel_SelectedRows1(@ptrCast(self.ptr), @bitCast(column));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("kbreadcrumbselectionmodel.SelectedRows1: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectedColumns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` row: i32 `
    ///
    pub fn SelectedColumns1(self: KBreadcrumbSelectionModel, allocator: std.mem.Allocator, row: i32) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.QItemSelectionModel_SelectedColumns1(@ptrCast(self.ptr), @bitCast(row));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("kbreadcrumbselectionmodel.SelectedColumns1: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KBreadcrumbSelectionModel, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbreadcrumbselectionmodel.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KBreadcrumbSelectionModel, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn IsWidgetType(self: KBreadcrumbSelectionModel) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn IsWindowType(self: KBreadcrumbSelectionModel) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn IsQuickItemType(self: KBreadcrumbSelectionModel) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn SignalsBlocked(self: KBreadcrumbSelectionModel) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KBreadcrumbSelectionModel, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn Thread(self: KBreadcrumbSelectionModel) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KBreadcrumbSelectionModel, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KBreadcrumbSelectionModel, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KBreadcrumbSelectionModel, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KBreadcrumbSelectionModel, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KBreadcrumbSelectionModel, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KBreadcrumbSelectionModel, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kbreadcrumbselectionmodel.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KBreadcrumbSelectionModel, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KBreadcrumbSelectionModel, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KBreadcrumbSelectionModel, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn Connect2(sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KBreadcrumbSelectionModel, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn Disconnect2(sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn Disconnect3(self: KBreadcrumbSelectionModel) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KBreadcrumbSelectionModel, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn DumpObjectTree(self: KBreadcrumbSelectionModel) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn DumpObjectInfo(self: KBreadcrumbSelectionModel) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KBreadcrumbSelectionModel, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KBreadcrumbSelectionModel, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KBreadcrumbSelectionModel, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kbreadcrumbselectionmodel.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kbreadcrumbselectionmodel.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn BindingStorage(self: KBreadcrumbSelectionModel) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn BindingStorage2(self: KBreadcrumbSelectionModel) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn Destroyed(self: KBreadcrumbSelectionModel) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` callback: *const fn (self: KBreadcrumbSelectionModel) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KBreadcrumbSelectionModel, callback: *const fn (KBreadcrumbSelectionModel) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn Parent(self: KBreadcrumbSelectionModel) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KBreadcrumbSelectionModel, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn DeleteLater(self: KBreadcrumbSelectionModel) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KBreadcrumbSelectionModel, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KBreadcrumbSelectionModel, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KBreadcrumbSelectionModel, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KBreadcrumbSelectionModel, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KBreadcrumbSelectionModel, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KBreadcrumbSelectionModel, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KBreadcrumbSelectionModel, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KBreadcrumbSelectionModel, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` callback: *const fn (self: KBreadcrumbSelectionModel, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KBreadcrumbSelectionModel, callback: *const fn (KBreadcrumbSelectionModel, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#setCurrentIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` command: flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn SetCurrentIndex(self: KBreadcrumbSelectionModel, index: anytype, command: i32) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KBreadcrumbSelectionModel_SetCurrentIndex(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(command));
    }

    /// ### DEPRECATED: Use `SuperSetCurrentIndex` instead
    ///
    pub const QBaseSetCurrentIndex = SuperSetCurrentIndex;

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#setCurrentIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` command: flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn SuperSetCurrentIndex(self: KBreadcrumbSelectionModel, index: anytype, command: i32) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KBreadcrumbSelectionModel_SuperSetCurrentIndex(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(command));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#setCurrentIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBreadcrumbSelectionModel`
    ///
    /// ` callback: *const fn (self: KBreadcrumbSelectionModel, index: QModelIndex, command: flag of qitemselectionmodel_enums.SelectionFlag) callconv(.c) void `
    ///
    pub fn OnSetCurrentIndex(self: KBreadcrumbSelectionModel, callback: *const fn (KBreadcrumbSelectionModel, QModelIndex, i32) callconv(.c) void) void {
        qtc.KBreadcrumbSelectionModel_OnSetCurrentIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#clear)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn Clear(self: KBreadcrumbSelectionModel) void {
        qtc.KBreadcrumbSelectionModel_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperClear` instead
    ///
    pub const QBaseClear = SuperClear;

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#clear)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn SuperClear(self: KBreadcrumbSelectionModel) void {
        qtc.KBreadcrumbSelectionModel_SuperClear(@ptrCast(self.ptr));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#clear)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBreadcrumbSelectionModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnClear(self: KBreadcrumbSelectionModel, callback: *const fn () callconv(.c) void) void {
        qtc.KBreadcrumbSelectionModel_OnClear(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#reset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn Reset(self: KBreadcrumbSelectionModel) void {
        qtc.KBreadcrumbSelectionModel_Reset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperReset` instead
    ///
    pub const QBaseReset = SuperReset;

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#reset)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn SuperReset(self: KBreadcrumbSelectionModel) void {
        qtc.KBreadcrumbSelectionModel_SuperReset(@ptrCast(self.ptr));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#reset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBreadcrumbSelectionModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnReset(self: KBreadcrumbSelectionModel, callback: *const fn () callconv(.c) void) void {
        qtc.KBreadcrumbSelectionModel_OnReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#clearCurrentIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn ClearCurrentIndex(self: KBreadcrumbSelectionModel) void {
        qtc.KBreadcrumbSelectionModel_ClearCurrentIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperClearCurrentIndex` instead
    ///
    pub const QBaseClearCurrentIndex = SuperClearCurrentIndex;

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#clearCurrentIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn SuperClearCurrentIndex(self: KBreadcrumbSelectionModel) void {
        qtc.KBreadcrumbSelectionModel_SuperClearCurrentIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#clearCurrentIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBreadcrumbSelectionModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnClearCurrentIndex(self: KBreadcrumbSelectionModel, callback: *const fn () callconv(.c) void) void {
        qtc.KBreadcrumbSelectionModel_OnClearCurrentIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KBreadcrumbSelectionModel, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KBreadcrumbSelectionModel_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KBreadcrumbSelectionModel, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KBreadcrumbSelectionModel_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBreadcrumbSelectionModel`
    ///
    /// ` callback: *const fn (self: KBreadcrumbSelectionModel, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KBreadcrumbSelectionModel, callback: *const fn (KBreadcrumbSelectionModel, QEvent) callconv(.c) bool) void {
        qtc.KBreadcrumbSelectionModel_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KBreadcrumbSelectionModel, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KBreadcrumbSelectionModel_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KBreadcrumbSelectionModel, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KBreadcrumbSelectionModel_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBreadcrumbSelectionModel`
    ///
    /// ` callback: *const fn (self: KBreadcrumbSelectionModel, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KBreadcrumbSelectionModel, callback: *const fn (KBreadcrumbSelectionModel, QObject, QEvent) callconv(.c) bool) void {
        qtc.KBreadcrumbSelectionModel_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KBreadcrumbSelectionModel, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KBreadcrumbSelectionModel_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KBreadcrumbSelectionModel, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KBreadcrumbSelectionModel_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBreadcrumbSelectionModel`
    ///
    /// ` callback: *const fn (self: KBreadcrumbSelectionModel, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KBreadcrumbSelectionModel, callback: *const fn (KBreadcrumbSelectionModel, QTimerEvent) callconv(.c) void) void {
        qtc.KBreadcrumbSelectionModel_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KBreadcrumbSelectionModel, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KBreadcrumbSelectionModel_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperChildEvent` instead
    ///
    pub const QBaseChildEvent = SuperChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KBreadcrumbSelectionModel, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KBreadcrumbSelectionModel_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBreadcrumbSelectionModel`
    ///
    /// ` callback: *const fn (self: KBreadcrumbSelectionModel, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KBreadcrumbSelectionModel, callback: *const fn (KBreadcrumbSelectionModel, QChildEvent) callconv(.c) void) void {
        qtc.KBreadcrumbSelectionModel_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KBreadcrumbSelectionModel, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KBreadcrumbSelectionModel_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KBreadcrumbSelectionModel, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KBreadcrumbSelectionModel_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBreadcrumbSelectionModel`
    ///
    /// ` callback: *const fn (self: KBreadcrumbSelectionModel, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KBreadcrumbSelectionModel, callback: *const fn (KBreadcrumbSelectionModel, QEvent) callconv(.c) void) void {
        qtc.KBreadcrumbSelectionModel_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KBreadcrumbSelectionModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KBreadcrumbSelectionModel_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperConnectNotify` instead
    ///
    pub const QBaseConnectNotify = SuperConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KBreadcrumbSelectionModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KBreadcrumbSelectionModel_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBreadcrumbSelectionModel`
    ///
    /// ` callback: *const fn (self: KBreadcrumbSelectionModel, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KBreadcrumbSelectionModel, callback: *const fn (KBreadcrumbSelectionModel, QMetaMethod) callconv(.c) void) void {
        qtc.KBreadcrumbSelectionModel_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KBreadcrumbSelectionModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KBreadcrumbSelectionModel_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperDisconnectNotify` instead
    ///
    pub const QBaseDisconnectNotify = SuperDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KBreadcrumbSelectionModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KBreadcrumbSelectionModel_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBreadcrumbSelectionModel`
    ///
    /// ` callback: *const fn (self: KBreadcrumbSelectionModel, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KBreadcrumbSelectionModel, callback: *const fn (KBreadcrumbSelectionModel, QMetaMethod) callconv(.c) void) void {
        qtc.KBreadcrumbSelectionModel_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#emitSelectionChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` newSelection: QItemSelection `
    ///
    /// ` oldSelection: QItemSelection `
    ///
    pub fn EmitSelectionChanged(self: KBreadcrumbSelectionModel, newSelection: anytype, oldSelection: anytype) void {
        comptime _ = @TypeOf(newSelection)._is_QItemSelection;
        comptime _ = @TypeOf(oldSelection)._is_QItemSelection;
        qtc.KBreadcrumbSelectionModel_EmitSelectionChanged(@ptrCast(self.ptr), @ptrCast(newSelection.ptr), @ptrCast(oldSelection.ptr));
    }

    /// ### DEPRECATED: Use `SuperEmitSelectionChanged` instead
    ///
    pub const QBaseEmitSelectionChanged = SuperEmitSelectionChanged;

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#emitSelectionChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` newSelection: QItemSelection `
    ///
    /// ` oldSelection: QItemSelection `
    ///
    pub fn SuperEmitSelectionChanged(self: KBreadcrumbSelectionModel, newSelection: anytype, oldSelection: anytype) void {
        comptime _ = @TypeOf(newSelection)._is_QItemSelection;
        comptime _ = @TypeOf(oldSelection)._is_QItemSelection;
        qtc.KBreadcrumbSelectionModel_SuperEmitSelectionChanged(@ptrCast(self.ptr), @ptrCast(newSelection.ptr), @ptrCast(oldSelection.ptr));
    }

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#emitSelectionChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBreadcrumbSelectionModel`
    ///
    /// ` callback: *const fn (self: KBreadcrumbSelectionModel, newSelection: QItemSelection, oldSelection: QItemSelection) callconv(.c) void `
    ///
    pub fn OnEmitSelectionChanged(self: KBreadcrumbSelectionModel, callback: *const fn (KBreadcrumbSelectionModel, QItemSelection, QItemSelection) callconv(.c) void) void {
        qtc.KBreadcrumbSelectionModel_OnEmitSelectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn Sender(self: KBreadcrumbSelectionModel) QObject {
        return .{ .ptr = qtc.KBreadcrumbSelectionModel_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSender` instead
    ///
    pub const QBaseSender = SuperSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn SuperSender(self: KBreadcrumbSelectionModel) QObject {
        return .{ .ptr = qtc.KBreadcrumbSelectionModel_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBreadcrumbSelectionModel`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KBreadcrumbSelectionModel, callback: *const fn () callconv(.c) QObject) void {
        qtc.KBreadcrumbSelectionModel_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn SenderSignalIndex(self: KBreadcrumbSelectionModel) i32 {
        return qtc.KBreadcrumbSelectionModel_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSenderSignalIndex` instead
    ///
    pub const QBaseSenderSignalIndex = SuperSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn SuperSenderSignalIndex(self: KBreadcrumbSelectionModel) i32 {
        return qtc.KBreadcrumbSelectionModel_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBreadcrumbSelectionModel`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KBreadcrumbSelectionModel, callback: *const fn () callconv(.c) i32) void {
        qtc.KBreadcrumbSelectionModel_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KBreadcrumbSelectionModel, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KBreadcrumbSelectionModel_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `SuperReceivers` instead
    ///
    pub const QBaseReceivers = SuperReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KBreadcrumbSelectionModel, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KBreadcrumbSelectionModel_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBreadcrumbSelectionModel`
    ///
    /// ` callback: *const fn (self: KBreadcrumbSelectionModel, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KBreadcrumbSelectionModel, callback: *const fn (KBreadcrumbSelectionModel, [*:0]const u8) callconv(.c) i32) void {
        qtc.KBreadcrumbSelectionModel_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KBreadcrumbSelectionModel, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KBreadcrumbSelectionModel_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsSignalConnected` instead
    ///
    pub const QBaseIsSignalConnected = SuperIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KBreadcrumbSelectionModel, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KBreadcrumbSelectionModel_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBreadcrumbSelectionModel`
    ///
    /// ` callback: *const fn (self: KBreadcrumbSelectionModel, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KBreadcrumbSelectionModel, callback: *const fn (KBreadcrumbSelectionModel, QMetaMethod) callconv(.c) bool) void {
        qtc.KBreadcrumbSelectionModel_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` callback: *const fn (self: KBreadcrumbSelectionModel, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KBreadcrumbSelectionModel, callback: *const fn (KBreadcrumbSelectionModel, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kbreadcrumbselectionmodel.html#dtor.KBreadcrumbSelectionModel)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn Delete(self: KBreadcrumbSelectionModel) void {
        qtc.KBreadcrumbSelectionModel_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kbreadcrumbselectionmodel.html#public-types)
pub const enums = struct {
    pub const BreadcrumbTarget = enum(i32) {
        pub const MakeBreadcrumbSelectionInOther: i32 = 0;
        pub const MakeBreadcrumbSelectionInSelf: i32 = 1;
    };
};
