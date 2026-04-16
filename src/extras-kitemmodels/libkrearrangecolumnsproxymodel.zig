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

/// ### [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html)
pub const KRearrangeColumnsProxyModel = extern struct {
    /// ### [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KRearrangeColumnsProxyModel,

    pub const _is_KRearrangeColumnsProxyModel = {};
    pub const _is_QIdentityProxyModel = {};
    pub const _is_QAbstractProxyModel = {};
    pub const _is_QAbstractItemModel = {};
    pub const _is_QObject = {};

    /// New constructs a new KRearrangeColumnsProxyModel object.
    ///
    pub fn New() KRearrangeColumnsProxyModel {
        return .{ .ptr = qtc.KRearrangeColumnsProxyModel_new() };
    }

    /// New2 constructs a new KRearrangeColumnsProxyModel object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) KRearrangeColumnsProxyModel {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KRearrangeColumnsProxyModel_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    pub fn MetaObject(self: KRearrangeColumnsProxyModel) QMetaObject {
        return .{ .ptr = qtc.KRearrangeColumnsProxyModel_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KRearrangeColumnsProxyModel, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KRearrangeColumnsProxyModel_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    pub fn SuperMetaObject(self: KRearrangeColumnsProxyModel) QMetaObject {
        return .{ .ptr = qtc.KRearrangeColumnsProxyModel_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KRearrangeColumnsProxyModel, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KRearrangeColumnsProxyModel_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KRearrangeColumnsProxyModel_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KRearrangeColumnsProxyModel, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KRearrangeColumnsProxyModel_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KRearrangeColumnsProxyModel, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KRearrangeColumnsProxyModel_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KRearrangeColumnsProxyModel_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KRearrangeColumnsProxyModel, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KRearrangeColumnsProxyModel_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krearrangecolumnsproxymodel.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#setSourceColumns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` columns: []i32 `
    ///
    pub fn SetSourceColumns(self: KRearrangeColumnsProxyModel, columns: []i32) void {
        const columns_list = qtc.libqt_list{
            .len = columns.len,
            .data = columns.ptr,
        };
        qtc.KRearrangeColumnsProxyModel_SetSourceColumns(@ptrCast(self.ptr), columns_list);
    }

    /// ### [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#columnCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn ColumnCount(self: KRearrangeColumnsProxyModel, parent: anytype) i32 {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.KRearrangeColumnsProxyModel_ColumnCount(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#columnCount)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, parent: QModelIndex) callconv(.c) i32 `
    ///
    pub fn OnColumnCount(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QModelIndex) callconv(.c) i32) void {
        qtc.KRearrangeColumnsProxyModel_OnColumnCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperColumnCount` instead
    ///
    pub const QBaseColumnCount = SuperColumnCount;

    /// ### [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#columnCount)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn SuperColumnCount(self: KRearrangeColumnsProxyModel, parent: anytype) i32 {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.KRearrangeColumnsProxyModel_SuperColumnCount(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#rowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn RowCount(self: KRearrangeColumnsProxyModel, parent: anytype) i32 {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.KRearrangeColumnsProxyModel_RowCount(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#rowCount)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, parent: QModelIndex) callconv(.c) i32 `
    ///
    pub fn OnRowCount(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QModelIndex) callconv(.c) i32) void {
        qtc.KRearrangeColumnsProxyModel_OnRowCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRowCount` instead
    ///
    pub const QBaseRowCount = SuperRowCount;

    /// ### [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#rowCount)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn SuperRowCount(self: KRearrangeColumnsProxyModel, parent: anytype) i32 {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.KRearrangeColumnsProxyModel_SuperRowCount(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#index)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn Index(self: KRearrangeColumnsProxyModel, row: i32, column: i32, parent: anytype) QModelIndex {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return .{ .ptr = qtc.KRearrangeColumnsProxyModel_Index(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#index)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, row: i32, column: i32, parent: QModelIndex) callconv(.c) QModelIndex `
    ///
    pub fn OnIndex(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, i32, i32, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.KRearrangeColumnsProxyModel_OnIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIndex` instead
    ///
    pub const QBaseIndex = SuperIndex;

    /// ### [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#index)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn SuperIndex(self: KRearrangeColumnsProxyModel, row: i32, column: i32, parent: anytype) QModelIndex {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return .{ .ptr = qtc.KRearrangeColumnsProxyModel_SuperIndex(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` child: QModelIndex `
    ///
    pub fn Parent(self: KRearrangeColumnsProxyModel, child: anytype) QModelIndex {
        comptime _ = @TypeOf(child)._is_QModelIndex;
        return .{ .ptr = qtc.KRearrangeColumnsProxyModel_Parent(@ptrCast(self.ptr), @ptrCast(child.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#parent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, child: QModelIndex) callconv(.c) QModelIndex `
    ///
    pub fn OnParent(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.KRearrangeColumnsProxyModel_OnParent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperParent` instead
    ///
    pub const QBaseParent = SuperParent;

    /// ### [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#parent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` child: QModelIndex `
    ///
    pub fn SuperParent(self: KRearrangeColumnsProxyModel, child: anytype) QModelIndex {
        comptime _ = @TypeOf(child)._is_QModelIndex;
        return .{ .ptr = qtc.KRearrangeColumnsProxyModel_SuperParent(@ptrCast(self.ptr), @ptrCast(child.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#mapFromSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` sourceIndex: QModelIndex `
    ///
    pub fn MapFromSource(self: KRearrangeColumnsProxyModel, sourceIndex: anytype) QModelIndex {
        comptime _ = @TypeOf(sourceIndex)._is_QModelIndex;
        return .{ .ptr = qtc.KRearrangeColumnsProxyModel_MapFromSource(@ptrCast(self.ptr), @ptrCast(sourceIndex.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#mapFromSource)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, sourceIndex: QModelIndex) callconv(.c) QModelIndex `
    ///
    pub fn OnMapFromSource(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.KRearrangeColumnsProxyModel_OnMapFromSource(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMapFromSource` instead
    ///
    pub const QBaseMapFromSource = SuperMapFromSource;

    /// ### [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#mapFromSource)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` sourceIndex: QModelIndex `
    ///
    pub fn SuperMapFromSource(self: KRearrangeColumnsProxyModel, sourceIndex: anytype) QModelIndex {
        comptime _ = @TypeOf(sourceIndex)._is_QModelIndex;
        return .{ .ptr = qtc.KRearrangeColumnsProxyModel_SuperMapFromSource(@ptrCast(self.ptr), @ptrCast(sourceIndex.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#mapToSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` proxyIndex: QModelIndex `
    ///
    pub fn MapToSource(self: KRearrangeColumnsProxyModel, proxyIndex: anytype) QModelIndex {
        comptime _ = @TypeOf(proxyIndex)._is_QModelIndex;
        return .{ .ptr = qtc.KRearrangeColumnsProxyModel_MapToSource(@ptrCast(self.ptr), @ptrCast(proxyIndex.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#mapToSource)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, proxyIndex: QModelIndex) callconv(.c) QModelIndex `
    ///
    pub fn OnMapToSource(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.KRearrangeColumnsProxyModel_OnMapToSource(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMapToSource` instead
    ///
    pub const QBaseMapToSource = SuperMapToSource;

    /// ### [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#mapToSource)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` proxyIndex: QModelIndex `
    ///
    pub fn SuperMapToSource(self: KRearrangeColumnsProxyModel, proxyIndex: anytype) QModelIndex {
        comptime _ = @TypeOf(proxyIndex)._is_QModelIndex;
        return .{ .ptr = qtc.KRearrangeColumnsProxyModel_SuperMapToSource(@ptrCast(self.ptr), @ptrCast(proxyIndex.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#headerData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` role: i32 `
    ///
    pub fn HeaderData(self: KRearrangeColumnsProxyModel, section: i32, orientation: i32, role: i32) QVariant {
        return .{ .ptr = qtc.KRearrangeColumnsProxyModel_HeaderData(@ptrCast(self.ptr), @bitCast(section), @bitCast(orientation), @bitCast(role)) };
    }

    /// ### [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#headerData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, section: i32, orientation: qnamespace_enums.Orientation, role: i32) callconv(.c) QVariant `
    ///
    pub fn OnHeaderData(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, i32, i32, i32) callconv(.c) QVariant) void {
        qtc.KRearrangeColumnsProxyModel_OnHeaderData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperHeaderData` instead
    ///
    pub const QBaseHeaderData = SuperHeaderData;

    /// ### [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#headerData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` role: i32 `
    ///
    pub fn SuperHeaderData(self: KRearrangeColumnsProxyModel, section: i32, orientation: i32, role: i32) QVariant {
        return .{ .ptr = qtc.KRearrangeColumnsProxyModel_SuperHeaderData(@ptrCast(self.ptr), @bitCast(section), @bitCast(orientation), @bitCast(role)) };
    }

    /// ### [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#hasChildren)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn HasChildren(self: KRearrangeColumnsProxyModel, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.KRearrangeColumnsProxyModel_HasChildren(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#hasChildren)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn OnHasChildren(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QModelIndex) callconv(.c) bool) void {
        qtc.KRearrangeColumnsProxyModel_OnHasChildren(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperHasChildren` instead
    ///
    pub const QBaseHasChildren = SuperHasChildren;

    /// ### [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#hasChildren)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn SuperHasChildren(self: KRearrangeColumnsProxyModel, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.KRearrangeColumnsProxyModel_SuperHasChildren(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#sibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` idx: QModelIndex `
    ///
    pub fn Sibling(self: KRearrangeColumnsProxyModel, row: i32, column: i32, idx: anytype) QModelIndex {
        comptime _ = @TypeOf(idx)._is_QModelIndex;
        return .{ .ptr = qtc.KRearrangeColumnsProxyModel_Sibling(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(idx.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#sibling)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, row: i32, column: i32, idx: QModelIndex) callconv(.c) QModelIndex `
    ///
    pub fn OnSibling(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, i32, i32, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.KRearrangeColumnsProxyModel_OnSibling(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSibling` instead
    ///
    pub const QBaseSibling = SuperSibling;

    /// ### [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#sibling)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` idx: QModelIndex `
    ///
    pub fn SuperSibling(self: KRearrangeColumnsProxyModel, row: i32, column: i32, idx: anytype) QModelIndex {
        comptime _ = @TypeOf(idx)._is_QModelIndex;
        return .{ .ptr = qtc.KRearrangeColumnsProxyModel_SuperSibling(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(idx.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#proxyColumnForSourceColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` sourceColumn: i32 `
    ///
    pub fn ProxyColumnForSourceColumn(self: KRearrangeColumnsProxyModel, sourceColumn: i32) i32 {
        return qtc.KRearrangeColumnsProxyModel_ProxyColumnForSourceColumn(@ptrCast(self.ptr), @bitCast(sourceColumn));
    }

    /// ### [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#sourceColumnForProxyColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` proxyColumn: i32 `
    ///
    pub fn SourceColumnForProxyColumn(self: KRearrangeColumnsProxyModel, proxyColumn: i32) i32 {
        return qtc.KRearrangeColumnsProxyModel_SourceColumnForProxyColumn(@ptrCast(self.ptr), @bitCast(proxyColumn));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krearrangecolumnsproxymodel.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krearrangecolumnsproxymodel.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#handleSourceLayoutChanges)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    pub fn HandleSourceLayoutChanges(self: KRearrangeColumnsProxyModel) bool {
        return qtc.QIdentityProxyModel_HandleSourceLayoutChanges(@ptrCast(self.ptr));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#handleSourceDataChanges)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    pub fn HandleSourceDataChanges(self: KRearrangeColumnsProxyModel) bool {
        return qtc.QIdentityProxyModel_HandleSourceDataChanges(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sourceModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    pub fn SourceModel(self: KRearrangeColumnsProxyModel) QAbstractItemModel {
        return .{ .ptr = qtc.QAbstractProxyModel_SourceModel(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn HasIndex(self: KRearrangeColumnsProxyModel, row: i32, column: i32) bool {
        return qtc.QAbstractItemModel_HasIndex(@ptrCast(self.ptr), @bitCast(row), @bitCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` row: i32 `
    ///
    pub fn InsertRow(self: KRearrangeColumnsProxyModel, row: i32) bool {
        return qtc.QAbstractItemModel_InsertRow(@ptrCast(self.ptr), @bitCast(row));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` column: i32 `
    ///
    pub fn InsertColumn(self: KRearrangeColumnsProxyModel, column: i32) bool {
        return qtc.QAbstractItemModel_InsertColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` row: i32 `
    ///
    pub fn RemoveRow(self: KRearrangeColumnsProxyModel, row: i32) bool {
        return qtc.QAbstractItemModel_RemoveRow(@ptrCast(self.ptr), @bitCast(row));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` column: i32 `
    ///
    pub fn RemoveColumn(self: KRearrangeColumnsProxyModel, column: i32) bool {
        return qtc.QAbstractItemModel_RemoveColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceRow: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn MoveRow(self: KRearrangeColumnsProxyModel, sourceParent: anytype, sourceRow: i32, destinationParent: anytype, destinationChild: i32) bool {
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceColumn: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn MoveColumn(self: KRearrangeColumnsProxyModel, sourceParent: anytype, sourceColumn: i32, destinationParent: anytype, destinationChild: i32) bool {
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn CheckIndex(self: KRearrangeColumnsProxyModel, index: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QAbstractItemModel_CheckIndex(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` topLeft: QModelIndex `
    ///
    /// ` bottomRight: QModelIndex `
    ///
    pub fn DataChanged(self: KRearrangeColumnsProxyModel, topLeft: anytype, bottomRight: anytype) void {
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, topLeft: QModelIndex, bottomRight: QModelIndex) callconv(.c) void `
    ///
    pub fn OnDataChanged(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QModelIndex, QModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_DataChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn HeaderDataChanged(self: KRearrangeColumnsProxyModel, orientation: i32, first: i32, last: i32) void {
        qtc.QAbstractItemModel_HeaderDataChanged(@ptrCast(self.ptr), @bitCast(orientation), @bitCast(first), @bitCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, orientation: qnamespace_enums.Orientation, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnHeaderDataChanged(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, i32, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_HeaderDataChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    pub fn LayoutChanged(self: KRearrangeColumnsProxyModel) void {
        qtc.QAbstractItemModel_LayoutChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel) callconv(.c) void `
    ///
    pub fn OnLayoutChanged(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    pub fn LayoutAboutToBeChanged(self: KRearrangeColumnsProxyModel) void {
        qtc.QAbstractItemModel_LayoutAboutToBeChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel) callconv(.c) void `
    ///
    pub fn OnLayoutAboutToBeChanged(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutAboutToBeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn HasIndex3(self: KRearrangeColumnsProxyModel, row: i32, column: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QAbstractItemModel_HasIndex3(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(parent.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn InsertRow2(self: KRearrangeColumnsProxyModel, row: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QAbstractItemModel_InsertRow2(@ptrCast(self.ptr), @bitCast(row), @ptrCast(parent.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn InsertColumn2(self: KRearrangeColumnsProxyModel, column: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QAbstractItemModel_InsertColumn2(@ptrCast(self.ptr), @bitCast(column), @ptrCast(parent.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn RemoveRow2(self: KRearrangeColumnsProxyModel, row: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QAbstractItemModel_RemoveRow2(@ptrCast(self.ptr), @bitCast(row), @ptrCast(parent.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn RemoveColumn2(self: KRearrangeColumnsProxyModel, column: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QAbstractItemModel_RemoveColumn2(@ptrCast(self.ptr), @bitCast(column), @ptrCast(parent.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` options: flag of qabstractitemmodel_enums.CheckIndexOption `
    ///
    pub fn CheckIndex2(self: KRearrangeColumnsProxyModel, index: anytype, options: i32) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QAbstractItemModel_CheckIndex2(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(options));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` topLeft: QModelIndex `
    ///
    /// ` bottomRight: QModelIndex `
    ///
    /// ` roles: []i32 `
    ///
    pub fn DataChanged3(self: KRearrangeColumnsProxyModel, topLeft: anytype, bottomRight: anytype, roles: []i32) void {
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, topLeft: QModelIndex, bottomRight: QModelIndex, roles: qtc.libqt_list ([]i32)) callconv(.c) void `
    ///
    pub fn OnDataChanged3(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QModelIndex, QModelIndex, qtc.libqt_list) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_DataChanged3(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` parents: []QPersistentModelIndex `
    ///
    pub fn LayoutChanged1(self: KRearrangeColumnsProxyModel, parents: []QPersistentModelIndex) void {
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, parents: qtc.libqt_list ([]QPersistentModelIndex)) callconv(.c) void `
    ///
    pub fn OnLayoutChanged1(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, qtc.libqt_list) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutChanged1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` parents: []QPersistentModelIndex `
    ///
    /// ` hint: qabstractitemmodel_enums.LayoutChangeHint `
    ///
    pub fn LayoutChanged2(self: KRearrangeColumnsProxyModel, parents: []QPersistentModelIndex, hint: i32) void {
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, parents: qtc.libqt_list ([]QPersistentModelIndex), hint: qabstractitemmodel_enums.LayoutChangeHint) callconv(.c) void `
    ///
    pub fn OnLayoutChanged2(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, qtc.libqt_list, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutChanged2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` parents: []QPersistentModelIndex `
    ///
    pub fn LayoutAboutToBeChanged1(self: KRearrangeColumnsProxyModel, parents: []QPersistentModelIndex) void {
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, parents: qtc.libqt_list ([]QPersistentModelIndex)) callconv(.c) void `
    ///
    pub fn OnLayoutAboutToBeChanged1(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, qtc.libqt_list) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutAboutToBeChanged1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` parents: []QPersistentModelIndex `
    ///
    /// ` hint: qabstractitemmodel_enums.LayoutChangeHint `
    ///
    pub fn LayoutAboutToBeChanged2(self: KRearrangeColumnsProxyModel, parents: []QPersistentModelIndex, hint: i32) void {
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, parents: qtc.libqt_list ([]QPersistentModelIndex), hint: qabstractitemmodel_enums.LayoutChangeHint) callconv(.c) void `
    ///
    pub fn OnLayoutAboutToBeChanged2(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, qtc.libqt_list, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutAboutToBeChanged2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KRearrangeColumnsProxyModel, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krearrangecolumnsproxymodel.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KRearrangeColumnsProxyModel, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    pub fn IsWidgetType(self: KRearrangeColumnsProxyModel) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    pub fn IsWindowType(self: KRearrangeColumnsProxyModel) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    pub fn IsQuickItemType(self: KRearrangeColumnsProxyModel) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    pub fn SignalsBlocked(self: KRearrangeColumnsProxyModel) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KRearrangeColumnsProxyModel, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    pub fn Thread(self: KRearrangeColumnsProxyModel) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KRearrangeColumnsProxyModel, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KRearrangeColumnsProxyModel, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KRearrangeColumnsProxyModel, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KRearrangeColumnsProxyModel, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KRearrangeColumnsProxyModel, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KRearrangeColumnsProxyModel, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("krearrangecolumnsproxymodel.Children: Memory allocation failed");
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KRearrangeColumnsProxyModel, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KRearrangeColumnsProxyModel, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KRearrangeColumnsProxyModel, obj: anytype) void {
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KRearrangeColumnsProxyModel, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    pub fn Disconnect3(self: KRearrangeColumnsProxyModel) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KRearrangeColumnsProxyModel, receiver: anytype) bool {
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    pub fn DumpObjectTree(self: KRearrangeColumnsProxyModel) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    pub fn DumpObjectInfo(self: KRearrangeColumnsProxyModel) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KRearrangeColumnsProxyModel, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KRearrangeColumnsProxyModel, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KRearrangeColumnsProxyModel, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("krearrangecolumnsproxymodel.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("krearrangecolumnsproxymodel.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    pub fn BindingStorage(self: KRearrangeColumnsProxyModel) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    pub fn BindingStorage2(self: KRearrangeColumnsProxyModel) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    pub fn Destroyed(self: KRearrangeColumnsProxyModel) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KRearrangeColumnsProxyModel, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    pub fn DeleteLater(self: KRearrangeColumnsProxyModel) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KRearrangeColumnsProxyModel, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KRearrangeColumnsProxyModel, time: i64, timerType: i32) i32 {
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KRearrangeColumnsProxyModel, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KRearrangeColumnsProxyModel, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KRearrangeColumnsProxyModel, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KRearrangeColumnsProxyModel, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KRearrangeColumnsProxyModel, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KRearrangeColumnsProxyModel, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#dropMimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
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
    pub fn DropMimeData(self: KRearrangeColumnsProxyModel, data: anytype, action: i32, row: i32, column: i32, parent: anytype) bool {
        comptime _ = @TypeOf(data)._is_QMimeData;
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.KRearrangeColumnsProxyModel_DropMimeData(@ptrCast(self.ptr), @ptrCast(data.ptr), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(parent.ptr));
    }

    /// ### DEPRECATED: Use `SuperDropMimeData` instead
    ///
    pub const QBaseDropMimeData = SuperDropMimeData;

    /// Inherited from QIdentityProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#dropMimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
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
    pub fn SuperDropMimeData(self: KRearrangeColumnsProxyModel, data: anytype, action: i32, row: i32, column: i32, parent: anytype) bool {
        comptime _ = @TypeOf(data)._is_QMimeData;
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.KRearrangeColumnsProxyModel_SuperDropMimeData(@ptrCast(self.ptr), @ptrCast(data.ptr), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(parent.ptr));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#dropMimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, data: QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn OnDropMimeData(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QMimeData, i32, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.KRearrangeColumnsProxyModel_OnDropMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapSelectionFromSource)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` selection: QItemSelection `
    ///
    pub fn MapSelectionFromSource(self: KRearrangeColumnsProxyModel, selection: anytype) QItemSelection {
        comptime _ = @TypeOf(selection)._is_QItemSelection;
        return .{ .ptr = qtc.KRearrangeColumnsProxyModel_MapSelectionFromSource(@ptrCast(self.ptr), @ptrCast(selection.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperMapSelectionFromSource` instead
    ///
    pub const QBaseMapSelectionFromSource = SuperMapSelectionFromSource;

    /// Inherited from QIdentityProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapSelectionFromSource)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` selection: QItemSelection `
    ///
    pub fn SuperMapSelectionFromSource(self: KRearrangeColumnsProxyModel, selection: anytype) QItemSelection {
        comptime _ = @TypeOf(selection)._is_QItemSelection;
        return .{ .ptr = qtc.KRearrangeColumnsProxyModel_SuperMapSelectionFromSource(@ptrCast(self.ptr), @ptrCast(selection.ptr)) };
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapSelectionFromSource)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, selection: QItemSelection) callconv(.c) QItemSelection `
    ///
    pub fn OnMapSelectionFromSource(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QItemSelection) callconv(.c) QItemSelection) void {
        qtc.KRearrangeColumnsProxyModel_OnMapSelectionFromSource(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapSelectionToSource)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` selection: QItemSelection `
    ///
    pub fn MapSelectionToSource(self: KRearrangeColumnsProxyModel, selection: anytype) QItemSelection {
        comptime _ = @TypeOf(selection)._is_QItemSelection;
        return .{ .ptr = qtc.KRearrangeColumnsProxyModel_MapSelectionToSource(@ptrCast(self.ptr), @ptrCast(selection.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperMapSelectionToSource` instead
    ///
    pub const QBaseMapSelectionToSource = SuperMapSelectionToSource;

    /// Inherited from QIdentityProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapSelectionToSource)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` selection: QItemSelection `
    ///
    pub fn SuperMapSelectionToSource(self: KRearrangeColumnsProxyModel, selection: anytype) QItemSelection {
        comptime _ = @TypeOf(selection)._is_QItemSelection;
        return .{ .ptr = qtc.KRearrangeColumnsProxyModel_SuperMapSelectionToSource(@ptrCast(self.ptr), @ptrCast(selection.ptr)) };
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapSelectionToSource)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, selection: QItemSelection) callconv(.c) QItemSelection `
    ///
    pub fn OnMapSelectionToSource(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QItemSelection) callconv(.c) QItemSelection) void {
        qtc.KRearrangeColumnsProxyModel_OnMapSelectionToSource(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#match)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
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
    pub fn Match(self: KRearrangeColumnsProxyModel, allocator: std.mem.Allocator, start: anytype, role: i32, value: anytype, hits: i32, flags: i32) []QModelIndex {
        comptime _ = @TypeOf(start)._is_QModelIndex;
        comptime _ = @TypeOf(value)._is_QVariant;
        const _arr: qtc.libqt_list = qtc.KRearrangeColumnsProxyModel_Match(@ptrCast(self.ptr), @ptrCast(start.ptr), @bitCast(role), @ptrCast(value.ptr), @bitCast(hits), @bitCast(flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("krearrangecolumnsproxymodel.Match: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperMatch` instead
    ///
    pub const QBaseMatch = SuperMatch;

    /// Inherited from QIdentityProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#match)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
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
    pub fn SuperMatch(self: KRearrangeColumnsProxyModel, allocator: std.mem.Allocator, start: anytype, role: i32, value: anytype, hits: i32, flags: i32) []QModelIndex {
        comptime _ = @TypeOf(start)._is_QModelIndex;
        comptime _ = @TypeOf(value)._is_QVariant;
        const _arr: qtc.libqt_list = qtc.KRearrangeColumnsProxyModel_SuperMatch(@ptrCast(self.ptr), @ptrCast(start.ptr), @bitCast(role), @ptrCast(value.ptr), @bitCast(hits), @bitCast(flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("krearrangecolumnsproxymodel.Match: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#match)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, start: QModelIndex, role: i32, value: QVariant, hits: i32, flags: flag of qnamespace_enums.MatchFlag) callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QModelIndex `
    ///
    pub fn OnMatch(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QModelIndex, i32, QVariant, i32, i32) callconv(.c) qtc.libqt_list) void {
        qtc.KRearrangeColumnsProxyModel_OnMatch(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#setSourceModel)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` sourceModel: QAbstractItemModel `
    ///
    pub fn SetSourceModel(self: KRearrangeColumnsProxyModel, sourceModel: anytype) void {
        comptime _ = @TypeOf(sourceModel)._is_QAbstractItemModel;
        qtc.KRearrangeColumnsProxyModel_SetSourceModel(@ptrCast(self.ptr), @ptrCast(sourceModel.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetSourceModel` instead
    ///
    pub const QBaseSetSourceModel = SuperSetSourceModel;

    /// Inherited from QIdentityProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#setSourceModel)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` sourceModel: QAbstractItemModel `
    ///
    pub fn SuperSetSourceModel(self: KRearrangeColumnsProxyModel, sourceModel: anytype) void {
        comptime _ = @TypeOf(sourceModel)._is_QAbstractItemModel;
        qtc.KRearrangeColumnsProxyModel_SuperSetSourceModel(@ptrCast(self.ptr), @ptrCast(sourceModel.ptr));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#setSourceModel)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, sourceModel: QAbstractItemModel) callconv(.c) void `
    ///
    pub fn OnSetSourceModel(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QAbstractItemModel) callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnSetSourceModel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#insertColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn InsertColumns(self: KRearrangeColumnsProxyModel, column: i32, count: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.KRearrangeColumnsProxyModel_InsertColumns(@ptrCast(self.ptr), @bitCast(column), @bitCast(count), @ptrCast(parent.ptr));
    }

    /// ### DEPRECATED: Use `SuperInsertColumns` instead
    ///
    pub const QBaseInsertColumns = SuperInsertColumns;

    /// Inherited from QIdentityProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#insertColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn SuperInsertColumns(self: KRearrangeColumnsProxyModel, column: i32, count: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.KRearrangeColumnsProxyModel_SuperInsertColumns(@ptrCast(self.ptr), @bitCast(column), @bitCast(count), @ptrCast(parent.ptr));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#insertColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, column: i32, count: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn OnInsertColumns(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.KRearrangeColumnsProxyModel_OnInsertColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#insertRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn InsertRows(self: KRearrangeColumnsProxyModel, row: i32, count: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.KRearrangeColumnsProxyModel_InsertRows(@ptrCast(self.ptr), @bitCast(row), @bitCast(count), @ptrCast(parent.ptr));
    }

    /// ### DEPRECATED: Use `SuperInsertRows` instead
    ///
    pub const QBaseInsertRows = SuperInsertRows;

    /// Inherited from QIdentityProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#insertRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn SuperInsertRows(self: KRearrangeColumnsProxyModel, row: i32, count: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.KRearrangeColumnsProxyModel_SuperInsertRows(@ptrCast(self.ptr), @bitCast(row), @bitCast(count), @ptrCast(parent.ptr));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#insertRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, row: i32, count: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn OnInsertRows(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.KRearrangeColumnsProxyModel_OnInsertRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#removeColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn RemoveColumns(self: KRearrangeColumnsProxyModel, column: i32, count: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.KRearrangeColumnsProxyModel_RemoveColumns(@ptrCast(self.ptr), @bitCast(column), @bitCast(count), @ptrCast(parent.ptr));
    }

    /// ### DEPRECATED: Use `SuperRemoveColumns` instead
    ///
    pub const QBaseRemoveColumns = SuperRemoveColumns;

    /// Inherited from QIdentityProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#removeColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn SuperRemoveColumns(self: KRearrangeColumnsProxyModel, column: i32, count: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.KRearrangeColumnsProxyModel_SuperRemoveColumns(@ptrCast(self.ptr), @bitCast(column), @bitCast(count), @ptrCast(parent.ptr));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#removeColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, column: i32, count: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn OnRemoveColumns(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.KRearrangeColumnsProxyModel_OnRemoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#removeRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn RemoveRows(self: KRearrangeColumnsProxyModel, row: i32, count: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.KRearrangeColumnsProxyModel_RemoveRows(@ptrCast(self.ptr), @bitCast(row), @bitCast(count), @ptrCast(parent.ptr));
    }

    /// ### DEPRECATED: Use `SuperRemoveRows` instead
    ///
    pub const QBaseRemoveRows = SuperRemoveRows;

    /// Inherited from QIdentityProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#removeRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn SuperRemoveRows(self: KRearrangeColumnsProxyModel, row: i32, count: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.KRearrangeColumnsProxyModel_SuperRemoveRows(@ptrCast(self.ptr), @bitCast(row), @bitCast(count), @ptrCast(parent.ptr));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#removeRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, row: i32, count: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn OnRemoveRows(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.KRearrangeColumnsProxyModel_OnRemoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#moveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
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
    pub fn MoveRows(self: KRearrangeColumnsProxyModel, sourceParent: anytype, sourceRow: i32, count: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.KRearrangeColumnsProxyModel_MoveRows(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceRow), @bitCast(count), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
    }

    /// ### DEPRECATED: Use `SuperMoveRows` instead
    ///
    pub const QBaseMoveRows = SuperMoveRows;

    /// Inherited from QIdentityProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#moveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
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
    pub fn SuperMoveRows(self: KRearrangeColumnsProxyModel, sourceParent: anytype, sourceRow: i32, count: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.KRearrangeColumnsProxyModel_SuperMoveRows(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceRow), @bitCast(count), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#moveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, sourceParent: QModelIndex, sourceRow: i32, count: i32, destinationParent: QModelIndex, destinationChild: i32) callconv(.c) bool `
    ///
    pub fn OnMoveRows(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) bool) void {
        qtc.KRearrangeColumnsProxyModel_OnMoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#moveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
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
    pub fn MoveColumns(self: KRearrangeColumnsProxyModel, sourceParent: anytype, sourceColumn: i32, count: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.KRearrangeColumnsProxyModel_MoveColumns(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceColumn), @bitCast(count), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
    }

    /// ### DEPRECATED: Use `SuperMoveColumns` instead
    ///
    pub const QBaseMoveColumns = SuperMoveColumns;

    /// Inherited from QIdentityProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#moveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
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
    pub fn SuperMoveColumns(self: KRearrangeColumnsProxyModel, sourceParent: anytype, sourceColumn: i32, count: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.KRearrangeColumnsProxyModel_SuperMoveColumns(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceColumn), @bitCast(count), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#moveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, sourceParent: QModelIndex, sourceColumn: i32, count: i32, destinationParent: QModelIndex, destinationChild: i32) callconv(.c) bool `
    ///
    pub fn OnMoveColumns(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) bool) void {
        qtc.KRearrangeColumnsProxyModel_OnMoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    pub fn Submit(self: KRearrangeColumnsProxyModel) bool {
        return qtc.KRearrangeColumnsProxyModel_Submit(@ptrCast(self.ptr));
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    pub fn SuperSubmit(self: KRearrangeColumnsProxyModel) bool {
        return qtc.KRearrangeColumnsProxyModel_SuperSubmit(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnSubmit(self: KRearrangeColumnsProxyModel, callback: *const fn () callconv(.c) bool) void {
        qtc.KRearrangeColumnsProxyModel_OnSubmit(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    pub fn Revert(self: KRearrangeColumnsProxyModel) void {
        qtc.KRearrangeColumnsProxyModel_Revert(@ptrCast(self.ptr));
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    pub fn SuperRevert(self: KRearrangeColumnsProxyModel) void {
        qtc.KRearrangeColumnsProxyModel_SuperRevert(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnRevert(self: KRearrangeColumnsProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnRevert(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#data)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` proxyIndex: QModelIndex `
    ///
    /// ` role: i32 `
    ///
    pub fn Data(self: KRearrangeColumnsProxyModel, proxyIndex: anytype, role: i32) QVariant {
        comptime _ = @TypeOf(proxyIndex)._is_QModelIndex;
        return .{ .ptr = qtc.KRearrangeColumnsProxyModel_Data(@ptrCast(self.ptr), @ptrCast(proxyIndex.ptr), @bitCast(role)) };
    }

    /// ### DEPRECATED: Use `SuperData` instead
    ///
    pub const QBaseData = SuperData;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#data)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` proxyIndex: QModelIndex `
    ///
    /// ` role: i32 `
    ///
    pub fn SuperData(self: KRearrangeColumnsProxyModel, proxyIndex: anytype, role: i32) QVariant {
        comptime _ = @TypeOf(proxyIndex)._is_QModelIndex;
        return .{ .ptr = qtc.KRearrangeColumnsProxyModel_SuperData(@ptrCast(self.ptr), @ptrCast(proxyIndex.ptr), @bitCast(role)) };
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#data)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, proxyIndex: QModelIndex, role: i32) callconv(.c) QVariant `
    ///
    pub fn OnData(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QModelIndex, i32) callconv(.c) QVariant) void {
        qtc.KRearrangeColumnsProxyModel_OnData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn ItemData(self: KRearrangeColumnsProxyModel, allocator: std.mem.Allocator, index: anytype) ArrayMap_i32_QVariant {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        const _map: qtc.libqt_map = qtc.KRearrangeColumnsProxyModel_ItemData(@ptrCast(self.ptr), @ptrCast(index.ptr));
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
            _ret.put(allocator, _key, .{ .ptr = @ptrCast(_value) }) catch @panic("krearrangecolumnsproxymodel.ItemData: Memory allocation failed");
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperItemData(self: KRearrangeColumnsProxyModel, allocator: std.mem.Allocator, index: anytype) ArrayMap_i32_QVariant {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        const _map: qtc.libqt_map = qtc.KRearrangeColumnsProxyModel_SuperItemData(@ptrCast(self.ptr), @ptrCast(index.ptr));
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
            _ret.put(allocator, _key, .{ .ptr = @ptrCast(_value) }) catch @panic("krearrangecolumnsproxymodel.ItemData: Memory allocation failed");
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
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, index: QModelIndex) callconv(.c) qtc.libqt_map `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of ArrayMap_i32_QVariant `
    ///
    pub fn OnItemData(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QModelIndex) callconv(.c) qtc.libqt_map) void {
        qtc.KRearrangeColumnsProxyModel_OnItemData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#flags)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` index: QModelIndex `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.ItemFlag `
    ///
    pub fn Flags(self: KRearrangeColumnsProxyModel, index: anytype) i32 {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.KRearrangeColumnsProxyModel_Flags(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `SuperFlags` instead
    ///
    pub const QBaseFlags = SuperFlags;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#flags)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` index: QModelIndex `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.ItemFlag `
    ///
    pub fn SuperFlags(self: KRearrangeColumnsProxyModel, index: anytype) i32 {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.KRearrangeColumnsProxyModel_SuperFlags(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#flags)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, index: QModelIndex) callconv(.c) i32 `
    ///
    pub fn OnFlags(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QModelIndex) callconv(.c) i32) void {
        qtc.KRearrangeColumnsProxyModel_OnFlags(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` value: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn SetData(self: KRearrangeColumnsProxyModel, index: anytype, value: anytype, role: i32) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.KRearrangeColumnsProxyModel_SetData(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(value.ptr), @bitCast(role));
    }

    /// ### DEPRECATED: Use `SuperSetData` instead
    ///
    pub const QBaseSetData = SuperSetData;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` value: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn SuperSetData(self: KRearrangeColumnsProxyModel, index: anytype, value: anytype, role: i32) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.KRearrangeColumnsProxyModel_SuperSetData(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(value.ptr), @bitCast(role));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, index: QModelIndex, value: QVariant, role: i32) callconv(.c) bool `
    ///
    pub fn OnSetData(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QModelIndex, QVariant, i32) callconv(.c) bool) void {
        qtc.KRearrangeColumnsProxyModel_OnSetData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` roles: ArrayMap_i32_QVariant `
    ///
    pub fn SetItemData(self: KRearrangeColumnsProxyModel, allocator: std.mem.Allocator, index: anytype, roles: ArrayMap_i32_QVariant) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        const roles_count = roles.count();
        const roles_keys = allocator.alloc(i32, roles_count) catch @panic("krearrangecolumnsproxymodel.SetItemData: Memory allocation failed");
        defer allocator.free(roles_keys);
        const roles_values = allocator.alloc(QtC.QVariant, roles_count) catch @panic("krearrangecolumnsproxymodel.SetItemData: Memory allocation failed");
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
        return qtc.KRearrangeColumnsProxyModel_SetItemData(@ptrCast(self.ptr), @ptrCast(index.ptr), roles_map);
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` roles: ArrayMap_i32_QVariant `
    ///
    pub fn SuperSetItemData(self: KRearrangeColumnsProxyModel, allocator: std.mem.Allocator, index: anytype, roles: ArrayMap_i32_QVariant) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        const roles_count = roles.count();
        const roles_keys = allocator.alloc(i32, roles_count) catch @panic("krearrangecolumnsproxymodel.SetItemData: Memory allocation failed");
        defer allocator.free(roles_keys);
        const roles_values = allocator.alloc(QtC.QVariant, roles_count) catch @panic("krearrangecolumnsproxymodel.SetItemData: Memory allocation failed");
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
        return qtc.KRearrangeColumnsProxyModel_SuperSetItemData(@ptrCast(self.ptr), @ptrCast(index.ptr), roles_map);
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, index: QModelIndex, roles: qtc.libqt_map (ArrayMap_i32_QVariant)) callconv(.c) bool `
    ///
    pub fn OnSetItemData(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QModelIndex, qtc.libqt_map) callconv(.c) bool) void {
        qtc.KRearrangeColumnsProxyModel_OnSetItemData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setHeaderData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` value: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn SetHeaderData(self: KRearrangeColumnsProxyModel, section: i32, orientation: i32, value: anytype, role: i32) bool {
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.KRearrangeColumnsProxyModel_SetHeaderData(@ptrCast(self.ptr), @bitCast(section), @bitCast(orientation), @ptrCast(value.ptr), @bitCast(role));
    }

    /// ### DEPRECATED: Use `SuperSetHeaderData` instead
    ///
    pub const QBaseSetHeaderData = SuperSetHeaderData;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setHeaderData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` value: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn SuperSetHeaderData(self: KRearrangeColumnsProxyModel, section: i32, orientation: i32, value: anytype, role: i32) bool {
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.KRearrangeColumnsProxyModel_SuperSetHeaderData(@ptrCast(self.ptr), @bitCast(section), @bitCast(orientation), @ptrCast(value.ptr), @bitCast(role));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setHeaderData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, section: i32, orientation: qnamespace_enums.Orientation, value: QVariant, role: i32) callconv(.c) bool `
    ///
    pub fn OnSetHeaderData(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, i32, i32, QVariant, i32) callconv(.c) bool) void {
        qtc.KRearrangeColumnsProxyModel_OnSetHeaderData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn ClearItemData(self: KRearrangeColumnsProxyModel, index: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.KRearrangeColumnsProxyModel_ClearItemData(@ptrCast(self.ptr), @ptrCast(index.ptr));
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperClearItemData(self: KRearrangeColumnsProxyModel, index: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.KRearrangeColumnsProxyModel_SuperClearItemData(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, index: QModelIndex) callconv(.c) bool `
    ///
    pub fn OnClearItemData(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QModelIndex) callconv(.c) bool) void {
        qtc.KRearrangeColumnsProxyModel_OnClearItemData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#buddy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn Buddy(self: KRearrangeColumnsProxyModel, index: anytype) QModelIndex {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.KRearrangeColumnsProxyModel_Buddy(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperBuddy` instead
    ///
    pub const QBaseBuddy = SuperBuddy;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#buddy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperBuddy(self: KRearrangeColumnsProxyModel, index: anytype) QModelIndex {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.KRearrangeColumnsProxyModel_SuperBuddy(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#buddy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, index: QModelIndex) callconv(.c) QModelIndex `
    ///
    pub fn OnBuddy(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.KRearrangeColumnsProxyModel_OnBuddy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canFetchMore)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn CanFetchMore(self: KRearrangeColumnsProxyModel, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.KRearrangeColumnsProxyModel_CanFetchMore(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// ### DEPRECATED: Use `SuperCanFetchMore` instead
    ///
    pub const QBaseCanFetchMore = SuperCanFetchMore;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canFetchMore)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn SuperCanFetchMore(self: KRearrangeColumnsProxyModel, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.KRearrangeColumnsProxyModel_SuperCanFetchMore(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canFetchMore)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn OnCanFetchMore(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QModelIndex) callconv(.c) bool) void {
        qtc.KRearrangeColumnsProxyModel_OnCanFetchMore(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#fetchMore)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn FetchMore(self: KRearrangeColumnsProxyModel, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.KRearrangeColumnsProxyModel_FetchMore(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// ### DEPRECATED: Use `SuperFetchMore` instead
    ///
    pub const QBaseFetchMore = SuperFetchMore;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#fetchMore)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn SuperFetchMore(self: KRearrangeColumnsProxyModel, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.KRearrangeColumnsProxyModel_SuperFetchMore(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#fetchMore)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, parent: QModelIndex) callconv(.c) void `
    ///
    pub fn OnFetchMore(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QModelIndex) callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnFetchMore(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sort)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` column: i32 `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    pub fn Sort(self: KRearrangeColumnsProxyModel, column: i32, order: i32) void {
        qtc.KRearrangeColumnsProxyModel_Sort(@ptrCast(self.ptr), @bitCast(column), @bitCast(order));
    }

    /// ### DEPRECATED: Use `SuperSort` instead
    ///
    pub const QBaseSort = SuperSort;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sort)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` column: i32 `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    pub fn SuperSort(self: KRearrangeColumnsProxyModel, column: i32, order: i32) void {
        qtc.KRearrangeColumnsProxyModel_SuperSort(@ptrCast(self.ptr), @bitCast(column), @bitCast(order));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sort)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, column: i32, order: qnamespace_enums.SortOrder) callconv(.c) void `
    ///
    pub fn OnSort(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, i32, i32) callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnSort(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#span)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn Span(self: KRearrangeColumnsProxyModel, index: anytype) QSize {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.KRearrangeColumnsProxyModel_Span(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSpan` instead
    ///
    pub const QBaseSpan = SuperSpan;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#span)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperSpan(self: KRearrangeColumnsProxyModel, index: anytype) QSize {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.KRearrangeColumnsProxyModel_SuperSpan(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#span)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, index: QModelIndex) callconv(.c) QSize `
    ///
    pub fn OnSpan(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QModelIndex) callconv(.c) QSize) void {
        qtc.KRearrangeColumnsProxyModel_OnSpan(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` indexes: []QModelIndex `
    ///
    pub fn MimeData(self: KRearrangeColumnsProxyModel, indexes: []QModelIndex) QMimeData {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        return .{ .ptr = qtc.KRearrangeColumnsProxyModel_MimeData(@ptrCast(self.ptr), indexes_list) };
    }

    /// ### DEPRECATED: Use `SuperMimeData` instead
    ///
    pub const QBaseMimeData = SuperMimeData;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` indexes: []QModelIndex `
    ///
    pub fn SuperMimeData(self: KRearrangeColumnsProxyModel, indexes: []QModelIndex) QMimeData {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        return .{ .ptr = qtc.KRearrangeColumnsProxyModel_SuperMimeData(@ptrCast(self.ptr), indexes_list) };
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, indexes: qtc.libqt_list ([]QModelIndex)) callconv(.c) QMimeData `
    ///
    pub fn OnMimeData(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, qtc.libqt_list) callconv(.c) QMimeData) void {
        qtc.KRearrangeColumnsProxyModel_OnMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
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
    pub fn CanDropMimeData(self: KRearrangeColumnsProxyModel, data: anytype, action: i32, row: i32, column: i32, parent: anytype) bool {
        comptime _ = @TypeOf(data)._is_QMimeData;
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.KRearrangeColumnsProxyModel_CanDropMimeData(@ptrCast(self.ptr), @ptrCast(data.ptr), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(parent.ptr));
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
    /// ` self: KRearrangeColumnsProxyModel `
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
    pub fn SuperCanDropMimeData(self: KRearrangeColumnsProxyModel, data: anytype, action: i32, row: i32, column: i32, parent: anytype) bool {
        comptime _ = @TypeOf(data)._is_QMimeData;
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.KRearrangeColumnsProxyModel_SuperCanDropMimeData(@ptrCast(self.ptr), @ptrCast(data.ptr), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(parent.ptr));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, data: QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn OnCanDropMimeData(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QMimeData, i32, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.KRearrangeColumnsProxyModel_OnCanDropMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeTypes)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MimeTypes(self: KRearrangeColumnsProxyModel, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KRearrangeColumnsProxyModel_MimeTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("krearrangecolumnsproxymodel.MimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("krearrangecolumnsproxymodel.MimeTypes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperMimeTypes` instead
    ///
    pub const QBaseMimeTypes = SuperMimeTypes;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeTypes)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperMimeTypes(self: KRearrangeColumnsProxyModel, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KRearrangeColumnsProxyModel_SuperMimeTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("krearrangecolumnsproxymodel.MimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("krearrangecolumnsproxymodel.MimeTypes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeTypes)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8 `
    ///
    pub fn OnMimeTypes(self: KRearrangeColumnsProxyModel, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.KRearrangeColumnsProxyModel_OnMimeTypes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn SupportedDragActions(self: KRearrangeColumnsProxyModel) i32 {
        return qtc.KRearrangeColumnsProxyModel_SupportedDragActions(@ptrCast(self.ptr));
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn SuperSupportedDragActions(self: KRearrangeColumnsProxyModel) i32 {
        return qtc.KRearrangeColumnsProxyModel_SuperSupportedDragActions(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSupportedDragActions(self: KRearrangeColumnsProxyModel, callback: *const fn () callconv(.c) i32) void {
        qtc.KRearrangeColumnsProxyModel_OnSupportedDragActions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDropActions)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn SupportedDropActions(self: KRearrangeColumnsProxyModel) i32 {
        return qtc.KRearrangeColumnsProxyModel_SupportedDropActions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSupportedDropActions` instead
    ///
    pub const QBaseSupportedDropActions = SuperSupportedDropActions;

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDropActions)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn SuperSupportedDropActions(self: KRearrangeColumnsProxyModel) i32 {
        return qtc.KRearrangeColumnsProxyModel_SuperSupportedDropActions(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDropActions)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSupportedDropActions(self: KRearrangeColumnsProxyModel, callback: *const fn () callconv(.c) i32) void {
        qtc.KRearrangeColumnsProxyModel_OnSupportedDropActions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn RoleNames(self: KRearrangeColumnsProxyModel, allocator: std.mem.Allocator) Map_i32_u8 {
        const _map: qtc.libqt_map = qtc.KRearrangeColumnsProxyModel_RoleNames(@ptrCast(self.ptr));
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
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("krearrangecolumnsproxymodel.RoleNames: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.put(allocator, _key, _value_slice) catch @panic("krearrangecolumnsproxymodel.RoleNames: Memory allocation failed");
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperRoleNames(self: KRearrangeColumnsProxyModel, allocator: std.mem.Allocator) Map_i32_u8 {
        const _map: qtc.libqt_map = qtc.KRearrangeColumnsProxyModel_SuperRoleNames(@ptrCast(self.ptr));
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
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("krearrangecolumnsproxymodel.RoleNames: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.put(allocator, _key, _value_slice) catch @panic("krearrangecolumnsproxymodel.RoleNames: Memory allocation failed");
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
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_map `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of Map_i32_u8 `
    ///
    pub fn OnRoleNames(self: KRearrangeColumnsProxyModel, callback: *const fn () callconv(.c) qtc.libqt_map) void {
        qtc.KRearrangeColumnsProxyModel_OnRoleNames(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` roleDataSpan: QModelRoleDataSpan `
    ///
    pub fn MultiData(self: KRearrangeColumnsProxyModel, index: anytype, roleDataSpan: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(roleDataSpan)._is_QModelRoleDataSpan;
        qtc.KRearrangeColumnsProxyModel_MultiData(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(roleDataSpan.ptr));
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` roleDataSpan: QModelRoleDataSpan `
    ///
    pub fn SuperMultiData(self: KRearrangeColumnsProxyModel, index: anytype, roleDataSpan: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(roleDataSpan)._is_QModelRoleDataSpan;
        qtc.KRearrangeColumnsProxyModel_SuperMultiData(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(roleDataSpan.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, index: QModelIndex, roleDataSpan: QModelRoleDataSpan) callconv(.c) void `
    ///
    pub fn OnMultiData(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QModelIndex, QModelRoleDataSpan) callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnMultiData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    pub fn ResetInternalData(self: KRearrangeColumnsProxyModel) void {
        qtc.KRearrangeColumnsProxyModel_ResetInternalData(@ptrCast(self.ptr));
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    pub fn SuperResetInternalData(self: KRearrangeColumnsProxyModel) void {
        qtc.KRearrangeColumnsProxyModel_SuperResetInternalData(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnResetInternalData(self: KRearrangeColumnsProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnResetInternalData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KRearrangeColumnsProxyModel, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KRearrangeColumnsProxyModel_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KRearrangeColumnsProxyModel, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KRearrangeColumnsProxyModel_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QEvent) callconv(.c) bool) void {
        qtc.KRearrangeColumnsProxyModel_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KRearrangeColumnsProxyModel, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KRearrangeColumnsProxyModel_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KRearrangeColumnsProxyModel, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KRearrangeColumnsProxyModel_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QObject, QEvent) callconv(.c) bool) void {
        qtc.KRearrangeColumnsProxyModel_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KRearrangeColumnsProxyModel, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KRearrangeColumnsProxyModel_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KRearrangeColumnsProxyModel, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KRearrangeColumnsProxyModel_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QTimerEvent) callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KRearrangeColumnsProxyModel, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KRearrangeColumnsProxyModel_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KRearrangeColumnsProxyModel, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KRearrangeColumnsProxyModel_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QChildEvent) callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KRearrangeColumnsProxyModel, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KRearrangeColumnsProxyModel_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KRearrangeColumnsProxyModel, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KRearrangeColumnsProxyModel_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QEvent) callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KRearrangeColumnsProxyModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KRearrangeColumnsProxyModel_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KRearrangeColumnsProxyModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KRearrangeColumnsProxyModel_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QMetaMethod) callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KRearrangeColumnsProxyModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KRearrangeColumnsProxyModel_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KRearrangeColumnsProxyModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KRearrangeColumnsProxyModel_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QMetaMethod) callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#setHandleSourceLayoutChanges)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` handleSourceLayoutChanges: bool `
    ///
    pub fn SetHandleSourceLayoutChanges(self: KRearrangeColumnsProxyModel, handleSourceLayoutChanges: bool) void {
        qtc.KRearrangeColumnsProxyModel_SetHandleSourceLayoutChanges(@ptrCast(self.ptr), handleSourceLayoutChanges);
    }

    /// ### DEPRECATED: Use `SuperSetHandleSourceLayoutChanges` instead
    ///
    pub const QBaseSetHandleSourceLayoutChanges = SuperSetHandleSourceLayoutChanges;

    /// Inherited from QIdentityProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#setHandleSourceLayoutChanges)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` handleSourceLayoutChanges: bool `
    ///
    pub fn SuperSetHandleSourceLayoutChanges(self: KRearrangeColumnsProxyModel, handleSourceLayoutChanges: bool) void {
        qtc.KRearrangeColumnsProxyModel_SuperSetHandleSourceLayoutChanges(@ptrCast(self.ptr), handleSourceLayoutChanges);
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#setHandleSourceLayoutChanges)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, handleSourceLayoutChanges: bool) callconv(.c) void `
    ///
    pub fn OnSetHandleSourceLayoutChanges(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, bool) callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnSetHandleSourceLayoutChanges(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#setHandleSourceDataChanges)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` handleSourceDataChanges: bool `
    ///
    pub fn SetHandleSourceDataChanges(self: KRearrangeColumnsProxyModel, handleSourceDataChanges: bool) void {
        qtc.KRearrangeColumnsProxyModel_SetHandleSourceDataChanges(@ptrCast(self.ptr), handleSourceDataChanges);
    }

    /// ### DEPRECATED: Use `SuperSetHandleSourceDataChanges` instead
    ///
    pub const QBaseSetHandleSourceDataChanges = SuperSetHandleSourceDataChanges;

    /// Inherited from QIdentityProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#setHandleSourceDataChanges)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` handleSourceDataChanges: bool `
    ///
    pub fn SuperSetHandleSourceDataChanges(self: KRearrangeColumnsProxyModel, handleSourceDataChanges: bool) void {
        qtc.KRearrangeColumnsProxyModel_SuperSetHandleSourceDataChanges(@ptrCast(self.ptr), handleSourceDataChanges);
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qidentityproxymodel.html#setHandleSourceDataChanges)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, handleSourceDataChanges: bool) callconv(.c) void `
    ///
    pub fn OnSetHandleSourceDataChanges(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, bool) callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnSetHandleSourceDataChanges(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` col: i32 `
    ///
    /// ` internalPtr: ?*anyopaque `
    ///
    pub fn CreateSourceIndex(self: KRearrangeColumnsProxyModel, row: i32, col: i32, internalPtr: ?*anyopaque) QModelIndex {
        return .{ .ptr = qtc.KRearrangeColumnsProxyModel_CreateSourceIndex(@ptrCast(self.ptr), @bitCast(row), @bitCast(col), @ptrCast(internalPtr)) };
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` col: i32 `
    ///
    /// ` internalPtr: ?*anyopaque `
    ///
    pub fn SuperCreateSourceIndex(self: KRearrangeColumnsProxyModel, row: i32, col: i32, internalPtr: ?*anyopaque) QModelIndex {
        return .{ .ptr = qtc.KRearrangeColumnsProxyModel_SuperCreateSourceIndex(@ptrCast(self.ptr), @bitCast(row), @bitCast(col), @ptrCast(internalPtr)) };
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, row: i32, col: i32, internalPtr: ?*anyopaque) callconv(.c) QModelIndex `
    ///
    pub fn OnCreateSourceIndex(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, i32, i32, ?*anyopaque) callconv(.c) QModelIndex) void {
        qtc.KRearrangeColumnsProxyModel_OnCreateSourceIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn CreateIndex(self: KRearrangeColumnsProxyModel, row: i32, column: i32) QModelIndex {
        return .{ .ptr = qtc.KRearrangeColumnsProxyModel_CreateIndex(@ptrCast(self.ptr), @bitCast(row), @bitCast(column)) };
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn SuperCreateIndex(self: KRearrangeColumnsProxyModel, row: i32, column: i32) QModelIndex {
        return .{ .ptr = qtc.KRearrangeColumnsProxyModel_SuperCreateIndex(@ptrCast(self.ptr), @bitCast(row), @bitCast(column)) };
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, row: i32, column: i32) callconv(.c) QModelIndex `
    ///
    pub fn OnCreateIndex(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, i32, i32) callconv(.c) QModelIndex) void {
        qtc.KRearrangeColumnsProxyModel_OnCreateIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` indexes: []QModelIndex `
    ///
    /// ` stream: QDataStream `
    ///
    pub fn EncodeData(self: KRearrangeColumnsProxyModel, indexes: []QModelIndex, stream: anytype) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        comptime _ = @TypeOf(stream)._is_QDataStream;
        qtc.KRearrangeColumnsProxyModel_EncodeData(@ptrCast(self.ptr), indexes_list, @ptrCast(stream.ptr));
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` indexes: []QModelIndex `
    ///
    /// ` stream: QDataStream `
    ///
    pub fn SuperEncodeData(self: KRearrangeColumnsProxyModel, indexes: []QModelIndex, stream: anytype) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        comptime _ = @TypeOf(stream)._is_QDataStream;
        qtc.KRearrangeColumnsProxyModel_SuperEncodeData(@ptrCast(self.ptr), indexes_list, @ptrCast(stream.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, indexes: qtc.libqt_list ([]QModelIndex), stream: QDataStream) callconv(.c) void `
    ///
    pub fn OnEncodeData(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, qtc.libqt_list, QDataStream) callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnEncodeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` stream: QDataStream `
    ///
    pub fn DecodeData(self: KRearrangeColumnsProxyModel, row: i32, column: i32, parent: anytype, stream: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        comptime _ = @TypeOf(stream)._is_QDataStream;
        return qtc.KRearrangeColumnsProxyModel_DecodeData(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(parent.ptr), @ptrCast(stream.ptr));
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` stream: QDataStream `
    ///
    pub fn SuperDecodeData(self: KRearrangeColumnsProxyModel, row: i32, column: i32, parent: anytype, stream: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        comptime _ = @TypeOf(stream)._is_QDataStream;
        return qtc.KRearrangeColumnsProxyModel_SuperDecodeData(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(parent.ptr), @ptrCast(stream.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, row: i32, column: i32, parent: QModelIndex, stream: QDataStream) callconv(.c) bool `
    ///
    pub fn OnDecodeData(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, i32, i32, QModelIndex, QDataStream) callconv(.c) bool) void {
        qtc.KRearrangeColumnsProxyModel_OnDecodeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn BeginInsertRows(self: KRearrangeColumnsProxyModel, parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.KRearrangeColumnsProxyModel_BeginInsertRows(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(first), @bitCast(last));
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn SuperBeginInsertRows(self: KRearrangeColumnsProxyModel, parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.KRearrangeColumnsProxyModel_SuperBeginInsertRows(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnBeginInsertRows(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnBeginInsertRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    pub fn EndInsertRows(self: KRearrangeColumnsProxyModel) void {
        qtc.KRearrangeColumnsProxyModel_EndInsertRows(@ptrCast(self.ptr));
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    pub fn SuperEndInsertRows(self: KRearrangeColumnsProxyModel) void {
        qtc.KRearrangeColumnsProxyModel_SuperEndInsertRows(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndInsertRows(self: KRearrangeColumnsProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnEndInsertRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn BeginRemoveRows(self: KRearrangeColumnsProxyModel, parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.KRearrangeColumnsProxyModel_BeginRemoveRows(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(first), @bitCast(last));
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn SuperBeginRemoveRows(self: KRearrangeColumnsProxyModel, parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.KRearrangeColumnsProxyModel_SuperBeginRemoveRows(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnBeginRemoveRows(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnBeginRemoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    pub fn EndRemoveRows(self: KRearrangeColumnsProxyModel) void {
        qtc.KRearrangeColumnsProxyModel_EndRemoveRows(@ptrCast(self.ptr));
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    pub fn SuperEndRemoveRows(self: KRearrangeColumnsProxyModel) void {
        qtc.KRearrangeColumnsProxyModel_SuperEndRemoveRows(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndRemoveRows(self: KRearrangeColumnsProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnEndRemoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
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
    pub fn BeginMoveRows(self: KRearrangeColumnsProxyModel, sourceParent: anytype, sourceFirst: i32, sourceLast: i32, destinationParent: anytype, destinationRow: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.KRearrangeColumnsProxyModel_BeginMoveRows(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent.ptr), @bitCast(destinationRow));
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
    /// ` self: KRearrangeColumnsProxyModel `
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
    pub fn SuperBeginMoveRows(self: KRearrangeColumnsProxyModel, sourceParent: anytype, sourceFirst: i32, sourceLast: i32, destinationParent: anytype, destinationRow: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.KRearrangeColumnsProxyModel_SuperBeginMoveRows(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent.ptr), @bitCast(destinationRow));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, sourceParent: QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QModelIndex, destinationRow: i32) callconv(.c) bool `
    ///
    pub fn OnBeginMoveRows(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) bool) void {
        qtc.KRearrangeColumnsProxyModel_OnBeginMoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    pub fn EndMoveRows(self: KRearrangeColumnsProxyModel) void {
        qtc.KRearrangeColumnsProxyModel_EndMoveRows(@ptrCast(self.ptr));
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    pub fn SuperEndMoveRows(self: KRearrangeColumnsProxyModel) void {
        qtc.KRearrangeColumnsProxyModel_SuperEndMoveRows(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndMoveRows(self: KRearrangeColumnsProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnEndMoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn BeginInsertColumns(self: KRearrangeColumnsProxyModel, parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.KRearrangeColumnsProxyModel_BeginInsertColumns(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(first), @bitCast(last));
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn SuperBeginInsertColumns(self: KRearrangeColumnsProxyModel, parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.KRearrangeColumnsProxyModel_SuperBeginInsertColumns(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnBeginInsertColumns(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnBeginInsertColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    pub fn EndInsertColumns(self: KRearrangeColumnsProxyModel) void {
        qtc.KRearrangeColumnsProxyModel_EndInsertColumns(@ptrCast(self.ptr));
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    pub fn SuperEndInsertColumns(self: KRearrangeColumnsProxyModel) void {
        qtc.KRearrangeColumnsProxyModel_SuperEndInsertColumns(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndInsertColumns(self: KRearrangeColumnsProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnEndInsertColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn BeginRemoveColumns(self: KRearrangeColumnsProxyModel, parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.KRearrangeColumnsProxyModel_BeginRemoveColumns(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(first), @bitCast(last));
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn SuperBeginRemoveColumns(self: KRearrangeColumnsProxyModel, parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.KRearrangeColumnsProxyModel_SuperBeginRemoveColumns(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnBeginRemoveColumns(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnBeginRemoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    pub fn EndRemoveColumns(self: KRearrangeColumnsProxyModel) void {
        qtc.KRearrangeColumnsProxyModel_EndRemoveColumns(@ptrCast(self.ptr));
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    pub fn SuperEndRemoveColumns(self: KRearrangeColumnsProxyModel) void {
        qtc.KRearrangeColumnsProxyModel_SuperEndRemoveColumns(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndRemoveColumns(self: KRearrangeColumnsProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnEndRemoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
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
    pub fn BeginMoveColumns(self: KRearrangeColumnsProxyModel, sourceParent: anytype, sourceFirst: i32, sourceLast: i32, destinationParent: anytype, destinationColumn: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.KRearrangeColumnsProxyModel_BeginMoveColumns(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent.ptr), @bitCast(destinationColumn));
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
    /// ` self: KRearrangeColumnsProxyModel `
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
    pub fn SuperBeginMoveColumns(self: KRearrangeColumnsProxyModel, sourceParent: anytype, sourceFirst: i32, sourceLast: i32, destinationParent: anytype, destinationColumn: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.KRearrangeColumnsProxyModel_SuperBeginMoveColumns(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent.ptr), @bitCast(destinationColumn));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, sourceParent: QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QModelIndex, destinationColumn: i32) callconv(.c) bool `
    ///
    pub fn OnBeginMoveColumns(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) bool) void {
        qtc.KRearrangeColumnsProxyModel_OnBeginMoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    pub fn EndMoveColumns(self: KRearrangeColumnsProxyModel) void {
        qtc.KRearrangeColumnsProxyModel_EndMoveColumns(@ptrCast(self.ptr));
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    pub fn SuperEndMoveColumns(self: KRearrangeColumnsProxyModel) void {
        qtc.KRearrangeColumnsProxyModel_SuperEndMoveColumns(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndMoveColumns(self: KRearrangeColumnsProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnEndMoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    pub fn BeginResetModel(self: KRearrangeColumnsProxyModel) void {
        qtc.KRearrangeColumnsProxyModel_BeginResetModel(@ptrCast(self.ptr));
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    pub fn SuperBeginResetModel(self: KRearrangeColumnsProxyModel) void {
        qtc.KRearrangeColumnsProxyModel_SuperBeginResetModel(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnBeginResetModel(self: KRearrangeColumnsProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnBeginResetModel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    pub fn EndResetModel(self: KRearrangeColumnsProxyModel) void {
        qtc.KRearrangeColumnsProxyModel_EndResetModel(@ptrCast(self.ptr));
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    pub fn SuperEndResetModel(self: KRearrangeColumnsProxyModel) void {
        qtc.KRearrangeColumnsProxyModel_SuperEndResetModel(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndResetModel(self: KRearrangeColumnsProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnEndResetModel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` from: QModelIndex `
    ///
    /// ` to: QModelIndex `
    ///
    pub fn ChangePersistentIndex(self: KRearrangeColumnsProxyModel, from: anytype, to: anytype) void {
        comptime _ = @TypeOf(from)._is_QModelIndex;
        comptime _ = @TypeOf(to)._is_QModelIndex;
        qtc.KRearrangeColumnsProxyModel_ChangePersistentIndex(@ptrCast(self.ptr), @ptrCast(from.ptr), @ptrCast(to.ptr));
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` from: QModelIndex `
    ///
    /// ` to: QModelIndex `
    ///
    pub fn SuperChangePersistentIndex(self: KRearrangeColumnsProxyModel, from: anytype, to: anytype) void {
        comptime _ = @TypeOf(from)._is_QModelIndex;
        comptime _ = @TypeOf(to)._is_QModelIndex;
        qtc.KRearrangeColumnsProxyModel_SuperChangePersistentIndex(@ptrCast(self.ptr), @ptrCast(from.ptr), @ptrCast(to.ptr));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, from: QModelIndex, to: QModelIndex) callconv(.c) void `
    ///
    pub fn OnChangePersistentIndex(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QModelIndex, QModelIndex) callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnChangePersistentIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` from: []QModelIndex `
    ///
    /// ` to: []QModelIndex `
    ///
    pub fn ChangePersistentIndexList(self: KRearrangeColumnsProxyModel, from: []QModelIndex, to: []QModelIndex) void {
        const from_list = qtc.libqt_list{
            .len = from.len,
            .data = @ptrCast(from.ptr),
        };
        const to_list = qtc.libqt_list{
            .len = to.len,
            .data = @ptrCast(to.ptr),
        };
        qtc.KRearrangeColumnsProxyModel_ChangePersistentIndexList(@ptrCast(self.ptr), from_list, to_list);
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` from: []QModelIndex `
    ///
    /// ` to: []QModelIndex `
    ///
    pub fn SuperChangePersistentIndexList(self: KRearrangeColumnsProxyModel, from: []QModelIndex, to: []QModelIndex) void {
        const from_list = qtc.libqt_list{
            .len = from.len,
            .data = @ptrCast(from.ptr),
        };
        const to_list = qtc.libqt_list{
            .len = to.len,
            .data = @ptrCast(to.ptr),
        };
        qtc.KRearrangeColumnsProxyModel_SuperChangePersistentIndexList(@ptrCast(self.ptr), from_list, to_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, from: qtc.libqt_list ([]QModelIndex), to: qtc.libqt_list ([]QModelIndex)) callconv(.c) void `
    ///
    pub fn OnChangePersistentIndexList(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, qtc.libqt_list, qtc.libqt_list) callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnChangePersistentIndexList(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PersistentIndexList(self: KRearrangeColumnsProxyModel, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.KRearrangeColumnsProxyModel_PersistentIndexList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("krearrangecolumnsproxymodel.PersistentIndexList: Memory allocation failed");
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperPersistentIndexList(self: KRearrangeColumnsProxyModel, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.KRearrangeColumnsProxyModel_SuperPersistentIndexList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("krearrangecolumnsproxymodel.PersistentIndexList: Memory allocation failed");
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
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QModelIndex `
    ///
    pub fn OnPersistentIndexList(self: KRearrangeColumnsProxyModel, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.KRearrangeColumnsProxyModel_OnPersistentIndexList(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    pub fn Sender(self: KRearrangeColumnsProxyModel) QObject {
        return .{ .ptr = qtc.KRearrangeColumnsProxyModel_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    pub fn SuperSender(self: KRearrangeColumnsProxyModel) QObject {
        return .{ .ptr = qtc.KRearrangeColumnsProxyModel_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KRearrangeColumnsProxyModel, callback: *const fn () callconv(.c) QObject) void {
        qtc.KRearrangeColumnsProxyModel_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    pub fn SenderSignalIndex(self: KRearrangeColumnsProxyModel) i32 {
        return qtc.KRearrangeColumnsProxyModel_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    pub fn SuperSenderSignalIndex(self: KRearrangeColumnsProxyModel) i32 {
        return qtc.KRearrangeColumnsProxyModel_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KRearrangeColumnsProxyModel, callback: *const fn () callconv(.c) i32) void {
        qtc.KRearrangeColumnsProxyModel_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KRearrangeColumnsProxyModel, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KRearrangeColumnsProxyModel_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KRearrangeColumnsProxyModel, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KRearrangeColumnsProxyModel_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, [*:0]const u8) callconv(.c) i32) void {
        qtc.KRearrangeColumnsProxyModel_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KRearrangeColumnsProxyModel, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KRearrangeColumnsProxyModel_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KRearrangeColumnsProxyModel, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KRearrangeColumnsProxyModel_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel`
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QMetaMethod) callconv(.c) bool) void {
        qtc.KRearrangeColumnsProxyModel_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sourceModelChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel) callconv(.c) void `
    ///
    pub fn OnSourceModelChanged(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel) callconv(.c) void) void {
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnRowsAboutToBeInserted(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnRowsInserted(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnRowsAboutToBeRemoved(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnRowsRemoved(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnColumnsAboutToBeInserted(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnColumnsInserted(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnColumnsAboutToBeRemoved(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnColumnsRemoved(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel) callconv(.c) void `
    ///
    pub fn OnModelAboutToBeReset(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel) callconv(.c) void) void {
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel) callconv(.c) void `
    ///
    pub fn OnModelReset(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel) callconv(.c) void) void {
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, sourceParent: QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QModelIndex, destinationRow: i32) callconv(.c) void `
    ///
    pub fn OnRowsAboutToBeMoved(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) void) void {
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, sourceParent: QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QModelIndex, destinationRow: i32) callconv(.c) void `
    ///
    pub fn OnRowsMoved(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) void) void {
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, sourceParent: QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QModelIndex, destinationColumn: i32) callconv(.c) void `
    ///
    pub fn OnColumnsAboutToBeMoved(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) void) void {
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, sourceParent: QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QModelIndex, destinationColumn: i32) callconv(.c) void `
    ///
    pub fn OnColumnsMoved(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) void) void {
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
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    /// ` callback: *const fn (self: KRearrangeColumnsProxyModel, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KRearrangeColumnsProxyModel, callback: *const fn (KRearrangeColumnsProxyModel, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/krearrangecolumnsproxymodel.html#dtor.KRearrangeColumnsProxyModel)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KRearrangeColumnsProxyModel `
    ///
    pub fn Delete(self: KRearrangeColumnsProxyModel) void {
        qtc.KRearrangeColumnsProxyModel_Delete(@ptrCast(self.ptr));
    }
};
