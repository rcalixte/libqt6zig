const C = @import("qt6c");
const qabstractitemmodel_enums = @import("libqabstractitemmodel.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");
pub const map_i32_cqvariant = std.AutoHashMapUnmanaged(i32, ?*C.QVariant);
pub const map_i32_u8 = std.AutoHashMapUnmanaged(i32, []u8);

/// https://doc.qt.io/qt-6/qsortfilterproxymodel.html
pub const qsortfilterproxymodel = struct {
    /// New constructs a new QSortFilterProxyModel object.
    ///
    ///
    pub fn New() ?*C.QSortFilterProxyModel {
        return C.QSortFilterProxyModel_new();
    }

    /// New2 constructs a new QSortFilterProxyModel object.
    ///
    /// ``` parent: ?*C.QObject ```
    pub fn New2(parent: ?*anyopaque) ?*C.QSortFilterProxyModel {
        return C.QSortFilterProxyModel_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QSortFilterProxyModel_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QSortFilterProxyModel, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QSortFilterProxyModel_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QSortFilterProxyModel, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QSortFilterProxyModel_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QSortFilterProxyModel_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QSortFilterProxyModel_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QSortFilterProxyModel_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSourceModel)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, sourceModel: ?*C.QAbstractItemModel ```
    pub fn SetSourceModel(self: ?*anyopaque, sourceModel: ?*anyopaque) void {
        C.QSortFilterProxyModel_SetSourceModel(@ptrCast(self), @ptrCast(sourceModel));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, ?*C.QAbstractItemModel) callconv(.c) void ```
    pub fn OnSetSourceModel(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QSortFilterProxyModel_OnSetSourceModel(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, sourceModel: ?*C.QAbstractItemModel ```
    pub fn QBaseSetSourceModel(self: ?*anyopaque, sourceModel: ?*anyopaque) void {
        C.QSortFilterProxyModel_QBaseSetSourceModel(@ptrCast(self), @ptrCast(sourceModel));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapToSource)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, proxyIndex: ?*C.QModelIndex ```
    pub fn MapToSource(self: ?*anyopaque, proxyIndex: ?*anyopaque) ?*C.QModelIndex {
        return C.QSortFilterProxyModel_MapToSource(@ptrCast(self), @ptrCast(proxyIndex));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, ?*C.QModelIndex) callconv(.c) ?*C.QModelIndex ```
    pub fn OnMapToSource(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) ?*C.QModelIndex) void {
        C.QSortFilterProxyModel_OnMapToSource(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, proxyIndex: ?*C.QModelIndex ```
    pub fn QBaseMapToSource(self: ?*anyopaque, proxyIndex: ?*anyopaque) ?*C.QModelIndex {
        return C.QSortFilterProxyModel_QBaseMapToSource(@ptrCast(self), @ptrCast(proxyIndex));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapFromSource)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, sourceIndex: ?*C.QModelIndex ```
    pub fn MapFromSource(self: ?*anyopaque, sourceIndex: ?*anyopaque) ?*C.QModelIndex {
        return C.QSortFilterProxyModel_MapFromSource(@ptrCast(self), @ptrCast(sourceIndex));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, ?*C.QModelIndex) callconv(.c) ?*C.QModelIndex ```
    pub fn OnMapFromSource(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) ?*C.QModelIndex) void {
        C.QSortFilterProxyModel_OnMapFromSource(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, sourceIndex: ?*C.QModelIndex ```
    pub fn QBaseMapFromSource(self: ?*anyopaque, sourceIndex: ?*anyopaque) ?*C.QModelIndex {
        return C.QSortFilterProxyModel_QBaseMapFromSource(@ptrCast(self), @ptrCast(sourceIndex));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionToSource)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, proxySelection: ?*C.QItemSelection ```
    pub fn MapSelectionToSource(self: ?*anyopaque, proxySelection: ?*anyopaque) ?*C.QItemSelection {
        return C.QSortFilterProxyModel_MapSelectionToSource(@ptrCast(self), @ptrCast(proxySelection));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, ?*C.QItemSelection) callconv(.c) ?*C.QItemSelection ```
    pub fn OnMapSelectionToSource(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) ?*C.QItemSelection) void {
        C.QSortFilterProxyModel_OnMapSelectionToSource(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, proxySelection: ?*C.QItemSelection ```
    pub fn QBaseMapSelectionToSource(self: ?*anyopaque, proxySelection: ?*anyopaque) ?*C.QItemSelection {
        return C.QSortFilterProxyModel_QBaseMapSelectionToSource(@ptrCast(self), @ptrCast(proxySelection));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mapSelectionFromSource)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, sourceSelection: ?*C.QItemSelection ```
    pub fn MapSelectionFromSource(self: ?*anyopaque, sourceSelection: ?*anyopaque) ?*C.QItemSelection {
        return C.QSortFilterProxyModel_MapSelectionFromSource(@ptrCast(self), @ptrCast(sourceSelection));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, ?*C.QItemSelection) callconv(.c) ?*C.QItemSelection ```
    pub fn OnMapSelectionFromSource(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) ?*C.QItemSelection) void {
        C.QSortFilterProxyModel_OnMapSelectionFromSource(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, sourceSelection: ?*C.QItemSelection ```
    pub fn QBaseMapSelectionFromSource(self: ?*anyopaque, sourceSelection: ?*anyopaque) ?*C.QItemSelection {
        return C.QSortFilterProxyModel_QBaseMapSelectionFromSource(@ptrCast(self), @ptrCast(sourceSelection));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterRegularExpression)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn FilterRegularExpression(self: ?*anyopaque) ?*C.QRegularExpression {
        return C.QSortFilterProxyModel_FilterRegularExpression(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterKeyColumn)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn FilterKeyColumn(self: ?*anyopaque) i32 {
        return C.QSortFilterProxyModel_FilterKeyColumn(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterKeyColumn)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, column: i32 ```
    pub fn SetFilterKeyColumn(self: ?*anyopaque, column: i32) void {
        C.QSortFilterProxyModel_SetFilterKeyColumn(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterCaseSensitivity)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn FilterCaseSensitivity(self: ?*anyopaque) i64 {
        return C.QSortFilterProxyModel_FilterCaseSensitivity(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterCaseSensitivity)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, cs: qnamespace_enums.CaseSensitivity ```
    pub fn SetFilterCaseSensitivity(self: ?*anyopaque, cs: i64) void {
        C.QSortFilterProxyModel_SetFilterCaseSensitivity(@ptrCast(self), @intCast(cs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortCaseSensitivity)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn SortCaseSensitivity(self: ?*anyopaque) i64 {
        return C.QSortFilterProxyModel_SortCaseSensitivity(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSortCaseSensitivity)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, cs: qnamespace_enums.CaseSensitivity ```
    pub fn SetSortCaseSensitivity(self: ?*anyopaque, cs: i64) void {
        C.QSortFilterProxyModel_SetSortCaseSensitivity(@ptrCast(self), @intCast(cs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#isSortLocaleAware)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn IsSortLocaleAware(self: ?*anyopaque) bool {
        return C.QSortFilterProxyModel_IsSortLocaleAware(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSortLocaleAware)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, on: bool ```
    pub fn SetSortLocaleAware(self: ?*anyopaque, on: bool) void {
        C.QSortFilterProxyModel_SetSortLocaleAware(@ptrCast(self), on);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortColumn)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn SortColumn(self: ?*anyopaque) i32 {
        return C.QSortFilterProxyModel_SortColumn(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortOrder)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn SortOrder(self: ?*anyopaque) i64 {
        return C.QSortFilterProxyModel_SortOrder(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dynamicSortFilter)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn DynamicSortFilter(self: ?*anyopaque) bool {
        return C.QSortFilterProxyModel_DynamicSortFilter(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setDynamicSortFilter)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, enable: bool ```
    pub fn SetDynamicSortFilter(self: ?*anyopaque, enable: bool) void {
        C.QSortFilterProxyModel_SetDynamicSortFilter(@ptrCast(self), enable);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortRole)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn SortRole(self: ?*anyopaque) i32 {
        return C.QSortFilterProxyModel_SortRole(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setSortRole)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, role: i32 ```
    pub fn SetSortRole(self: ?*anyopaque, role: i32) void {
        C.QSortFilterProxyModel_SetSortRole(@ptrCast(self), @intCast(role));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterRole)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn FilterRole(self: ?*anyopaque) i32 {
        return C.QSortFilterProxyModel_FilterRole(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterRole)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, role: i32 ```
    pub fn SetFilterRole(self: ?*anyopaque, role: i32) void {
        C.QSortFilterProxyModel_SetFilterRole(@ptrCast(self), @intCast(role));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#isRecursiveFilteringEnabled)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn IsRecursiveFilteringEnabled(self: ?*anyopaque) bool {
        return C.QSortFilterProxyModel_IsRecursiveFilteringEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setRecursiveFilteringEnabled)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, recursive: bool ```
    pub fn SetRecursiveFilteringEnabled(self: ?*anyopaque, recursive: bool) void {
        C.QSortFilterProxyModel_SetRecursiveFilteringEnabled(@ptrCast(self), recursive);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#autoAcceptChildRows)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn AutoAcceptChildRows(self: ?*anyopaque) bool {
        return C.QSortFilterProxyModel_AutoAcceptChildRows(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setAutoAcceptChildRows)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, accept: bool ```
    pub fn SetAutoAcceptChildRows(self: ?*anyopaque, accept: bool) void {
        C.QSortFilterProxyModel_SetAutoAcceptChildRows(@ptrCast(self), accept);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterRegularExpression)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, pattern: []const u8 ```
    pub fn SetFilterRegularExpression(self: ?*anyopaque, pattern: []const u8) void {
        const pattern_str = C.struct_libqt_string{
            .len = pattern.len,
            .data = @constCast(pattern.ptr),
        };
        C.QSortFilterProxyModel_SetFilterRegularExpression(@ptrCast(self), pattern_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterRegularExpression)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, regularExpression: ?*C.QRegularExpression ```
    pub fn SetFilterRegularExpressionWithRegularExpression(self: ?*anyopaque, regularExpression: ?*anyopaque) void {
        C.QSortFilterProxyModel_SetFilterRegularExpressionWithRegularExpression(@ptrCast(self), @ptrCast(regularExpression));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterWildcard)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, pattern: []const u8 ```
    pub fn SetFilterWildcard(self: ?*anyopaque, pattern: []const u8) void {
        const pattern_str = C.struct_libqt_string{
            .len = pattern.len,
            .data = @constCast(pattern.ptr),
        };
        C.QSortFilterProxyModel_SetFilterWildcard(@ptrCast(self), pattern_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setFilterFixedString)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, pattern: []const u8 ```
    pub fn SetFilterFixedString(self: ?*anyopaque, pattern: []const u8) void {
        const pattern_str = C.struct_libqt_string{
            .len = pattern.len,
            .data = @constCast(pattern.ptr),
        };
        C.QSortFilterProxyModel_SetFilterFixedString(@ptrCast(self), pattern_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidate)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn Invalidate(self: ?*anyopaque) void {
        C.QSortFilterProxyModel_Invalidate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsRow)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, source_row: i32, source_parent: ?*C.QModelIndex ```
    pub fn FilterAcceptsRow(self: ?*anyopaque, source_row: i32, source_parent: ?*anyopaque) bool {
        return C.QSortFilterProxyModel_FilterAcceptsRow(@ptrCast(self), @intCast(source_row), @ptrCast(source_parent));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, i32, ?*C.QModelIndex) callconv(.c) bool ```
    pub fn OnFilterAcceptsRow(self: ?*anyopaque, slot: fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) bool) void {
        C.QSortFilterProxyModel_OnFilterAcceptsRow(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, source_row: i32, source_parent: ?*C.QModelIndex ```
    pub fn QBaseFilterAcceptsRow(self: ?*anyopaque, source_row: i32, source_parent: ?*anyopaque) bool {
        return C.QSortFilterProxyModel_QBaseFilterAcceptsRow(@ptrCast(self), @intCast(source_row), @ptrCast(source_parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterAcceptsColumn)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, source_column: i32, source_parent: ?*C.QModelIndex ```
    pub fn FilterAcceptsColumn(self: ?*anyopaque, source_column: i32, source_parent: ?*anyopaque) bool {
        return C.QSortFilterProxyModel_FilterAcceptsColumn(@ptrCast(self), @intCast(source_column), @ptrCast(source_parent));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, i32, ?*C.QModelIndex) callconv(.c) bool ```
    pub fn OnFilterAcceptsColumn(self: ?*anyopaque, slot: fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) bool) void {
        C.QSortFilterProxyModel_OnFilterAcceptsColumn(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, source_column: i32, source_parent: ?*C.QModelIndex ```
    pub fn QBaseFilterAcceptsColumn(self: ?*anyopaque, source_column: i32, source_parent: ?*anyopaque) bool {
        return C.QSortFilterProxyModel_QBaseFilterAcceptsColumn(@ptrCast(self), @intCast(source_column), @ptrCast(source_parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#lessThan)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, source_left: ?*C.QModelIndex, source_right: ?*C.QModelIndex ```
    pub fn LessThan(self: ?*anyopaque, source_left: ?*anyopaque, source_right: ?*anyopaque) bool {
        return C.QSortFilterProxyModel_LessThan(@ptrCast(self), @ptrCast(source_left), @ptrCast(source_right));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, ?*C.QModelIndex, ?*C.QModelIndex) callconv(.c) bool ```
    pub fn OnLessThan(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QSortFilterProxyModel_OnLessThan(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, source_left: ?*C.QModelIndex, source_right: ?*C.QModelIndex ```
    pub fn QBaseLessThan(self: ?*anyopaque, source_left: ?*anyopaque, source_right: ?*anyopaque) bool {
        return C.QSortFilterProxyModel_QBaseLessThan(@ptrCast(self), @ptrCast(source_left), @ptrCast(source_right));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateFilter)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn InvalidateFilter(self: ?*anyopaque) void {
        C.QSortFilterProxyModel_InvalidateFilter(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn () callconv(.c) void ```
    pub fn OnInvalidateFilter(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QSortFilterProxyModel_OnInvalidateFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn QBaseInvalidateFilter(self: ?*anyopaque) void {
        C.QSortFilterProxyModel_QBaseInvalidateFilter(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateRowsFilter)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn InvalidateRowsFilter(self: ?*anyopaque) void {
        C.QSortFilterProxyModel_InvalidateRowsFilter(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn () callconv(.c) void ```
    pub fn OnInvalidateRowsFilter(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QSortFilterProxyModel_OnInvalidateRowsFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn QBaseInvalidateRowsFilter(self: ?*anyopaque) void {
        C.QSortFilterProxyModel_QBaseInvalidateRowsFilter(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#invalidateColumnsFilter)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn InvalidateColumnsFilter(self: ?*anyopaque) void {
        C.QSortFilterProxyModel_InvalidateColumnsFilter(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn () callconv(.c) void ```
    pub fn OnInvalidateColumnsFilter(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QSortFilterProxyModel_OnInvalidateColumnsFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn QBaseInvalidateColumnsFilter(self: ?*anyopaque) void {
        C.QSortFilterProxyModel_QBaseInvalidateColumnsFilter(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#index)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, row: i32, column: i32, parent: ?*C.QModelIndex ```
    pub fn Index(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque) ?*C.QModelIndex {
        return C.QSortFilterProxyModel_Index(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, i32, i32, ?*C.QModelIndex) callconv(.c) ?*C.QModelIndex ```
    pub fn OnIndex(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) ?*C.QModelIndex) void {
        C.QSortFilterProxyModel_OnIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, row: i32, column: i32, parent: ?*C.QModelIndex ```
    pub fn QBaseIndex(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque) ?*C.QModelIndex {
        return C.QSortFilterProxyModel_QBaseIndex(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#parent)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, child: ?*C.QModelIndex ```
    pub fn Parent(self: ?*anyopaque, child: ?*anyopaque) ?*C.QModelIndex {
        return C.QSortFilterProxyModel_Parent(@ptrCast(self), @ptrCast(child));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, ?*C.QModelIndex) callconv(.c) ?*C.QModelIndex ```
    pub fn OnParent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) ?*C.QModelIndex) void {
        C.QSortFilterProxyModel_OnParent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, child: ?*C.QModelIndex ```
    pub fn QBaseParent(self: ?*anyopaque, child: ?*anyopaque) ?*C.QModelIndex {
        return C.QSortFilterProxyModel_QBaseParent(@ptrCast(self), @ptrCast(child));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sibling)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, row: i32, column: i32, idx: ?*C.QModelIndex ```
    pub fn Sibling(self: ?*anyopaque, row: i32, column: i32, idx: ?*anyopaque) ?*C.QModelIndex {
        return C.QSortFilterProxyModel_Sibling(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(idx));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, i32, i32, ?*C.QModelIndex) callconv(.c) ?*C.QModelIndex ```
    pub fn OnSibling(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) ?*C.QModelIndex) void {
        C.QSortFilterProxyModel_OnSibling(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, row: i32, column: i32, idx: ?*C.QModelIndex ```
    pub fn QBaseSibling(self: ?*anyopaque, row: i32, column: i32, idx: ?*anyopaque) ?*C.QModelIndex {
        return C.QSortFilterProxyModel_QBaseSibling(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(idx));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#rowCount)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, parent: ?*C.QModelIndex ```
    pub fn RowCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return C.QSortFilterProxyModel_RowCount(@ptrCast(self), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, ?*C.QModelIndex) callconv(.c) i32 ```
    pub fn OnRowCount(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        C.QSortFilterProxyModel_OnRowCount(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, parent: ?*C.QModelIndex ```
    pub fn QBaseRowCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return C.QSortFilterProxyModel_QBaseRowCount(@ptrCast(self), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#columnCount)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, parent: ?*C.QModelIndex ```
    pub fn ColumnCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return C.QSortFilterProxyModel_ColumnCount(@ptrCast(self), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, ?*C.QModelIndex) callconv(.c) i32 ```
    pub fn OnColumnCount(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        C.QSortFilterProxyModel_OnColumnCount(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, parent: ?*C.QModelIndex ```
    pub fn QBaseColumnCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return C.QSortFilterProxyModel_QBaseColumnCount(@ptrCast(self), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#hasChildren)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, parent: ?*C.QModelIndex ```
    pub fn HasChildren(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return C.QSortFilterProxyModel_HasChildren(@ptrCast(self), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, ?*C.QModelIndex) callconv(.c) bool ```
    pub fn OnHasChildren(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QSortFilterProxyModel_OnHasChildren(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, parent: ?*C.QModelIndex ```
    pub fn QBaseHasChildren(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return C.QSortFilterProxyModel_QBaseHasChildren(@ptrCast(self), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#data)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, index: ?*C.QModelIndex, role: i32 ```
    pub fn Data(self: ?*anyopaque, index: ?*anyopaque, role: i32) ?*C.QVariant {
        return C.QSortFilterProxyModel_Data(@ptrCast(self), @ptrCast(index), @intCast(role));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, ?*C.QModelIndex, i32) callconv(.c) ?*C.QVariant ```
    pub fn OnData(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) ?*C.QVariant) void {
        C.QSortFilterProxyModel_OnData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, index: ?*C.QModelIndex, role: i32 ```
    pub fn QBaseData(self: ?*anyopaque, index: ?*anyopaque, role: i32) ?*C.QVariant {
        return C.QSortFilterProxyModel_QBaseData(@ptrCast(self), @ptrCast(index), @intCast(role));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setData)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, index: ?*C.QModelIndex, value: ?*C.QVariant, role: i32 ```
    pub fn SetData(self: ?*anyopaque, index: ?*anyopaque, value: ?*anyopaque, role: i32) bool {
        return C.QSortFilterProxyModel_SetData(@ptrCast(self), @ptrCast(index), @ptrCast(value), @intCast(role));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, ?*C.QModelIndex, ?*C.QVariant, i32) callconv(.c) bool ```
    pub fn OnSetData(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32) callconv(.c) bool) void {
        C.QSortFilterProxyModel_OnSetData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, index: ?*C.QModelIndex, value: ?*C.QVariant, role: i32 ```
    pub fn QBaseSetData(self: ?*anyopaque, index: ?*anyopaque, value: ?*anyopaque, role: i32) bool {
        return C.QSortFilterProxyModel_QBaseSetData(@ptrCast(self), @ptrCast(index), @ptrCast(value), @intCast(role));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#headerData)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, section: i32, orientation: qnamespace_enums.Orientation, role: i32 ```
    pub fn HeaderData(self: ?*anyopaque, section: i32, orientation: i64, role: i32) ?*C.QVariant {
        return C.QSortFilterProxyModel_HeaderData(@ptrCast(self), @intCast(section), @intCast(orientation), @intCast(role));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, i32, qnamespace_enums.Orientation, i32) callconv(.c) ?*C.QVariant ```
    pub fn OnHeaderData(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i64, i32) callconv(.c) ?*C.QVariant) void {
        C.QSortFilterProxyModel_OnHeaderData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, section: i32, orientation: qnamespace_enums.Orientation, role: i32 ```
    pub fn QBaseHeaderData(self: ?*anyopaque, section: i32, orientation: i64, role: i32) ?*C.QVariant {
        return C.QSortFilterProxyModel_QBaseHeaderData(@ptrCast(self), @intCast(section), @intCast(orientation), @intCast(role));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#setHeaderData)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, section: i32, orientation: qnamespace_enums.Orientation, value: ?*C.QVariant, role: i32 ```
    pub fn SetHeaderData(self: ?*anyopaque, section: i32, orientation: i64, value: ?*anyopaque, role: i32) bool {
        return C.QSortFilterProxyModel_SetHeaderData(@ptrCast(self), @intCast(section), @intCast(orientation), @ptrCast(value), @intCast(role));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, i32, qnamespace_enums.Orientation, ?*C.QVariant, i32) callconv(.c) bool ```
    pub fn OnSetHeaderData(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i64, ?*anyopaque, i32) callconv(.c) bool) void {
        C.QSortFilterProxyModel_OnSetHeaderData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, section: i32, orientation: qnamespace_enums.Orientation, value: ?*C.QVariant, role: i32 ```
    pub fn QBaseSetHeaderData(self: ?*anyopaque, section: i32, orientation: i64, value: ?*anyopaque, role: i32) bool {
        return C.QSortFilterProxyModel_QBaseSetHeaderData(@ptrCast(self), @intCast(section), @intCast(orientation), @ptrCast(value), @intCast(role));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeData)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, indexes: []?*C.QModelIndex ```
    pub fn MimeData(self: ?*anyopaque, indexes: []?*C.QModelIndex) ?*C.QMimeData {
        const indexes_list = C.struct_libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        return C.QSortFilterProxyModel_MimeData(@ptrCast(self), indexes_list);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, []?*C.QModelIndex) callconv(.c) ?*C.QMimeData ```
    pub fn OnMimeData(self: ?*anyopaque, slot: fn (?*anyopaque, []?*C.QModelIndex) callconv(.c) ?*C.QMimeData) void {
        C.QSortFilterProxyModel_OnMimeData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, indexes: []?*C.QModelIndex ```
    pub fn QBaseMimeData(self: ?*anyopaque, indexes: []?*C.QModelIndex) ?*C.QMimeData {
        const indexes_list = C.struct_libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        return C.QSortFilterProxyModel_QBaseMimeData(@ptrCast(self), indexes_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dropMimeData)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, data: ?*C.QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: ?*C.QModelIndex ```
    pub fn DropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i64, row: i32, column: i32, parent: ?*anyopaque) bool {
        return C.QSortFilterProxyModel_DropMimeData(@ptrCast(self), @ptrCast(data), @intCast(action), @intCast(row), @intCast(column), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, ?*C.QMimeData, qnamespace_enums.DropAction, i32, i32, ?*C.QModelIndex) callconv(.c) bool ```
    pub fn OnDropMimeData(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i64, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        C.QSortFilterProxyModel_OnDropMimeData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, data: ?*C.QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: ?*C.QModelIndex ```
    pub fn QBaseDropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i64, row: i32, column: i32, parent: ?*anyopaque) bool {
        return C.QSortFilterProxyModel_QBaseDropMimeData(@ptrCast(self), @ptrCast(data), @intCast(action), @intCast(row), @intCast(column), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertRows)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, row: i32, count: i32, parent: ?*C.QModelIndex ```
    pub fn InsertRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return C.QSortFilterProxyModel_InsertRows(@ptrCast(self), @intCast(row), @intCast(count), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, i32, i32, ?*C.QModelIndex) callconv(.c) bool ```
    pub fn OnInsertRows(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        C.QSortFilterProxyModel_OnInsertRows(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, row: i32, count: i32, parent: ?*C.QModelIndex ```
    pub fn QBaseInsertRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return C.QSortFilterProxyModel_QBaseInsertRows(@ptrCast(self), @intCast(row), @intCast(count), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#insertColumns)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, column: i32, count: i32, parent: ?*C.QModelIndex ```
    pub fn InsertColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return C.QSortFilterProxyModel_InsertColumns(@ptrCast(self), @intCast(column), @intCast(count), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, i32, i32, ?*C.QModelIndex) callconv(.c) bool ```
    pub fn OnInsertColumns(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        C.QSortFilterProxyModel_OnInsertColumns(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, column: i32, count: i32, parent: ?*C.QModelIndex ```
    pub fn QBaseInsertColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return C.QSortFilterProxyModel_QBaseInsertColumns(@ptrCast(self), @intCast(column), @intCast(count), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeRows)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, row: i32, count: i32, parent: ?*C.QModelIndex ```
    pub fn RemoveRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return C.QSortFilterProxyModel_RemoveRows(@ptrCast(self), @intCast(row), @intCast(count), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, i32, i32, ?*C.QModelIndex) callconv(.c) bool ```
    pub fn OnRemoveRows(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        C.QSortFilterProxyModel_OnRemoveRows(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, row: i32, count: i32, parent: ?*C.QModelIndex ```
    pub fn QBaseRemoveRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return C.QSortFilterProxyModel_QBaseRemoveRows(@ptrCast(self), @intCast(row), @intCast(count), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#removeColumns)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, column: i32, count: i32, parent: ?*C.QModelIndex ```
    pub fn RemoveColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return C.QSortFilterProxyModel_RemoveColumns(@ptrCast(self), @intCast(column), @intCast(count), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, i32, i32, ?*C.QModelIndex) callconv(.c) bool ```
    pub fn OnRemoveColumns(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        C.QSortFilterProxyModel_OnRemoveColumns(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, column: i32, count: i32, parent: ?*C.QModelIndex ```
    pub fn QBaseRemoveColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return C.QSortFilterProxyModel_QBaseRemoveColumns(@ptrCast(self), @intCast(column), @intCast(count), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#fetchMore)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, parent: ?*C.QModelIndex ```
    pub fn FetchMore(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QSortFilterProxyModel_FetchMore(@ptrCast(self), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, ?*C.QModelIndex) callconv(.c) void ```
    pub fn OnFetchMore(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QSortFilterProxyModel_OnFetchMore(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, parent: ?*C.QModelIndex ```
    pub fn QBaseFetchMore(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QSortFilterProxyModel_QBaseFetchMore(@ptrCast(self), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#canFetchMore)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, parent: ?*C.QModelIndex ```
    pub fn CanFetchMore(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return C.QSortFilterProxyModel_CanFetchMore(@ptrCast(self), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, ?*C.QModelIndex) callconv(.c) bool ```
    pub fn OnCanFetchMore(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QSortFilterProxyModel_OnCanFetchMore(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, parent: ?*C.QModelIndex ```
    pub fn QBaseCanFetchMore(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return C.QSortFilterProxyModel_QBaseCanFetchMore(@ptrCast(self), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#flags)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, index: ?*C.QModelIndex ```
    pub fn Flags(self: ?*anyopaque, index: ?*anyopaque) i64 {
        return C.QSortFilterProxyModel_Flags(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, ?*C.QModelIndex) callconv(.c) i64 ```
    pub fn OnFlags(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) i64) void {
        C.QSortFilterProxyModel_OnFlags(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, index: ?*C.QModelIndex ```
    pub fn QBaseFlags(self: ?*anyopaque, index: ?*anyopaque) i64 {
        return C.QSortFilterProxyModel_QBaseFlags(@ptrCast(self), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#buddy)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, index: ?*C.QModelIndex ```
    pub fn Buddy(self: ?*anyopaque, index: ?*anyopaque) ?*C.QModelIndex {
        return C.QSortFilterProxyModel_Buddy(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, ?*C.QModelIndex) callconv(.c) ?*C.QModelIndex ```
    pub fn OnBuddy(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) ?*C.QModelIndex) void {
        C.QSortFilterProxyModel_OnBuddy(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, index: ?*C.QModelIndex ```
    pub fn QBaseBuddy(self: ?*anyopaque, index: ?*anyopaque) ?*C.QModelIndex {
        return C.QSortFilterProxyModel_QBaseBuddy(@ptrCast(self), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#match)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, start: ?*C.QModelIndex, role: i32, value: ?*C.QVariant, hits: i32, flags: i32, allocator: std.mem.Allocator ```
    pub fn Match(self: ?*anyopaque, start: ?*anyopaque, role: i32, value: ?*anyopaque, hits: i32, flags: i64, allocator: std.mem.Allocator) []?*C.QModelIndex {
        const _arr: C.struct_libqt_list = C.QSortFilterProxyModel_Match(@ptrCast(self), @ptrCast(start), @intCast(role), @ptrCast(value), @intCast(hits), @intCast(flags));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QModelIndex, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, ?*C.QModelIndex, i32, ?*C.QVariant, i32, i32) callconv(.c) []?*C.QModelIndex ```
    pub fn OnMatch(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32, ?*anyopaque, i32, i64) callconv(.c) []?*C.QModelIndex) void {
        C.QSortFilterProxyModel_OnMatch(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, start: ?*C.QModelIndex, role: i32, value: ?*C.QVariant, hits: i32, flags: i32, allocator: std.mem.Allocator ```
    pub fn QBaseMatch(self: ?*anyopaque, start: ?*anyopaque, role: i32, value: ?*anyopaque, hits: i32, flags: i64, allocator: std.mem.Allocator) []?*C.QModelIndex {
        const _arr: C.struct_libqt_list = C.QSortFilterProxyModel_QBaseMatch(@ptrCast(self), @ptrCast(start), @intCast(role), @ptrCast(value), @intCast(hits), @intCast(flags));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QModelIndex, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#span)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, index: ?*C.QModelIndex ```
    pub fn Span(self: ?*anyopaque, index: ?*anyopaque) ?*C.QSize {
        return C.QSortFilterProxyModel_Span(@ptrCast(self), @ptrCast(index));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, ?*C.QModelIndex) callconv(.c) ?*C.QSize ```
    pub fn OnSpan(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) ?*C.QSize) void {
        C.QSortFilterProxyModel_OnSpan(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, index: ?*C.QModelIndex ```
    pub fn QBaseSpan(self: ?*anyopaque, index: ?*anyopaque) ?*C.QSize {
        return C.QSortFilterProxyModel_QBaseSpan(@ptrCast(self), @ptrCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sort)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, column: i32, order: qnamespace_enums.SortOrder ```
    pub fn Sort(self: ?*anyopaque, column: i32, order: i64) void {
        C.QSortFilterProxyModel_Sort(@ptrCast(self), @intCast(column), @intCast(order));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, i32, qnamespace_enums.SortOrder) callconv(.c) void ```
    pub fn OnSort(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i64) callconv(.c) void) void {
        C.QSortFilterProxyModel_OnSort(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, column: i32, order: qnamespace_enums.SortOrder ```
    pub fn QBaseSort(self: ?*anyopaque, column: i32, order: i64) void {
        C.QSortFilterProxyModel_QBaseSort(@ptrCast(self), @intCast(column), @intCast(order));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#mimeTypes)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, allocator: std.mem.Allocator ```
    pub fn MimeTypes(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: C.struct_libqt_list = C.QSortFilterProxyModel_MimeTypes(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn () callconv(.c) [][]const u8 ```
    pub fn OnMimeTypes(self: ?*anyopaque, slot: fn () callconv(.c) [][]const u8) void {
        C.QSortFilterProxyModel_OnMimeTypes(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, allocator: std.mem.Allocator ```
    pub fn QBaseMimeTypes(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: C.struct_libqt_list = C.QSortFilterProxyModel_QBaseMimeTypes(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#supportedDropActions)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn SupportedDropActions(self: ?*anyopaque) i64 {
        return C.QSortFilterProxyModel_SupportedDropActions(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn () callconv(.c) i64 ```
    pub fn OnSupportedDropActions(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        C.QSortFilterProxyModel_OnSupportedDropActions(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn QBaseSupportedDropActions(self: ?*anyopaque) i64 {
        return C.QSortFilterProxyModel_QBaseSupportedDropActions(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#dynamicSortFilterChanged)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, dynamicSortFilter: bool ```
    pub fn DynamicSortFilterChanged(self: ?*anyopaque, dynamicSortFilter: bool) void {
        C.QSortFilterProxyModel_DynamicSortFilterChanged(@ptrCast(self), dynamicSortFilter);
    }

    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, bool) callconv(.c) void ```
    pub fn OnDynamicSortFilterChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QSortFilterProxyModel_Connect_DynamicSortFilterChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterCaseSensitivityChanged)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, filterCaseSensitivity: qnamespace_enums.CaseSensitivity ```
    pub fn FilterCaseSensitivityChanged(self: ?*anyopaque, filterCaseSensitivity: i64) void {
        C.QSortFilterProxyModel_FilterCaseSensitivityChanged(@ptrCast(self), @intCast(filterCaseSensitivity));
    }

    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, qnamespace_enums.CaseSensitivity) callconv(.c) void ```
    pub fn OnFilterCaseSensitivityChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QSortFilterProxyModel_Connect_FilterCaseSensitivityChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortCaseSensitivityChanged)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, sortCaseSensitivity: qnamespace_enums.CaseSensitivity ```
    pub fn SortCaseSensitivityChanged(self: ?*anyopaque, sortCaseSensitivity: i64) void {
        C.QSortFilterProxyModel_SortCaseSensitivityChanged(@ptrCast(self), @intCast(sortCaseSensitivity));
    }

    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, qnamespace_enums.CaseSensitivity) callconv(.c) void ```
    pub fn OnSortCaseSensitivityChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QSortFilterProxyModel_Connect_SortCaseSensitivityChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortLocaleAwareChanged)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, sortLocaleAware: bool ```
    pub fn SortLocaleAwareChanged(self: ?*anyopaque, sortLocaleAware: bool) void {
        C.QSortFilterProxyModel_SortLocaleAwareChanged(@ptrCast(self), sortLocaleAware);
    }

    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, bool) callconv(.c) void ```
    pub fn OnSortLocaleAwareChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QSortFilterProxyModel_Connect_SortLocaleAwareChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#sortRoleChanged)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, sortRole: i32 ```
    pub fn SortRoleChanged(self: ?*anyopaque, sortRole: i32) void {
        C.QSortFilterProxyModel_SortRoleChanged(@ptrCast(self), @intCast(sortRole));
    }

    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, i32) callconv(.c) void ```
    pub fn OnSortRoleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QSortFilterProxyModel_Connect_SortRoleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#filterRoleChanged)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, filterRole: i32 ```
    pub fn FilterRoleChanged(self: ?*anyopaque, filterRole: i32) void {
        C.QSortFilterProxyModel_FilterRoleChanged(@ptrCast(self), @intCast(filterRole));
    }

    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, i32) callconv(.c) void ```
    pub fn OnFilterRoleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QSortFilterProxyModel_Connect_FilterRoleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#recursiveFilteringEnabledChanged)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, recursiveFilteringEnabled: bool ```
    pub fn RecursiveFilteringEnabledChanged(self: ?*anyopaque, recursiveFilteringEnabled: bool) void {
        C.QSortFilterProxyModel_RecursiveFilteringEnabledChanged(@ptrCast(self), recursiveFilteringEnabled);
    }

    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, bool) callconv(.c) void ```
    pub fn OnRecursiveFilteringEnabledChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QSortFilterProxyModel_Connect_RecursiveFilteringEnabledChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsortfilterproxymodel.html#autoAcceptChildRowsChanged)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, autoAcceptChildRows: bool ```
    pub fn AutoAcceptChildRowsChanged(self: ?*anyopaque, autoAcceptChildRows: bool) void {
        C.QSortFilterProxyModel_AutoAcceptChildRowsChanged(@ptrCast(self), autoAcceptChildRows);
    }

    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, bool) callconv(.c) void ```
    pub fn OnAutoAcceptChildRowsChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QSortFilterProxyModel_Connect_AutoAcceptChildRowsChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QSortFilterProxyModel_Tr2(s_Cstring, c_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QSortFilterProxyModel_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#sourceModel)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn SourceModel(self: ?*anyopaque) ?*C.QAbstractItemModel {
        return C.QAbstractProxyModel_SourceModel(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, row: i32, column: i32 ```
    pub fn HasIndex(self: ?*anyopaque, row: i32, column: i32) bool {
        return C.QAbstractItemModel_HasIndex(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, row: i32 ```
    pub fn InsertRow(self: ?*anyopaque, row: i32) bool {
        return C.QAbstractItemModel_InsertRow(@ptrCast(self), @intCast(row));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, column: i32 ```
    pub fn InsertColumn(self: ?*anyopaque, column: i32) bool {
        return C.QAbstractItemModel_InsertColumn(@ptrCast(self), @intCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, row: i32 ```
    pub fn RemoveRow(self: ?*anyopaque, row: i32) bool {
        return C.QAbstractItemModel_RemoveRow(@ptrCast(self), @intCast(row));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, column: i32 ```
    pub fn RemoveColumn(self: ?*anyopaque, column: i32) bool {
        return C.QAbstractItemModel_RemoveColumn(@ptrCast(self), @intCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, sourceParent: ?*C.QModelIndex, sourceRow: i32, destinationParent: ?*C.QModelIndex, destinationChild: i32 ```
    pub fn MoveRow(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceRow: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return C.QAbstractItemModel_MoveRow(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceRow), @ptrCast(destinationParent), @intCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, sourceParent: ?*C.QModelIndex, sourceColumn: i32, destinationParent: ?*C.QModelIndex, destinationChild: i32 ```
    pub fn MoveColumn(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceColumn: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return C.QAbstractItemModel_MoveColumn(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceColumn), @ptrCast(destinationParent), @intCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, index: ?*C.QModelIndex ```
    pub fn CheckIndex(self: ?*anyopaque, index: ?*anyopaque) bool {
        return C.QAbstractItemModel_CheckIndex(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, topLeft: ?*C.QModelIndex, bottomRight: ?*C.QModelIndex ```
    pub fn DataChanged(self: ?*anyopaque, topLeft: ?*anyopaque, bottomRight: ?*anyopaque) void {
        C.QAbstractItemModel_DataChanged(@ptrCast(self), @ptrCast(topLeft), @ptrCast(bottomRight));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ``` self: ?*C.QAbstractItemModel, slot: fn (?*C.QAbstractItemModel, ?*C.QModelIndex, ?*C.QModelIndex) callconv(.c) void ```
    pub fn OnDataChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QAbstractItemModel_Connect_DataChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, orientation: qnamespace_enums.Orientation, first: i32, last: i32 ```
    pub fn HeaderDataChanged(self: ?*anyopaque, orientation: i64, first: i32, last: i32) void {
        C.QAbstractItemModel_HeaderDataChanged(@ptrCast(self), @intCast(orientation), @intCast(first), @intCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ``` self: ?*C.QAbstractItemModel, slot: fn (?*C.QAbstractItemModel, qnamespace_enums.Orientation, i32, i32) callconv(.c) void ```
    pub fn OnHeaderDataChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, i32) callconv(.c) void) void {
        C.QAbstractItemModel_Connect_HeaderDataChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn LayoutChanged(self: ?*anyopaque) void {
        C.QAbstractItemModel_LayoutChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ``` self: ?*C.QAbstractItemModel, slot: fn (?*C.QAbstractItemModel) callconv(.c) void ```
    pub fn OnLayoutChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QAbstractItemModel_Connect_LayoutChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn LayoutAboutToBeChanged(self: ?*anyopaque) void {
        C.QAbstractItemModel_LayoutAboutToBeChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ``` self: ?*C.QAbstractItemModel, slot: fn (?*C.QAbstractItemModel) callconv(.c) void ```
    pub fn OnLayoutAboutToBeChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QAbstractItemModel_Connect_LayoutAboutToBeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, row: i32, column: i32, parent: ?*C.QModelIndex ```
    pub fn HasIndex3(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque) bool {
        return C.QAbstractItemModel_HasIndex3(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, row: i32, parent: ?*C.QModelIndex ```
    pub fn InsertRow2(self: ?*anyopaque, row: i32, parent: ?*anyopaque) bool {
        return C.QAbstractItemModel_InsertRow2(@ptrCast(self), @intCast(row), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, column: i32, parent: ?*C.QModelIndex ```
    pub fn InsertColumn2(self: ?*anyopaque, column: i32, parent: ?*anyopaque) bool {
        return C.QAbstractItemModel_InsertColumn2(@ptrCast(self), @intCast(column), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, row: i32, parent: ?*C.QModelIndex ```
    pub fn RemoveRow2(self: ?*anyopaque, row: i32, parent: ?*anyopaque) bool {
        return C.QAbstractItemModel_RemoveRow2(@ptrCast(self), @intCast(row), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, column: i32, parent: ?*C.QModelIndex ```
    pub fn RemoveColumn2(self: ?*anyopaque, column: i32, parent: ?*anyopaque) bool {
        return C.QAbstractItemModel_RemoveColumn2(@ptrCast(self), @intCast(column), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, index: ?*C.QModelIndex, options: i32 ```
    pub fn CheckIndex2(self: ?*anyopaque, index: ?*anyopaque, options: i64) bool {
        return C.QAbstractItemModel_CheckIndex2(@ptrCast(self), @ptrCast(index), @intCast(options));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, topLeft: ?*C.QModelIndex, bottomRight: ?*C.QModelIndex, roles: []i32 ```
    pub fn DataChanged3(self: ?*anyopaque, topLeft: ?*anyopaque, bottomRight: ?*anyopaque, roles: []i32) void {
        const roles_list = C.struct_libqt_list{
            .len = roles.len,
            .data = roles.ptr,
        };
        C.QAbstractItemModel_DataChanged3(@ptrCast(self), @ptrCast(topLeft), @ptrCast(bottomRight), roles_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ``` self: ?*C.QAbstractItemModel, slot: fn (?*C.QAbstractItemModel, ?*C.QModelIndex, ?*C.QModelIndex, []i32) callconv(.c) void ```
    pub fn OnDataChanged3(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, []i32) callconv(.c) void) void {
        C.QAbstractItemModel_Connect_DataChanged3(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, parents: []?*C.QPersistentModelIndex ```
    pub fn LayoutChanged1(self: ?*anyopaque, parents: []?*C.QPersistentModelIndex) void {
        const parents_list = C.struct_libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        C.QAbstractItemModel_LayoutChanged1(@ptrCast(self), parents_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ``` self: ?*C.QAbstractItemModel, slot: fn (?*C.QAbstractItemModel, []?*C.QPersistentModelIndex) callconv(.c) void ```
    pub fn OnLayoutChanged1(self: ?*anyopaque, slot: fn (?*anyopaque, []?*C.QPersistentModelIndex) callconv(.c) void) void {
        C.QAbstractItemModel_Connect_LayoutChanged1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, parents: []?*C.QPersistentModelIndex, hint: qabstractitemmodel_enums.LayoutChangeHint ```
    pub fn LayoutChanged2(self: ?*anyopaque, parents: []?*C.QPersistentModelIndex, hint: i64) void {
        const parents_list = C.struct_libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        C.QAbstractItemModel_LayoutChanged2(@ptrCast(self), parents_list, @intCast(hint));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ``` self: ?*C.QAbstractItemModel, slot: fn (?*C.QAbstractItemModel, []?*C.QPersistentModelIndex, qabstractitemmodel_enums.LayoutChangeHint) callconv(.c) void ```
    pub fn OnLayoutChanged2(self: ?*anyopaque, slot: fn (?*anyopaque, []?*C.QPersistentModelIndex, i64) callconv(.c) void) void {
        C.QAbstractItemModel_Connect_LayoutChanged2(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, parents: []?*C.QPersistentModelIndex ```
    pub fn LayoutAboutToBeChanged1(self: ?*anyopaque, parents: []?*C.QPersistentModelIndex) void {
        const parents_list = C.struct_libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        C.QAbstractItemModel_LayoutAboutToBeChanged1(@ptrCast(self), parents_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ``` self: ?*C.QAbstractItemModel, slot: fn (?*C.QAbstractItemModel, []?*C.QPersistentModelIndex) callconv(.c) void ```
    pub fn OnLayoutAboutToBeChanged1(self: ?*anyopaque, slot: fn (?*anyopaque, []?*C.QPersistentModelIndex) callconv(.c) void) void {
        C.QAbstractItemModel_Connect_LayoutAboutToBeChanged1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, parents: []?*C.QPersistentModelIndex, hint: qabstractitemmodel_enums.LayoutChangeHint ```
    pub fn LayoutAboutToBeChanged2(self: ?*anyopaque, parents: []?*C.QPersistentModelIndex, hint: i64) void {
        const parents_list = C.struct_libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        C.QAbstractItemModel_LayoutAboutToBeChanged2(@ptrCast(self), parents_list, @intCast(hint));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ``` self: ?*C.QAbstractItemModel, slot: fn (?*C.QAbstractItemModel, []?*C.QPersistentModelIndex, qabstractitemmodel_enums.LayoutChangeHint) callconv(.c) void ```
    pub fn OnLayoutAboutToBeChanged2(self: ?*anyopaque, slot: fn (?*anyopaque, []?*C.QPersistentModelIndex, i64) callconv(.c) void) void {
        C.QAbstractItemModel_Connect_LayoutAboutToBeChanged2(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QObject_ObjectName(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QObject {
        const _arr: C.struct_libqt_list = C.QObject_Children(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QObject, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, obj: ?*C.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        C.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) ?*C.QMetaObject__Connection {
        return C.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, member: ?*C.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return C.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: ?*C.QMetaObject__Connection ```
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return C.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: C.struct_libqt_list = C.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn Destroyed(self: ?*anyopaque) void {
        C.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return C.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) ?*C.QMetaObject__Connection {
        return C.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn Submit(self: ?*anyopaque) bool {
        return C.QSortFilterProxyModel_Submit(@ptrCast(self));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn QBaseSubmit(self: ?*anyopaque) bool {
        return C.QSortFilterProxyModel_QBaseSubmit(@ptrCast(self));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn () callconv(.c) bool ```
    pub fn OnSubmit(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QSortFilterProxyModel_OnSubmit(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn Revert(self: ?*anyopaque) void {
        C.QSortFilterProxyModel_Revert(@ptrCast(self));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn QBaseRevert(self: ?*anyopaque) void {
        C.QSortFilterProxyModel_QBaseRevert(@ptrCast(self));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn () callconv(.c) void ```
    pub fn OnRevert(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QSortFilterProxyModel_OnRevert(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, index: ?*C.QModelIndex, allocator: std.mem.Allocator ```
    pub fn ItemData(self: ?*anyopaque, index: ?*anyopaque, allocator: std.mem.Allocator) map_i32_cqvariant {
        const _map: C.struct_libqt_map = C.QSortFilterProxyModel_ItemData(@ptrCast(self), @ptrCast(index));
        var _ret: map_i32_cqvariant = .empty;
        defer {
            C.libqt_free(_map.keys);
            C.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]?*C.QVariant = @ptrCast(@alignCast(_map.values));
        var _i: usize = 0;
        while (_i < _map.len) : (_i += 1) {
            const _key = _keys[_i];
            const _value = _values[_i];
            _ret.put(allocator, _key, _value) catch @panic("Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, index: ?*C.QModelIndex, allocator: std.mem.Allocator ```
    pub fn QBaseItemData(self: ?*anyopaque, index: ?*anyopaque, allocator: std.mem.Allocator) map_i32_cqvariant {
        const _map: C.struct_libqt_map = C.QSortFilterProxyModel_QBaseItemData(@ptrCast(self), @ptrCast(index));
        var _ret: map_i32_cqvariant = .empty;
        defer {
            C.libqt_free(_map.keys);
            C.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]?*C.QVariant = @ptrCast(@alignCast(_map.values));
        var _i: usize = 0;
        while (_i < _map.len) : (_i += 1) {
            const _key = _keys[_i];
            const _value = _values[_i];
            _ret.put(allocator, _key, _value) catch @panic("Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, ?*C.QModelIndex) callconv(.c) map_i32_cqvariant ```
    pub fn OnItemData(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) map_i32_cqvariant) void {
        C.QSortFilterProxyModel_OnItemData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, index: ?*C.QModelIndex, roles: map_i32_cqvariant, allocator: std.mem.Allocator ```
    pub fn SetItemData(self: ?*anyopaque, index: ?*anyopaque, roles: map_i32_cqvariant, allocator: std.mem.Allocator) bool {
        const roles_keys = allocator.alloc(i32, roles.count()) catch @panic("Memory allocation failed");
        defer allocator.free(roles_keys);
        const roles_values = allocator.alloc(?*C.QVariant, roles.count()) catch @panic("Memory allocation failed");
        defer allocator.free(roles_values);
        var _i: usize = 0;
        var roles_it = roles.iterator();
        while (roles_it.next()) |entry| {
            const key = entry.key_ptr.*;
            roles_keys[_i] = @intCast(key);
            roles_values[_i] = entry.value_ptr.*;
            _i += 1;
        }
        const roles_map = C.struct_libqt_map{
            .len = roles.count(),
            .keys = @ptrCast(roles_keys.ptr),
            .values = @ptrCast(roles_values.ptr),
        };
        return C.QSortFilterProxyModel_SetItemData(@ptrCast(self), @ptrCast(index), roles_map);
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, index: ?*C.QModelIndex, roles: map_i32_cqvariant, allocator: std.mem.Allocator ```
    pub fn QBaseSetItemData(self: ?*anyopaque, index: ?*anyopaque, roles: map_i32_cqvariant, allocator: std.mem.Allocator) bool {
        const roles_keys = allocator.alloc(i32, roles.count()) catch @panic("Memory allocation failed");
        defer allocator.free(roles_keys);
        const roles_values = allocator.alloc(?*C.QVariant, roles.count()) catch @panic("Memory allocation failed");
        defer allocator.free(roles_values);
        var _i: usize = 0;
        var roles_it = roles.iterator();
        while (roles_it.next()) |entry| {
            const key = entry.key_ptr.*;
            roles_keys[_i] = @intCast(key);
            roles_values[_i] = entry.value_ptr.*;
            _i += 1;
        }
        const roles_map = C.struct_libqt_map{
            .len = roles.count(),
            .keys = @ptrCast(roles_keys.ptr),
            .values = @ptrCast(roles_values.ptr),
        };
        return C.QSortFilterProxyModel_QBaseSetItemData(@ptrCast(self), @ptrCast(index), roles_map);
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, ?*C.QModelIndex, map_i32_cqvariant) callconv(.c) bool ```
    pub fn OnSetItemData(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, map_i32_cqvariant) callconv(.c) bool) void {
        C.QSortFilterProxyModel_OnSetItemData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, index: ?*C.QModelIndex ```
    pub fn ClearItemData(self: ?*anyopaque, index: ?*anyopaque) bool {
        return C.QSortFilterProxyModel_ClearItemData(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, index: ?*C.QModelIndex ```
    pub fn QBaseClearItemData(self: ?*anyopaque, index: ?*anyopaque) bool {
        return C.QSortFilterProxyModel_QBaseClearItemData(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, ?*C.QModelIndex) callconv(.c) bool ```
    pub fn OnClearItemData(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QSortFilterProxyModel_OnClearItemData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, data: ?*C.QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: ?*C.QModelIndex ```
    pub fn CanDropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i64, row: i32, column: i32, parent: ?*anyopaque) bool {
        return C.QSortFilterProxyModel_CanDropMimeData(@ptrCast(self), @ptrCast(data), @intCast(action), @intCast(row), @intCast(column), @ptrCast(parent));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, data: ?*C.QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: ?*C.QModelIndex ```
    pub fn QBaseCanDropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i64, row: i32, column: i32, parent: ?*anyopaque) bool {
        return C.QSortFilterProxyModel_QBaseCanDropMimeData(@ptrCast(self), @ptrCast(data), @intCast(action), @intCast(row), @intCast(column), @ptrCast(parent));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, ?*C.QMimeData, qnamespace_enums.DropAction, i32, i32, ?*C.QModelIndex) callconv(.c) bool ```
    pub fn OnCanDropMimeData(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i64, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        C.QSortFilterProxyModel_OnCanDropMimeData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn SupportedDragActions(self: ?*anyopaque) i64 {
        return C.QSortFilterProxyModel_SupportedDragActions(@ptrCast(self));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn QBaseSupportedDragActions(self: ?*anyopaque) i64 {
        return C.QSortFilterProxyModel_QBaseSupportedDragActions(@ptrCast(self));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn () callconv(.c) i64 ```
    pub fn OnSupportedDragActions(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        C.QSortFilterProxyModel_OnSupportedDragActions(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, allocator: std.mem.Allocator ```
    pub fn RoleNames(self: ?*anyopaque, allocator: std.mem.Allocator) map_i32_u8 {
        const _map: C.struct_libqt_map = C.QSortFilterProxyModel_RoleNames(@ptrCast(self));
        var _ret: map_i32_u8 = .empty;
        defer {
            C.libqt_free(_map.keys);
            C.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*][]u8 = @ptrCast(@alignCast(_map.values));
        var _i: usize = 0;
        while (_i < _map.len) : (_i += 1) {
            const _key = _keys[_i];
            const _value = _values[_i];
            _ret.put(allocator, _key, _value) catch @panic("Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, allocator: std.mem.Allocator ```
    pub fn QBaseRoleNames(self: ?*anyopaque, allocator: std.mem.Allocator) map_i32_u8 {
        const _map: C.struct_libqt_map = C.QSortFilterProxyModel_QBaseRoleNames(@ptrCast(self));
        var _ret: map_i32_u8 = .empty;
        defer {
            C.libqt_free(_map.keys);
            C.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*][]u8 = @ptrCast(@alignCast(_map.values));
        var _i: usize = 0;
        while (_i < _map.len) : (_i += 1) {
            const _key = _keys[_i];
            const _value = _values[_i];
            _ret.put(allocator, _key, _value) catch @panic("Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn () callconv(.c) map_i32_u8 ```
    pub fn OnRoleNames(self: ?*anyopaque, slot: fn () callconv(.c) map_i32_u8) void {
        C.QSortFilterProxyModel_OnRoleNames(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, sourceParent: ?*C.QModelIndex, sourceRow: i32, count: i32, destinationParent: ?*C.QModelIndex, destinationChild: i32 ```
    pub fn MoveRows(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceRow: i32, count: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return C.QSortFilterProxyModel_MoveRows(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceRow), @intCast(count), @ptrCast(destinationParent), @intCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, sourceParent: ?*C.QModelIndex, sourceRow: i32, count: i32, destinationParent: ?*C.QModelIndex, destinationChild: i32 ```
    pub fn QBaseMoveRows(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceRow: i32, count: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return C.QSortFilterProxyModel_QBaseMoveRows(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceRow), @intCast(count), @ptrCast(destinationParent), @intCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, ?*C.QModelIndex, i32, i32, ?*C.QModelIndex, i32) callconv(.c) bool ```
    pub fn OnMoveRows(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        C.QSortFilterProxyModel_OnMoveRows(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, sourceParent: ?*C.QModelIndex, sourceColumn: i32, count: i32, destinationParent: ?*C.QModelIndex, destinationChild: i32 ```
    pub fn MoveColumns(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceColumn: i32, count: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return C.QSortFilterProxyModel_MoveColumns(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceColumn), @intCast(count), @ptrCast(destinationParent), @intCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, sourceParent: ?*C.QModelIndex, sourceColumn: i32, count: i32, destinationParent: ?*C.QModelIndex, destinationChild: i32 ```
    pub fn QBaseMoveColumns(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceColumn: i32, count: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return C.QSortFilterProxyModel_QBaseMoveColumns(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceColumn), @intCast(count), @ptrCast(destinationParent), @intCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, ?*C.QModelIndex, i32, i32, ?*C.QModelIndex, i32) callconv(.c) bool ```
    pub fn OnMoveColumns(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        C.QSortFilterProxyModel_OnMoveColumns(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, index: ?*C.QModelIndex, roleDataSpan: ?*C.QModelRoleDataSpan ```
    pub fn MultiData(self: ?*anyopaque, index: ?*anyopaque, roleDataSpan: ?*C.QModelRoleDataSpan) void {
        C.QSortFilterProxyModel_MultiData(@ptrCast(self), @ptrCast(index), @ptrCast(roleDataSpan));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, index: ?*C.QModelIndex, roleDataSpan: ?*C.QModelRoleDataSpan ```
    pub fn QBaseMultiData(self: ?*anyopaque, index: ?*anyopaque, roleDataSpan: ?*C.QModelRoleDataSpan) void {
        C.QSortFilterProxyModel_QBaseMultiData(@ptrCast(self), @ptrCast(index), @ptrCast(roleDataSpan));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, ?*C.QModelIndex, ?*C.QModelRoleDataSpan) callconv(.c) void ```
    pub fn OnMultiData(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*C.QModelRoleDataSpan) callconv(.c) void) void {
        C.QSortFilterProxyModel_OnMultiData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn ResetInternalData(self: ?*anyopaque) void {
        C.QSortFilterProxyModel_ResetInternalData(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn QBaseResetInternalData(self: ?*anyopaque) void {
        C.QSortFilterProxyModel_QBaseResetInternalData(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn () callconv(.c) void ```
    pub fn OnResetInternalData(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QSortFilterProxyModel_OnResetInternalData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QSortFilterProxyModel_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, event: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QSortFilterProxyModel_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QSortFilterProxyModel_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QSortFilterProxyModel_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QSortFilterProxyModel_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QSortFilterProxyModel_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QSortFilterProxyModel_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QSortFilterProxyModel_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QSortFilterProxyModel_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QSortFilterProxyModel_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QSortFilterProxyModel_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QSortFilterProxyModel_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QSortFilterProxyModel_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QSortFilterProxyModel_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QSortFilterProxyModel_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QSortFilterProxyModel_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QSortFilterProxyModel_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QSortFilterProxyModel_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QSortFilterProxyModel_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QSortFilterProxyModel_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QSortFilterProxyModel_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, row: i32, col: i32, internalPtr: ?*anyopaque ```
    pub fn CreateSourceIndex(self: ?*anyopaque, row: i32, col: i32, internalPtr: ?*anyopaque) ?*C.QModelIndex {
        return C.QSortFilterProxyModel_CreateSourceIndex(@ptrCast(self), @intCast(row), @intCast(col), internalPtr);
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, row: i32, col: i32, internalPtr: ?*anyopaque ```
    pub fn QBaseCreateSourceIndex(self: ?*anyopaque, row: i32, col: i32, internalPtr: ?*anyopaque) ?*C.QModelIndex {
        return C.QSortFilterProxyModel_QBaseCreateSourceIndex(@ptrCast(self), @intCast(row), @intCast(col), internalPtr);
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, i32, i32, ?*anyopaque) callconv(.c) ?*C.QModelIndex ```
    pub fn OnCreateSourceIndex(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) ?*C.QModelIndex) void {
        C.QSortFilterProxyModel_OnCreateSourceIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, row: i32, column: i32 ```
    pub fn CreateIndex(self: ?*anyopaque, row: i32, column: i32) ?*C.QModelIndex {
        return C.QSortFilterProxyModel_CreateIndex(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, row: i32, column: i32 ```
    pub fn QBaseCreateIndex(self: ?*anyopaque, row: i32, column: i32) ?*C.QModelIndex {
        return C.QSortFilterProxyModel_QBaseCreateIndex(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, i32, i32) callconv(.c) ?*C.QModelIndex ```
    pub fn OnCreateIndex(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) ?*C.QModelIndex) void {
        C.QSortFilterProxyModel_OnCreateIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, indexes: []?*C.QModelIndex, stream: ?*C.QDataStream ```
    pub fn EncodeData(self: ?*anyopaque, indexes: []?*C.QModelIndex, stream: ?*anyopaque) void {
        const indexes_list = C.struct_libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        C.QSortFilterProxyModel_EncodeData(@ptrCast(self), indexes_list, @ptrCast(stream));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, indexes: []?*C.QModelIndex, stream: ?*C.QDataStream ```
    pub fn QBaseEncodeData(self: ?*anyopaque, indexes: []?*C.QModelIndex, stream: ?*anyopaque) void {
        const indexes_list = C.struct_libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        C.QSortFilterProxyModel_QBaseEncodeData(@ptrCast(self), indexes_list, @ptrCast(stream));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, []?*C.QModelIndex, ?*C.QDataStream) callconv(.c) void ```
    pub fn OnEncodeData(self: ?*anyopaque, slot: fn (?*anyopaque, []?*C.QModelIndex, ?*anyopaque) callconv(.c) void) void {
        C.QSortFilterProxyModel_OnEncodeData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, row: i32, column: i32, parent: ?*C.QModelIndex, stream: ?*C.QDataStream ```
    pub fn DecodeData(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque, stream: ?*anyopaque) bool {
        return C.QSortFilterProxyModel_DecodeData(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(parent), @ptrCast(stream));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, row: i32, column: i32, parent: ?*C.QModelIndex, stream: ?*C.QDataStream ```
    pub fn QBaseDecodeData(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque, stream: ?*anyopaque) bool {
        return C.QSortFilterProxyModel_QBaseDecodeData(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(parent), @ptrCast(stream));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, i32, i32, ?*C.QModelIndex, ?*C.QDataStream) callconv(.c) bool ```
    pub fn OnDecodeData(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QSortFilterProxyModel_OnDecodeData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, parent: ?*C.QModelIndex, first: i32, last: i32 ```
    pub fn BeginInsertRows(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        C.QSortFilterProxyModel_BeginInsertRows(@ptrCast(self), @ptrCast(parent), @intCast(first), @intCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, parent: ?*C.QModelIndex, first: i32, last: i32 ```
    pub fn QBaseBeginInsertRows(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        C.QSortFilterProxyModel_QBaseBeginInsertRows(@ptrCast(self), @ptrCast(parent), @intCast(first), @intCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, ?*C.QModelIndex, i32, i32) callconv(.c) void ```
    pub fn OnBeginInsertRows(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        C.QSortFilterProxyModel_OnBeginInsertRows(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn EndInsertRows(self: ?*anyopaque) void {
        C.QSortFilterProxyModel_EndInsertRows(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn QBaseEndInsertRows(self: ?*anyopaque) void {
        C.QSortFilterProxyModel_QBaseEndInsertRows(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn () callconv(.c) void ```
    pub fn OnEndInsertRows(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QSortFilterProxyModel_OnEndInsertRows(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, parent: ?*C.QModelIndex, first: i32, last: i32 ```
    pub fn BeginRemoveRows(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        C.QSortFilterProxyModel_BeginRemoveRows(@ptrCast(self), @ptrCast(parent), @intCast(first), @intCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, parent: ?*C.QModelIndex, first: i32, last: i32 ```
    pub fn QBaseBeginRemoveRows(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        C.QSortFilterProxyModel_QBaseBeginRemoveRows(@ptrCast(self), @ptrCast(parent), @intCast(first), @intCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, ?*C.QModelIndex, i32, i32) callconv(.c) void ```
    pub fn OnBeginRemoveRows(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        C.QSortFilterProxyModel_OnBeginRemoveRows(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn EndRemoveRows(self: ?*anyopaque) void {
        C.QSortFilterProxyModel_EndRemoveRows(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn QBaseEndRemoveRows(self: ?*anyopaque) void {
        C.QSortFilterProxyModel_QBaseEndRemoveRows(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn () callconv(.c) void ```
    pub fn OnEndRemoveRows(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QSortFilterProxyModel_OnEndRemoveRows(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, sourceParent: ?*C.QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: ?*C.QModelIndex, destinationRow: i32 ```
    pub fn BeginMoveRows(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceFirst: i32, sourceLast: i32, destinationParent: ?*anyopaque, destinationRow: i32) bool {
        return C.QSortFilterProxyModel_BeginMoveRows(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceFirst), @intCast(sourceLast), @ptrCast(destinationParent), @intCast(destinationRow));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, sourceParent: ?*C.QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: ?*C.QModelIndex, destinationRow: i32 ```
    pub fn QBaseBeginMoveRows(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceFirst: i32, sourceLast: i32, destinationParent: ?*anyopaque, destinationRow: i32) bool {
        return C.QSortFilterProxyModel_QBaseBeginMoveRows(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceFirst), @intCast(sourceLast), @ptrCast(destinationParent), @intCast(destinationRow));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, ?*C.QModelIndex, i32, i32, ?*C.QModelIndex, i32) callconv(.c) bool ```
    pub fn OnBeginMoveRows(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        C.QSortFilterProxyModel_OnBeginMoveRows(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn EndMoveRows(self: ?*anyopaque) void {
        C.QSortFilterProxyModel_EndMoveRows(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn QBaseEndMoveRows(self: ?*anyopaque) void {
        C.QSortFilterProxyModel_QBaseEndMoveRows(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn () callconv(.c) void ```
    pub fn OnEndMoveRows(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QSortFilterProxyModel_OnEndMoveRows(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, parent: ?*C.QModelIndex, first: i32, last: i32 ```
    pub fn BeginInsertColumns(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        C.QSortFilterProxyModel_BeginInsertColumns(@ptrCast(self), @ptrCast(parent), @intCast(first), @intCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, parent: ?*C.QModelIndex, first: i32, last: i32 ```
    pub fn QBaseBeginInsertColumns(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        C.QSortFilterProxyModel_QBaseBeginInsertColumns(@ptrCast(self), @ptrCast(parent), @intCast(first), @intCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, ?*C.QModelIndex, i32, i32) callconv(.c) void ```
    pub fn OnBeginInsertColumns(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        C.QSortFilterProxyModel_OnBeginInsertColumns(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn EndInsertColumns(self: ?*anyopaque) void {
        C.QSortFilterProxyModel_EndInsertColumns(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn QBaseEndInsertColumns(self: ?*anyopaque) void {
        C.QSortFilterProxyModel_QBaseEndInsertColumns(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn () callconv(.c) void ```
    pub fn OnEndInsertColumns(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QSortFilterProxyModel_OnEndInsertColumns(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, parent: ?*C.QModelIndex, first: i32, last: i32 ```
    pub fn BeginRemoveColumns(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        C.QSortFilterProxyModel_BeginRemoveColumns(@ptrCast(self), @ptrCast(parent), @intCast(first), @intCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, parent: ?*C.QModelIndex, first: i32, last: i32 ```
    pub fn QBaseBeginRemoveColumns(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        C.QSortFilterProxyModel_QBaseBeginRemoveColumns(@ptrCast(self), @ptrCast(parent), @intCast(first), @intCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, ?*C.QModelIndex, i32, i32) callconv(.c) void ```
    pub fn OnBeginRemoveColumns(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        C.QSortFilterProxyModel_OnBeginRemoveColumns(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn EndRemoveColumns(self: ?*anyopaque) void {
        C.QSortFilterProxyModel_EndRemoveColumns(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn QBaseEndRemoveColumns(self: ?*anyopaque) void {
        C.QSortFilterProxyModel_QBaseEndRemoveColumns(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn () callconv(.c) void ```
    pub fn OnEndRemoveColumns(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QSortFilterProxyModel_OnEndRemoveColumns(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, sourceParent: ?*C.QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: ?*C.QModelIndex, destinationColumn: i32 ```
    pub fn BeginMoveColumns(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceFirst: i32, sourceLast: i32, destinationParent: ?*anyopaque, destinationColumn: i32) bool {
        return C.QSortFilterProxyModel_BeginMoveColumns(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceFirst), @intCast(sourceLast), @ptrCast(destinationParent), @intCast(destinationColumn));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, sourceParent: ?*C.QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: ?*C.QModelIndex, destinationColumn: i32 ```
    pub fn QBaseBeginMoveColumns(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceFirst: i32, sourceLast: i32, destinationParent: ?*anyopaque, destinationColumn: i32) bool {
        return C.QSortFilterProxyModel_QBaseBeginMoveColumns(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceFirst), @intCast(sourceLast), @ptrCast(destinationParent), @intCast(destinationColumn));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, ?*C.QModelIndex, i32, i32, ?*C.QModelIndex, i32) callconv(.c) bool ```
    pub fn OnBeginMoveColumns(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        C.QSortFilterProxyModel_OnBeginMoveColumns(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn EndMoveColumns(self: ?*anyopaque) void {
        C.QSortFilterProxyModel_EndMoveColumns(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn QBaseEndMoveColumns(self: ?*anyopaque) void {
        C.QSortFilterProxyModel_QBaseEndMoveColumns(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn () callconv(.c) void ```
    pub fn OnEndMoveColumns(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QSortFilterProxyModel_OnEndMoveColumns(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn BeginResetModel(self: ?*anyopaque) void {
        C.QSortFilterProxyModel_BeginResetModel(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn QBaseBeginResetModel(self: ?*anyopaque) void {
        C.QSortFilterProxyModel_QBaseBeginResetModel(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn () callconv(.c) void ```
    pub fn OnBeginResetModel(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QSortFilterProxyModel_OnBeginResetModel(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn EndResetModel(self: ?*anyopaque) void {
        C.QSortFilterProxyModel_EndResetModel(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn QBaseEndResetModel(self: ?*anyopaque) void {
        C.QSortFilterProxyModel_QBaseEndResetModel(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn () callconv(.c) void ```
    pub fn OnEndResetModel(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QSortFilterProxyModel_OnEndResetModel(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, from: ?*C.QModelIndex, to: ?*C.QModelIndex ```
    pub fn ChangePersistentIndex(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque) void {
        C.QSortFilterProxyModel_ChangePersistentIndex(@ptrCast(self), @ptrCast(from), @ptrCast(to));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, from: ?*C.QModelIndex, to: ?*C.QModelIndex ```
    pub fn QBaseChangePersistentIndex(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque) void {
        C.QSortFilterProxyModel_QBaseChangePersistentIndex(@ptrCast(self), @ptrCast(from), @ptrCast(to));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, ?*C.QModelIndex, ?*C.QModelIndex) callconv(.c) void ```
    pub fn OnChangePersistentIndex(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QSortFilterProxyModel_OnChangePersistentIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, from: []?*C.QModelIndex, to: []?*C.QModelIndex ```
    pub fn ChangePersistentIndexList(self: ?*anyopaque, from: []?*C.QModelIndex, to: []?*C.QModelIndex) void {
        const from_list = C.struct_libqt_list{
            .len = from.len,
            .data = @ptrCast(from.ptr),
        };
        const to_list = C.struct_libqt_list{
            .len = to.len,
            .data = @ptrCast(to.ptr),
        };
        C.QSortFilterProxyModel_ChangePersistentIndexList(@ptrCast(self), from_list, to_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, from: []?*C.QModelIndex, to: []?*C.QModelIndex ```
    pub fn QBaseChangePersistentIndexList(self: ?*anyopaque, from: []?*C.QModelIndex, to: []?*C.QModelIndex) void {
        const from_list = C.struct_libqt_list{
            .len = from.len,
            .data = @ptrCast(from.ptr),
        };
        const to_list = C.struct_libqt_list{
            .len = to.len,
            .data = @ptrCast(to.ptr),
        };
        C.QSortFilterProxyModel_QBaseChangePersistentIndexList(@ptrCast(self), from_list, to_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, []?*C.QModelIndex, []?*C.QModelIndex) callconv(.c) void ```
    pub fn OnChangePersistentIndexList(self: ?*anyopaque, slot: fn (?*anyopaque, []?*C.QModelIndex, []?*C.QModelIndex) callconv(.c) void) void {
        C.QSortFilterProxyModel_OnChangePersistentIndexList(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, allocator: std.mem.Allocator ```
    pub fn PersistentIndexList(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QModelIndex {
        const _arr: C.struct_libqt_list = C.QSortFilterProxyModel_PersistentIndexList(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QModelIndex, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, allocator: std.mem.Allocator ```
    pub fn QBasePersistentIndexList(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QModelIndex {
        const _arr: C.struct_libqt_list = C.QSortFilterProxyModel_QBasePersistentIndexList(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QModelIndex, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QAbstractItemModel
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn () callconv(.c) []?*C.QModelIndex ```
    pub fn OnPersistentIndexList(self: ?*anyopaque, slot: fn () callconv(.c) []?*C.QModelIndex) void {
        C.QSortFilterProxyModel_OnPersistentIndexList(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QSortFilterProxyModel_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QSortFilterProxyModel_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QSortFilterProxyModel_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QSortFilterProxyModel_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QSortFilterProxyModel_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QSortFilterProxyModel_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QSortFilterProxyModel_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QSortFilterProxyModel_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QSortFilterProxyModel_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QSortFilterProxyModel_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QSortFilterProxyModel_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSortFilterProxyModel, slot: fn (?*C.QSortFilterProxyModel, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QSortFilterProxyModel_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QSortFilterProxyModel ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QSortFilterProxyModel_Delete(@ptrCast(self));
    }
};
