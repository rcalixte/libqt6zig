const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAbstractItemModel = @import("libqt6").QAbstractItemModel;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QDataStream = @import("libqt6").QDataStream;
const QEvent = @import("libqt6").QEvent;
const QFileInfo = @import("libqt6").QFileInfo;
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
const qabstractitemmodel_enums = @import("../libqabstractitemmodel.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const ArrayMap_i32_QVariant = std.array_hash_map.Auto(i32, QVariant);
const Map_i32_u8 = std.AutoHashMapUnmanaged(i32, []u8);

/// ### [Upstream resources](https://api.kde.org/kdirsortfilterproxymodel.html)
pub const KDirSortFilterProxyModel = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kdirsortfilterproxymodel.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KDirSortFilterProxyModel,

    pub const _is_KDirSortFilterProxyModel = {};
    pub const _is_KCategorizedSortFilterProxyModel = {};
    pub const _is_QSortFilterProxyModel = {};
    pub const _is_QAbstractProxyModel = {};
    pub const _is_QAbstractItemModel = {};
    pub const _is_QObject = {};

    /// New constructs a new KDirSortFilterProxyModel object.
    ///
    pub fn New() KDirSortFilterProxyModel {
        return .{ .ptr = qtc.KDirSortFilterProxyModel_new() };
    }

    /// New2 constructs a new KDirSortFilterProxyModel object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) KDirSortFilterProxyModel {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KDirSortFilterProxyModel_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn MetaObject(self: KDirSortFilterProxyModel) QMetaObject {
        return .{ .ptr = qtc.KDirSortFilterProxyModel_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KDirSortFilterProxyModel, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KDirSortFilterProxyModel_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn SuperMetaObject(self: KDirSortFilterProxyModel) QMetaObject {
        return .{ .ptr = qtc.KDirSortFilterProxyModel_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KDirSortFilterProxyModel, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KDirSortFilterProxyModel_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KDirSortFilterProxyModel_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KDirSortFilterProxyModel, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KDirSortFilterProxyModel_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KDirSortFilterProxyModel, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KDirSortFilterProxyModel_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KDirSortFilterProxyModel_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KDirSortFilterProxyModel, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KDirSortFilterProxyModel_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdirsortfilterproxymodel.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kdirsortfilterproxymodel.html#hasChildren)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn HasChildren(self: KDirSortFilterProxyModel, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.KDirSortFilterProxyModel_HasChildren(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdirsortfilterproxymodel.html#hasChildren)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn OnHasChildren(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QModelIndex) callconv(.c) bool) void {
        qtc.KDirSortFilterProxyModel_OnHasChildren(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperHasChildren` instead
    ///
    pub const QBaseHasChildren = SuperHasChildren;

    /// ### [Upstream resources](https://api.kde.org/kdirsortfilterproxymodel.html#hasChildren)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn SuperHasChildren(self: KDirSortFilterProxyModel, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.KDirSortFilterProxyModel_SuperHasChildren(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdirsortfilterproxymodel.html#canFetchMore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn CanFetchMore(self: KDirSortFilterProxyModel, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.KDirSortFilterProxyModel_CanFetchMore(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdirsortfilterproxymodel.html#canFetchMore)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn OnCanFetchMore(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QModelIndex) callconv(.c) bool) void {
        qtc.KDirSortFilterProxyModel_OnCanFetchMore(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCanFetchMore` instead
    ///
    pub const QBaseCanFetchMore = SuperCanFetchMore;

    /// ### [Upstream resources](https://api.kde.org/kdirsortfilterproxymodel.html#canFetchMore)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn SuperCanFetchMore(self: KDirSortFilterProxyModel, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.KDirSortFilterProxyModel_SuperCanFetchMore(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdirsortfilterproxymodel.html#pointsForPermissions)
    ///
    /// ## Parameter(s):
    ///
    /// ` info: QFileInfo `
    ///
    pub fn PointsForPermissions(info: anytype) i32 {
        comptime _ = @TypeOf(info)._is_QFileInfo;
        return qtc.KDirSortFilterProxyModel_PointsForPermissions(@ptrCast(info.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdirsortfilterproxymodel.html#setSortFoldersFirst)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` foldersFirst: bool `
    ///
    pub fn SetSortFoldersFirst(self: KDirSortFilterProxyModel, foldersFirst: bool) void {
        qtc.KDirSortFilterProxyModel_SetSortFoldersFirst(@ptrCast(self.ptr), foldersFirst);
    }

    /// ### [Upstream resources](https://api.kde.org/kdirsortfilterproxymodel.html#sortFoldersFirst)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn SortFoldersFirst(self: KDirSortFilterProxyModel) bool {
        return qtc.KDirSortFilterProxyModel_SortFoldersFirst(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdirsortfilterproxymodel.html#setSortHiddenFilesLast)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` hiddenFilesLast: bool `
    ///
    pub fn SetSortHiddenFilesLast(self: KDirSortFilterProxyModel, hiddenFilesLast: bool) void {
        qtc.KDirSortFilterProxyModel_SetSortHiddenFilesLast(@ptrCast(self.ptr), hiddenFilesLast);
    }

    /// ### [Upstream resources](https://api.kde.org/kdirsortfilterproxymodel.html#sortHiddenFilesLast)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn SortHiddenFilesLast(self: KDirSortFilterProxyModel) bool {
        return qtc.KDirSortFilterProxyModel_SortHiddenFilesLast(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdirsortfilterproxymodel.html#supportedDragOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn SupportedDragOptions(self: KDirSortFilterProxyModel) i32 {
        return qtc.KDirSortFilterProxyModel_SupportedDragOptions(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdirsortfilterproxymodel.html#subSortLessThan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` left: QModelIndex `
    ///
    /// ` right: QModelIndex `
    ///
    pub fn SubSortLessThan(self: KDirSortFilterProxyModel, left: anytype, right: anytype) bool {
        comptime _ = @TypeOf(left)._is_QModelIndex;
        comptime _ = @TypeOf(right)._is_QModelIndex;
        return qtc.KDirSortFilterProxyModel_SubSortLessThan(@ptrCast(self.ptr), @ptrCast(left.ptr), @ptrCast(right.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdirsortfilterproxymodel.html#subSortLessThan)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, left: QModelIndex, right: QModelIndex) callconv(.c) bool `
    ///
    pub fn OnSubSortLessThan(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QModelIndex, QModelIndex) callconv(.c) bool) void {
        qtc.KDirSortFilterProxyModel_OnSubSortLessThan(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSubSortLessThan` instead
    ///
    pub const QBaseSubSortLessThan = SuperSubSortLessThan;

    /// ### [Upstream resources](https://api.kde.org/kdirsortfilterproxymodel.html#subSortLessThan)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` left: QModelIndex `
    ///
    /// ` right: QModelIndex `
    ///
    pub fn SuperSubSortLessThan(self: KDirSortFilterProxyModel, left: anytype, right: anytype) bool {
        comptime _ = @TypeOf(left)._is_QModelIndex;
        comptime _ = @TypeOf(right)._is_QModelIndex;
        return qtc.KDirSortFilterProxyModel_SuperSubSortLessThan(@ptrCast(self.ptr), @ptrCast(left.ptr), @ptrCast(right.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdirsortfilterproxymodel.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdirsortfilterproxymodel.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KCategorizedSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#isCategorizedModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn IsCategorizedModel(self: KDirSortFilterProxyModel) bool {
        return qtc.KCategorizedSortFilterProxyModel_IsCategorizedModel(@ptrCast(self.ptr));
    }

    /// Inherited from KCategorizedSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#setCategorizedModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` categorizedModel: bool `
    ///
    pub fn SetCategorizedModel(self: KDirSortFilterProxyModel, categorizedModel: bool) void {
        qtc.KCategorizedSortFilterProxyModel_SetCategorizedModel(@ptrCast(self.ptr), categorizedModel);
    }

    /// Inherited from KCategorizedSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#sortColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn SortColumn(self: KDirSortFilterProxyModel) i32 {
        return qtc.KCategorizedSortFilterProxyModel_SortColumn(@ptrCast(self.ptr));
    }

    /// Inherited from KCategorizedSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#sortOrder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.SortOrder `
    ///
    pub fn SortOrder(self: KDirSortFilterProxyModel) i32 {
        return qtc.KCategorizedSortFilterProxyModel_SortOrder(@ptrCast(self.ptr));
    }

    /// Inherited from KCategorizedSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#setSortCategoriesByNaturalComparison)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` sortCategoriesByNaturalComparison: bool `
    ///
    pub fn SetSortCategoriesByNaturalComparison(self: KDirSortFilterProxyModel, sortCategoriesByNaturalComparison: bool) void {
        qtc.KCategorizedSortFilterProxyModel_SetSortCategoriesByNaturalComparison(@ptrCast(self.ptr), sortCategoriesByNaturalComparison);
    }

    /// Inherited from KCategorizedSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#sortCategoriesByNaturalComparison)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn SortCategoriesByNaturalComparison(self: KDirSortFilterProxyModel) bool {
        return qtc.KCategorizedSortFilterProxyModel_SortCategoriesByNaturalComparison(@ptrCast(self.ptr));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterRegularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn FilterRegularExpression(self: KDirSortFilterProxyModel) QRegularExpression {
        return .{ .ptr = qtc.QSortFilterProxyModel_FilterRegularExpression(@ptrCast(self.ptr)) };
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterKeyColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn FilterKeyColumn(self: KDirSortFilterProxyModel) i32 {
        return qtc.QSortFilterProxyModel_FilterKeyColumn(@ptrCast(self.ptr));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterKeyColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` column: i32 `
    ///
    pub fn SetFilterKeyColumn(self: KDirSortFilterProxyModel, column: i32) void {
        qtc.QSortFilterProxyModel_SetFilterKeyColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterCaseSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.CaseSensitivity `
    ///
    pub fn FilterCaseSensitivity(self: KDirSortFilterProxyModel) i32 {
        return qtc.QSortFilterProxyModel_FilterCaseSensitivity(@ptrCast(self.ptr));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterCaseSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn SetFilterCaseSensitivity(self: KDirSortFilterProxyModel, cs: i32) void {
        qtc.QSortFilterProxyModel_SetFilterCaseSensitivity(@ptrCast(self.ptr), @bitCast(cs));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortCaseSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.CaseSensitivity `
    ///
    pub fn SortCaseSensitivity(self: KDirSortFilterProxyModel) i32 {
        return qtc.QSortFilterProxyModel_SortCaseSensitivity(@ptrCast(self.ptr));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSortCaseSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn SetSortCaseSensitivity(self: KDirSortFilterProxyModel, cs: i32) void {
        qtc.QSortFilterProxyModel_SetSortCaseSensitivity(@ptrCast(self.ptr), @bitCast(cs));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#isSortLocaleAware)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn IsSortLocaleAware(self: KDirSortFilterProxyModel) bool {
        return qtc.QSortFilterProxyModel_IsSortLocaleAware(@ptrCast(self.ptr));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSortLocaleAware)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` on: bool `
    ///
    pub fn SetSortLocaleAware(self: KDirSortFilterProxyModel, on: bool) void {
        qtc.QSortFilterProxyModel_SetSortLocaleAware(@ptrCast(self.ptr), on);
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dynamicSortFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn DynamicSortFilter(self: KDirSortFilterProxyModel) bool {
        return qtc.QSortFilterProxyModel_DynamicSortFilter(@ptrCast(self.ptr));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setDynamicSortFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` enable: bool `
    ///
    pub fn SetDynamicSortFilter(self: KDirSortFilterProxyModel, enable: bool) void {
        qtc.QSortFilterProxyModel_SetDynamicSortFilter(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn SortRole(self: KDirSortFilterProxyModel) i32 {
        return qtc.QSortFilterProxyModel_SortRole(@ptrCast(self.ptr));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSortRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` role: i32 `
    ///
    pub fn SetSortRole(self: KDirSortFilterProxyModel, role: i32) void {
        qtc.QSortFilterProxyModel_SetSortRole(@ptrCast(self.ptr), @bitCast(role));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn FilterRole(self: KDirSortFilterProxyModel) i32 {
        return qtc.QSortFilterProxyModel_FilterRole(@ptrCast(self.ptr));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` role: i32 `
    ///
    pub fn SetFilterRole(self: KDirSortFilterProxyModel, role: i32) void {
        qtc.QSortFilterProxyModel_SetFilterRole(@ptrCast(self.ptr), @bitCast(role));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#isRecursiveFilteringEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn IsRecursiveFilteringEnabled(self: KDirSortFilterProxyModel) bool {
        return qtc.QSortFilterProxyModel_IsRecursiveFilteringEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setRecursiveFilteringEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` recursive: bool `
    ///
    pub fn SetRecursiveFilteringEnabled(self: KDirSortFilterProxyModel, recursive: bool) void {
        qtc.QSortFilterProxyModel_SetRecursiveFilteringEnabled(@ptrCast(self.ptr), recursive);
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#autoAcceptChildRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn AutoAcceptChildRows(self: KDirSortFilterProxyModel) bool {
        return qtc.QSortFilterProxyModel_AutoAcceptChildRows(@ptrCast(self.ptr));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setAutoAcceptChildRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` accept: bool `
    ///
    pub fn SetAutoAcceptChildRows(self: KDirSortFilterProxyModel, accept: bool) void {
        qtc.QSortFilterProxyModel_SetAutoAcceptChildRows(@ptrCast(self.ptr), accept);
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterRegularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` pattern: []const u8 `
    ///
    pub fn SetFilterRegularExpression(self: KDirSortFilterProxyModel, pattern: []const u8) void {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        qtc.QSortFilterProxyModel_SetFilterRegularExpression(@ptrCast(self.ptr), pattern_str);
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterRegularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` regularExpression: QRegularExpression `
    ///
    pub fn SetFilterRegularExpression2(self: KDirSortFilterProxyModel, regularExpression: anytype) void {
        comptime _ = @TypeOf(regularExpression)._is_QRegularExpression;
        qtc.QSortFilterProxyModel_SetFilterRegularExpression2(@ptrCast(self.ptr), @ptrCast(regularExpression.ptr));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterWildcard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` pattern: []const u8 `
    ///
    pub fn SetFilterWildcard(self: KDirSortFilterProxyModel, pattern: []const u8) void {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        qtc.QSortFilterProxyModel_SetFilterWildcard(@ptrCast(self.ptr), pattern_str);
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterFixedString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` pattern: []const u8 `
    ///
    pub fn SetFilterFixedString(self: KDirSortFilterProxyModel, pattern: []const u8) void {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        qtc.QSortFilterProxyModel_SetFilterFixedString(@ptrCast(self.ptr), pattern_str);
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn Invalidate(self: KDirSortFilterProxyModel) void {
        qtc.QSortFilterProxyModel_Invalidate(@ptrCast(self.ptr));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dynamicSortFilterChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` dynamicSortFilter: bool `
    ///
    pub fn DynamicSortFilterChanged(self: KDirSortFilterProxyModel, dynamicSortFilter: bool) void {
        qtc.QSortFilterProxyModel_DynamicSortFilterChanged(@ptrCast(self.ptr), dynamicSortFilter);
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dynamicSortFilterChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, dynamicSortFilter: bool) callconv(.c) void `
    ///
    pub fn OnDynamicSortFilterChanged(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, bool) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_DynamicSortFilterChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterCaseSensitivityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` filterCaseSensitivity: qnamespace_enums.CaseSensitivity `
    ///
    pub fn FilterCaseSensitivityChanged(self: KDirSortFilterProxyModel, filterCaseSensitivity: i32) void {
        qtc.QSortFilterProxyModel_FilterCaseSensitivityChanged(@ptrCast(self.ptr), @bitCast(filterCaseSensitivity));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterCaseSensitivityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, filterCaseSensitivity: qnamespace_enums.CaseSensitivity) callconv(.c) void `
    ///
    pub fn OnFilterCaseSensitivityChanged(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, i32) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_FilterCaseSensitivityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortCaseSensitivityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` sortCaseSensitivity: qnamespace_enums.CaseSensitivity `
    ///
    pub fn SortCaseSensitivityChanged(self: KDirSortFilterProxyModel, sortCaseSensitivity: i32) void {
        qtc.QSortFilterProxyModel_SortCaseSensitivityChanged(@ptrCast(self.ptr), @bitCast(sortCaseSensitivity));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortCaseSensitivityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, sortCaseSensitivity: qnamespace_enums.CaseSensitivity) callconv(.c) void `
    ///
    pub fn OnSortCaseSensitivityChanged(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, i32) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_SortCaseSensitivityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortLocaleAwareChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` sortLocaleAware: bool `
    ///
    pub fn SortLocaleAwareChanged(self: KDirSortFilterProxyModel, sortLocaleAware: bool) void {
        qtc.QSortFilterProxyModel_SortLocaleAwareChanged(@ptrCast(self.ptr), sortLocaleAware);
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortLocaleAwareChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, sortLocaleAware: bool) callconv(.c) void `
    ///
    pub fn OnSortLocaleAwareChanged(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, bool) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_SortLocaleAwareChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortRoleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` sortRole: i32 `
    ///
    pub fn SortRoleChanged(self: KDirSortFilterProxyModel, sortRole: i32) void {
        qtc.QSortFilterProxyModel_SortRoleChanged(@ptrCast(self.ptr), @bitCast(sortRole));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortRoleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, sortRole: i32) callconv(.c) void `
    ///
    pub fn OnSortRoleChanged(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, i32) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_SortRoleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterRoleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` filterRole: i32 `
    ///
    pub fn FilterRoleChanged(self: KDirSortFilterProxyModel, filterRole: i32) void {
        qtc.QSortFilterProxyModel_FilterRoleChanged(@ptrCast(self.ptr), @bitCast(filterRole));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterRoleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, filterRole: i32) callconv(.c) void `
    ///
    pub fn OnFilterRoleChanged(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, i32) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_FilterRoleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#recursiveFilteringEnabledChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` recursiveFilteringEnabled: bool `
    ///
    pub fn RecursiveFilteringEnabledChanged(self: KDirSortFilterProxyModel, recursiveFilteringEnabled: bool) void {
        qtc.QSortFilterProxyModel_RecursiveFilteringEnabledChanged(@ptrCast(self.ptr), recursiveFilteringEnabled);
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#recursiveFilteringEnabledChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, recursiveFilteringEnabled: bool) callconv(.c) void `
    ///
    pub fn OnRecursiveFilteringEnabledChanged(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, bool) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_RecursiveFilteringEnabledChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#autoAcceptChildRowsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` autoAcceptChildRows: bool `
    ///
    pub fn AutoAcceptChildRowsChanged(self: KDirSortFilterProxyModel, autoAcceptChildRows: bool) void {
        qtc.QSortFilterProxyModel_AutoAcceptChildRowsChanged(@ptrCast(self.ptr), autoAcceptChildRows);
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#autoAcceptChildRowsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, autoAcceptChildRows: bool) callconv(.c) void `
    ///
    pub fn OnAutoAcceptChildRowsChanged(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, bool) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_AutoAcceptChildRowsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sourceModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn SourceModel(self: KDirSortFilterProxyModel) QAbstractItemModel {
        return .{ .ptr = qtc.QAbstractProxyModel_SourceModel(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn HasIndex(self: KDirSortFilterProxyModel, row: i32, column: i32) bool {
        return qtc.QAbstractItemModel_HasIndex(@ptrCast(self.ptr), @bitCast(row), @bitCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    pub fn InsertRow(self: KDirSortFilterProxyModel, row: i32) bool {
        return qtc.QAbstractItemModel_InsertRow(@ptrCast(self.ptr), @bitCast(row));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` column: i32 `
    ///
    pub fn InsertColumn(self: KDirSortFilterProxyModel, column: i32) bool {
        return qtc.QAbstractItemModel_InsertColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    pub fn RemoveRow(self: KDirSortFilterProxyModel, row: i32) bool {
        return qtc.QAbstractItemModel_RemoveRow(@ptrCast(self.ptr), @bitCast(row));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` column: i32 `
    ///
    pub fn RemoveColumn(self: KDirSortFilterProxyModel, column: i32) bool {
        return qtc.QAbstractItemModel_RemoveColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceRow: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn MoveRow(self: KDirSortFilterProxyModel, sourceParent: anytype, sourceRow: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QAbstractItemModel_MoveRow(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceRow), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceColumn: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn MoveColumn(self: KDirSortFilterProxyModel, sourceParent: anytype, sourceColumn: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QAbstractItemModel_MoveColumn(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceColumn), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn CheckIndex(self: KDirSortFilterProxyModel, index: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QAbstractItemModel_CheckIndex(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` topLeft: QModelIndex `
    ///
    /// ` bottomRight: QModelIndex `
    ///
    pub fn DataChanged(self: KDirSortFilterProxyModel, topLeft: anytype, bottomRight: anytype) void {
        comptime _ = @TypeOf(topLeft)._is_QModelIndex;
        comptime _ = @TypeOf(bottomRight)._is_QModelIndex;
        qtc.QAbstractItemModel_DataChanged(@ptrCast(self.ptr), @ptrCast(topLeft.ptr), @ptrCast(bottomRight.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, topLeft: QModelIndex, bottomRight: QModelIndex) callconv(.c) void `
    ///
    pub fn OnDataChanged(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QModelIndex, QModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_DataChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn HeaderDataChanged(self: KDirSortFilterProxyModel, orientation: i32, first: i32, last: i32) void {
        qtc.QAbstractItemModel_HeaderDataChanged(@ptrCast(self.ptr), @bitCast(orientation), @bitCast(first), @bitCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, orientation: qnamespace_enums.Orientation, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnHeaderDataChanged(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, i32, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_HeaderDataChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn LayoutChanged(self: KDirSortFilterProxyModel) void {
        qtc.QAbstractItemModel_LayoutChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel) callconv(.c) void `
    ///
    pub fn OnLayoutChanged(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn LayoutAboutToBeChanged(self: KDirSortFilterProxyModel) void {
        qtc.QAbstractItemModel_LayoutAboutToBeChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel) callconv(.c) void `
    ///
    pub fn OnLayoutAboutToBeChanged(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutAboutToBeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn HasIndex3(self: KDirSortFilterProxyModel, row: i32, column: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QAbstractItemModel_HasIndex3(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(parent.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn InsertRow2(self: KDirSortFilterProxyModel, row: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QAbstractItemModel_InsertRow2(@ptrCast(self.ptr), @bitCast(row), @ptrCast(parent.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn InsertColumn2(self: KDirSortFilterProxyModel, column: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QAbstractItemModel_InsertColumn2(@ptrCast(self.ptr), @bitCast(column), @ptrCast(parent.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn RemoveRow2(self: KDirSortFilterProxyModel, row: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QAbstractItemModel_RemoveRow2(@ptrCast(self.ptr), @bitCast(row), @ptrCast(parent.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn RemoveColumn2(self: KDirSortFilterProxyModel, column: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QAbstractItemModel_RemoveColumn2(@ptrCast(self.ptr), @bitCast(column), @ptrCast(parent.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` options: flag of qabstractitemmodel_enums.CheckIndexOption `
    ///
    pub fn CheckIndex2(self: KDirSortFilterProxyModel, index: anytype, options: i32) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QAbstractItemModel_CheckIndex2(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(options));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` topLeft: QModelIndex `
    ///
    /// ` bottomRight: QModelIndex `
    ///
    /// ` roles: []i32 `
    ///
    pub fn DataChanged3(self: KDirSortFilterProxyModel, topLeft: anytype, bottomRight: anytype, roles: []i32) void {
        comptime _ = @TypeOf(topLeft)._is_QModelIndex;
        comptime _ = @TypeOf(bottomRight)._is_QModelIndex;
        const roles_list = qtc.libqt_list{
            .len = roles.len,
            .data = roles.ptr,
        };
        qtc.QAbstractItemModel_DataChanged3(@ptrCast(self.ptr), @ptrCast(topLeft.ptr), @ptrCast(bottomRight.ptr), roles_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, topLeft: QModelIndex, bottomRight: QModelIndex, roles: qtc.libqt_list ([]i32)) callconv(.c) void `
    ///
    pub fn OnDataChanged3(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QModelIndex, QModelIndex, qtc.libqt_list) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_DataChanged3(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` parents: []QPersistentModelIndex `
    ///
    pub fn LayoutChanged1(self: KDirSortFilterProxyModel, parents: []QPersistentModelIndex) void {
        const parents_list = qtc.libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        qtc.QAbstractItemModel_LayoutChanged1(@ptrCast(self.ptr), parents_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, parents: qtc.libqt_list ([]QPersistentModelIndex)) callconv(.c) void `
    ///
    pub fn OnLayoutChanged1(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, qtc.libqt_list) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutChanged1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` parents: []QPersistentModelIndex `
    ///
    /// ` hint: qabstractitemmodel_enums.LayoutChangeHint `
    ///
    pub fn LayoutChanged2(self: KDirSortFilterProxyModel, parents: []QPersistentModelIndex, hint: i32) void {
        const parents_list = qtc.libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        qtc.QAbstractItemModel_LayoutChanged2(@ptrCast(self.ptr), parents_list, @bitCast(hint));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, parents: qtc.libqt_list ([]QPersistentModelIndex), hint: qabstractitemmodel_enums.LayoutChangeHint) callconv(.c) void `
    ///
    pub fn OnLayoutChanged2(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, qtc.libqt_list, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutChanged2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` parents: []QPersistentModelIndex `
    ///
    pub fn LayoutAboutToBeChanged1(self: KDirSortFilterProxyModel, parents: []QPersistentModelIndex) void {
        const parents_list = qtc.libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        qtc.QAbstractItemModel_LayoutAboutToBeChanged1(@ptrCast(self.ptr), parents_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, parents: qtc.libqt_list ([]QPersistentModelIndex)) callconv(.c) void `
    ///
    pub fn OnLayoutAboutToBeChanged1(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, qtc.libqt_list) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutAboutToBeChanged1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` parents: []QPersistentModelIndex `
    ///
    /// ` hint: qabstractitemmodel_enums.LayoutChangeHint `
    ///
    pub fn LayoutAboutToBeChanged2(self: KDirSortFilterProxyModel, parents: []QPersistentModelIndex, hint: i32) void {
        const parents_list = qtc.libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        qtc.QAbstractItemModel_LayoutAboutToBeChanged2(@ptrCast(self.ptr), parents_list, @bitCast(hint));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, parents: qtc.libqt_list ([]QPersistentModelIndex), hint: qabstractitemmodel_enums.LayoutChangeHint) callconv(.c) void `
    ///
    pub fn OnLayoutAboutToBeChanged2(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, qtc.libqt_list, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutAboutToBeChanged2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KDirSortFilterProxyModel, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdirsortfilterproxymodel.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KDirSortFilterProxyModel, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn IsWidgetType(self: KDirSortFilterProxyModel) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn IsWindowType(self: KDirSortFilterProxyModel) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn IsQuickItemType(self: KDirSortFilterProxyModel) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn SignalsBlocked(self: KDirSortFilterProxyModel) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KDirSortFilterProxyModel, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn Thread(self: KDirSortFilterProxyModel) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KDirSortFilterProxyModel, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KDirSortFilterProxyModel, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KDirSortFilterProxyModel, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KDirSortFilterProxyModel, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KDirSortFilterProxyModel, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KDirSortFilterProxyModel, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kdirsortfilterproxymodel.Children: Memory allocation failed");
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
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KDirSortFilterProxyModel, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KDirSortFilterProxyModel, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KDirSortFilterProxyModel, obj: anytype) void {
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
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KDirSortFilterProxyModel, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn Disconnect3(self: KDirSortFilterProxyModel) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KDirSortFilterProxyModel, receiver: anytype) bool {
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
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn DumpObjectTree(self: KDirSortFilterProxyModel) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn DumpObjectInfo(self: KDirSortFilterProxyModel) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KDirSortFilterProxyModel, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KDirSortFilterProxyModel, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KDirSortFilterProxyModel, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kdirsortfilterproxymodel.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kdirsortfilterproxymodel.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn BindingStorage(self: KDirSortFilterProxyModel) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn BindingStorage2(self: KDirSortFilterProxyModel) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn Destroyed(self: KDirSortFilterProxyModel) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KDirSortFilterProxyModel, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn DeleteLater(self: KDirSortFilterProxyModel) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KDirSortFilterProxyModel, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KDirSortFilterProxyModel, time: i64, timerType: i32) i32 {
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
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KDirSortFilterProxyModel, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KDirSortFilterProxyModel, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KDirSortFilterProxyModel, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KDirSortFilterProxyModel, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KDirSortFilterProxyModel, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KDirSortFilterProxyModel, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KCategorizedSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#sort)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` column: i32 `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    pub fn Sort(self: KDirSortFilterProxyModel, column: i32, order: i32) void {
        qtc.KDirSortFilterProxyModel_Sort(@ptrCast(self.ptr), @bitCast(column), @bitCast(order));
    }

    /// ### DEPRECATED: Use `SuperSort` instead
    ///
    pub const QBaseSort = SuperSort;

    /// Inherited from KCategorizedSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#sort)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` column: i32 `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    pub fn SuperSort(self: KDirSortFilterProxyModel, column: i32, order: i32) void {
        qtc.KDirSortFilterProxyModel_SuperSort(@ptrCast(self.ptr), @bitCast(column), @bitCast(order));
    }

    /// Inherited from KCategorizedSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#sort)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, column: i32, order: qnamespace_enums.SortOrder) callconv(.c) void `
    ///
    pub fn OnSort(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, i32, i32) callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnSort(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KCategorizedSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#lessThan)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` left: QModelIndex `
    ///
    /// ` right: QModelIndex `
    ///
    pub fn LessThan(self: KDirSortFilterProxyModel, left: anytype, right: anytype) bool {
        comptime _ = @TypeOf(left)._is_QModelIndex;
        comptime _ = @TypeOf(right)._is_QModelIndex;
        return qtc.KDirSortFilterProxyModel_LessThan(@ptrCast(self.ptr), @ptrCast(left.ptr), @ptrCast(right.ptr));
    }

    /// ### DEPRECATED: Use `SuperLessThan` instead
    ///
    pub const QBaseLessThan = SuperLessThan;

    /// Inherited from KCategorizedSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#lessThan)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` left: QModelIndex `
    ///
    /// ` right: QModelIndex `
    ///
    pub fn SuperLessThan(self: KDirSortFilterProxyModel, left: anytype, right: anytype) bool {
        comptime _ = @TypeOf(left)._is_QModelIndex;
        comptime _ = @TypeOf(right)._is_QModelIndex;
        return qtc.KDirSortFilterProxyModel_SuperLessThan(@ptrCast(self.ptr), @ptrCast(left.ptr), @ptrCast(right.ptr));
    }

    /// Inherited from KCategorizedSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#lessThan)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, left: QModelIndex, right: QModelIndex) callconv(.c) bool `
    ///
    pub fn OnLessThan(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QModelIndex, QModelIndex) callconv(.c) bool) void {
        qtc.KDirSortFilterProxyModel_OnLessThan(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KCategorizedSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#compareCategories)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` left: QModelIndex `
    ///
    /// ` right: QModelIndex `
    ///
    pub fn CompareCategories(self: KDirSortFilterProxyModel, left: anytype, right: anytype) i32 {
        comptime _ = @TypeOf(left)._is_QModelIndex;
        comptime _ = @TypeOf(right)._is_QModelIndex;
        return qtc.KDirSortFilterProxyModel_CompareCategories(@ptrCast(self.ptr), @ptrCast(left.ptr), @ptrCast(right.ptr));
    }

    /// ### DEPRECATED: Use `SuperCompareCategories` instead
    ///
    pub const QBaseCompareCategories = SuperCompareCategories;

    /// Inherited from KCategorizedSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#compareCategories)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` left: QModelIndex `
    ///
    /// ` right: QModelIndex `
    ///
    pub fn SuperCompareCategories(self: KDirSortFilterProxyModel, left: anytype, right: anytype) i32 {
        comptime _ = @TypeOf(left)._is_QModelIndex;
        comptime _ = @TypeOf(right)._is_QModelIndex;
        return qtc.KDirSortFilterProxyModel_SuperCompareCategories(@ptrCast(self.ptr), @ptrCast(left.ptr), @ptrCast(right.ptr));
    }

    /// Inherited from KCategorizedSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#compareCategories)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, left: QModelIndex, right: QModelIndex) callconv(.c) i32 `
    ///
    pub fn OnCompareCategories(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QModelIndex, QModelIndex) callconv(.c) i32) void {
        qtc.KDirSortFilterProxyModel_OnCompareCategories(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSourceModel)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` sourceModel: QAbstractItemModel `
    ///
    pub fn SetSourceModel(self: KDirSortFilterProxyModel, sourceModel: anytype) void {
        comptime _ = @TypeOf(sourceModel)._is_QAbstractItemModel;
        qtc.KDirSortFilterProxyModel_SetSourceModel(@ptrCast(self.ptr), @ptrCast(sourceModel.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetSourceModel` instead
    ///
    pub const QBaseSetSourceModel = SuperSetSourceModel;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSourceModel)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` sourceModel: QAbstractItemModel `
    ///
    pub fn SuperSetSourceModel(self: KDirSortFilterProxyModel, sourceModel: anytype) void {
        comptime _ = @TypeOf(sourceModel)._is_QAbstractItemModel;
        qtc.KDirSortFilterProxyModel_SuperSetSourceModel(@ptrCast(self.ptr), @ptrCast(sourceModel.ptr));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSourceModel)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, sourceModel: QAbstractItemModel) callconv(.c) void `
    ///
    pub fn OnSetSourceModel(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QAbstractItemModel) callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnSetSourceModel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapToSource)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` proxyIndex: QModelIndex `
    ///
    pub fn MapToSource(self: KDirSortFilterProxyModel, proxyIndex: anytype) QModelIndex {
        comptime _ = @TypeOf(proxyIndex)._is_QModelIndex;
        return .{ .ptr = qtc.KDirSortFilterProxyModel_MapToSource(@ptrCast(self.ptr), @ptrCast(proxyIndex.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperMapToSource` instead
    ///
    pub const QBaseMapToSource = SuperMapToSource;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapToSource)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` proxyIndex: QModelIndex `
    ///
    pub fn SuperMapToSource(self: KDirSortFilterProxyModel, proxyIndex: anytype) QModelIndex {
        comptime _ = @TypeOf(proxyIndex)._is_QModelIndex;
        return .{ .ptr = qtc.KDirSortFilterProxyModel_SuperMapToSource(@ptrCast(self.ptr), @ptrCast(proxyIndex.ptr)) };
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapToSource)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, proxyIndex: QModelIndex) callconv(.c) QModelIndex `
    ///
    pub fn OnMapToSource(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.KDirSortFilterProxyModel_OnMapToSource(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapFromSource)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` sourceIndex: QModelIndex `
    ///
    pub fn MapFromSource(self: KDirSortFilterProxyModel, sourceIndex: anytype) QModelIndex {
        comptime _ = @TypeOf(sourceIndex)._is_QModelIndex;
        return .{ .ptr = qtc.KDirSortFilterProxyModel_MapFromSource(@ptrCast(self.ptr), @ptrCast(sourceIndex.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperMapFromSource` instead
    ///
    pub const QBaseMapFromSource = SuperMapFromSource;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapFromSource)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` sourceIndex: QModelIndex `
    ///
    pub fn SuperMapFromSource(self: KDirSortFilterProxyModel, sourceIndex: anytype) QModelIndex {
        comptime _ = @TypeOf(sourceIndex)._is_QModelIndex;
        return .{ .ptr = qtc.KDirSortFilterProxyModel_SuperMapFromSource(@ptrCast(self.ptr), @ptrCast(sourceIndex.ptr)) };
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapFromSource)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, sourceIndex: QModelIndex) callconv(.c) QModelIndex `
    ///
    pub fn OnMapFromSource(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.KDirSortFilterProxyModel_OnMapFromSource(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionToSource)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` proxySelection: QItemSelection `
    ///
    pub fn MapSelectionToSource(self: KDirSortFilterProxyModel, proxySelection: anytype) QItemSelection {
        comptime _ = @TypeOf(proxySelection)._is_QItemSelection;
        return .{ .ptr = qtc.KDirSortFilterProxyModel_MapSelectionToSource(@ptrCast(self.ptr), @ptrCast(proxySelection.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperMapSelectionToSource` instead
    ///
    pub const QBaseMapSelectionToSource = SuperMapSelectionToSource;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionToSource)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` proxySelection: QItemSelection `
    ///
    pub fn SuperMapSelectionToSource(self: KDirSortFilterProxyModel, proxySelection: anytype) QItemSelection {
        comptime _ = @TypeOf(proxySelection)._is_QItemSelection;
        return .{ .ptr = qtc.KDirSortFilterProxyModel_SuperMapSelectionToSource(@ptrCast(self.ptr), @ptrCast(proxySelection.ptr)) };
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionToSource)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, proxySelection: QItemSelection) callconv(.c) QItemSelection `
    ///
    pub fn OnMapSelectionToSource(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QItemSelection) callconv(.c) QItemSelection) void {
        qtc.KDirSortFilterProxyModel_OnMapSelectionToSource(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionFromSource)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` sourceSelection: QItemSelection `
    ///
    pub fn MapSelectionFromSource(self: KDirSortFilterProxyModel, sourceSelection: anytype) QItemSelection {
        comptime _ = @TypeOf(sourceSelection)._is_QItemSelection;
        return .{ .ptr = qtc.KDirSortFilterProxyModel_MapSelectionFromSource(@ptrCast(self.ptr), @ptrCast(sourceSelection.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperMapSelectionFromSource` instead
    ///
    pub const QBaseMapSelectionFromSource = SuperMapSelectionFromSource;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionFromSource)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` sourceSelection: QItemSelection `
    ///
    pub fn SuperMapSelectionFromSource(self: KDirSortFilterProxyModel, sourceSelection: anytype) QItemSelection {
        comptime _ = @TypeOf(sourceSelection)._is_QItemSelection;
        return .{ .ptr = qtc.KDirSortFilterProxyModel_SuperMapSelectionFromSource(@ptrCast(self.ptr), @ptrCast(sourceSelection.ptr)) };
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionFromSource)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, sourceSelection: QItemSelection) callconv(.c) QItemSelection `
    ///
    pub fn OnMapSelectionFromSource(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QItemSelection) callconv(.c) QItemSelection) void {
        qtc.KDirSortFilterProxyModel_OnMapSelectionFromSource(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsRow)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` source_row: i32 `
    ///
    /// ` source_parent: QModelIndex `
    ///
    pub fn FilterAcceptsRow(self: KDirSortFilterProxyModel, source_row: i32, source_parent: anytype) bool {
        comptime _ = @TypeOf(source_parent)._is_QModelIndex;
        return qtc.KDirSortFilterProxyModel_FilterAcceptsRow(@ptrCast(self.ptr), @bitCast(source_row), @ptrCast(source_parent.ptr));
    }

    /// ### DEPRECATED: Use `SuperFilterAcceptsRow` instead
    ///
    pub const QBaseFilterAcceptsRow = SuperFilterAcceptsRow;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsRow)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` source_row: i32 `
    ///
    /// ` source_parent: QModelIndex `
    ///
    pub fn SuperFilterAcceptsRow(self: KDirSortFilterProxyModel, source_row: i32, source_parent: anytype) bool {
        comptime _ = @TypeOf(source_parent)._is_QModelIndex;
        return qtc.KDirSortFilterProxyModel_SuperFilterAcceptsRow(@ptrCast(self.ptr), @bitCast(source_row), @ptrCast(source_parent.ptr));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsRow)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, source_row: i32, source_parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn OnFilterAcceptsRow(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, i32, QModelIndex) callconv(.c) bool) void {
        qtc.KDirSortFilterProxyModel_OnFilterAcceptsRow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsColumn)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` source_column: i32 `
    ///
    /// ` source_parent: QModelIndex `
    ///
    pub fn FilterAcceptsColumn(self: KDirSortFilterProxyModel, source_column: i32, source_parent: anytype) bool {
        comptime _ = @TypeOf(source_parent)._is_QModelIndex;
        return qtc.KDirSortFilterProxyModel_FilterAcceptsColumn(@ptrCast(self.ptr), @bitCast(source_column), @ptrCast(source_parent.ptr));
    }

    /// ### DEPRECATED: Use `SuperFilterAcceptsColumn` instead
    ///
    pub const QBaseFilterAcceptsColumn = SuperFilterAcceptsColumn;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsColumn)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` source_column: i32 `
    ///
    /// ` source_parent: QModelIndex `
    ///
    pub fn SuperFilterAcceptsColumn(self: KDirSortFilterProxyModel, source_column: i32, source_parent: anytype) bool {
        comptime _ = @TypeOf(source_parent)._is_QModelIndex;
        return qtc.KDirSortFilterProxyModel_SuperFilterAcceptsColumn(@ptrCast(self.ptr), @bitCast(source_column), @ptrCast(source_parent.ptr));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsColumn)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, source_column: i32, source_parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn OnFilterAcceptsColumn(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, i32, QModelIndex) callconv(.c) bool) void {
        qtc.KDirSortFilterProxyModel_OnFilterAcceptsColumn(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#index)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn Index(self: KDirSortFilterProxyModel, row: i32, column: i32, parent: anytype) QModelIndex {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return .{ .ptr = qtc.KDirSortFilterProxyModel_Index(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(parent.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperIndex` instead
    ///
    pub const QBaseIndex = SuperIndex;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#index)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn SuperIndex(self: KDirSortFilterProxyModel, row: i32, column: i32, parent: anytype) QModelIndex {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return .{ .ptr = qtc.KDirSortFilterProxyModel_SuperIndex(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(parent.ptr)) };
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#index)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, row: i32, column: i32, parent: QModelIndex) callconv(.c) QModelIndex `
    ///
    pub fn OnIndex(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, i32, i32, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.KDirSortFilterProxyModel_OnIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#parent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` child: QModelIndex `
    ///
    pub fn Parent(self: KDirSortFilterProxyModel, child: anytype) QModelIndex {
        comptime _ = @TypeOf(child)._is_QModelIndex;
        return .{ .ptr = qtc.KDirSortFilterProxyModel_Parent(@ptrCast(self.ptr), @ptrCast(child.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperParent` instead
    ///
    pub const QBaseParent = SuperParent;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#parent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` child: QModelIndex `
    ///
    pub fn SuperParent(self: KDirSortFilterProxyModel, child: anytype) QModelIndex {
        comptime _ = @TypeOf(child)._is_QModelIndex;
        return .{ .ptr = qtc.KDirSortFilterProxyModel_SuperParent(@ptrCast(self.ptr), @ptrCast(child.ptr)) };
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#parent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, child: QModelIndex) callconv(.c) QModelIndex `
    ///
    pub fn OnParent(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.KDirSortFilterProxyModel_OnParent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sibling)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` idx: QModelIndex `
    ///
    pub fn Sibling(self: KDirSortFilterProxyModel, row: i32, column: i32, idx: anytype) QModelIndex {
        comptime _ = @TypeOf(idx)._is_QModelIndex;
        return .{ .ptr = qtc.KDirSortFilterProxyModel_Sibling(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(idx.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSibling` instead
    ///
    pub const QBaseSibling = SuperSibling;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sibling)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` idx: QModelIndex `
    ///
    pub fn SuperSibling(self: KDirSortFilterProxyModel, row: i32, column: i32, idx: anytype) QModelIndex {
        comptime _ = @TypeOf(idx)._is_QModelIndex;
        return .{ .ptr = qtc.KDirSortFilterProxyModel_SuperSibling(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(idx.ptr)) };
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sibling)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, row: i32, column: i32, idx: QModelIndex) callconv(.c) QModelIndex `
    ///
    pub fn OnSibling(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, i32, i32, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.KDirSortFilterProxyModel_OnSibling(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#rowCount)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn RowCount(self: KDirSortFilterProxyModel, parent: anytype) i32 {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.KDirSortFilterProxyModel_RowCount(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// ### DEPRECATED: Use `SuperRowCount` instead
    ///
    pub const QBaseRowCount = SuperRowCount;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#rowCount)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn SuperRowCount(self: KDirSortFilterProxyModel, parent: anytype) i32 {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.KDirSortFilterProxyModel_SuperRowCount(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#rowCount)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, parent: QModelIndex) callconv(.c) i32 `
    ///
    pub fn OnRowCount(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QModelIndex) callconv(.c) i32) void {
        qtc.KDirSortFilterProxyModel_OnRowCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#columnCount)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn ColumnCount(self: KDirSortFilterProxyModel, parent: anytype) i32 {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.KDirSortFilterProxyModel_ColumnCount(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// ### DEPRECATED: Use `SuperColumnCount` instead
    ///
    pub const QBaseColumnCount = SuperColumnCount;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#columnCount)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn SuperColumnCount(self: KDirSortFilterProxyModel, parent: anytype) i32 {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.KDirSortFilterProxyModel_SuperColumnCount(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#columnCount)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, parent: QModelIndex) callconv(.c) i32 `
    ///
    pub fn OnColumnCount(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QModelIndex) callconv(.c) i32) void {
        qtc.KDirSortFilterProxyModel_OnColumnCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#data)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` role: i32 `
    ///
    pub fn Data(self: KDirSortFilterProxyModel, index: anytype, role: i32) QVariant {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.KDirSortFilterProxyModel_Data(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(role)) };
    }

    /// ### DEPRECATED: Use `SuperData` instead
    ///
    pub const QBaseData = SuperData;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#data)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` role: i32 `
    ///
    pub fn SuperData(self: KDirSortFilterProxyModel, index: anytype, role: i32) QVariant {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.KDirSortFilterProxyModel_SuperData(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(role)) };
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#data)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, index: QModelIndex, role: i32) callconv(.c) QVariant `
    ///
    pub fn OnData(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QModelIndex, i32) callconv(.c) QVariant) void {
        qtc.KDirSortFilterProxyModel_OnData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` value: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn SetData(self: KDirSortFilterProxyModel, index: anytype, value: anytype, role: i32) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.KDirSortFilterProxyModel_SetData(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(value.ptr), @bitCast(role));
    }

    /// ### DEPRECATED: Use `SuperSetData` instead
    ///
    pub const QBaseSetData = SuperSetData;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` value: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn SuperSetData(self: KDirSortFilterProxyModel, index: anytype, value: anytype, role: i32) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.KDirSortFilterProxyModel_SuperSetData(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(value.ptr), @bitCast(role));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, index: QModelIndex, value: QVariant, role: i32) callconv(.c) bool `
    ///
    pub fn OnSetData(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QModelIndex, QVariant, i32) callconv(.c) bool) void {
        qtc.KDirSortFilterProxyModel_OnSetData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#headerData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` role: i32 `
    ///
    pub fn HeaderData(self: KDirSortFilterProxyModel, section: i32, orientation: i32, role: i32) QVariant {
        return .{ .ptr = qtc.KDirSortFilterProxyModel_HeaderData(@ptrCast(self.ptr), @bitCast(section), @bitCast(orientation), @bitCast(role)) };
    }

    /// ### DEPRECATED: Use `SuperHeaderData` instead
    ///
    pub const QBaseHeaderData = SuperHeaderData;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#headerData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` role: i32 `
    ///
    pub fn SuperHeaderData(self: KDirSortFilterProxyModel, section: i32, orientation: i32, role: i32) QVariant {
        return .{ .ptr = qtc.KDirSortFilterProxyModel_SuperHeaderData(@ptrCast(self.ptr), @bitCast(section), @bitCast(orientation), @bitCast(role)) };
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#headerData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, section: i32, orientation: qnamespace_enums.Orientation, role: i32) callconv(.c) QVariant `
    ///
    pub fn OnHeaderData(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, i32, i32, i32) callconv(.c) QVariant) void {
        qtc.KDirSortFilterProxyModel_OnHeaderData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setHeaderData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` value: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn SetHeaderData(self: KDirSortFilterProxyModel, section: i32, orientation: i32, value: anytype, role: i32) bool {
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.KDirSortFilterProxyModel_SetHeaderData(@ptrCast(self.ptr), @bitCast(section), @bitCast(orientation), @ptrCast(value.ptr), @bitCast(role));
    }

    /// ### DEPRECATED: Use `SuperSetHeaderData` instead
    ///
    pub const QBaseSetHeaderData = SuperSetHeaderData;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setHeaderData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` value: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn SuperSetHeaderData(self: KDirSortFilterProxyModel, section: i32, orientation: i32, value: anytype, role: i32) bool {
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.KDirSortFilterProxyModel_SuperSetHeaderData(@ptrCast(self.ptr), @bitCast(section), @bitCast(orientation), @ptrCast(value.ptr), @bitCast(role));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setHeaderData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, section: i32, orientation: qnamespace_enums.Orientation, value: QVariant, role: i32) callconv(.c) bool `
    ///
    pub fn OnSetHeaderData(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, i32, i32, QVariant, i32) callconv(.c) bool) void {
        qtc.KDirSortFilterProxyModel_OnSetHeaderData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` indexes: []QModelIndex `
    ///
    pub fn MimeData(self: KDirSortFilterProxyModel, indexes: []QModelIndex) QMimeData {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        return .{ .ptr = qtc.KDirSortFilterProxyModel_MimeData(@ptrCast(self.ptr), indexes_list) };
    }

    /// ### DEPRECATED: Use `SuperMimeData` instead
    ///
    pub const QBaseMimeData = SuperMimeData;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` indexes: []QModelIndex `
    ///
    pub fn SuperMimeData(self: KDirSortFilterProxyModel, indexes: []QModelIndex) QMimeData {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        return .{ .ptr = qtc.KDirSortFilterProxyModel_SuperMimeData(@ptrCast(self.ptr), indexes_list) };
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, indexes: qtc.libqt_list ([]QModelIndex)) callconv(.c) QMimeData `
    ///
    pub fn OnMimeData(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, qtc.libqt_list) callconv(.c) QMimeData) void {
        qtc.KDirSortFilterProxyModel_OnMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dropMimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` data: QMimeData `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn DropMimeData(self: KDirSortFilterProxyModel, data: anytype, action: i32, row: i32, column: i32, parent: anytype) bool {
        comptime _ = @TypeOf(data)._is_QMimeData;
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.KDirSortFilterProxyModel_DropMimeData(@ptrCast(self.ptr), @ptrCast(data.ptr), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(parent.ptr));
    }

    /// ### DEPRECATED: Use `SuperDropMimeData` instead
    ///
    pub const QBaseDropMimeData = SuperDropMimeData;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dropMimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` data: QMimeData `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn SuperDropMimeData(self: KDirSortFilterProxyModel, data: anytype, action: i32, row: i32, column: i32, parent: anytype) bool {
        comptime _ = @TypeOf(data)._is_QMimeData;
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.KDirSortFilterProxyModel_SuperDropMimeData(@ptrCast(self.ptr), @ptrCast(data.ptr), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(parent.ptr));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dropMimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, data: QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn OnDropMimeData(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QMimeData, i32, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.KDirSortFilterProxyModel_OnDropMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn InsertRows(self: KDirSortFilterProxyModel, row: i32, count: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.KDirSortFilterProxyModel_InsertRows(@ptrCast(self.ptr), @bitCast(row), @bitCast(count), @ptrCast(parent.ptr));
    }

    /// ### DEPRECATED: Use `SuperInsertRows` instead
    ///
    pub const QBaseInsertRows = SuperInsertRows;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn SuperInsertRows(self: KDirSortFilterProxyModel, row: i32, count: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.KDirSortFilterProxyModel_SuperInsertRows(@ptrCast(self.ptr), @bitCast(row), @bitCast(count), @ptrCast(parent.ptr));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, row: i32, count: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn OnInsertRows(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.KDirSortFilterProxyModel_OnInsertRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn InsertColumns(self: KDirSortFilterProxyModel, column: i32, count: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.KDirSortFilterProxyModel_InsertColumns(@ptrCast(self.ptr), @bitCast(column), @bitCast(count), @ptrCast(parent.ptr));
    }

    /// ### DEPRECATED: Use `SuperInsertColumns` instead
    ///
    pub const QBaseInsertColumns = SuperInsertColumns;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn SuperInsertColumns(self: KDirSortFilterProxyModel, column: i32, count: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.KDirSortFilterProxyModel_SuperInsertColumns(@ptrCast(self.ptr), @bitCast(column), @bitCast(count), @ptrCast(parent.ptr));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, column: i32, count: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn OnInsertColumns(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.KDirSortFilterProxyModel_OnInsertColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn RemoveRows(self: KDirSortFilterProxyModel, row: i32, count: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.KDirSortFilterProxyModel_RemoveRows(@ptrCast(self.ptr), @bitCast(row), @bitCast(count), @ptrCast(parent.ptr));
    }

    /// ### DEPRECATED: Use `SuperRemoveRows` instead
    ///
    pub const QBaseRemoveRows = SuperRemoveRows;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn SuperRemoveRows(self: KDirSortFilterProxyModel, row: i32, count: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.KDirSortFilterProxyModel_SuperRemoveRows(@ptrCast(self.ptr), @bitCast(row), @bitCast(count), @ptrCast(parent.ptr));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, row: i32, count: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn OnRemoveRows(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.KDirSortFilterProxyModel_OnRemoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn RemoveColumns(self: KDirSortFilterProxyModel, column: i32, count: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.KDirSortFilterProxyModel_RemoveColumns(@ptrCast(self.ptr), @bitCast(column), @bitCast(count), @ptrCast(parent.ptr));
    }

    /// ### DEPRECATED: Use `SuperRemoveColumns` instead
    ///
    pub const QBaseRemoveColumns = SuperRemoveColumns;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn SuperRemoveColumns(self: KDirSortFilterProxyModel, column: i32, count: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.KDirSortFilterProxyModel_SuperRemoveColumns(@ptrCast(self.ptr), @bitCast(column), @bitCast(count), @ptrCast(parent.ptr));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, column: i32, count: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn OnRemoveColumns(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.KDirSortFilterProxyModel_OnRemoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#fetchMore)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn FetchMore(self: KDirSortFilterProxyModel, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.KDirSortFilterProxyModel_FetchMore(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// ### DEPRECATED: Use `SuperFetchMore` instead
    ///
    pub const QBaseFetchMore = SuperFetchMore;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#fetchMore)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn SuperFetchMore(self: KDirSortFilterProxyModel, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.KDirSortFilterProxyModel_SuperFetchMore(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#fetchMore)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, parent: QModelIndex) callconv(.c) void `
    ///
    pub fn OnFetchMore(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QModelIndex) callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnFetchMore(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#flags)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` index: QModelIndex `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.ItemFlag `
    ///
    pub fn Flags(self: KDirSortFilterProxyModel, index: anytype) i32 {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.KDirSortFilterProxyModel_Flags(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `SuperFlags` instead
    ///
    pub const QBaseFlags = SuperFlags;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#flags)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` index: QModelIndex `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.ItemFlag `
    ///
    pub fn SuperFlags(self: KDirSortFilterProxyModel, index: anytype) i32 {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.KDirSortFilterProxyModel_SuperFlags(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#flags)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, index: QModelIndex) callconv(.c) i32 `
    ///
    pub fn OnFlags(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QModelIndex) callconv(.c) i32) void {
        qtc.KDirSortFilterProxyModel_OnFlags(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#buddy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn Buddy(self: KDirSortFilterProxyModel, index: anytype) QModelIndex {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.KDirSortFilterProxyModel_Buddy(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperBuddy` instead
    ///
    pub const QBaseBuddy = SuperBuddy;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#buddy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperBuddy(self: KDirSortFilterProxyModel, index: anytype) QModelIndex {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.KDirSortFilterProxyModel_SuperBuddy(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#buddy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, index: QModelIndex) callconv(.c) QModelIndex `
    ///
    pub fn OnBuddy(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.KDirSortFilterProxyModel_OnBuddy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#match)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
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
    /// ` flags: flag of qnamespace_enums.MatchFlag `
    ///
    pub fn Match(self: KDirSortFilterProxyModel, allocator: std.mem.Allocator, start: anytype, role: i32, value: anytype, hits: i32, flags: i32) []QModelIndex {
        comptime _ = @TypeOf(start)._is_QModelIndex;
        comptime _ = @TypeOf(value)._is_QVariant;
        const _arr: qtc.libqt_list = qtc.KDirSortFilterProxyModel_Match(@ptrCast(self.ptr), @ptrCast(start.ptr), @bitCast(role), @ptrCast(value.ptr), @bitCast(hits), @bitCast(flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("kdirsortfilterproxymodel.Match: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperMatch` instead
    ///
    pub const QBaseMatch = SuperMatch;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#match)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
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
    /// ` flags: flag of qnamespace_enums.MatchFlag `
    ///
    pub fn SuperMatch(self: KDirSortFilterProxyModel, allocator: std.mem.Allocator, start: anytype, role: i32, value: anytype, hits: i32, flags: i32) []QModelIndex {
        comptime _ = @TypeOf(start)._is_QModelIndex;
        comptime _ = @TypeOf(value)._is_QVariant;
        const _arr: qtc.libqt_list = qtc.KDirSortFilterProxyModel_SuperMatch(@ptrCast(self.ptr), @ptrCast(start.ptr), @bitCast(role), @ptrCast(value.ptr), @bitCast(hits), @bitCast(flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("kdirsortfilterproxymodel.Match: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#match)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, start: QModelIndex, role: i32, value: QVariant, hits: i32, flags: flag of qnamespace_enums.MatchFlag) callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QModelIndex `
    ///
    pub fn OnMatch(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QModelIndex, i32, QVariant, i32, i32) callconv(.c) qtc.libqt_list) void {
        qtc.KDirSortFilterProxyModel_OnMatch(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#span)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn Span(self: KDirSortFilterProxyModel, index: anytype) QSize {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.KDirSortFilterProxyModel_Span(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSpan` instead
    ///
    pub const QBaseSpan = SuperSpan;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#span)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperSpan(self: KDirSortFilterProxyModel, index: anytype) QSize {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.KDirSortFilterProxyModel_SuperSpan(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#span)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, index: QModelIndex) callconv(.c) QSize `
    ///
    pub fn OnSpan(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QModelIndex) callconv(.c) QSize) void {
        qtc.KDirSortFilterProxyModel_OnSpan(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeTypes)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MimeTypes(self: KDirSortFilterProxyModel, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KDirSortFilterProxyModel_MimeTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kdirsortfilterproxymodel.MimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kdirsortfilterproxymodel.MimeTypes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperMimeTypes` instead
    ///
    pub const QBaseMimeTypes = SuperMimeTypes;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeTypes)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperMimeTypes(self: KDirSortFilterProxyModel, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KDirSortFilterProxyModel_SuperMimeTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kdirsortfilterproxymodel.MimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kdirsortfilterproxymodel.MimeTypes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeTypes)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8 `
    ///
    pub fn OnMimeTypes(self: KDirSortFilterProxyModel, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.KDirSortFilterProxyModel_OnMimeTypes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#supportedDropActions)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn SupportedDropActions(self: KDirSortFilterProxyModel) i32 {
        return qtc.KDirSortFilterProxyModel_SupportedDropActions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSupportedDropActions` instead
    ///
    pub const QBaseSupportedDropActions = SuperSupportedDropActions;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#supportedDropActions)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn SuperSupportedDropActions(self: KDirSortFilterProxyModel) i32 {
        return qtc.KDirSortFilterProxyModel_SuperSupportedDropActions(@ptrCast(self.ptr));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#supportedDropActions)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSupportedDropActions(self: KDirSortFilterProxyModel, callback: *const fn () callconv(.c) i32) void {
        qtc.KDirSortFilterProxyModel_OnSupportedDropActions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn Submit(self: KDirSortFilterProxyModel) bool {
        return qtc.KDirSortFilterProxyModel_Submit(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSubmit` instead
    ///
    pub const QBaseSubmit = SuperSubmit;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn SuperSubmit(self: KDirSortFilterProxyModel) bool {
        return qtc.KDirSortFilterProxyModel_SuperSubmit(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnSubmit(self: KDirSortFilterProxyModel, callback: *const fn () callconv(.c) bool) void {
        qtc.KDirSortFilterProxyModel_OnSubmit(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn Revert(self: KDirSortFilterProxyModel) void {
        qtc.KDirSortFilterProxyModel_Revert(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperRevert` instead
    ///
    pub const QBaseRevert = SuperRevert;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn SuperRevert(self: KDirSortFilterProxyModel) void {
        qtc.KDirSortFilterProxyModel_SuperRevert(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnRevert(self: KDirSortFilterProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnRevert(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn ItemData(self: KDirSortFilterProxyModel, allocator: std.mem.Allocator, index: anytype) ArrayMap_i32_QVariant {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        const _map: qtc.libqt_map = qtc.KDirSortFilterProxyModel_ItemData(@ptrCast(self.ptr), @ptrCast(index.ptr));
        var _ret: ArrayMap_i32_QVariant = .empty;
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
            _ret.put(allocator, _key, .{ .ptr = @ptrCast(_value) }) catch @panic("kdirsortfilterproxymodel.ItemData: Memory allocation failed");
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperItemData` instead
    ///
    pub const QBaseItemData = SuperItemData;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperItemData(self: KDirSortFilterProxyModel, allocator: std.mem.Allocator, index: anytype) ArrayMap_i32_QVariant {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        const _map: qtc.libqt_map = qtc.KDirSortFilterProxyModel_SuperItemData(@ptrCast(self.ptr), @ptrCast(index.ptr));
        var _ret: ArrayMap_i32_QVariant = .empty;
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
            _ret.put(allocator, _key, .{ .ptr = @ptrCast(_value) }) catch @panic("kdirsortfilterproxymodel.ItemData: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, index: QModelIndex) callconv(.c) qtc.libqt_map `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of ArrayMap_i32_QVariant `
    ///
    pub fn OnItemData(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QModelIndex) callconv(.c) qtc.libqt_map) void {
        qtc.KDirSortFilterProxyModel_OnItemData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` roles: ArrayMap_i32_QVariant `
    ///
    pub fn SetItemData(self: KDirSortFilterProxyModel, allocator: std.mem.Allocator, index: anytype, roles: ArrayMap_i32_QVariant) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        const roles_count = roles.count();
        const roles_keys = allocator.alloc(i32, roles_count) catch @panic("kdirsortfilterproxymodel.SetItemData: Memory allocation failed");
        defer allocator.free(roles_keys);
        const roles_values = allocator.alloc(QtC.QVariant, roles_count) catch @panic("kdirsortfilterproxymodel.SetItemData: Memory allocation failed");
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
        return qtc.KDirSortFilterProxyModel_SetItemData(@ptrCast(self.ptr), @ptrCast(index.ptr), roles_map);
    }

    /// ### DEPRECATED: Use `SuperSetItemData` instead
    ///
    pub const QBaseSetItemData = SuperSetItemData;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` roles: ArrayMap_i32_QVariant `
    ///
    pub fn SuperSetItemData(self: KDirSortFilterProxyModel, allocator: std.mem.Allocator, index: anytype, roles: ArrayMap_i32_QVariant) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        const roles_count = roles.count();
        const roles_keys = allocator.alloc(i32, roles_count) catch @panic("kdirsortfilterproxymodel.SetItemData: Memory allocation failed");
        defer allocator.free(roles_keys);
        const roles_values = allocator.alloc(QtC.QVariant, roles_count) catch @panic("kdirsortfilterproxymodel.SetItemData: Memory allocation failed");
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
        return qtc.KDirSortFilterProxyModel_SuperSetItemData(@ptrCast(self.ptr), @ptrCast(index.ptr), roles_map);
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, index: QModelIndex, roles: qtc.libqt_map (ArrayMap_i32_QVariant)) callconv(.c) bool `
    ///
    pub fn OnSetItemData(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QModelIndex, qtc.libqt_map) callconv(.c) bool) void {
        qtc.KDirSortFilterProxyModel_OnSetItemData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn ClearItemData(self: KDirSortFilterProxyModel, index: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.KDirSortFilterProxyModel_ClearItemData(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `SuperClearItemData` instead
    ///
    pub const QBaseClearItemData = SuperClearItemData;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperClearItemData(self: KDirSortFilterProxyModel, index: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.KDirSortFilterProxyModel_SuperClearItemData(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, index: QModelIndex) callconv(.c) bool `
    ///
    pub fn OnClearItemData(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QModelIndex) callconv(.c) bool) void {
        qtc.KDirSortFilterProxyModel_OnClearItemData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` data: QMimeData `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn CanDropMimeData(self: KDirSortFilterProxyModel, data: anytype, action: i32, row: i32, column: i32, parent: anytype) bool {
        comptime _ = @TypeOf(data)._is_QMimeData;
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.KDirSortFilterProxyModel_CanDropMimeData(@ptrCast(self.ptr), @ptrCast(data.ptr), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(parent.ptr));
    }

    /// ### DEPRECATED: Use `SuperCanDropMimeData` instead
    ///
    pub const QBaseCanDropMimeData = SuperCanDropMimeData;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` data: QMimeData `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn SuperCanDropMimeData(self: KDirSortFilterProxyModel, data: anytype, action: i32, row: i32, column: i32, parent: anytype) bool {
        comptime _ = @TypeOf(data)._is_QMimeData;
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.KDirSortFilterProxyModel_SuperCanDropMimeData(@ptrCast(self.ptr), @ptrCast(data.ptr), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(parent.ptr));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, data: QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn OnCanDropMimeData(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QMimeData, i32, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.KDirSortFilterProxyModel_OnCanDropMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn SupportedDragActions(self: KDirSortFilterProxyModel) i32 {
        return qtc.KDirSortFilterProxyModel_SupportedDragActions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSupportedDragActions` instead
    ///
    pub const QBaseSupportedDragActions = SuperSupportedDragActions;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn SuperSupportedDragActions(self: KDirSortFilterProxyModel) i32 {
        return qtc.KDirSortFilterProxyModel_SuperSupportedDragActions(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSupportedDragActions(self: KDirSortFilterProxyModel, callback: *const fn () callconv(.c) i32) void {
        qtc.KDirSortFilterProxyModel_OnSupportedDragActions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn RoleNames(self: KDirSortFilterProxyModel, allocator: std.mem.Allocator) Map_i32_u8 {
        const _map: qtc.libqt_map = qtc.KDirSortFilterProxyModel_RoleNames(@ptrCast(self.ptr));
        var _ret: Map_i32_u8 = .empty;
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
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("kdirsortfilterproxymodel.RoleNames: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.put(allocator, _key, _value_slice) catch @panic("kdirsortfilterproxymodel.RoleNames: Memory allocation failed");
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperRoleNames` instead
    ///
    pub const QBaseRoleNames = SuperRoleNames;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperRoleNames(self: KDirSortFilterProxyModel, allocator: std.mem.Allocator) Map_i32_u8 {
        const _map: qtc.libqt_map = qtc.KDirSortFilterProxyModel_SuperRoleNames(@ptrCast(self.ptr));
        var _ret: Map_i32_u8 = .empty;
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
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("kdirsortfilterproxymodel.RoleNames: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.put(allocator, _key, _value_slice) catch @panic("kdirsortfilterproxymodel.RoleNames: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_map `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of Map_i32_u8 `
    ///
    pub fn OnRoleNames(self: KDirSortFilterProxyModel, callback: *const fn () callconv(.c) qtc.libqt_map) void {
        qtc.KDirSortFilterProxyModel_OnRoleNames(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
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
    pub fn MoveRows(self: KDirSortFilterProxyModel, sourceParent: anytype, sourceRow: i32, count: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.KDirSortFilterProxyModel_MoveRows(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceRow), @bitCast(count), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
    }

    /// ### DEPRECATED: Use `SuperMoveRows` instead
    ///
    pub const QBaseMoveRows = SuperMoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
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
    pub fn SuperMoveRows(self: KDirSortFilterProxyModel, sourceParent: anytype, sourceRow: i32, count: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.KDirSortFilterProxyModel_SuperMoveRows(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceRow), @bitCast(count), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, sourceParent: QModelIndex, sourceRow: i32, count: i32, destinationParent: QModelIndex, destinationChild: i32) callconv(.c) bool `
    ///
    pub fn OnMoveRows(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) bool) void {
        qtc.KDirSortFilterProxyModel_OnMoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
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
    pub fn MoveColumns(self: KDirSortFilterProxyModel, sourceParent: anytype, sourceColumn: i32, count: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.KDirSortFilterProxyModel_MoveColumns(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceColumn), @bitCast(count), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
    }

    /// ### DEPRECATED: Use `SuperMoveColumns` instead
    ///
    pub const QBaseMoveColumns = SuperMoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
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
    pub fn SuperMoveColumns(self: KDirSortFilterProxyModel, sourceParent: anytype, sourceColumn: i32, count: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.KDirSortFilterProxyModel_SuperMoveColumns(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceColumn), @bitCast(count), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, sourceParent: QModelIndex, sourceColumn: i32, count: i32, destinationParent: QModelIndex, destinationChild: i32) callconv(.c) bool `
    ///
    pub fn OnMoveColumns(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) bool) void {
        qtc.KDirSortFilterProxyModel_OnMoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` roleDataSpan: QModelRoleDataSpan `
    ///
    pub fn MultiData(self: KDirSortFilterProxyModel, index: anytype, roleDataSpan: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(roleDataSpan)._is_QModelRoleDataSpan;
        qtc.KDirSortFilterProxyModel_MultiData(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(roleDataSpan.ptr));
    }

    /// ### DEPRECATED: Use `SuperMultiData` instead
    ///
    pub const QBaseMultiData = SuperMultiData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` roleDataSpan: QModelRoleDataSpan `
    ///
    pub fn SuperMultiData(self: KDirSortFilterProxyModel, index: anytype, roleDataSpan: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(roleDataSpan)._is_QModelRoleDataSpan;
        qtc.KDirSortFilterProxyModel_SuperMultiData(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(roleDataSpan.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, index: QModelIndex, roleDataSpan: QModelRoleDataSpan) callconv(.c) void `
    ///
    pub fn OnMultiData(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QModelIndex, QModelRoleDataSpan) callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnMultiData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn ResetInternalData(self: KDirSortFilterProxyModel) void {
        qtc.KDirSortFilterProxyModel_ResetInternalData(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperResetInternalData` instead
    ///
    pub const QBaseResetInternalData = SuperResetInternalData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn SuperResetInternalData(self: KDirSortFilterProxyModel) void {
        qtc.KDirSortFilterProxyModel_SuperResetInternalData(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnResetInternalData(self: KDirSortFilterProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnResetInternalData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KDirSortFilterProxyModel, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KDirSortFilterProxyModel_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KDirSortFilterProxyModel, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KDirSortFilterProxyModel_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QEvent) callconv(.c) bool) void {
        qtc.KDirSortFilterProxyModel_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KDirSortFilterProxyModel, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KDirSortFilterProxyModel_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KDirSortFilterProxyModel, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KDirSortFilterProxyModel_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QObject, QEvent) callconv(.c) bool) void {
        qtc.KDirSortFilterProxyModel_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KDirSortFilterProxyModel, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KDirSortFilterProxyModel_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KDirSortFilterProxyModel, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KDirSortFilterProxyModel_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QTimerEvent) callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KDirSortFilterProxyModel, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KDirSortFilterProxyModel_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KDirSortFilterProxyModel, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KDirSortFilterProxyModel_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QChildEvent) callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KDirSortFilterProxyModel, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KDirSortFilterProxyModel_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KDirSortFilterProxyModel, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KDirSortFilterProxyModel_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QEvent) callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KDirSortFilterProxyModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KDirSortFilterProxyModel_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KDirSortFilterProxyModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KDirSortFilterProxyModel_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QMetaMethod) callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KDirSortFilterProxyModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KDirSortFilterProxyModel_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KDirSortFilterProxyModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KDirSortFilterProxyModel_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QMetaMethod) callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn InvalidateFilter(self: KDirSortFilterProxyModel) void {
        qtc.KDirSortFilterProxyModel_InvalidateFilter(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperInvalidateFilter` instead
    ///
    pub const QBaseInvalidateFilter = SuperInvalidateFilter;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn SuperInvalidateFilter(self: KDirSortFilterProxyModel) void {
        qtc.KDirSortFilterProxyModel_SuperInvalidateFilter(@ptrCast(self.ptr));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnInvalidateFilter(self: KDirSortFilterProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnInvalidateFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateRowsFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn InvalidateRowsFilter(self: KDirSortFilterProxyModel) void {
        qtc.KDirSortFilterProxyModel_InvalidateRowsFilter(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperInvalidateRowsFilter` instead
    ///
    pub const QBaseInvalidateRowsFilter = SuperInvalidateRowsFilter;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateRowsFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn SuperInvalidateRowsFilter(self: KDirSortFilterProxyModel) void {
        qtc.KDirSortFilterProxyModel_SuperInvalidateRowsFilter(@ptrCast(self.ptr));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateRowsFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnInvalidateRowsFilter(self: KDirSortFilterProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnInvalidateRowsFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateColumnsFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn InvalidateColumnsFilter(self: KDirSortFilterProxyModel) void {
        qtc.KDirSortFilterProxyModel_InvalidateColumnsFilter(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperInvalidateColumnsFilter` instead
    ///
    pub const QBaseInvalidateColumnsFilter = SuperInvalidateColumnsFilter;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateColumnsFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn SuperInvalidateColumnsFilter(self: KDirSortFilterProxyModel) void {
        qtc.KDirSortFilterProxyModel_SuperInvalidateColumnsFilter(@ptrCast(self.ptr));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateColumnsFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnInvalidateColumnsFilter(self: KDirSortFilterProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnInvalidateColumnsFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` col: i32 `
    ///
    /// ` internalPtr: ?*anyopaque `
    ///
    pub fn CreateSourceIndex(self: KDirSortFilterProxyModel, row: i32, col: i32, internalPtr: ?*anyopaque) QModelIndex {
        return .{ .ptr = qtc.KDirSortFilterProxyModel_CreateSourceIndex(@ptrCast(self.ptr), @bitCast(row), @bitCast(col), @ptrCast(internalPtr)) };
    }

    /// ### DEPRECATED: Use `SuperCreateSourceIndex` instead
    ///
    pub const QBaseCreateSourceIndex = SuperCreateSourceIndex;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` col: i32 `
    ///
    /// ` internalPtr: ?*anyopaque `
    ///
    pub fn SuperCreateSourceIndex(self: KDirSortFilterProxyModel, row: i32, col: i32, internalPtr: ?*anyopaque) QModelIndex {
        return .{ .ptr = qtc.KDirSortFilterProxyModel_SuperCreateSourceIndex(@ptrCast(self.ptr), @bitCast(row), @bitCast(col), @ptrCast(internalPtr)) };
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, row: i32, col: i32, internalPtr: ?*anyopaque) callconv(.c) QModelIndex `
    ///
    pub fn OnCreateSourceIndex(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, i32, i32, ?*anyopaque) callconv(.c) QModelIndex) void {
        qtc.KDirSortFilterProxyModel_OnCreateSourceIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn CreateIndex(self: KDirSortFilterProxyModel, row: i32, column: i32) QModelIndex {
        return .{ .ptr = qtc.KDirSortFilterProxyModel_CreateIndex(@ptrCast(self.ptr), @bitCast(row), @bitCast(column)) };
    }

    /// ### DEPRECATED: Use `SuperCreateIndex` instead
    ///
    pub const QBaseCreateIndex = SuperCreateIndex;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn SuperCreateIndex(self: KDirSortFilterProxyModel, row: i32, column: i32) QModelIndex {
        return .{ .ptr = qtc.KDirSortFilterProxyModel_SuperCreateIndex(@ptrCast(self.ptr), @bitCast(row), @bitCast(column)) };
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, row: i32, column: i32) callconv(.c) QModelIndex `
    ///
    pub fn OnCreateIndex(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, i32, i32) callconv(.c) QModelIndex) void {
        qtc.KDirSortFilterProxyModel_OnCreateIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` indexes: []QModelIndex `
    ///
    /// ` stream: QDataStream `
    ///
    pub fn EncodeData(self: KDirSortFilterProxyModel, indexes: []QModelIndex, stream: anytype) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        comptime _ = @TypeOf(stream)._is_QDataStream;
        qtc.KDirSortFilterProxyModel_EncodeData(@ptrCast(self.ptr), indexes_list, @ptrCast(stream.ptr));
    }

    /// ### DEPRECATED: Use `SuperEncodeData` instead
    ///
    pub const QBaseEncodeData = SuperEncodeData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` indexes: []QModelIndex `
    ///
    /// ` stream: QDataStream `
    ///
    pub fn SuperEncodeData(self: KDirSortFilterProxyModel, indexes: []QModelIndex, stream: anytype) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        comptime _ = @TypeOf(stream)._is_QDataStream;
        qtc.KDirSortFilterProxyModel_SuperEncodeData(@ptrCast(self.ptr), indexes_list, @ptrCast(stream.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, indexes: qtc.libqt_list ([]QModelIndex), stream: QDataStream) callconv(.c) void `
    ///
    pub fn OnEncodeData(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, qtc.libqt_list, QDataStream) callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnEncodeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` stream: QDataStream `
    ///
    pub fn DecodeData(self: KDirSortFilterProxyModel, row: i32, column: i32, parent: anytype, stream: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        comptime _ = @TypeOf(stream)._is_QDataStream;
        return qtc.KDirSortFilterProxyModel_DecodeData(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(parent.ptr), @ptrCast(stream.ptr));
    }

    /// ### DEPRECATED: Use `SuperDecodeData` instead
    ///
    pub const QBaseDecodeData = SuperDecodeData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` stream: QDataStream `
    ///
    pub fn SuperDecodeData(self: KDirSortFilterProxyModel, row: i32, column: i32, parent: anytype, stream: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        comptime _ = @TypeOf(stream)._is_QDataStream;
        return qtc.KDirSortFilterProxyModel_SuperDecodeData(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(parent.ptr), @ptrCast(stream.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, row: i32, column: i32, parent: QModelIndex, stream: QDataStream) callconv(.c) bool `
    ///
    pub fn OnDecodeData(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, i32, i32, QModelIndex, QDataStream) callconv(.c) bool) void {
        qtc.KDirSortFilterProxyModel_OnDecodeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn BeginInsertRows(self: KDirSortFilterProxyModel, parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.KDirSortFilterProxyModel_BeginInsertRows(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `SuperBeginInsertRows` instead
    ///
    pub const QBaseBeginInsertRows = SuperBeginInsertRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn SuperBeginInsertRows(self: KDirSortFilterProxyModel, parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.KDirSortFilterProxyModel_SuperBeginInsertRows(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnBeginInsertRows(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnBeginInsertRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn EndInsertRows(self: KDirSortFilterProxyModel) void {
        qtc.KDirSortFilterProxyModel_EndInsertRows(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperEndInsertRows` instead
    ///
    pub const QBaseEndInsertRows = SuperEndInsertRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn SuperEndInsertRows(self: KDirSortFilterProxyModel) void {
        qtc.KDirSortFilterProxyModel_SuperEndInsertRows(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndInsertRows(self: KDirSortFilterProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnEndInsertRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn BeginRemoveRows(self: KDirSortFilterProxyModel, parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.KDirSortFilterProxyModel_BeginRemoveRows(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `SuperBeginRemoveRows` instead
    ///
    pub const QBaseBeginRemoveRows = SuperBeginRemoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn SuperBeginRemoveRows(self: KDirSortFilterProxyModel, parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.KDirSortFilterProxyModel_SuperBeginRemoveRows(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnBeginRemoveRows(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnBeginRemoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn EndRemoveRows(self: KDirSortFilterProxyModel) void {
        qtc.KDirSortFilterProxyModel_EndRemoveRows(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperEndRemoveRows` instead
    ///
    pub const QBaseEndRemoveRows = SuperEndRemoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn SuperEndRemoveRows(self: KDirSortFilterProxyModel) void {
        qtc.KDirSortFilterProxyModel_SuperEndRemoveRows(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndRemoveRows(self: KDirSortFilterProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnEndRemoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
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
    pub fn BeginMoveRows(self: KDirSortFilterProxyModel, sourceParent: anytype, sourceFirst: i32, sourceLast: i32, destinationParent: anytype, destinationRow: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.KDirSortFilterProxyModel_BeginMoveRows(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent.ptr), @bitCast(destinationRow));
    }

    /// ### DEPRECATED: Use `SuperBeginMoveRows` instead
    ///
    pub const QBaseBeginMoveRows = SuperBeginMoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
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
    pub fn SuperBeginMoveRows(self: KDirSortFilterProxyModel, sourceParent: anytype, sourceFirst: i32, sourceLast: i32, destinationParent: anytype, destinationRow: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.KDirSortFilterProxyModel_SuperBeginMoveRows(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent.ptr), @bitCast(destinationRow));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, sourceParent: QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QModelIndex, destinationRow: i32) callconv(.c) bool `
    ///
    pub fn OnBeginMoveRows(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) bool) void {
        qtc.KDirSortFilterProxyModel_OnBeginMoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn EndMoveRows(self: KDirSortFilterProxyModel) void {
        qtc.KDirSortFilterProxyModel_EndMoveRows(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperEndMoveRows` instead
    ///
    pub const QBaseEndMoveRows = SuperEndMoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn SuperEndMoveRows(self: KDirSortFilterProxyModel) void {
        qtc.KDirSortFilterProxyModel_SuperEndMoveRows(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndMoveRows(self: KDirSortFilterProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnEndMoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn BeginInsertColumns(self: KDirSortFilterProxyModel, parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.KDirSortFilterProxyModel_BeginInsertColumns(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `SuperBeginInsertColumns` instead
    ///
    pub const QBaseBeginInsertColumns = SuperBeginInsertColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn SuperBeginInsertColumns(self: KDirSortFilterProxyModel, parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.KDirSortFilterProxyModel_SuperBeginInsertColumns(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnBeginInsertColumns(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnBeginInsertColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn EndInsertColumns(self: KDirSortFilterProxyModel) void {
        qtc.KDirSortFilterProxyModel_EndInsertColumns(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperEndInsertColumns` instead
    ///
    pub const QBaseEndInsertColumns = SuperEndInsertColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn SuperEndInsertColumns(self: KDirSortFilterProxyModel) void {
        qtc.KDirSortFilterProxyModel_SuperEndInsertColumns(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndInsertColumns(self: KDirSortFilterProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnEndInsertColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn BeginRemoveColumns(self: KDirSortFilterProxyModel, parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.KDirSortFilterProxyModel_BeginRemoveColumns(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `SuperBeginRemoveColumns` instead
    ///
    pub const QBaseBeginRemoveColumns = SuperBeginRemoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn SuperBeginRemoveColumns(self: KDirSortFilterProxyModel, parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.KDirSortFilterProxyModel_SuperBeginRemoveColumns(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnBeginRemoveColumns(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnBeginRemoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn EndRemoveColumns(self: KDirSortFilterProxyModel) void {
        qtc.KDirSortFilterProxyModel_EndRemoveColumns(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperEndRemoveColumns` instead
    ///
    pub const QBaseEndRemoveColumns = SuperEndRemoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn SuperEndRemoveColumns(self: KDirSortFilterProxyModel) void {
        qtc.KDirSortFilterProxyModel_SuperEndRemoveColumns(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndRemoveColumns(self: KDirSortFilterProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnEndRemoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
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
    pub fn BeginMoveColumns(self: KDirSortFilterProxyModel, sourceParent: anytype, sourceFirst: i32, sourceLast: i32, destinationParent: anytype, destinationColumn: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.KDirSortFilterProxyModel_BeginMoveColumns(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent.ptr), @bitCast(destinationColumn));
    }

    /// ### DEPRECATED: Use `SuperBeginMoveColumns` instead
    ///
    pub const QBaseBeginMoveColumns = SuperBeginMoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
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
    pub fn SuperBeginMoveColumns(self: KDirSortFilterProxyModel, sourceParent: anytype, sourceFirst: i32, sourceLast: i32, destinationParent: anytype, destinationColumn: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.KDirSortFilterProxyModel_SuperBeginMoveColumns(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent.ptr), @bitCast(destinationColumn));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, sourceParent: QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QModelIndex, destinationColumn: i32) callconv(.c) bool `
    ///
    pub fn OnBeginMoveColumns(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) bool) void {
        qtc.KDirSortFilterProxyModel_OnBeginMoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn EndMoveColumns(self: KDirSortFilterProxyModel) void {
        qtc.KDirSortFilterProxyModel_EndMoveColumns(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperEndMoveColumns` instead
    ///
    pub const QBaseEndMoveColumns = SuperEndMoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn SuperEndMoveColumns(self: KDirSortFilterProxyModel) void {
        qtc.KDirSortFilterProxyModel_SuperEndMoveColumns(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndMoveColumns(self: KDirSortFilterProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnEndMoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn BeginResetModel(self: KDirSortFilterProxyModel) void {
        qtc.KDirSortFilterProxyModel_BeginResetModel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperBeginResetModel` instead
    ///
    pub const QBaseBeginResetModel = SuperBeginResetModel;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn SuperBeginResetModel(self: KDirSortFilterProxyModel) void {
        qtc.KDirSortFilterProxyModel_SuperBeginResetModel(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnBeginResetModel(self: KDirSortFilterProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnBeginResetModel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn EndResetModel(self: KDirSortFilterProxyModel) void {
        qtc.KDirSortFilterProxyModel_EndResetModel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperEndResetModel` instead
    ///
    pub const QBaseEndResetModel = SuperEndResetModel;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn SuperEndResetModel(self: KDirSortFilterProxyModel) void {
        qtc.KDirSortFilterProxyModel_SuperEndResetModel(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndResetModel(self: KDirSortFilterProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnEndResetModel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` from: QModelIndex `
    ///
    /// ` to: QModelIndex `
    ///
    pub fn ChangePersistentIndex(self: KDirSortFilterProxyModel, from: anytype, to: anytype) void {
        comptime _ = @TypeOf(from)._is_QModelIndex;
        comptime _ = @TypeOf(to)._is_QModelIndex;
        qtc.KDirSortFilterProxyModel_ChangePersistentIndex(@ptrCast(self.ptr), @ptrCast(from.ptr), @ptrCast(to.ptr));
    }

    /// ### DEPRECATED: Use `SuperChangePersistentIndex` instead
    ///
    pub const QBaseChangePersistentIndex = SuperChangePersistentIndex;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` from: QModelIndex `
    ///
    /// ` to: QModelIndex `
    ///
    pub fn SuperChangePersistentIndex(self: KDirSortFilterProxyModel, from: anytype, to: anytype) void {
        comptime _ = @TypeOf(from)._is_QModelIndex;
        comptime _ = @TypeOf(to)._is_QModelIndex;
        qtc.KDirSortFilterProxyModel_SuperChangePersistentIndex(@ptrCast(self.ptr), @ptrCast(from.ptr), @ptrCast(to.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, from: QModelIndex, to: QModelIndex) callconv(.c) void `
    ///
    pub fn OnChangePersistentIndex(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QModelIndex, QModelIndex) callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnChangePersistentIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` from: []QModelIndex `
    ///
    /// ` to: []QModelIndex `
    ///
    pub fn ChangePersistentIndexList(self: KDirSortFilterProxyModel, from: []QModelIndex, to: []QModelIndex) void {
        const from_list = qtc.libqt_list{
            .len = from.len,
            .data = @ptrCast(from.ptr),
        };
        const to_list = qtc.libqt_list{
            .len = to.len,
            .data = @ptrCast(to.ptr),
        };
        qtc.KDirSortFilterProxyModel_ChangePersistentIndexList(@ptrCast(self.ptr), from_list, to_list);
    }

    /// ### DEPRECATED: Use `SuperChangePersistentIndexList` instead
    ///
    pub const QBaseChangePersistentIndexList = SuperChangePersistentIndexList;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` from: []QModelIndex `
    ///
    /// ` to: []QModelIndex `
    ///
    pub fn SuperChangePersistentIndexList(self: KDirSortFilterProxyModel, from: []QModelIndex, to: []QModelIndex) void {
        const from_list = qtc.libqt_list{
            .len = from.len,
            .data = @ptrCast(from.ptr),
        };
        const to_list = qtc.libqt_list{
            .len = to.len,
            .data = @ptrCast(to.ptr),
        };
        qtc.KDirSortFilterProxyModel_SuperChangePersistentIndexList(@ptrCast(self.ptr), from_list, to_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, from: qtc.libqt_list ([]QModelIndex), to: qtc.libqt_list ([]QModelIndex)) callconv(.c) void `
    ///
    pub fn OnChangePersistentIndexList(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, qtc.libqt_list, qtc.libqt_list) callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnChangePersistentIndexList(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PersistentIndexList(self: KDirSortFilterProxyModel, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.KDirSortFilterProxyModel_PersistentIndexList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("kdirsortfilterproxymodel.PersistentIndexList: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperPersistentIndexList` instead
    ///
    pub const QBasePersistentIndexList = SuperPersistentIndexList;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperPersistentIndexList(self: KDirSortFilterProxyModel, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.KDirSortFilterProxyModel_SuperPersistentIndexList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("kdirsortfilterproxymodel.PersistentIndexList: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

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
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QModelIndex `
    ///
    pub fn OnPersistentIndexList(self: KDirSortFilterProxyModel, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.KDirSortFilterProxyModel_OnPersistentIndexList(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn Sender(self: KDirSortFilterProxyModel) QObject {
        return .{ .ptr = qtc.KDirSortFilterProxyModel_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn SuperSender(self: KDirSortFilterProxyModel) QObject {
        return .{ .ptr = qtc.KDirSortFilterProxyModel_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KDirSortFilterProxyModel, callback: *const fn () callconv(.c) QObject) void {
        qtc.KDirSortFilterProxyModel_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn SenderSignalIndex(self: KDirSortFilterProxyModel) i32 {
        return qtc.KDirSortFilterProxyModel_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn SuperSenderSignalIndex(self: KDirSortFilterProxyModel) i32 {
        return qtc.KDirSortFilterProxyModel_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KDirSortFilterProxyModel, callback: *const fn () callconv(.c) i32) void {
        qtc.KDirSortFilterProxyModel_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KDirSortFilterProxyModel, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KDirSortFilterProxyModel_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KDirSortFilterProxyModel, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KDirSortFilterProxyModel_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, [*:0]const u8) callconv(.c) i32) void {
        qtc.KDirSortFilterProxyModel_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KDirSortFilterProxyModel, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KDirSortFilterProxyModel_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KDirSortFilterProxyModel, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KDirSortFilterProxyModel_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QMetaMethod) callconv(.c) bool) void {
        qtc.KDirSortFilterProxyModel_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sourceModelChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel) callconv(.c) void `
    ///
    pub fn OnSourceModelChanged(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel) callconv(.c) void) void {
        qtc.QAbstractProxyModel_Connect_SourceModelChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnRowsAboutToBeInserted(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsAboutToBeInserted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnRowsInserted(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsInserted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnRowsAboutToBeRemoved(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsAboutToBeRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnRowsRemoved(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnColumnsAboutToBeInserted(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsAboutToBeInserted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnColumnsInserted(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsInserted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnColumnsAboutToBeRemoved(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsAboutToBeRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnColumnsRemoved(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel) callconv(.c) void `
    ///
    pub fn OnModelAboutToBeReset(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ModelAboutToBeReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel) callconv(.c) void `
    ///
    pub fn OnModelReset(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ModelReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, sourceParent: QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QModelIndex, destinationRow: i32) callconv(.c) void `
    ///
    pub fn OnRowsAboutToBeMoved(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsAboutToBeMoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, sourceParent: QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QModelIndex, destinationRow: i32) callconv(.c) void `
    ///
    pub fn OnRowsMoved(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsMoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, sourceParent: QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QModelIndex, destinationColumn: i32) callconv(.c) void `
    ///
    pub fn OnColumnsAboutToBeMoved(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsAboutToBeMoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, sourceParent: QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QModelIndex, destinationColumn: i32) callconv(.c) void `
    ///
    pub fn OnColumnsMoved(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsMoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KDirSortFilterProxyModel, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KDirSortFilterProxyModel, callback: *const fn (KDirSortFilterProxyModel, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kdirsortfilterproxymodel.html#dtor.KDirSortFilterProxyModel)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KDirSortFilterProxyModel `
    ///
    pub fn Delete(self: KDirSortFilterProxyModel) void {
        qtc.KDirSortFilterProxyModel_Delete(@ptrCast(self.ptr));
    }
};
