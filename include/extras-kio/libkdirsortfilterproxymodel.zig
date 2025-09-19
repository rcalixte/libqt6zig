const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qabstractitemmodel_enums = @import("../libqabstractitemmodel.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
pub const map_i32_qtcqvariant = std.AutoHashMapUnmanaged(i32, QtC.QVariant);
pub const map_i32_u8 = std.AutoHashMapUnmanaged(i32, []u8);

/// https://api.kde.org/kdirsortfilterproxymodel.html
pub const kdirsortfilterproxymodel = struct {
    /// New constructs a new KDirSortFilterProxyModel object.
    ///
    ///
    pub fn New() QtC.KDirSortFilterProxyModel {
        return qtc.KDirSortFilterProxyModel_new();
    }

    /// New2 constructs a new KDirSortFilterProxyModel object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New2(parent: ?*anyopaque) QtC.KDirSortFilterProxyModel {
        return qtc.KDirSortFilterProxyModel_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KDirSortFilterProxyModel_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KDirSortFilterProxyModel, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KDirSortFilterProxyModel_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KDirSortFilterProxyModel, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KDirSortFilterProxyModel_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.KDirSortFilterProxyModel_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KDirSortFilterProxyModel_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KDirSortFilterProxyModel_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdirsortfilterproxymodel.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kdirsortfilterproxymodel.html#hasChildren)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, parent: QtC.QModelIndex ```
    pub fn HasChildren(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.KDirSortFilterProxyModel_HasChildren(@ptrCast(self), @ptrCast(parent));
    }

    /// [Qt documentation](https://api.kde.org/kdirsortfilterproxymodel.html#hasChildren)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, parent: QtC.QModelIndex) callconv(.c) bool ```
    pub fn OnHasChildren(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KDirSortFilterProxyModel_OnHasChildren(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kdirsortfilterproxymodel.html#hasChildren)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, parent: QtC.QModelIndex ```
    pub fn QBaseHasChildren(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.KDirSortFilterProxyModel_QBaseHasChildren(@ptrCast(self), @ptrCast(parent));
    }

    /// [Qt documentation](https://api.kde.org/kdirsortfilterproxymodel.html#canFetchMore)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, parent: QtC.QModelIndex ```
    pub fn CanFetchMore(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.KDirSortFilterProxyModel_CanFetchMore(@ptrCast(self), @ptrCast(parent));
    }

    /// [Qt documentation](https://api.kde.org/kdirsortfilterproxymodel.html#canFetchMore)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, parent: QtC.QModelIndex) callconv(.c) bool ```
    pub fn OnCanFetchMore(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KDirSortFilterProxyModel_OnCanFetchMore(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kdirsortfilterproxymodel.html#canFetchMore)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, parent: QtC.QModelIndex ```
    pub fn QBaseCanFetchMore(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.KDirSortFilterProxyModel_QBaseCanFetchMore(@ptrCast(self), @ptrCast(parent));
    }

    /// [Qt documentation](https://api.kde.org/kdirsortfilterproxymodel.html#pointsForPermissions)
    ///
    /// ``` info: QtC.QFileInfo ```
    pub fn PointsForPermissions(info: ?*anyopaque) i32 {
        return qtc.KDirSortFilterProxyModel_PointsForPermissions(@ptrCast(info));
    }

    /// [Qt documentation](https://api.kde.org/kdirsortfilterproxymodel.html#setSortFoldersFirst)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, foldersFirst: bool ```
    pub fn SetSortFoldersFirst(self: ?*anyopaque, foldersFirst: bool) void {
        qtc.KDirSortFilterProxyModel_SetSortFoldersFirst(@ptrCast(self), foldersFirst);
    }

    /// [Qt documentation](https://api.kde.org/kdirsortfilterproxymodel.html#sortFoldersFirst)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn SortFoldersFirst(self: ?*anyopaque) bool {
        return qtc.KDirSortFilterProxyModel_SortFoldersFirst(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kdirsortfilterproxymodel.html#setSortHiddenFilesLast)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, hiddenFilesLast: bool ```
    pub fn SetSortHiddenFilesLast(self: ?*anyopaque, hiddenFilesLast: bool) void {
        qtc.KDirSortFilterProxyModel_SetSortHiddenFilesLast(@ptrCast(self), hiddenFilesLast);
    }

    /// [Qt documentation](https://api.kde.org/kdirsortfilterproxymodel.html#sortHiddenFilesLast)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn SortHiddenFilesLast(self: ?*anyopaque) bool {
        return qtc.KDirSortFilterProxyModel_SortHiddenFilesLast(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kdirsortfilterproxymodel.html#supportedDragOptions)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    ///
    /// Returns: ``` flag of qnamespace_enums.DropAction ```
    pub fn SupportedDragOptions(self: ?*anyopaque) i32 {
        return qtc.KDirSortFilterProxyModel_SupportedDragOptions(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kdirsortfilterproxymodel.html#subSortLessThan)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, left: QtC.QModelIndex, right: QtC.QModelIndex ```
    pub fn SubSortLessThan(self: ?*anyopaque, left: ?*anyopaque, right: ?*anyopaque) bool {
        return qtc.KDirSortFilterProxyModel_SubSortLessThan(@ptrCast(self), @ptrCast(left), @ptrCast(right));
    }

    /// [Qt documentation](https://api.kde.org/kdirsortfilterproxymodel.html#subSortLessThan)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, left: QtC.QModelIndex, right: QtC.QModelIndex) callconv(.c) bool ```
    pub fn OnSubSortLessThan(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KDirSortFilterProxyModel_OnSubSortLessThan(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kdirsortfilterproxymodel.html#subSortLessThan)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, left: QtC.QModelIndex, right: QtC.QModelIndex ```
    pub fn QBaseSubSortLessThan(self: ?*anyopaque, left: ?*anyopaque, right: ?*anyopaque) bool {
        return qtc.KDirSortFilterProxyModel_QBaseSubSortLessThan(@ptrCast(self), @ptrCast(left), @ptrCast(right));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KDirSortFilterProxyModel_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdirsortfilterproxymodel.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KDirSortFilterProxyModel_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdirsortfilterproxymodel.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KCategorizedSortFilterProxyModel
    ///
    /// [Qt documentation](https://api.kde.org/kcategorizedsortfilterproxymodel.html#isCategorizedModel)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn IsCategorizedModel(self: ?*anyopaque) bool {
        return qtc.KCategorizedSortFilterProxyModel_IsCategorizedModel(@ptrCast(self));
    }

    /// Inherited from KCategorizedSortFilterProxyModel
    ///
    /// [Qt documentation](https://api.kde.org/kcategorizedsortfilterproxymodel.html#setCategorizedModel)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, categorizedModel: bool ```
    pub fn SetCategorizedModel(self: ?*anyopaque, categorizedModel: bool) void {
        qtc.KCategorizedSortFilterProxyModel_SetCategorizedModel(@ptrCast(self), categorizedModel);
    }

    /// Inherited from KCategorizedSortFilterProxyModel
    ///
    /// [Qt documentation](https://api.kde.org/kcategorizedsortfilterproxymodel.html#sortColumn)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn SortColumn(self: ?*anyopaque) i32 {
        return qtc.KCategorizedSortFilterProxyModel_SortColumn(@ptrCast(self));
    }

    /// Inherited from KCategorizedSortFilterProxyModel
    ///
    /// [Qt documentation](https://api.kde.org/kcategorizedsortfilterproxymodel.html#sortOrder)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    ///
    /// Returns: ``` qnamespace_enums.SortOrder ```
    pub fn SortOrder(self: ?*anyopaque) i32 {
        return qtc.KCategorizedSortFilterProxyModel_SortOrder(@ptrCast(self));
    }

    /// Inherited from KCategorizedSortFilterProxyModel
    ///
    /// [Qt documentation](https://api.kde.org/kcategorizedsortfilterproxymodel.html#setSortCategoriesByNaturalComparison)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, sortCategoriesByNaturalComparison: bool ```
    pub fn SetSortCategoriesByNaturalComparison(self: ?*anyopaque, sortCategoriesByNaturalComparison: bool) void {
        qtc.KCategorizedSortFilterProxyModel_SetSortCategoriesByNaturalComparison(@ptrCast(self), sortCategoriesByNaturalComparison);
    }

    /// Inherited from KCategorizedSortFilterProxyModel
    ///
    /// [Qt documentation](https://api.kde.org/kcategorizedsortfilterproxymodel.html#sortCategoriesByNaturalComparison)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn SortCategoriesByNaturalComparison(self: ?*anyopaque) bool {
        return qtc.KCategorizedSortFilterProxyModel_SortCategoriesByNaturalComparison(@ptrCast(self));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterRegularExpression)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn FilterRegularExpression(self: ?*anyopaque) QtC.QRegularExpression {
        return qtc.QSortFilterProxyModel_FilterRegularExpression(@ptrCast(self));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterKeyColumn)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn FilterKeyColumn(self: ?*anyopaque) i32 {
        return qtc.QSortFilterProxyModel_FilterKeyColumn(@ptrCast(self));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterKeyColumn)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, column: i32 ```
    pub fn SetFilterKeyColumn(self: ?*anyopaque, column: i32) void {
        qtc.QSortFilterProxyModel_SetFilterKeyColumn(@ptrCast(self), @intCast(column));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterCaseSensitivity)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    ///
    /// Returns: ``` qnamespace_enums.CaseSensitivity ```
    pub fn FilterCaseSensitivity(self: ?*anyopaque) i32 {
        return qtc.QSortFilterProxyModel_FilterCaseSensitivity(@ptrCast(self));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterCaseSensitivity)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, cs: qnamespace_enums.CaseSensitivity ```
    pub fn SetFilterCaseSensitivity(self: ?*anyopaque, cs: i32) void {
        qtc.QSortFilterProxyModel_SetFilterCaseSensitivity(@ptrCast(self), @intCast(cs));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortCaseSensitivity)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    ///
    /// Returns: ``` qnamespace_enums.CaseSensitivity ```
    pub fn SortCaseSensitivity(self: ?*anyopaque) i32 {
        return qtc.QSortFilterProxyModel_SortCaseSensitivity(@ptrCast(self));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSortCaseSensitivity)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, cs: qnamespace_enums.CaseSensitivity ```
    pub fn SetSortCaseSensitivity(self: ?*anyopaque, cs: i32) void {
        qtc.QSortFilterProxyModel_SetSortCaseSensitivity(@ptrCast(self), @intCast(cs));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#isSortLocaleAware)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn IsSortLocaleAware(self: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_IsSortLocaleAware(@ptrCast(self));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSortLocaleAware)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, on: bool ```
    pub fn SetSortLocaleAware(self: ?*anyopaque, on: bool) void {
        qtc.QSortFilterProxyModel_SetSortLocaleAware(@ptrCast(self), on);
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dynamicSortFilter)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn DynamicSortFilter(self: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_DynamicSortFilter(@ptrCast(self));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setDynamicSortFilter)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, enable: bool ```
    pub fn SetDynamicSortFilter(self: ?*anyopaque, enable: bool) void {
        qtc.QSortFilterProxyModel_SetDynamicSortFilter(@ptrCast(self), enable);
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortRole)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn SortRole(self: ?*anyopaque) i32 {
        return qtc.QSortFilterProxyModel_SortRole(@ptrCast(self));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSortRole)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, role: i32 ```
    pub fn SetSortRole(self: ?*anyopaque, role: i32) void {
        qtc.QSortFilterProxyModel_SetSortRole(@ptrCast(self), @intCast(role));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterRole)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn FilterRole(self: ?*anyopaque) i32 {
        return qtc.QSortFilterProxyModel_FilterRole(@ptrCast(self));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterRole)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, role: i32 ```
    pub fn SetFilterRole(self: ?*anyopaque, role: i32) void {
        qtc.QSortFilterProxyModel_SetFilterRole(@ptrCast(self), @intCast(role));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#isRecursiveFilteringEnabled)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn IsRecursiveFilteringEnabled(self: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_IsRecursiveFilteringEnabled(@ptrCast(self));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setRecursiveFilteringEnabled)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, recursive: bool ```
    pub fn SetRecursiveFilteringEnabled(self: ?*anyopaque, recursive: bool) void {
        qtc.QSortFilterProxyModel_SetRecursiveFilteringEnabled(@ptrCast(self), recursive);
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#autoAcceptChildRows)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn AutoAcceptChildRows(self: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_AutoAcceptChildRows(@ptrCast(self));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setAutoAcceptChildRows)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, accept: bool ```
    pub fn SetAutoAcceptChildRows(self: ?*anyopaque, accept: bool) void {
        qtc.QSortFilterProxyModel_SetAutoAcceptChildRows(@ptrCast(self), accept);
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterRegularExpression)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, pattern: []const u8 ```
    pub fn SetFilterRegularExpression(self: ?*anyopaque, pattern: []const u8) void {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        qtc.QSortFilterProxyModel_SetFilterRegularExpression(@ptrCast(self), pattern_str);
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterRegularExpression)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, regularExpression: QtC.QRegularExpression ```
    pub fn SetFilterRegularExpression2(self: ?*anyopaque, regularExpression: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_SetFilterRegularExpression2(@ptrCast(self), @ptrCast(regularExpression));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterWildcard)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, pattern: []const u8 ```
    pub fn SetFilterWildcard(self: ?*anyopaque, pattern: []const u8) void {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        qtc.QSortFilterProxyModel_SetFilterWildcard(@ptrCast(self), pattern_str);
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterFixedString)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, pattern: []const u8 ```
    pub fn SetFilterFixedString(self: ?*anyopaque, pattern: []const u8) void {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        qtc.QSortFilterProxyModel_SetFilterFixedString(@ptrCast(self), pattern_str);
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidate)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn Invalidate(self: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_Invalidate(@ptrCast(self));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dynamicSortFilterChanged)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, dynamicSortFilter: bool ```
    pub fn DynamicSortFilterChanged(self: ?*anyopaque, dynamicSortFilter: bool) void {
        qtc.QSortFilterProxyModel_DynamicSortFilterChanged(@ptrCast(self), dynamicSortFilter);
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dynamicSortFilterChanged)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, dynamicSortFilter: bool) callconv(.c) void ```
    pub fn OnDynamicSortFilterChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_DynamicSortFilterChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterCaseSensitivityChanged)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, filterCaseSensitivity: qnamespace_enums.CaseSensitivity ```
    pub fn FilterCaseSensitivityChanged(self: ?*anyopaque, filterCaseSensitivity: i32) void {
        qtc.QSortFilterProxyModel_FilterCaseSensitivityChanged(@ptrCast(self), @intCast(filterCaseSensitivity));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterCaseSensitivityChanged)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, filterCaseSensitivity: qnamespace_enums.CaseSensitivity) callconv(.c) void ```
    pub fn OnFilterCaseSensitivityChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_FilterCaseSensitivityChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortCaseSensitivityChanged)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, sortCaseSensitivity: qnamespace_enums.CaseSensitivity ```
    pub fn SortCaseSensitivityChanged(self: ?*anyopaque, sortCaseSensitivity: i32) void {
        qtc.QSortFilterProxyModel_SortCaseSensitivityChanged(@ptrCast(self), @intCast(sortCaseSensitivity));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortCaseSensitivityChanged)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, sortCaseSensitivity: qnamespace_enums.CaseSensitivity) callconv(.c) void ```
    pub fn OnSortCaseSensitivityChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_SortCaseSensitivityChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortLocaleAwareChanged)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, sortLocaleAware: bool ```
    pub fn SortLocaleAwareChanged(self: ?*anyopaque, sortLocaleAware: bool) void {
        qtc.QSortFilterProxyModel_SortLocaleAwareChanged(@ptrCast(self), sortLocaleAware);
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortLocaleAwareChanged)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, sortLocaleAware: bool) callconv(.c) void ```
    pub fn OnSortLocaleAwareChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_SortLocaleAwareChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortRoleChanged)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, sortRole: i32 ```
    pub fn SortRoleChanged(self: ?*anyopaque, sortRole: i32) void {
        qtc.QSortFilterProxyModel_SortRoleChanged(@ptrCast(self), @intCast(sortRole));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortRoleChanged)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, sortRole: i32) callconv(.c) void ```
    pub fn OnSortRoleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_SortRoleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterRoleChanged)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, filterRole: i32 ```
    pub fn FilterRoleChanged(self: ?*anyopaque, filterRole: i32) void {
        qtc.QSortFilterProxyModel_FilterRoleChanged(@ptrCast(self), @intCast(filterRole));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterRoleChanged)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, filterRole: i32) callconv(.c) void ```
    pub fn OnFilterRoleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_FilterRoleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#recursiveFilteringEnabledChanged)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, recursiveFilteringEnabled: bool ```
    pub fn RecursiveFilteringEnabledChanged(self: ?*anyopaque, recursiveFilteringEnabled: bool) void {
        qtc.QSortFilterProxyModel_RecursiveFilteringEnabledChanged(@ptrCast(self), recursiveFilteringEnabled);
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#recursiveFilteringEnabledChanged)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, recursiveFilteringEnabled: bool) callconv(.c) void ```
    pub fn OnRecursiveFilteringEnabledChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_RecursiveFilteringEnabledChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#autoAcceptChildRowsChanged)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, autoAcceptChildRows: bool ```
    pub fn AutoAcceptChildRowsChanged(self: ?*anyopaque, autoAcceptChildRows: bool) void {
        qtc.QSortFilterProxyModel_AutoAcceptChildRowsChanged(@ptrCast(self), autoAcceptChildRows);
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#autoAcceptChildRowsChanged)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, autoAcceptChildRows: bool) callconv(.c) void ```
    pub fn OnAutoAcceptChildRowsChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_AutoAcceptChildRowsChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#sourceModel)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn SourceModel(self: ?*anyopaque) QtC.QAbstractItemModel {
        return qtc.QAbstractProxyModel_SourceModel(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, row: i32, column: i32 ```
    pub fn HasIndex(self: ?*anyopaque, row: i32, column: i32) bool {
        return qtc.QAbstractItemModel_HasIndex(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, row: i32 ```
    pub fn InsertRow(self: ?*anyopaque, row: i32) bool {
        return qtc.QAbstractItemModel_InsertRow(@ptrCast(self), @intCast(row));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, column: i32 ```
    pub fn InsertColumn(self: ?*anyopaque, column: i32) bool {
        return qtc.QAbstractItemModel_InsertColumn(@ptrCast(self), @intCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, row: i32 ```
    pub fn RemoveRow(self: ?*anyopaque, row: i32) bool {
        return qtc.QAbstractItemModel_RemoveRow(@ptrCast(self), @intCast(row));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, column: i32 ```
    pub fn RemoveColumn(self: ?*anyopaque, column: i32) bool {
        return qtc.QAbstractItemModel_RemoveColumn(@ptrCast(self), @intCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, sourceParent: QtC.QModelIndex, sourceRow: i32, destinationParent: QtC.QModelIndex, destinationChild: i32 ```
    pub fn MoveRow(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceRow: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.QAbstractItemModel_MoveRow(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceRow), @ptrCast(destinationParent), @intCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, sourceParent: QtC.QModelIndex, sourceColumn: i32, destinationParent: QtC.QModelIndex, destinationChild: i32 ```
    pub fn MoveColumn(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceColumn: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.QAbstractItemModel_MoveColumn(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceColumn), @ptrCast(destinationParent), @intCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, index: QtC.QModelIndex ```
    pub fn CheckIndex(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_CheckIndex(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, topLeft: QtC.QModelIndex, bottomRight: QtC.QModelIndex ```
    pub fn DataChanged(self: ?*anyopaque, topLeft: ?*anyopaque, bottomRight: ?*anyopaque) void {
        qtc.QAbstractItemModel_DataChanged(@ptrCast(self), @ptrCast(topLeft), @ptrCast(bottomRight));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, topLeft: QtC.QModelIndex, bottomRight: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnDataChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_DataChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, orientation: qnamespace_enums.Orientation, first: i32, last: i32 ```
    pub fn HeaderDataChanged(self: ?*anyopaque, orientation: i32, first: i32, last: i32) void {
        qtc.QAbstractItemModel_HeaderDataChanged(@ptrCast(self), @intCast(orientation), @intCast(first), @intCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, orientation: qnamespace_enums.Orientation, first: i32, last: i32) callconv(.c) void ```
    pub fn OnHeaderDataChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_HeaderDataChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn LayoutChanged(self: ?*anyopaque) void {
        qtc.QAbstractItemModel_LayoutChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel) callconv(.c) void ```
    pub fn OnLayoutChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn LayoutAboutToBeChanged(self: ?*anyopaque) void {
        qtc.QAbstractItemModel_LayoutAboutToBeChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel) callconv(.c) void ```
    pub fn OnLayoutAboutToBeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutAboutToBeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, row: i32, column: i32, parent: QtC.QModelIndex ```
    pub fn HasIndex3(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_HasIndex3(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, row: i32, parent: QtC.QModelIndex ```
    pub fn InsertRow2(self: ?*anyopaque, row: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_InsertRow2(@ptrCast(self), @intCast(row), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, column: i32, parent: QtC.QModelIndex ```
    pub fn InsertColumn2(self: ?*anyopaque, column: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_InsertColumn2(@ptrCast(self), @intCast(column), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, row: i32, parent: QtC.QModelIndex ```
    pub fn RemoveRow2(self: ?*anyopaque, row: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_RemoveRow2(@ptrCast(self), @intCast(row), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, column: i32, parent: QtC.QModelIndex ```
    pub fn RemoveColumn2(self: ?*anyopaque, column: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_RemoveColumn2(@ptrCast(self), @intCast(column), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, index: QtC.QModelIndex, options: flag of qabstractitemmodel_enums.CheckIndexOption ```
    pub fn CheckIndex2(self: ?*anyopaque, index: ?*anyopaque, options: i32) bool {
        return qtc.QAbstractItemModel_CheckIndex2(@ptrCast(self), @ptrCast(index), @intCast(options));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, topLeft: QtC.QModelIndex, bottomRight: QtC.QModelIndex, roles: []i32 ```
    pub fn DataChanged3(self: ?*anyopaque, topLeft: ?*anyopaque, bottomRight: ?*anyopaque, roles: []i32) void {
        const roles_list = qtc.libqt_list{
            .len = roles.len,
            .data = roles.ptr,
        };
        qtc.QAbstractItemModel_DataChanged3(@ptrCast(self), @ptrCast(topLeft), @ptrCast(bottomRight), roles_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, topLeft: QtC.QModelIndex, bottomRight: QtC.QModelIndex, roles: [*:-1]i32) callconv(.c) void ```
    pub fn OnDataChanged3(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, [*:-1]i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_DataChanged3(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, parents: []QtC.QPersistentModelIndex ```
    pub fn LayoutChanged1(self: ?*anyopaque, parents: []QtC.QPersistentModelIndex) void {
        const parents_list = qtc.libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        qtc.QAbstractItemModel_LayoutChanged1(@ptrCast(self), parents_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, parents: [*]QtC.QPersistentModelIndex) callconv(.c) void ```
    pub fn OnLayoutChanged1(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*]QtC.QPersistentModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutChanged1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, parents: []QtC.QPersistentModelIndex, hint: qabstractitemmodel_enums.LayoutChangeHint ```
    pub fn LayoutChanged2(self: ?*anyopaque, parents: []QtC.QPersistentModelIndex, hint: i32) void {
        const parents_list = qtc.libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        qtc.QAbstractItemModel_LayoutChanged2(@ptrCast(self), parents_list, @intCast(hint));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, parents: [*]QtC.QPersistentModelIndex, hint: qabstractitemmodel_enums.LayoutChangeHint) callconv(.c) void ```
    pub fn OnLayoutChanged2(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*]QtC.QPersistentModelIndex, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutChanged2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, parents: []QtC.QPersistentModelIndex ```
    pub fn LayoutAboutToBeChanged1(self: ?*anyopaque, parents: []QtC.QPersistentModelIndex) void {
        const parents_list = qtc.libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        qtc.QAbstractItemModel_LayoutAboutToBeChanged1(@ptrCast(self), parents_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, parents: [*]QtC.QPersistentModelIndex) callconv(.c) void ```
    pub fn OnLayoutAboutToBeChanged1(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*]QtC.QPersistentModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutAboutToBeChanged1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, parents: []QtC.QPersistentModelIndex, hint: qabstractitemmodel_enums.LayoutChangeHint ```
    pub fn LayoutAboutToBeChanged2(self: ?*anyopaque, parents: []QtC.QPersistentModelIndex, hint: i32) void {
        const parents_list = qtc.libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        qtc.QAbstractItemModel_LayoutAboutToBeChanged2(@ptrCast(self), parents_list, @intCast(hint));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, parents: [*]QtC.QPersistentModelIndex, hint: qabstractitemmodel_enums.LayoutChangeHint) callconv(.c) void ```
    pub fn OnLayoutAboutToBeChanged2(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*]QtC.QPersistentModelIndex, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutAboutToBeChanged2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdirsortfilterproxymodel.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, name: []const u8 ```
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
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("kdirsortfilterproxymodel.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, obj: QtC.QObject ```
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
    /// ``` self: QtC.KDirSortFilterProxyModel, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.KDirSortFilterProxyModel, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KCategorizedSortFilterProxyModel
    ///
    /// [Qt documentation](https://api.kde.org/kcategorizedsortfilterproxymodel.html#sort)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, column: i32, order: qnamespace_enums.SortOrder ```
    pub fn Sort(self: ?*anyopaque, column: i32, order: i32) void {
        qtc.KDirSortFilterProxyModel_Sort(@ptrCast(self), @intCast(column), @intCast(order));
    }

    /// Inherited from KCategorizedSortFilterProxyModel
    ///
    /// [Qt documentation](https://api.kde.org/kcategorizedsortfilterproxymodel.html#sort)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, column: i32, order: qnamespace_enums.SortOrder ```
    pub fn QBaseSort(self: ?*anyopaque, column: i32, order: i32) void {
        qtc.KDirSortFilterProxyModel_QBaseSort(@ptrCast(self), @intCast(column), @intCast(order));
    }

    /// Inherited from KCategorizedSortFilterProxyModel
    ///
    /// [Qt documentation](https://api.kde.org/kcategorizedsortfilterproxymodel.html#sort)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, column: i32, order: qnamespace_enums.SortOrder) callconv(.c) void ```
    pub fn OnSort(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnSort(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KCategorizedSortFilterProxyModel
    ///
    /// [Qt documentation](https://api.kde.org/kcategorizedsortfilterproxymodel.html#lessThan)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, left: QtC.QModelIndex, right: QtC.QModelIndex ```
    pub fn LessThan(self: ?*anyopaque, left: ?*anyopaque, right: ?*anyopaque) bool {
        return qtc.KDirSortFilterProxyModel_LessThan(@ptrCast(self), @ptrCast(left), @ptrCast(right));
    }

    /// Inherited from KCategorizedSortFilterProxyModel
    ///
    /// [Qt documentation](https://api.kde.org/kcategorizedsortfilterproxymodel.html#lessThan)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, left: QtC.QModelIndex, right: QtC.QModelIndex ```
    pub fn QBaseLessThan(self: ?*anyopaque, left: ?*anyopaque, right: ?*anyopaque) bool {
        return qtc.KDirSortFilterProxyModel_QBaseLessThan(@ptrCast(self), @ptrCast(left), @ptrCast(right));
    }

    /// Inherited from KCategorizedSortFilterProxyModel
    ///
    /// [Qt documentation](https://api.kde.org/kcategorizedsortfilterproxymodel.html#lessThan)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, left: QtC.QModelIndex, right: QtC.QModelIndex) callconv(.c) bool ```
    pub fn OnLessThan(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KDirSortFilterProxyModel_OnLessThan(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from KCategorizedSortFilterProxyModel
    ///
    /// [Qt documentation](https://api.kde.org/kcategorizedsortfilterproxymodel.html#compareCategories)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, left: QtC.QModelIndex, right: QtC.QModelIndex ```
    pub fn CompareCategories(self: ?*anyopaque, left: ?*anyopaque, right: ?*anyopaque) i32 {
        return qtc.KDirSortFilterProxyModel_CompareCategories(@ptrCast(self), @ptrCast(left), @ptrCast(right));
    }

    /// Inherited from KCategorizedSortFilterProxyModel
    ///
    /// [Qt documentation](https://api.kde.org/kcategorizedsortfilterproxymodel.html#compareCategories)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, left: QtC.QModelIndex, right: QtC.QModelIndex ```
    pub fn QBaseCompareCategories(self: ?*anyopaque, left: ?*anyopaque, right: ?*anyopaque) i32 {
        return qtc.KDirSortFilterProxyModel_QBaseCompareCategories(@ptrCast(self), @ptrCast(left), @ptrCast(right));
    }

    /// Inherited from KCategorizedSortFilterProxyModel
    ///
    /// [Qt documentation](https://api.kde.org/kcategorizedsortfilterproxymodel.html#compareCategories)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, left: QtC.QModelIndex, right: QtC.QModelIndex) callconv(.c) i32 ```
    pub fn OnCompareCategories(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.KDirSortFilterProxyModel_OnCompareCategories(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSourceModel)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, sourceModel: QtC.QAbstractItemModel ```
    pub fn SetSourceModel(self: ?*anyopaque, sourceModel: ?*anyopaque) void {
        qtc.KDirSortFilterProxyModel_SetSourceModel(@ptrCast(self), @ptrCast(sourceModel));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSourceModel)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, sourceModel: QtC.QAbstractItemModel ```
    pub fn QBaseSetSourceModel(self: ?*anyopaque, sourceModel: ?*anyopaque) void {
        qtc.KDirSortFilterProxyModel_QBaseSetSourceModel(@ptrCast(self), @ptrCast(sourceModel));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSourceModel)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, sourceModel: QtC.QAbstractItemModel) callconv(.c) void ```
    pub fn OnSetSourceModel(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnSetSourceModel(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapToSource)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, proxyIndex: QtC.QModelIndex ```
    pub fn MapToSource(self: ?*anyopaque, proxyIndex: ?*anyopaque) QtC.QModelIndex {
        return qtc.KDirSortFilterProxyModel_MapToSource(@ptrCast(self), @ptrCast(proxyIndex));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapToSource)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, proxyIndex: QtC.QModelIndex ```
    pub fn QBaseMapToSource(self: ?*anyopaque, proxyIndex: ?*anyopaque) QtC.QModelIndex {
        return qtc.KDirSortFilterProxyModel_QBaseMapToSource(@ptrCast(self), @ptrCast(proxyIndex));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapToSource)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, proxyIndex: QtC.QModelIndex) callconv(.c) QtC.QModelIndex ```
    pub fn OnMapToSource(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.KDirSortFilterProxyModel_OnMapToSource(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapFromSource)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, sourceIndex: QtC.QModelIndex ```
    pub fn MapFromSource(self: ?*anyopaque, sourceIndex: ?*anyopaque) QtC.QModelIndex {
        return qtc.KDirSortFilterProxyModel_MapFromSource(@ptrCast(self), @ptrCast(sourceIndex));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapFromSource)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, sourceIndex: QtC.QModelIndex ```
    pub fn QBaseMapFromSource(self: ?*anyopaque, sourceIndex: ?*anyopaque) QtC.QModelIndex {
        return qtc.KDirSortFilterProxyModel_QBaseMapFromSource(@ptrCast(self), @ptrCast(sourceIndex));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapFromSource)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, sourceIndex: QtC.QModelIndex) callconv(.c) QtC.QModelIndex ```
    pub fn OnMapFromSource(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.KDirSortFilterProxyModel_OnMapFromSource(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionToSource)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, proxySelection: QtC.QItemSelection ```
    pub fn MapSelectionToSource(self: ?*anyopaque, proxySelection: ?*anyopaque) QtC.QItemSelection {
        return qtc.KDirSortFilterProxyModel_MapSelectionToSource(@ptrCast(self), @ptrCast(proxySelection));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionToSource)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, proxySelection: QtC.QItemSelection ```
    pub fn QBaseMapSelectionToSource(self: ?*anyopaque, proxySelection: ?*anyopaque) QtC.QItemSelection {
        return qtc.KDirSortFilterProxyModel_QBaseMapSelectionToSource(@ptrCast(self), @ptrCast(proxySelection));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionToSource)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, proxySelection: QtC.QItemSelection) callconv(.c) QtC.QItemSelection ```
    pub fn OnMapSelectionToSource(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QItemSelection) void {
        qtc.KDirSortFilterProxyModel_OnMapSelectionToSource(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionFromSource)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, sourceSelection: QtC.QItemSelection ```
    pub fn MapSelectionFromSource(self: ?*anyopaque, sourceSelection: ?*anyopaque) QtC.QItemSelection {
        return qtc.KDirSortFilterProxyModel_MapSelectionFromSource(@ptrCast(self), @ptrCast(sourceSelection));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionFromSource)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, sourceSelection: QtC.QItemSelection ```
    pub fn QBaseMapSelectionFromSource(self: ?*anyopaque, sourceSelection: ?*anyopaque) QtC.QItemSelection {
        return qtc.KDirSortFilterProxyModel_QBaseMapSelectionFromSource(@ptrCast(self), @ptrCast(sourceSelection));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionFromSource)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, sourceSelection: QtC.QItemSelection) callconv(.c) QtC.QItemSelection ```
    pub fn OnMapSelectionFromSource(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QItemSelection) void {
        qtc.KDirSortFilterProxyModel_OnMapSelectionFromSource(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsRow)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, source_row: i32, source_parent: QtC.QModelIndex ```
    pub fn FilterAcceptsRow(self: ?*anyopaque, source_row: i32, source_parent: ?*anyopaque) bool {
        return qtc.KDirSortFilterProxyModel_FilterAcceptsRow(@ptrCast(self), @intCast(source_row), @ptrCast(source_parent));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsRow)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, source_row: i32, source_parent: QtC.QModelIndex ```
    pub fn QBaseFilterAcceptsRow(self: ?*anyopaque, source_row: i32, source_parent: ?*anyopaque) bool {
        return qtc.KDirSortFilterProxyModel_QBaseFilterAcceptsRow(@ptrCast(self), @intCast(source_row), @ptrCast(source_parent));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsRow)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, source_row: i32, source_parent: QtC.QModelIndex) callconv(.c) bool ```
    pub fn OnFilterAcceptsRow(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.KDirSortFilterProxyModel_OnFilterAcceptsRow(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsColumn)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, source_column: i32, source_parent: QtC.QModelIndex ```
    pub fn FilterAcceptsColumn(self: ?*anyopaque, source_column: i32, source_parent: ?*anyopaque) bool {
        return qtc.KDirSortFilterProxyModel_FilterAcceptsColumn(@ptrCast(self), @intCast(source_column), @ptrCast(source_parent));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsColumn)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, source_column: i32, source_parent: QtC.QModelIndex ```
    pub fn QBaseFilterAcceptsColumn(self: ?*anyopaque, source_column: i32, source_parent: ?*anyopaque) bool {
        return qtc.KDirSortFilterProxyModel_QBaseFilterAcceptsColumn(@ptrCast(self), @intCast(source_column), @ptrCast(source_parent));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsColumn)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, source_column: i32, source_parent: QtC.QModelIndex) callconv(.c) bool ```
    pub fn OnFilterAcceptsColumn(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.KDirSortFilterProxyModel_OnFilterAcceptsColumn(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#index)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, row: i32, column: i32, parent: QtC.QModelIndex ```
    pub fn Index(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque) QtC.QModelIndex {
        return qtc.KDirSortFilterProxyModel_Index(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(parent));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#index)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, row: i32, column: i32, parent: QtC.QModelIndex ```
    pub fn QBaseIndex(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque) QtC.QModelIndex {
        return qtc.KDirSortFilterProxyModel_QBaseIndex(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(parent));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#index)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, row: i32, column: i32, parent: QtC.QModelIndex) callconv(.c) QtC.QModelIndex ```
    pub fn OnIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.KDirSortFilterProxyModel_OnIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#parent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, child: QtC.QModelIndex ```
    pub fn Parent(self: ?*anyopaque, child: ?*anyopaque) QtC.QModelIndex {
        return qtc.KDirSortFilterProxyModel_Parent(@ptrCast(self), @ptrCast(child));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#parent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, child: QtC.QModelIndex ```
    pub fn QBaseParent(self: ?*anyopaque, child: ?*anyopaque) QtC.QModelIndex {
        return qtc.KDirSortFilterProxyModel_QBaseParent(@ptrCast(self), @ptrCast(child));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#parent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, child: QtC.QModelIndex) callconv(.c) QtC.QModelIndex ```
    pub fn OnParent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.KDirSortFilterProxyModel_OnParent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sibling)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, row: i32, column: i32, idx: QtC.QModelIndex ```
    pub fn Sibling(self: ?*anyopaque, row: i32, column: i32, idx: ?*anyopaque) QtC.QModelIndex {
        return qtc.KDirSortFilterProxyModel_Sibling(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(idx));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sibling)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, row: i32, column: i32, idx: QtC.QModelIndex ```
    pub fn QBaseSibling(self: ?*anyopaque, row: i32, column: i32, idx: ?*anyopaque) QtC.QModelIndex {
        return qtc.KDirSortFilterProxyModel_QBaseSibling(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(idx));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sibling)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, row: i32, column: i32, idx: QtC.QModelIndex) callconv(.c) QtC.QModelIndex ```
    pub fn OnSibling(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.KDirSortFilterProxyModel_OnSibling(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#rowCount)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, parent: QtC.QModelIndex ```
    pub fn RowCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.KDirSortFilterProxyModel_RowCount(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#rowCount)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, parent: QtC.QModelIndex ```
    pub fn QBaseRowCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.KDirSortFilterProxyModel_QBaseRowCount(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#rowCount)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, parent: QtC.QModelIndex) callconv(.c) i32 ```
    pub fn OnRowCount(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.KDirSortFilterProxyModel_OnRowCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#columnCount)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, parent: QtC.QModelIndex ```
    pub fn ColumnCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.KDirSortFilterProxyModel_ColumnCount(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#columnCount)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, parent: QtC.QModelIndex ```
    pub fn QBaseColumnCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.KDirSortFilterProxyModel_QBaseColumnCount(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#columnCount)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, parent: QtC.QModelIndex) callconv(.c) i32 ```
    pub fn OnColumnCount(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.KDirSortFilterProxyModel_OnColumnCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#data)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, index: QtC.QModelIndex, role: i32 ```
    pub fn Data(self: ?*anyopaque, index: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.KDirSortFilterProxyModel_Data(@ptrCast(self), @ptrCast(index), @intCast(role));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#data)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, index: QtC.QModelIndex, role: i32 ```
    pub fn QBaseData(self: ?*anyopaque, index: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.KDirSortFilterProxyModel_QBaseData(@ptrCast(self), @ptrCast(index), @intCast(role));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#data)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, index: QtC.QModelIndex, role: i32) callconv(.c) QtC.QVariant ```
    pub fn OnData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) QtC.QVariant) void {
        qtc.KDirSortFilterProxyModel_OnData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, index: QtC.QModelIndex, value: QtC.QVariant, role: i32 ```
    pub fn SetData(self: ?*anyopaque, index: ?*anyopaque, value: ?*anyopaque, role: i32) bool {
        return qtc.KDirSortFilterProxyModel_SetData(@ptrCast(self), @ptrCast(index), @ptrCast(value), @intCast(role));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, index: QtC.QModelIndex, value: QtC.QVariant, role: i32 ```
    pub fn QBaseSetData(self: ?*anyopaque, index: ?*anyopaque, value: ?*anyopaque, role: i32) bool {
        return qtc.KDirSortFilterProxyModel_QBaseSetData(@ptrCast(self), @ptrCast(index), @ptrCast(value), @intCast(role));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, index: QtC.QModelIndex, value: QtC.QVariant, role: i32) callconv(.c) bool ```
    pub fn OnSetData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.KDirSortFilterProxyModel_OnSetData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#headerData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, section: i32, orientation: qnamespace_enums.Orientation, role: i32 ```
    pub fn HeaderData(self: ?*anyopaque, section: i32, orientation: i32, role: i32) QtC.QVariant {
        return qtc.KDirSortFilterProxyModel_HeaderData(@ptrCast(self), @intCast(section), @intCast(orientation), @intCast(role));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#headerData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, section: i32, orientation: qnamespace_enums.Orientation, role: i32 ```
    pub fn QBaseHeaderData(self: ?*anyopaque, section: i32, orientation: i32, role: i32) QtC.QVariant {
        return qtc.KDirSortFilterProxyModel_QBaseHeaderData(@ptrCast(self), @intCast(section), @intCast(orientation), @intCast(role));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#headerData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, section: i32, orientation: qnamespace_enums.Orientation, role: i32) callconv(.c) QtC.QVariant ```
    pub fn OnHeaderData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, i32) callconv(.c) QtC.QVariant) void {
        qtc.KDirSortFilterProxyModel_OnHeaderData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setHeaderData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, section: i32, orientation: qnamespace_enums.Orientation, value: QtC.QVariant, role: i32 ```
    pub fn SetHeaderData(self: ?*anyopaque, section: i32, orientation: i32, value: ?*anyopaque, role: i32) bool {
        return qtc.KDirSortFilterProxyModel_SetHeaderData(@ptrCast(self), @intCast(section), @intCast(orientation), @ptrCast(value), @intCast(role));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setHeaderData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, section: i32, orientation: qnamespace_enums.Orientation, value: QtC.QVariant, role: i32 ```
    pub fn QBaseSetHeaderData(self: ?*anyopaque, section: i32, orientation: i32, value: ?*anyopaque, role: i32) bool {
        return qtc.KDirSortFilterProxyModel_QBaseSetHeaderData(@ptrCast(self), @intCast(section), @intCast(orientation), @ptrCast(value), @intCast(role));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setHeaderData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, section: i32, orientation: qnamespace_enums.Orientation, value: QtC.QVariant, role: i32) callconv(.c) bool ```
    pub fn OnSetHeaderData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.KDirSortFilterProxyModel_OnSetHeaderData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, indexes: []QtC.QModelIndex ```
    pub fn MimeData(self: ?*anyopaque, indexes: []QtC.QModelIndex) QtC.QMimeData {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        return qtc.KDirSortFilterProxyModel_MimeData(@ptrCast(self), indexes_list);
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, indexes: []QtC.QModelIndex ```
    pub fn QBaseMimeData(self: ?*anyopaque, indexes: []QtC.QModelIndex) QtC.QMimeData {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        return qtc.KDirSortFilterProxyModel_QBaseMimeData(@ptrCast(self), indexes_list);
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, indexes: [*]QtC.QModelIndex) callconv(.c) QtC.QMimeData ```
    pub fn OnMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*]QtC.QModelIndex) callconv(.c) QtC.QMimeData) void {
        qtc.KDirSortFilterProxyModel_OnMimeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dropMimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, data: QtC.QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QtC.QModelIndex ```
    pub fn DropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.KDirSortFilterProxyModel_DropMimeData(@ptrCast(self), @ptrCast(data), @intCast(action), @intCast(row), @intCast(column), @ptrCast(parent));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dropMimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, data: QtC.QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QtC.QModelIndex ```
    pub fn QBaseDropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.KDirSortFilterProxyModel_QBaseDropMimeData(@ptrCast(self), @ptrCast(data), @intCast(action), @intCast(row), @intCast(column), @ptrCast(parent));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dropMimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, data: QtC.QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QtC.QModelIndex) callconv(.c) bool ```
    pub fn OnDropMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.KDirSortFilterProxyModel_OnDropMimeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, row: i32, count: i32, parent: QtC.QModelIndex ```
    pub fn InsertRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.KDirSortFilterProxyModel_InsertRows(@ptrCast(self), @intCast(row), @intCast(count), @ptrCast(parent));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, row: i32, count: i32, parent: QtC.QModelIndex ```
    pub fn QBaseInsertRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.KDirSortFilterProxyModel_QBaseInsertRows(@ptrCast(self), @intCast(row), @intCast(count), @ptrCast(parent));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, row: i32, count: i32, parent: QtC.QModelIndex) callconv(.c) bool ```
    pub fn OnInsertRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.KDirSortFilterProxyModel_OnInsertRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, column: i32, count: i32, parent: QtC.QModelIndex ```
    pub fn InsertColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.KDirSortFilterProxyModel_InsertColumns(@ptrCast(self), @intCast(column), @intCast(count), @ptrCast(parent));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, column: i32, count: i32, parent: QtC.QModelIndex ```
    pub fn QBaseInsertColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.KDirSortFilterProxyModel_QBaseInsertColumns(@ptrCast(self), @intCast(column), @intCast(count), @ptrCast(parent));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, column: i32, count: i32, parent: QtC.QModelIndex) callconv(.c) bool ```
    pub fn OnInsertColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.KDirSortFilterProxyModel_OnInsertColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, row: i32, count: i32, parent: QtC.QModelIndex ```
    pub fn RemoveRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.KDirSortFilterProxyModel_RemoveRows(@ptrCast(self), @intCast(row), @intCast(count), @ptrCast(parent));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, row: i32, count: i32, parent: QtC.QModelIndex ```
    pub fn QBaseRemoveRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.KDirSortFilterProxyModel_QBaseRemoveRows(@ptrCast(self), @intCast(row), @intCast(count), @ptrCast(parent));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, row: i32, count: i32, parent: QtC.QModelIndex) callconv(.c) bool ```
    pub fn OnRemoveRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.KDirSortFilterProxyModel_OnRemoveRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, column: i32, count: i32, parent: QtC.QModelIndex ```
    pub fn RemoveColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.KDirSortFilterProxyModel_RemoveColumns(@ptrCast(self), @intCast(column), @intCast(count), @ptrCast(parent));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, column: i32, count: i32, parent: QtC.QModelIndex ```
    pub fn QBaseRemoveColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.KDirSortFilterProxyModel_QBaseRemoveColumns(@ptrCast(self), @intCast(column), @intCast(count), @ptrCast(parent));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, column: i32, count: i32, parent: QtC.QModelIndex) callconv(.c) bool ```
    pub fn OnRemoveColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.KDirSortFilterProxyModel_OnRemoveColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#fetchMore)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, parent: QtC.QModelIndex ```
    pub fn FetchMore(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.KDirSortFilterProxyModel_FetchMore(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#fetchMore)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, parent: QtC.QModelIndex ```
    pub fn QBaseFetchMore(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.KDirSortFilterProxyModel_QBaseFetchMore(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#fetchMore)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, parent: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnFetchMore(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnFetchMore(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#flags)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, index: QtC.QModelIndex ```
    ///
    /// Returns: ``` flag of qnamespace_enums.ItemFlag ```
    pub fn Flags(self: ?*anyopaque, index: ?*anyopaque) i32 {
        return qtc.KDirSortFilterProxyModel_Flags(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#flags)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, index: QtC.QModelIndex ```
    ///
    /// Returns: ``` flag of qnamespace_enums.ItemFlag ```
    pub fn QBaseFlags(self: ?*anyopaque, index: ?*anyopaque) i32 {
        return qtc.KDirSortFilterProxyModel_QBaseFlags(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#flags)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, index: QtC.QModelIndex) callconv(.c) i32 ```
    pub fn OnFlags(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.KDirSortFilterProxyModel_OnFlags(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#buddy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, index: QtC.QModelIndex ```
    pub fn Buddy(self: ?*anyopaque, index: ?*anyopaque) QtC.QModelIndex {
        return qtc.KDirSortFilterProxyModel_Buddy(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#buddy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, index: QtC.QModelIndex ```
    pub fn QBaseBuddy(self: ?*anyopaque, index: ?*anyopaque) QtC.QModelIndex {
        return qtc.KDirSortFilterProxyModel_QBaseBuddy(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#buddy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, index: QtC.QModelIndex) callconv(.c) QtC.QModelIndex ```
    pub fn OnBuddy(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.KDirSortFilterProxyModel_OnBuddy(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#match)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, start: QtC.QModelIndex, role: i32, value: QtC.QVariant, hits: i32, flags: flag of qnamespace_enums.MatchFlag, allocator: std.mem.Allocator ```
    pub fn Match(self: ?*anyopaque, start: ?*anyopaque, role: i32, value: ?*anyopaque, hits: i32, flags: i32, allocator: std.mem.Allocator) []QtC.QModelIndex {
        const _arr: qtc.libqt_list = qtc.KDirSortFilterProxyModel_Match(@ptrCast(self), @ptrCast(start), @intCast(role), @ptrCast(value), @intCast(hits), @intCast(flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QModelIndex, _arr.len) catch @panic("kdirsortfilterproxymodel.Match: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#match)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, start: QtC.QModelIndex, role: i32, value: QtC.QVariant, hits: i32, flags: flag of qnamespace_enums.MatchFlag, allocator: std.mem.Allocator ```
    pub fn QBaseMatch(self: ?*anyopaque, start: ?*anyopaque, role: i32, value: ?*anyopaque, hits: i32, flags: i32, allocator: std.mem.Allocator) []QtC.QModelIndex {
        const _arr: qtc.libqt_list = qtc.KDirSortFilterProxyModel_QBaseMatch(@ptrCast(self), @ptrCast(start), @intCast(role), @ptrCast(value), @intCast(hits), @intCast(flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QModelIndex, _arr.len) catch @panic("kdirsortfilterproxymodel.Match: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#match)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, start: QtC.QModelIndex, role: i32, value: QtC.QVariant, hits: i32, flags: flag of qnamespace_enums.MatchFlag) callconv(.c) [*:null]QtC.QModelIndex ```
    pub fn OnMatch(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, ?*anyopaque, i32, i32) callconv(.c) [*:null]QtC.QModelIndex) void {
        qtc.KDirSortFilterProxyModel_OnMatch(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#span)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, index: QtC.QModelIndex ```
    pub fn Span(self: ?*anyopaque, index: ?*anyopaque) QtC.QSize {
        return qtc.KDirSortFilterProxyModel_Span(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#span)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, index: QtC.QModelIndex ```
    pub fn QBaseSpan(self: ?*anyopaque, index: ?*anyopaque) QtC.QSize {
        return qtc.KDirSortFilterProxyModel_QBaseSpan(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#span)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, index: QtC.QModelIndex) callconv(.c) QtC.QSize ```
    pub fn OnSpan(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.KDirSortFilterProxyModel_OnSpan(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeTypes)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, allocator: std.mem.Allocator ```
    pub fn MimeTypes(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KDirSortFilterProxyModel_MimeTypes(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeTypes)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, allocator: std.mem.Allocator ```
    pub fn QBaseMimeTypes(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KDirSortFilterProxyModel_QBaseMimeTypes(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeTypes)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn () callconv(.c) [*][*:0]const u8 ```
    pub fn OnMimeTypes(self: ?*anyopaque, callback: *const fn () callconv(.c) [*][*:0]const u8) void {
        qtc.KDirSortFilterProxyModel_OnMimeTypes(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#supportedDropActions)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    ///
    /// Returns: ``` flag of qnamespace_enums.DropAction ```
    pub fn SupportedDropActions(self: ?*anyopaque) i32 {
        return qtc.KDirSortFilterProxyModel_SupportedDropActions(@ptrCast(self));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#supportedDropActions)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    ///
    /// Returns: ``` flag of qnamespace_enums.DropAction ```
    pub fn QBaseSupportedDropActions(self: ?*anyopaque) i32 {
        return qtc.KDirSortFilterProxyModel_QBaseSupportedDropActions(@ptrCast(self));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#supportedDropActions)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSupportedDropActions(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KDirSortFilterProxyModel_OnSupportedDropActions(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn Submit(self: ?*anyopaque) bool {
        return qtc.KDirSortFilterProxyModel_Submit(@ptrCast(self));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn QBaseSubmit(self: ?*anyopaque) bool {
        return qtc.KDirSortFilterProxyModel_QBaseSubmit(@ptrCast(self));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn () callconv(.c) bool ```
    pub fn OnSubmit(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KDirSortFilterProxyModel_OnSubmit(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn Revert(self: ?*anyopaque) void {
        qtc.KDirSortFilterProxyModel_Revert(@ptrCast(self));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn QBaseRevert(self: ?*anyopaque) void {
        qtc.KDirSortFilterProxyModel_QBaseRevert(@ptrCast(self));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn () callconv(.c) void ```
    pub fn OnRevert(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnRevert(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, index: QtC.QModelIndex, allocator: std.mem.Allocator ```
    pub fn ItemData(self: ?*anyopaque, index: ?*anyopaque, allocator: std.mem.Allocator) map_i32_qtcqvariant {
        const _map: qtc.libqt_map = qtc.KDirSortFilterProxyModel_ItemData(@ptrCast(self), @ptrCast(index));
        var _ret: map_i32_qtcqvariant = .empty;
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
            _ret.put(allocator, _key, _value) catch @panic("kdirsortfilterproxymodel.ItemData: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, index: QtC.QModelIndex, allocator: std.mem.Allocator ```
    pub fn QBaseItemData(self: ?*anyopaque, index: ?*anyopaque, allocator: std.mem.Allocator) map_i32_qtcqvariant {
        const _map: qtc.libqt_map = qtc.KDirSortFilterProxyModel_QBaseItemData(@ptrCast(self), @ptrCast(index));
        var _ret: map_i32_qtcqvariant = .empty;
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
            _ret.put(allocator, _key, _value) catch @panic("kdirsortfilterproxymodel.ItemData: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, index: QtC.QModelIndex) callconv(.c) map_i32_qtcqvariant ```
    pub fn OnItemData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) map_i32_qtcqvariant) void {
        qtc.KDirSortFilterProxyModel_OnItemData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, index: QtC.QModelIndex, roles: map_i32_qtcqvariant, allocator: std.mem.Allocator ```
    pub fn SetItemData(self: ?*anyopaque, index: ?*anyopaque, roles: map_i32_qtcqvariant, allocator: std.mem.Allocator) bool {
        const roles_keys = allocator.alloc(i32, roles.count()) catch @panic("kdirsortfilterproxymodel.SetItemData: Memory allocation failed");
        defer allocator.free(roles_keys);
        const roles_values = allocator.alloc(QtC.QVariant, roles.count()) catch @panic("kdirsortfilterproxymodel.SetItemData: Memory allocation failed");
        defer allocator.free(roles_values);
        var i: usize = 0;
        var roles_it = roles.iterator();
        while (roles_it.next()) |entry| {
            const key = entry.key_ptr.*;
            roles_keys[i] = @intCast(key);
            roles_values[i] = entry.value_ptr.*;
            i += 1;
        }
        const roles_map = qtc.libqt_map{
            .len = roles.count(),
            .keys = @ptrCast(roles_keys.ptr),
            .values = @ptrCast(roles_values.ptr),
        };
        return qtc.KDirSortFilterProxyModel_SetItemData(@ptrCast(self), @ptrCast(index), roles_map);
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, index: QtC.QModelIndex, roles: map_i32_qtcqvariant, allocator: std.mem.Allocator ```
    pub fn QBaseSetItemData(self: ?*anyopaque, index: ?*anyopaque, roles: map_i32_qtcqvariant, allocator: std.mem.Allocator) bool {
        const roles_keys = allocator.alloc(i32, roles.count()) catch @panic("kdirsortfilterproxymodel.SetItemData: Memory allocation failed");
        defer allocator.free(roles_keys);
        const roles_values = allocator.alloc(QtC.QVariant, roles.count()) catch @panic("kdirsortfilterproxymodel.SetItemData: Memory allocation failed");
        defer allocator.free(roles_values);
        var i: usize = 0;
        var roles_it = roles.iterator();
        while (roles_it.next()) |entry| {
            const key = entry.key_ptr.*;
            roles_keys[i] = @intCast(key);
            roles_values[i] = entry.value_ptr.*;
            i += 1;
        }
        const roles_map = qtc.libqt_map{
            .len = roles.count(),
            .keys = @ptrCast(roles_keys.ptr),
            .values = @ptrCast(roles_values.ptr),
        };
        return qtc.KDirSortFilterProxyModel_QBaseSetItemData(@ptrCast(self), @ptrCast(index), roles_map);
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, index: QtC.QModelIndex, roles: map_i32_qtcqvariant) callconv(.c) bool ```
    pub fn OnSetItemData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, map_i32_qtcqvariant) callconv(.c) bool) void {
        qtc.KDirSortFilterProxyModel_OnSetItemData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, index: QtC.QModelIndex ```
    pub fn ClearItemData(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.KDirSortFilterProxyModel_ClearItemData(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, index: QtC.QModelIndex ```
    pub fn QBaseClearItemData(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.KDirSortFilterProxyModel_QBaseClearItemData(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, index: QtC.QModelIndex) callconv(.c) bool ```
    pub fn OnClearItemData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KDirSortFilterProxyModel_OnClearItemData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, data: QtC.QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QtC.QModelIndex ```
    pub fn CanDropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.KDirSortFilterProxyModel_CanDropMimeData(@ptrCast(self), @ptrCast(data), @intCast(action), @intCast(row), @intCast(column), @ptrCast(parent));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, data: QtC.QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QtC.QModelIndex ```
    pub fn QBaseCanDropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.KDirSortFilterProxyModel_QBaseCanDropMimeData(@ptrCast(self), @ptrCast(data), @intCast(action), @intCast(row), @intCast(column), @ptrCast(parent));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, data: QtC.QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QtC.QModelIndex) callconv(.c) bool ```
    pub fn OnCanDropMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.KDirSortFilterProxyModel_OnCanDropMimeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    ///
    /// Returns: ``` flag of qnamespace_enums.DropAction ```
    pub fn SupportedDragActions(self: ?*anyopaque) i32 {
        return qtc.KDirSortFilterProxyModel_SupportedDragActions(@ptrCast(self));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    ///
    /// Returns: ``` flag of qnamespace_enums.DropAction ```
    pub fn QBaseSupportedDragActions(self: ?*anyopaque) i32 {
        return qtc.KDirSortFilterProxyModel_QBaseSupportedDragActions(@ptrCast(self));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSupportedDragActions(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KDirSortFilterProxyModel_OnSupportedDragActions(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, allocator: std.mem.Allocator ```
    pub fn RoleNames(self: ?*anyopaque, allocator: std.mem.Allocator) map_i32_u8 {
        const _map: qtc.libqt_map = qtc.KDirSortFilterProxyModel_RoleNames(@ptrCast(self));
        var _ret: map_i32_u8 = .empty;
        defer {
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*][]u8 = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            _ret.put(allocator, _key, _value) catch @panic("kdirsortfilterproxymodel.RoleNames: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, allocator: std.mem.Allocator ```
    pub fn QBaseRoleNames(self: ?*anyopaque, allocator: std.mem.Allocator) map_i32_u8 {
        const _map: qtc.libqt_map = qtc.KDirSortFilterProxyModel_QBaseRoleNames(@ptrCast(self));
        var _ret: map_i32_u8 = .empty;
        defer {
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*][]u8 = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            _ret.put(allocator, _key, _value) catch @panic("kdirsortfilterproxymodel.RoleNames: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn () callconv(.c) map_i32_u8 ```
    pub fn OnRoleNames(self: ?*anyopaque, callback: *const fn () callconv(.c) map_i32_u8) void {
        qtc.KDirSortFilterProxyModel_OnRoleNames(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, sourceParent: QtC.QModelIndex, sourceRow: i32, count: i32, destinationParent: QtC.QModelIndex, destinationChild: i32 ```
    pub fn MoveRows(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceRow: i32, count: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.KDirSortFilterProxyModel_MoveRows(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceRow), @intCast(count), @ptrCast(destinationParent), @intCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, sourceParent: QtC.QModelIndex, sourceRow: i32, count: i32, destinationParent: QtC.QModelIndex, destinationChild: i32 ```
    pub fn QBaseMoveRows(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceRow: i32, count: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.KDirSortFilterProxyModel_QBaseMoveRows(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceRow), @intCast(count), @ptrCast(destinationParent), @intCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, sourceParent: QtC.QModelIndex, sourceRow: i32, count: i32, destinationParent: QtC.QModelIndex, destinationChild: i32) callconv(.c) bool ```
    pub fn OnMoveRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.KDirSortFilterProxyModel_OnMoveRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, sourceParent: QtC.QModelIndex, sourceColumn: i32, count: i32, destinationParent: QtC.QModelIndex, destinationChild: i32 ```
    pub fn MoveColumns(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceColumn: i32, count: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.KDirSortFilterProxyModel_MoveColumns(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceColumn), @intCast(count), @ptrCast(destinationParent), @intCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, sourceParent: QtC.QModelIndex, sourceColumn: i32, count: i32, destinationParent: QtC.QModelIndex, destinationChild: i32 ```
    pub fn QBaseMoveColumns(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceColumn: i32, count: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.KDirSortFilterProxyModel_QBaseMoveColumns(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceColumn), @intCast(count), @ptrCast(destinationParent), @intCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, sourceParent: QtC.QModelIndex, sourceColumn: i32, count: i32, destinationParent: QtC.QModelIndex, destinationChild: i32) callconv(.c) bool ```
    pub fn OnMoveColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.KDirSortFilterProxyModel_OnMoveColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, index: QtC.QModelIndex, roleDataSpan: QtC.QModelRoleDataSpan ```
    pub fn MultiData(self: ?*anyopaque, index: ?*anyopaque, roleDataSpan: QtC.QModelRoleDataSpan) void {
        qtc.KDirSortFilterProxyModel_MultiData(@ptrCast(self), @ptrCast(index), @ptrCast(roleDataSpan));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, index: QtC.QModelIndex, roleDataSpan: QtC.QModelRoleDataSpan ```
    pub fn QBaseMultiData(self: ?*anyopaque, index: ?*anyopaque, roleDataSpan: QtC.QModelRoleDataSpan) void {
        qtc.KDirSortFilterProxyModel_QBaseMultiData(@ptrCast(self), @ptrCast(index), @ptrCast(roleDataSpan));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, index: QtC.QModelIndex, roleDataSpan: QtC.QModelRoleDataSpan) callconv(.c) void ```
    pub fn OnMultiData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, QtC.QModelRoleDataSpan) callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnMultiData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn ResetInternalData(self: ?*anyopaque) void {
        qtc.KDirSortFilterProxyModel_ResetInternalData(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn QBaseResetInternalData(self: ?*anyopaque) void {
        qtc.KDirSortFilterProxyModel_QBaseResetInternalData(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn () callconv(.c) void ```
    pub fn OnResetInternalData(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnResetInternalData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KDirSortFilterProxyModel_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KDirSortFilterProxyModel_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KDirSortFilterProxyModel_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KDirSortFilterProxyModel_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KDirSortFilterProxyModel_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KDirSortFilterProxyModel_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDirSortFilterProxyModel_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDirSortFilterProxyModel_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDirSortFilterProxyModel_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDirSortFilterProxyModel_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDirSortFilterProxyModel_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KDirSortFilterProxyModel_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KDirSortFilterProxyModel_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KDirSortFilterProxyModel_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KDirSortFilterProxyModel_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KDirSortFilterProxyModel_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn InvalidateFilter(self: ?*anyopaque) void {
        qtc.KDirSortFilterProxyModel_InvalidateFilter(@ptrCast(self));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn QBaseInvalidateFilter(self: ?*anyopaque) void {
        qtc.KDirSortFilterProxyModel_QBaseInvalidateFilter(@ptrCast(self));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn () callconv(.c) void ```
    pub fn OnInvalidateFilter(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnInvalidateFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateRowsFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn InvalidateRowsFilter(self: ?*anyopaque) void {
        qtc.KDirSortFilterProxyModel_InvalidateRowsFilter(@ptrCast(self));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateRowsFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn QBaseInvalidateRowsFilter(self: ?*anyopaque) void {
        qtc.KDirSortFilterProxyModel_QBaseInvalidateRowsFilter(@ptrCast(self));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateRowsFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn () callconv(.c) void ```
    pub fn OnInvalidateRowsFilter(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnInvalidateRowsFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateColumnsFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn InvalidateColumnsFilter(self: ?*anyopaque) void {
        qtc.KDirSortFilterProxyModel_InvalidateColumnsFilter(@ptrCast(self));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateColumnsFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn QBaseInvalidateColumnsFilter(self: ?*anyopaque) void {
        qtc.KDirSortFilterProxyModel_QBaseInvalidateColumnsFilter(@ptrCast(self));
    }

    /// Inherited from QSortFilterProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateColumnsFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn () callconv(.c) void ```
    pub fn OnInvalidateColumnsFilter(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnInvalidateColumnsFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, row: i32, col: i32, internalPtr: ?*anyopaque ```
    pub fn CreateSourceIndex(self: ?*anyopaque, row: i32, col: i32, internalPtr: ?*anyopaque) QtC.QModelIndex {
        return qtc.KDirSortFilterProxyModel_CreateSourceIndex(@ptrCast(self), @intCast(row), @intCast(col), internalPtr);
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, row: i32, col: i32, internalPtr: ?*anyopaque ```
    pub fn QBaseCreateSourceIndex(self: ?*anyopaque, row: i32, col: i32, internalPtr: ?*anyopaque) QtC.QModelIndex {
        return qtc.KDirSortFilterProxyModel_QBaseCreateSourceIndex(@ptrCast(self), @intCast(row), @intCast(col), internalPtr);
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, row: i32, col: i32, internalPtr: ?*anyopaque) callconv(.c) QtC.QModelIndex ```
    pub fn OnCreateSourceIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.KDirSortFilterProxyModel_OnCreateSourceIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, row: i32, column: i32 ```
    pub fn CreateIndex(self: ?*anyopaque, row: i32, column: i32) QtC.QModelIndex {
        return qtc.KDirSortFilterProxyModel_CreateIndex(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, row: i32, column: i32 ```
    pub fn QBaseCreateIndex(self: ?*anyopaque, row: i32, column: i32) QtC.QModelIndex {
        return qtc.KDirSortFilterProxyModel_QBaseCreateIndex(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, row: i32, column: i32) callconv(.c) QtC.QModelIndex ```
    pub fn OnCreateIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) QtC.QModelIndex) void {
        qtc.KDirSortFilterProxyModel_OnCreateIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, indexes: []QtC.QModelIndex, stream: QtC.QDataStream ```
    pub fn EncodeData(self: ?*anyopaque, indexes: []QtC.QModelIndex, stream: ?*anyopaque) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        qtc.KDirSortFilterProxyModel_EncodeData(@ptrCast(self), indexes_list, @ptrCast(stream));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, indexes: []QtC.QModelIndex, stream: QtC.QDataStream ```
    pub fn QBaseEncodeData(self: ?*anyopaque, indexes: []QtC.QModelIndex, stream: ?*anyopaque) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        qtc.KDirSortFilterProxyModel_QBaseEncodeData(@ptrCast(self), indexes_list, @ptrCast(stream));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, indexes: [*]QtC.QModelIndex, stream: QtC.QDataStream) callconv(.c) void ```
    pub fn OnEncodeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*]QtC.QModelIndex, ?*anyopaque) callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnEncodeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, row: i32, column: i32, parent: QtC.QModelIndex, stream: QtC.QDataStream ```
    pub fn DecodeData(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque, stream: ?*anyopaque) bool {
        return qtc.KDirSortFilterProxyModel_DecodeData(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(parent), @ptrCast(stream));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, row: i32, column: i32, parent: QtC.QModelIndex, stream: QtC.QDataStream ```
    pub fn QBaseDecodeData(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque, stream: ?*anyopaque) bool {
        return qtc.KDirSortFilterProxyModel_QBaseDecodeData(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(parent), @ptrCast(stream));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, row: i32, column: i32, parent: QtC.QModelIndex, stream: QtC.QDataStream) callconv(.c) bool ```
    pub fn OnDecodeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KDirSortFilterProxyModel_OnDecodeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, parent: QtC.QModelIndex, first: i32, last: i32 ```
    pub fn BeginInsertRows(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.KDirSortFilterProxyModel_BeginInsertRows(@ptrCast(self), @ptrCast(parent), @intCast(first), @intCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, parent: QtC.QModelIndex, first: i32, last: i32 ```
    pub fn QBaseBeginInsertRows(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.KDirSortFilterProxyModel_QBaseBeginInsertRows(@ptrCast(self), @ptrCast(parent), @intCast(first), @intCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void ```
    pub fn OnBeginInsertRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnBeginInsertRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn EndInsertRows(self: ?*anyopaque) void {
        qtc.KDirSortFilterProxyModel_EndInsertRows(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn QBaseEndInsertRows(self: ?*anyopaque) void {
        qtc.KDirSortFilterProxyModel_QBaseEndInsertRows(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn () callconv(.c) void ```
    pub fn OnEndInsertRows(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnEndInsertRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, parent: QtC.QModelIndex, first: i32, last: i32 ```
    pub fn BeginRemoveRows(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.KDirSortFilterProxyModel_BeginRemoveRows(@ptrCast(self), @ptrCast(parent), @intCast(first), @intCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, parent: QtC.QModelIndex, first: i32, last: i32 ```
    pub fn QBaseBeginRemoveRows(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.KDirSortFilterProxyModel_QBaseBeginRemoveRows(@ptrCast(self), @ptrCast(parent), @intCast(first), @intCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void ```
    pub fn OnBeginRemoveRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnBeginRemoveRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn EndRemoveRows(self: ?*anyopaque) void {
        qtc.KDirSortFilterProxyModel_EndRemoveRows(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn QBaseEndRemoveRows(self: ?*anyopaque) void {
        qtc.KDirSortFilterProxyModel_QBaseEndRemoveRows(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn () callconv(.c) void ```
    pub fn OnEndRemoveRows(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnEndRemoveRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, sourceParent: QtC.QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QtC.QModelIndex, destinationRow: i32 ```
    pub fn BeginMoveRows(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceFirst: i32, sourceLast: i32, destinationParent: ?*anyopaque, destinationRow: i32) bool {
        return qtc.KDirSortFilterProxyModel_BeginMoveRows(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceFirst), @intCast(sourceLast), @ptrCast(destinationParent), @intCast(destinationRow));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, sourceParent: QtC.QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QtC.QModelIndex, destinationRow: i32 ```
    pub fn QBaseBeginMoveRows(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceFirst: i32, sourceLast: i32, destinationParent: ?*anyopaque, destinationRow: i32) bool {
        return qtc.KDirSortFilterProxyModel_QBaseBeginMoveRows(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceFirst), @intCast(sourceLast), @ptrCast(destinationParent), @intCast(destinationRow));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, sourceParent: QtC.QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QtC.QModelIndex, destinationRow: i32) callconv(.c) bool ```
    pub fn OnBeginMoveRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.KDirSortFilterProxyModel_OnBeginMoveRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn EndMoveRows(self: ?*anyopaque) void {
        qtc.KDirSortFilterProxyModel_EndMoveRows(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn QBaseEndMoveRows(self: ?*anyopaque) void {
        qtc.KDirSortFilterProxyModel_QBaseEndMoveRows(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn () callconv(.c) void ```
    pub fn OnEndMoveRows(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnEndMoveRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, parent: QtC.QModelIndex, first: i32, last: i32 ```
    pub fn BeginInsertColumns(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.KDirSortFilterProxyModel_BeginInsertColumns(@ptrCast(self), @ptrCast(parent), @intCast(first), @intCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, parent: QtC.QModelIndex, first: i32, last: i32 ```
    pub fn QBaseBeginInsertColumns(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.KDirSortFilterProxyModel_QBaseBeginInsertColumns(@ptrCast(self), @ptrCast(parent), @intCast(first), @intCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void ```
    pub fn OnBeginInsertColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnBeginInsertColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn EndInsertColumns(self: ?*anyopaque) void {
        qtc.KDirSortFilterProxyModel_EndInsertColumns(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn QBaseEndInsertColumns(self: ?*anyopaque) void {
        qtc.KDirSortFilterProxyModel_QBaseEndInsertColumns(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn () callconv(.c) void ```
    pub fn OnEndInsertColumns(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnEndInsertColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, parent: QtC.QModelIndex, first: i32, last: i32 ```
    pub fn BeginRemoveColumns(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.KDirSortFilterProxyModel_BeginRemoveColumns(@ptrCast(self), @ptrCast(parent), @intCast(first), @intCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, parent: QtC.QModelIndex, first: i32, last: i32 ```
    pub fn QBaseBeginRemoveColumns(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.KDirSortFilterProxyModel_QBaseBeginRemoveColumns(@ptrCast(self), @ptrCast(parent), @intCast(first), @intCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void ```
    pub fn OnBeginRemoveColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnBeginRemoveColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn EndRemoveColumns(self: ?*anyopaque) void {
        qtc.KDirSortFilterProxyModel_EndRemoveColumns(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn QBaseEndRemoveColumns(self: ?*anyopaque) void {
        qtc.KDirSortFilterProxyModel_QBaseEndRemoveColumns(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn () callconv(.c) void ```
    pub fn OnEndRemoveColumns(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnEndRemoveColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, sourceParent: QtC.QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QtC.QModelIndex, destinationColumn: i32 ```
    pub fn BeginMoveColumns(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceFirst: i32, sourceLast: i32, destinationParent: ?*anyopaque, destinationColumn: i32) bool {
        return qtc.KDirSortFilterProxyModel_BeginMoveColumns(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceFirst), @intCast(sourceLast), @ptrCast(destinationParent), @intCast(destinationColumn));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, sourceParent: QtC.QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QtC.QModelIndex, destinationColumn: i32 ```
    pub fn QBaseBeginMoveColumns(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceFirst: i32, sourceLast: i32, destinationParent: ?*anyopaque, destinationColumn: i32) bool {
        return qtc.KDirSortFilterProxyModel_QBaseBeginMoveColumns(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceFirst), @intCast(sourceLast), @ptrCast(destinationParent), @intCast(destinationColumn));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, sourceParent: QtC.QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QtC.QModelIndex, destinationColumn: i32) callconv(.c) bool ```
    pub fn OnBeginMoveColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.KDirSortFilterProxyModel_OnBeginMoveColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn EndMoveColumns(self: ?*anyopaque) void {
        qtc.KDirSortFilterProxyModel_EndMoveColumns(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn QBaseEndMoveColumns(self: ?*anyopaque) void {
        qtc.KDirSortFilterProxyModel_QBaseEndMoveColumns(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn () callconv(.c) void ```
    pub fn OnEndMoveColumns(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnEndMoveColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn BeginResetModel(self: ?*anyopaque) void {
        qtc.KDirSortFilterProxyModel_BeginResetModel(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn QBaseBeginResetModel(self: ?*anyopaque) void {
        qtc.KDirSortFilterProxyModel_QBaseBeginResetModel(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn () callconv(.c) void ```
    pub fn OnBeginResetModel(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnBeginResetModel(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn EndResetModel(self: ?*anyopaque) void {
        qtc.KDirSortFilterProxyModel_EndResetModel(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn QBaseEndResetModel(self: ?*anyopaque) void {
        qtc.KDirSortFilterProxyModel_QBaseEndResetModel(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn () callconv(.c) void ```
    pub fn OnEndResetModel(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnEndResetModel(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, from: QtC.QModelIndex, to: QtC.QModelIndex ```
    pub fn ChangePersistentIndex(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque) void {
        qtc.KDirSortFilterProxyModel_ChangePersistentIndex(@ptrCast(self), @ptrCast(from), @ptrCast(to));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, from: QtC.QModelIndex, to: QtC.QModelIndex ```
    pub fn QBaseChangePersistentIndex(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque) void {
        qtc.KDirSortFilterProxyModel_QBaseChangePersistentIndex(@ptrCast(self), @ptrCast(from), @ptrCast(to));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, from: QtC.QModelIndex, to: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnChangePersistentIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnChangePersistentIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, from: []QtC.QModelIndex, to: []QtC.QModelIndex ```
    pub fn ChangePersistentIndexList(self: ?*anyopaque, from: []QtC.QModelIndex, to: []QtC.QModelIndex) void {
        const from_list = qtc.libqt_list{
            .len = from.len,
            .data = @ptrCast(from.ptr),
        };
        const to_list = qtc.libqt_list{
            .len = to.len,
            .data = @ptrCast(to.ptr),
        };
        qtc.KDirSortFilterProxyModel_ChangePersistentIndexList(@ptrCast(self), from_list, to_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, from: []QtC.QModelIndex, to: []QtC.QModelIndex ```
    pub fn QBaseChangePersistentIndexList(self: ?*anyopaque, from: []QtC.QModelIndex, to: []QtC.QModelIndex) void {
        const from_list = qtc.libqt_list{
            .len = from.len,
            .data = @ptrCast(from.ptr),
        };
        const to_list = qtc.libqt_list{
            .len = to.len,
            .data = @ptrCast(to.ptr),
        };
        qtc.KDirSortFilterProxyModel_QBaseChangePersistentIndexList(@ptrCast(self), from_list, to_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, from: [*]QtC.QModelIndex, to: [*]QtC.QModelIndex) callconv(.c) void ```
    pub fn OnChangePersistentIndexList(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*]QtC.QModelIndex, [*]QtC.QModelIndex) callconv(.c) void) void {
        qtc.KDirSortFilterProxyModel_OnChangePersistentIndexList(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, allocator: std.mem.Allocator ```
    pub fn PersistentIndexList(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QModelIndex {
        const _arr: qtc.libqt_list = qtc.KDirSortFilterProxyModel_PersistentIndexList(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QModelIndex, _arr.len) catch @panic("kdirsortfilterproxymodel.PersistentIndexList: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, allocator: std.mem.Allocator ```
    pub fn QBasePersistentIndexList(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QModelIndex {
        const _arr: qtc.libqt_list = qtc.KDirSortFilterProxyModel_QBasePersistentIndexList(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QModelIndex, _arr.len) catch @panic("kdirsortfilterproxymodel.PersistentIndexList: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn () callconv(.c) [*:null]QtC.QModelIndex ```
    pub fn OnPersistentIndexList(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:null]QtC.QModelIndex) void {
        qtc.KDirSortFilterProxyModel_OnPersistentIndexList(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KDirSortFilterProxyModel_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KDirSortFilterProxyModel_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.KDirSortFilterProxyModel_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KDirSortFilterProxyModel_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KDirSortFilterProxyModel_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KDirSortFilterProxyModel_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KDirSortFilterProxyModel_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KDirSortFilterProxyModel_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KDirSortFilterProxyModel_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KDirSortFilterProxyModel_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KDirSortFilterProxyModel_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KDirSortFilterProxyModel_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#sourceModelChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel) callconv(.c) void ```
    pub fn OnSourceModelChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractProxyModel_Connect_SourceModelChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void ```
    pub fn OnRowsAboutToBeInserted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsAboutToBeInserted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void ```
    pub fn OnRowsInserted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsInserted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void ```
    pub fn OnRowsAboutToBeRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsAboutToBeRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void ```
    pub fn OnRowsRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void ```
    pub fn OnColumnsAboutToBeInserted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsAboutToBeInserted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void ```
    pub fn OnColumnsInserted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsInserted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void ```
    pub fn OnColumnsAboutToBeRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsAboutToBeRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void ```
    pub fn OnColumnsRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel) callconv(.c) void ```
    pub fn OnModelAboutToBeReset(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ModelAboutToBeReset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel) callconv(.c) void ```
    pub fn OnModelReset(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ModelReset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, sourceParent: QtC.QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QtC.QModelIndex, destinationRow: i32) callconv(.c) void ```
    pub fn OnRowsAboutToBeMoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsAboutToBeMoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, sourceParent: QtC.QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QtC.QModelIndex, destinationRow: i32) callconv(.c) void ```
    pub fn OnRowsMoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsMoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, sourceParent: QtC.QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QtC.QModelIndex, destinationColumn: i32) callconv(.c) void ```
    pub fn OnColumnsAboutToBeMoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsAboutToBeMoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, sourceParent: QtC.QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QtC.QModelIndex, destinationColumn: i32) callconv(.c) void ```
    pub fn OnColumnsMoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsMoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel, callback: *const fn (self: QtC.KDirSortFilterProxyModel, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kdirsortfilterproxymodel.html#dtor.KDirSortFilterProxyModel)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KDirSortFilterProxyModel ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KDirSortFilterProxyModel_Delete(@ptrCast(self));
    }
};
