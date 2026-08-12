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
const qabstractitemmodel_enums = @import("../libqabstractitemmodel.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const ArrayMap_i32_QVariant = std.array_hash_map.Auto(i32, QVariant);
const Map_i32_u8 = std.AutoHashMapUnmanaged(i32, []u8);

/// ### [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html)
pub const KCategorizedSortFilterProxyModel = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KCategorizedSortFilterProxyModel,

    pub const _is_KCategorizedSortFilterProxyModel = {};
    pub const _is_QSortFilterProxyModel = {};
    pub const _is_QAbstractProxyModel = {};
    pub const _is_QAbstractItemModel = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KCategorizedSortFilterProxyModel object in C++ memory
    ///
    pub fn new() KCategorizedSortFilterProxyModel {
        return .{ .ptr = qtc.KCategorizedSortFilterProxyModel_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KCategorizedSortFilterProxyModel object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) KCategorizedSortFilterProxyModel {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KCategorizedSortFilterProxyModel_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn metaObject(self: KCategorizedSortFilterProxyModel) QMetaObject {
        return .{ .ptr = qtc.KCategorizedSortFilterProxyModel_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KCategorizedSortFilterProxyModel, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KCategorizedSortFilterProxyModel_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn superMetaObject(self: KCategorizedSortFilterProxyModel) QMetaObject {
        return .{ .ptr = qtc.KCategorizedSortFilterProxyModel_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KCategorizedSortFilterProxyModel, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KCategorizedSortFilterProxyModel_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KCategorizedSortFilterProxyModel_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KCategorizedSortFilterProxyModel, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KCategorizedSortFilterProxyModel_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: KCategorizedSortFilterProxyModel, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KCategorizedSortFilterProxyModel_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KCategorizedSortFilterProxyModel_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: KCategorizedSortFilterProxyModel, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KCategorizedSortFilterProxyModel_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCategorizedSortFilterProxyModel.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `sort` instead
    ///
    pub const Sort = sort;

    /// ### [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#sort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` column: i32 `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    pub fn sort(self: KCategorizedSortFilterProxyModel, column: i32, order: i32) void {
        qtc.KCategorizedSortFilterProxyModel_Sort(@ptrCast(self.ptr), @bitCast(column), @bitCast(order));
    }

    /// ### DEPRECATED: Use `onSort` instead
    ///
    pub const OnSort = onSort;

    /// ### [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#sort)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, column: i32, order: qnamespace_enums.SortOrder) callconv(.c) void `
    ///
    pub fn onSort(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, i32, i32) callconv(.c) void) void {
        qtc.KCategorizedSortFilterProxyModel_OnSort(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSort` instead
    ///
    pub const SuperSort = superSort;

    /// ### [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#sort)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` column: i32 `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    pub fn superSort(self: KCategorizedSortFilterProxyModel, column: i32, order: i32) void {
        qtc.KCategorizedSortFilterProxyModel_SuperSort(@ptrCast(self.ptr), @bitCast(column), @bitCast(order));
    }

    /// ### DEPRECATED: Use `isCategorizedModel` instead
    ///
    pub const IsCategorizedModel = isCategorizedModel;

    /// ### [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#isCategorizedModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn isCategorizedModel(self: KCategorizedSortFilterProxyModel) bool {
        return qtc.KCategorizedSortFilterProxyModel_IsCategorizedModel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCategorizedModel` instead
    ///
    pub const SetCategorizedModel = setCategorizedModel;

    /// ### [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#setCategorizedModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` categorizedModel: bool `
    ///
    pub fn setCategorizedModel(self: KCategorizedSortFilterProxyModel, categorizedModel: bool) void {
        qtc.KCategorizedSortFilterProxyModel_SetCategorizedModel(@ptrCast(self.ptr), categorizedModel);
    }

    /// ### DEPRECATED: Use `sortColumn` instead
    ///
    pub const SortColumn = sortColumn;

    /// ### [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#sortColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn sortColumn(self: KCategorizedSortFilterProxyModel) i32 {
        return qtc.KCategorizedSortFilterProxyModel_SortColumn(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `sortOrder` instead
    ///
    pub const SortOrder = sortOrder;

    /// ### [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#sortOrder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.SortOrder `
    ///
    pub fn sortOrder(self: KCategorizedSortFilterProxyModel) i32 {
        return qtc.KCategorizedSortFilterProxyModel_SortOrder(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSortCategoriesByNaturalComparison` instead
    ///
    pub const SetSortCategoriesByNaturalComparison = setSortCategoriesByNaturalComparison;

    /// ### [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#setSortCategoriesByNaturalComparison)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _sortCategoriesByNaturalComparison: bool `
    ///
    pub fn setSortCategoriesByNaturalComparison(self: KCategorizedSortFilterProxyModel, _sortCategoriesByNaturalComparison: bool) void {
        qtc.KCategorizedSortFilterProxyModel_SetSortCategoriesByNaturalComparison(@ptrCast(self.ptr), _sortCategoriesByNaturalComparison);
    }

    /// ### DEPRECATED: Use `sortCategoriesByNaturalComparison` instead
    ///
    pub const SortCategoriesByNaturalComparison = sortCategoriesByNaturalComparison;

    /// ### [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#sortCategoriesByNaturalComparison)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn sortCategoriesByNaturalComparison(self: KCategorizedSortFilterProxyModel) bool {
        return qtc.KCategorizedSortFilterProxyModel_SortCategoriesByNaturalComparison(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lessThan` instead
    ///
    pub const LessThan = lessThan;

    /// ### [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#lessThan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` left: QModelIndex `
    ///
    /// ` right: QModelIndex `
    ///
    pub fn lessThan(self: KCategorizedSortFilterProxyModel, left: anytype, right: anytype) bool {
        comptime _ = @TypeOf(left)._is_QModelIndex;
        comptime _ = @TypeOf(right)._is_QModelIndex;
        return qtc.KCategorizedSortFilterProxyModel_LessThan(@ptrCast(self.ptr), @ptrCast(left.ptr), @ptrCast(right.ptr));
    }

    /// ### DEPRECATED: Use `onLessThan` instead
    ///
    pub const OnLessThan = onLessThan;

    /// ### [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#lessThan)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, left: QModelIndex, right: QModelIndex) callconv(.c) bool `
    ///
    pub fn onLessThan(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QModelIndex, QModelIndex) callconv(.c) bool) void {
        qtc.KCategorizedSortFilterProxyModel_OnLessThan(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superLessThan` instead
    ///
    pub const SuperLessThan = superLessThan;

    /// ### [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#lessThan)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` left: QModelIndex `
    ///
    /// ` right: QModelIndex `
    ///
    pub fn superLessThan(self: KCategorizedSortFilterProxyModel, left: anytype, right: anytype) bool {
        comptime _ = @TypeOf(left)._is_QModelIndex;
        comptime _ = @TypeOf(right)._is_QModelIndex;
        return qtc.KCategorizedSortFilterProxyModel_SuperLessThan(@ptrCast(self.ptr), @ptrCast(left.ptr), @ptrCast(right.ptr));
    }

    /// ### DEPRECATED: Use `subSortLessThan` instead
    ///
    pub const SubSortLessThan = subSortLessThan;

    /// ### [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#subSortLessThan)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` left: QModelIndex `
    ///
    /// ` right: QModelIndex `
    ///
    pub fn subSortLessThan(self: KCategorizedSortFilterProxyModel, left: anytype, right: anytype) bool {
        comptime _ = @TypeOf(left)._is_QModelIndex;
        comptime _ = @TypeOf(right)._is_QModelIndex;
        return qtc.KCategorizedSortFilterProxyModel_SubSortLessThan(@ptrCast(self.ptr), @ptrCast(left.ptr), @ptrCast(right.ptr));
    }

    /// ### DEPRECATED: Use `onSubSortLessThan` instead
    ///
    pub const OnSubSortLessThan = onSubSortLessThan;

    /// ### [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#subSortLessThan)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, left: QModelIndex, right: QModelIndex) callconv(.c) bool `
    ///
    pub fn onSubSortLessThan(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QModelIndex, QModelIndex) callconv(.c) bool) void {
        qtc.KCategorizedSortFilterProxyModel_OnSubSortLessThan(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSubSortLessThan` instead
    ///
    pub const SuperSubSortLessThan = superSubSortLessThan;

    /// ### [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#subSortLessThan)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` left: QModelIndex `
    ///
    /// ` right: QModelIndex `
    ///
    pub fn superSubSortLessThan(self: KCategorizedSortFilterProxyModel, left: anytype, right: anytype) bool {
        comptime _ = @TypeOf(left)._is_QModelIndex;
        comptime _ = @TypeOf(right)._is_QModelIndex;
        return qtc.KCategorizedSortFilterProxyModel_SuperSubSortLessThan(@ptrCast(self.ptr), @ptrCast(left.ptr), @ptrCast(right.ptr));
    }

    /// ### DEPRECATED: Use `compareCategories` instead
    ///
    pub const CompareCategories = compareCategories;

    /// ### [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#compareCategories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` left: QModelIndex `
    ///
    /// ` right: QModelIndex `
    ///
    pub fn compareCategories(self: KCategorizedSortFilterProxyModel, left: anytype, right: anytype) i32 {
        comptime _ = @TypeOf(left)._is_QModelIndex;
        comptime _ = @TypeOf(right)._is_QModelIndex;
        return qtc.KCategorizedSortFilterProxyModel_CompareCategories(@ptrCast(self.ptr), @ptrCast(left.ptr), @ptrCast(right.ptr));
    }

    /// ### DEPRECATED: Use `onCompareCategories` instead
    ///
    pub const OnCompareCategories = onCompareCategories;

    /// ### [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#compareCategories)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, left: QModelIndex, right: QModelIndex) callconv(.c) i32 `
    ///
    pub fn onCompareCategories(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QModelIndex, QModelIndex) callconv(.c) i32) void {
        qtc.KCategorizedSortFilterProxyModel_OnCompareCategories(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCompareCategories` instead
    ///
    pub const SuperCompareCategories = superCompareCategories;

    /// ### [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#compareCategories)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` left: QModelIndex `
    ///
    /// ` right: QModelIndex `
    ///
    pub fn superCompareCategories(self: KCategorizedSortFilterProxyModel, left: anytype, right: anytype) i32 {
        comptime _ = @TypeOf(left)._is_QModelIndex;
        comptime _ = @TypeOf(right)._is_QModelIndex;
        return qtc.KCategorizedSortFilterProxyModel_SuperCompareCategories(@ptrCast(self.ptr), @ptrCast(left.ptr), @ptrCast(right.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCategorizedSortFilterProxyModel.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCategorizedSortFilterProxyModel.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `filterRegularExpression` instead
    ///
    pub const FilterRegularExpression = filterRegularExpression;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterRegularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn filterRegularExpression(self: KCategorizedSortFilterProxyModel) QRegularExpression {
        return .{ .ptr = qtc.QSortFilterProxyModel_FilterRegularExpression(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `filterKeyColumn` instead
    ///
    pub const FilterKeyColumn = filterKeyColumn;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterKeyColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn filterKeyColumn(self: KCategorizedSortFilterProxyModel) i32 {
        return qtc.QSortFilterProxyModel_FilterKeyColumn(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFilterKeyColumn` instead
    ///
    pub const SetFilterKeyColumn = setFilterKeyColumn;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterKeyColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` column: i32 `
    ///
    pub fn setFilterKeyColumn(self: KCategorizedSortFilterProxyModel, column: i32) void {
        qtc.QSortFilterProxyModel_SetFilterKeyColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `filterCaseSensitivity` instead
    ///
    pub const FilterCaseSensitivity = filterCaseSensitivity;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterCaseSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.CaseSensitivity `
    ///
    pub fn filterCaseSensitivity(self: KCategorizedSortFilterProxyModel) i32 {
        return qtc.QSortFilterProxyModel_FilterCaseSensitivity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFilterCaseSensitivity` instead
    ///
    pub const SetFilterCaseSensitivity = setFilterCaseSensitivity;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterCaseSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn setFilterCaseSensitivity(self: KCategorizedSortFilterProxyModel, cs: i32) void {
        qtc.QSortFilterProxyModel_SetFilterCaseSensitivity(@ptrCast(self.ptr), @bitCast(cs));
    }

    /// ### DEPRECATED: Use `sortCaseSensitivity` instead
    ///
    pub const SortCaseSensitivity = sortCaseSensitivity;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortCaseSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.CaseSensitivity `
    ///
    pub fn sortCaseSensitivity(self: KCategorizedSortFilterProxyModel) i32 {
        return qtc.QSortFilterProxyModel_SortCaseSensitivity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSortCaseSensitivity` instead
    ///
    pub const SetSortCaseSensitivity = setSortCaseSensitivity;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSortCaseSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn setSortCaseSensitivity(self: KCategorizedSortFilterProxyModel, cs: i32) void {
        qtc.QSortFilterProxyModel_SetSortCaseSensitivity(@ptrCast(self.ptr), @bitCast(cs));
    }

    /// ### DEPRECATED: Use `isSortLocaleAware` instead
    ///
    pub const IsSortLocaleAware = isSortLocaleAware;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#isSortLocaleAware)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn isSortLocaleAware(self: KCategorizedSortFilterProxyModel) bool {
        return qtc.QSortFilterProxyModel_IsSortLocaleAware(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSortLocaleAware` instead
    ///
    pub const SetSortLocaleAware = setSortLocaleAware;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSortLocaleAware)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` on: bool `
    ///
    pub fn setSortLocaleAware(self: KCategorizedSortFilterProxyModel, on: bool) void {
        qtc.QSortFilterProxyModel_SetSortLocaleAware(@ptrCast(self.ptr), on);
    }

    /// ### DEPRECATED: Use `dynamicSortFilter` instead
    ///
    pub const DynamicSortFilter = dynamicSortFilter;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dynamicSortFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn dynamicSortFilter(self: KCategorizedSortFilterProxyModel) bool {
        return qtc.QSortFilterProxyModel_DynamicSortFilter(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDynamicSortFilter` instead
    ///
    pub const SetDynamicSortFilter = setDynamicSortFilter;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setDynamicSortFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` enable: bool `
    ///
    pub fn setDynamicSortFilter(self: KCategorizedSortFilterProxyModel, enable: bool) void {
        qtc.QSortFilterProxyModel_SetDynamicSortFilter(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `sortRole` instead
    ///
    pub const SortRole = sortRole;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn sortRole(self: KCategorizedSortFilterProxyModel) i32 {
        return qtc.QSortFilterProxyModel_SortRole(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSortRole` instead
    ///
    pub const SetSortRole = setSortRole;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSortRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` role: i32 `
    ///
    pub fn setSortRole(self: KCategorizedSortFilterProxyModel, role: i32) void {
        qtc.QSortFilterProxyModel_SetSortRole(@ptrCast(self.ptr), @bitCast(role));
    }

    /// ### DEPRECATED: Use `filterRole` instead
    ///
    pub const FilterRole = filterRole;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn filterRole(self: KCategorizedSortFilterProxyModel) i32 {
        return qtc.QSortFilterProxyModel_FilterRole(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFilterRole` instead
    ///
    pub const SetFilterRole = setFilterRole;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` role: i32 `
    ///
    pub fn setFilterRole(self: KCategorizedSortFilterProxyModel, role: i32) void {
        qtc.QSortFilterProxyModel_SetFilterRole(@ptrCast(self.ptr), @bitCast(role));
    }

    /// ### DEPRECATED: Use `isRecursiveFilteringEnabled` instead
    ///
    pub const IsRecursiveFilteringEnabled = isRecursiveFilteringEnabled;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#isRecursiveFilteringEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn isRecursiveFilteringEnabled(self: KCategorizedSortFilterProxyModel) bool {
        return qtc.QSortFilterProxyModel_IsRecursiveFilteringEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRecursiveFilteringEnabled` instead
    ///
    pub const SetRecursiveFilteringEnabled = setRecursiveFilteringEnabled;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setRecursiveFilteringEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` recursive: bool `
    ///
    pub fn setRecursiveFilteringEnabled(self: KCategorizedSortFilterProxyModel, recursive: bool) void {
        qtc.QSortFilterProxyModel_SetRecursiveFilteringEnabled(@ptrCast(self.ptr), recursive);
    }

    /// ### DEPRECATED: Use `autoAcceptChildRows` instead
    ///
    pub const AutoAcceptChildRows = autoAcceptChildRows;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#autoAcceptChildRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn autoAcceptChildRows(self: KCategorizedSortFilterProxyModel) bool {
        return qtc.QSortFilterProxyModel_AutoAcceptChildRows(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoAcceptChildRows` instead
    ///
    pub const SetAutoAcceptChildRows = setAutoAcceptChildRows;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setAutoAcceptChildRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` accept: bool `
    ///
    pub fn setAutoAcceptChildRows(self: KCategorizedSortFilterProxyModel, accept: bool) void {
        qtc.QSortFilterProxyModel_SetAutoAcceptChildRows(@ptrCast(self.ptr), accept);
    }

    /// ### DEPRECATED: Use `setFilterRegularExpression` instead
    ///
    pub const SetFilterRegularExpression = setFilterRegularExpression;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterRegularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` pattern: []const u8 `
    ///
    pub fn setFilterRegularExpression(self: KCategorizedSortFilterProxyModel, pattern: []const u8) void {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        qtc.QSortFilterProxyModel_SetFilterRegularExpression(@ptrCast(self.ptr), pattern_str);
    }

    /// ### DEPRECATED: Use `setFilterRegularExpression2` instead
    ///
    pub const SetFilterRegularExpression2 = setFilterRegularExpression2;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterRegularExpression)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` regularExpression: QRegularExpression `
    ///
    pub fn setFilterRegularExpression2(self: KCategorizedSortFilterProxyModel, regularExpression: anytype) void {
        comptime _ = @TypeOf(regularExpression)._is_QRegularExpression;
        qtc.QSortFilterProxyModel_SetFilterRegularExpression2(@ptrCast(self.ptr), @ptrCast(regularExpression.ptr));
    }

    /// ### DEPRECATED: Use `setFilterWildcard` instead
    ///
    pub const SetFilterWildcard = setFilterWildcard;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterWildcard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` pattern: []const u8 `
    ///
    pub fn setFilterWildcard(self: KCategorizedSortFilterProxyModel, pattern: []const u8) void {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        qtc.QSortFilterProxyModel_SetFilterWildcard(@ptrCast(self.ptr), pattern_str);
    }

    /// ### DEPRECATED: Use `setFilterFixedString` instead
    ///
    pub const SetFilterFixedString = setFilterFixedString;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterFixedString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` pattern: []const u8 `
    ///
    pub fn setFilterFixedString(self: KCategorizedSortFilterProxyModel, pattern: []const u8) void {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        qtc.QSortFilterProxyModel_SetFilterFixedString(@ptrCast(self.ptr), pattern_str);
    }

    /// ### DEPRECATED: Use `invalidate` instead
    ///
    pub const Invalidate = invalidate;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn invalidate(self: KCategorizedSortFilterProxyModel) void {
        qtc.QSortFilterProxyModel_Invalidate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dynamicSortFilterChanged` instead
    ///
    pub const DynamicSortFilterChanged = dynamicSortFilterChanged;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dynamicSortFilterChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _dynamicSortFilter: bool `
    ///
    pub fn dynamicSortFilterChanged(self: KCategorizedSortFilterProxyModel, _dynamicSortFilter: bool) void {
        qtc.QSortFilterProxyModel_DynamicSortFilterChanged(@ptrCast(self.ptr), _dynamicSortFilter);
    }

    /// ### DEPRECATED: Use `onDynamicSortFilterChanged` instead
    ///
    pub const OnDynamicSortFilterChanged = onDynamicSortFilterChanged;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dynamicSortFilterChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, dynamicSortFilter: bool) callconv(.c) void `
    ///
    pub fn onDynamicSortFilterChanged(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, bool) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_DynamicSortFilterChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `filterCaseSensitivityChanged` instead
    ///
    pub const FilterCaseSensitivityChanged = filterCaseSensitivityChanged;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterCaseSensitivityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _filterCaseSensitivity: qnamespace_enums.CaseSensitivity `
    ///
    pub fn filterCaseSensitivityChanged(self: KCategorizedSortFilterProxyModel, _filterCaseSensitivity: i32) void {
        qtc.QSortFilterProxyModel_FilterCaseSensitivityChanged(@ptrCast(self.ptr), @bitCast(_filterCaseSensitivity));
    }

    /// ### DEPRECATED: Use `onFilterCaseSensitivityChanged` instead
    ///
    pub const OnFilterCaseSensitivityChanged = onFilterCaseSensitivityChanged;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterCaseSensitivityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, filterCaseSensitivity: qnamespace_enums.CaseSensitivity) callconv(.c) void `
    ///
    pub fn onFilterCaseSensitivityChanged(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, i32) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_FilterCaseSensitivityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sortCaseSensitivityChanged` instead
    ///
    pub const SortCaseSensitivityChanged = sortCaseSensitivityChanged;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortCaseSensitivityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _sortCaseSensitivity: qnamespace_enums.CaseSensitivity `
    ///
    pub fn sortCaseSensitivityChanged(self: KCategorizedSortFilterProxyModel, _sortCaseSensitivity: i32) void {
        qtc.QSortFilterProxyModel_SortCaseSensitivityChanged(@ptrCast(self.ptr), @bitCast(_sortCaseSensitivity));
    }

    /// ### DEPRECATED: Use `onSortCaseSensitivityChanged` instead
    ///
    pub const OnSortCaseSensitivityChanged = onSortCaseSensitivityChanged;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortCaseSensitivityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, sortCaseSensitivity: qnamespace_enums.CaseSensitivity) callconv(.c) void `
    ///
    pub fn onSortCaseSensitivityChanged(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, i32) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_SortCaseSensitivityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sortLocaleAwareChanged` instead
    ///
    pub const SortLocaleAwareChanged = sortLocaleAwareChanged;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortLocaleAwareChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` sortLocaleAware: bool `
    ///
    pub fn sortLocaleAwareChanged(self: KCategorizedSortFilterProxyModel, sortLocaleAware: bool) void {
        qtc.QSortFilterProxyModel_SortLocaleAwareChanged(@ptrCast(self.ptr), sortLocaleAware);
    }

    /// ### DEPRECATED: Use `onSortLocaleAwareChanged` instead
    ///
    pub const OnSortLocaleAwareChanged = onSortLocaleAwareChanged;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortLocaleAwareChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, sortLocaleAware: bool) callconv(.c) void `
    ///
    pub fn onSortLocaleAwareChanged(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, bool) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_SortLocaleAwareChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sortRoleChanged` instead
    ///
    pub const SortRoleChanged = sortRoleChanged;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortRoleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _sortRole: i32 `
    ///
    pub fn sortRoleChanged(self: KCategorizedSortFilterProxyModel, _sortRole: i32) void {
        qtc.QSortFilterProxyModel_SortRoleChanged(@ptrCast(self.ptr), @bitCast(_sortRole));
    }

    /// ### DEPRECATED: Use `onSortRoleChanged` instead
    ///
    pub const OnSortRoleChanged = onSortRoleChanged;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortRoleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, sortRole: i32) callconv(.c) void `
    ///
    pub fn onSortRoleChanged(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, i32) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_SortRoleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `filterRoleChanged` instead
    ///
    pub const FilterRoleChanged = filterRoleChanged;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterRoleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _filterRole: i32 `
    ///
    pub fn filterRoleChanged(self: KCategorizedSortFilterProxyModel, _filterRole: i32) void {
        qtc.QSortFilterProxyModel_FilterRoleChanged(@ptrCast(self.ptr), @bitCast(_filterRole));
    }

    /// ### DEPRECATED: Use `onFilterRoleChanged` instead
    ///
    pub const OnFilterRoleChanged = onFilterRoleChanged;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterRoleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, filterRole: i32) callconv(.c) void `
    ///
    pub fn onFilterRoleChanged(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, i32) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_FilterRoleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `recursiveFilteringEnabledChanged` instead
    ///
    pub const RecursiveFilteringEnabledChanged = recursiveFilteringEnabledChanged;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#recursiveFilteringEnabledChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` recursiveFilteringEnabled: bool `
    ///
    pub fn recursiveFilteringEnabledChanged(self: KCategorizedSortFilterProxyModel, recursiveFilteringEnabled: bool) void {
        qtc.QSortFilterProxyModel_RecursiveFilteringEnabledChanged(@ptrCast(self.ptr), recursiveFilteringEnabled);
    }

    /// ### DEPRECATED: Use `onRecursiveFilteringEnabledChanged` instead
    ///
    pub const OnRecursiveFilteringEnabledChanged = onRecursiveFilteringEnabledChanged;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#recursiveFilteringEnabledChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, recursiveFilteringEnabled: bool) callconv(.c) void `
    ///
    pub fn onRecursiveFilteringEnabledChanged(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, bool) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_RecursiveFilteringEnabledChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `autoAcceptChildRowsChanged` instead
    ///
    pub const AutoAcceptChildRowsChanged = autoAcceptChildRowsChanged;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#autoAcceptChildRowsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _autoAcceptChildRows: bool `
    ///
    pub fn autoAcceptChildRowsChanged(self: KCategorizedSortFilterProxyModel, _autoAcceptChildRows: bool) void {
        qtc.QSortFilterProxyModel_AutoAcceptChildRowsChanged(@ptrCast(self.ptr), _autoAcceptChildRows);
    }

    /// ### DEPRECATED: Use `onAutoAcceptChildRowsChanged` instead
    ///
    pub const OnAutoAcceptChildRowsChanged = onAutoAcceptChildRowsChanged;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#autoAcceptChildRowsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, autoAcceptChildRows: bool) callconv(.c) void `
    ///
    pub fn onAutoAcceptChildRowsChanged(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, bool) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_AutoAcceptChildRowsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn sourceModel(self: KCategorizedSortFilterProxyModel) QAbstractItemModel {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn hasIndex(self: KCategorizedSortFilterProxyModel, row: i32, column: i32) bool {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    pub fn insertRow(self: KCategorizedSortFilterProxyModel, row: i32) bool {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` column: i32 `
    ///
    pub fn insertColumn(self: KCategorizedSortFilterProxyModel, column: i32) bool {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    pub fn removeRow(self: KCategorizedSortFilterProxyModel, row: i32) bool {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` column: i32 `
    ///
    pub fn removeColumn(self: KCategorizedSortFilterProxyModel, column: i32) bool {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceRow: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn moveRow(self: KCategorizedSortFilterProxyModel, sourceParent: anytype, sourceRow: i32, destinationParent: anytype, destinationChild: i32) bool {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceColumn: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn moveColumn(self: KCategorizedSortFilterProxyModel, sourceParent: anytype, sourceColumn: i32, destinationParent: anytype, destinationChild: i32) bool {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn checkIndex(self: KCategorizedSortFilterProxyModel, _index: anytype) bool {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` topLeft: QModelIndex `
    ///
    /// ` bottomRight: QModelIndex `
    ///
    pub fn dataChanged(self: KCategorizedSortFilterProxyModel, topLeft: anytype, bottomRight: anytype) void {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, topLeft: QModelIndex, bottomRight: QModelIndex) callconv(.c) void `
    ///
    pub fn onDataChanged(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QModelIndex, QModelIndex) callconv(.c) void) void {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn headerDataChanged(self: KCategorizedSortFilterProxyModel, orientation: i32, first: i32, last: i32) void {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, orientation: qnamespace_enums.Orientation, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onHeaderDataChanged(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, i32, i32, i32) callconv(.c) void) void {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn layoutChanged(self: KCategorizedSortFilterProxyModel) void {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel) callconv(.c) void `
    ///
    pub fn onLayoutChanged(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel) callconv(.c) void) void {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn layoutAboutToBeChanged(self: KCategorizedSortFilterProxyModel) void {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel) callconv(.c) void `
    ///
    pub fn onLayoutAboutToBeChanged(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel) callconv(.c) void) void {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn hasIndex3(self: KCategorizedSortFilterProxyModel, row: i32, column: i32, _parent: anytype) bool {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn insertRow2(self: KCategorizedSortFilterProxyModel, row: i32, _parent: anytype) bool {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn insertColumn2(self: KCategorizedSortFilterProxyModel, column: i32, _parent: anytype) bool {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn removeRow2(self: KCategorizedSortFilterProxyModel, row: i32, _parent: anytype) bool {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn removeColumn2(self: KCategorizedSortFilterProxyModel, column: i32, _parent: anytype) bool {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` options: flag of qabstractitemmodel_enums.CheckIndexOption `
    ///
    pub fn checkIndex2(self: KCategorizedSortFilterProxyModel, _index: anytype, options: i32) bool {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` topLeft: QModelIndex `
    ///
    /// ` bottomRight: QModelIndex `
    ///
    /// ` roles: []i32 `
    ///
    pub fn dataChanged3(self: KCategorizedSortFilterProxyModel, topLeft: anytype, bottomRight: anytype, roles: []i32) void {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, topLeft: QModelIndex, bottomRight: QModelIndex, roles: qtc.libqt_list ([]i32)) callconv(.c) void `
    ///
    pub fn onDataChanged3(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QModelIndex, QModelIndex, qtc.libqt_list) callconv(.c) void) void {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` parents: []QPersistentModelIndex `
    ///
    pub fn layoutChanged1(self: KCategorizedSortFilterProxyModel, parents: []QPersistentModelIndex) void {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, parents: qtc.libqt_list ([]QPersistentModelIndex)) callconv(.c) void `
    ///
    pub fn onLayoutChanged1(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, qtc.libqt_list) callconv(.c) void) void {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` parents: []QPersistentModelIndex `
    ///
    /// ` hint: qabstractitemmodel_enums.LayoutChangeHint `
    ///
    pub fn layoutChanged2(self: KCategorizedSortFilterProxyModel, parents: []QPersistentModelIndex, hint: i32) void {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, parents: qtc.libqt_list ([]QPersistentModelIndex), hint: qabstractitemmodel_enums.LayoutChangeHint) callconv(.c) void `
    ///
    pub fn onLayoutChanged2(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, qtc.libqt_list, i32) callconv(.c) void) void {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` parents: []QPersistentModelIndex `
    ///
    pub fn layoutAboutToBeChanged1(self: KCategorizedSortFilterProxyModel, parents: []QPersistentModelIndex) void {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, parents: qtc.libqt_list ([]QPersistentModelIndex)) callconv(.c) void `
    ///
    pub fn onLayoutAboutToBeChanged1(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, qtc.libqt_list) callconv(.c) void) void {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` parents: []QPersistentModelIndex `
    ///
    /// ` hint: qabstractitemmodel_enums.LayoutChangeHint `
    ///
    pub fn layoutAboutToBeChanged2(self: KCategorizedSortFilterProxyModel, parents: []QPersistentModelIndex, hint: i32) void {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, parents: qtc.libqt_list ([]QPersistentModelIndex), hint: qabstractitemmodel_enums.LayoutChangeHint) callconv(.c) void `
    ///
    pub fn onLayoutAboutToBeChanged2(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, qtc.libqt_list, i32) callconv(.c) void) void {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KCategorizedSortFilterProxyModel, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KCategorizedSortFilterProxyModel.objectName: Memory allocation failed");
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KCategorizedSortFilterProxyModel, name: []const u8) void {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn isWidgetType(self: KCategorizedSortFilterProxyModel) bool {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn isWindowType(self: KCategorizedSortFilterProxyModel) bool {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn isQuickItemType(self: KCategorizedSortFilterProxyModel) bool {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn signalsBlocked(self: KCategorizedSortFilterProxyModel) bool {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KCategorizedSortFilterProxyModel, b: bool) bool {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn thread(self: KCategorizedSortFilterProxyModel) QThread {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KCategorizedSortFilterProxyModel, _thread: anytype) bool {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KCategorizedSortFilterProxyModel, interval: i32) i32 {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KCategorizedSortFilterProxyModel, time: i64) i32 {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KCategorizedSortFilterProxyModel, id: i32) void {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KCategorizedSortFilterProxyModel, id: i32) void {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KCategorizedSortFilterProxyModel, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KCategorizedSortFilterProxyModel.children: Memory allocation failed");
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KCategorizedSortFilterProxyModel, _parent: anytype) void {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KCategorizedSortFilterProxyModel, filterObj: anytype) void {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KCategorizedSortFilterProxyModel, obj: anytype) void {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KCategorizedSortFilterProxyModel, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn disconnect3(self: KCategorizedSortFilterProxyModel) bool {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KCategorizedSortFilterProxyModel, receiver: anytype) bool {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn dumpObjectTree(self: KCategorizedSortFilterProxyModel) void {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn dumpObjectInfo(self: KCategorizedSortFilterProxyModel) void {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KCategorizedSortFilterProxyModel, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KCategorizedSortFilterProxyModel, name: [:0]const u8) QVariant {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KCategorizedSortFilterProxyModel, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KCategorizedSortFilterProxyModel.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KCategorizedSortFilterProxyModel.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn bindingStorage(self: KCategorizedSortFilterProxyModel) QBindingStorage {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn bindingStorage2(self: KCategorizedSortFilterProxyModel) QBindingStorage {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn destroyed(self: KCategorizedSortFilterProxyModel) void {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel) callconv(.c) void) void {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KCategorizedSortFilterProxyModel, classname: [:0]const u8) bool {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn deleteLater(self: KCategorizedSortFilterProxyModel) void {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KCategorizedSortFilterProxyModel, interval: i32, timerType: i32) i32 {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KCategorizedSortFilterProxyModel, time: i64, timerType: i32) i32 {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KCategorizedSortFilterProxyModel, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KCategorizedSortFilterProxyModel, signal: [:0]const u8) bool {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KCategorizedSortFilterProxyModel, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KCategorizedSortFilterProxyModel, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KCategorizedSortFilterProxyModel, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KCategorizedSortFilterProxyModel, param1: anytype) void {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setSourceModel` instead
    ///
    pub const SetSourceModel = setSourceModel;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSourceModel)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _sourceModel: QAbstractItemModel `
    ///
    pub fn setSourceModel(self: KCategorizedSortFilterProxyModel, _sourceModel: anytype) void {
        comptime _ = @TypeOf(_sourceModel)._is_QAbstractItemModel;
        qtc.KCategorizedSortFilterProxyModel_SetSourceModel(@ptrCast(self.ptr), @ptrCast(_sourceModel.ptr));
    }

    /// ### DEPRECATED: Use `superSetSourceModel` instead
    ///
    pub const SuperSetSourceModel = superSetSourceModel;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSourceModel)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _sourceModel: QAbstractItemModel `
    ///
    pub fn superSetSourceModel(self: KCategorizedSortFilterProxyModel, _sourceModel: anytype) void {
        comptime _ = @TypeOf(_sourceModel)._is_QAbstractItemModel;
        qtc.KCategorizedSortFilterProxyModel_SuperSetSourceModel(@ptrCast(self.ptr), @ptrCast(_sourceModel.ptr));
    }

    /// ### DEPRECATED: Use `onSetSourceModel` instead
    ///
    pub const OnSetSourceModel = onSetSourceModel;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSourceModel)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, sourceModel: QAbstractItemModel) callconv(.c) void `
    ///
    pub fn onSetSourceModel(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QAbstractItemModel) callconv(.c) void) void {
        qtc.KCategorizedSortFilterProxyModel_OnSetSourceModel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mapToSource` instead
    ///
    pub const MapToSource = mapToSource;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapToSource)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` proxyIndex: QModelIndex `
    ///
    pub fn mapToSource(self: KCategorizedSortFilterProxyModel, proxyIndex: anytype) QModelIndex {
        comptime _ = @TypeOf(proxyIndex)._is_QModelIndex;
        return .{ .ptr = qtc.KCategorizedSortFilterProxyModel_MapToSource(@ptrCast(self.ptr), @ptrCast(proxyIndex.ptr)) };
    }

    /// ### DEPRECATED: Use `superMapToSource` instead
    ///
    pub const SuperMapToSource = superMapToSource;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapToSource)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` proxyIndex: QModelIndex `
    ///
    pub fn superMapToSource(self: KCategorizedSortFilterProxyModel, proxyIndex: anytype) QModelIndex {
        comptime _ = @TypeOf(proxyIndex)._is_QModelIndex;
        return .{ .ptr = qtc.KCategorizedSortFilterProxyModel_SuperMapToSource(@ptrCast(self.ptr), @ptrCast(proxyIndex.ptr)) };
    }

    /// ### DEPRECATED: Use `onMapToSource` instead
    ///
    pub const OnMapToSource = onMapToSource;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapToSource)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, proxyIndex: QModelIndex) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMapToSource(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.KCategorizedSortFilterProxyModel_OnMapToSource(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mapFromSource` instead
    ///
    pub const MapFromSource = mapFromSource;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapFromSource)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` sourceIndex: QModelIndex `
    ///
    pub fn mapFromSource(self: KCategorizedSortFilterProxyModel, sourceIndex: anytype) QModelIndex {
        comptime _ = @TypeOf(sourceIndex)._is_QModelIndex;
        return .{ .ptr = qtc.KCategorizedSortFilterProxyModel_MapFromSource(@ptrCast(self.ptr), @ptrCast(sourceIndex.ptr)) };
    }

    /// ### DEPRECATED: Use `superMapFromSource` instead
    ///
    pub const SuperMapFromSource = superMapFromSource;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapFromSource)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` sourceIndex: QModelIndex `
    ///
    pub fn superMapFromSource(self: KCategorizedSortFilterProxyModel, sourceIndex: anytype) QModelIndex {
        comptime _ = @TypeOf(sourceIndex)._is_QModelIndex;
        return .{ .ptr = qtc.KCategorizedSortFilterProxyModel_SuperMapFromSource(@ptrCast(self.ptr), @ptrCast(sourceIndex.ptr)) };
    }

    /// ### DEPRECATED: Use `onMapFromSource` instead
    ///
    pub const OnMapFromSource = onMapFromSource;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapFromSource)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, sourceIndex: QModelIndex) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMapFromSource(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.KCategorizedSortFilterProxyModel_OnMapFromSource(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mapSelectionToSource` instead
    ///
    pub const MapSelectionToSource = mapSelectionToSource;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionToSource)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` proxySelection: QItemSelection `
    ///
    pub fn mapSelectionToSource(self: KCategorizedSortFilterProxyModel, proxySelection: anytype) QItemSelection {
        comptime _ = @TypeOf(proxySelection)._is_QItemSelection;
        return .{ .ptr = qtc.KCategorizedSortFilterProxyModel_MapSelectionToSource(@ptrCast(self.ptr), @ptrCast(proxySelection.ptr)) };
    }

    /// ### DEPRECATED: Use `superMapSelectionToSource` instead
    ///
    pub const SuperMapSelectionToSource = superMapSelectionToSource;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionToSource)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` proxySelection: QItemSelection `
    ///
    pub fn superMapSelectionToSource(self: KCategorizedSortFilterProxyModel, proxySelection: anytype) QItemSelection {
        comptime _ = @TypeOf(proxySelection)._is_QItemSelection;
        return .{ .ptr = qtc.KCategorizedSortFilterProxyModel_SuperMapSelectionToSource(@ptrCast(self.ptr), @ptrCast(proxySelection.ptr)) };
    }

    /// ### DEPRECATED: Use `onMapSelectionToSource` instead
    ///
    pub const OnMapSelectionToSource = onMapSelectionToSource;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionToSource)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, proxySelection: QItemSelection) callconv(.c) QItemSelection `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMapSelectionToSource(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QItemSelection) callconv(.c) QItemSelection) void {
        qtc.KCategorizedSortFilterProxyModel_OnMapSelectionToSource(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mapSelectionFromSource` instead
    ///
    pub const MapSelectionFromSource = mapSelectionFromSource;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionFromSource)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` sourceSelection: QItemSelection `
    ///
    pub fn mapSelectionFromSource(self: KCategorizedSortFilterProxyModel, sourceSelection: anytype) QItemSelection {
        comptime _ = @TypeOf(sourceSelection)._is_QItemSelection;
        return .{ .ptr = qtc.KCategorizedSortFilterProxyModel_MapSelectionFromSource(@ptrCast(self.ptr), @ptrCast(sourceSelection.ptr)) };
    }

    /// ### DEPRECATED: Use `superMapSelectionFromSource` instead
    ///
    pub const SuperMapSelectionFromSource = superMapSelectionFromSource;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionFromSource)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` sourceSelection: QItemSelection `
    ///
    pub fn superMapSelectionFromSource(self: KCategorizedSortFilterProxyModel, sourceSelection: anytype) QItemSelection {
        comptime _ = @TypeOf(sourceSelection)._is_QItemSelection;
        return .{ .ptr = qtc.KCategorizedSortFilterProxyModel_SuperMapSelectionFromSource(@ptrCast(self.ptr), @ptrCast(sourceSelection.ptr)) };
    }

    /// ### DEPRECATED: Use `onMapSelectionFromSource` instead
    ///
    pub const OnMapSelectionFromSource = onMapSelectionFromSource;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionFromSource)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, sourceSelection: QItemSelection) callconv(.c) QItemSelection `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMapSelectionFromSource(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QItemSelection) callconv(.c) QItemSelection) void {
        qtc.KCategorizedSortFilterProxyModel_OnMapSelectionFromSource(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `filterAcceptsRow` instead
    ///
    pub const FilterAcceptsRow = filterAcceptsRow;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsRow)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` source_row: i32 `
    ///
    /// ` source_parent: QModelIndex `
    ///
    pub fn filterAcceptsRow(self: KCategorizedSortFilterProxyModel, source_row: i32, source_parent: anytype) bool {
        comptime _ = @TypeOf(source_parent)._is_QModelIndex;
        return qtc.KCategorizedSortFilterProxyModel_FilterAcceptsRow(@ptrCast(self.ptr), @bitCast(source_row), @ptrCast(source_parent.ptr));
    }

    /// ### DEPRECATED: Use `superFilterAcceptsRow` instead
    ///
    pub const SuperFilterAcceptsRow = superFilterAcceptsRow;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsRow)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` source_row: i32 `
    ///
    /// ` source_parent: QModelIndex `
    ///
    pub fn superFilterAcceptsRow(self: KCategorizedSortFilterProxyModel, source_row: i32, source_parent: anytype) bool {
        comptime _ = @TypeOf(source_parent)._is_QModelIndex;
        return qtc.KCategorizedSortFilterProxyModel_SuperFilterAcceptsRow(@ptrCast(self.ptr), @bitCast(source_row), @ptrCast(source_parent.ptr));
    }

    /// ### DEPRECATED: Use `onFilterAcceptsRow` instead
    ///
    pub const OnFilterAcceptsRow = onFilterAcceptsRow;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsRow)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, source_row: i32, source_parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onFilterAcceptsRow(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, i32, QModelIndex) callconv(.c) bool) void {
        qtc.KCategorizedSortFilterProxyModel_OnFilterAcceptsRow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `filterAcceptsColumn` instead
    ///
    pub const FilterAcceptsColumn = filterAcceptsColumn;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsColumn)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` source_column: i32 `
    ///
    /// ` source_parent: QModelIndex `
    ///
    pub fn filterAcceptsColumn(self: KCategorizedSortFilterProxyModel, source_column: i32, source_parent: anytype) bool {
        comptime _ = @TypeOf(source_parent)._is_QModelIndex;
        return qtc.KCategorizedSortFilterProxyModel_FilterAcceptsColumn(@ptrCast(self.ptr), @bitCast(source_column), @ptrCast(source_parent.ptr));
    }

    /// ### DEPRECATED: Use `superFilterAcceptsColumn` instead
    ///
    pub const SuperFilterAcceptsColumn = superFilterAcceptsColumn;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsColumn)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` source_column: i32 `
    ///
    /// ` source_parent: QModelIndex `
    ///
    pub fn superFilterAcceptsColumn(self: KCategorizedSortFilterProxyModel, source_column: i32, source_parent: anytype) bool {
        comptime _ = @TypeOf(source_parent)._is_QModelIndex;
        return qtc.KCategorizedSortFilterProxyModel_SuperFilterAcceptsColumn(@ptrCast(self.ptr), @bitCast(source_column), @ptrCast(source_parent.ptr));
    }

    /// ### DEPRECATED: Use `onFilterAcceptsColumn` instead
    ///
    pub const OnFilterAcceptsColumn = onFilterAcceptsColumn;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsColumn)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, source_column: i32, source_parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onFilterAcceptsColumn(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, i32, QModelIndex) callconv(.c) bool) void {
        qtc.KCategorizedSortFilterProxyModel_OnFilterAcceptsColumn(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `index` instead
    ///
    pub const Index = index;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#index)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn index(self: KCategorizedSortFilterProxyModel, row: i32, column: i32, _parent: anytype) QModelIndex {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return .{ .ptr = qtc.KCategorizedSortFilterProxyModel_Index(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `superIndex` instead
    ///
    pub const SuperIndex = superIndex;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#index)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superIndex(self: KCategorizedSortFilterProxyModel, row: i32, column: i32, _parent: anytype) QModelIndex {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return .{ .ptr = qtc.KCategorizedSortFilterProxyModel_SuperIndex(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `onIndex` instead
    ///
    pub const OnIndex = onIndex;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#index)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, row: i32, column: i32, parent: QModelIndex) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onIndex(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, i32, i32, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.KCategorizedSortFilterProxyModel_OnIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#parent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` child: QModelIndex `
    ///
    pub fn parent(self: KCategorizedSortFilterProxyModel, child: anytype) QModelIndex {
        comptime _ = @TypeOf(child)._is_QModelIndex;
        return .{ .ptr = qtc.KCategorizedSortFilterProxyModel_Parent(@ptrCast(self.ptr), @ptrCast(child.ptr)) };
    }

    /// ### DEPRECATED: Use `superParent` instead
    ///
    pub const SuperParent = superParent;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#parent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` child: QModelIndex `
    ///
    pub fn superParent(self: KCategorizedSortFilterProxyModel, child: anytype) QModelIndex {
        comptime _ = @TypeOf(child)._is_QModelIndex;
        return .{ .ptr = qtc.KCategorizedSortFilterProxyModel_SuperParent(@ptrCast(self.ptr), @ptrCast(child.ptr)) };
    }

    /// ### DEPRECATED: Use `onParent` instead
    ///
    pub const OnParent = onParent;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#parent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, child: QModelIndex) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onParent(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.KCategorizedSortFilterProxyModel_OnParent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sibling` instead
    ///
    pub const Sibling = sibling;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sibling)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` idx: QModelIndex `
    ///
    pub fn sibling(self: KCategorizedSortFilterProxyModel, row: i32, column: i32, idx: anytype) QModelIndex {
        comptime _ = @TypeOf(idx)._is_QModelIndex;
        return .{ .ptr = qtc.KCategorizedSortFilterProxyModel_Sibling(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(idx.ptr)) };
    }

    /// ### DEPRECATED: Use `superSibling` instead
    ///
    pub const SuperSibling = superSibling;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sibling)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` idx: QModelIndex `
    ///
    pub fn superSibling(self: KCategorizedSortFilterProxyModel, row: i32, column: i32, idx: anytype) QModelIndex {
        comptime _ = @TypeOf(idx)._is_QModelIndex;
        return .{ .ptr = qtc.KCategorizedSortFilterProxyModel_SuperSibling(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(idx.ptr)) };
    }

    /// ### DEPRECATED: Use `onSibling` instead
    ///
    pub const OnSibling = onSibling;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sibling)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, row: i32, column: i32, idx: QModelIndex) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSibling(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, i32, i32, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.KCategorizedSortFilterProxyModel_OnSibling(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rowCount` instead
    ///
    pub const RowCount = rowCount;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#rowCount)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn rowCount(self: KCategorizedSortFilterProxyModel, _parent: anytype) i32 {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.KCategorizedSortFilterProxyModel_RowCount(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `superRowCount` instead
    ///
    pub const SuperRowCount = superRowCount;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#rowCount)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superRowCount(self: KCategorizedSortFilterProxyModel, _parent: anytype) i32 {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.KCategorizedSortFilterProxyModel_SuperRowCount(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onRowCount` instead
    ///
    pub const OnRowCount = onRowCount;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#rowCount)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, parent: QModelIndex) callconv(.c) i32 `
    ///
    pub fn onRowCount(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QModelIndex) callconv(.c) i32) void {
        qtc.KCategorizedSortFilterProxyModel_OnRowCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `columnCount` instead
    ///
    pub const ColumnCount = columnCount;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#columnCount)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn columnCount(self: KCategorizedSortFilterProxyModel, _parent: anytype) i32 {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.KCategorizedSortFilterProxyModel_ColumnCount(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `superColumnCount` instead
    ///
    pub const SuperColumnCount = superColumnCount;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#columnCount)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superColumnCount(self: KCategorizedSortFilterProxyModel, _parent: anytype) i32 {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.KCategorizedSortFilterProxyModel_SuperColumnCount(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onColumnCount` instead
    ///
    pub const OnColumnCount = onColumnCount;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#columnCount)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, parent: QModelIndex) callconv(.c) i32 `
    ///
    pub fn onColumnCount(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QModelIndex) callconv(.c) i32) void {
        qtc.KCategorizedSortFilterProxyModel_OnColumnCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hasChildren` instead
    ///
    pub const HasChildren = hasChildren;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#hasChildren)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn hasChildren(self: KCategorizedSortFilterProxyModel, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.KCategorizedSortFilterProxyModel_HasChildren(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `superHasChildren` instead
    ///
    pub const SuperHasChildren = superHasChildren;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#hasChildren)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superHasChildren(self: KCategorizedSortFilterProxyModel, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.KCategorizedSortFilterProxyModel_SuperHasChildren(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onHasChildren` instead
    ///
    pub const OnHasChildren = onHasChildren;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#hasChildren)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onHasChildren(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QModelIndex) callconv(.c) bool) void {
        qtc.KCategorizedSortFilterProxyModel_OnHasChildren(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `data` instead
    ///
    pub const Data = data;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#data)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` role: i32 `
    ///
    pub fn data(self: KCategorizedSortFilterProxyModel, _index: anytype, role: i32) QVariant {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return .{ .ptr = qtc.KCategorizedSortFilterProxyModel_Data(@ptrCast(self.ptr), @ptrCast(_index.ptr), @bitCast(role)) };
    }

    /// ### DEPRECATED: Use `superData` instead
    ///
    pub const SuperData = superData;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#data)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` role: i32 `
    ///
    pub fn superData(self: KCategorizedSortFilterProxyModel, _index: anytype, role: i32) QVariant {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return .{ .ptr = qtc.KCategorizedSortFilterProxyModel_SuperData(@ptrCast(self.ptr), @ptrCast(_index.ptr), @bitCast(role)) };
    }

    /// ### DEPRECATED: Use `onData` instead
    ///
    pub const OnData = onData;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#data)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, index: QModelIndex, role: i32) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onData(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QModelIndex, i32) callconv(.c) QVariant) void {
        qtc.KCategorizedSortFilterProxyModel_OnData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setData` instead
    ///
    pub const SetData = setData;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` value: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn setData(self: KCategorizedSortFilterProxyModel, _index: anytype, value: anytype, role: i32) bool {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.KCategorizedSortFilterProxyModel_SetData(@ptrCast(self.ptr), @ptrCast(_index.ptr), @ptrCast(value.ptr), @bitCast(role));
    }

    /// ### DEPRECATED: Use `superSetData` instead
    ///
    pub const SuperSetData = superSetData;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` value: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn superSetData(self: KCategorizedSortFilterProxyModel, _index: anytype, value: anytype, role: i32) bool {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.KCategorizedSortFilterProxyModel_SuperSetData(@ptrCast(self.ptr), @ptrCast(_index.ptr), @ptrCast(value.ptr), @bitCast(role));
    }

    /// ### DEPRECATED: Use `onSetData` instead
    ///
    pub const OnSetData = onSetData;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, index: QModelIndex, value: QVariant, role: i32) callconv(.c) bool `
    ///
    pub fn onSetData(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QModelIndex, QVariant, i32) callconv(.c) bool) void {
        qtc.KCategorizedSortFilterProxyModel_OnSetData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `headerData` instead
    ///
    pub const HeaderData = headerData;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#headerData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` role: i32 `
    ///
    pub fn headerData(self: KCategorizedSortFilterProxyModel, section: i32, orientation: i32, role: i32) QVariant {
        return .{ .ptr = qtc.KCategorizedSortFilterProxyModel_HeaderData(@ptrCast(self.ptr), @bitCast(section), @bitCast(orientation), @bitCast(role)) };
    }

    /// ### DEPRECATED: Use `superHeaderData` instead
    ///
    pub const SuperHeaderData = superHeaderData;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#headerData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` role: i32 `
    ///
    pub fn superHeaderData(self: KCategorizedSortFilterProxyModel, section: i32, orientation: i32, role: i32) QVariant {
        return .{ .ptr = qtc.KCategorizedSortFilterProxyModel_SuperHeaderData(@ptrCast(self.ptr), @bitCast(section), @bitCast(orientation), @bitCast(role)) };
    }

    /// ### DEPRECATED: Use `onHeaderData` instead
    ///
    pub const OnHeaderData = onHeaderData;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#headerData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, section: i32, orientation: qnamespace_enums.Orientation, role: i32) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onHeaderData(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, i32, i32, i32) callconv(.c) QVariant) void {
        qtc.KCategorizedSortFilterProxyModel_OnHeaderData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setHeaderData` instead
    ///
    pub const SetHeaderData = setHeaderData;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setHeaderData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` value: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn setHeaderData(self: KCategorizedSortFilterProxyModel, section: i32, orientation: i32, value: anytype, role: i32) bool {
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.KCategorizedSortFilterProxyModel_SetHeaderData(@ptrCast(self.ptr), @bitCast(section), @bitCast(orientation), @ptrCast(value.ptr), @bitCast(role));
    }

    /// ### DEPRECATED: Use `superSetHeaderData` instead
    ///
    pub const SuperSetHeaderData = superSetHeaderData;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setHeaderData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` value: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn superSetHeaderData(self: KCategorizedSortFilterProxyModel, section: i32, orientation: i32, value: anytype, role: i32) bool {
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.KCategorizedSortFilterProxyModel_SuperSetHeaderData(@ptrCast(self.ptr), @bitCast(section), @bitCast(orientation), @ptrCast(value.ptr), @bitCast(role));
    }

    /// ### DEPRECATED: Use `onSetHeaderData` instead
    ///
    pub const OnSetHeaderData = onSetHeaderData;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setHeaderData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, section: i32, orientation: qnamespace_enums.Orientation, value: QVariant, role: i32) callconv(.c) bool `
    ///
    pub fn onSetHeaderData(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, i32, i32, QVariant, i32) callconv(.c) bool) void {
        qtc.KCategorizedSortFilterProxyModel_OnSetHeaderData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mimeData` instead
    ///
    pub const MimeData = mimeData;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` indexes: []QModelIndex `
    ///
    pub fn mimeData(self: KCategorizedSortFilterProxyModel, indexes: []QModelIndex) QMimeData {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        return .{ .ptr = qtc.KCategorizedSortFilterProxyModel_MimeData(@ptrCast(self.ptr), indexes_list) };
    }

    /// ### DEPRECATED: Use `superMimeData` instead
    ///
    pub const SuperMimeData = superMimeData;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` indexes: []QModelIndex `
    ///
    pub fn superMimeData(self: KCategorizedSortFilterProxyModel, indexes: []QModelIndex) QMimeData {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        return .{ .ptr = qtc.KCategorizedSortFilterProxyModel_SuperMimeData(@ptrCast(self.ptr), indexes_list) };
    }

    /// ### DEPRECATED: Use `onMimeData` instead
    ///
    pub const OnMimeData = onMimeData;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, indexes: qtc.libqt_list ([]QModelIndex)) callconv(.c) QMimeData `
    ///
    pub fn onMimeData(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, qtc.libqt_list) callconv(.c) QMimeData) void {
        qtc.KCategorizedSortFilterProxyModel_OnMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dropMimeData` instead
    ///
    pub const DropMimeData = dropMimeData;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dropMimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
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
    pub fn dropMimeData(self: KCategorizedSortFilterProxyModel, _data: anytype, action: i32, row: i32, column: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_data)._is_QMimeData;
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.KCategorizedSortFilterProxyModel_DropMimeData(@ptrCast(self.ptr), @ptrCast(_data.ptr), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `superDropMimeData` instead
    ///
    pub const SuperDropMimeData = superDropMimeData;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dropMimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
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
    pub fn superDropMimeData(self: KCategorizedSortFilterProxyModel, _data: anytype, action: i32, row: i32, column: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_data)._is_QMimeData;
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.KCategorizedSortFilterProxyModel_SuperDropMimeData(@ptrCast(self.ptr), @ptrCast(_data.ptr), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onDropMimeData` instead
    ///
    pub const OnDropMimeData = onDropMimeData;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dropMimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, data: QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onDropMimeData(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QMimeData, i32, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.KCategorizedSortFilterProxyModel_OnDropMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `insertRows` instead
    ///
    pub const InsertRows = insertRows;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn insertRows(self: KCategorizedSortFilterProxyModel, row: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.KCategorizedSortFilterProxyModel_InsertRows(@ptrCast(self.ptr), @bitCast(row), @bitCast(count), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `superInsertRows` instead
    ///
    pub const SuperInsertRows = superInsertRows;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superInsertRows(self: KCategorizedSortFilterProxyModel, row: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.KCategorizedSortFilterProxyModel_SuperInsertRows(@ptrCast(self.ptr), @bitCast(row), @bitCast(count), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onInsertRows` instead
    ///
    pub const OnInsertRows = onInsertRows;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, row: i32, count: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onInsertRows(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.KCategorizedSortFilterProxyModel_OnInsertRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `insertColumns` instead
    ///
    pub const InsertColumns = insertColumns;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn insertColumns(self: KCategorizedSortFilterProxyModel, column: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.KCategorizedSortFilterProxyModel_InsertColumns(@ptrCast(self.ptr), @bitCast(column), @bitCast(count), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `superInsertColumns` instead
    ///
    pub const SuperInsertColumns = superInsertColumns;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superInsertColumns(self: KCategorizedSortFilterProxyModel, column: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.KCategorizedSortFilterProxyModel_SuperInsertColumns(@ptrCast(self.ptr), @bitCast(column), @bitCast(count), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onInsertColumns` instead
    ///
    pub const OnInsertColumns = onInsertColumns;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, column: i32, count: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onInsertColumns(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.KCategorizedSortFilterProxyModel_OnInsertColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `removeRows` instead
    ///
    pub const RemoveRows = removeRows;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn removeRows(self: KCategorizedSortFilterProxyModel, row: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.KCategorizedSortFilterProxyModel_RemoveRows(@ptrCast(self.ptr), @bitCast(row), @bitCast(count), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `superRemoveRows` instead
    ///
    pub const SuperRemoveRows = superRemoveRows;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superRemoveRows(self: KCategorizedSortFilterProxyModel, row: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.KCategorizedSortFilterProxyModel_SuperRemoveRows(@ptrCast(self.ptr), @bitCast(row), @bitCast(count), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onRemoveRows` instead
    ///
    pub const OnRemoveRows = onRemoveRows;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, row: i32, count: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onRemoveRows(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.KCategorizedSortFilterProxyModel_OnRemoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `removeColumns` instead
    ///
    pub const RemoveColumns = removeColumns;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn removeColumns(self: KCategorizedSortFilterProxyModel, column: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.KCategorizedSortFilterProxyModel_RemoveColumns(@ptrCast(self.ptr), @bitCast(column), @bitCast(count), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `superRemoveColumns` instead
    ///
    pub const SuperRemoveColumns = superRemoveColumns;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superRemoveColumns(self: KCategorizedSortFilterProxyModel, column: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.KCategorizedSortFilterProxyModel_SuperRemoveColumns(@ptrCast(self.ptr), @bitCast(column), @bitCast(count), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onRemoveColumns` instead
    ///
    pub const OnRemoveColumns = onRemoveColumns;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, column: i32, count: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onRemoveColumns(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.KCategorizedSortFilterProxyModel_OnRemoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `fetchMore` instead
    ///
    pub const FetchMore = fetchMore;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#fetchMore)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn fetchMore(self: KCategorizedSortFilterProxyModel, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.KCategorizedSortFilterProxyModel_FetchMore(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `superFetchMore` instead
    ///
    pub const SuperFetchMore = superFetchMore;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#fetchMore)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superFetchMore(self: KCategorizedSortFilterProxyModel, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.KCategorizedSortFilterProxyModel_SuperFetchMore(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onFetchMore` instead
    ///
    pub const OnFetchMore = onFetchMore;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#fetchMore)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, parent: QModelIndex) callconv(.c) void `
    ///
    pub fn onFetchMore(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QModelIndex) callconv(.c) void) void {
        qtc.KCategorizedSortFilterProxyModel_OnFetchMore(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `canFetchMore` instead
    ///
    pub const CanFetchMore = canFetchMore;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#canFetchMore)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn canFetchMore(self: KCategorizedSortFilterProxyModel, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.KCategorizedSortFilterProxyModel_CanFetchMore(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `superCanFetchMore` instead
    ///
    pub const SuperCanFetchMore = superCanFetchMore;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#canFetchMore)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superCanFetchMore(self: KCategorizedSortFilterProxyModel, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.KCategorizedSortFilterProxyModel_SuperCanFetchMore(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onCanFetchMore` instead
    ///
    pub const OnCanFetchMore = onCanFetchMore;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#canFetchMore)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onCanFetchMore(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QModelIndex) callconv(.c) bool) void {
        qtc.KCategorizedSortFilterProxyModel_OnCanFetchMore(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#flags)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.ItemFlag `
    ///
    pub fn flags(self: KCategorizedSortFilterProxyModel, _index: anytype) i32 {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return qtc.KCategorizedSortFilterProxyModel_Flags(@ptrCast(self.ptr), @ptrCast(_index.ptr));
    }

    /// ### DEPRECATED: Use `superFlags` instead
    ///
    pub const SuperFlags = superFlags;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#flags)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.ItemFlag `
    ///
    pub fn superFlags(self: KCategorizedSortFilterProxyModel, _index: anytype) i32 {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return qtc.KCategorizedSortFilterProxyModel_SuperFlags(@ptrCast(self.ptr), @ptrCast(_index.ptr));
    }

    /// ### DEPRECATED: Use `onFlags` instead
    ///
    pub const OnFlags = onFlags;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#flags)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, index: QModelIndex) callconv(.c) i32 `
    ///
    pub fn onFlags(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QModelIndex) callconv(.c) i32) void {
        qtc.KCategorizedSortFilterProxyModel_OnFlags(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `buddy` instead
    ///
    pub const Buddy = buddy;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#buddy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn buddy(self: KCategorizedSortFilterProxyModel, _index: anytype) QModelIndex {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return .{ .ptr = qtc.KCategorizedSortFilterProxyModel_Buddy(@ptrCast(self.ptr), @ptrCast(_index.ptr)) };
    }

    /// ### DEPRECATED: Use `superBuddy` instead
    ///
    pub const SuperBuddy = superBuddy;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#buddy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn superBuddy(self: KCategorizedSortFilterProxyModel, _index: anytype) QModelIndex {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return .{ .ptr = qtc.KCategorizedSortFilterProxyModel_SuperBuddy(@ptrCast(self.ptr), @ptrCast(_index.ptr)) };
    }

    /// ### DEPRECATED: Use `onBuddy` instead
    ///
    pub const OnBuddy = onBuddy;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#buddy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, index: QModelIndex) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onBuddy(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.KCategorizedSortFilterProxyModel_OnBuddy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `match` instead
    ///
    pub const Match = match;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#match)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
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
    pub fn match(self: KCategorizedSortFilterProxyModel, allocator: std.mem.Allocator, start: anytype, role: i32, value: anytype, hits: i32, _flags: i32) []QModelIndex {
        comptime _ = @TypeOf(start)._is_QModelIndex;
        comptime _ = @TypeOf(value)._is_QVariant;
        const _arr: qtc.libqt_list = qtc.KCategorizedSortFilterProxyModel_Match(@ptrCast(self.ptr), @ptrCast(start.ptr), @bitCast(role), @ptrCast(value.ptr), @bitCast(hits), @bitCast(_flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("KCategorizedSortFilterProxyModel.match: Memory allocation failed");
        const _data_val: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `superMatch` instead
    ///
    pub const SuperMatch = superMatch;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#match)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
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
    pub fn superMatch(self: KCategorizedSortFilterProxyModel, allocator: std.mem.Allocator, start: anytype, role: i32, value: anytype, hits: i32, _flags: i32) []QModelIndex {
        comptime _ = @TypeOf(start)._is_QModelIndex;
        comptime _ = @TypeOf(value)._is_QVariant;
        const _arr: qtc.libqt_list = qtc.KCategorizedSortFilterProxyModel_SuperMatch(@ptrCast(self.ptr), @ptrCast(start.ptr), @bitCast(role), @ptrCast(value.ptr), @bitCast(hits), @bitCast(_flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("KCategorizedSortFilterProxyModel.match: Memory allocation failed");
        const _data_val: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `onMatch` instead
    ///
    pub const OnMatch = onMatch;

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
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, start: QModelIndex, role: i32, value: QVariant, hits: i32, flags: flag of qnamespace_enums.MatchFlag) callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QModelIndex `
    ///
    pub fn onMatch(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QModelIndex, i32, QVariant, i32, i32) callconv(.c) qtc.libqt_list) void {
        qtc.KCategorizedSortFilterProxyModel_OnMatch(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `span` instead
    ///
    pub const Span = span;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#span)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn span(self: KCategorizedSortFilterProxyModel, _index: anytype) QSize {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return .{ .ptr = qtc.KCategorizedSortFilterProxyModel_Span(@ptrCast(self.ptr), @ptrCast(_index.ptr)) };
    }

    /// ### DEPRECATED: Use `superSpan` instead
    ///
    pub const SuperSpan = superSpan;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#span)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn superSpan(self: KCategorizedSortFilterProxyModel, _index: anytype) QSize {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return .{ .ptr = qtc.KCategorizedSortFilterProxyModel_SuperSpan(@ptrCast(self.ptr), @ptrCast(_index.ptr)) };
    }

    /// ### DEPRECATED: Use `onSpan` instead
    ///
    pub const OnSpan = onSpan;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#span)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, index: QModelIndex) callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSpan(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QModelIndex) callconv(.c) QSize) void {
        qtc.KCategorizedSortFilterProxyModel_OnSpan(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mimeTypes` instead
    ///
    pub const MimeTypes = mimeTypes;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeTypes)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn mimeTypes(self: KCategorizedSortFilterProxyModel, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KCategorizedSortFilterProxyModel_MimeTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KCategorizedSortFilterProxyModel.mimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KCategorizedSortFilterProxyModel.mimeTypes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `superMimeTypes` instead
    ///
    pub const SuperMimeTypes = superMimeTypes;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeTypes)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superMimeTypes(self: KCategorizedSortFilterProxyModel, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KCategorizedSortFilterProxyModel_SuperMimeTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KCategorizedSortFilterProxyModel.mimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KCategorizedSortFilterProxyModel.mimeTypes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `onMimeTypes` instead
    ///
    pub const OnMimeTypes = onMimeTypes;

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
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8 `
    ///
    pub fn onMimeTypes(self: KCategorizedSortFilterProxyModel, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.KCategorizedSortFilterProxyModel_OnMimeTypes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `supportedDropActions` instead
    ///
    pub const SupportedDropActions = supportedDropActions;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#supportedDropActions)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn supportedDropActions(self: KCategorizedSortFilterProxyModel) i32 {
        return qtc.KCategorizedSortFilterProxyModel_SupportedDropActions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSupportedDropActions` instead
    ///
    pub const SuperSupportedDropActions = superSupportedDropActions;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#supportedDropActions)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn superSupportedDropActions(self: KCategorizedSortFilterProxyModel) i32 {
        return qtc.KCategorizedSortFilterProxyModel_SuperSupportedDropActions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSupportedDropActions` instead
    ///
    pub const OnSupportedDropActions = onSupportedDropActions;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#supportedDropActions)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSupportedDropActions(self: KCategorizedSortFilterProxyModel, callback: *const fn () callconv(.c) i32) void {
        qtc.KCategorizedSortFilterProxyModel_OnSupportedDropActions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn submit(self: KCategorizedSortFilterProxyModel) bool {
        return qtc.KCategorizedSortFilterProxyModel_Submit(@ptrCast(self.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn superSubmit(self: KCategorizedSortFilterProxyModel) bool {
        return qtc.KCategorizedSortFilterProxyModel_SuperSubmit(@ptrCast(self.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onSubmit(self: KCategorizedSortFilterProxyModel, callback: *const fn () callconv(.c) bool) void {
        qtc.KCategorizedSortFilterProxyModel_OnSubmit(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn revert(self: KCategorizedSortFilterProxyModel) void {
        qtc.KCategorizedSortFilterProxyModel_Revert(@ptrCast(self.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn superRevert(self: KCategorizedSortFilterProxyModel) void {
        qtc.KCategorizedSortFilterProxyModel_SuperRevert(@ptrCast(self.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onRevert(self: KCategorizedSortFilterProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.KCategorizedSortFilterProxyModel_OnRevert(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn itemData(self: KCategorizedSortFilterProxyModel, allocator: std.mem.Allocator, _index: anytype) ArrayMap_i32_QVariant {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        const _map: qtc.libqt_map = qtc.KCategorizedSortFilterProxyModel_ItemData(@ptrCast(self.ptr), @ptrCast(_index.ptr));
        var _ret: ArrayMap_i32_QVariant = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("KCategorizedSortFilterProxyModel.itemData: Total capacity allocation failed");
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn superItemData(self: KCategorizedSortFilterProxyModel, allocator: std.mem.Allocator, _index: anytype) ArrayMap_i32_QVariant {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        const _map: qtc.libqt_map = qtc.KCategorizedSortFilterProxyModel_SuperItemData(@ptrCast(self.ptr), @ptrCast(_index.ptr));
        var _ret: ArrayMap_i32_QVariant = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("KCategorizedSortFilterProxyModel.itemData: Total capacity allocation failed");
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
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, index: QModelIndex) callconv(.c) qtc.libqt_map `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of ArrayMap_i32_QVariant `
    ///
    pub fn onItemData(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QModelIndex) callconv(.c) qtc.libqt_map) void {
        qtc.KCategorizedSortFilterProxyModel_OnItemData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` roles: ArrayMap_i32_QVariant `
    ///
    pub fn setItemData(self: KCategorizedSortFilterProxyModel, allocator: std.mem.Allocator, _index: anytype, roles: ArrayMap_i32_QVariant) bool {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        const roles_count = roles.count();
        const roles_keys = allocator.alloc(i32, roles_count) catch @panic("KCategorizedSortFilterProxyModel.setItemData: Memory allocation failed");
        defer allocator.free(roles_keys);
        const roles_values = allocator.alloc(QtC.QVariant, roles_count) catch @panic("KCategorizedSortFilterProxyModel.setItemData: Memory allocation failed");
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
        return qtc.KCategorizedSortFilterProxyModel_SetItemData(@ptrCast(self.ptr), @ptrCast(_index.ptr), roles_map);
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` roles: ArrayMap_i32_QVariant `
    ///
    pub fn superSetItemData(self: KCategorizedSortFilterProxyModel, allocator: std.mem.Allocator, _index: anytype, roles: ArrayMap_i32_QVariant) bool {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        const roles_count = roles.count();
        const roles_keys = allocator.alloc(i32, roles_count) catch @panic("KCategorizedSortFilterProxyModel.setItemData: Memory allocation failed");
        defer allocator.free(roles_keys);
        const roles_values = allocator.alloc(QtC.QVariant, roles_count) catch @panic("KCategorizedSortFilterProxyModel.setItemData: Memory allocation failed");
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
        return qtc.KCategorizedSortFilterProxyModel_SuperSetItemData(@ptrCast(self.ptr), @ptrCast(_index.ptr), roles_map);
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
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, index: QModelIndex, roles: qtc.libqt_map (ArrayMap_i32_QVariant)) callconv(.c) bool `
    ///
    pub fn onSetItemData(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QModelIndex, qtc.libqt_map) callconv(.c) bool) void {
        qtc.KCategorizedSortFilterProxyModel_OnSetItemData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn clearItemData(self: KCategorizedSortFilterProxyModel, _index: anytype) bool {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return qtc.KCategorizedSortFilterProxyModel_ClearItemData(@ptrCast(self.ptr), @ptrCast(_index.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn superClearItemData(self: KCategorizedSortFilterProxyModel, _index: anytype) bool {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return qtc.KCategorizedSortFilterProxyModel_SuperClearItemData(@ptrCast(self.ptr), @ptrCast(_index.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, index: QModelIndex) callconv(.c) bool `
    ///
    pub fn onClearItemData(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QModelIndex) callconv(.c) bool) void {
        qtc.KCategorizedSortFilterProxyModel_OnClearItemData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategorizedSortFilterProxyModel `
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
    pub fn canDropMimeData(self: KCategorizedSortFilterProxyModel, _data: anytype, action: i32, row: i32, column: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_data)._is_QMimeData;
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.KCategorizedSortFilterProxyModel_CanDropMimeData(@ptrCast(self.ptr), @ptrCast(_data.ptr), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(_parent.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel `
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
    pub fn superCanDropMimeData(self: KCategorizedSortFilterProxyModel, _data: anytype, action: i32, row: i32, column: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_data)._is_QMimeData;
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.KCategorizedSortFilterProxyModel_SuperCanDropMimeData(@ptrCast(self.ptr), @ptrCast(_data.ptr), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(_parent.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, data: QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onCanDropMimeData(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QMimeData, i32, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.KCategorizedSortFilterProxyModel_OnCanDropMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn supportedDragActions(self: KCategorizedSortFilterProxyModel) i32 {
        return qtc.KCategorizedSortFilterProxyModel_SupportedDragActions(@ptrCast(self.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn superSupportedDragActions(self: KCategorizedSortFilterProxyModel) i32 {
        return qtc.KCategorizedSortFilterProxyModel_SuperSupportedDragActions(@ptrCast(self.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSupportedDragActions(self: KCategorizedSortFilterProxyModel, callback: *const fn () callconv(.c) i32) void {
        qtc.KCategorizedSortFilterProxyModel_OnSupportedDragActions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn roleNames(self: KCategorizedSortFilterProxyModel, allocator: std.mem.Allocator) Map_i32_u8 {
        const _map: qtc.libqt_map = qtc.KCategorizedSortFilterProxyModel_RoleNames(@ptrCast(self.ptr));
        var _ret: Map_i32_u8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("KCategorizedSortFilterProxyModel.roleNames: Total capacity allocation failed");
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
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("KCategorizedSortFilterProxyModel.roleNames: Memory allocation failed");
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superRoleNames(self: KCategorizedSortFilterProxyModel, allocator: std.mem.Allocator) Map_i32_u8 {
        const _map: qtc.libqt_map = qtc.KCategorizedSortFilterProxyModel_SuperRoleNames(@ptrCast(self.ptr));
        var _ret: Map_i32_u8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("KCategorizedSortFilterProxyModel.roleNames: Total capacity allocation failed");
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
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("KCategorizedSortFilterProxyModel.roleNames: Memory allocation failed");
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
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_map `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of Map_i32_u8 `
    ///
    pub fn onRoleNames(self: KCategorizedSortFilterProxyModel, callback: *const fn () callconv(.c) qtc.libqt_map) void {
        qtc.KCategorizedSortFilterProxyModel_OnRoleNames(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategorizedSortFilterProxyModel `
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
    pub fn moveRows(self: KCategorizedSortFilterProxyModel, sourceParent: anytype, sourceRow: i32, count: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.KCategorizedSortFilterProxyModel_MoveRows(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceRow), @bitCast(count), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
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
    /// ` self: KCategorizedSortFilterProxyModel `
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
    pub fn superMoveRows(self: KCategorizedSortFilterProxyModel, sourceParent: anytype, sourceRow: i32, count: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.KCategorizedSortFilterProxyModel_SuperMoveRows(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceRow), @bitCast(count), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
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
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, sourceParent: QModelIndex, sourceRow: i32, count: i32, destinationParent: QModelIndex, destinationChild: i32) callconv(.c) bool `
    ///
    pub fn onMoveRows(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) bool) void {
        qtc.KCategorizedSortFilterProxyModel_OnMoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategorizedSortFilterProxyModel `
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
    pub fn moveColumns(self: KCategorizedSortFilterProxyModel, sourceParent: anytype, sourceColumn: i32, count: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.KCategorizedSortFilterProxyModel_MoveColumns(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceColumn), @bitCast(count), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
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
    /// ` self: KCategorizedSortFilterProxyModel `
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
    pub fn superMoveColumns(self: KCategorizedSortFilterProxyModel, sourceParent: anytype, sourceColumn: i32, count: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.KCategorizedSortFilterProxyModel_SuperMoveColumns(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceColumn), @bitCast(count), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
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
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, sourceParent: QModelIndex, sourceColumn: i32, count: i32, destinationParent: QModelIndex, destinationChild: i32) callconv(.c) bool `
    ///
    pub fn onMoveColumns(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) bool) void {
        qtc.KCategorizedSortFilterProxyModel_OnMoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` roleDataSpan: QModelRoleDataSpan `
    ///
    pub fn multiData(self: KCategorizedSortFilterProxyModel, _index: anytype, roleDataSpan: anytype) void {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        comptime _ = @TypeOf(roleDataSpan)._is_QModelRoleDataSpan;
        qtc.KCategorizedSortFilterProxyModel_MultiData(@ptrCast(self.ptr), @ptrCast(_index.ptr), @ptrCast(roleDataSpan.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` roleDataSpan: QModelRoleDataSpan `
    ///
    pub fn superMultiData(self: KCategorizedSortFilterProxyModel, _index: anytype, roleDataSpan: anytype) void {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        comptime _ = @TypeOf(roleDataSpan)._is_QModelRoleDataSpan;
        qtc.KCategorizedSortFilterProxyModel_SuperMultiData(@ptrCast(self.ptr), @ptrCast(_index.ptr), @ptrCast(roleDataSpan.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, index: QModelIndex, roleDataSpan: QModelRoleDataSpan) callconv(.c) void `
    ///
    pub fn onMultiData(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QModelIndex, QModelRoleDataSpan) callconv(.c) void) void {
        qtc.KCategorizedSortFilterProxyModel_OnMultiData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn resetInternalData(self: KCategorizedSortFilterProxyModel) void {
        qtc.KCategorizedSortFilterProxyModel_ResetInternalData(@ptrCast(self.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn superResetInternalData(self: KCategorizedSortFilterProxyModel) void {
        qtc.KCategorizedSortFilterProxyModel_SuperResetInternalData(@ptrCast(self.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onResetInternalData(self: KCategorizedSortFilterProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.KCategorizedSortFilterProxyModel_OnResetInternalData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KCategorizedSortFilterProxyModel, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KCategorizedSortFilterProxyModel_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KCategorizedSortFilterProxyModel, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KCategorizedSortFilterProxyModel_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QEvent) callconv(.c) bool) void {
        qtc.KCategorizedSortFilterProxyModel_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KCategorizedSortFilterProxyModel, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KCategorizedSortFilterProxyModel_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KCategorizedSortFilterProxyModel, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KCategorizedSortFilterProxyModel_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QObject, QEvent) callconv(.c) bool) void {
        qtc.KCategorizedSortFilterProxyModel_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KCategorizedSortFilterProxyModel, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KCategorizedSortFilterProxyModel_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KCategorizedSortFilterProxyModel, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KCategorizedSortFilterProxyModel_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QTimerEvent) callconv(.c) void) void {
        qtc.KCategorizedSortFilterProxyModel_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KCategorizedSortFilterProxyModel, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KCategorizedSortFilterProxyModel_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KCategorizedSortFilterProxyModel, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KCategorizedSortFilterProxyModel_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QChildEvent) callconv(.c) void) void {
        qtc.KCategorizedSortFilterProxyModel_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KCategorizedSortFilterProxyModel, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KCategorizedSortFilterProxyModel_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KCategorizedSortFilterProxyModel, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KCategorizedSortFilterProxyModel_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QEvent) callconv(.c) void) void {
        qtc.KCategorizedSortFilterProxyModel_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KCategorizedSortFilterProxyModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KCategorizedSortFilterProxyModel_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KCategorizedSortFilterProxyModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KCategorizedSortFilterProxyModel_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QMetaMethod) callconv(.c) void) void {
        qtc.KCategorizedSortFilterProxyModel_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KCategorizedSortFilterProxyModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KCategorizedSortFilterProxyModel_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KCategorizedSortFilterProxyModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KCategorizedSortFilterProxyModel_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QMetaMethod) callconv(.c) void) void {
        qtc.KCategorizedSortFilterProxyModel_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `invalidateFilter` instead
    ///
    pub const InvalidateFilter = invalidateFilter;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn invalidateFilter(self: KCategorizedSortFilterProxyModel) void {
        qtc.KCategorizedSortFilterProxyModel_InvalidateFilter(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superInvalidateFilter` instead
    ///
    pub const SuperInvalidateFilter = superInvalidateFilter;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn superInvalidateFilter(self: KCategorizedSortFilterProxyModel) void {
        qtc.KCategorizedSortFilterProxyModel_SuperInvalidateFilter(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onInvalidateFilter` instead
    ///
    pub const OnInvalidateFilter = onInvalidateFilter;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onInvalidateFilter(self: KCategorizedSortFilterProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.KCategorizedSortFilterProxyModel_OnInvalidateFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `invalidateRowsFilter` instead
    ///
    pub const InvalidateRowsFilter = invalidateRowsFilter;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateRowsFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn invalidateRowsFilter(self: KCategorizedSortFilterProxyModel) void {
        qtc.KCategorizedSortFilterProxyModel_InvalidateRowsFilter(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superInvalidateRowsFilter` instead
    ///
    pub const SuperInvalidateRowsFilter = superInvalidateRowsFilter;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateRowsFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn superInvalidateRowsFilter(self: KCategorizedSortFilterProxyModel) void {
        qtc.KCategorizedSortFilterProxyModel_SuperInvalidateRowsFilter(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onInvalidateRowsFilter` instead
    ///
    pub const OnInvalidateRowsFilter = onInvalidateRowsFilter;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateRowsFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onInvalidateRowsFilter(self: KCategorizedSortFilterProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.KCategorizedSortFilterProxyModel_OnInvalidateRowsFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `invalidateColumnsFilter` instead
    ///
    pub const InvalidateColumnsFilter = invalidateColumnsFilter;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateColumnsFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn invalidateColumnsFilter(self: KCategorizedSortFilterProxyModel) void {
        qtc.KCategorizedSortFilterProxyModel_InvalidateColumnsFilter(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superInvalidateColumnsFilter` instead
    ///
    pub const SuperInvalidateColumnsFilter = superInvalidateColumnsFilter;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateColumnsFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn superInvalidateColumnsFilter(self: KCategorizedSortFilterProxyModel) void {
        qtc.KCategorizedSortFilterProxyModel_SuperInvalidateColumnsFilter(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onInvalidateColumnsFilter` instead
    ///
    pub const OnInvalidateColumnsFilter = onInvalidateColumnsFilter;

    /// Inherited from QSortFilterProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateColumnsFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onInvalidateColumnsFilter(self: KCategorizedSortFilterProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.KCategorizedSortFilterProxyModel_OnInvalidateColumnsFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` col: i32 `
    ///
    /// ` internalPtr: ?*anyopaque `
    ///
    pub fn createSourceIndex(self: KCategorizedSortFilterProxyModel, row: i32, col: i32, internalPtr: ?*anyopaque) QModelIndex {
        return .{ .ptr = qtc.KCategorizedSortFilterProxyModel_CreateSourceIndex(@ptrCast(self.ptr), @bitCast(row), @bitCast(col), @ptrCast(internalPtr)) };
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` col: i32 `
    ///
    /// ` internalPtr: ?*anyopaque `
    ///
    pub fn superCreateSourceIndex(self: KCategorizedSortFilterProxyModel, row: i32, col: i32, internalPtr: ?*anyopaque) QModelIndex {
        return .{ .ptr = qtc.KCategorizedSortFilterProxyModel_SuperCreateSourceIndex(@ptrCast(self.ptr), @bitCast(row), @bitCast(col), @ptrCast(internalPtr)) };
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
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, row: i32, col: i32, internalPtr: ?*anyopaque) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onCreateSourceIndex(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, i32, i32, ?*anyopaque) callconv(.c) QModelIndex) void {
        qtc.KCategorizedSortFilterProxyModel_OnCreateSourceIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn createIndex(self: KCategorizedSortFilterProxyModel, row: i32, column: i32) QModelIndex {
        return .{ .ptr = qtc.KCategorizedSortFilterProxyModel_CreateIndex(@ptrCast(self.ptr), @bitCast(row), @bitCast(column)) };
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn superCreateIndex(self: KCategorizedSortFilterProxyModel, row: i32, column: i32) QModelIndex {
        return .{ .ptr = qtc.KCategorizedSortFilterProxyModel_SuperCreateIndex(@ptrCast(self.ptr), @bitCast(row), @bitCast(column)) };
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
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, row: i32, column: i32) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onCreateIndex(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, i32, i32) callconv(.c) QModelIndex) void {
        qtc.KCategorizedSortFilterProxyModel_OnCreateIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` indexes: []QModelIndex `
    ///
    /// ` stream: QDataStream `
    ///
    pub fn encodeData(self: KCategorizedSortFilterProxyModel, indexes: []QModelIndex, stream: anytype) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        comptime _ = @TypeOf(stream)._is_QDataStream;
        qtc.KCategorizedSortFilterProxyModel_EncodeData(@ptrCast(self.ptr), indexes_list, @ptrCast(stream.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` indexes: []QModelIndex `
    ///
    /// ` stream: QDataStream `
    ///
    pub fn superEncodeData(self: KCategorizedSortFilterProxyModel, indexes: []QModelIndex, stream: anytype) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        comptime _ = @TypeOf(stream)._is_QDataStream;
        qtc.KCategorizedSortFilterProxyModel_SuperEncodeData(@ptrCast(self.ptr), indexes_list, @ptrCast(stream.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, indexes: qtc.libqt_list ([]QModelIndex), stream: QDataStream) callconv(.c) void `
    ///
    pub fn onEncodeData(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, qtc.libqt_list, QDataStream) callconv(.c) void) void {
        qtc.KCategorizedSortFilterProxyModel_OnEncodeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` stream: QDataStream `
    ///
    pub fn decodeData(self: KCategorizedSortFilterProxyModel, row: i32, column: i32, _parent: anytype, stream: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        comptime _ = @TypeOf(stream)._is_QDataStream;
        return qtc.KCategorizedSortFilterProxyModel_DecodeData(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(_parent.ptr), @ptrCast(stream.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` stream: QDataStream `
    ///
    pub fn superDecodeData(self: KCategorizedSortFilterProxyModel, row: i32, column: i32, _parent: anytype, stream: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        comptime _ = @TypeOf(stream)._is_QDataStream;
        return qtc.KCategorizedSortFilterProxyModel_SuperDecodeData(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(_parent.ptr), @ptrCast(stream.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, row: i32, column: i32, parent: QModelIndex, stream: QDataStream) callconv(.c) bool `
    ///
    pub fn onDecodeData(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, i32, i32, QModelIndex, QDataStream) callconv(.c) bool) void {
        qtc.KCategorizedSortFilterProxyModel_OnDecodeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn beginInsertRows(self: KCategorizedSortFilterProxyModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.KCategorizedSortFilterProxyModel_BeginInsertRows(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn superBeginInsertRows(self: KCategorizedSortFilterProxyModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.KCategorizedSortFilterProxyModel_SuperBeginInsertRows(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
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
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onBeginInsertRows(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.KCategorizedSortFilterProxyModel_OnBeginInsertRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn endInsertRows(self: KCategorizedSortFilterProxyModel) void {
        qtc.KCategorizedSortFilterProxyModel_EndInsertRows(@ptrCast(self.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn superEndInsertRows(self: KCategorizedSortFilterProxyModel) void {
        qtc.KCategorizedSortFilterProxyModel_SuperEndInsertRows(@ptrCast(self.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEndInsertRows(self: KCategorizedSortFilterProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.KCategorizedSortFilterProxyModel_OnEndInsertRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn beginRemoveRows(self: KCategorizedSortFilterProxyModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.KCategorizedSortFilterProxyModel_BeginRemoveRows(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn superBeginRemoveRows(self: KCategorizedSortFilterProxyModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.KCategorizedSortFilterProxyModel_SuperBeginRemoveRows(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
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
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onBeginRemoveRows(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.KCategorizedSortFilterProxyModel_OnBeginRemoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn endRemoveRows(self: KCategorizedSortFilterProxyModel) void {
        qtc.KCategorizedSortFilterProxyModel_EndRemoveRows(@ptrCast(self.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn superEndRemoveRows(self: KCategorizedSortFilterProxyModel) void {
        qtc.KCategorizedSortFilterProxyModel_SuperEndRemoveRows(@ptrCast(self.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEndRemoveRows(self: KCategorizedSortFilterProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.KCategorizedSortFilterProxyModel_OnEndRemoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategorizedSortFilterProxyModel `
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
    pub fn beginMoveRows(self: KCategorizedSortFilterProxyModel, sourceParent: anytype, sourceFirst: i32, sourceLast: i32, destinationParent: anytype, destinationRow: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.KCategorizedSortFilterProxyModel_BeginMoveRows(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent.ptr), @bitCast(destinationRow));
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
    /// ` self: KCategorizedSortFilterProxyModel `
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
    pub fn superBeginMoveRows(self: KCategorizedSortFilterProxyModel, sourceParent: anytype, sourceFirst: i32, sourceLast: i32, destinationParent: anytype, destinationRow: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.KCategorizedSortFilterProxyModel_SuperBeginMoveRows(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent.ptr), @bitCast(destinationRow));
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
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, sourceParent: QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QModelIndex, destinationRow: i32) callconv(.c) bool `
    ///
    pub fn onBeginMoveRows(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) bool) void {
        qtc.KCategorizedSortFilterProxyModel_OnBeginMoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn endMoveRows(self: KCategorizedSortFilterProxyModel) void {
        qtc.KCategorizedSortFilterProxyModel_EndMoveRows(@ptrCast(self.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn superEndMoveRows(self: KCategorizedSortFilterProxyModel) void {
        qtc.KCategorizedSortFilterProxyModel_SuperEndMoveRows(@ptrCast(self.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEndMoveRows(self: KCategorizedSortFilterProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.KCategorizedSortFilterProxyModel_OnEndMoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn beginInsertColumns(self: KCategorizedSortFilterProxyModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.KCategorizedSortFilterProxyModel_BeginInsertColumns(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn superBeginInsertColumns(self: KCategorizedSortFilterProxyModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.KCategorizedSortFilterProxyModel_SuperBeginInsertColumns(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
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
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onBeginInsertColumns(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.KCategorizedSortFilterProxyModel_OnBeginInsertColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn endInsertColumns(self: KCategorizedSortFilterProxyModel) void {
        qtc.KCategorizedSortFilterProxyModel_EndInsertColumns(@ptrCast(self.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn superEndInsertColumns(self: KCategorizedSortFilterProxyModel) void {
        qtc.KCategorizedSortFilterProxyModel_SuperEndInsertColumns(@ptrCast(self.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEndInsertColumns(self: KCategorizedSortFilterProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.KCategorizedSortFilterProxyModel_OnEndInsertColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn beginRemoveColumns(self: KCategorizedSortFilterProxyModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.KCategorizedSortFilterProxyModel_BeginRemoveColumns(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn superBeginRemoveColumns(self: KCategorizedSortFilterProxyModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.KCategorizedSortFilterProxyModel_SuperBeginRemoveColumns(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
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
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onBeginRemoveColumns(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.KCategorizedSortFilterProxyModel_OnBeginRemoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn endRemoveColumns(self: KCategorizedSortFilterProxyModel) void {
        qtc.KCategorizedSortFilterProxyModel_EndRemoveColumns(@ptrCast(self.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn superEndRemoveColumns(self: KCategorizedSortFilterProxyModel) void {
        qtc.KCategorizedSortFilterProxyModel_SuperEndRemoveColumns(@ptrCast(self.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEndRemoveColumns(self: KCategorizedSortFilterProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.KCategorizedSortFilterProxyModel_OnEndRemoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategorizedSortFilterProxyModel `
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
    pub fn beginMoveColumns(self: KCategorizedSortFilterProxyModel, sourceParent: anytype, sourceFirst: i32, sourceLast: i32, destinationParent: anytype, destinationColumn: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.KCategorizedSortFilterProxyModel_BeginMoveColumns(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent.ptr), @bitCast(destinationColumn));
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
    /// ` self: KCategorizedSortFilterProxyModel `
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
    pub fn superBeginMoveColumns(self: KCategorizedSortFilterProxyModel, sourceParent: anytype, sourceFirst: i32, sourceLast: i32, destinationParent: anytype, destinationColumn: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.KCategorizedSortFilterProxyModel_SuperBeginMoveColumns(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent.ptr), @bitCast(destinationColumn));
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
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, sourceParent: QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QModelIndex, destinationColumn: i32) callconv(.c) bool `
    ///
    pub fn onBeginMoveColumns(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) bool) void {
        qtc.KCategorizedSortFilterProxyModel_OnBeginMoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn endMoveColumns(self: KCategorizedSortFilterProxyModel) void {
        qtc.KCategorizedSortFilterProxyModel_EndMoveColumns(@ptrCast(self.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn superEndMoveColumns(self: KCategorizedSortFilterProxyModel) void {
        qtc.KCategorizedSortFilterProxyModel_SuperEndMoveColumns(@ptrCast(self.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEndMoveColumns(self: KCategorizedSortFilterProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.KCategorizedSortFilterProxyModel_OnEndMoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn beginResetModel(self: KCategorizedSortFilterProxyModel) void {
        qtc.KCategorizedSortFilterProxyModel_BeginResetModel(@ptrCast(self.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn superBeginResetModel(self: KCategorizedSortFilterProxyModel) void {
        qtc.KCategorizedSortFilterProxyModel_SuperBeginResetModel(@ptrCast(self.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onBeginResetModel(self: KCategorizedSortFilterProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.KCategorizedSortFilterProxyModel_OnBeginResetModel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn endResetModel(self: KCategorizedSortFilterProxyModel) void {
        qtc.KCategorizedSortFilterProxyModel_EndResetModel(@ptrCast(self.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn superEndResetModel(self: KCategorizedSortFilterProxyModel) void {
        qtc.KCategorizedSortFilterProxyModel_SuperEndResetModel(@ptrCast(self.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEndResetModel(self: KCategorizedSortFilterProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.KCategorizedSortFilterProxyModel_OnEndResetModel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` from: QModelIndex `
    ///
    /// ` to: QModelIndex `
    ///
    pub fn changePersistentIndex(self: KCategorizedSortFilterProxyModel, from: anytype, to: anytype) void {
        comptime _ = @TypeOf(from)._is_QModelIndex;
        comptime _ = @TypeOf(to)._is_QModelIndex;
        qtc.KCategorizedSortFilterProxyModel_ChangePersistentIndex(@ptrCast(self.ptr), @ptrCast(from.ptr), @ptrCast(to.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` from: QModelIndex `
    ///
    /// ` to: QModelIndex `
    ///
    pub fn superChangePersistentIndex(self: KCategorizedSortFilterProxyModel, from: anytype, to: anytype) void {
        comptime _ = @TypeOf(from)._is_QModelIndex;
        comptime _ = @TypeOf(to)._is_QModelIndex;
        qtc.KCategorizedSortFilterProxyModel_SuperChangePersistentIndex(@ptrCast(self.ptr), @ptrCast(from.ptr), @ptrCast(to.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, from: QModelIndex, to: QModelIndex) callconv(.c) void `
    ///
    pub fn onChangePersistentIndex(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QModelIndex, QModelIndex) callconv(.c) void) void {
        qtc.KCategorizedSortFilterProxyModel_OnChangePersistentIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` from: []QModelIndex `
    ///
    /// ` to: []QModelIndex `
    ///
    pub fn changePersistentIndexList(self: KCategorizedSortFilterProxyModel, from: []QModelIndex, to: []QModelIndex) void {
        const from_list = qtc.libqt_list{
            .len = from.len,
            .data = @ptrCast(from.ptr),
        };
        const to_list = qtc.libqt_list{
            .len = to.len,
            .data = @ptrCast(to.ptr),
        };
        qtc.KCategorizedSortFilterProxyModel_ChangePersistentIndexList(@ptrCast(self.ptr), from_list, to_list);
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` from: []QModelIndex `
    ///
    /// ` to: []QModelIndex `
    ///
    pub fn superChangePersistentIndexList(self: KCategorizedSortFilterProxyModel, from: []QModelIndex, to: []QModelIndex) void {
        const from_list = qtc.libqt_list{
            .len = from.len,
            .data = @ptrCast(from.ptr),
        };
        const to_list = qtc.libqt_list{
            .len = to.len,
            .data = @ptrCast(to.ptr),
        };
        qtc.KCategorizedSortFilterProxyModel_SuperChangePersistentIndexList(@ptrCast(self.ptr), from_list, to_list);
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
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, from: qtc.libqt_list ([]QModelIndex), to: qtc.libqt_list ([]QModelIndex)) callconv(.c) void `
    ///
    pub fn onChangePersistentIndexList(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, qtc.libqt_list, qtc.libqt_list) callconv(.c) void) void {
        qtc.KCategorizedSortFilterProxyModel_OnChangePersistentIndexList(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn persistentIndexList(self: KCategorizedSortFilterProxyModel, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.KCategorizedSortFilterProxyModel_PersistentIndexList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("KCategorizedSortFilterProxyModel.persistentIndexList: Memory allocation failed");
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superPersistentIndexList(self: KCategorizedSortFilterProxyModel, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.KCategorizedSortFilterProxyModel_SuperPersistentIndexList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("KCategorizedSortFilterProxyModel.persistentIndexList: Memory allocation failed");
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
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QModelIndex `
    ///
    pub fn onPersistentIndexList(self: KCategorizedSortFilterProxyModel, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.KCategorizedSortFilterProxyModel_OnPersistentIndexList(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn sender(self: KCategorizedSortFilterProxyModel) QObject {
        return .{ .ptr = qtc.KCategorizedSortFilterProxyModel_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn superSender(self: KCategorizedSortFilterProxyModel) QObject {
        return .{ .ptr = qtc.KCategorizedSortFilterProxyModel_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KCategorizedSortFilterProxyModel, callback: *const fn () callconv(.c) QObject) void {
        qtc.KCategorizedSortFilterProxyModel_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn senderSignalIndex(self: KCategorizedSortFilterProxyModel) i32 {
        return qtc.KCategorizedSortFilterProxyModel_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn superSenderSignalIndex(self: KCategorizedSortFilterProxyModel) i32 {
        return qtc.KCategorizedSortFilterProxyModel_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KCategorizedSortFilterProxyModel, callback: *const fn () callconv(.c) i32) void {
        qtc.KCategorizedSortFilterProxyModel_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KCategorizedSortFilterProxyModel, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KCategorizedSortFilterProxyModel_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KCategorizedSortFilterProxyModel, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KCategorizedSortFilterProxyModel_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, [*:0]const u8) callconv(.c) i32) void {
        qtc.KCategorizedSortFilterProxyModel_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KCategorizedSortFilterProxyModel, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KCategorizedSortFilterProxyModel_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KCategorizedSortFilterProxyModel, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KCategorizedSortFilterProxyModel_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KCategorizedSortFilterProxyModel`
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QMetaMethod) callconv(.c) bool) void {
        qtc.KCategorizedSortFilterProxyModel_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel) callconv(.c) void `
    ///
    pub fn onSourceModelChanged(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel) callconv(.c) void) void {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onRowsAboutToBeInserted(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onRowsInserted(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onRowsAboutToBeRemoved(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onRowsRemoved(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onColumnsAboutToBeInserted(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onColumnsInserted(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onColumnsAboutToBeRemoved(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onColumnsRemoved(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel) callconv(.c) void `
    ///
    pub fn onModelAboutToBeReset(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel) callconv(.c) void) void {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel) callconv(.c) void `
    ///
    pub fn onModelReset(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel) callconv(.c) void) void {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, sourceParent: QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QModelIndex, destinationRow: i32) callconv(.c) void `
    ///
    pub fn onRowsAboutToBeMoved(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) void) void {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, sourceParent: QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QModelIndex, destinationRow: i32) callconv(.c) void `
    ///
    pub fn onRowsMoved(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) void) void {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, sourceParent: QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QModelIndex, destinationColumn: i32) callconv(.c) void `
    ///
    pub fn onColumnsAboutToBeMoved(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) void) void {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, sourceParent: QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QModelIndex, destinationColumn: i32) callconv(.c) void `
    ///
    pub fn onColumnsMoved(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) void) void {
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
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    /// ` callback: *const fn (self: KCategorizedSortFilterProxyModel, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KCategorizedSortFilterProxyModel, callback: *const fn (KCategorizedSortFilterProxyModel, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#dtor.KCategorizedSortFilterProxyModel)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KCategorizedSortFilterProxyModel `
    ///
    pub fn delete(self: KCategorizedSortFilterProxyModel) void {
        qtc.KCategorizedSortFilterProxyModel_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kcategorizedsortfilterproxymodel.html#public-types)
pub const enums = struct {
    pub const AdditionalRoles = enum(i32) {
        pub const CategoryDisplayRole: i32 = 399415562;
        pub const CategorySortRole: i32 = 663060064;
    };
};
