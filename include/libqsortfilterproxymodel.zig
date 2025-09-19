const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qabstractitemmodel_enums = @import("libqabstractitemmodel.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");
pub const map_i32_qtcqvariant = std.AutoHashMapUnmanaged(i32, QtC.QVariant);
pub const map_i32_u8 = std.AutoHashMapUnmanaged(i32, []u8);

/// https://doc.qt.io/qt-6/qsortfilterproxymodel.html
pub const qsortfilterproxymodel = struct {
    /// New constructs a new QSortFilterProxyModel object.
    ///
    ///
    pub fn New() QtC.QSortFilterProxyModel {
        return qtc.QSortFilterProxyModel_new();
    }

    /// New2 constructs a new QSortFilterProxyModel object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New2(parent: ?*anyopaque) QtC.QSortFilterProxyModel {
        return qtc.QSortFilterProxyModel_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QSortFilterProxyModel_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QSortFilterProxyModel, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSortFilterProxyModel_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QSortFilterProxyModel, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QSortFilterProxyModel_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QSortFilterProxyModel_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QSortFilterProxyModel, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QSortFilterProxyModel_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QSortFilterProxyModel_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsortfilterproxymodel.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSourceModel)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, sourceModel: QtC.QAbstractItemModel ```
    pub fn SetSourceModel(self: ?*anyopaque, sourceModel: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_SetSourceModel(@ptrCast(self), @ptrCast(sourceModel));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSourceModel)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, sourceModel: QtC.QAbstractItemModel) callconv(.c) void ```
    pub fn OnSetSourceModel(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnSetSourceModel(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSourceModel)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSortFilterProxyModel, sourceModel: QtC.QAbstractItemModel ```
    pub fn QBaseSetSourceModel(self: ?*anyopaque, sourceModel: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_QBaseSetSourceModel(@ptrCast(self), @ptrCast(sourceModel));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapToSource)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, proxyIndex: QtC.QModelIndex ```
    pub fn MapToSource(self: ?*anyopaque, proxyIndex: ?*anyopaque) QtC.QModelIndex {
        return qtc.QSortFilterProxyModel_MapToSource(@ptrCast(self), @ptrCast(proxyIndex));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapToSource)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, proxyIndex: QtC.QModelIndex) callconv(.c) QtC.QModelIndex ```
    pub fn OnMapToSource(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QSortFilterProxyModel_OnMapToSource(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapToSource)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSortFilterProxyModel, proxyIndex: QtC.QModelIndex ```
    pub fn QBaseMapToSource(self: ?*anyopaque, proxyIndex: ?*anyopaque) QtC.QModelIndex {
        return qtc.QSortFilterProxyModel_QBaseMapToSource(@ptrCast(self), @ptrCast(proxyIndex));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapFromSource)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, sourceIndex: QtC.QModelIndex ```
    pub fn MapFromSource(self: ?*anyopaque, sourceIndex: ?*anyopaque) QtC.QModelIndex {
        return qtc.QSortFilterProxyModel_MapFromSource(@ptrCast(self), @ptrCast(sourceIndex));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapFromSource)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, sourceIndex: QtC.QModelIndex) callconv(.c) QtC.QModelIndex ```
    pub fn OnMapFromSource(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QSortFilterProxyModel_OnMapFromSource(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapFromSource)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSortFilterProxyModel, sourceIndex: QtC.QModelIndex ```
    pub fn QBaseMapFromSource(self: ?*anyopaque, sourceIndex: ?*anyopaque) QtC.QModelIndex {
        return qtc.QSortFilterProxyModel_QBaseMapFromSource(@ptrCast(self), @ptrCast(sourceIndex));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionToSource)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, proxySelection: QtC.QItemSelection ```
    pub fn MapSelectionToSource(self: ?*anyopaque, proxySelection: ?*anyopaque) QtC.QItemSelection {
        return qtc.QSortFilterProxyModel_MapSelectionToSource(@ptrCast(self), @ptrCast(proxySelection));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionToSource)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, proxySelection: QtC.QItemSelection) callconv(.c) QtC.QItemSelection ```
    pub fn OnMapSelectionToSource(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QItemSelection) void {
        qtc.QSortFilterProxyModel_OnMapSelectionToSource(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionToSource)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSortFilterProxyModel, proxySelection: QtC.QItemSelection ```
    pub fn QBaseMapSelectionToSource(self: ?*anyopaque, proxySelection: ?*anyopaque) QtC.QItemSelection {
        return qtc.QSortFilterProxyModel_QBaseMapSelectionToSource(@ptrCast(self), @ptrCast(proxySelection));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionFromSource)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, sourceSelection: QtC.QItemSelection ```
    pub fn MapSelectionFromSource(self: ?*anyopaque, sourceSelection: ?*anyopaque) QtC.QItemSelection {
        return qtc.QSortFilterProxyModel_MapSelectionFromSource(@ptrCast(self), @ptrCast(sourceSelection));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionFromSource)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, sourceSelection: QtC.QItemSelection) callconv(.c) QtC.QItemSelection ```
    pub fn OnMapSelectionFromSource(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QItemSelection) void {
        qtc.QSortFilterProxyModel_OnMapSelectionFromSource(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionFromSource)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSortFilterProxyModel, sourceSelection: QtC.QItemSelection ```
    pub fn QBaseMapSelectionFromSource(self: ?*anyopaque, sourceSelection: ?*anyopaque) QtC.QItemSelection {
        return qtc.QSortFilterProxyModel_QBaseMapSelectionFromSource(@ptrCast(self), @ptrCast(sourceSelection));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterRegularExpression)
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn FilterRegularExpression(self: ?*anyopaque) QtC.QRegularExpression {
        return qtc.QSortFilterProxyModel_FilterRegularExpression(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterKeyColumn)
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn FilterKeyColumn(self: ?*anyopaque) i32 {
        return qtc.QSortFilterProxyModel_FilterKeyColumn(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterKeyColumn)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, column: i32 ```
    pub fn SetFilterKeyColumn(self: ?*anyopaque, column: i32) void {
        qtc.QSortFilterProxyModel_SetFilterKeyColumn(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterCaseSensitivity)
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    ///
    /// Returns: ``` qnamespace_enums.CaseSensitivity ```
    pub fn FilterCaseSensitivity(self: ?*anyopaque) i32 {
        return qtc.QSortFilterProxyModel_FilterCaseSensitivity(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterCaseSensitivity)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, cs: qnamespace_enums.CaseSensitivity ```
    pub fn SetFilterCaseSensitivity(self: ?*anyopaque, cs: i32) void {
        qtc.QSortFilterProxyModel_SetFilterCaseSensitivity(@ptrCast(self), @intCast(cs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortCaseSensitivity)
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    ///
    /// Returns: ``` qnamespace_enums.CaseSensitivity ```
    pub fn SortCaseSensitivity(self: ?*anyopaque) i32 {
        return qtc.QSortFilterProxyModel_SortCaseSensitivity(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSortCaseSensitivity)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, cs: qnamespace_enums.CaseSensitivity ```
    pub fn SetSortCaseSensitivity(self: ?*anyopaque, cs: i32) void {
        qtc.QSortFilterProxyModel_SetSortCaseSensitivity(@ptrCast(self), @intCast(cs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#isSortLocaleAware)
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn IsSortLocaleAware(self: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_IsSortLocaleAware(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSortLocaleAware)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, on: bool ```
    pub fn SetSortLocaleAware(self: ?*anyopaque, on: bool) void {
        qtc.QSortFilterProxyModel_SetSortLocaleAware(@ptrCast(self), on);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortColumn)
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn SortColumn(self: ?*anyopaque) i32 {
        return qtc.QSortFilterProxyModel_SortColumn(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortOrder)
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    ///
    /// Returns: ``` qnamespace_enums.SortOrder ```
    pub fn SortOrder(self: ?*anyopaque) i32 {
        return qtc.QSortFilterProxyModel_SortOrder(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dynamicSortFilter)
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn DynamicSortFilter(self: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_DynamicSortFilter(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setDynamicSortFilter)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, enable: bool ```
    pub fn SetDynamicSortFilter(self: ?*anyopaque, enable: bool) void {
        qtc.QSortFilterProxyModel_SetDynamicSortFilter(@ptrCast(self), enable);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortRole)
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn SortRole(self: ?*anyopaque) i32 {
        return qtc.QSortFilterProxyModel_SortRole(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSortRole)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, role: i32 ```
    pub fn SetSortRole(self: ?*anyopaque, role: i32) void {
        qtc.QSortFilterProxyModel_SetSortRole(@ptrCast(self), @intCast(role));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterRole)
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn FilterRole(self: ?*anyopaque) i32 {
        return qtc.QSortFilterProxyModel_FilterRole(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterRole)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, role: i32 ```
    pub fn SetFilterRole(self: ?*anyopaque, role: i32) void {
        qtc.QSortFilterProxyModel_SetFilterRole(@ptrCast(self), @intCast(role));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#isRecursiveFilteringEnabled)
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn IsRecursiveFilteringEnabled(self: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_IsRecursiveFilteringEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setRecursiveFilteringEnabled)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, recursive: bool ```
    pub fn SetRecursiveFilteringEnabled(self: ?*anyopaque, recursive: bool) void {
        qtc.QSortFilterProxyModel_SetRecursiveFilteringEnabled(@ptrCast(self), recursive);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#autoAcceptChildRows)
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn AutoAcceptChildRows(self: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_AutoAcceptChildRows(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setAutoAcceptChildRows)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, accept: bool ```
    pub fn SetAutoAcceptChildRows(self: ?*anyopaque, accept: bool) void {
        qtc.QSortFilterProxyModel_SetAutoAcceptChildRows(@ptrCast(self), accept);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterRegularExpression)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, pattern: []const u8 ```
    pub fn SetFilterRegularExpression(self: ?*anyopaque, pattern: []const u8) void {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        qtc.QSortFilterProxyModel_SetFilterRegularExpression(@ptrCast(self), pattern_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterRegularExpression)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, regularExpression: QtC.QRegularExpression ```
    pub fn SetFilterRegularExpression2(self: ?*anyopaque, regularExpression: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_SetFilterRegularExpression2(@ptrCast(self), @ptrCast(regularExpression));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterWildcard)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, pattern: []const u8 ```
    pub fn SetFilterWildcard(self: ?*anyopaque, pattern: []const u8) void {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        qtc.QSortFilterProxyModel_SetFilterWildcard(@ptrCast(self), pattern_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterFixedString)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, pattern: []const u8 ```
    pub fn SetFilterFixedString(self: ?*anyopaque, pattern: []const u8) void {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        qtc.QSortFilterProxyModel_SetFilterFixedString(@ptrCast(self), pattern_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidate)
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn Invalidate(self: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_Invalidate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsRow)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, source_row: i32, source_parent: QtC.QModelIndex ```
    pub fn FilterAcceptsRow(self: ?*anyopaque, source_row: i32, source_parent: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_FilterAcceptsRow(@ptrCast(self), @intCast(source_row), @ptrCast(source_parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsRow)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, source_row: i32, source_parent: QtC.QModelIndex) callconv(.c) bool ```
    pub fn OnFilterAcceptsRow(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnFilterAcceptsRow(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsRow)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSortFilterProxyModel, source_row: i32, source_parent: QtC.QModelIndex ```
    pub fn QBaseFilterAcceptsRow(self: ?*anyopaque, source_row: i32, source_parent: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_QBaseFilterAcceptsRow(@ptrCast(self), @intCast(source_row), @ptrCast(source_parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsColumn)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, source_column: i32, source_parent: QtC.QModelIndex ```
    pub fn FilterAcceptsColumn(self: ?*anyopaque, source_column: i32, source_parent: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_FilterAcceptsColumn(@ptrCast(self), @intCast(source_column), @ptrCast(source_parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsColumn)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, source_column: i32, source_parent: QtC.QModelIndex) callconv(.c) bool ```
    pub fn OnFilterAcceptsColumn(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnFilterAcceptsColumn(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsColumn)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSortFilterProxyModel, source_column: i32, source_parent: QtC.QModelIndex ```
    pub fn QBaseFilterAcceptsColumn(self: ?*anyopaque, source_column: i32, source_parent: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_QBaseFilterAcceptsColumn(@ptrCast(self), @intCast(source_column), @ptrCast(source_parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#lessThan)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, source_left: QtC.QModelIndex, source_right: QtC.QModelIndex ```
    pub fn LessThan(self: ?*anyopaque, source_left: ?*anyopaque, source_right: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_LessThan(@ptrCast(self), @ptrCast(source_left), @ptrCast(source_right));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#lessThan)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, source_left: QtC.QModelIndex, source_right: QtC.QModelIndex) callconv(.c) bool ```
    pub fn OnLessThan(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnLessThan(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#lessThan)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSortFilterProxyModel, source_left: QtC.QModelIndex, source_right: QtC.QModelIndex ```
    pub fn QBaseLessThan(self: ?*anyopaque, source_left: ?*anyopaque, source_right: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_QBaseLessThan(@ptrCast(self), @ptrCast(source_left), @ptrCast(source_right));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateFilter)
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn InvalidateFilter(self: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_InvalidateFilter(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateFilter)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn () callconv(.c) void ```
    pub fn OnInvalidateFilter(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnInvalidateFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateFilter)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn QBaseInvalidateFilter(self: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_QBaseInvalidateFilter(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateRowsFilter)
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn InvalidateRowsFilter(self: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_InvalidateRowsFilter(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateRowsFilter)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn () callconv(.c) void ```
    pub fn OnInvalidateRowsFilter(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnInvalidateRowsFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateRowsFilter)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn QBaseInvalidateRowsFilter(self: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_QBaseInvalidateRowsFilter(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateColumnsFilter)
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn InvalidateColumnsFilter(self: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_InvalidateColumnsFilter(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateColumnsFilter)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn () callconv(.c) void ```
    pub fn OnInvalidateColumnsFilter(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnInvalidateColumnsFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateColumnsFilter)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn QBaseInvalidateColumnsFilter(self: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_QBaseInvalidateColumnsFilter(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#index)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, row: i32, column: i32, parent: QtC.QModelIndex ```
    pub fn Index(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque) QtC.QModelIndex {
        return qtc.QSortFilterProxyModel_Index(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#index)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, row: i32, column: i32, parent: QtC.QModelIndex) callconv(.c) QtC.QModelIndex ```
    pub fn OnIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QSortFilterProxyModel_OnIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#index)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSortFilterProxyModel, row: i32, column: i32, parent: QtC.QModelIndex ```
    pub fn QBaseIndex(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque) QtC.QModelIndex {
        return qtc.QSortFilterProxyModel_QBaseIndex(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#parent)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, child: QtC.QModelIndex ```
    pub fn Parent(self: ?*anyopaque, child: ?*anyopaque) QtC.QModelIndex {
        return qtc.QSortFilterProxyModel_Parent(@ptrCast(self), @ptrCast(child));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#parent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, child: QtC.QModelIndex) callconv(.c) QtC.QModelIndex ```
    pub fn OnParent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QSortFilterProxyModel_OnParent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#parent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSortFilterProxyModel, child: QtC.QModelIndex ```
    pub fn QBaseParent(self: ?*anyopaque, child: ?*anyopaque) QtC.QModelIndex {
        return qtc.QSortFilterProxyModel_QBaseParent(@ptrCast(self), @ptrCast(child));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sibling)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, row: i32, column: i32, idx: QtC.QModelIndex ```
    pub fn Sibling(self: ?*anyopaque, row: i32, column: i32, idx: ?*anyopaque) QtC.QModelIndex {
        return qtc.QSortFilterProxyModel_Sibling(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(idx));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sibling)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, row: i32, column: i32, idx: QtC.QModelIndex) callconv(.c) QtC.QModelIndex ```
    pub fn OnSibling(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QSortFilterProxyModel_OnSibling(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sibling)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSortFilterProxyModel, row: i32, column: i32, idx: QtC.QModelIndex ```
    pub fn QBaseSibling(self: ?*anyopaque, row: i32, column: i32, idx: ?*anyopaque) QtC.QModelIndex {
        return qtc.QSortFilterProxyModel_QBaseSibling(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(idx));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#rowCount)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, parent: QtC.QModelIndex ```
    pub fn RowCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QSortFilterProxyModel_RowCount(@ptrCast(self), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#rowCount)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, parent: QtC.QModelIndex) callconv(.c) i32 ```
    pub fn OnRowCount(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QSortFilterProxyModel_OnRowCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#rowCount)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSortFilterProxyModel, parent: QtC.QModelIndex ```
    pub fn QBaseRowCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QSortFilterProxyModel_QBaseRowCount(@ptrCast(self), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#columnCount)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, parent: QtC.QModelIndex ```
    pub fn ColumnCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QSortFilterProxyModel_ColumnCount(@ptrCast(self), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#columnCount)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, parent: QtC.QModelIndex) callconv(.c) i32 ```
    pub fn OnColumnCount(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QSortFilterProxyModel_OnColumnCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#columnCount)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSortFilterProxyModel, parent: QtC.QModelIndex ```
    pub fn QBaseColumnCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QSortFilterProxyModel_QBaseColumnCount(@ptrCast(self), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#hasChildren)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, parent: QtC.QModelIndex ```
    pub fn HasChildren(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_HasChildren(@ptrCast(self), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#hasChildren)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, parent: QtC.QModelIndex) callconv(.c) bool ```
    pub fn OnHasChildren(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnHasChildren(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#hasChildren)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSortFilterProxyModel, parent: QtC.QModelIndex ```
    pub fn QBaseHasChildren(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_QBaseHasChildren(@ptrCast(self), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#data)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, index: QtC.QModelIndex, role: i32 ```
    pub fn Data(self: ?*anyopaque, index: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.QSortFilterProxyModel_Data(@ptrCast(self), @ptrCast(index), @intCast(role));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#data)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, index: QtC.QModelIndex, role: i32) callconv(.c) QtC.QVariant ```
    pub fn OnData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) QtC.QVariant) void {
        qtc.QSortFilterProxyModel_OnData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#data)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSortFilterProxyModel, index: QtC.QModelIndex, role: i32 ```
    pub fn QBaseData(self: ?*anyopaque, index: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.QSortFilterProxyModel_QBaseData(@ptrCast(self), @ptrCast(index), @intCast(role));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setData)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, index: QtC.QModelIndex, value: QtC.QVariant, role: i32 ```
    pub fn SetData(self: ?*anyopaque, index: ?*anyopaque, value: ?*anyopaque, role: i32) bool {
        return qtc.QSortFilterProxyModel_SetData(@ptrCast(self), @ptrCast(index), @ptrCast(value), @intCast(role));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, index: QtC.QModelIndex, value: QtC.QVariant, role: i32) callconv(.c) bool ```
    pub fn OnSetData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnSetData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setData)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSortFilterProxyModel, index: QtC.QModelIndex, value: QtC.QVariant, role: i32 ```
    pub fn QBaseSetData(self: ?*anyopaque, index: ?*anyopaque, value: ?*anyopaque, role: i32) bool {
        return qtc.QSortFilterProxyModel_QBaseSetData(@ptrCast(self), @ptrCast(index), @ptrCast(value), @intCast(role));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#headerData)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, section: i32, orientation: qnamespace_enums.Orientation, role: i32 ```
    pub fn HeaderData(self: ?*anyopaque, section: i32, orientation: i32, role: i32) QtC.QVariant {
        return qtc.QSortFilterProxyModel_HeaderData(@ptrCast(self), @intCast(section), @intCast(orientation), @intCast(role));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#headerData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, section: i32, orientation: qnamespace_enums.Orientation, role: i32) callconv(.c) QtC.QVariant ```
    pub fn OnHeaderData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, i32) callconv(.c) QtC.QVariant) void {
        qtc.QSortFilterProxyModel_OnHeaderData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#headerData)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSortFilterProxyModel, section: i32, orientation: qnamespace_enums.Orientation, role: i32 ```
    pub fn QBaseHeaderData(self: ?*anyopaque, section: i32, orientation: i32, role: i32) QtC.QVariant {
        return qtc.QSortFilterProxyModel_QBaseHeaderData(@ptrCast(self), @intCast(section), @intCast(orientation), @intCast(role));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setHeaderData)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, section: i32, orientation: qnamespace_enums.Orientation, value: QtC.QVariant, role: i32 ```
    pub fn SetHeaderData(self: ?*anyopaque, section: i32, orientation: i32, value: ?*anyopaque, role: i32) bool {
        return qtc.QSortFilterProxyModel_SetHeaderData(@ptrCast(self), @intCast(section), @intCast(orientation), @ptrCast(value), @intCast(role));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setHeaderData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, section: i32, orientation: qnamespace_enums.Orientation, value: QtC.QVariant, role: i32) callconv(.c) bool ```
    pub fn OnSetHeaderData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnSetHeaderData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setHeaderData)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSortFilterProxyModel, section: i32, orientation: qnamespace_enums.Orientation, value: QtC.QVariant, role: i32 ```
    pub fn QBaseSetHeaderData(self: ?*anyopaque, section: i32, orientation: i32, value: ?*anyopaque, role: i32) bool {
        return qtc.QSortFilterProxyModel_QBaseSetHeaderData(@ptrCast(self), @intCast(section), @intCast(orientation), @ptrCast(value), @intCast(role));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeData)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, indexes: []QtC.QModelIndex ```
    pub fn MimeData(self: ?*anyopaque, indexes: []QtC.QModelIndex) QtC.QMimeData {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        return qtc.QSortFilterProxyModel_MimeData(@ptrCast(self), indexes_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, indexes: [*]QtC.QModelIndex) callconv(.c) QtC.QMimeData ```
    pub fn OnMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*]QtC.QModelIndex) callconv(.c) QtC.QMimeData) void {
        qtc.QSortFilterProxyModel_OnMimeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeData)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSortFilterProxyModel, indexes: []QtC.QModelIndex ```
    pub fn QBaseMimeData(self: ?*anyopaque, indexes: []QtC.QModelIndex) QtC.QMimeData {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        return qtc.QSortFilterProxyModel_QBaseMimeData(@ptrCast(self), indexes_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dropMimeData)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, data: QtC.QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QtC.QModelIndex ```
    pub fn DropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_DropMimeData(@ptrCast(self), @ptrCast(data), @intCast(action), @intCast(row), @intCast(column), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dropMimeData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, data: QtC.QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QtC.QModelIndex) callconv(.c) bool ```
    pub fn OnDropMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnDropMimeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dropMimeData)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSortFilterProxyModel, data: QtC.QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QtC.QModelIndex ```
    pub fn QBaseDropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_QBaseDropMimeData(@ptrCast(self), @ptrCast(data), @intCast(action), @intCast(row), @intCast(column), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertRows)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, row: i32, count: i32, parent: QtC.QModelIndex ```
    pub fn InsertRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_InsertRows(@ptrCast(self), @intCast(row), @intCast(count), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertRows)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, row: i32, count: i32, parent: QtC.QModelIndex) callconv(.c) bool ```
    pub fn OnInsertRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnInsertRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertRows)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSortFilterProxyModel, row: i32, count: i32, parent: QtC.QModelIndex ```
    pub fn QBaseInsertRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_QBaseInsertRows(@ptrCast(self), @intCast(row), @intCast(count), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertColumns)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, column: i32, count: i32, parent: QtC.QModelIndex ```
    pub fn InsertColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_InsertColumns(@ptrCast(self), @intCast(column), @intCast(count), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertColumns)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, column: i32, count: i32, parent: QtC.QModelIndex) callconv(.c) bool ```
    pub fn OnInsertColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnInsertColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertColumns)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSortFilterProxyModel, column: i32, count: i32, parent: QtC.QModelIndex ```
    pub fn QBaseInsertColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_QBaseInsertColumns(@ptrCast(self), @intCast(column), @intCast(count), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeRows)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, row: i32, count: i32, parent: QtC.QModelIndex ```
    pub fn RemoveRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_RemoveRows(@ptrCast(self), @intCast(row), @intCast(count), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeRows)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, row: i32, count: i32, parent: QtC.QModelIndex) callconv(.c) bool ```
    pub fn OnRemoveRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnRemoveRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeRows)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSortFilterProxyModel, row: i32, count: i32, parent: QtC.QModelIndex ```
    pub fn QBaseRemoveRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_QBaseRemoveRows(@ptrCast(self), @intCast(row), @intCast(count), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeColumns)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, column: i32, count: i32, parent: QtC.QModelIndex ```
    pub fn RemoveColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_RemoveColumns(@ptrCast(self), @intCast(column), @intCast(count), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeColumns)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, column: i32, count: i32, parent: QtC.QModelIndex) callconv(.c) bool ```
    pub fn OnRemoveColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnRemoveColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeColumns)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSortFilterProxyModel, column: i32, count: i32, parent: QtC.QModelIndex ```
    pub fn QBaseRemoveColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_QBaseRemoveColumns(@ptrCast(self), @intCast(column), @intCast(count), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#fetchMore)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, parent: QtC.QModelIndex ```
    pub fn FetchMore(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_FetchMore(@ptrCast(self), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#fetchMore)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, parent: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnFetchMore(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnFetchMore(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#fetchMore)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSortFilterProxyModel, parent: QtC.QModelIndex ```
    pub fn QBaseFetchMore(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_QBaseFetchMore(@ptrCast(self), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#canFetchMore)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, parent: QtC.QModelIndex ```
    pub fn CanFetchMore(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_CanFetchMore(@ptrCast(self), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#canFetchMore)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, parent: QtC.QModelIndex) callconv(.c) bool ```
    pub fn OnCanFetchMore(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnCanFetchMore(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#canFetchMore)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSortFilterProxyModel, parent: QtC.QModelIndex ```
    pub fn QBaseCanFetchMore(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_QBaseCanFetchMore(@ptrCast(self), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#flags)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, index: QtC.QModelIndex ```
    ///
    /// Returns: ``` flag of qnamespace_enums.ItemFlag ```
    pub fn Flags(self: ?*anyopaque, index: ?*anyopaque) i32 {
        return qtc.QSortFilterProxyModel_Flags(@ptrCast(self), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#flags)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, index: QtC.QModelIndex) callconv(.c) i32 ```
    pub fn OnFlags(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QSortFilterProxyModel_OnFlags(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#flags)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSortFilterProxyModel, index: QtC.QModelIndex ```
    ///
    /// Returns: ``` flag of qnamespace_enums.ItemFlag ```
    pub fn QBaseFlags(self: ?*anyopaque, index: ?*anyopaque) i32 {
        return qtc.QSortFilterProxyModel_QBaseFlags(@ptrCast(self), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#buddy)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, index: QtC.QModelIndex ```
    pub fn Buddy(self: ?*anyopaque, index: ?*anyopaque) QtC.QModelIndex {
        return qtc.QSortFilterProxyModel_Buddy(@ptrCast(self), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#buddy)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, index: QtC.QModelIndex) callconv(.c) QtC.QModelIndex ```
    pub fn OnBuddy(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QSortFilterProxyModel_OnBuddy(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#buddy)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSortFilterProxyModel, index: QtC.QModelIndex ```
    pub fn QBaseBuddy(self: ?*anyopaque, index: ?*anyopaque) QtC.QModelIndex {
        return qtc.QSortFilterProxyModel_QBaseBuddy(@ptrCast(self), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#match)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, start: QtC.QModelIndex, role: i32, value: QtC.QVariant, hits: i32, flags: flag of qnamespace_enums.MatchFlag, allocator: std.mem.Allocator ```
    pub fn Match(self: ?*anyopaque, start: ?*anyopaque, role: i32, value: ?*anyopaque, hits: i32, flags: i32, allocator: std.mem.Allocator) []QtC.QModelIndex {
        const _arr: qtc.libqt_list = qtc.QSortFilterProxyModel_Match(@ptrCast(self), @ptrCast(start), @intCast(role), @ptrCast(value), @intCast(hits), @intCast(flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QModelIndex, _arr.len) catch @panic("qsortfilterproxymodel.Match: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#match)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, start: QtC.QModelIndex, role: i32, value: QtC.QVariant, hits: i32, flags: flag of qnamespace_enums.MatchFlag) callconv(.c) [*:null]QtC.QModelIndex ```
    pub fn OnMatch(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, ?*anyopaque, i32, i32) callconv(.c) [*:null]QtC.QModelIndex) void {
        qtc.QSortFilterProxyModel_OnMatch(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#match)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSortFilterProxyModel, start: QtC.QModelIndex, role: i32, value: QtC.QVariant, hits: i32, flags: flag of qnamespace_enums.MatchFlag, allocator: std.mem.Allocator ```
    pub fn QBaseMatch(self: ?*anyopaque, start: ?*anyopaque, role: i32, value: ?*anyopaque, hits: i32, flags: i32, allocator: std.mem.Allocator) []QtC.QModelIndex {
        const _arr: qtc.libqt_list = qtc.QSortFilterProxyModel_QBaseMatch(@ptrCast(self), @ptrCast(start), @intCast(role), @ptrCast(value), @intCast(hits), @intCast(flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QModelIndex, _arr.len) catch @panic("qsortfilterproxymodel.Match: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#span)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, index: QtC.QModelIndex ```
    pub fn Span(self: ?*anyopaque, index: ?*anyopaque) QtC.QSize {
        return qtc.QSortFilterProxyModel_Span(@ptrCast(self), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#span)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, index: QtC.QModelIndex) callconv(.c) QtC.QSize ```
    pub fn OnSpan(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QSortFilterProxyModel_OnSpan(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#span)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSortFilterProxyModel, index: QtC.QModelIndex ```
    pub fn QBaseSpan(self: ?*anyopaque, index: ?*anyopaque) QtC.QSize {
        return qtc.QSortFilterProxyModel_QBaseSpan(@ptrCast(self), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sort)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, column: i32, order: qnamespace_enums.SortOrder ```
    pub fn Sort(self: ?*anyopaque, column: i32, order: i32) void {
        qtc.QSortFilterProxyModel_Sort(@ptrCast(self), @intCast(column), @intCast(order));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sort)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, column: i32, order: qnamespace_enums.SortOrder) callconv(.c) void ```
    pub fn OnSort(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnSort(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sort)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSortFilterProxyModel, column: i32, order: qnamespace_enums.SortOrder ```
    pub fn QBaseSort(self: ?*anyopaque, column: i32, order: i32) void {
        qtc.QSortFilterProxyModel_QBaseSort(@ptrCast(self), @intCast(column), @intCast(order));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeTypes)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, allocator: std.mem.Allocator ```
    pub fn MimeTypes(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.QSortFilterProxyModel_MimeTypes(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qsortfilterproxymodel.MimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qsortfilterproxymodel.MimeTypes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeTypes)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn () callconv(.c) [*][*:0]const u8 ```
    pub fn OnMimeTypes(self: ?*anyopaque, callback: *const fn () callconv(.c) [*][*:0]const u8) void {
        qtc.QSortFilterProxyModel_OnMimeTypes(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeTypes)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSortFilterProxyModel, allocator: std.mem.Allocator ```
    pub fn QBaseMimeTypes(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.QSortFilterProxyModel_QBaseMimeTypes(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qsortfilterproxymodel.MimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qsortfilterproxymodel.MimeTypes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#supportedDropActions)
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    ///
    /// Returns: ``` flag of qnamespace_enums.DropAction ```
    pub fn SupportedDropActions(self: ?*anyopaque) i32 {
        return qtc.QSortFilterProxyModel_SupportedDropActions(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#supportedDropActions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSupportedDropActions(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QSortFilterProxyModel_OnSupportedDropActions(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#supportedDropActions)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    ///
    /// Returns: ``` flag of qnamespace_enums.DropAction ```
    pub fn QBaseSupportedDropActions(self: ?*anyopaque) i32 {
        return qtc.QSortFilterProxyModel_QBaseSupportedDropActions(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dynamicSortFilterChanged)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, dynamicSortFilter: bool ```
    pub fn DynamicSortFilterChanged(self: ?*anyopaque, dynamicSortFilter: bool) void {
        qtc.QSortFilterProxyModel_DynamicSortFilterChanged(@ptrCast(self), dynamicSortFilter);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dynamicSortFilterChanged)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, dynamicSortFilter: bool) callconv(.c) void ```
    pub fn OnDynamicSortFilterChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_DynamicSortFilterChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterCaseSensitivityChanged)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, filterCaseSensitivity: qnamespace_enums.CaseSensitivity ```
    pub fn FilterCaseSensitivityChanged(self: ?*anyopaque, filterCaseSensitivity: i32) void {
        qtc.QSortFilterProxyModel_FilterCaseSensitivityChanged(@ptrCast(self), @intCast(filterCaseSensitivity));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterCaseSensitivityChanged)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, filterCaseSensitivity: qnamespace_enums.CaseSensitivity) callconv(.c) void ```
    pub fn OnFilterCaseSensitivityChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_FilterCaseSensitivityChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortCaseSensitivityChanged)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, sortCaseSensitivity: qnamespace_enums.CaseSensitivity ```
    pub fn SortCaseSensitivityChanged(self: ?*anyopaque, sortCaseSensitivity: i32) void {
        qtc.QSortFilterProxyModel_SortCaseSensitivityChanged(@ptrCast(self), @intCast(sortCaseSensitivity));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortCaseSensitivityChanged)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, sortCaseSensitivity: qnamespace_enums.CaseSensitivity) callconv(.c) void ```
    pub fn OnSortCaseSensitivityChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_SortCaseSensitivityChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortLocaleAwareChanged)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, sortLocaleAware: bool ```
    pub fn SortLocaleAwareChanged(self: ?*anyopaque, sortLocaleAware: bool) void {
        qtc.QSortFilterProxyModel_SortLocaleAwareChanged(@ptrCast(self), sortLocaleAware);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortLocaleAwareChanged)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, sortLocaleAware: bool) callconv(.c) void ```
    pub fn OnSortLocaleAwareChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_SortLocaleAwareChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortRoleChanged)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, sortRole: i32 ```
    pub fn SortRoleChanged(self: ?*anyopaque, sortRole: i32) void {
        qtc.QSortFilterProxyModel_SortRoleChanged(@ptrCast(self), @intCast(sortRole));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortRoleChanged)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, sortRole: i32) callconv(.c) void ```
    pub fn OnSortRoleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_SortRoleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterRoleChanged)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, filterRole: i32 ```
    pub fn FilterRoleChanged(self: ?*anyopaque, filterRole: i32) void {
        qtc.QSortFilterProxyModel_FilterRoleChanged(@ptrCast(self), @intCast(filterRole));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterRoleChanged)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, filterRole: i32) callconv(.c) void ```
    pub fn OnFilterRoleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_FilterRoleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#recursiveFilteringEnabledChanged)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, recursiveFilteringEnabled: bool ```
    pub fn RecursiveFilteringEnabledChanged(self: ?*anyopaque, recursiveFilteringEnabled: bool) void {
        qtc.QSortFilterProxyModel_RecursiveFilteringEnabledChanged(@ptrCast(self), recursiveFilteringEnabled);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#recursiveFilteringEnabledChanged)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, recursiveFilteringEnabled: bool) callconv(.c) void ```
    pub fn OnRecursiveFilteringEnabledChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_RecursiveFilteringEnabledChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#autoAcceptChildRowsChanged)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, autoAcceptChildRows: bool ```
    pub fn AutoAcceptChildRowsChanged(self: ?*anyopaque, autoAcceptChildRows: bool) void {
        qtc.QSortFilterProxyModel_AutoAcceptChildRowsChanged(@ptrCast(self), autoAcceptChildRows);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#autoAcceptChildRowsChanged)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, autoAcceptChildRows: bool) callconv(.c) void ```
    pub fn OnAutoAcceptChildRowsChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_Connect_AutoAcceptChildRowsChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QSortFilterProxyModel_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsortfilterproxymodel.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QSortFilterProxyModel_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsortfilterproxymodel.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#sourceModel)
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn SourceModel(self: ?*anyopaque) QtC.QAbstractItemModel {
        return qtc.QAbstractProxyModel_SourceModel(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, row: i32, column: i32 ```
    pub fn HasIndex(self: ?*anyopaque, row: i32, column: i32) bool {
        return qtc.QAbstractItemModel_HasIndex(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, row: i32 ```
    pub fn InsertRow(self: ?*anyopaque, row: i32) bool {
        return qtc.QAbstractItemModel_InsertRow(@ptrCast(self), @intCast(row));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, column: i32 ```
    pub fn InsertColumn(self: ?*anyopaque, column: i32) bool {
        return qtc.QAbstractItemModel_InsertColumn(@ptrCast(self), @intCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, row: i32 ```
    pub fn RemoveRow(self: ?*anyopaque, row: i32) bool {
        return qtc.QAbstractItemModel_RemoveRow(@ptrCast(self), @intCast(row));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, column: i32 ```
    pub fn RemoveColumn(self: ?*anyopaque, column: i32) bool {
        return qtc.QAbstractItemModel_RemoveColumn(@ptrCast(self), @intCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, sourceParent: QtC.QModelIndex, sourceRow: i32, destinationParent: QtC.QModelIndex, destinationChild: i32 ```
    pub fn MoveRow(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceRow: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.QAbstractItemModel_MoveRow(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceRow), @ptrCast(destinationParent), @intCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, sourceParent: QtC.QModelIndex, sourceColumn: i32, destinationParent: QtC.QModelIndex, destinationChild: i32 ```
    pub fn MoveColumn(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceColumn: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.QAbstractItemModel_MoveColumn(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceColumn), @ptrCast(destinationParent), @intCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, index: QtC.QModelIndex ```
    pub fn CheckIndex(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_CheckIndex(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, topLeft: QtC.QModelIndex, bottomRight: QtC.QModelIndex ```
    pub fn DataChanged(self: ?*anyopaque, topLeft: ?*anyopaque, bottomRight: ?*anyopaque) void {
        qtc.QAbstractItemModel_DataChanged(@ptrCast(self), @ptrCast(topLeft), @ptrCast(bottomRight));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, topLeft: QtC.QModelIndex, bottomRight: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnDataChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_DataChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, orientation: qnamespace_enums.Orientation, first: i32, last: i32 ```
    pub fn HeaderDataChanged(self: ?*anyopaque, orientation: i32, first: i32, last: i32) void {
        qtc.QAbstractItemModel_HeaderDataChanged(@ptrCast(self), @intCast(orientation), @intCast(first), @intCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, orientation: qnamespace_enums.Orientation, first: i32, last: i32) callconv(.c) void ```
    pub fn OnHeaderDataChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_HeaderDataChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn LayoutChanged(self: ?*anyopaque) void {
        qtc.QAbstractItemModel_LayoutChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel) callconv(.c) void ```
    pub fn OnLayoutChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn LayoutAboutToBeChanged(self: ?*anyopaque) void {
        qtc.QAbstractItemModel_LayoutAboutToBeChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel) callconv(.c) void ```
    pub fn OnLayoutAboutToBeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutAboutToBeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, row: i32, column: i32, parent: QtC.QModelIndex ```
    pub fn HasIndex3(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_HasIndex3(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, row: i32, parent: QtC.QModelIndex ```
    pub fn InsertRow2(self: ?*anyopaque, row: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_InsertRow2(@ptrCast(self), @intCast(row), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, column: i32, parent: QtC.QModelIndex ```
    pub fn InsertColumn2(self: ?*anyopaque, column: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_InsertColumn2(@ptrCast(self), @intCast(column), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, row: i32, parent: QtC.QModelIndex ```
    pub fn RemoveRow2(self: ?*anyopaque, row: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_RemoveRow2(@ptrCast(self), @intCast(row), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, column: i32, parent: QtC.QModelIndex ```
    pub fn RemoveColumn2(self: ?*anyopaque, column: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_RemoveColumn2(@ptrCast(self), @intCast(column), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, index: QtC.QModelIndex, options: flag of qabstractitemmodel_enums.CheckIndexOption ```
    pub fn CheckIndex2(self: ?*anyopaque, index: ?*anyopaque, options: i32) bool {
        return qtc.QAbstractItemModel_CheckIndex2(@ptrCast(self), @ptrCast(index), @intCast(options));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, topLeft: QtC.QModelIndex, bottomRight: QtC.QModelIndex, roles: []i32 ```
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
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, topLeft: QtC.QModelIndex, bottomRight: QtC.QModelIndex, roles: [*:-1]i32) callconv(.c) void ```
    pub fn OnDataChanged3(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, [*:-1]i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_DataChanged3(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, parents: []QtC.QPersistentModelIndex ```
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
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, parents: [*]QtC.QPersistentModelIndex) callconv(.c) void ```
    pub fn OnLayoutChanged1(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*]QtC.QPersistentModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutChanged1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, parents: []QtC.QPersistentModelIndex, hint: qabstractitemmodel_enums.LayoutChangeHint ```
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
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, parents: [*]QtC.QPersistentModelIndex, hint: qabstractitemmodel_enums.LayoutChangeHint) callconv(.c) void ```
    pub fn OnLayoutChanged2(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*]QtC.QPersistentModelIndex, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutChanged2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, parents: []QtC.QPersistentModelIndex ```
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
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, parents: [*]QtC.QPersistentModelIndex) callconv(.c) void ```
    pub fn OnLayoutAboutToBeChanged1(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*]QtC.QPersistentModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutAboutToBeChanged1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, parents: []QtC.QPersistentModelIndex, hint: qabstractitemmodel_enums.LayoutChangeHint ```
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
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, parents: [*]QtC.QPersistentModelIndex, hint: qabstractitemmodel_enums.LayoutChangeHint) callconv(.c) void ```
    pub fn OnLayoutAboutToBeChanged2(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*]QtC.QPersistentModelIndex, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutAboutToBeChanged2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsortfilterproxymodel.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, name: []const u8 ```
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
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qsortfilterproxymodel.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, obj: QtC.QObject ```
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
    /// ``` self: QtC.QSortFilterProxyModel, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qsortfilterproxymodel.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qsortfilterproxymodel.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.QSortFilterProxyModel, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn Submit(self: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_Submit(@ptrCast(self));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn QBaseSubmit(self: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_QBaseSubmit(@ptrCast(self));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn () callconv(.c) bool ```
    pub fn OnSubmit(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnSubmit(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn Revert(self: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_Revert(@ptrCast(self));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn QBaseRevert(self: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_QBaseRevert(@ptrCast(self));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn () callconv(.c) void ```
    pub fn OnRevert(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnRevert(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, index: QtC.QModelIndex, allocator: std.mem.Allocator ```
    pub fn ItemData(self: ?*anyopaque, index: ?*anyopaque, allocator: std.mem.Allocator) map_i32_qtcqvariant {
        const _map: qtc.libqt_map = qtc.QSortFilterProxyModel_ItemData(@ptrCast(self), @ptrCast(index));
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
            _ret.put(allocator, _key, _value) catch @panic("qsortfilterproxymodel.ItemData: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, index: QtC.QModelIndex, allocator: std.mem.Allocator ```
    pub fn QBaseItemData(self: ?*anyopaque, index: ?*anyopaque, allocator: std.mem.Allocator) map_i32_qtcqvariant {
        const _map: qtc.libqt_map = qtc.QSortFilterProxyModel_QBaseItemData(@ptrCast(self), @ptrCast(index));
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
            _ret.put(allocator, _key, _value) catch @panic("qsortfilterproxymodel.ItemData: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, index: QtC.QModelIndex) callconv(.c) map_i32_qtcqvariant ```
    pub fn OnItemData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) map_i32_qtcqvariant) void {
        qtc.QSortFilterProxyModel_OnItemData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, index: QtC.QModelIndex, roles: map_i32_qtcqvariant, allocator: std.mem.Allocator ```
    pub fn SetItemData(self: ?*anyopaque, index: ?*anyopaque, roles: map_i32_qtcqvariant, allocator: std.mem.Allocator) bool {
        const roles_keys = allocator.alloc(i32, roles.count()) catch @panic("qsortfilterproxymodel.SetItemData: Memory allocation failed");
        defer allocator.free(roles_keys);
        const roles_values = allocator.alloc(QtC.QVariant, roles.count()) catch @panic("qsortfilterproxymodel.SetItemData: Memory allocation failed");
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
        return qtc.QSortFilterProxyModel_SetItemData(@ptrCast(self), @ptrCast(index), roles_map);
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, index: QtC.QModelIndex, roles: map_i32_qtcqvariant, allocator: std.mem.Allocator ```
    pub fn QBaseSetItemData(self: ?*anyopaque, index: ?*anyopaque, roles: map_i32_qtcqvariant, allocator: std.mem.Allocator) bool {
        const roles_keys = allocator.alloc(i32, roles.count()) catch @panic("qsortfilterproxymodel.SetItemData: Memory allocation failed");
        defer allocator.free(roles_keys);
        const roles_values = allocator.alloc(QtC.QVariant, roles.count()) catch @panic("qsortfilterproxymodel.SetItemData: Memory allocation failed");
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
        return qtc.QSortFilterProxyModel_QBaseSetItemData(@ptrCast(self), @ptrCast(index), roles_map);
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, index: QtC.QModelIndex, roles: map_i32_qtcqvariant) callconv(.c) bool ```
    pub fn OnSetItemData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, map_i32_qtcqvariant) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnSetItemData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, index: QtC.QModelIndex ```
    pub fn ClearItemData(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_ClearItemData(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, index: QtC.QModelIndex ```
    pub fn QBaseClearItemData(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_QBaseClearItemData(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, index: QtC.QModelIndex) callconv(.c) bool ```
    pub fn OnClearItemData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnClearItemData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, data: QtC.QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QtC.QModelIndex ```
    pub fn CanDropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_CanDropMimeData(@ptrCast(self), @ptrCast(data), @intCast(action), @intCast(row), @intCast(column), @ptrCast(parent));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, data: QtC.QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QtC.QModelIndex ```
    pub fn QBaseCanDropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_QBaseCanDropMimeData(@ptrCast(self), @ptrCast(data), @intCast(action), @intCast(row), @intCast(column), @ptrCast(parent));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, data: QtC.QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QtC.QModelIndex) callconv(.c) bool ```
    pub fn OnCanDropMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnCanDropMimeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    ///
    /// Returns: ``` flag of qnamespace_enums.DropAction ```
    pub fn SupportedDragActions(self: ?*anyopaque) i32 {
        return qtc.QSortFilterProxyModel_SupportedDragActions(@ptrCast(self));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    ///
    /// Returns: ``` flag of qnamespace_enums.DropAction ```
    pub fn QBaseSupportedDragActions(self: ?*anyopaque) i32 {
        return qtc.QSortFilterProxyModel_QBaseSupportedDragActions(@ptrCast(self));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSupportedDragActions(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QSortFilterProxyModel_OnSupportedDragActions(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, allocator: std.mem.Allocator ```
    pub fn RoleNames(self: ?*anyopaque, allocator: std.mem.Allocator) map_i32_u8 {
        const _map: qtc.libqt_map = qtc.QSortFilterProxyModel_RoleNames(@ptrCast(self));
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
            _ret.put(allocator, _key, _value) catch @panic("qsortfilterproxymodel.RoleNames: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, allocator: std.mem.Allocator ```
    pub fn QBaseRoleNames(self: ?*anyopaque, allocator: std.mem.Allocator) map_i32_u8 {
        const _map: qtc.libqt_map = qtc.QSortFilterProxyModel_QBaseRoleNames(@ptrCast(self));
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
            _ret.put(allocator, _key, _value) catch @panic("qsortfilterproxymodel.RoleNames: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn () callconv(.c) map_i32_u8 ```
    pub fn OnRoleNames(self: ?*anyopaque, callback: *const fn () callconv(.c) map_i32_u8) void {
        qtc.QSortFilterProxyModel_OnRoleNames(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, sourceParent: QtC.QModelIndex, sourceRow: i32, count: i32, destinationParent: QtC.QModelIndex, destinationChild: i32 ```
    pub fn MoveRows(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceRow: i32, count: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.QSortFilterProxyModel_MoveRows(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceRow), @intCast(count), @ptrCast(destinationParent), @intCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, sourceParent: QtC.QModelIndex, sourceRow: i32, count: i32, destinationParent: QtC.QModelIndex, destinationChild: i32 ```
    pub fn QBaseMoveRows(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceRow: i32, count: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.QSortFilterProxyModel_QBaseMoveRows(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceRow), @intCast(count), @ptrCast(destinationParent), @intCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, sourceParent: QtC.QModelIndex, sourceRow: i32, count: i32, destinationParent: QtC.QModelIndex, destinationChild: i32) callconv(.c) bool ```
    pub fn OnMoveRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnMoveRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, sourceParent: QtC.QModelIndex, sourceColumn: i32, count: i32, destinationParent: QtC.QModelIndex, destinationChild: i32 ```
    pub fn MoveColumns(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceColumn: i32, count: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.QSortFilterProxyModel_MoveColumns(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceColumn), @intCast(count), @ptrCast(destinationParent), @intCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, sourceParent: QtC.QModelIndex, sourceColumn: i32, count: i32, destinationParent: QtC.QModelIndex, destinationChild: i32 ```
    pub fn QBaseMoveColumns(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceColumn: i32, count: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.QSortFilterProxyModel_QBaseMoveColumns(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceColumn), @intCast(count), @ptrCast(destinationParent), @intCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, sourceParent: QtC.QModelIndex, sourceColumn: i32, count: i32, destinationParent: QtC.QModelIndex, destinationChild: i32) callconv(.c) bool ```
    pub fn OnMoveColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnMoveColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, index: QtC.QModelIndex, roleDataSpan: QtC.QModelRoleDataSpan ```
    pub fn MultiData(self: ?*anyopaque, index: ?*anyopaque, roleDataSpan: QtC.QModelRoleDataSpan) void {
        qtc.QSortFilterProxyModel_MultiData(@ptrCast(self), @ptrCast(index), @ptrCast(roleDataSpan));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, index: QtC.QModelIndex, roleDataSpan: QtC.QModelRoleDataSpan ```
    pub fn QBaseMultiData(self: ?*anyopaque, index: ?*anyopaque, roleDataSpan: QtC.QModelRoleDataSpan) void {
        qtc.QSortFilterProxyModel_QBaseMultiData(@ptrCast(self), @ptrCast(index), @ptrCast(roleDataSpan));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, index: QtC.QModelIndex, roleDataSpan: QtC.QModelRoleDataSpan) callconv(.c) void ```
    pub fn OnMultiData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, QtC.QModelRoleDataSpan) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnMultiData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn ResetInternalData(self: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_ResetInternalData(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn QBaseResetInternalData(self: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_QBaseResetInternalData(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn () callconv(.c) void ```
    pub fn OnResetInternalData(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnResetInternalData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, row: i32, col: i32, internalPtr: ?*anyopaque ```
    pub fn CreateSourceIndex(self: ?*anyopaque, row: i32, col: i32, internalPtr: ?*anyopaque) QtC.QModelIndex {
        return qtc.QSortFilterProxyModel_CreateSourceIndex(@ptrCast(self), @intCast(row), @intCast(col), internalPtr);
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, row: i32, col: i32, internalPtr: ?*anyopaque ```
    pub fn QBaseCreateSourceIndex(self: ?*anyopaque, row: i32, col: i32, internalPtr: ?*anyopaque) QtC.QModelIndex {
        return qtc.QSortFilterProxyModel_QBaseCreateSourceIndex(@ptrCast(self), @intCast(row), @intCast(col), internalPtr);
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, row: i32, col: i32, internalPtr: ?*anyopaque) callconv(.c) QtC.QModelIndex ```
    pub fn OnCreateSourceIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QSortFilterProxyModel_OnCreateSourceIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, row: i32, column: i32 ```
    pub fn CreateIndex(self: ?*anyopaque, row: i32, column: i32) QtC.QModelIndex {
        return qtc.QSortFilterProxyModel_CreateIndex(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, row: i32, column: i32 ```
    pub fn QBaseCreateIndex(self: ?*anyopaque, row: i32, column: i32) QtC.QModelIndex {
        return qtc.QSortFilterProxyModel_QBaseCreateIndex(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, row: i32, column: i32) callconv(.c) QtC.QModelIndex ```
    pub fn OnCreateIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) QtC.QModelIndex) void {
        qtc.QSortFilterProxyModel_OnCreateIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, indexes: []QtC.QModelIndex, stream: QtC.QDataStream ```
    pub fn EncodeData(self: ?*anyopaque, indexes: []QtC.QModelIndex, stream: ?*anyopaque) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        qtc.QSortFilterProxyModel_EncodeData(@ptrCast(self), indexes_list, @ptrCast(stream));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, indexes: []QtC.QModelIndex, stream: QtC.QDataStream ```
    pub fn QBaseEncodeData(self: ?*anyopaque, indexes: []QtC.QModelIndex, stream: ?*anyopaque) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        qtc.QSortFilterProxyModel_QBaseEncodeData(@ptrCast(self), indexes_list, @ptrCast(stream));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, indexes: [*]QtC.QModelIndex, stream: QtC.QDataStream) callconv(.c) void ```
    pub fn OnEncodeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*]QtC.QModelIndex, ?*anyopaque) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnEncodeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, row: i32, column: i32, parent: QtC.QModelIndex, stream: QtC.QDataStream ```
    pub fn DecodeData(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque, stream: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_DecodeData(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(parent), @ptrCast(stream));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, row: i32, column: i32, parent: QtC.QModelIndex, stream: QtC.QDataStream ```
    pub fn QBaseDecodeData(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque, stream: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_QBaseDecodeData(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(parent), @ptrCast(stream));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, row: i32, column: i32, parent: QtC.QModelIndex, stream: QtC.QDataStream) callconv(.c) bool ```
    pub fn OnDecodeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnDecodeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, parent: QtC.QModelIndex, first: i32, last: i32 ```
    pub fn BeginInsertRows(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.QSortFilterProxyModel_BeginInsertRows(@ptrCast(self), @ptrCast(parent), @intCast(first), @intCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, parent: QtC.QModelIndex, first: i32, last: i32 ```
    pub fn QBaseBeginInsertRows(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.QSortFilterProxyModel_QBaseBeginInsertRows(@ptrCast(self), @ptrCast(parent), @intCast(first), @intCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void ```
    pub fn OnBeginInsertRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnBeginInsertRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn EndInsertRows(self: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_EndInsertRows(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn QBaseEndInsertRows(self: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_QBaseEndInsertRows(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn () callconv(.c) void ```
    pub fn OnEndInsertRows(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnEndInsertRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, parent: QtC.QModelIndex, first: i32, last: i32 ```
    pub fn BeginRemoveRows(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.QSortFilterProxyModel_BeginRemoveRows(@ptrCast(self), @ptrCast(parent), @intCast(first), @intCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, parent: QtC.QModelIndex, first: i32, last: i32 ```
    pub fn QBaseBeginRemoveRows(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.QSortFilterProxyModel_QBaseBeginRemoveRows(@ptrCast(self), @ptrCast(parent), @intCast(first), @intCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void ```
    pub fn OnBeginRemoveRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnBeginRemoveRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn EndRemoveRows(self: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_EndRemoveRows(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn QBaseEndRemoveRows(self: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_QBaseEndRemoveRows(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn () callconv(.c) void ```
    pub fn OnEndRemoveRows(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnEndRemoveRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, sourceParent: QtC.QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QtC.QModelIndex, destinationRow: i32 ```
    pub fn BeginMoveRows(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceFirst: i32, sourceLast: i32, destinationParent: ?*anyopaque, destinationRow: i32) bool {
        return qtc.QSortFilterProxyModel_BeginMoveRows(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceFirst), @intCast(sourceLast), @ptrCast(destinationParent), @intCast(destinationRow));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, sourceParent: QtC.QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QtC.QModelIndex, destinationRow: i32 ```
    pub fn QBaseBeginMoveRows(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceFirst: i32, sourceLast: i32, destinationParent: ?*anyopaque, destinationRow: i32) bool {
        return qtc.QSortFilterProxyModel_QBaseBeginMoveRows(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceFirst), @intCast(sourceLast), @ptrCast(destinationParent), @intCast(destinationRow));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, sourceParent: QtC.QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QtC.QModelIndex, destinationRow: i32) callconv(.c) bool ```
    pub fn OnBeginMoveRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnBeginMoveRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn EndMoveRows(self: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_EndMoveRows(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn QBaseEndMoveRows(self: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_QBaseEndMoveRows(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn () callconv(.c) void ```
    pub fn OnEndMoveRows(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnEndMoveRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, parent: QtC.QModelIndex, first: i32, last: i32 ```
    pub fn BeginInsertColumns(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.QSortFilterProxyModel_BeginInsertColumns(@ptrCast(self), @ptrCast(parent), @intCast(first), @intCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, parent: QtC.QModelIndex, first: i32, last: i32 ```
    pub fn QBaseBeginInsertColumns(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.QSortFilterProxyModel_QBaseBeginInsertColumns(@ptrCast(self), @ptrCast(parent), @intCast(first), @intCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void ```
    pub fn OnBeginInsertColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnBeginInsertColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn EndInsertColumns(self: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_EndInsertColumns(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn QBaseEndInsertColumns(self: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_QBaseEndInsertColumns(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn () callconv(.c) void ```
    pub fn OnEndInsertColumns(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnEndInsertColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, parent: QtC.QModelIndex, first: i32, last: i32 ```
    pub fn BeginRemoveColumns(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.QSortFilterProxyModel_BeginRemoveColumns(@ptrCast(self), @ptrCast(parent), @intCast(first), @intCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, parent: QtC.QModelIndex, first: i32, last: i32 ```
    pub fn QBaseBeginRemoveColumns(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.QSortFilterProxyModel_QBaseBeginRemoveColumns(@ptrCast(self), @ptrCast(parent), @intCast(first), @intCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void ```
    pub fn OnBeginRemoveColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnBeginRemoveColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn EndRemoveColumns(self: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_EndRemoveColumns(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn QBaseEndRemoveColumns(self: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_QBaseEndRemoveColumns(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn () callconv(.c) void ```
    pub fn OnEndRemoveColumns(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnEndRemoveColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, sourceParent: QtC.QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QtC.QModelIndex, destinationColumn: i32 ```
    pub fn BeginMoveColumns(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceFirst: i32, sourceLast: i32, destinationParent: ?*anyopaque, destinationColumn: i32) bool {
        return qtc.QSortFilterProxyModel_BeginMoveColumns(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceFirst), @intCast(sourceLast), @ptrCast(destinationParent), @intCast(destinationColumn));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, sourceParent: QtC.QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QtC.QModelIndex, destinationColumn: i32 ```
    pub fn QBaseBeginMoveColumns(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceFirst: i32, sourceLast: i32, destinationParent: ?*anyopaque, destinationColumn: i32) bool {
        return qtc.QSortFilterProxyModel_QBaseBeginMoveColumns(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceFirst), @intCast(sourceLast), @ptrCast(destinationParent), @intCast(destinationColumn));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, sourceParent: QtC.QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QtC.QModelIndex, destinationColumn: i32) callconv(.c) bool ```
    pub fn OnBeginMoveColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnBeginMoveColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn EndMoveColumns(self: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_EndMoveColumns(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn QBaseEndMoveColumns(self: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_QBaseEndMoveColumns(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn () callconv(.c) void ```
    pub fn OnEndMoveColumns(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnEndMoveColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn BeginResetModel(self: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_BeginResetModel(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn QBaseBeginResetModel(self: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_QBaseBeginResetModel(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn () callconv(.c) void ```
    pub fn OnBeginResetModel(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnBeginResetModel(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn EndResetModel(self: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_EndResetModel(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn QBaseEndResetModel(self: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_QBaseEndResetModel(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn () callconv(.c) void ```
    pub fn OnEndResetModel(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnEndResetModel(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, from: QtC.QModelIndex, to: QtC.QModelIndex ```
    pub fn ChangePersistentIndex(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_ChangePersistentIndex(@ptrCast(self), @ptrCast(from), @ptrCast(to));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, from: QtC.QModelIndex, to: QtC.QModelIndex ```
    pub fn QBaseChangePersistentIndex(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_QBaseChangePersistentIndex(@ptrCast(self), @ptrCast(from), @ptrCast(to));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, from: QtC.QModelIndex, to: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnChangePersistentIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnChangePersistentIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, from: []QtC.QModelIndex, to: []QtC.QModelIndex ```
    pub fn ChangePersistentIndexList(self: ?*anyopaque, from: []QtC.QModelIndex, to: []QtC.QModelIndex) void {
        const from_list = qtc.libqt_list{
            .len = from.len,
            .data = @ptrCast(from.ptr),
        };
        const to_list = qtc.libqt_list{
            .len = to.len,
            .data = @ptrCast(to.ptr),
        };
        qtc.QSortFilterProxyModel_ChangePersistentIndexList(@ptrCast(self), from_list, to_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, from: []QtC.QModelIndex, to: []QtC.QModelIndex ```
    pub fn QBaseChangePersistentIndexList(self: ?*anyopaque, from: []QtC.QModelIndex, to: []QtC.QModelIndex) void {
        const from_list = qtc.libqt_list{
            .len = from.len,
            .data = @ptrCast(from.ptr),
        };
        const to_list = qtc.libqt_list{
            .len = to.len,
            .data = @ptrCast(to.ptr),
        };
        qtc.QSortFilterProxyModel_QBaseChangePersistentIndexList(@ptrCast(self), from_list, to_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, from: [*]QtC.QModelIndex, to: [*]QtC.QModelIndex) callconv(.c) void ```
    pub fn OnChangePersistentIndexList(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*]QtC.QModelIndex, [*]QtC.QModelIndex) callconv(.c) void) void {
        qtc.QSortFilterProxyModel_OnChangePersistentIndexList(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, allocator: std.mem.Allocator ```
    pub fn PersistentIndexList(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QModelIndex {
        const _arr: qtc.libqt_list = qtc.QSortFilterProxyModel_PersistentIndexList(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QModelIndex, _arr.len) catch @panic("qsortfilterproxymodel.PersistentIndexList: Memory allocation failed");
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
    /// ``` self: QtC.QSortFilterProxyModel, allocator: std.mem.Allocator ```
    pub fn QBasePersistentIndexList(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QModelIndex {
        const _arr: qtc.libqt_list = qtc.QSortFilterProxyModel_QBasePersistentIndexList(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QModelIndex, _arr.len) catch @panic("qsortfilterproxymodel.PersistentIndexList: Memory allocation failed");
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
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn () callconv(.c) [*:null]QtC.QModelIndex ```
    pub fn OnPersistentIndexList(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:null]QtC.QModelIndex) void {
        qtc.QSortFilterProxyModel_OnPersistentIndexList(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QSortFilterProxyModel_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QSortFilterProxyModel_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QSortFilterProxyModel_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QSortFilterProxyModel_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QSortFilterProxyModel_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QSortFilterProxyModel_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSortFilterProxyModel_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSortFilterProxyModel_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QSortFilterProxyModel_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QSortFilterProxyModel_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSortFilterProxyModel_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#sourceModelChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel) callconv(.c) void ```
    pub fn OnSourceModelChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractProxyModel_Connect_SourceModelChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void ```
    pub fn OnRowsAboutToBeInserted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsAboutToBeInserted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void ```
    pub fn OnRowsInserted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsInserted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void ```
    pub fn OnRowsAboutToBeRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsAboutToBeRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void ```
    pub fn OnRowsRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void ```
    pub fn OnColumnsAboutToBeInserted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsAboutToBeInserted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void ```
    pub fn OnColumnsInserted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsInserted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void ```
    pub fn OnColumnsAboutToBeRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsAboutToBeRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void ```
    pub fn OnColumnsRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel) callconv(.c) void ```
    pub fn OnModelAboutToBeReset(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ModelAboutToBeReset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel) callconv(.c) void ```
    pub fn OnModelReset(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ModelReset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, sourceParent: QtC.QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QtC.QModelIndex, destinationRow: i32) callconv(.c) void ```
    pub fn OnRowsAboutToBeMoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsAboutToBeMoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, sourceParent: QtC.QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QtC.QModelIndex, destinationRow: i32) callconv(.c) void ```
    pub fn OnRowsMoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsMoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, sourceParent: QtC.QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QtC.QModelIndex, destinationColumn: i32) callconv(.c) void ```
    pub fn OnColumnsAboutToBeMoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsAboutToBeMoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, sourceParent: QtC.QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QtC.QModelIndex, destinationColumn: i32) callconv(.c) void ```
    pub fn OnColumnsMoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsMoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QSortFilterProxyModel, callback: *const fn (self: QtC.QSortFilterProxyModel, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dtor.QSortFilterProxyModel)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QSortFilterProxyModel ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSortFilterProxyModel_Delete(@ptrCast(self));
    }
};
