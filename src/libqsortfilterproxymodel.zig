const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAbstractItemModel = @import("libqt6").QAbstractItemModel;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QDataStream = @import("libqt6").QDataStream;
const QEvent = @import("libqt6").QEvent;
const QItemSelection = @import("libqt6").QItemSelection;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QMimeData = @import("libqt6").QMimeData;
const QModelIndex = @import("libqt6").QModelIndex;
const QModelRoleDataSpan = @import("libqt6").QModelRoleDataSpan;
const QObject = @import("libqt6").QObject;
const QPersistentModelIndex = @import("libqt6").QPersistentModelIndex;
const QRegularExpression = @import("libqt6").QRegularExpression;
const QSize = @import("libqt6").QSize;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qabstractitemmodel_enums = @import("libqabstractitemmodel.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");
const ArrayMap_i32_QVariant = std.array_hash_map.Auto(i32, QVariant);
const Map_i32_u8 = std.AutoHashMapUnmanaged(i32, []u8);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html)
pub const QSortFilterProxyModel = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSortFilterProxyModel,

    pub const _is_QSortFilterProxyModel = {};
    pub const _is_QAbstractProxyModel = {};
    pub const _is_QAbstractItemModel = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSortFilterProxyModel object in C++ memory
    ///
    pub fn new() QSortFilterProxyModel {
        return .{ .ptr = qtc.QSortFilterProxyModel_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QSortFilterProxyModel object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QSortFilterProxyModel {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QSortFilterProxyModel_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn metaObject(self: QSortFilterProxyModel) QMetaObject {
        return .{ .ptr = qtc.QSortFilterProxyModel_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QSortFilterProxyModel, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QSortFilterProxyModel_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn superMetaObject(self: QSortFilterProxyModel) QMetaObject {
        return .{ .ptr = qtc.QSortFilterProxyModel_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QSortFilterProxyModel, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSortFilterProxyModel_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QSortFilterProxyModel_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QSortFilterProxyModel, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSortFilterProxyModel_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QSortFilterProxyModel, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSortFilterProxyModel_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QSortFilterProxyModel_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QSortFilterProxyModel, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSortFilterProxyModel_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSortFilterProxyModel.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setSourceModel` instead
    ///
    pub const SetSourceModel = setSourceModel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSourceModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _sourceModel: QAbstractItemModel `
    ///
    pub fn setSourceModel(self: QSortFilterProxyModel, _sourceModel: anytype) void {
        comptime _ = @TypeOf(_sourceModel)._is_QAbstractItemModel;
        qtc.QSortFilterProxyModel_SetSourceModel(@ptrCast(self.ptr), @ptrCast(_sourceModel.ptr));
    }

    /// ### DEPRECATED: Use `onSetSourceModel` instead
    ///
    pub const OnSetSourceModel = onSetSourceModel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSourceModel)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, sourceModel: QAbstractItemModel) callconv(.c) void `
    ///
    pub fn onSetSourceModel(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QAbstractItemModel) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnSetSourceModel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetSourceModel` instead
    ///
    pub const SuperSetSourceModel = superSetSourceModel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSourceModel)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _sourceModel: QAbstractItemModel `
    ///
    pub fn superSetSourceModel(self: QSortFilterProxyModel, _sourceModel: anytype) void {
        comptime _ = @TypeOf(_sourceModel)._is_QAbstractItemModel;
        qtc.QSortFilterProxyModel_SuperSetSourceModel(@ptrCast(self.ptr), @ptrCast(_sourceModel.ptr));
    }

    /// ### DEPRECATED: Use `mapToSource` instead
    ///
    pub const MapToSource = mapToSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapToSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` proxyIndex: QModelIndex `
    ///
    pub fn mapToSource(self: QSortFilterProxyModel, proxyIndex: anytype) QModelIndex {
        comptime _ = @TypeOf(proxyIndex)._is_QModelIndex;
        return .{ .ptr = qtc.QSortFilterProxyModel_MapToSource(@ptrCast(self.ptr), @ptrCast(proxyIndex.ptr)) };
    }

    /// ### DEPRECATED: Use `onMapToSource` instead
    ///
    pub const OnMapToSource = onMapToSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapToSource)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, proxyIndex: QModelIndex) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMapToSource(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.QSortFilterProxyModel_OnMapToSource(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMapToSource` instead
    ///
    pub const SuperMapToSource = superMapToSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapToSource)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` proxyIndex: QModelIndex `
    ///
    pub fn superMapToSource(self: QSortFilterProxyModel, proxyIndex: anytype) QModelIndex {
        comptime _ = @TypeOf(proxyIndex)._is_QModelIndex;
        return .{ .ptr = qtc.QSortFilterProxyModel_SuperMapToSource(@ptrCast(self.ptr), @ptrCast(proxyIndex.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromSource` instead
    ///
    pub const MapFromSource = mapFromSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapFromSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` sourceIndex: QModelIndex `
    ///
    pub fn mapFromSource(self: QSortFilterProxyModel, sourceIndex: anytype) QModelIndex {
        comptime _ = @TypeOf(sourceIndex)._is_QModelIndex;
        return .{ .ptr = qtc.QSortFilterProxyModel_MapFromSource(@ptrCast(self.ptr), @ptrCast(sourceIndex.ptr)) };
    }

    /// ### DEPRECATED: Use `onMapFromSource` instead
    ///
    pub const OnMapFromSource = onMapFromSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapFromSource)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, sourceIndex: QModelIndex) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMapFromSource(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.QSortFilterProxyModel_OnMapFromSource(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMapFromSource` instead
    ///
    pub const SuperMapFromSource = superMapFromSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapFromSource)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` sourceIndex: QModelIndex `
    ///
    pub fn superMapFromSource(self: QSortFilterProxyModel, sourceIndex: anytype) QModelIndex {
        comptime _ = @TypeOf(sourceIndex)._is_QModelIndex;
        return .{ .ptr = qtc.QSortFilterProxyModel_SuperMapFromSource(@ptrCast(self.ptr), @ptrCast(sourceIndex.ptr)) };
    }

    /// ### DEPRECATED: Use `mapSelectionToSource` instead
    ///
    pub const MapSelectionToSource = mapSelectionToSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionToSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` proxySelection: QItemSelection `
    ///
    pub fn mapSelectionToSource(self: QSortFilterProxyModel, proxySelection: anytype) QItemSelection {
        comptime _ = @TypeOf(proxySelection)._is_QItemSelection;
        return .{ .ptr = qtc.QSortFilterProxyModel_MapSelectionToSource(@ptrCast(self.ptr), @ptrCast(proxySelection.ptr)) };
    }

    /// ### DEPRECATED: Use `onMapSelectionToSource` instead
    ///
    pub const OnMapSelectionToSource = onMapSelectionToSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionToSource)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, proxySelection: QItemSelection) callconv(.c) QItemSelection `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMapSelectionToSource(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QItemSelection) callconv(.c) QItemSelection) void {
        qtc.QSortFilterProxyModel_OnMapSelectionToSource(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMapSelectionToSource` instead
    ///
    pub const SuperMapSelectionToSource = superMapSelectionToSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionToSource)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` proxySelection: QItemSelection `
    ///
    pub fn superMapSelectionToSource(self: QSortFilterProxyModel, proxySelection: anytype) QItemSelection {
        comptime _ = @TypeOf(proxySelection)._is_QItemSelection;
        return .{ .ptr = qtc.QSortFilterProxyModel_SuperMapSelectionToSource(@ptrCast(self.ptr), @ptrCast(proxySelection.ptr)) };
    }

    /// ### DEPRECATED: Use `mapSelectionFromSource` instead
    ///
    pub const MapSelectionFromSource = mapSelectionFromSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionFromSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` sourceSelection: QItemSelection `
    ///
    pub fn mapSelectionFromSource(self: QSortFilterProxyModel, sourceSelection: anytype) QItemSelection {
        comptime _ = @TypeOf(sourceSelection)._is_QItemSelection;
        return .{ .ptr = qtc.QSortFilterProxyModel_MapSelectionFromSource(@ptrCast(self.ptr), @ptrCast(sourceSelection.ptr)) };
    }

    /// ### DEPRECATED: Use `onMapSelectionFromSource` instead
    ///
    pub const OnMapSelectionFromSource = onMapSelectionFromSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionFromSource)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, sourceSelection: QItemSelection) callconv(.c) QItemSelection `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMapSelectionFromSource(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QItemSelection) callconv(.c) QItemSelection) void {
        qtc.QSortFilterProxyModel_OnMapSelectionFromSource(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMapSelectionFromSource` instead
    ///
    pub const SuperMapSelectionFromSource = superMapSelectionFromSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionFromSource)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` sourceSelection: QItemSelection `
    ///
    pub fn superMapSelectionFromSource(self: QSortFilterProxyModel, sourceSelection: anytype) QItemSelection {
        comptime _ = @TypeOf(sourceSelection)._is_QItemSelection;
        return .{ .ptr = qtc.QSortFilterProxyModel_SuperMapSelectionFromSource(@ptrCast(self.ptr), @ptrCast(sourceSelection.ptr)) };
    }

    /// ### DEPRECATED: Use `filterRegularExpression` instead
    ///
    pub const FilterRegularExpression = filterRegularExpression;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterRegularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn filterRegularExpression(self: QSortFilterProxyModel) QRegularExpression {
        return .{ .ptr = qtc.QSortFilterProxyModel_FilterRegularExpression(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `filterKeyColumn` instead
    ///
    pub const FilterKeyColumn = filterKeyColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterKeyColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn filterKeyColumn(self: QSortFilterProxyModel) i32 {
        return qtc.QSortFilterProxyModel_FilterKeyColumn(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFilterKeyColumn` instead
    ///
    pub const SetFilterKeyColumn = setFilterKeyColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterKeyColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` column: i32 `
    ///
    pub fn setFilterKeyColumn(self: QSortFilterProxyModel, column: i32) void {
        qtc.QSortFilterProxyModel_SetFilterKeyColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `filterCaseSensitivity` instead
    ///
    pub const FilterCaseSensitivity = filterCaseSensitivity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterCaseSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.CaseSensitivity `
    ///
    pub fn filterCaseSensitivity(self: QSortFilterProxyModel) i32 {
        return qtc.QSortFilterProxyModel_FilterCaseSensitivity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFilterCaseSensitivity` instead
    ///
    pub const SetFilterCaseSensitivity = setFilterCaseSensitivity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterCaseSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn setFilterCaseSensitivity(self: QSortFilterProxyModel, cs: i32) void {
        qtc.QSortFilterProxyModel_SetFilterCaseSensitivity(@ptrCast(self.ptr), @bitCast(cs));
    }

    /// ### DEPRECATED: Use `sortCaseSensitivity` instead
    ///
    pub const SortCaseSensitivity = sortCaseSensitivity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortCaseSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.CaseSensitivity `
    ///
    pub fn sortCaseSensitivity(self: QSortFilterProxyModel) i32 {
        return qtc.QSortFilterProxyModel_SortCaseSensitivity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSortCaseSensitivity` instead
    ///
    pub const SetSortCaseSensitivity = setSortCaseSensitivity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSortCaseSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn setSortCaseSensitivity(self: QSortFilterProxyModel, cs: i32) void {
        qtc.QSortFilterProxyModel_SetSortCaseSensitivity(@ptrCast(self.ptr), @bitCast(cs));
    }

    /// ### DEPRECATED: Use `isSortLocaleAware` instead
    ///
    pub const IsSortLocaleAware = isSortLocaleAware;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#isSortLocaleAware)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn isSortLocaleAware(self: QSortFilterProxyModel) bool {
        return qtc.QSortFilterProxyModel_IsSortLocaleAware(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSortLocaleAware` instead
    ///
    pub const SetSortLocaleAware = setSortLocaleAware;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSortLocaleAware)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` on: bool `
    ///
    pub fn setSortLocaleAware(self: QSortFilterProxyModel, on: bool) void {
        qtc.QSortFilterProxyModel_SetSortLocaleAware(@ptrCast(self.ptr), on);
    }

    /// ### DEPRECATED: Use `sortColumn` instead
    ///
    pub const SortColumn = sortColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn sortColumn(self: QSortFilterProxyModel) i32 {
        return qtc.QSortFilterProxyModel_SortColumn(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `sortOrder` instead
    ///
    pub const SortOrder = sortOrder;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortOrder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.SortOrder `
    ///
    pub fn sortOrder(self: QSortFilterProxyModel) i32 {
        return qtc.QSortFilterProxyModel_SortOrder(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dynamicSortFilter` instead
    ///
    pub const DynamicSortFilter = dynamicSortFilter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dynamicSortFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn dynamicSortFilter(self: QSortFilterProxyModel) bool {
        return qtc.QSortFilterProxyModel_DynamicSortFilter(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDynamicSortFilter` instead
    ///
    pub const SetDynamicSortFilter = setDynamicSortFilter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setDynamicSortFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` enable: bool `
    ///
    pub fn setDynamicSortFilter(self: QSortFilterProxyModel, enable: bool) void {
        qtc.QSortFilterProxyModel_SetDynamicSortFilter(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `sortRole` instead
    ///
    pub const SortRole = sortRole;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn sortRole(self: QSortFilterProxyModel) i32 {
        return qtc.QSortFilterProxyModel_SortRole(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSortRole` instead
    ///
    pub const SetSortRole = setSortRole;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSortRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` role: i32 `
    ///
    pub fn setSortRole(self: QSortFilterProxyModel, role: i32) void {
        qtc.QSortFilterProxyModel_SetSortRole(@ptrCast(self.ptr), @bitCast(role));
    }

    /// ### DEPRECATED: Use `filterRole` instead
    ///
    pub const FilterRole = filterRole;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn filterRole(self: QSortFilterProxyModel) i32 {
        return qtc.QSortFilterProxyModel_FilterRole(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFilterRole` instead
    ///
    pub const SetFilterRole = setFilterRole;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` role: i32 `
    ///
    pub fn setFilterRole(self: QSortFilterProxyModel, role: i32) void {
        qtc.QSortFilterProxyModel_SetFilterRole(@ptrCast(self.ptr), @bitCast(role));
    }

    /// ### DEPRECATED: Use `isRecursiveFilteringEnabled` instead
    ///
    pub const IsRecursiveFilteringEnabled = isRecursiveFilteringEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#isRecursiveFilteringEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn isRecursiveFilteringEnabled(self: QSortFilterProxyModel) bool {
        return qtc.QSortFilterProxyModel_IsRecursiveFilteringEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRecursiveFilteringEnabled` instead
    ///
    pub const SetRecursiveFilteringEnabled = setRecursiveFilteringEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setRecursiveFilteringEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` recursive: bool `
    ///
    pub fn setRecursiveFilteringEnabled(self: QSortFilterProxyModel, recursive: bool) void {
        qtc.QSortFilterProxyModel_SetRecursiveFilteringEnabled(@ptrCast(self.ptr), recursive);
    }

    /// ### DEPRECATED: Use `autoAcceptChildRows` instead
    ///
    pub const AutoAcceptChildRows = autoAcceptChildRows;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#autoAcceptChildRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn autoAcceptChildRows(self: QSortFilterProxyModel) bool {
        return qtc.QSortFilterProxyModel_AutoAcceptChildRows(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoAcceptChildRows` instead
    ///
    pub const SetAutoAcceptChildRows = setAutoAcceptChildRows;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setAutoAcceptChildRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` accept: bool `
    ///
    pub fn setAutoAcceptChildRows(self: QSortFilterProxyModel, accept: bool) void {
        qtc.QSortFilterProxyModel_SetAutoAcceptChildRows(@ptrCast(self.ptr), accept);
    }

    /// ### DEPRECATED: Use `setFilterRegularExpression` instead
    ///
    pub const SetFilterRegularExpression = setFilterRegularExpression;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterRegularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` pattern: []const u8 `
    ///
    pub fn setFilterRegularExpression(self: QSortFilterProxyModel, pattern: []const u8) void {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        qtc.QSortFilterProxyModel_SetFilterRegularExpression(@ptrCast(self.ptr), pattern_str);
    }

    /// ### DEPRECATED: Use `setFilterRegularExpression2` instead
    ///
    pub const SetFilterRegularExpression2 = setFilterRegularExpression2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterRegularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` regularExpression: QRegularExpression `
    ///
    pub fn setFilterRegularExpression2(self: QSortFilterProxyModel, regularExpression: anytype) void {
        comptime _ = @TypeOf(regularExpression)._is_QRegularExpression;
        qtc.QSortFilterProxyModel_SetFilterRegularExpression2(@ptrCast(self.ptr), @ptrCast(regularExpression.ptr));
    }

    /// ### DEPRECATED: Use `setFilterWildcard` instead
    ///
    pub const SetFilterWildcard = setFilterWildcard;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterWildcard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` pattern: []const u8 `
    ///
    pub fn setFilterWildcard(self: QSortFilterProxyModel, pattern: []const u8) void {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        qtc.QSortFilterProxyModel_SetFilterWildcard(@ptrCast(self.ptr), pattern_str);
    }

    /// ### DEPRECATED: Use `setFilterFixedString` instead
    ///
    pub const SetFilterFixedString = setFilterFixedString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterFixedString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` pattern: []const u8 `
    ///
    pub fn setFilterFixedString(self: QSortFilterProxyModel, pattern: []const u8) void {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        qtc.QSortFilterProxyModel_SetFilterFixedString(@ptrCast(self.ptr), pattern_str);
    }

    /// ### DEPRECATED: Use `invalidate` instead
    ///
    pub const Invalidate = invalidate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn invalidate(self: QSortFilterProxyModel) void {
        qtc.QSortFilterProxyModel_Invalidate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `filterAcceptsRow` instead
    ///
    pub const FilterAcceptsRow = filterAcceptsRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` source_row: i32 `
    ///
    /// ` source_parent: QModelIndex `
    ///
    pub fn filterAcceptsRow(self: QSortFilterProxyModel, source_row: i32, source_parent: anytype) bool {
        comptime _ = @TypeOf(source_parent)._is_QModelIndex;
        return qtc.QSortFilterProxyModel_FilterAcceptsRow(@ptrCast(self.ptr), @bitCast(source_row), @ptrCast(source_parent.ptr));
    }

    /// ### DEPRECATED: Use `onFilterAcceptsRow` instead
    ///
    pub const OnFilterAcceptsRow = onFilterAcceptsRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsRow)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, source_row: i32, source_parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onFilterAcceptsRow(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, i32, QModelIndex) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnFilterAcceptsRow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFilterAcceptsRow` instead
    ///
    pub const SuperFilterAcceptsRow = superFilterAcceptsRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsRow)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` source_row: i32 `
    ///
    /// ` source_parent: QModelIndex `
    ///
    pub fn superFilterAcceptsRow(self: QSortFilterProxyModel, source_row: i32, source_parent: anytype) bool {
        comptime _ = @TypeOf(source_parent)._is_QModelIndex;
        return qtc.QSortFilterProxyModel_SuperFilterAcceptsRow(@ptrCast(self.ptr), @bitCast(source_row), @ptrCast(source_parent.ptr));
    }

    /// ### DEPRECATED: Use `filterAcceptsColumn` instead
    ///
    pub const FilterAcceptsColumn = filterAcceptsColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` source_column: i32 `
    ///
    /// ` source_parent: QModelIndex `
    ///
    pub fn filterAcceptsColumn(self: QSortFilterProxyModel, source_column: i32, source_parent: anytype) bool {
        comptime _ = @TypeOf(source_parent)._is_QModelIndex;
        return qtc.QSortFilterProxyModel_FilterAcceptsColumn(@ptrCast(self.ptr), @bitCast(source_column), @ptrCast(source_parent.ptr));
    }

    /// ### DEPRECATED: Use `onFilterAcceptsColumn` instead
    ///
    pub const OnFilterAcceptsColumn = onFilterAcceptsColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsColumn)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, source_column: i32, source_parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onFilterAcceptsColumn(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, i32, QModelIndex) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnFilterAcceptsColumn(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFilterAcceptsColumn` instead
    ///
    pub const SuperFilterAcceptsColumn = superFilterAcceptsColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsColumn)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` source_column: i32 `
    ///
    /// ` source_parent: QModelIndex `
    ///
    pub fn superFilterAcceptsColumn(self: QSortFilterProxyModel, source_column: i32, source_parent: anytype) bool {
        comptime _ = @TypeOf(source_parent)._is_QModelIndex;
        return qtc.QSortFilterProxyModel_SuperFilterAcceptsColumn(@ptrCast(self.ptr), @bitCast(source_column), @ptrCast(source_parent.ptr));
    }

    /// ### DEPRECATED: Use `lessThan` instead
    ///
    pub const LessThan = lessThan;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#lessThan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` source_left: QModelIndex `
    ///
    /// ` source_right: QModelIndex `
    ///
    pub fn lessThan(self: QSortFilterProxyModel, source_left: anytype, source_right: anytype) bool {
        comptime _ = @TypeOf(source_left)._is_QModelIndex;
        comptime _ = @TypeOf(source_right)._is_QModelIndex;
        return qtc.QSortFilterProxyModel_LessThan(@ptrCast(self.ptr), @ptrCast(source_left.ptr), @ptrCast(source_right.ptr));
    }

    /// ### DEPRECATED: Use `onLessThan` instead
    ///
    pub const OnLessThan = onLessThan;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#lessThan)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, source_left: QModelIndex, source_right: QModelIndex) callconv(.c) bool `
    ///
    pub fn onLessThan(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QModelIndex, QModelIndex) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnLessThan(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superLessThan` instead
    ///
    pub const SuperLessThan = superLessThan;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#lessThan)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` source_left: QModelIndex `
    ///
    /// ` source_right: QModelIndex `
    ///
    pub fn superLessThan(self: QSortFilterProxyModel, source_left: anytype, source_right: anytype) bool {
        comptime _ = @TypeOf(source_left)._is_QModelIndex;
        comptime _ = @TypeOf(source_right)._is_QModelIndex;
        return qtc.QSortFilterProxyModel_SuperLessThan(@ptrCast(self.ptr), @ptrCast(source_left.ptr), @ptrCast(source_right.ptr));
    }

    /// ### DEPRECATED: Use `invalidateFilter` instead
    ///
    pub const InvalidateFilter = invalidateFilter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn invalidateFilter(self: QSortFilterProxyModel) void {
        qtc.QSortFilterProxyModel_InvalidateFilter(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onInvalidateFilter` instead
    ///
    pub const OnInvalidateFilter = onInvalidateFilter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateFilter)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onInvalidateFilter(self: QSortFilterProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnInvalidateFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInvalidateFilter` instead
    ///
    pub const SuperInvalidateFilter = superInvalidateFilter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateFilter)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn superInvalidateFilter(self: QSortFilterProxyModel) void {
        qtc.QSortFilterProxyModel_SuperInvalidateFilter(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `invalidateRowsFilter` instead
    ///
    pub const InvalidateRowsFilter = invalidateRowsFilter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateRowsFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn invalidateRowsFilter(self: QSortFilterProxyModel) void {
        qtc.QSortFilterProxyModel_InvalidateRowsFilter(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onInvalidateRowsFilter` instead
    ///
    pub const OnInvalidateRowsFilter = onInvalidateRowsFilter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateRowsFilter)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onInvalidateRowsFilter(self: QSortFilterProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnInvalidateRowsFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInvalidateRowsFilter` instead
    ///
    pub const SuperInvalidateRowsFilter = superInvalidateRowsFilter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateRowsFilter)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn superInvalidateRowsFilter(self: QSortFilterProxyModel) void {
        qtc.QSortFilterProxyModel_SuperInvalidateRowsFilter(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `invalidateColumnsFilter` instead
    ///
    pub const InvalidateColumnsFilter = invalidateColumnsFilter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateColumnsFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn invalidateColumnsFilter(self: QSortFilterProxyModel) void {
        qtc.QSortFilterProxyModel_InvalidateColumnsFilter(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onInvalidateColumnsFilter` instead
    ///
    pub const OnInvalidateColumnsFilter = onInvalidateColumnsFilter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateColumnsFilter)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onInvalidateColumnsFilter(self: QSortFilterProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnInvalidateColumnsFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInvalidateColumnsFilter` instead
    ///
    pub const SuperInvalidateColumnsFilter = superInvalidateColumnsFilter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateColumnsFilter)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn superInvalidateColumnsFilter(self: QSortFilterProxyModel) void {
        qtc.QSortFilterProxyModel_SuperInvalidateColumnsFilter(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `index` instead
    ///
    pub const Index = index;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#index)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn index(self: QSortFilterProxyModel, row: i32, column: i32, _parent: anytype) QModelIndex {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return .{ .ptr = qtc.QSortFilterProxyModel_Index(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `onIndex` instead
    ///
    pub const OnIndex = onIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#index)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, row: i32, column: i32, parent: QModelIndex) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onIndex(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, i32, i32, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.QSortFilterProxyModel_OnIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIndex` instead
    ///
    pub const SuperIndex = superIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#index)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superIndex(self: QSortFilterProxyModel, row: i32, column: i32, _parent: anytype) QModelIndex {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return .{ .ptr = qtc.QSortFilterProxyModel_SuperIndex(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` child: QModelIndex `
    ///
    pub fn parent(self: QSortFilterProxyModel, child: anytype) QModelIndex {
        comptime _ = @TypeOf(child)._is_QModelIndex;
        return .{ .ptr = qtc.QSortFilterProxyModel_Parent(@ptrCast(self.ptr), @ptrCast(child.ptr)) };
    }

    /// ### DEPRECATED: Use `onParent` instead
    ///
    pub const OnParent = onParent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#parent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, child: QModelIndex) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onParent(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.QSortFilterProxyModel_OnParent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superParent` instead
    ///
    pub const SuperParent = superParent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#parent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` child: QModelIndex `
    ///
    pub fn superParent(self: QSortFilterProxyModel, child: anytype) QModelIndex {
        comptime _ = @TypeOf(child)._is_QModelIndex;
        return .{ .ptr = qtc.QSortFilterProxyModel_SuperParent(@ptrCast(self.ptr), @ptrCast(child.ptr)) };
    }

    /// ### DEPRECATED: Use `sibling` instead
    ///
    pub const Sibling = sibling;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` idx: QModelIndex `
    ///
    pub fn sibling(self: QSortFilterProxyModel, row: i32, column: i32, idx: anytype) QModelIndex {
        comptime _ = @TypeOf(idx)._is_QModelIndex;
        return .{ .ptr = qtc.QSortFilterProxyModel_Sibling(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(idx.ptr)) };
    }

    /// ### DEPRECATED: Use `onSibling` instead
    ///
    pub const OnSibling = onSibling;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sibling)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, row: i32, column: i32, idx: QModelIndex) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSibling(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, i32, i32, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.QSortFilterProxyModel_OnSibling(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSibling` instead
    ///
    pub const SuperSibling = superSibling;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sibling)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` idx: QModelIndex `
    ///
    pub fn superSibling(self: QSortFilterProxyModel, row: i32, column: i32, idx: anytype) QModelIndex {
        comptime _ = @TypeOf(idx)._is_QModelIndex;
        return .{ .ptr = qtc.QSortFilterProxyModel_SuperSibling(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(idx.ptr)) };
    }

    /// ### DEPRECATED: Use `rowCount` instead
    ///
    pub const RowCount = rowCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#rowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn rowCount(self: QSortFilterProxyModel, _parent: anytype) i32 {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QSortFilterProxyModel_RowCount(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onRowCount` instead
    ///
    pub const OnRowCount = onRowCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#rowCount)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, parent: QModelIndex) callconv(.c) i32 `
    ///
    pub fn onRowCount(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QModelIndex) callconv(.c) i32) void {
        qtc.QSortFilterProxyModel_OnRowCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRowCount` instead
    ///
    pub const SuperRowCount = superRowCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#rowCount)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superRowCount(self: QSortFilterProxyModel, _parent: anytype) i32 {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QSortFilterProxyModel_SuperRowCount(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `columnCount` instead
    ///
    pub const ColumnCount = columnCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#columnCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn columnCount(self: QSortFilterProxyModel, _parent: anytype) i32 {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QSortFilterProxyModel_ColumnCount(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onColumnCount` instead
    ///
    pub const OnColumnCount = onColumnCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#columnCount)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, parent: QModelIndex) callconv(.c) i32 `
    ///
    pub fn onColumnCount(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QModelIndex) callconv(.c) i32) void {
        qtc.QSortFilterProxyModel_OnColumnCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superColumnCount` instead
    ///
    pub const SuperColumnCount = superColumnCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#columnCount)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superColumnCount(self: QSortFilterProxyModel, _parent: anytype) i32 {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QSortFilterProxyModel_SuperColumnCount(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `hasChildren` instead
    ///
    pub const HasChildren = hasChildren;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#hasChildren)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn hasChildren(self: QSortFilterProxyModel, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QSortFilterProxyModel_HasChildren(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onHasChildren` instead
    ///
    pub const OnHasChildren = onHasChildren;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#hasChildren)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onHasChildren(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QModelIndex) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnHasChildren(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHasChildren` instead
    ///
    pub const SuperHasChildren = superHasChildren;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#hasChildren)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superHasChildren(self: QSortFilterProxyModel, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QSortFilterProxyModel_SuperHasChildren(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `data` instead
    ///
    pub const Data = data;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` role: i32 `
    ///
    pub fn data(self: QSortFilterProxyModel, _index: anytype, role: i32) QVariant {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return .{ .ptr = qtc.QSortFilterProxyModel_Data(@ptrCast(self.ptr), @ptrCast(_index.ptr), @bitCast(role)) };
    }

    /// ### DEPRECATED: Use `onData` instead
    ///
    pub const OnData = onData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#data)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, index: QModelIndex, role: i32) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onData(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QModelIndex, i32) callconv(.c) QVariant) void {
        qtc.QSortFilterProxyModel_OnData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superData` instead
    ///
    pub const SuperData = superData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#data)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` role: i32 `
    ///
    pub fn superData(self: QSortFilterProxyModel, _index: anytype, role: i32) QVariant {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return .{ .ptr = qtc.QSortFilterProxyModel_SuperData(@ptrCast(self.ptr), @ptrCast(_index.ptr), @bitCast(role)) };
    }

    /// ### DEPRECATED: Use `setData` instead
    ///
    pub const SetData = setData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` value: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn setData(self: QSortFilterProxyModel, _index: anytype, value: anytype, role: i32) bool {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QSortFilterProxyModel_SetData(@ptrCast(self.ptr), @ptrCast(_index.ptr), @ptrCast(value.ptr), @bitCast(role));
    }

    /// ### DEPRECATED: Use `onSetData` instead
    ///
    pub const OnSetData = onSetData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, index: QModelIndex, value: QVariant, role: i32) callconv(.c) bool `
    ///
    pub fn onSetData(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QModelIndex, QVariant, i32) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnSetData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetData` instead
    ///
    pub const SuperSetData = superSetData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` value: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn superSetData(self: QSortFilterProxyModel, _index: anytype, value: anytype, role: i32) bool {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QSortFilterProxyModel_SuperSetData(@ptrCast(self.ptr), @ptrCast(_index.ptr), @ptrCast(value.ptr), @bitCast(role));
    }

    /// ### DEPRECATED: Use `headerData` instead
    ///
    pub const HeaderData = headerData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#headerData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` role: i32 `
    ///
    pub fn headerData(self: QSortFilterProxyModel, section: i32, orientation: i32, role: i32) QVariant {
        return .{ .ptr = qtc.QSortFilterProxyModel_HeaderData(@ptrCast(self.ptr), @bitCast(section), @bitCast(orientation), @bitCast(role)) };
    }

    /// ### DEPRECATED: Use `onHeaderData` instead
    ///
    pub const OnHeaderData = onHeaderData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#headerData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, section: i32, orientation: qnamespace_enums.Orientation, role: i32) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onHeaderData(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, i32, i32, i32) callconv(.c) QVariant) void {
        qtc.QSortFilterProxyModel_OnHeaderData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHeaderData` instead
    ///
    pub const SuperHeaderData = superHeaderData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#headerData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` role: i32 `
    ///
    pub fn superHeaderData(self: QSortFilterProxyModel, section: i32, orientation: i32, role: i32) QVariant {
        return .{ .ptr = qtc.QSortFilterProxyModel_SuperHeaderData(@ptrCast(self.ptr), @bitCast(section), @bitCast(orientation), @bitCast(role)) };
    }

    /// ### DEPRECATED: Use `setHeaderData` instead
    ///
    pub const SetHeaderData = setHeaderData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setHeaderData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` value: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn setHeaderData(self: QSortFilterProxyModel, section: i32, orientation: i32, value: anytype, role: i32) bool {
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QSortFilterProxyModel_SetHeaderData(@ptrCast(self.ptr), @bitCast(section), @bitCast(orientation), @ptrCast(value.ptr), @bitCast(role));
    }

    /// ### DEPRECATED: Use `onSetHeaderData` instead
    ///
    pub const OnSetHeaderData = onSetHeaderData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setHeaderData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, section: i32, orientation: qnamespace_enums.Orientation, value: QVariant, role: i32) callconv(.c) bool `
    ///
    pub fn onSetHeaderData(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, i32, i32, QVariant, i32) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnSetHeaderData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetHeaderData` instead
    ///
    pub const SuperSetHeaderData = superSetHeaderData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setHeaderData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` value: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn superSetHeaderData(self: QSortFilterProxyModel, section: i32, orientation: i32, value: anytype, role: i32) bool {
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QSortFilterProxyModel_SuperSetHeaderData(@ptrCast(self.ptr), @bitCast(section), @bitCast(orientation), @ptrCast(value.ptr), @bitCast(role));
    }

    /// ### DEPRECATED: Use `mimeData` instead
    ///
    pub const MimeData = mimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` indexes: []QModelIndex `
    ///
    pub fn mimeData(self: QSortFilterProxyModel, indexes: []QModelIndex) QMimeData {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        return .{ .ptr = qtc.QSortFilterProxyModel_MimeData(@ptrCast(self.ptr), indexes_list) };
    }

    /// ### DEPRECATED: Use `onMimeData` instead
    ///
    pub const OnMimeData = onMimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, indexes: qtc.libqt_list ([]QModelIndex)) callconv(.c) QMimeData `
    ///
    pub fn onMimeData(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, qtc.libqt_list) callconv(.c) QMimeData) void {
        qtc.QSortFilterProxyModel_OnMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMimeData` instead
    ///
    pub const SuperMimeData = superMimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` indexes: []QModelIndex `
    ///
    pub fn superMimeData(self: QSortFilterProxyModel, indexes: []QModelIndex) QMimeData {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        return .{ .ptr = qtc.QSortFilterProxyModel_SuperMimeData(@ptrCast(self.ptr), indexes_list) };
    }

    /// ### DEPRECATED: Use `dropMimeData` instead
    ///
    pub const DropMimeData = dropMimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dropMimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _data: QMimeData `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn dropMimeData(self: QSortFilterProxyModel, _data: anytype, action: i32, row: i32, column: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_data)._is_QMimeData;
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QSortFilterProxyModel_DropMimeData(@ptrCast(self.ptr), @ptrCast(_data.ptr), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onDropMimeData` instead
    ///
    pub const OnDropMimeData = onDropMimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dropMimeData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, data: QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onDropMimeData(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QMimeData, i32, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnDropMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDropMimeData` instead
    ///
    pub const SuperDropMimeData = superDropMimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dropMimeData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _data: QMimeData `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superDropMimeData(self: QSortFilterProxyModel, _data: anytype, action: i32, row: i32, column: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_data)._is_QMimeData;
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QSortFilterProxyModel_SuperDropMimeData(@ptrCast(self.ptr), @ptrCast(_data.ptr), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `insertRows` instead
    ///
    pub const InsertRows = insertRows;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn insertRows(self: QSortFilterProxyModel, row: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QSortFilterProxyModel_InsertRows(@ptrCast(self.ptr), @bitCast(row), @bitCast(count), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onInsertRows` instead
    ///
    pub const OnInsertRows = onInsertRows;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertRows)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, row: i32, count: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onInsertRows(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnInsertRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInsertRows` instead
    ///
    pub const SuperInsertRows = superInsertRows;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertRows)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superInsertRows(self: QSortFilterProxyModel, row: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QSortFilterProxyModel_SuperInsertRows(@ptrCast(self.ptr), @bitCast(row), @bitCast(count), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `insertColumns` instead
    ///
    pub const InsertColumns = insertColumns;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertColumns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn insertColumns(self: QSortFilterProxyModel, column: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QSortFilterProxyModel_InsertColumns(@ptrCast(self.ptr), @bitCast(column), @bitCast(count), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onInsertColumns` instead
    ///
    pub const OnInsertColumns = onInsertColumns;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertColumns)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, column: i32, count: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onInsertColumns(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnInsertColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInsertColumns` instead
    ///
    pub const SuperInsertColumns = superInsertColumns;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertColumns)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superInsertColumns(self: QSortFilterProxyModel, column: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QSortFilterProxyModel_SuperInsertColumns(@ptrCast(self.ptr), @bitCast(column), @bitCast(count), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `removeRows` instead
    ///
    pub const RemoveRows = removeRows;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn removeRows(self: QSortFilterProxyModel, row: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QSortFilterProxyModel_RemoveRows(@ptrCast(self.ptr), @bitCast(row), @bitCast(count), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onRemoveRows` instead
    ///
    pub const OnRemoveRows = onRemoveRows;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeRows)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, row: i32, count: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onRemoveRows(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnRemoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRemoveRows` instead
    ///
    pub const SuperRemoveRows = superRemoveRows;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeRows)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superRemoveRows(self: QSortFilterProxyModel, row: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QSortFilterProxyModel_SuperRemoveRows(@ptrCast(self.ptr), @bitCast(row), @bitCast(count), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `removeColumns` instead
    ///
    pub const RemoveColumns = removeColumns;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeColumns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn removeColumns(self: QSortFilterProxyModel, column: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QSortFilterProxyModel_RemoveColumns(@ptrCast(self.ptr), @bitCast(column), @bitCast(count), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onRemoveColumns` instead
    ///
    pub const OnRemoveColumns = onRemoveColumns;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeColumns)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, column: i32, count: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onRemoveColumns(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnRemoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRemoveColumns` instead
    ///
    pub const SuperRemoveColumns = superRemoveColumns;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeColumns)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superRemoveColumns(self: QSortFilterProxyModel, column: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QSortFilterProxyModel_SuperRemoveColumns(@ptrCast(self.ptr), @bitCast(column), @bitCast(count), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `fetchMore` instead
    ///
    pub const FetchMore = fetchMore;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#fetchMore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn fetchMore(self: QSortFilterProxyModel, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QSortFilterProxyModel_FetchMore(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onFetchMore` instead
    ///
    pub const OnFetchMore = onFetchMore;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#fetchMore)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, parent: QModelIndex) callconv(.c) void `
    ///
    pub fn onFetchMore(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QModelIndex) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnFetchMore(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFetchMore` instead
    ///
    pub const SuperFetchMore = superFetchMore;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#fetchMore)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superFetchMore(self: QSortFilterProxyModel, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QSortFilterProxyModel_SuperFetchMore(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `canFetchMore` instead
    ///
    pub const CanFetchMore = canFetchMore;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#canFetchMore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn canFetchMore(self: QSortFilterProxyModel, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QSortFilterProxyModel_CanFetchMore(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onCanFetchMore` instead
    ///
    pub const OnCanFetchMore = onCanFetchMore;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#canFetchMore)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onCanFetchMore(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QModelIndex) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnCanFetchMore(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCanFetchMore` instead
    ///
    pub const SuperCanFetchMore = superCanFetchMore;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#canFetchMore)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superCanFetchMore(self: QSortFilterProxyModel, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QSortFilterProxyModel_SuperCanFetchMore(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#flags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.ItemFlag `
    ///
    pub fn flags(self: QSortFilterProxyModel, _index: anytype) i32 {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return qtc.QSortFilterProxyModel_Flags(@ptrCast(self.ptr), @ptrCast(_index.ptr));
    }

    /// ### DEPRECATED: Use `onFlags` instead
    ///
    pub const OnFlags = onFlags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#flags)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, index: QModelIndex) callconv(.c) i32 `
    ///
    pub fn onFlags(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QModelIndex) callconv(.c) i32) void {
        qtc.QSortFilterProxyModel_OnFlags(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFlags` instead
    ///
    pub const SuperFlags = superFlags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#flags)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.ItemFlag `
    ///
    pub fn superFlags(self: QSortFilterProxyModel, _index: anytype) i32 {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return qtc.QSortFilterProxyModel_SuperFlags(@ptrCast(self.ptr), @ptrCast(_index.ptr));
    }

    /// ### DEPRECATED: Use `buddy` instead
    ///
    pub const Buddy = buddy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#buddy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn buddy(self: QSortFilterProxyModel, _index: anytype) QModelIndex {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return .{ .ptr = qtc.QSortFilterProxyModel_Buddy(@ptrCast(self.ptr), @ptrCast(_index.ptr)) };
    }

    /// ### DEPRECATED: Use `onBuddy` instead
    ///
    pub const OnBuddy = onBuddy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#buddy)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, index: QModelIndex) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onBuddy(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.QSortFilterProxyModel_OnBuddy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superBuddy` instead
    ///
    pub const SuperBuddy = superBuddy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#buddy)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn superBuddy(self: QSortFilterProxyModel, _index: anytype) QModelIndex {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return .{ .ptr = qtc.QSortFilterProxyModel_SuperBuddy(@ptrCast(self.ptr), @ptrCast(_index.ptr)) };
    }

    /// ### DEPRECATED: Use `match` instead
    ///
    pub const Match = match;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#match)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` start: QModelIndex `
    ///
    /// ` role: i32 `
    ///
    /// ` value: QVariant `
    ///
    /// ` hits: i32 `
    ///
    /// ` _flags: flag of qnamespace_enums.MatchFlag `
    ///
    pub fn match(self: QSortFilterProxyModel, allocator: std.mem.Allocator, start: anytype, role: i32, value: anytype, hits: i32, _flags: i32) []QModelIndex {
        comptime _ = @TypeOf(start)._is_QModelIndex;
        comptime _ = @TypeOf(value)._is_QVariant;
        const _arr: qtc.libqt_list = qtc.QSortFilterProxyModel_Match(@ptrCast(self.ptr), @ptrCast(start.ptr), @bitCast(role), @ptrCast(value.ptr), @bitCast(hits), @bitCast(_flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("QSortFilterProxyModel.match: Memory allocation failed");
        const _data_val: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `onMatch` instead
    ///
    pub const OnMatch = onMatch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#match)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, start: QModelIndex, role: i32, value: QVariant, hits: i32, flags: flag of qnamespace_enums.MatchFlag) callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QModelIndex `
    ///
    pub fn onMatch(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QModelIndex, i32, QVariant, i32, i32) callconv(.c) qtc.libqt_list) void {
        qtc.QSortFilterProxyModel_OnMatch(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMatch` instead
    ///
    pub const SuperMatch = superMatch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#match)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` start: QModelIndex `
    ///
    /// ` role: i32 `
    ///
    /// ` value: QVariant `
    ///
    /// ` hits: i32 `
    ///
    /// ` _flags: flag of qnamespace_enums.MatchFlag `
    ///
    pub fn superMatch(self: QSortFilterProxyModel, allocator: std.mem.Allocator, start: anytype, role: i32, value: anytype, hits: i32, _flags: i32) []QModelIndex {
        comptime _ = @TypeOf(start)._is_QModelIndex;
        comptime _ = @TypeOf(value)._is_QVariant;
        const _arr: qtc.libqt_list = qtc.QSortFilterProxyModel_SuperMatch(@ptrCast(self.ptr), @ptrCast(start.ptr), @bitCast(role), @ptrCast(value.ptr), @bitCast(hits), @bitCast(_flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("QSortFilterProxyModel.match: Memory allocation failed");
        const _data_val: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `span` instead
    ///
    pub const Span = span;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#span)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn span(self: QSortFilterProxyModel, _index: anytype) QSize {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return .{ .ptr = qtc.QSortFilterProxyModel_Span(@ptrCast(self.ptr), @ptrCast(_index.ptr)) };
    }

    /// ### DEPRECATED: Use `onSpan` instead
    ///
    pub const OnSpan = onSpan;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#span)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, index: QModelIndex) callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSpan(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QModelIndex) callconv(.c) QSize) void {
        qtc.QSortFilterProxyModel_OnSpan(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSpan` instead
    ///
    pub const SuperSpan = superSpan;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#span)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn superSpan(self: QSortFilterProxyModel, _index: anytype) QSize {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return .{ .ptr = qtc.QSortFilterProxyModel_SuperSpan(@ptrCast(self.ptr), @ptrCast(_index.ptr)) };
    }

    /// ### DEPRECATED: Use `sort` instead
    ///
    pub const Sort = sort;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` column: i32 `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    pub fn sort(self: QSortFilterProxyModel, column: i32, order: i32) void {
        qtc.QSortFilterProxyModel_Sort(@ptrCast(self.ptr), @bitCast(column), @bitCast(order));
    }

    /// ### DEPRECATED: Use `onSort` instead
    ///
    pub const OnSort = onSort;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sort)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, column: i32, order: qnamespace_enums.SortOrder) callconv(.c) void `
    ///
    pub fn onSort(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, i32, i32) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnSort(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSort` instead
    ///
    pub const SuperSort = superSort;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sort)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` column: i32 `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    pub fn superSort(self: QSortFilterProxyModel, column: i32, order: i32) void {
        qtc.QSortFilterProxyModel_SuperSort(@ptrCast(self.ptr), @bitCast(column), @bitCast(order));
    }

    /// ### DEPRECATED: Use `mimeTypes` instead
    ///
    pub const MimeTypes = mimeTypes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn mimeTypes(self: QSortFilterProxyModel, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QSortFilterProxyModel_MimeTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QSortFilterProxyModel.mimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QSortFilterProxyModel.mimeTypes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `onMimeTypes` instead
    ///
    pub const OnMimeTypes = onMimeTypes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeTypes)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8 `
    ///
    pub fn onMimeTypes(self: QSortFilterProxyModel, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.QSortFilterProxyModel_OnMimeTypes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMimeTypes` instead
    ///
    pub const SuperMimeTypes = superMimeTypes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeTypes)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superMimeTypes(self: QSortFilterProxyModel, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QSortFilterProxyModel_SuperMimeTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QSortFilterProxyModel.mimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QSortFilterProxyModel.mimeTypes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `supportedDropActions` instead
    ///
    pub const SupportedDropActions = supportedDropActions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#supportedDropActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn supportedDropActions(self: QSortFilterProxyModel) i32 {
        return qtc.QSortFilterProxyModel_SupportedDropActions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSupportedDropActions` instead
    ///
    pub const OnSupportedDropActions = onSupportedDropActions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#supportedDropActions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSupportedDropActions(self: QSortFilterProxyModel, callback: *const fn () callconv(.c) i32) void {
        qtc.QSortFilterProxyModel_OnSupportedDropActions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSupportedDropActions` instead
    ///
    pub const SuperSupportedDropActions = superSupportedDropActions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#supportedDropActions)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn superSupportedDropActions(self: QSortFilterProxyModel) i32 {
        return qtc.QSortFilterProxyModel_SuperSupportedDropActions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dynamicSortFilterChanged` instead
    ///
    pub const DynamicSortFilterChanged = dynamicSortFilterChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dynamicSortFilterChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _dynamicSortFilter: bool `
    ///
    pub fn dynamicSortFilterChanged(self: QSortFilterProxyModel, _dynamicSortFilter: bool) void {
        qtc.QSortFilterProxyModel_DynamicSortFilterChanged(@ptrCast(self.ptr), _dynamicSortFilter);
    }

    /// ### DEPRECATED: Use `onDynamicSortFilterChanged` instead
    ///
    pub const OnDynamicSortFilterChanged = onDynamicSortFilterChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dynamicSortFilterChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, dynamicSortFilter: bool) callconv(.c) void `
    ///
    pub fn onDynamicSortFilterChanged(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, bool) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_DynamicSortFilterChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `filterCaseSensitivityChanged` instead
    ///
    pub const FilterCaseSensitivityChanged = filterCaseSensitivityChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterCaseSensitivityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _filterCaseSensitivity: qnamespace_enums.CaseSensitivity `
    ///
    pub fn filterCaseSensitivityChanged(self: QSortFilterProxyModel, _filterCaseSensitivity: i32) void {
        qtc.QSortFilterProxyModel_FilterCaseSensitivityChanged(@ptrCast(self.ptr), @bitCast(_filterCaseSensitivity));
    }

    /// ### DEPRECATED: Use `onFilterCaseSensitivityChanged` instead
    ///
    pub const OnFilterCaseSensitivityChanged = onFilterCaseSensitivityChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterCaseSensitivityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, filterCaseSensitivity: qnamespace_enums.CaseSensitivity) callconv(.c) void `
    ///
    pub fn onFilterCaseSensitivityChanged(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, i32) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_FilterCaseSensitivityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sortCaseSensitivityChanged` instead
    ///
    pub const SortCaseSensitivityChanged = sortCaseSensitivityChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortCaseSensitivityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _sortCaseSensitivity: qnamespace_enums.CaseSensitivity `
    ///
    pub fn sortCaseSensitivityChanged(self: QSortFilterProxyModel, _sortCaseSensitivity: i32) void {
        qtc.QSortFilterProxyModel_SortCaseSensitivityChanged(@ptrCast(self.ptr), @bitCast(_sortCaseSensitivity));
    }

    /// ### DEPRECATED: Use `onSortCaseSensitivityChanged` instead
    ///
    pub const OnSortCaseSensitivityChanged = onSortCaseSensitivityChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortCaseSensitivityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, sortCaseSensitivity: qnamespace_enums.CaseSensitivity) callconv(.c) void `
    ///
    pub fn onSortCaseSensitivityChanged(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, i32) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_SortCaseSensitivityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sortLocaleAwareChanged` instead
    ///
    pub const SortLocaleAwareChanged = sortLocaleAwareChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortLocaleAwareChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` sortLocaleAware: bool `
    ///
    pub fn sortLocaleAwareChanged(self: QSortFilterProxyModel, sortLocaleAware: bool) void {
        qtc.QSortFilterProxyModel_SortLocaleAwareChanged(@ptrCast(self.ptr), sortLocaleAware);
    }

    /// ### DEPRECATED: Use `onSortLocaleAwareChanged` instead
    ///
    pub const OnSortLocaleAwareChanged = onSortLocaleAwareChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortLocaleAwareChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, sortLocaleAware: bool) callconv(.c) void `
    ///
    pub fn onSortLocaleAwareChanged(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, bool) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_SortLocaleAwareChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sortRoleChanged` instead
    ///
    pub const SortRoleChanged = sortRoleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortRoleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _sortRole: i32 `
    ///
    pub fn sortRoleChanged(self: QSortFilterProxyModel, _sortRole: i32) void {
        qtc.QSortFilterProxyModel_SortRoleChanged(@ptrCast(self.ptr), @bitCast(_sortRole));
    }

    /// ### DEPRECATED: Use `onSortRoleChanged` instead
    ///
    pub const OnSortRoleChanged = onSortRoleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortRoleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, sortRole: i32) callconv(.c) void `
    ///
    pub fn onSortRoleChanged(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, i32) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_SortRoleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `filterRoleChanged` instead
    ///
    pub const FilterRoleChanged = filterRoleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterRoleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _filterRole: i32 `
    ///
    pub fn filterRoleChanged(self: QSortFilterProxyModel, _filterRole: i32) void {
        qtc.QSortFilterProxyModel_FilterRoleChanged(@ptrCast(self.ptr), @bitCast(_filterRole));
    }

    /// ### DEPRECATED: Use `onFilterRoleChanged` instead
    ///
    pub const OnFilterRoleChanged = onFilterRoleChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterRoleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, filterRole: i32) callconv(.c) void `
    ///
    pub fn onFilterRoleChanged(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, i32) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_FilterRoleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `recursiveFilteringEnabledChanged` instead
    ///
    pub const RecursiveFilteringEnabledChanged = recursiveFilteringEnabledChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#recursiveFilteringEnabledChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` recursiveFilteringEnabled: bool `
    ///
    pub fn recursiveFilteringEnabledChanged(self: QSortFilterProxyModel, recursiveFilteringEnabled: bool) void {
        qtc.QSortFilterProxyModel_RecursiveFilteringEnabledChanged(@ptrCast(self.ptr), recursiveFilteringEnabled);
    }

    /// ### DEPRECATED: Use `onRecursiveFilteringEnabledChanged` instead
    ///
    pub const OnRecursiveFilteringEnabledChanged = onRecursiveFilteringEnabledChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#recursiveFilteringEnabledChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, recursiveFilteringEnabled: bool) callconv(.c) void `
    ///
    pub fn onRecursiveFilteringEnabledChanged(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, bool) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_RecursiveFilteringEnabledChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `autoAcceptChildRowsChanged` instead
    ///
    pub const AutoAcceptChildRowsChanged = autoAcceptChildRowsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#autoAcceptChildRowsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _autoAcceptChildRows: bool `
    ///
    pub fn autoAcceptChildRowsChanged(self: QSortFilterProxyModel, _autoAcceptChildRows: bool) void {
        qtc.QSortFilterProxyModel_AutoAcceptChildRowsChanged(@ptrCast(self.ptr), _autoAcceptChildRows);
    }

    /// ### DEPRECATED: Use `onAutoAcceptChildRowsChanged` instead
    ///
    pub const OnAutoAcceptChildRowsChanged = onAutoAcceptChildRowsChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#autoAcceptChildRowsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, autoAcceptChildRows: bool) callconv(.c) void `
    ///
    pub fn onAutoAcceptChildRowsChanged(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, bool) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_AutoAcceptChildRowsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSortFilterProxyModel.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSortFilterProxyModel.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `sourceModel` instead
    ///
    pub const SourceModel = sourceModel;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sourceModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn sourceModel(self: QSortFilterProxyModel) QAbstractItemModel {
        return .{ .ptr = qtc.QAbstractProxyModel_SourceModel(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `hasIndex` instead
    ///
    pub const HasIndex = hasIndex;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn hasIndex(self: QSortFilterProxyModel, row: i32, column: i32) bool {
        return qtc.QAbstractItemModel_HasIndex(@ptrCast(self.ptr), @bitCast(row), @bitCast(column));
    }

    /// ### DEPRECATED: Use `insertRow` instead
    ///
    pub const InsertRow = insertRow;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    pub fn insertRow(self: QSortFilterProxyModel, row: i32) bool {
        return qtc.QAbstractItemModel_InsertRow(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### DEPRECATED: Use `insertColumn` instead
    ///
    pub const InsertColumn = insertColumn;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` column: i32 `
    ///
    pub fn insertColumn(self: QSortFilterProxyModel, column: i32) bool {
        return qtc.QAbstractItemModel_InsertColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `removeRow` instead
    ///
    pub const RemoveRow = removeRow;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    pub fn removeRow(self: QSortFilterProxyModel, row: i32) bool {
        return qtc.QAbstractItemModel_RemoveRow(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### DEPRECATED: Use `removeColumn` instead
    ///
    pub const RemoveColumn = removeColumn;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` column: i32 `
    ///
    pub fn removeColumn(self: QSortFilterProxyModel, column: i32) bool {
        return qtc.QAbstractItemModel_RemoveColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `moveRow` instead
    ///
    pub const MoveRow = moveRow;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceRow: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn moveRow(self: QSortFilterProxyModel, sourceParent: anytype, sourceRow: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QAbstractItemModel_MoveRow(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceRow), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
    }

    /// ### DEPRECATED: Use `moveColumn` instead
    ///
    pub const MoveColumn = moveColumn;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceColumn: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn moveColumn(self: QSortFilterProxyModel, sourceParent: anytype, sourceColumn: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QAbstractItemModel_MoveColumn(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceColumn), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
    }

    /// ### DEPRECATED: Use `checkIndex` instead
    ///
    pub const CheckIndex = checkIndex;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn checkIndex(self: QSortFilterProxyModel, _index: anytype) bool {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return qtc.QAbstractItemModel_CheckIndex(@ptrCast(self.ptr), @ptrCast(_index.ptr));
    }

    /// ### DEPRECATED: Use `dataChanged` instead
    ///
    pub const DataChanged = dataChanged;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` topLeft: QModelIndex `
    ///
    /// ` bottomRight: QModelIndex `
    ///
    pub fn dataChanged(self: QSortFilterProxyModel, topLeft: anytype, bottomRight: anytype) void {
        comptime _ = @TypeOf(topLeft)._is_QModelIndex;
        comptime _ = @TypeOf(bottomRight)._is_QModelIndex;
        qtc.QAbstractItemModel_DataChanged(@ptrCast(self.ptr), @ptrCast(topLeft.ptr), @ptrCast(bottomRight.ptr));
    }

    /// ### DEPRECATED: Use `onDataChanged` instead
    ///
    pub const OnDataChanged = onDataChanged;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, topLeft: QModelIndex, bottomRight: QModelIndex) callconv(.c) void `
    ///
    pub fn onDataChanged(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QModelIndex, QModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_DataChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `headerDataChanged` instead
    ///
    pub const HeaderDataChanged = headerDataChanged;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn headerDataChanged(self: QSortFilterProxyModel, orientation: i32, first: i32, last: i32) void {
        qtc.QAbstractItemModel_HeaderDataChanged(@ptrCast(self.ptr), @bitCast(orientation), @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `onHeaderDataChanged` instead
    ///
    pub const OnHeaderDataChanged = onHeaderDataChanged;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, orientation: qnamespace_enums.Orientation, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onHeaderDataChanged(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, i32, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_HeaderDataChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `layoutChanged` instead
    ///
    pub const LayoutChanged = layoutChanged;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn layoutChanged(self: QSortFilterProxyModel) void {
        qtc.QAbstractItemModel_LayoutChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLayoutChanged` instead
    ///
    pub const OnLayoutChanged = onLayoutChanged;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel) callconv(.c) void `
    ///
    pub fn onLayoutChanged(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `layoutAboutToBeChanged` instead
    ///
    pub const LayoutAboutToBeChanged = layoutAboutToBeChanged;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn layoutAboutToBeChanged(self: QSortFilterProxyModel) void {
        qtc.QAbstractItemModel_LayoutAboutToBeChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLayoutAboutToBeChanged` instead
    ///
    pub const OnLayoutAboutToBeChanged = onLayoutAboutToBeChanged;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel) callconv(.c) void `
    ///
    pub fn onLayoutAboutToBeChanged(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutAboutToBeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hasIndex3` instead
    ///
    pub const HasIndex3 = hasIndex3;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn hasIndex3(self: QSortFilterProxyModel, row: i32, column: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QAbstractItemModel_HasIndex3(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `insertRow2` instead
    ///
    pub const InsertRow2 = insertRow2;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn insertRow2(self: QSortFilterProxyModel, row: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QAbstractItemModel_InsertRow2(@ptrCast(self.ptr), @bitCast(row), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `insertColumn2` instead
    ///
    pub const InsertColumn2 = insertColumn2;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn insertColumn2(self: QSortFilterProxyModel, column: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QAbstractItemModel_InsertColumn2(@ptrCast(self.ptr), @bitCast(column), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `removeRow2` instead
    ///
    pub const RemoveRow2 = removeRow2;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn removeRow2(self: QSortFilterProxyModel, row: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QAbstractItemModel_RemoveRow2(@ptrCast(self.ptr), @bitCast(row), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `removeColumn2` instead
    ///
    pub const RemoveColumn2 = removeColumn2;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn removeColumn2(self: QSortFilterProxyModel, column: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QAbstractItemModel_RemoveColumn2(@ptrCast(self.ptr), @bitCast(column), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `checkIndex2` instead
    ///
    pub const CheckIndex2 = checkIndex2;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` options: flag of qabstractitemmodel_enums.CheckIndexOption `
    ///
    pub fn checkIndex2(self: QSortFilterProxyModel, _index: anytype, options: i32) bool {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return qtc.QAbstractItemModel_CheckIndex2(@ptrCast(self.ptr), @ptrCast(_index.ptr), @bitCast(options));
    }

    /// ### DEPRECATED: Use `dataChanged3` instead
    ///
    pub const DataChanged3 = dataChanged3;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` topLeft: QModelIndex `
    ///
    /// ` bottomRight: QModelIndex `
    ///
    /// ` roles: []i32 `
    ///
    pub fn dataChanged3(self: QSortFilterProxyModel, topLeft: anytype, bottomRight: anytype, roles: []i32) void {
        comptime _ = @TypeOf(topLeft)._is_QModelIndex;
        comptime _ = @TypeOf(bottomRight)._is_QModelIndex;
        const roles_list = qtc.libqt_list{
            .len = roles.len,
            .data = roles.ptr,
        };
        qtc.QAbstractItemModel_DataChanged3(@ptrCast(self.ptr), @ptrCast(topLeft.ptr), @ptrCast(bottomRight.ptr), roles_list);
    }

    /// ### DEPRECATED: Use `onDataChanged3` instead
    ///
    pub const OnDataChanged3 = onDataChanged3;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, topLeft: QModelIndex, bottomRight: QModelIndex, roles: qtc.libqt_list ([]i32)) callconv(.c) void `
    ///
    pub fn onDataChanged3(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QModelIndex, QModelIndex, qtc.libqt_list) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_DataChanged3(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `layoutChanged1` instead
    ///
    pub const LayoutChanged1 = layoutChanged1;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` parents: []QPersistentModelIndex `
    ///
    pub fn layoutChanged1(self: QSortFilterProxyModel, parents: []QPersistentModelIndex) void {
        const parents_list = qtc.libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        qtc.QAbstractItemModel_LayoutChanged1(@ptrCast(self.ptr), parents_list);
    }

    /// ### DEPRECATED: Use `onLayoutChanged1` instead
    ///
    pub const OnLayoutChanged1 = onLayoutChanged1;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, parents: qtc.libqt_list ([]QPersistentModelIndex)) callconv(.c) void `
    ///
    pub fn onLayoutChanged1(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, qtc.libqt_list) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutChanged1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `layoutChanged2` instead
    ///
    pub const LayoutChanged2 = layoutChanged2;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` parents: []QPersistentModelIndex `
    ///
    /// ` hint: qabstractitemmodel_enums.LayoutChangeHint `
    ///
    pub fn layoutChanged2(self: QSortFilterProxyModel, parents: []QPersistentModelIndex, hint: i32) void {
        const parents_list = qtc.libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        qtc.QAbstractItemModel_LayoutChanged2(@ptrCast(self.ptr), parents_list, @bitCast(hint));
    }

    /// ### DEPRECATED: Use `onLayoutChanged2` instead
    ///
    pub const OnLayoutChanged2 = onLayoutChanged2;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, parents: qtc.libqt_list ([]QPersistentModelIndex), hint: qabstractitemmodel_enums.LayoutChangeHint) callconv(.c) void `
    ///
    pub fn onLayoutChanged2(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, qtc.libqt_list, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutChanged2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `layoutAboutToBeChanged1` instead
    ///
    pub const LayoutAboutToBeChanged1 = layoutAboutToBeChanged1;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` parents: []QPersistentModelIndex `
    ///
    pub fn layoutAboutToBeChanged1(self: QSortFilterProxyModel, parents: []QPersistentModelIndex) void {
        const parents_list = qtc.libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        qtc.QAbstractItemModel_LayoutAboutToBeChanged1(@ptrCast(self.ptr), parents_list);
    }

    /// ### DEPRECATED: Use `onLayoutAboutToBeChanged1` instead
    ///
    pub const OnLayoutAboutToBeChanged1 = onLayoutAboutToBeChanged1;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, parents: qtc.libqt_list ([]QPersistentModelIndex)) callconv(.c) void `
    ///
    pub fn onLayoutAboutToBeChanged1(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, qtc.libqt_list) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutAboutToBeChanged1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `layoutAboutToBeChanged2` instead
    ///
    pub const LayoutAboutToBeChanged2 = layoutAboutToBeChanged2;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` parents: []QPersistentModelIndex `
    ///
    /// ` hint: qabstractitemmodel_enums.LayoutChangeHint `
    ///
    pub fn layoutAboutToBeChanged2(self: QSortFilterProxyModel, parents: []QPersistentModelIndex, hint: i32) void {
        const parents_list = qtc.libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        qtc.QAbstractItemModel_LayoutAboutToBeChanged2(@ptrCast(self.ptr), parents_list, @bitCast(hint));
    }

    /// ### DEPRECATED: Use `onLayoutAboutToBeChanged2` instead
    ///
    pub const OnLayoutAboutToBeChanged2 = onLayoutAboutToBeChanged2;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, parents: qtc.libqt_list ([]QPersistentModelIndex), hint: qabstractitemmodel_enums.LayoutChangeHint) callconv(.c) void `
    ///
    pub fn onLayoutAboutToBeChanged2(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, qtc.libqt_list, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutAboutToBeChanged2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QSortFilterProxyModel, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSortFilterProxyModel.objectName: Memory allocation failed");
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
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QSortFilterProxyModel, name: []const u8) void {
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
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn isWidgetType(self: QSortFilterProxyModel) bool {
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
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn isWindowType(self: QSortFilterProxyModel) bool {
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
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn isQuickItemType(self: QSortFilterProxyModel) bool {
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
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn signalsBlocked(self: QSortFilterProxyModel) bool {
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
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QSortFilterProxyModel, b: bool) bool {
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
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn thread(self: QSortFilterProxyModel) QThread {
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
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QSortFilterProxyModel, _thread: anytype) bool {
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
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QSortFilterProxyModel, interval: i32) i32 {
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
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QSortFilterProxyModel, time: i64) i32 {
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
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QSortFilterProxyModel, id: i32) void {
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
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QSortFilterProxyModel, id: i32) void {
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
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QSortFilterProxyModel, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QSortFilterProxyModel.children: Memory allocation failed");
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
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QSortFilterProxyModel, _parent: anytype) void {
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
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QSortFilterProxyModel, filterObj: anytype) void {
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
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QSortFilterProxyModel, obj: anytype) void {
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
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QSortFilterProxyModel, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn disconnect3(self: QSortFilterProxyModel) bool {
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
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QSortFilterProxyModel, receiver: anytype) bool {
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
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn dumpObjectTree(self: QSortFilterProxyModel) void {
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
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn dumpObjectInfo(self: QSortFilterProxyModel) void {
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
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QSortFilterProxyModel, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QSortFilterProxyModel, name: [:0]const u8) QVariant {
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
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QSortFilterProxyModel, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QSortFilterProxyModel.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QSortFilterProxyModel.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn bindingStorage(self: QSortFilterProxyModel) QBindingStorage {
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
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn bindingStorage2(self: QSortFilterProxyModel) QBindingStorage {
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
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn destroyed(self: QSortFilterProxyModel) void {
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
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QSortFilterProxyModel, classname: [:0]const u8) bool {
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
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn deleteLater(self: QSortFilterProxyModel) void {
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
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QSortFilterProxyModel, interval: i32, timerType: i32) i32 {
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
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QSortFilterProxyModel, time: i64, timerType: i32) i32 {
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
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QSortFilterProxyModel, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QSortFilterProxyModel, signal: [:0]const u8) bool {
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
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QSortFilterProxyModel, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QSortFilterProxyModel, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QSortFilterProxyModel, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QSortFilterProxyModel, param1: anytype) void {
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
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `submit` instead
    ///
    pub const Submit = submit;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn submit(self: QSortFilterProxyModel) bool {
        return qtc.QSortFilterProxyModel_Submit(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSubmit` instead
    ///
    pub const SuperSubmit = superSubmit;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn superSubmit(self: QSortFilterProxyModel) bool {
        return qtc.QSortFilterProxyModel_SuperSubmit(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSubmit` instead
    ///
    pub const OnSubmit = onSubmit;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onSubmit(self: QSortFilterProxyModel, callback: *const fn () callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnSubmit(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `revert` instead
    ///
    pub const Revert = revert;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn revert(self: QSortFilterProxyModel) void {
        qtc.QSortFilterProxyModel_Revert(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superRevert` instead
    ///
    pub const SuperRevert = superRevert;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn superRevert(self: QSortFilterProxyModel) void {
        qtc.QSortFilterProxyModel_SuperRevert(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRevert` instead
    ///
    pub const OnRevert = onRevert;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onRevert(self: QSortFilterProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnRevert(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemData` instead
    ///
    pub const ItemData = itemData;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn itemData(self: QSortFilterProxyModel, allocator: std.mem.Allocator, _index: anytype) ArrayMap_i32_QVariant {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        const _map: qtc.libqt_map = qtc.QSortFilterProxyModel_ItemData(@ptrCast(self.ptr), @ptrCast(_index.ptr));
        var _ret: ArrayMap_i32_QVariant = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("QSortFilterProxyModel.itemData: Total capacity allocation failed");
        defer {
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]QtC.QVariant = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            _ret.putAssumeCapacity(_key, .{ .ptr = @ptrCast(_value) });
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `superItemData` instead
    ///
    pub const SuperItemData = superItemData;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn superItemData(self: QSortFilterProxyModel, allocator: std.mem.Allocator, _index: anytype) ArrayMap_i32_QVariant {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        const _map: qtc.libqt_map = qtc.QSortFilterProxyModel_SuperItemData(@ptrCast(self.ptr), @ptrCast(_index.ptr));
        var _ret: ArrayMap_i32_QVariant = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("QSortFilterProxyModel.itemData: Total capacity allocation failed");
        defer {
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]QtC.QVariant = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            _ret.putAssumeCapacity(_key, .{ .ptr = @ptrCast(_value) });
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `onItemData` instead
    ///
    pub const OnItemData = onItemData;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, index: QModelIndex) callconv(.c) qtc.libqt_map `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of ArrayMap_i32_QVariant `
    ///
    pub fn onItemData(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QModelIndex) callconv(.c) qtc.libqt_map) void {
        qtc.QSortFilterProxyModel_OnItemData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setItemData` instead
    ///
    pub const SetItemData = setItemData;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` roles: ArrayMap_i32_QVariant `
    ///
    pub fn setItemData(self: QSortFilterProxyModel, allocator: std.mem.Allocator, _index: anytype, roles: ArrayMap_i32_QVariant) bool {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        const roles_count = roles.count();
        const roles_keys = allocator.alloc(i32, roles_count) catch @panic("QSortFilterProxyModel.setItemData: Memory allocation failed");
        defer allocator.free(roles_keys);
        const roles_values = allocator.alloc(QtC.QVariant, roles_count) catch @panic("QSortFilterProxyModel.setItemData: Memory allocation failed");
        defer allocator.free(roles_values);
        var i: usize = 0;
        var roles_it = roles.iterator();
        while (roles_it.next()) |it_entry| : (i += 1) {
            const roles_key = it_entry.key_ptr.*;
            roles_keys[i] = @bitCast(roles_key);
            roles_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const roles_map = qtc.libqt_map{
            .len = roles_count,
            .keys = @ptrCast(roles_keys.ptr),
            .values = @ptrCast(roles_values.ptr),
        };
        return qtc.QSortFilterProxyModel_SetItemData(@ptrCast(self.ptr), @ptrCast(_index.ptr), roles_map);
    }

    /// ### DEPRECATED: Use `superSetItemData` instead
    ///
    pub const SuperSetItemData = superSetItemData;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` roles: ArrayMap_i32_QVariant `
    ///
    pub fn superSetItemData(self: QSortFilterProxyModel, allocator: std.mem.Allocator, _index: anytype, roles: ArrayMap_i32_QVariant) bool {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        const roles_count = roles.count();
        const roles_keys = allocator.alloc(i32, roles_count) catch @panic("QSortFilterProxyModel.setItemData: Memory allocation failed");
        defer allocator.free(roles_keys);
        const roles_values = allocator.alloc(QtC.QVariant, roles_count) catch @panic("QSortFilterProxyModel.setItemData: Memory allocation failed");
        defer allocator.free(roles_values);
        var i: usize = 0;
        var roles_it = roles.iterator();
        while (roles_it.next()) |it_entry| : (i += 1) {
            const roles_key = it_entry.key_ptr.*;
            roles_keys[i] = @bitCast(roles_key);
            roles_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const roles_map = qtc.libqt_map{
            .len = roles_count,
            .keys = @ptrCast(roles_keys.ptr),
            .values = @ptrCast(roles_values.ptr),
        };
        return qtc.QSortFilterProxyModel_SuperSetItemData(@ptrCast(self.ptr), @ptrCast(_index.ptr), roles_map);
    }

    /// ### DEPRECATED: Use `onSetItemData` instead
    ///
    pub const OnSetItemData = onSetItemData;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, index: QModelIndex, roles: qtc.libqt_map (ArrayMap_i32_QVariant)) callconv(.c) bool `
    ///
    pub fn onSetItemData(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QModelIndex, qtc.libqt_map) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnSetItemData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `clearItemData` instead
    ///
    pub const ClearItemData = clearItemData;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn clearItemData(self: QSortFilterProxyModel, _index: anytype) bool {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return qtc.QSortFilterProxyModel_ClearItemData(@ptrCast(self.ptr), @ptrCast(_index.ptr));
    }

    /// ### DEPRECATED: Use `superClearItemData` instead
    ///
    pub const SuperClearItemData = superClearItemData;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn superClearItemData(self: QSortFilterProxyModel, _index: anytype) bool {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return qtc.QSortFilterProxyModel_SuperClearItemData(@ptrCast(self.ptr), @ptrCast(_index.ptr));
    }

    /// ### DEPRECATED: Use `onClearItemData` instead
    ///
    pub const OnClearItemData = onClearItemData;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, index: QModelIndex) callconv(.c) bool `
    ///
    pub fn onClearItemData(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QModelIndex) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnClearItemData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `canDropMimeData` instead
    ///
    pub const CanDropMimeData = canDropMimeData;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _data: QMimeData `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn canDropMimeData(self: QSortFilterProxyModel, _data: anytype, action: i32, row: i32, column: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_data)._is_QMimeData;
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QSortFilterProxyModel_CanDropMimeData(@ptrCast(self.ptr), @ptrCast(_data.ptr), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `superCanDropMimeData` instead
    ///
    pub const SuperCanDropMimeData = superCanDropMimeData;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _data: QMimeData `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superCanDropMimeData(self: QSortFilterProxyModel, _data: anytype, action: i32, row: i32, column: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_data)._is_QMimeData;
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QSortFilterProxyModel_SuperCanDropMimeData(@ptrCast(self.ptr), @ptrCast(_data.ptr), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onCanDropMimeData` instead
    ///
    pub const OnCanDropMimeData = onCanDropMimeData;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, data: QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onCanDropMimeData(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QMimeData, i32, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnCanDropMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `supportedDragActions` instead
    ///
    pub const SupportedDragActions = supportedDragActions;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn supportedDragActions(self: QSortFilterProxyModel) i32 {
        return qtc.QSortFilterProxyModel_SupportedDragActions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSupportedDragActions` instead
    ///
    pub const SuperSupportedDragActions = superSupportedDragActions;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn superSupportedDragActions(self: QSortFilterProxyModel) i32 {
        return qtc.QSortFilterProxyModel_SuperSupportedDragActions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSupportedDragActions` instead
    ///
    pub const OnSupportedDragActions = onSupportedDragActions;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSupportedDragActions(self: QSortFilterProxyModel, callback: *const fn () callconv(.c) i32) void {
        qtc.QSortFilterProxyModel_OnSupportedDragActions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `roleNames` instead
    ///
    pub const RoleNames = roleNames;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn roleNames(self: QSortFilterProxyModel, allocator: std.mem.Allocator) Map_i32_u8 {
        const _map: qtc.libqt_map = qtc.QSortFilterProxyModel_RoleNames(@ptrCast(self.ptr));
        var _ret: Map_i32_u8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("QSortFilterProxyModel.roleNames: Total capacity allocation failed");
        defer {
            const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
            for (0.._map.len) |i| {
                qtc.libqt_free(_values[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("QSortFilterProxyModel.roleNames: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.putAssumeCapacity(_key, _value_slice);
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `superRoleNames` instead
    ///
    pub const SuperRoleNames = superRoleNames;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superRoleNames(self: QSortFilterProxyModel, allocator: std.mem.Allocator) Map_i32_u8 {
        const _map: qtc.libqt_map = qtc.QSortFilterProxyModel_SuperRoleNames(@ptrCast(self.ptr));
        var _ret: Map_i32_u8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("QSortFilterProxyModel.roleNames: Total capacity allocation failed");
        defer {
            const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
            for (0.._map.len) |i| {
                qtc.libqt_free(_values[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("QSortFilterProxyModel.roleNames: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.putAssumeCapacity(_key, _value_slice);
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `onRoleNames` instead
    ///
    pub const OnRoleNames = onRoleNames;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_map `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of Map_i32_u8 `
    ///
    pub fn onRoleNames(self: QSortFilterProxyModel, callback: *const fn () callconv(.c) qtc.libqt_map) void {
        qtc.QSortFilterProxyModel_OnRoleNames(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `moveRows` instead
    ///
    pub const MoveRows = moveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceRow: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn moveRows(self: QSortFilterProxyModel, sourceParent: anytype, sourceRow: i32, count: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QSortFilterProxyModel_MoveRows(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceRow), @bitCast(count), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
    }

    /// ### DEPRECATED: Use `superMoveRows` instead
    ///
    pub const SuperMoveRows = superMoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceRow: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn superMoveRows(self: QSortFilterProxyModel, sourceParent: anytype, sourceRow: i32, count: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QSortFilterProxyModel_SuperMoveRows(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceRow), @bitCast(count), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
    }

    /// ### DEPRECATED: Use `onMoveRows` instead
    ///
    pub const OnMoveRows = onMoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, sourceParent: QModelIndex, sourceRow: i32, count: i32, destinationParent: QModelIndex, destinationChild: i32) callconv(.c) bool `
    ///
    pub fn onMoveRows(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnMoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `moveColumns` instead
    ///
    pub const MoveColumns = moveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceColumn: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn moveColumns(self: QSortFilterProxyModel, sourceParent: anytype, sourceColumn: i32, count: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QSortFilterProxyModel_MoveColumns(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceColumn), @bitCast(count), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
    }

    /// ### DEPRECATED: Use `superMoveColumns` instead
    ///
    pub const SuperMoveColumns = superMoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceColumn: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn superMoveColumns(self: QSortFilterProxyModel, sourceParent: anytype, sourceColumn: i32, count: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QSortFilterProxyModel_SuperMoveColumns(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceColumn), @bitCast(count), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
    }

    /// ### DEPRECATED: Use `onMoveColumns` instead
    ///
    pub const OnMoveColumns = onMoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, sourceParent: QModelIndex, sourceColumn: i32, count: i32, destinationParent: QModelIndex, destinationChild: i32) callconv(.c) bool `
    ///
    pub fn onMoveColumns(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnMoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `multiData` instead
    ///
    pub const MultiData = multiData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` roleDataSpan: QModelRoleDataSpan `
    ///
    pub fn multiData(self: QSortFilterProxyModel, _index: anytype, roleDataSpan: anytype) void {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        comptime _ = @TypeOf(roleDataSpan)._is_QModelRoleDataSpan;
        qtc.QSortFilterProxyModel_MultiData(@ptrCast(self.ptr), @ptrCast(_index.ptr), @ptrCast(roleDataSpan.ptr));
    }

    /// ### DEPRECATED: Use `superMultiData` instead
    ///
    pub const SuperMultiData = superMultiData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` roleDataSpan: QModelRoleDataSpan `
    ///
    pub fn superMultiData(self: QSortFilterProxyModel, _index: anytype, roleDataSpan: anytype) void {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        comptime _ = @TypeOf(roleDataSpan)._is_QModelRoleDataSpan;
        qtc.QSortFilterProxyModel_SuperMultiData(@ptrCast(self.ptr), @ptrCast(_index.ptr), @ptrCast(roleDataSpan.ptr));
    }

    /// ### DEPRECATED: Use `onMultiData` instead
    ///
    pub const OnMultiData = onMultiData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, index: QModelIndex, roleDataSpan: QModelRoleDataSpan) callconv(.c) void `
    ///
    pub fn onMultiData(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QModelIndex, QModelRoleDataSpan) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnMultiData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `resetInternalData` instead
    ///
    pub const ResetInternalData = resetInternalData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn resetInternalData(self: QSortFilterProxyModel) void {
        qtc.QSortFilterProxyModel_ResetInternalData(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superResetInternalData` instead
    ///
    pub const SuperResetInternalData = superResetInternalData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn superResetInternalData(self: QSortFilterProxyModel) void {
        qtc.QSortFilterProxyModel_SuperResetInternalData(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onResetInternalData` instead
    ///
    pub const OnResetInternalData = onResetInternalData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onResetInternalData(self: QSortFilterProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnResetInternalData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QSortFilterProxyModel, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSortFilterProxyModel_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QSortFilterProxyModel, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSortFilterProxyModel_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QEvent) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QSortFilterProxyModel, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSortFilterProxyModel_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QSortFilterProxyModel, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSortFilterProxyModel_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QObject, QEvent) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QSortFilterProxyModel, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QSortFilterProxyModel_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QSortFilterProxyModel, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QSortFilterProxyModel_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QTimerEvent) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QSortFilterProxyModel, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QSortFilterProxyModel_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QSortFilterProxyModel, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QSortFilterProxyModel_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QChildEvent) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QSortFilterProxyModel, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QSortFilterProxyModel_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QSortFilterProxyModel, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QSortFilterProxyModel_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QEvent) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QSortFilterProxyModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSortFilterProxyModel_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QSortFilterProxyModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSortFilterProxyModel_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QMetaMethod) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QSortFilterProxyModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSortFilterProxyModel_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QSortFilterProxyModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSortFilterProxyModel_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QMetaMethod) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `createSourceIndex` instead
    ///
    pub const CreateSourceIndex = createSourceIndex;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` col: i32 `
    ///
    /// ` internalPtr: ?*anyopaque `
    ///
    pub fn createSourceIndex(self: QSortFilterProxyModel, row: i32, col: i32, internalPtr: ?*anyopaque) QModelIndex {
        return .{ .ptr = qtc.QSortFilterProxyModel_CreateSourceIndex(@ptrCast(self.ptr), @bitCast(row), @bitCast(col), @ptrCast(internalPtr)) };
    }

    /// ### DEPRECATED: Use `superCreateSourceIndex` instead
    ///
    pub const SuperCreateSourceIndex = superCreateSourceIndex;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` col: i32 `
    ///
    /// ` internalPtr: ?*anyopaque `
    ///
    pub fn superCreateSourceIndex(self: QSortFilterProxyModel, row: i32, col: i32, internalPtr: ?*anyopaque) QModelIndex {
        return .{ .ptr = qtc.QSortFilterProxyModel_SuperCreateSourceIndex(@ptrCast(self.ptr), @bitCast(row), @bitCast(col), @ptrCast(internalPtr)) };
    }

    /// ### DEPRECATED: Use `onCreateSourceIndex` instead
    ///
    pub const OnCreateSourceIndex = onCreateSourceIndex;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, row: i32, col: i32, internalPtr: ?*anyopaque) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onCreateSourceIndex(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, i32, i32, ?*anyopaque) callconv(.c) QModelIndex) void {
        qtc.QSortFilterProxyModel_OnCreateSourceIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `createIndex` instead
    ///
    pub const CreateIndex = createIndex;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn createIndex(self: QSortFilterProxyModel, row: i32, column: i32) QModelIndex {
        return .{ .ptr = qtc.QSortFilterProxyModel_CreateIndex(@ptrCast(self.ptr), @bitCast(row), @bitCast(column)) };
    }

    /// ### DEPRECATED: Use `superCreateIndex` instead
    ///
    pub const SuperCreateIndex = superCreateIndex;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn superCreateIndex(self: QSortFilterProxyModel, row: i32, column: i32) QModelIndex {
        return .{ .ptr = qtc.QSortFilterProxyModel_SuperCreateIndex(@ptrCast(self.ptr), @bitCast(row), @bitCast(column)) };
    }

    /// ### DEPRECATED: Use `onCreateIndex` instead
    ///
    pub const OnCreateIndex = onCreateIndex;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, row: i32, column: i32) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onCreateIndex(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, i32, i32) callconv(.c) QModelIndex) void {
        qtc.QSortFilterProxyModel_OnCreateIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `encodeData` instead
    ///
    pub const EncodeData = encodeData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` indexes: []QModelIndex `
    ///
    /// ` stream: QDataStream `
    ///
    pub fn encodeData(self: QSortFilterProxyModel, indexes: []QModelIndex, stream: anytype) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        comptime _ = @TypeOf(stream)._is_QDataStream;
        qtc.QSortFilterProxyModel_EncodeData(@ptrCast(self.ptr), indexes_list, @ptrCast(stream.ptr));
    }

    /// ### DEPRECATED: Use `superEncodeData` instead
    ///
    pub const SuperEncodeData = superEncodeData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` indexes: []QModelIndex `
    ///
    /// ` stream: QDataStream `
    ///
    pub fn superEncodeData(self: QSortFilterProxyModel, indexes: []QModelIndex, stream: anytype) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        comptime _ = @TypeOf(stream)._is_QDataStream;
        qtc.QSortFilterProxyModel_SuperEncodeData(@ptrCast(self.ptr), indexes_list, @ptrCast(stream.ptr));
    }

    /// ### DEPRECATED: Use `onEncodeData` instead
    ///
    pub const OnEncodeData = onEncodeData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, indexes: qtc.libqt_list ([]QModelIndex), stream: QDataStream) callconv(.c) void `
    ///
    pub fn onEncodeData(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, qtc.libqt_list, QDataStream) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnEncodeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `decodeData` instead
    ///
    pub const DecodeData = decodeData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` stream: QDataStream `
    ///
    pub fn decodeData(self: QSortFilterProxyModel, row: i32, column: i32, _parent: anytype, stream: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        comptime _ = @TypeOf(stream)._is_QDataStream;
        return qtc.QSortFilterProxyModel_DecodeData(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(_parent.ptr), @ptrCast(stream.ptr));
    }

    /// ### DEPRECATED: Use `superDecodeData` instead
    ///
    pub const SuperDecodeData = superDecodeData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` stream: QDataStream `
    ///
    pub fn superDecodeData(self: QSortFilterProxyModel, row: i32, column: i32, _parent: anytype, stream: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        comptime _ = @TypeOf(stream)._is_QDataStream;
        return qtc.QSortFilterProxyModel_SuperDecodeData(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(_parent.ptr), @ptrCast(stream.ptr));
    }

    /// ### DEPRECATED: Use `onDecodeData` instead
    ///
    pub const OnDecodeData = onDecodeData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, row: i32, column: i32, parent: QModelIndex, stream: QDataStream) callconv(.c) bool `
    ///
    pub fn onDecodeData(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, i32, i32, QModelIndex, QDataStream) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnDecodeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `beginInsertRows` instead
    ///
    pub const BeginInsertRows = beginInsertRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn beginInsertRows(self: QSortFilterProxyModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QSortFilterProxyModel_BeginInsertRows(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `superBeginInsertRows` instead
    ///
    pub const SuperBeginInsertRows = superBeginInsertRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn superBeginInsertRows(self: QSortFilterProxyModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QSortFilterProxyModel_SuperBeginInsertRows(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `onBeginInsertRows` instead
    ///
    pub const OnBeginInsertRows = onBeginInsertRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onBeginInsertRows(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnBeginInsertRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `endInsertRows` instead
    ///
    pub const EndInsertRows = endInsertRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn endInsertRows(self: QSortFilterProxyModel) void {
        qtc.QSortFilterProxyModel_EndInsertRows(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superEndInsertRows` instead
    ///
    pub const SuperEndInsertRows = superEndInsertRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn superEndInsertRows(self: QSortFilterProxyModel) void {
        qtc.QSortFilterProxyModel_SuperEndInsertRows(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onEndInsertRows` instead
    ///
    pub const OnEndInsertRows = onEndInsertRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEndInsertRows(self: QSortFilterProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnEndInsertRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `beginRemoveRows` instead
    ///
    pub const BeginRemoveRows = beginRemoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn beginRemoveRows(self: QSortFilterProxyModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QSortFilterProxyModel_BeginRemoveRows(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `superBeginRemoveRows` instead
    ///
    pub const SuperBeginRemoveRows = superBeginRemoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn superBeginRemoveRows(self: QSortFilterProxyModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QSortFilterProxyModel_SuperBeginRemoveRows(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `onBeginRemoveRows` instead
    ///
    pub const OnBeginRemoveRows = onBeginRemoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onBeginRemoveRows(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnBeginRemoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `endRemoveRows` instead
    ///
    pub const EndRemoveRows = endRemoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn endRemoveRows(self: QSortFilterProxyModel) void {
        qtc.QSortFilterProxyModel_EndRemoveRows(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superEndRemoveRows` instead
    ///
    pub const SuperEndRemoveRows = superEndRemoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn superEndRemoveRows(self: QSortFilterProxyModel) void {
        qtc.QSortFilterProxyModel_SuperEndRemoveRows(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onEndRemoveRows` instead
    ///
    pub const OnEndRemoveRows = onEndRemoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEndRemoveRows(self: QSortFilterProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnEndRemoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `beginMoveRows` instead
    ///
    pub const BeginMoveRows = beginMoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceFirst: i32 `
    ///
    /// ` sourceLast: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationRow: i32 `
    ///
    pub fn beginMoveRows(self: QSortFilterProxyModel, sourceParent: anytype, sourceFirst: i32, sourceLast: i32, destinationParent: anytype, destinationRow: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QSortFilterProxyModel_BeginMoveRows(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent.ptr), @bitCast(destinationRow));
    }

    /// ### DEPRECATED: Use `superBeginMoveRows` instead
    ///
    pub const SuperBeginMoveRows = superBeginMoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceFirst: i32 `
    ///
    /// ` sourceLast: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationRow: i32 `
    ///
    pub fn superBeginMoveRows(self: QSortFilterProxyModel, sourceParent: anytype, sourceFirst: i32, sourceLast: i32, destinationParent: anytype, destinationRow: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QSortFilterProxyModel_SuperBeginMoveRows(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent.ptr), @bitCast(destinationRow));
    }

    /// ### DEPRECATED: Use `onBeginMoveRows` instead
    ///
    pub const OnBeginMoveRows = onBeginMoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, sourceParent: QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QModelIndex, destinationRow: i32) callconv(.c) bool `
    ///
    pub fn onBeginMoveRows(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnBeginMoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `endMoveRows` instead
    ///
    pub const EndMoveRows = endMoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn endMoveRows(self: QSortFilterProxyModel) void {
        qtc.QSortFilterProxyModel_EndMoveRows(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superEndMoveRows` instead
    ///
    pub const SuperEndMoveRows = superEndMoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn superEndMoveRows(self: QSortFilterProxyModel) void {
        qtc.QSortFilterProxyModel_SuperEndMoveRows(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onEndMoveRows` instead
    ///
    pub const OnEndMoveRows = onEndMoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEndMoveRows(self: QSortFilterProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnEndMoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `beginInsertColumns` instead
    ///
    pub const BeginInsertColumns = beginInsertColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn beginInsertColumns(self: QSortFilterProxyModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QSortFilterProxyModel_BeginInsertColumns(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `superBeginInsertColumns` instead
    ///
    pub const SuperBeginInsertColumns = superBeginInsertColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn superBeginInsertColumns(self: QSortFilterProxyModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QSortFilterProxyModel_SuperBeginInsertColumns(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `onBeginInsertColumns` instead
    ///
    pub const OnBeginInsertColumns = onBeginInsertColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onBeginInsertColumns(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnBeginInsertColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `endInsertColumns` instead
    ///
    pub const EndInsertColumns = endInsertColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn endInsertColumns(self: QSortFilterProxyModel) void {
        qtc.QSortFilterProxyModel_EndInsertColumns(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superEndInsertColumns` instead
    ///
    pub const SuperEndInsertColumns = superEndInsertColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn superEndInsertColumns(self: QSortFilterProxyModel) void {
        qtc.QSortFilterProxyModel_SuperEndInsertColumns(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onEndInsertColumns` instead
    ///
    pub const OnEndInsertColumns = onEndInsertColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEndInsertColumns(self: QSortFilterProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnEndInsertColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `beginRemoveColumns` instead
    ///
    pub const BeginRemoveColumns = beginRemoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn beginRemoveColumns(self: QSortFilterProxyModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QSortFilterProxyModel_BeginRemoveColumns(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `superBeginRemoveColumns` instead
    ///
    pub const SuperBeginRemoveColumns = superBeginRemoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn superBeginRemoveColumns(self: QSortFilterProxyModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QSortFilterProxyModel_SuperBeginRemoveColumns(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `onBeginRemoveColumns` instead
    ///
    pub const OnBeginRemoveColumns = onBeginRemoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onBeginRemoveColumns(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnBeginRemoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `endRemoveColumns` instead
    ///
    pub const EndRemoveColumns = endRemoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn endRemoveColumns(self: QSortFilterProxyModel) void {
        qtc.QSortFilterProxyModel_EndRemoveColumns(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superEndRemoveColumns` instead
    ///
    pub const SuperEndRemoveColumns = superEndRemoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn superEndRemoveColumns(self: QSortFilterProxyModel) void {
        qtc.QSortFilterProxyModel_SuperEndRemoveColumns(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onEndRemoveColumns` instead
    ///
    pub const OnEndRemoveColumns = onEndRemoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEndRemoveColumns(self: QSortFilterProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnEndRemoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `beginMoveColumns` instead
    ///
    pub const BeginMoveColumns = beginMoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceFirst: i32 `
    ///
    /// ` sourceLast: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationColumn: i32 `
    ///
    pub fn beginMoveColumns(self: QSortFilterProxyModel, sourceParent: anytype, sourceFirst: i32, sourceLast: i32, destinationParent: anytype, destinationColumn: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QSortFilterProxyModel_BeginMoveColumns(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent.ptr), @bitCast(destinationColumn));
    }

    /// ### DEPRECATED: Use `superBeginMoveColumns` instead
    ///
    pub const SuperBeginMoveColumns = superBeginMoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceFirst: i32 `
    ///
    /// ` sourceLast: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationColumn: i32 `
    ///
    pub fn superBeginMoveColumns(self: QSortFilterProxyModel, sourceParent: anytype, sourceFirst: i32, sourceLast: i32, destinationParent: anytype, destinationColumn: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QSortFilterProxyModel_SuperBeginMoveColumns(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent.ptr), @bitCast(destinationColumn));
    }

    /// ### DEPRECATED: Use `onBeginMoveColumns` instead
    ///
    pub const OnBeginMoveColumns = onBeginMoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, sourceParent: QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QModelIndex, destinationColumn: i32) callconv(.c) bool `
    ///
    pub fn onBeginMoveColumns(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnBeginMoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `endMoveColumns` instead
    ///
    pub const EndMoveColumns = endMoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn endMoveColumns(self: QSortFilterProxyModel) void {
        qtc.QSortFilterProxyModel_EndMoveColumns(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superEndMoveColumns` instead
    ///
    pub const SuperEndMoveColumns = superEndMoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn superEndMoveColumns(self: QSortFilterProxyModel) void {
        qtc.QSortFilterProxyModel_SuperEndMoveColumns(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onEndMoveColumns` instead
    ///
    pub const OnEndMoveColumns = onEndMoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEndMoveColumns(self: QSortFilterProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnEndMoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `beginResetModel` instead
    ///
    pub const BeginResetModel = beginResetModel;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn beginResetModel(self: QSortFilterProxyModel) void {
        qtc.QSortFilterProxyModel_BeginResetModel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superBeginResetModel` instead
    ///
    pub const SuperBeginResetModel = superBeginResetModel;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn superBeginResetModel(self: QSortFilterProxyModel) void {
        qtc.QSortFilterProxyModel_SuperBeginResetModel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onBeginResetModel` instead
    ///
    pub const OnBeginResetModel = onBeginResetModel;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onBeginResetModel(self: QSortFilterProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnBeginResetModel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `endResetModel` instead
    ///
    pub const EndResetModel = endResetModel;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn endResetModel(self: QSortFilterProxyModel) void {
        qtc.QSortFilterProxyModel_EndResetModel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superEndResetModel` instead
    ///
    pub const SuperEndResetModel = superEndResetModel;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn superEndResetModel(self: QSortFilterProxyModel) void {
        qtc.QSortFilterProxyModel_SuperEndResetModel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onEndResetModel` instead
    ///
    pub const OnEndResetModel = onEndResetModel;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEndResetModel(self: QSortFilterProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnEndResetModel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `changePersistentIndex` instead
    ///
    pub const ChangePersistentIndex = changePersistentIndex;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` from: QModelIndex `
    ///
    /// ` to: QModelIndex `
    ///
    pub fn changePersistentIndex(self: QSortFilterProxyModel, from: anytype, to: anytype) void {
        comptime _ = @TypeOf(from)._is_QModelIndex;
        comptime _ = @TypeOf(to)._is_QModelIndex;
        qtc.QSortFilterProxyModel_ChangePersistentIndex(@ptrCast(self.ptr), @ptrCast(from.ptr), @ptrCast(to.ptr));
    }

    /// ### DEPRECATED: Use `superChangePersistentIndex` instead
    ///
    pub const SuperChangePersistentIndex = superChangePersistentIndex;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` from: QModelIndex `
    ///
    /// ` to: QModelIndex `
    ///
    pub fn superChangePersistentIndex(self: QSortFilterProxyModel, from: anytype, to: anytype) void {
        comptime _ = @TypeOf(from)._is_QModelIndex;
        comptime _ = @TypeOf(to)._is_QModelIndex;
        qtc.QSortFilterProxyModel_SuperChangePersistentIndex(@ptrCast(self.ptr), @ptrCast(from.ptr), @ptrCast(to.ptr));
    }

    /// ### DEPRECATED: Use `onChangePersistentIndex` instead
    ///
    pub const OnChangePersistentIndex = onChangePersistentIndex;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, from: QModelIndex, to: QModelIndex) callconv(.c) void `
    ///
    pub fn onChangePersistentIndex(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QModelIndex, QModelIndex) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnChangePersistentIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `changePersistentIndexList` instead
    ///
    pub const ChangePersistentIndexList = changePersistentIndexList;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` from: []QModelIndex `
    ///
    /// ` to: []QModelIndex `
    ///
    pub fn changePersistentIndexList(self: QSortFilterProxyModel, from: []QModelIndex, to: []QModelIndex) void {
        const from_list = qtc.libqt_list{
            .len = from.len,
            .data = @ptrCast(from.ptr),
        };
        const to_list = qtc.libqt_list{
            .len = to.len,
            .data = @ptrCast(to.ptr),
        };
        qtc.QSortFilterProxyModel_ChangePersistentIndexList(@ptrCast(self.ptr), from_list, to_list);
    }

    /// ### DEPRECATED: Use `superChangePersistentIndexList` instead
    ///
    pub const SuperChangePersistentIndexList = superChangePersistentIndexList;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` from: []QModelIndex `
    ///
    /// ` to: []QModelIndex `
    ///
    pub fn superChangePersistentIndexList(self: QSortFilterProxyModel, from: []QModelIndex, to: []QModelIndex) void {
        const from_list = qtc.libqt_list{
            .len = from.len,
            .data = @ptrCast(from.ptr),
        };
        const to_list = qtc.libqt_list{
            .len = to.len,
            .data = @ptrCast(to.ptr),
        };
        qtc.QSortFilterProxyModel_SuperChangePersistentIndexList(@ptrCast(self.ptr), from_list, to_list);
    }

    /// ### DEPRECATED: Use `onChangePersistentIndexList` instead
    ///
    pub const OnChangePersistentIndexList = onChangePersistentIndexList;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, from: qtc.libqt_list ([]QModelIndex), to: qtc.libqt_list ([]QModelIndex)) callconv(.c) void `
    ///
    pub fn onChangePersistentIndexList(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, qtc.libqt_list, qtc.libqt_list) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnChangePersistentIndexList(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `persistentIndexList` instead
    ///
    pub const PersistentIndexList = persistentIndexList;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn persistentIndexList(self: QSortFilterProxyModel, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.QSortFilterProxyModel_PersistentIndexList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("QSortFilterProxyModel.persistentIndexList: Memory allocation failed");
        const _data_val: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `superPersistentIndexList` instead
    ///
    pub const SuperPersistentIndexList = superPersistentIndexList;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superPersistentIndexList(self: QSortFilterProxyModel, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.QSortFilterProxyModel_SuperPersistentIndexList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("QSortFilterProxyModel.persistentIndexList: Memory allocation failed");
        const _data_val: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `onPersistentIndexList` instead
    ///
    pub const OnPersistentIndexList = onPersistentIndexList;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QModelIndex `
    ///
    pub fn onPersistentIndexList(self: QSortFilterProxyModel, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.QSortFilterProxyModel_OnPersistentIndexList(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn sender(self: QSortFilterProxyModel) QObject {
        return .{ .ptr = qtc.QSortFilterProxyModel_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn superSender(self: QSortFilterProxyModel) QObject {
        return .{ .ptr = qtc.QSortFilterProxyModel_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QSortFilterProxyModel, callback: *const fn () callconv(.c) QObject) void {
        qtc.QSortFilterProxyModel_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn senderSignalIndex(self: QSortFilterProxyModel) i32 {
        return qtc.QSortFilterProxyModel_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn superSenderSignalIndex(self: QSortFilterProxyModel) i32 {
        return qtc.QSortFilterProxyModel_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QSortFilterProxyModel, callback: *const fn () callconv(.c) i32) void {
        qtc.QSortFilterProxyModel_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QSortFilterProxyModel, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSortFilterProxyModel_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QSortFilterProxyModel, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSortFilterProxyModel_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, [*:0]const u8) callconv(.c) i32) void {
        qtc.QSortFilterProxyModel_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QSortFilterProxyModel, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSortFilterProxyModel_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QSortFilterProxyModel, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSortFilterProxyModel_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QMetaMethod) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onSourceModelChanged` instead
    ///
    pub const OnSourceModelChanged = onSourceModelChanged;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sourceModelChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel) callconv(.c) void `
    ///
    pub fn onSourceModelChanged(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel) callconv(.c) void) void {
        qtc.QAbstractProxyModel_Connect_SourceModelChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onRowsAboutToBeInserted` instead
    ///
    pub const OnRowsAboutToBeInserted = onRowsAboutToBeInserted;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onRowsAboutToBeInserted(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsAboutToBeInserted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onRowsInserted` instead
    ///
    pub const OnRowsInserted = onRowsInserted;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onRowsInserted(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsInserted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onRowsAboutToBeRemoved` instead
    ///
    pub const OnRowsAboutToBeRemoved = onRowsAboutToBeRemoved;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onRowsAboutToBeRemoved(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsAboutToBeRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onRowsRemoved` instead
    ///
    pub const OnRowsRemoved = onRowsRemoved;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onRowsRemoved(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onColumnsAboutToBeInserted` instead
    ///
    pub const OnColumnsAboutToBeInserted = onColumnsAboutToBeInserted;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onColumnsAboutToBeInserted(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsAboutToBeInserted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onColumnsInserted` instead
    ///
    pub const OnColumnsInserted = onColumnsInserted;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onColumnsInserted(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsInserted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onColumnsAboutToBeRemoved` instead
    ///
    pub const OnColumnsAboutToBeRemoved = onColumnsAboutToBeRemoved;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onColumnsAboutToBeRemoved(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsAboutToBeRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onColumnsRemoved` instead
    ///
    pub const OnColumnsRemoved = onColumnsRemoved;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onColumnsRemoved(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onModelAboutToBeReset` instead
    ///
    pub const OnModelAboutToBeReset = onModelAboutToBeReset;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel) callconv(.c) void `
    ///
    pub fn onModelAboutToBeReset(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ModelAboutToBeReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onModelReset` instead
    ///
    pub const OnModelReset = onModelReset;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel) callconv(.c) void `
    ///
    pub fn onModelReset(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ModelReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onRowsAboutToBeMoved` instead
    ///
    pub const OnRowsAboutToBeMoved = onRowsAboutToBeMoved;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, sourceParent: QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QModelIndex, destinationRow: i32) callconv(.c) void `
    ///
    pub fn onRowsAboutToBeMoved(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsAboutToBeMoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onRowsMoved` instead
    ///
    pub const OnRowsMoved = onRowsMoved;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, sourceParent: QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QModelIndex, destinationRow: i32) callconv(.c) void `
    ///
    pub fn onRowsMoved(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsMoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onColumnsAboutToBeMoved` instead
    ///
    pub const OnColumnsAboutToBeMoved = onColumnsAboutToBeMoved;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, sourceParent: QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QModelIndex, destinationColumn: i32) callconv(.c) void `
    ///
    pub fn onColumnsAboutToBeMoved(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsAboutToBeMoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onColumnsMoved` instead
    ///
    pub const OnColumnsMoved = onColumnsMoved;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, sourceParent: QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QModelIndex, destinationColumn: i32) callconv(.c) void `
    ///
    pub fn onColumnsMoved(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsMoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: QSortFilterProxyModel, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QSortFilterProxyModel, callback: *const fn (QSortFilterProxyModel, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dtor.QSortFilterProxyModel)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSortFilterProxyModel `
    ///
    pub fn delete(self: QSortFilterProxyModel) void {
        qtc.QSortFilterProxyModel_Delete(@ptrCast(self.ptr));
    }
};
