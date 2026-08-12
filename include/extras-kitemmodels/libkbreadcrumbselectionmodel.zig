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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KBreadcrumbSelectionModel object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` selectionModel: QItemSelectionModel `
    ///
    pub fn new(selectionModel: anytype) KBreadcrumbSelectionModel {
        comptime _ = @TypeOf(selectionModel)._is_QItemSelectionModel;
        return .{ .ptr = qtc.KBreadcrumbSelectionModel_new(@ptrCast(selectionModel.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KBreadcrumbSelectionModel object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` selectionModel: QItemSelectionModel `
    ///
    /// ` target: kbreadcrumbselectionmodel_enums.BreadcrumbTarget `
    ///
    pub fn new2(selectionModel: anytype, target: i32) KBreadcrumbSelectionModel {
        comptime _ = @TypeOf(selectionModel)._is_QItemSelectionModel;
        return .{ .ptr = qtc.KBreadcrumbSelectionModel_new2(@ptrCast(selectionModel.ptr), @bitCast(target)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KBreadcrumbSelectionModel object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` selectionModel: QItemSelectionModel `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new3(selectionModel: anytype, _parent: anytype) KBreadcrumbSelectionModel {
        comptime _ = @TypeOf(selectionModel)._is_QItemSelectionModel;
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KBreadcrumbSelectionModel_new3(@ptrCast(selectionModel.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new KBreadcrumbSelectionModel object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` selectionModel: QItemSelectionModel `
    ///
    /// ` target: kbreadcrumbselectionmodel_enums.BreadcrumbTarget `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new4(selectionModel: anytype, target: i32, _parent: anytype) KBreadcrumbSelectionModel {
        comptime _ = @TypeOf(selectionModel)._is_QItemSelectionModel;
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KBreadcrumbSelectionModel_new4(@ptrCast(selectionModel.ptr), @bitCast(target), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn metaObject(self: KBreadcrumbSelectionModel) QMetaObject {
        return .{ .ptr = qtc.KBreadcrumbSelectionModel_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

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
    pub fn onMetaObject(self: KBreadcrumbSelectionModel, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KBreadcrumbSelectionModel_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn superMetaObject(self: KBreadcrumbSelectionModel) QMetaObject {
        return .{ .ptr = qtc.KBreadcrumbSelectionModel_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KBreadcrumbSelectionModel, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KBreadcrumbSelectionModel_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` callback: *const fn (self: KBreadcrumbSelectionModel, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KBreadcrumbSelectionModel, callback: *const fn (KBreadcrumbSelectionModel, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KBreadcrumbSelectionModel_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KBreadcrumbSelectionModel, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KBreadcrumbSelectionModel_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: KBreadcrumbSelectionModel, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KBreadcrumbSelectionModel_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` callback: *const fn (self: KBreadcrumbSelectionModel, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KBreadcrumbSelectionModel, callback: *const fn (KBreadcrumbSelectionModel, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KBreadcrumbSelectionModel_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: KBreadcrumbSelectionModel, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KBreadcrumbSelectionModel_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KBreadcrumbSelectionModel.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isActualSelectionIncluded` instead
    ///
    pub const IsActualSelectionIncluded = isActualSelectionIncluded;

    /// ### [Upstream resources](https://api.kde.org/kbreadcrumbselectionmodel.html#isActualSelectionIncluded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn isActualSelectionIncluded(self: KBreadcrumbSelectionModel) bool {
        return qtc.KBreadcrumbSelectionModel_IsActualSelectionIncluded(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setActualSelectionIncluded` instead
    ///
    pub const SetActualSelectionIncluded = setActualSelectionIncluded;

    /// ### [Upstream resources](https://api.kde.org/kbreadcrumbselectionmodel.html#setActualSelectionIncluded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` _isActualSelectionIncluded: bool `
    ///
    pub fn setActualSelectionIncluded(self: KBreadcrumbSelectionModel, _isActualSelectionIncluded: bool) void {
        qtc.KBreadcrumbSelectionModel_SetActualSelectionIncluded(@ptrCast(self.ptr), _isActualSelectionIncluded);
    }

    /// ### DEPRECATED: Use `breadcrumbLength` instead
    ///
    pub const BreadcrumbLength = breadcrumbLength;

    /// ### [Upstream resources](https://api.kde.org/kbreadcrumbselectionmodel.html#breadcrumbLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn breadcrumbLength(self: KBreadcrumbSelectionModel) i32 {
        return qtc.KBreadcrumbSelectionModel_BreadcrumbLength(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBreadcrumbLength` instead
    ///
    pub const SetBreadcrumbLength = setBreadcrumbLength;

    /// ### [Upstream resources](https://api.kde.org/kbreadcrumbselectionmodel.html#setBreadcrumbLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` _breadcrumbLength: i32 `
    ///
    pub fn setBreadcrumbLength(self: KBreadcrumbSelectionModel, _breadcrumbLength: i32) void {
        qtc.KBreadcrumbSelectionModel_SetBreadcrumbLength(@ptrCast(self.ptr), @bitCast(_breadcrumbLength));
    }

    /// ### DEPRECATED: Use `select` instead
    ///
    pub const Select = select;

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
    pub fn select(self: KBreadcrumbSelectionModel, index: anytype, command: i32) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KBreadcrumbSelectionModel_Select(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(command));
    }

    /// ### DEPRECATED: Use `onSelect` instead
    ///
    pub const OnSelect = onSelect;

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
    pub fn onSelect(self: KBreadcrumbSelectionModel, callback: *const fn (KBreadcrumbSelectionModel, QModelIndex, i32) callconv(.c) void) void {
        qtc.KBreadcrumbSelectionModel_OnSelect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSelect` instead
    ///
    pub const SuperSelect = superSelect;

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
    pub fn superSelect(self: KBreadcrumbSelectionModel, index: anytype, command: i32) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KBreadcrumbSelectionModel_SuperSelect(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(command));
    }

    /// ### DEPRECATED: Use `select2` instead
    ///
    pub const Select2 = select2;

    /// ### [Upstream resources](https://api.kde.org/kbreadcrumbselectionmodel.html#select)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` _selection: QItemSelection `
    ///
    /// ` command: flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn select2(self: KBreadcrumbSelectionModel, _selection: anytype, command: i32) void {
        comptime _ = @TypeOf(_selection)._is_QItemSelection;
        qtc.KBreadcrumbSelectionModel_Select2(@ptrCast(self.ptr), @ptrCast(_selection.ptr), @bitCast(command));
    }

    /// ### DEPRECATED: Use `onSelect2` instead
    ///
    pub const OnSelect2 = onSelect2;

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
    pub fn onSelect2(self: KBreadcrumbSelectionModel, callback: *const fn (KBreadcrumbSelectionModel, QItemSelection, i32) callconv(.c) void) void {
        qtc.KBreadcrumbSelectionModel_OnSelect2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSelect2` instead
    ///
    pub const SuperSelect2 = superSelect2;

    /// ### [Upstream resources](https://api.kde.org/kbreadcrumbselectionmodel.html#select)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` _selection: QItemSelection `
    ///
    /// ` command: flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn superSelect2(self: KBreadcrumbSelectionModel, _selection: anytype, command: i32) void {
        comptime _ = @TypeOf(_selection)._is_QItemSelection;
        qtc.KBreadcrumbSelectionModel_SuperSelect2(@ptrCast(self.ptr), @ptrCast(_selection.ptr), @bitCast(command));
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

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
    pub fn tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KBreadcrumbSelectionModel.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

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
    pub fn tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KBreadcrumbSelectionModel.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `currentIndex` instead
    ///
    pub const CurrentIndex = currentIndex;

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn currentIndex(self: KBreadcrumbSelectionModel) QModelIndex {
        return .{ .ptr = qtc.QItemSelectionModel_CurrentIndex(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isSelected` instead
    ///
    pub const IsSelected = isSelected;

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
    pub fn isSelected(self: KBreadcrumbSelectionModel, index: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QItemSelectionModel_IsSelected(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `isRowSelected` instead
    ///
    pub const IsRowSelected = isRowSelected;

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
    pub fn isRowSelected(self: KBreadcrumbSelectionModel, row: i32) bool {
        return qtc.QItemSelectionModel_IsRowSelected(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### DEPRECATED: Use `isColumnSelected` instead
    ///
    pub const IsColumnSelected = isColumnSelected;

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
    pub fn isColumnSelected(self: KBreadcrumbSelectionModel, column: i32) bool {
        return qtc.QItemSelectionModel_IsColumnSelected(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `rowIntersectsSelection` instead
    ///
    pub const RowIntersectsSelection = rowIntersectsSelection;

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
    pub fn rowIntersectsSelection(self: KBreadcrumbSelectionModel, row: i32) bool {
        return qtc.QItemSelectionModel_RowIntersectsSelection(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### DEPRECATED: Use `columnIntersectsSelection` instead
    ///
    pub const ColumnIntersectsSelection = columnIntersectsSelection;

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
    pub fn columnIntersectsSelection(self: KBreadcrumbSelectionModel, column: i32) bool {
        return qtc.QItemSelectionModel_ColumnIntersectsSelection(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `hasSelection` instead
    ///
    pub const HasSelection = hasSelection;

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#hasSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn hasSelection(self: KBreadcrumbSelectionModel) bool {
        return qtc.QItemSelectionModel_HasSelection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `selectedIndexes` instead
    ///
    pub const SelectedIndexes = selectedIndexes;

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
    pub fn selectedIndexes(self: KBreadcrumbSelectionModel, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.QItemSelectionModel_SelectedIndexes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("KBreadcrumbSelectionModel.selectedIndexes: Memory allocation failed");
        const _data_val: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `selectedRows` instead
    ///
    pub const SelectedRows = selectedRows;

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
    pub fn selectedRows(self: KBreadcrumbSelectionModel, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.QItemSelectionModel_SelectedRows(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("KBreadcrumbSelectionModel.selectedRows: Memory allocation failed");
        const _data_val: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `selectedColumns` instead
    ///
    pub const SelectedColumns = selectedColumns;

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
    pub fn selectedColumns(self: KBreadcrumbSelectionModel, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.QItemSelectionModel_SelectedColumns(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("KBreadcrumbSelectionModel.selectedColumns: Memory allocation failed");
        const _data_val: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `selection` instead
    ///
    pub const Selection = selection;

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#selection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn selection(self: KBreadcrumbSelectionModel) QItemSelection {
        return .{ .ptr = qtc.QItemSelectionModel_Selection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `model` instead
    ///
    pub const Model = model;

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#model)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn model(self: KBreadcrumbSelectionModel) QAbstractItemModel {
        return .{ .ptr = qtc.QItemSelectionModel_Model(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `model2` instead
    ///
    pub const Model2 = model2;

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#model)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn model2(self: KBreadcrumbSelectionModel) QAbstractItemModel {
        return .{ .ptr = qtc.QItemSelectionModel_Model2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setModel` instead
    ///
    pub const SetModel = setModel;

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#setModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` _model: QAbstractItemModel `
    ///
    pub fn setModel(self: KBreadcrumbSelectionModel, _model: anytype) void {
        comptime _ = @TypeOf(_model)._is_QAbstractItemModel;
        qtc.QItemSelectionModel_SetModel(@ptrCast(self.ptr), @ptrCast(_model.ptr));
    }

    /// ### DEPRECATED: Use `clearSelection` instead
    ///
    pub const ClearSelection = clearSelection;

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#clearSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn clearSelection(self: KBreadcrumbSelectionModel) void {
        qtc.QItemSelectionModel_ClearSelection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `selectionChanged` instead
    ///
    pub const SelectionChanged = selectionChanged;

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
    pub fn selectionChanged(self: KBreadcrumbSelectionModel, selected: anytype, deselected: anytype) void {
        comptime _ = @TypeOf(selected)._is_QItemSelection;
        comptime _ = @TypeOf(deselected)._is_QItemSelection;
        qtc.QItemSelectionModel_SelectionChanged(@ptrCast(self.ptr), @ptrCast(selected.ptr), @ptrCast(deselected.ptr));
    }

    /// ### DEPRECATED: Use `onSelectionChanged` instead
    ///
    pub const OnSelectionChanged = onSelectionChanged;

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
    pub fn onSelectionChanged(self: KBreadcrumbSelectionModel, callback: *const fn (KBreadcrumbSelectionModel, QItemSelection, QItemSelection) callconv(.c) void) void {
        qtc.QItemSelectionModel_Connect_SelectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `currentChanged` instead
    ///
    pub const CurrentChanged = currentChanged;

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
    pub fn currentChanged(self: KBreadcrumbSelectionModel, current: anytype, previous: anytype) void {
        comptime _ = @TypeOf(current)._is_QModelIndex;
        comptime _ = @TypeOf(previous)._is_QModelIndex;
        qtc.QItemSelectionModel_CurrentChanged(@ptrCast(self.ptr), @ptrCast(current.ptr), @ptrCast(previous.ptr));
    }

    /// ### DEPRECATED: Use `onCurrentChanged` instead
    ///
    pub const OnCurrentChanged = onCurrentChanged;

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
    pub fn onCurrentChanged(self: KBreadcrumbSelectionModel, callback: *const fn (KBreadcrumbSelectionModel, QModelIndex, QModelIndex) callconv(.c) void) void {
        qtc.QItemSelectionModel_Connect_CurrentChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `currentRowChanged` instead
    ///
    pub const CurrentRowChanged = currentRowChanged;

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
    pub fn currentRowChanged(self: KBreadcrumbSelectionModel, current: anytype, previous: anytype) void {
        comptime _ = @TypeOf(current)._is_QModelIndex;
        comptime _ = @TypeOf(previous)._is_QModelIndex;
        qtc.QItemSelectionModel_CurrentRowChanged(@ptrCast(self.ptr), @ptrCast(current.ptr), @ptrCast(previous.ptr));
    }

    /// ### DEPRECATED: Use `onCurrentRowChanged` instead
    ///
    pub const OnCurrentRowChanged = onCurrentRowChanged;

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
    pub fn onCurrentRowChanged(self: KBreadcrumbSelectionModel, callback: *const fn (KBreadcrumbSelectionModel, QModelIndex, QModelIndex) callconv(.c) void) void {
        qtc.QItemSelectionModel_Connect_CurrentRowChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `currentColumnChanged` instead
    ///
    pub const CurrentColumnChanged = currentColumnChanged;

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
    pub fn currentColumnChanged(self: KBreadcrumbSelectionModel, current: anytype, previous: anytype) void {
        comptime _ = @TypeOf(current)._is_QModelIndex;
        comptime _ = @TypeOf(previous)._is_QModelIndex;
        qtc.QItemSelectionModel_CurrentColumnChanged(@ptrCast(self.ptr), @ptrCast(current.ptr), @ptrCast(previous.ptr));
    }

    /// ### DEPRECATED: Use `onCurrentColumnChanged` instead
    ///
    pub const OnCurrentColumnChanged = onCurrentColumnChanged;

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
    pub fn onCurrentColumnChanged(self: KBreadcrumbSelectionModel, callback: *const fn (KBreadcrumbSelectionModel, QModelIndex, QModelIndex) callconv(.c) void) void {
        qtc.QItemSelectionModel_Connect_CurrentColumnChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `modelChanged` instead
    ///
    pub const ModelChanged = modelChanged;

    /// Inherited from QItemSelectionModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#modelChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` _model: QAbstractItemModel `
    ///
    pub fn modelChanged(self: KBreadcrumbSelectionModel, _model: anytype) void {
        comptime _ = @TypeOf(_model)._is_QAbstractItemModel;
        qtc.QItemSelectionModel_ModelChanged(@ptrCast(self.ptr), @ptrCast(_model.ptr));
    }

    /// ### DEPRECATED: Use `onModelChanged` instead
    ///
    pub const OnModelChanged = onModelChanged;

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
    pub fn onModelChanged(self: KBreadcrumbSelectionModel, callback: *const fn (KBreadcrumbSelectionModel, QAbstractItemModel) callconv(.c) void) void {
        qtc.QItemSelectionModel_Connect_ModelChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isRowSelected2` instead
    ///
    pub const IsRowSelected2 = isRowSelected2;

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
    /// ` _parent: QModelIndex `
    ///
    pub fn isRowSelected2(self: KBreadcrumbSelectionModel, row: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QItemSelectionModel_IsRowSelected2(@ptrCast(self.ptr), @bitCast(row), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `isColumnSelected2` instead
    ///
    pub const IsColumnSelected2 = isColumnSelected2;

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
    /// ` _parent: QModelIndex `
    ///
    pub fn isColumnSelected2(self: KBreadcrumbSelectionModel, column: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QItemSelectionModel_IsColumnSelected2(@ptrCast(self.ptr), @bitCast(column), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `rowIntersectsSelection2` instead
    ///
    pub const RowIntersectsSelection2 = rowIntersectsSelection2;

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
    /// ` _parent: QModelIndex `
    ///
    pub fn rowIntersectsSelection2(self: KBreadcrumbSelectionModel, row: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QItemSelectionModel_RowIntersectsSelection2(@ptrCast(self.ptr), @bitCast(row), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `columnIntersectsSelection2` instead
    ///
    pub const ColumnIntersectsSelection2 = columnIntersectsSelection2;

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
    /// ` _parent: QModelIndex `
    ///
    pub fn columnIntersectsSelection2(self: KBreadcrumbSelectionModel, column: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QItemSelectionModel_ColumnIntersectsSelection2(@ptrCast(self.ptr), @bitCast(column), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `selectedRows1` instead
    ///
    pub const SelectedRows1 = selectedRows1;

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
    pub fn selectedRows1(self: KBreadcrumbSelectionModel, allocator: std.mem.Allocator, column: i32) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.QItemSelectionModel_SelectedRows1(@ptrCast(self.ptr), @bitCast(column));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("KBreadcrumbSelectionModel.selectedRows1: Memory allocation failed");
        const _data_val: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `selectedColumns1` instead
    ///
    pub const SelectedColumns1 = selectedColumns1;

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
    pub fn selectedColumns1(self: KBreadcrumbSelectionModel, allocator: std.mem.Allocator, row: i32) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.QItemSelectionModel_SelectedColumns1(@ptrCast(self.ptr), @bitCast(row));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("KBreadcrumbSelectionModel.selectedColumns1: Memory allocation failed");
        const _data_val: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `objectName` instead
    ///
    pub const ObjectName = objectName;

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
    pub fn objectName(self: KBreadcrumbSelectionModel, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KBreadcrumbSelectionModel.objectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setObjectName` instead
    ///
    pub const SetObjectName = setObjectName;

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
    pub fn setObjectName(self: KBreadcrumbSelectionModel, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `isWidgetType` instead
    ///
    pub const IsWidgetType = isWidgetType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn isWidgetType(self: KBreadcrumbSelectionModel) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWindowType` instead
    ///
    pub const IsWindowType = isWindowType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn isWindowType(self: KBreadcrumbSelectionModel) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isQuickItemType` instead
    ///
    pub const IsQuickItemType = isQuickItemType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn isQuickItemType(self: KBreadcrumbSelectionModel) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `signalsBlocked` instead
    ///
    pub const SignalsBlocked = signalsBlocked;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn signalsBlocked(self: KBreadcrumbSelectionModel) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blockSignals` instead
    ///
    pub const BlockSignals = blockSignals;

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
    pub fn blockSignals(self: KBreadcrumbSelectionModel, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `thread` instead
    ///
    pub const Thread = thread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn thread(self: KBreadcrumbSelectionModel) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `moveToThread` instead
    ///
    pub const MoveToThread = moveToThread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KBreadcrumbSelectionModel, _thread: anytype) bool {
        comptime _ = @TypeOf(_thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(_thread.ptr));
    }

    /// ### DEPRECATED: Use `startTimer` instead
    ///
    pub const StartTimer = startTimer;

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
    pub fn startTimer(self: KBreadcrumbSelectionModel, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// ### DEPRECATED: Use `startTimer2` instead
    ///
    pub const StartTimer2 = startTimer2;

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
    pub fn startTimer2(self: KBreadcrumbSelectionModel, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// ### DEPRECATED: Use `killTimer` instead
    ///
    pub const KillTimer = killTimer;

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
    pub fn killTimer(self: KBreadcrumbSelectionModel, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `killTimer2` instead
    ///
    pub const KillTimer2 = killTimer2;

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
    pub fn killTimer2(self: KBreadcrumbSelectionModel, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `children` instead
    ///
    pub const Children = children;

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
    pub fn children(self: KBreadcrumbSelectionModel, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KBreadcrumbSelectionModel.children: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setParent` instead
    ///
    pub const SetParent = setParent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KBreadcrumbSelectionModel, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `installEventFilter` instead
    ///
    pub const InstallEventFilter = installEventFilter;

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
    pub fn installEventFilter(self: KBreadcrumbSelectionModel, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// ### DEPRECATED: Use `removeEventFilter` instead
    ///
    pub const RemoveEventFilter = removeEventFilter;

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
    pub fn removeEventFilter(self: KBreadcrumbSelectionModel, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// ### DEPRECATED: Use `connect` instead
    ///
    pub const Connect = connect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// ### DEPRECATED: Use `connect2` instead
    ///
    pub const Connect2 = connect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn connect2(_sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// ### DEPRECATED: Use `connect3` instead
    ///
    pub const Connect3 = connect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KBreadcrumbSelectionModel, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// ### DEPRECATED: Use `disconnect` instead
    ///
    pub const Disconnect = disconnect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect2` instead
    ///
    pub const Disconnect2 = disconnect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn disconnect2(_sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// ### DEPRECATED: Use `disconnect3` instead
    ///
    pub const Disconnect3 = disconnect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn disconnect3(self: KBreadcrumbSelectionModel) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `disconnect4` instead
    ///
    pub const Disconnect4 = disconnect4;

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
    pub fn disconnect4(self: KBreadcrumbSelectionModel, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect5` instead
    ///
    pub const Disconnect5 = disconnect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectTree` instead
    ///
    pub const DumpObjectTree = dumpObjectTree;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn dumpObjectTree(self: KBreadcrumbSelectionModel) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectInfo` instead
    ///
    pub const DumpObjectInfo = dumpObjectInfo;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn dumpObjectInfo(self: KBreadcrumbSelectionModel) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

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
    pub fn setProperty(self: KBreadcrumbSelectionModel, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

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
    pub fn property(self: KBreadcrumbSelectionModel, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// ### DEPRECATED: Use `dynamicPropertyNames` instead
    ///
    pub const DynamicPropertyNames = dynamicPropertyNames;

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
    pub fn dynamicPropertyNames(self: KBreadcrumbSelectionModel, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KBreadcrumbSelectionModel.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KBreadcrumbSelectionModel.dynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `bindingStorage` instead
    ///
    pub const BindingStorage = bindingStorage;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn bindingStorage(self: KBreadcrumbSelectionModel) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `bindingStorage2` instead
    ///
    pub const BindingStorage2 = bindingStorage2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn bindingStorage2(self: KBreadcrumbSelectionModel) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `destroyed` instead
    ///
    pub const Destroyed = destroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn destroyed(self: KBreadcrumbSelectionModel) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed` instead
    ///
    pub const OnDestroyed = onDestroyed;

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
    pub fn onDestroyed(self: KBreadcrumbSelectionModel, callback: *const fn (KBreadcrumbSelectionModel) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn parent(self: KBreadcrumbSelectionModel) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `inherits` instead
    ///
    pub const Inherits = inherits;

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
    pub fn inherits(self: KBreadcrumbSelectionModel, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// ### DEPRECATED: Use `deleteLater` instead
    ///
    pub const DeleteLater = deleteLater;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn deleteLater(self: KBreadcrumbSelectionModel) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startTimer22` instead
    ///
    pub const StartTimer22 = startTimer22;

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
    pub fn startTimer22(self: KBreadcrumbSelectionModel, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `startTimer23` instead
    ///
    pub const StartTimer23 = startTimer23;

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
    pub fn startTimer23(self: KBreadcrumbSelectionModel, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `connect5` instead
    ///
    pub const Connect5 = connect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn connect5(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// ### DEPRECATED: Use `connect52` instead
    ///
    pub const Connect52 = connect52;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect52(_sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `connect4` instead
    ///
    pub const Connect4 = connect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KBreadcrumbSelectionModel, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `disconnect1` instead
    ///
    pub const Disconnect1 = disconnect1;

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
    pub fn disconnect1(self: KBreadcrumbSelectionModel, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect22` instead
    ///
    pub const Disconnect22 = disconnect22;

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
    pub fn disconnect22(self: KBreadcrumbSelectionModel, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect32` instead
    ///
    pub const Disconnect32 = disconnect32;

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
    pub fn disconnect32(self: KBreadcrumbSelectionModel, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect23` instead
    ///
    pub const Disconnect23 = disconnect23;

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
    pub fn disconnect23(self: KBreadcrumbSelectionModel, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `destroyed1` instead
    ///
    pub const Destroyed1 = destroyed1;

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
    pub fn destroyed1(self: KBreadcrumbSelectionModel, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed1` instead
    ///
    pub const OnDestroyed1 = onDestroyed1;

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
    pub fn onDestroyed1(self: KBreadcrumbSelectionModel, callback: *const fn (KBreadcrumbSelectionModel, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setCurrentIndex` instead
    ///
    pub const SetCurrentIndex = setCurrentIndex;

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
    pub fn setCurrentIndex(self: KBreadcrumbSelectionModel, index: anytype, command: i32) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KBreadcrumbSelectionModel_SetCurrentIndex(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(command));
    }

    /// ### DEPRECATED: Use `superSetCurrentIndex` instead
    ///
    pub const SuperSetCurrentIndex = superSetCurrentIndex;

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
    pub fn superSetCurrentIndex(self: KBreadcrumbSelectionModel, index: anytype, command: i32) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.KBreadcrumbSelectionModel_SuperSetCurrentIndex(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(command));
    }

    /// ### DEPRECATED: Use `onSetCurrentIndex` instead
    ///
    pub const OnSetCurrentIndex = onSetCurrentIndex;

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
    pub fn onSetCurrentIndex(self: KBreadcrumbSelectionModel, callback: *const fn (KBreadcrumbSelectionModel, QModelIndex, i32) callconv(.c) void) void {
        qtc.KBreadcrumbSelectionModel_OnSetCurrentIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

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
    pub fn clear(self: KBreadcrumbSelectionModel) void {
        qtc.KBreadcrumbSelectionModel_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superClear` instead
    ///
    pub const SuperClear = superClear;

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
    pub fn superClear(self: KBreadcrumbSelectionModel) void {
        qtc.KBreadcrumbSelectionModel_SuperClear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onClear` instead
    ///
    pub const OnClear = onClear;

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
    pub fn onClear(self: KBreadcrumbSelectionModel, callback: *const fn () callconv(.c) void) void {
        qtc.KBreadcrumbSelectionModel_OnClear(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `reset` instead
    ///
    pub const Reset = reset;

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
    pub fn reset(self: KBreadcrumbSelectionModel) void {
        qtc.KBreadcrumbSelectionModel_Reset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superReset` instead
    ///
    pub const SuperReset = superReset;

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
    pub fn superReset(self: KBreadcrumbSelectionModel) void {
        qtc.KBreadcrumbSelectionModel_SuperReset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReset` instead
    ///
    pub const OnReset = onReset;

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
    pub fn onReset(self: KBreadcrumbSelectionModel, callback: *const fn () callconv(.c) void) void {
        qtc.KBreadcrumbSelectionModel_OnReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `clearCurrentIndex` instead
    ///
    pub const ClearCurrentIndex = clearCurrentIndex;

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
    pub fn clearCurrentIndex(self: KBreadcrumbSelectionModel) void {
        qtc.KBreadcrumbSelectionModel_ClearCurrentIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superClearCurrentIndex` instead
    ///
    pub const SuperClearCurrentIndex = superClearCurrentIndex;

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
    pub fn superClearCurrentIndex(self: KBreadcrumbSelectionModel) void {
        qtc.KBreadcrumbSelectionModel_SuperClearCurrentIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onClearCurrentIndex` instead
    ///
    pub const OnClearCurrentIndex = onClearCurrentIndex;

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
    pub fn onClearCurrentIndex(self: KBreadcrumbSelectionModel, callback: *const fn () callconv(.c) void) void {
        qtc.KBreadcrumbSelectionModel_OnClearCurrentIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

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
    /// ` _event: QEvent `
    ///
    pub fn event(self: KBreadcrumbSelectionModel, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KBreadcrumbSelectionModel_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KBreadcrumbSelectionModel, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KBreadcrumbSelectionModel_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

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
    pub fn onEvent(self: KBreadcrumbSelectionModel, callback: *const fn (KBreadcrumbSelectionModel, QEvent) callconv(.c) bool) void {
        qtc.KBreadcrumbSelectionModel_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KBreadcrumbSelectionModel, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KBreadcrumbSelectionModel_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KBreadcrumbSelectionModel, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KBreadcrumbSelectionModel_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

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
    pub fn onEventFilter(self: KBreadcrumbSelectionModel, callback: *const fn (KBreadcrumbSelectionModel, QObject, QEvent) callconv(.c) bool) void {
        qtc.KBreadcrumbSelectionModel_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KBreadcrumbSelectionModel, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KBreadcrumbSelectionModel_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KBreadcrumbSelectionModel, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KBreadcrumbSelectionModel_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

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
    pub fn onTimerEvent(self: KBreadcrumbSelectionModel, callback: *const fn (KBreadcrumbSelectionModel, QTimerEvent) callconv(.c) void) void {
        qtc.KBreadcrumbSelectionModel_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childEvent` instead
    ///
    pub const ChildEvent = childEvent;

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
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KBreadcrumbSelectionModel, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KBreadcrumbSelectionModel_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superChildEvent` instead
    ///
    pub const SuperChildEvent = superChildEvent;

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
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KBreadcrumbSelectionModel, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KBreadcrumbSelectionModel_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onChildEvent` instead
    ///
    pub const OnChildEvent = onChildEvent;

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
    pub fn onChildEvent(self: KBreadcrumbSelectionModel, callback: *const fn (KBreadcrumbSelectionModel, QChildEvent) callconv(.c) void) void {
        qtc.KBreadcrumbSelectionModel_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customEvent` instead
    ///
    pub const CustomEvent = customEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KBreadcrumbSelectionModel, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KBreadcrumbSelectionModel_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superCustomEvent` instead
    ///
    pub const SuperCustomEvent = superCustomEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KBreadcrumbSelectionModel, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KBreadcrumbSelectionModel_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onCustomEvent` instead
    ///
    pub const OnCustomEvent = onCustomEvent;

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
    pub fn onCustomEvent(self: KBreadcrumbSelectionModel, callback: *const fn (KBreadcrumbSelectionModel, QEvent) callconv(.c) void) void {
        qtc.KBreadcrumbSelectionModel_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `connectNotify` instead
    ///
    pub const ConnectNotify = connectNotify;

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
    pub fn connectNotify(self: KBreadcrumbSelectionModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KBreadcrumbSelectionModel_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superConnectNotify` instead
    ///
    pub const SuperConnectNotify = superConnectNotify;

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
    pub fn superConnectNotify(self: KBreadcrumbSelectionModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KBreadcrumbSelectionModel_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onConnectNotify` instead
    ///
    pub const OnConnectNotify = onConnectNotify;

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
    pub fn onConnectNotify(self: KBreadcrumbSelectionModel, callback: *const fn (KBreadcrumbSelectionModel, QMetaMethod) callconv(.c) void) void {
        qtc.KBreadcrumbSelectionModel_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `disconnectNotify` instead
    ///
    pub const DisconnectNotify = disconnectNotify;

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
    pub fn disconnectNotify(self: KBreadcrumbSelectionModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KBreadcrumbSelectionModel_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superDisconnectNotify` instead
    ///
    pub const SuperDisconnectNotify = superDisconnectNotify;

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
    pub fn superDisconnectNotify(self: KBreadcrumbSelectionModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KBreadcrumbSelectionModel_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnectNotify` instead
    ///
    pub const OnDisconnectNotify = onDisconnectNotify;

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
    pub fn onDisconnectNotify(self: KBreadcrumbSelectionModel, callback: *const fn (KBreadcrumbSelectionModel, QMetaMethod) callconv(.c) void) void {
        qtc.KBreadcrumbSelectionModel_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `emitSelectionChanged` instead
    ///
    pub const EmitSelectionChanged = emitSelectionChanged;

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
    pub fn emitSelectionChanged(self: KBreadcrumbSelectionModel, newSelection: anytype, oldSelection: anytype) void {
        comptime _ = @TypeOf(newSelection)._is_QItemSelection;
        comptime _ = @TypeOf(oldSelection)._is_QItemSelection;
        qtc.KBreadcrumbSelectionModel_EmitSelectionChanged(@ptrCast(self.ptr), @ptrCast(newSelection.ptr), @ptrCast(oldSelection.ptr));
    }

    /// ### DEPRECATED: Use `superEmitSelectionChanged` instead
    ///
    pub const SuperEmitSelectionChanged = superEmitSelectionChanged;

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
    pub fn superEmitSelectionChanged(self: KBreadcrumbSelectionModel, newSelection: anytype, oldSelection: anytype) void {
        comptime _ = @TypeOf(newSelection)._is_QItemSelection;
        comptime _ = @TypeOf(oldSelection)._is_QItemSelection;
        qtc.KBreadcrumbSelectionModel_SuperEmitSelectionChanged(@ptrCast(self.ptr), @ptrCast(newSelection.ptr), @ptrCast(oldSelection.ptr));
    }

    /// ### DEPRECATED: Use `onEmitSelectionChanged` instead
    ///
    pub const OnEmitSelectionChanged = onEmitSelectionChanged;

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
    pub fn onEmitSelectionChanged(self: KBreadcrumbSelectionModel, callback: *const fn (KBreadcrumbSelectionModel, QItemSelection, QItemSelection) callconv(.c) void) void {
        qtc.KBreadcrumbSelectionModel_OnEmitSelectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sender` instead
    ///
    pub const Sender = sender;

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
    pub fn sender(self: KBreadcrumbSelectionModel) QObject {
        return .{ .ptr = qtc.KBreadcrumbSelectionModel_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSender` instead
    ///
    pub const SuperSender = superSender;

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
    pub fn superSender(self: KBreadcrumbSelectionModel) QObject {
        return .{ .ptr = qtc.KBreadcrumbSelectionModel_SuperSender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSender` instead
    ///
    pub const OnSender = onSender;

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
    pub fn onSender(self: KBreadcrumbSelectionModel, callback: *const fn () callconv(.c) QObject) void {
        qtc.KBreadcrumbSelectionModel_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `senderSignalIndex` instead
    ///
    pub const SenderSignalIndex = senderSignalIndex;

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
    pub fn senderSignalIndex(self: KBreadcrumbSelectionModel) i32 {
        return qtc.KBreadcrumbSelectionModel_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSenderSignalIndex` instead
    ///
    pub const SuperSenderSignalIndex = superSenderSignalIndex;

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
    pub fn superSenderSignalIndex(self: KBreadcrumbSelectionModel) i32 {
        return qtc.KBreadcrumbSelectionModel_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSenderSignalIndex` instead
    ///
    pub const OnSenderSignalIndex = onSenderSignalIndex;

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
    pub fn onSenderSignalIndex(self: KBreadcrumbSelectionModel, callback: *const fn () callconv(.c) i32) void {
        qtc.KBreadcrumbSelectionModel_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `receivers` instead
    ///
    pub const Receivers = receivers;

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
    pub fn receivers(self: KBreadcrumbSelectionModel, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KBreadcrumbSelectionModel_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `superReceivers` instead
    ///
    pub const SuperReceivers = superReceivers;

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
    pub fn superReceivers(self: KBreadcrumbSelectionModel, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KBreadcrumbSelectionModel_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `onReceivers` instead
    ///
    pub const OnReceivers = onReceivers;

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
    pub fn onReceivers(self: KBreadcrumbSelectionModel, callback: *const fn (KBreadcrumbSelectionModel, [*:0]const u8) callconv(.c) i32) void {
        qtc.KBreadcrumbSelectionModel_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isSignalConnected` instead
    ///
    pub const IsSignalConnected = isSignalConnected;

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
    pub fn isSignalConnected(self: KBreadcrumbSelectionModel, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KBreadcrumbSelectionModel_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superIsSignalConnected` instead
    ///
    pub const SuperIsSignalConnected = superIsSignalConnected;

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
    pub fn superIsSignalConnected(self: KBreadcrumbSelectionModel, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KBreadcrumbSelectionModel_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onIsSignalConnected` instead
    ///
    pub const OnIsSignalConnected = onIsSignalConnected;

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
    pub fn onIsSignalConnected(self: KBreadcrumbSelectionModel, callback: *const fn (KBreadcrumbSelectionModel, QMetaMethod) callconv(.c) bool) void {
        qtc.KBreadcrumbSelectionModel_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onObjectNameChanged` instead
    ///
    pub const OnObjectNameChanged = onObjectNameChanged;

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
    pub fn onObjectNameChanged(self: KBreadcrumbSelectionModel, callback: *const fn (KBreadcrumbSelectionModel, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kbreadcrumbselectionmodel.html#dtor.KBreadcrumbSelectionModel)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KBreadcrumbSelectionModel `
    ///
    pub fn delete(self: KBreadcrumbSelectionModel) void {
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
