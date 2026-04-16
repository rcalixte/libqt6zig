const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAbstractItemModel = @import("libqt6").QAbstractItemModel;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QModelIndex = @import("libqt6").QModelIndex;
const QObject = @import("libqt6").QObject;
const QPersistentModelIndex = @import("libqt6").QPersistentModelIndex;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qitemselectionmodel_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html)
pub const QItemSelectionRange = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QItemSelectionRange,

    pub const _is_QItemSelectionRange = {};

    /// New constructs a new QItemSelectionRange object.
    ///
    pub fn New() QItemSelectionRange {
        return .{ .ptr = qtc.QItemSelectionRange_new() };
    }

    /// New2 constructs a new QItemSelectionRange object.
    ///
    /// ## Parameter(s):
    ///
    /// ` topL: QModelIndex `
    ///
    /// ` bottomR: QModelIndex `
    ///
    pub fn New2(topL: anytype, bottomR: anytype) QItemSelectionRange {
        comptime _ = @TypeOf(topL)._is_QModelIndex;
        comptime _ = @TypeOf(bottomR)._is_QModelIndex;
        return .{ .ptr = qtc.QItemSelectionRange_new2(@ptrCast(topL.ptr), @ptrCast(bottomR.ptr)) };
    }

    /// New3 constructs a new QItemSelectionRange object.
    ///
    /// ## Parameter(s):
    ///
    /// ` index: QModelIndex `
    ///
    pub fn New3(index: anytype) QItemSelectionRange {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QItemSelectionRange_new3(@ptrCast(index.ptr)) };
    }

    /// New4 constructs a new QItemSelectionRange object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QItemSelectionRange `
    ///
    pub fn New4(param1: anytype) QItemSelectionRange {
        comptime _ = @TypeOf(param1)._is_QItemSelectionRange;
        return .{ .ptr = qtc.QItemSelectionRange_new4(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionRange `
    ///
    /// ` other: QItemSelectionRange `
    ///
    pub fn Swap(self: QItemSelectionRange, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QItemSelectionRange;
        qtc.QItemSelectionRange_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#top)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionRange `
    ///
    pub fn Top(self: QItemSelectionRange) i32 {
        return qtc.QItemSelectionRange_Top(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#left)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionRange `
    ///
    pub fn Left(self: QItemSelectionRange) i32 {
        return qtc.QItemSelectionRange_Left(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#bottom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionRange `
    ///
    pub fn Bottom(self: QItemSelectionRange) i32 {
        return qtc.QItemSelectionRange_Bottom(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#right)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionRange `
    ///
    pub fn Right(self: QItemSelectionRange) i32 {
        return qtc.QItemSelectionRange_Right(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionRange `
    ///
    pub fn Width(self: QItemSelectionRange) i32 {
        return qtc.QItemSelectionRange_Width(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionRange `
    ///
    pub fn Height(self: QItemSelectionRange) i32 {
        return qtc.QItemSelectionRange_Height(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#topLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionRange `
    ///
    pub fn TopLeft(self: QItemSelectionRange) QPersistentModelIndex {
        return .{ .ptr = qtc.QItemSelectionRange_TopLeft(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#bottomRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionRange `
    ///
    pub fn BottomRight(self: QItemSelectionRange) QPersistentModelIndex {
        return .{ .ptr = qtc.QItemSelectionRange_BottomRight(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionRange `
    ///
    pub fn Parent(self: QItemSelectionRange) QModelIndex {
        return .{ .ptr = qtc.QItemSelectionRange_Parent(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#model)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionRange `
    ///
    pub fn Model(self: QItemSelectionRange) QAbstractItemModel {
        return .{ .ptr = qtc.QItemSelectionRange_Model(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionRange `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn Contains(self: QItemSelectionRange, index: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QItemSelectionRange_Contains(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionRange `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parentIndex: QModelIndex `
    ///
    pub fn Contains2(self: QItemSelectionRange, row: i32, column: i32, parentIndex: anytype) bool {
        comptime _ = @TypeOf(parentIndex)._is_QModelIndex;
        return qtc.QItemSelectionRange_Contains2(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(parentIndex.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#intersects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionRange `
    ///
    /// ` other: QItemSelectionRange `
    ///
    pub fn Intersects(self: QItemSelectionRange, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QItemSelectionRange;
        return qtc.QItemSelectionRange_Intersects(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#intersected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionRange `
    ///
    /// ` other: QItemSelectionRange `
    ///
    pub fn Intersected(self: QItemSelectionRange, other: anytype) QItemSelectionRange {
        comptime _ = @TypeOf(other)._is_QItemSelectionRange;
        return .{ .ptr = qtc.QItemSelectionRange_Intersected(@ptrCast(self.ptr), @ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionRange `
    ///
    pub fn IsValid(self: QItemSelectionRange) bool {
        return qtc.QItemSelectionRange_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionRange `
    ///
    pub fn IsEmpty(self: QItemSelectionRange) bool {
        return qtc.QItemSelectionRange_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#indexes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionRange `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Indexes(self: QItemSelectionRange, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.QItemSelectionRange_Indexes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("qitemselectionrange.Indexes: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionrange.html#dtor.QItemSelectionRange)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QItemSelectionRange `
    ///
    pub fn Delete(self: QItemSelectionRange) void {
        qtc.QItemSelectionRange_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html)
pub const QItemSelectionModel = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QItemSelectionModel,

    pub const _is_QItemSelectionModel = {};
    pub const _is_QObject = {};

    /// New constructs a new QItemSelectionModel object.
    ///
    pub fn New() QItemSelectionModel {
        return .{ .ptr = qtc.QItemSelectionModel_new() };
    }

    /// New2 constructs a new QItemSelectionModel object.
    ///
    /// ## Parameter(s):
    ///
    /// ` model: QAbstractItemModel `
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(model: anytype, parent: anytype) QItemSelectionModel {
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QItemSelectionModel_new2(@ptrCast(model.ptr), @ptrCast(parent.ptr)) };
    }

    /// New3 constructs a new QItemSelectionModel object.
    ///
    /// ## Parameter(s):
    ///
    /// ` model: QAbstractItemModel `
    ///
    pub fn New3(model: anytype) QItemSelectionModel {
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        return .{ .ptr = qtc.QItemSelectionModel_new3(@ptrCast(model.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    pub fn MetaObject(self: QItemSelectionModel) QMetaObject {
        return .{ .ptr = qtc.QItemSelectionModel_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QItemSelectionModel, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QItemSelectionModel_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QItemSelectionModel `
    ///
    pub fn SuperMetaObject(self: QItemSelectionModel) QMetaObject {
        return .{ .ptr = qtc.QItemSelectionModel_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QItemSelectionModel, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QItemSelectionModel_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` callback: *const fn (self: QItemSelectionModel, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QItemSelectionModel, callback: *const fn (QItemSelectionModel, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QItemSelectionModel_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QItemSelectionModel, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QItemSelectionModel_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QItemSelectionModel, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QItemSelectionModel_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` callback: *const fn (self: QItemSelectionModel, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QItemSelectionModel, callback: *const fn (QItemSelectionModel, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QItemSelectionModel_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QItemSelectionModel, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QItemSelectionModel_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qitemselectionmodel.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    pub fn CurrentIndex(self: QItemSelectionModel) QModelIndex {
        return .{ .ptr = qtc.QItemSelectionModel_CurrentIndex(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#isSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn IsSelected(self: QItemSelectionModel, index: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QItemSelectionModel_IsSelected(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#isRowSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` row: i32 `
    ///
    pub fn IsRowSelected(self: QItemSelectionModel, row: i32) bool {
        return qtc.QItemSelectionModel_IsRowSelected(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#isColumnSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` column: i32 `
    ///
    pub fn IsColumnSelected(self: QItemSelectionModel, column: i32) bool {
        return qtc.QItemSelectionModel_IsColumnSelected(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#rowIntersectsSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` row: i32 `
    ///
    pub fn RowIntersectsSelection(self: QItemSelectionModel, row: i32) bool {
        return qtc.QItemSelectionModel_RowIntersectsSelection(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#columnIntersectsSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` column: i32 `
    ///
    pub fn ColumnIntersectsSelection(self: QItemSelectionModel, column: i32) bool {
        return qtc.QItemSelectionModel_ColumnIntersectsSelection(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#hasSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    pub fn HasSelection(self: QItemSelectionModel) bool {
        return qtc.QItemSelectionModel_HasSelection(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectedIndexes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectedIndexes(self: QItemSelectionModel, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.QItemSelectionModel_SelectedIndexes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("qitemselectionmodel.SelectedIndexes: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectedRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectedRows(self: QItemSelectionModel, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.QItemSelectionModel_SelectedRows(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("qitemselectionmodel.SelectedRows: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectedColumns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectedColumns(self: QItemSelectionModel, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.QItemSelectionModel_SelectedColumns(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("qitemselectionmodel.SelectedColumns: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#selection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    pub fn Selection(self: QItemSelectionModel) QItemSelection {
        return .{ .ptr = qtc.QItemSelectionModel_Selection(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#model)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    pub fn Model(self: QItemSelectionModel) QAbstractItemModel {
        return .{ .ptr = qtc.QItemSelectionModel_Model(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#model)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    pub fn Model2(self: QItemSelectionModel) QAbstractItemModel {
        return .{ .ptr = qtc.QItemSelectionModel_Model2(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#setModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` model: QAbstractItemModel `
    ///
    pub fn SetModel(self: QItemSelectionModel, model: anytype) void {
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        qtc.QItemSelectionModel_SetModel(@ptrCast(self.ptr), @ptrCast(model.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#setCurrentIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` command: flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn SetCurrentIndex(self: QItemSelectionModel, index: anytype, command: i32) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QItemSelectionModel_SetCurrentIndex(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(command));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#setCurrentIndex)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` callback: *const fn (self: QItemSelectionModel, index: QModelIndex, command: flag of qitemselectionmodel_enums.SelectionFlag) callconv(.c) void `
    ///
    pub fn OnSetCurrentIndex(self: QItemSelectionModel, callback: *const fn (QItemSelectionModel, QModelIndex, i32) callconv(.c) void) void {
        qtc.QItemSelectionModel_OnSetCurrentIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetCurrentIndex` instead
    ///
    pub const QBaseSetCurrentIndex = SuperSetCurrentIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#setCurrentIndex)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` command: flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn SuperSetCurrentIndex(self: QItemSelectionModel, index: anytype, command: i32) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QItemSelectionModel_SuperSetCurrentIndex(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(command));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#select)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` command: flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn Select(self: QItemSelectionModel, index: anytype, command: i32) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QItemSelectionModel_Select(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(command));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#select)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` callback: *const fn (self: QItemSelectionModel, index: QModelIndex, command: flag of qitemselectionmodel_enums.SelectionFlag) callconv(.c) void `
    ///
    pub fn OnSelect(self: QItemSelectionModel, callback: *const fn (QItemSelectionModel, QModelIndex, i32) callconv(.c) void) void {
        qtc.QItemSelectionModel_OnSelect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSelect` instead
    ///
    pub const QBaseSelect = SuperSelect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#select)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` command: flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn SuperSelect(self: QItemSelectionModel, index: anytype, command: i32) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QItemSelectionModel_SuperSelect(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(command));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#select)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` selection: QItemSelection `
    ///
    /// ` command: flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn Select2(self: QItemSelectionModel, selection: anytype, command: i32) void {
        comptime _ = @TypeOf(selection)._is_QItemSelection;
        qtc.QItemSelectionModel_Select2(@ptrCast(self.ptr), @ptrCast(selection.ptr), @bitCast(command));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#select)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` callback: *const fn (self: QItemSelectionModel, selection: QItemSelection, command: flag of qitemselectionmodel_enums.SelectionFlag) callconv(.c) void `
    ///
    pub fn OnSelect2(self: QItemSelectionModel, callback: *const fn (QItemSelectionModel, QItemSelection, i32) callconv(.c) void) void {
        qtc.QItemSelectionModel_OnSelect2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSelect2` instead
    ///
    pub const QBaseSelect2 = SuperSelect2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#select)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` selection: QItemSelection `
    ///
    /// ` command: flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn SuperSelect2(self: QItemSelectionModel, selection: anytype, command: i32) void {
        comptime _ = @TypeOf(selection)._is_QItemSelection;
        qtc.QItemSelectionModel_SuperSelect2(@ptrCast(self.ptr), @ptrCast(selection.ptr), @bitCast(command));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    pub fn Clear(self: QItemSelectionModel) void {
        qtc.QItemSelectionModel_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#clear)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnClear(self: QItemSelectionModel, callback: *const fn () callconv(.c) void) void {
        qtc.QItemSelectionModel_OnClear(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClear` instead
    ///
    pub const QBaseClear = SuperClear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#clear)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    pub fn SuperClear(self: QItemSelectionModel) void {
        qtc.QItemSelectionModel_SuperClear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#reset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    pub fn Reset(self: QItemSelectionModel) void {
        qtc.QItemSelectionModel_Reset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#reset)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnReset(self: QItemSelectionModel, callback: *const fn () callconv(.c) void) void {
        qtc.QItemSelectionModel_OnReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReset` instead
    ///
    pub const QBaseReset = SuperReset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#reset)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    pub fn SuperReset(self: QItemSelectionModel) void {
        qtc.QItemSelectionModel_SuperReset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#clearSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    pub fn ClearSelection(self: QItemSelectionModel) void {
        qtc.QItemSelectionModel_ClearSelection(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#clearCurrentIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    pub fn ClearCurrentIndex(self: QItemSelectionModel) void {
        qtc.QItemSelectionModel_ClearCurrentIndex(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#clearCurrentIndex)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnClearCurrentIndex(self: QItemSelectionModel, callback: *const fn () callconv(.c) void) void {
        qtc.QItemSelectionModel_OnClearCurrentIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClearCurrentIndex` instead
    ///
    pub const QBaseClearCurrentIndex = SuperClearCurrentIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#clearCurrentIndex)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    pub fn SuperClearCurrentIndex(self: QItemSelectionModel) void {
        qtc.QItemSelectionModel_SuperClearCurrentIndex(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` selected: QItemSelection `
    ///
    /// ` deselected: QItemSelection `
    ///
    pub fn SelectionChanged(self: QItemSelectionModel, selected: anytype, deselected: anytype) void {
        comptime _ = @TypeOf(selected)._is_QItemSelection;
        comptime _ = @TypeOf(deselected)._is_QItemSelection;
        qtc.QItemSelectionModel_SelectionChanged(@ptrCast(self.ptr), @ptrCast(selected.ptr), @ptrCast(deselected.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` callback: *const fn (self: QItemSelectionModel, selected: QItemSelection, deselected: QItemSelection) callconv(.c) void `
    ///
    pub fn OnSelectionChanged(self: QItemSelectionModel, callback: *const fn (QItemSelectionModel, QItemSelection, QItemSelection) callconv(.c) void) void {
        qtc.QItemSelectionModel_Connect_SelectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` current: QModelIndex `
    ///
    /// ` previous: QModelIndex `
    ///
    pub fn CurrentChanged(self: QItemSelectionModel, current: anytype, previous: anytype) void {
        comptime _ = @TypeOf(current)._is_QModelIndex;
        comptime _ = @TypeOf(previous)._is_QModelIndex;
        qtc.QItemSelectionModel_CurrentChanged(@ptrCast(self.ptr), @ptrCast(current.ptr), @ptrCast(previous.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` callback: *const fn (self: QItemSelectionModel, current: QModelIndex, previous: QModelIndex) callconv(.c) void `
    ///
    pub fn OnCurrentChanged(self: QItemSelectionModel, callback: *const fn (QItemSelectionModel, QModelIndex, QModelIndex) callconv(.c) void) void {
        qtc.QItemSelectionModel_Connect_CurrentChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentRowChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` current: QModelIndex `
    ///
    /// ` previous: QModelIndex `
    ///
    pub fn CurrentRowChanged(self: QItemSelectionModel, current: anytype, previous: anytype) void {
        comptime _ = @TypeOf(current)._is_QModelIndex;
        comptime _ = @TypeOf(previous)._is_QModelIndex;
        qtc.QItemSelectionModel_CurrentRowChanged(@ptrCast(self.ptr), @ptrCast(current.ptr), @ptrCast(previous.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentRowChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` callback: *const fn (self: QItemSelectionModel, current: QModelIndex, previous: QModelIndex) callconv(.c) void `
    ///
    pub fn OnCurrentRowChanged(self: QItemSelectionModel, callback: *const fn (QItemSelectionModel, QModelIndex, QModelIndex) callconv(.c) void) void {
        qtc.QItemSelectionModel_Connect_CurrentRowChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentColumnChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` current: QModelIndex `
    ///
    /// ` previous: QModelIndex `
    ///
    pub fn CurrentColumnChanged(self: QItemSelectionModel, current: anytype, previous: anytype) void {
        comptime _ = @TypeOf(current)._is_QModelIndex;
        comptime _ = @TypeOf(previous)._is_QModelIndex;
        qtc.QItemSelectionModel_CurrentColumnChanged(@ptrCast(self.ptr), @ptrCast(current.ptr), @ptrCast(previous.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#currentColumnChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` callback: *const fn (self: QItemSelectionModel, current: QModelIndex, previous: QModelIndex) callconv(.c) void `
    ///
    pub fn OnCurrentColumnChanged(self: QItemSelectionModel, callback: *const fn (QItemSelectionModel, QModelIndex, QModelIndex) callconv(.c) void) void {
        qtc.QItemSelectionModel_Connect_CurrentColumnChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#modelChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` model: QAbstractItemModel `
    ///
    pub fn ModelChanged(self: QItemSelectionModel, model: anytype) void {
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        qtc.QItemSelectionModel_ModelChanged(@ptrCast(self.ptr), @ptrCast(model.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#modelChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` callback: *const fn (self: QItemSelectionModel, model: QAbstractItemModel) callconv(.c) void `
    ///
    pub fn OnModelChanged(self: QItemSelectionModel, callback: *const fn (QItemSelectionModel, QAbstractItemModel) callconv(.c) void) void {
        qtc.QItemSelectionModel_Connect_ModelChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#emitSelectionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` newSelection: QItemSelection `
    ///
    /// ` oldSelection: QItemSelection `
    ///
    pub fn EmitSelectionChanged(self: QItemSelectionModel, newSelection: anytype, oldSelection: anytype) void {
        comptime _ = @TypeOf(newSelection)._is_QItemSelection;
        comptime _ = @TypeOf(oldSelection)._is_QItemSelection;
        qtc.QItemSelectionModel_EmitSelectionChanged(@ptrCast(self.ptr), @ptrCast(newSelection.ptr), @ptrCast(oldSelection.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#emitSelectionChanged)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` callback: *const fn (self: QItemSelectionModel, newSelection: QItemSelection, oldSelection: QItemSelection) callconv(.c) void `
    ///
    pub fn OnEmitSelectionChanged(self: QItemSelectionModel, callback: *const fn (QItemSelectionModel, QItemSelection, QItemSelection) callconv(.c) void) void {
        qtc.QItemSelectionModel_OnEmitSelectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEmitSelectionChanged` instead
    ///
    pub const QBaseEmitSelectionChanged = SuperEmitSelectionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#emitSelectionChanged)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` newSelection: QItemSelection `
    ///
    /// ` oldSelection: QItemSelection `
    ///
    pub fn SuperEmitSelectionChanged(self: QItemSelectionModel, newSelection: anytype, oldSelection: anytype) void {
        comptime _ = @TypeOf(newSelection)._is_QItemSelection;
        comptime _ = @TypeOf(oldSelection)._is_QItemSelection;
        qtc.QItemSelectionModel_SuperEmitSelectionChanged(@ptrCast(self.ptr), @ptrCast(newSelection.ptr), @ptrCast(oldSelection.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qitemselectionmodel.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qitemselectionmodel.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#isRowSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` row: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn IsRowSelected2(self: QItemSelectionModel, row: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QItemSelectionModel_IsRowSelected2(@ptrCast(self.ptr), @bitCast(row), @ptrCast(parent.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#isColumnSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn IsColumnSelected2(self: QItemSelectionModel, column: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QItemSelectionModel_IsColumnSelected2(@ptrCast(self.ptr), @bitCast(column), @ptrCast(parent.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#rowIntersectsSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` row: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn RowIntersectsSelection2(self: QItemSelectionModel, row: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QItemSelectionModel_RowIntersectsSelection2(@ptrCast(self.ptr), @bitCast(row), @ptrCast(parent.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#columnIntersectsSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn ColumnIntersectsSelection2(self: QItemSelectionModel, column: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QItemSelectionModel_ColumnIntersectsSelection2(@ptrCast(self.ptr), @bitCast(column), @ptrCast(parent.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectedRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` column: i32 `
    ///
    pub fn SelectedRows1(self: QItemSelectionModel, allocator: std.mem.Allocator, column: i32) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.QItemSelectionModel_SelectedRows1(@ptrCast(self.ptr), @bitCast(column));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("qitemselectionmodel.SelectedRows1: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#selectedColumns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` row: i32 `
    ///
    pub fn SelectedColumns1(self: QItemSelectionModel, allocator: std.mem.Allocator, row: i32) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.QItemSelectionModel_SelectedColumns1(@ptrCast(self.ptr), @bitCast(row));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("qitemselectionmodel.SelectedColumns1: Memory allocation failed");
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
    /// ` self: QItemSelectionModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QItemSelectionModel, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
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
    /// ` self: QItemSelectionModel `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QItemSelectionModel, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    pub fn IsWidgetType(self: QItemSelectionModel) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    pub fn IsWindowType(self: QItemSelectionModel) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    pub fn IsQuickItemType(self: QItemSelectionModel) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    pub fn SignalsBlocked(self: QItemSelectionModel) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QItemSelectionModel, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    pub fn Thread(self: QItemSelectionModel) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QItemSelectionModel, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QItemSelectionModel, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QItemSelectionModel, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QItemSelectionModel, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QItemSelectionModel, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QItemSelectionModel, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qitemselectionmodel.Children: Memory allocation failed");
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
    /// ` self: QItemSelectionModel `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QItemSelectionModel, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QItemSelectionModel, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QItemSelectionModel, obj: anytype) void {
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
    /// ` self: QItemSelectionModel `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QItemSelectionModel, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QItemSelectionModel `
    ///
    pub fn Disconnect3(self: QItemSelectionModel) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QItemSelectionModel, receiver: anytype) bool {
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
    /// ` self: QItemSelectionModel `
    ///
    pub fn DumpObjectTree(self: QItemSelectionModel) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    pub fn DumpObjectInfo(self: QItemSelectionModel) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QItemSelectionModel, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QItemSelectionModel `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QItemSelectionModel, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QItemSelectionModel, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ` self: QItemSelectionModel `
    ///
    pub fn BindingStorage(self: QItemSelectionModel) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    pub fn BindingStorage2(self: QItemSelectionModel) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    pub fn Destroyed(self: QItemSelectionModel) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` callback: *const fn (self: QItemSelectionModel) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QItemSelectionModel, callback: *const fn (QItemSelectionModel) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    pub fn Parent(self: QItemSelectionModel) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QItemSelectionModel, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    pub fn DeleteLater(self: QItemSelectionModel) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QItemSelectionModel, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QItemSelectionModel, time: i64, timerType: i32) i32 {
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
    /// ` self: QItemSelectionModel `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QItemSelectionModel, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QItemSelectionModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QItemSelectionModel, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QItemSelectionModel, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QItemSelectionModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QItemSelectionModel, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QItemSelectionModel `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QItemSelectionModel, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QItemSelectionModel `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QItemSelectionModel, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` callback: *const fn (self: QItemSelectionModel, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QItemSelectionModel, callback: *const fn (QItemSelectionModel, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QItemSelectionModel, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QItemSelectionModel_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QItemSelectionModel `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QItemSelectionModel, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QItemSelectionModel_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemSelectionModel`
    ///
    /// ` callback: *const fn (self: QItemSelectionModel, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QItemSelectionModel, callback: *const fn (QItemSelectionModel, QEvent) callconv(.c) bool) void {
        qtc.QItemSelectionModel_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QItemSelectionModel, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QItemSelectionModel_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QItemSelectionModel `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QItemSelectionModel, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QItemSelectionModel_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemSelectionModel`
    ///
    /// ` callback: *const fn (self: QItemSelectionModel, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QItemSelectionModel, callback: *const fn (QItemSelectionModel, QObject, QEvent) callconv(.c) bool) void {
        qtc.QItemSelectionModel_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QItemSelectionModel, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QItemSelectionModel_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QItemSelectionModel `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QItemSelectionModel, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QItemSelectionModel_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemSelectionModel`
    ///
    /// ` callback: *const fn (self: QItemSelectionModel, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QItemSelectionModel, callback: *const fn (QItemSelectionModel, QTimerEvent) callconv(.c) void) void {
        qtc.QItemSelectionModel_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QItemSelectionModel, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QItemSelectionModel_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QItemSelectionModel `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QItemSelectionModel, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QItemSelectionModel_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemSelectionModel`
    ///
    /// ` callback: *const fn (self: QItemSelectionModel, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QItemSelectionModel, callback: *const fn (QItemSelectionModel, QChildEvent) callconv(.c) void) void {
        qtc.QItemSelectionModel_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QItemSelectionModel, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QItemSelectionModel_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QItemSelectionModel `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QItemSelectionModel, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QItemSelectionModel_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemSelectionModel`
    ///
    /// ` callback: *const fn (self: QItemSelectionModel, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QItemSelectionModel, callback: *const fn (QItemSelectionModel, QEvent) callconv(.c) void) void {
        qtc.QItemSelectionModel_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QItemSelectionModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QItemSelectionModel_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QItemSelectionModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QItemSelectionModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QItemSelectionModel_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemSelectionModel`
    ///
    /// ` callback: *const fn (self: QItemSelectionModel, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QItemSelectionModel, callback: *const fn (QItemSelectionModel, QMetaMethod) callconv(.c) void) void {
        qtc.QItemSelectionModel_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QItemSelectionModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QItemSelectionModel_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QItemSelectionModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QItemSelectionModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QItemSelectionModel_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemSelectionModel`
    ///
    /// ` callback: *const fn (self: QItemSelectionModel, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QItemSelectionModel, callback: *const fn (QItemSelectionModel, QMetaMethod) callconv(.c) void) void {
        qtc.QItemSelectionModel_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    pub fn Sender(self: QItemSelectionModel) QObject {
        return .{ .ptr = qtc.QItemSelectionModel_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QItemSelectionModel `
    ///
    pub fn SuperSender(self: QItemSelectionModel) QObject {
        return .{ .ptr = qtc.QItemSelectionModel_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemSelectionModel`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QItemSelectionModel, callback: *const fn () callconv(.c) QObject) void {
        qtc.QItemSelectionModel_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    pub fn SenderSignalIndex(self: QItemSelectionModel) i32 {
        return qtc.QItemSelectionModel_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QItemSelectionModel `
    ///
    pub fn SuperSenderSignalIndex(self: QItemSelectionModel) i32 {
        return qtc.QItemSelectionModel_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemSelectionModel`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QItemSelectionModel, callback: *const fn () callconv(.c) i32) void {
        qtc.QItemSelectionModel_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QItemSelectionModel, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QItemSelectionModel_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QItemSelectionModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QItemSelectionModel, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QItemSelectionModel_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemSelectionModel`
    ///
    /// ` callback: *const fn (self: QItemSelectionModel, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QItemSelectionModel, callback: *const fn (QItemSelectionModel, [*:0]const u8) callconv(.c) i32) void {
        qtc.QItemSelectionModel_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QItemSelectionModel, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QItemSelectionModel_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QItemSelectionModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QItemSelectionModel, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QItemSelectionModel_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemSelectionModel`
    ///
    /// ` callback: *const fn (self: QItemSelectionModel, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QItemSelectionModel, callback: *const fn (QItemSelectionModel, QMetaMethod) callconv(.c) bool) void {
        qtc.QItemSelectionModel_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QItemSelectionModel `
    ///
    /// ` callback: *const fn (self: QItemSelectionModel, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QItemSelectionModel, callback: *const fn (QItemSelectionModel, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#dtor.QItemSelectionModel)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QItemSelectionModel `
    ///
    pub fn Delete(self: QItemSelectionModel) void {
        qtc.QItemSelectionModel_Delete(@ptrCast(self.ptr));
    }
};

// Also inherits unprojectable QList<QItemSelectionRange>

/// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselection.html)
pub const QItemSelection = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselection.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QItemSelection,

    pub const _is_QItemSelection = {};

    /// New constructs a new QItemSelection object.
    ///
    /// ## Parameter(s):
    ///
    /// ` topLeft: QModelIndex `
    ///
    /// ` bottomRight: QModelIndex `
    ///
    pub fn New(topLeft: anytype, bottomRight: anytype) QItemSelection {
        comptime _ = @TypeOf(topLeft)._is_QModelIndex;
        comptime _ = @TypeOf(bottomRight)._is_QModelIndex;
        return .{ .ptr = qtc.QItemSelection_new(@ptrCast(topLeft.ptr), @ptrCast(bottomRight.ptr)) };
    }

    /// New2 constructs a new QItemSelection object.
    ///
    pub fn New2() QItemSelection {
        return .{ .ptr = qtc.QItemSelection_new2() };
    }

    /// New3 constructs a new QItemSelection object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QItemSelection `
    ///
    pub fn New3(param1: anytype) QItemSelection {
        comptime _ = @TypeOf(param1)._is_QItemSelection;
        return .{ .ptr = qtc.QItemSelection_new3(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselection.html#select)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelection `
    ///
    /// ` topLeft: QModelIndex `
    ///
    /// ` bottomRight: QModelIndex `
    ///
    pub fn Select(self: QItemSelection, topLeft: anytype, bottomRight: anytype) void {
        comptime _ = @TypeOf(topLeft)._is_QModelIndex;
        comptime _ = @TypeOf(bottomRight)._is_QModelIndex;
        qtc.QItemSelection_Select(@ptrCast(self.ptr), @ptrCast(topLeft.ptr), @ptrCast(bottomRight.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselection.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelection `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn Contains(self: QItemSelection, index: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QItemSelection_Contains(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselection.html#indexes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Indexes(self: QItemSelection, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.QItemSelection_Indexes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("qitemselection.Indexes: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselection.html#merge)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QItemSelection `
    ///
    /// ` other: QItemSelection `
    ///
    /// ` command: flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn Merge(self: QItemSelection, other: anytype, command: i32) void {
        comptime _ = @TypeOf(other)._is_QItemSelection;
        qtc.QItemSelection_Merge(@ptrCast(self.ptr), @ptrCast(other.ptr), @bitCast(command));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselection.html#split)
    ///
    /// ## Parameter(s):
    ///
    /// ` range: QItemSelectionRange `
    ///
    /// ` other: QItemSelectionRange `
    ///
    /// ` result: QItemSelection `
    ///
    pub fn Split(range: anytype, other: anytype, result: anytype) void {
        comptime _ = @TypeOf(range)._is_QItemSelectionRange;
        comptime _ = @TypeOf(other)._is_QItemSelectionRange;
        comptime _ = @TypeOf(result)._is_QItemSelection;
        qtc.QItemSelection_Split(@ptrCast(range.ptr), @ptrCast(other.ptr), @ptrCast(result.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselection.html#dtor.QItemSelection)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QItemSelection `
    ///
    pub fn Delete(self: QItemSelection) void {
        qtc.QItemSelection_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qitemselectionmodel.html#public-types)
pub const enums = struct {
    pub const SelectionFlag = enum(i32) {
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
