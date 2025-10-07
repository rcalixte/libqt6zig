const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qabstractitemmodel_enums = @import("../libqabstractitemmodel.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
pub const map_i32_qtcqvariant = std.AutoHashMapUnmanaged(i32, QtC.QVariant);
pub const map_i32_u8 = std.AutoHashMapUnmanaged(i32, []u8);

/// https://api.kde.org/krearrangecolumnsproxymodel.html
pub const krearrangecolumnsproxymodel = struct {
    /// New constructs a new KRearrangeColumnsProxyModel object.
    ///
    ///
    pub fn New() QtC.KRearrangeColumnsProxyModel {
        return qtc.KRearrangeColumnsProxyModel_new();
    }

    /// New2 constructs a new KRearrangeColumnsProxyModel object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New2(parent: ?*anyopaque) QtC.KRearrangeColumnsProxyModel {
        return qtc.KRearrangeColumnsProxyModel_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KRearrangeColumnsProxyModel_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KRearrangeColumnsProxyModel, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KRearrangeColumnsProxyModel_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KRearrangeColumnsProxyModel, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KRearrangeColumnsProxyModel_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.KRearrangeColumnsProxyModel_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KRearrangeColumnsProxyModel_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KRearrangeColumnsProxyModel_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krearrangecolumnsproxymodel.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/krearrangecolumnsproxymodel.html#setSourceColumns)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, columns: []i32 ```
    pub fn SetSourceColumns(self: ?*anyopaque, columns: []i32) void {
        const columns_list = qtc.libqt_list{
            .len = columns.len,
            .data = columns.ptr,
        };
        qtc.KRearrangeColumnsProxyModel_SetSourceColumns(@ptrCast(self), columns_list);
    }

    /// [Qt documentation](https://api.kde.org/krearrangecolumnsproxymodel.html#columnCount)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, parent: QtC.QModelIndex ```
    pub fn ColumnCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.KRearrangeColumnsProxyModel_ColumnCount(@ptrCast(self), @ptrCast(parent));
    }

    /// [Qt documentation](https://api.kde.org/krearrangecolumnsproxymodel.html#columnCount)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, parent: QtC.QModelIndex) callconv(.c) i32 ```
    pub fn OnColumnCount(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.KRearrangeColumnsProxyModel_OnColumnCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/krearrangecolumnsproxymodel.html#columnCount)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, parent: QtC.QModelIndex ```
    pub fn QBaseColumnCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.KRearrangeColumnsProxyModel_QBaseColumnCount(@ptrCast(self), @ptrCast(parent));
    }

    /// [Qt documentation](https://api.kde.org/krearrangecolumnsproxymodel.html#rowCount)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, parent: QtC.QModelIndex ```
    pub fn RowCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.KRearrangeColumnsProxyModel_RowCount(@ptrCast(self), @ptrCast(parent));
    }

    /// [Qt documentation](https://api.kde.org/krearrangecolumnsproxymodel.html#rowCount)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, parent: QtC.QModelIndex) callconv(.c) i32 ```
    pub fn OnRowCount(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.KRearrangeColumnsProxyModel_OnRowCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/krearrangecolumnsproxymodel.html#rowCount)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, parent: QtC.QModelIndex ```
    pub fn QBaseRowCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.KRearrangeColumnsProxyModel_QBaseRowCount(@ptrCast(self), @ptrCast(parent));
    }

    /// [Qt documentation](https://api.kde.org/krearrangecolumnsproxymodel.html#index)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, row: i32, column: i32, parent: QtC.QModelIndex ```
    pub fn Index(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque) QtC.QModelIndex {
        return qtc.KRearrangeColumnsProxyModel_Index(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(parent));
    }

    /// [Qt documentation](https://api.kde.org/krearrangecolumnsproxymodel.html#index)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, row: i32, column: i32, parent: QtC.QModelIndex) callconv(.c) QtC.QModelIndex ```
    pub fn OnIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.KRearrangeColumnsProxyModel_OnIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/krearrangecolumnsproxymodel.html#index)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, row: i32, column: i32, parent: QtC.QModelIndex ```
    pub fn QBaseIndex(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque) QtC.QModelIndex {
        return qtc.KRearrangeColumnsProxyModel_QBaseIndex(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(parent));
    }

    /// [Qt documentation](https://api.kde.org/krearrangecolumnsproxymodel.html#parent)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, child: QtC.QModelIndex ```
    pub fn Parent(self: ?*anyopaque, child: ?*anyopaque) QtC.QModelIndex {
        return qtc.KRearrangeColumnsProxyModel_Parent(@ptrCast(self), @ptrCast(child));
    }

    /// [Qt documentation](https://api.kde.org/krearrangecolumnsproxymodel.html#parent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, child: QtC.QModelIndex) callconv(.c) QtC.QModelIndex ```
    pub fn OnParent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.KRearrangeColumnsProxyModel_OnParent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/krearrangecolumnsproxymodel.html#parent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, child: QtC.QModelIndex ```
    pub fn QBaseParent(self: ?*anyopaque, child: ?*anyopaque) QtC.QModelIndex {
        return qtc.KRearrangeColumnsProxyModel_QBaseParent(@ptrCast(self), @ptrCast(child));
    }

    /// [Qt documentation](https://api.kde.org/krearrangecolumnsproxymodel.html#mapFromSource)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, sourceIndex: QtC.QModelIndex ```
    pub fn MapFromSource(self: ?*anyopaque, sourceIndex: ?*anyopaque) QtC.QModelIndex {
        return qtc.KRearrangeColumnsProxyModel_MapFromSource(@ptrCast(self), @ptrCast(sourceIndex));
    }

    /// [Qt documentation](https://api.kde.org/krearrangecolumnsproxymodel.html#mapFromSource)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, sourceIndex: QtC.QModelIndex) callconv(.c) QtC.QModelIndex ```
    pub fn OnMapFromSource(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.KRearrangeColumnsProxyModel_OnMapFromSource(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/krearrangecolumnsproxymodel.html#mapFromSource)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, sourceIndex: QtC.QModelIndex ```
    pub fn QBaseMapFromSource(self: ?*anyopaque, sourceIndex: ?*anyopaque) QtC.QModelIndex {
        return qtc.KRearrangeColumnsProxyModel_QBaseMapFromSource(@ptrCast(self), @ptrCast(sourceIndex));
    }

    /// [Qt documentation](https://api.kde.org/krearrangecolumnsproxymodel.html#mapToSource)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, proxyIndex: QtC.QModelIndex ```
    pub fn MapToSource(self: ?*anyopaque, proxyIndex: ?*anyopaque) QtC.QModelIndex {
        return qtc.KRearrangeColumnsProxyModel_MapToSource(@ptrCast(self), @ptrCast(proxyIndex));
    }

    /// [Qt documentation](https://api.kde.org/krearrangecolumnsproxymodel.html#mapToSource)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, proxyIndex: QtC.QModelIndex) callconv(.c) QtC.QModelIndex ```
    pub fn OnMapToSource(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.KRearrangeColumnsProxyModel_OnMapToSource(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/krearrangecolumnsproxymodel.html#mapToSource)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, proxyIndex: QtC.QModelIndex ```
    pub fn QBaseMapToSource(self: ?*anyopaque, proxyIndex: ?*anyopaque) QtC.QModelIndex {
        return qtc.KRearrangeColumnsProxyModel_QBaseMapToSource(@ptrCast(self), @ptrCast(proxyIndex));
    }

    /// [Qt documentation](https://api.kde.org/krearrangecolumnsproxymodel.html#headerData)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, section: i32, orientation: qnamespace_enums.Orientation, role: i32 ```
    pub fn HeaderData(self: ?*anyopaque, section: i32, orientation: i32, role: i32) QtC.QVariant {
        return qtc.KRearrangeColumnsProxyModel_HeaderData(@ptrCast(self), @intCast(section), @intCast(orientation), @intCast(role));
    }

    /// [Qt documentation](https://api.kde.org/krearrangecolumnsproxymodel.html#headerData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, section: i32, orientation: qnamespace_enums.Orientation, role: i32) callconv(.c) QtC.QVariant ```
    pub fn OnHeaderData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, i32) callconv(.c) QtC.QVariant) void {
        qtc.KRearrangeColumnsProxyModel_OnHeaderData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/krearrangecolumnsproxymodel.html#headerData)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, section: i32, orientation: qnamespace_enums.Orientation, role: i32 ```
    pub fn QBaseHeaderData(self: ?*anyopaque, section: i32, orientation: i32, role: i32) QtC.QVariant {
        return qtc.KRearrangeColumnsProxyModel_QBaseHeaderData(@ptrCast(self), @intCast(section), @intCast(orientation), @intCast(role));
    }

    /// [Qt documentation](https://api.kde.org/krearrangecolumnsproxymodel.html#hasChildren)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, parent: QtC.QModelIndex ```
    pub fn HasChildren(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.KRearrangeColumnsProxyModel_HasChildren(@ptrCast(self), @ptrCast(parent));
    }

    /// [Qt documentation](https://api.kde.org/krearrangecolumnsproxymodel.html#hasChildren)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, parent: QtC.QModelIndex) callconv(.c) bool ```
    pub fn OnHasChildren(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KRearrangeColumnsProxyModel_OnHasChildren(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/krearrangecolumnsproxymodel.html#hasChildren)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, parent: QtC.QModelIndex ```
    pub fn QBaseHasChildren(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.KRearrangeColumnsProxyModel_QBaseHasChildren(@ptrCast(self), @ptrCast(parent));
    }

    /// [Qt documentation](https://api.kde.org/krearrangecolumnsproxymodel.html#sibling)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, row: i32, column: i32, idx: QtC.QModelIndex ```
    pub fn Sibling(self: ?*anyopaque, row: i32, column: i32, idx: ?*anyopaque) QtC.QModelIndex {
        return qtc.KRearrangeColumnsProxyModel_Sibling(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(idx));
    }

    /// [Qt documentation](https://api.kde.org/krearrangecolumnsproxymodel.html#sibling)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, row: i32, column: i32, idx: QtC.QModelIndex) callconv(.c) QtC.QModelIndex ```
    pub fn OnSibling(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.KRearrangeColumnsProxyModel_OnSibling(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/krearrangecolumnsproxymodel.html#sibling)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, row: i32, column: i32, idx: QtC.QModelIndex ```
    pub fn QBaseSibling(self: ?*anyopaque, row: i32, column: i32, idx: ?*anyopaque) QtC.QModelIndex {
        return qtc.KRearrangeColumnsProxyModel_QBaseSibling(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(idx));
    }

    /// [Qt documentation](https://api.kde.org/krearrangecolumnsproxymodel.html#proxyColumnForSourceColumn)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, sourceColumn: i32 ```
    pub fn ProxyColumnForSourceColumn(self: ?*anyopaque, sourceColumn: i32) i32 {
        return qtc.KRearrangeColumnsProxyModel_ProxyColumnForSourceColumn(@ptrCast(self), @intCast(sourceColumn));
    }

    /// [Qt documentation](https://api.kde.org/krearrangecolumnsproxymodel.html#sourceColumnForProxyColumn)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, proxyColumn: i32 ```
    pub fn SourceColumnForProxyColumn(self: ?*anyopaque, proxyColumn: i32) i32 {
        return qtc.KRearrangeColumnsProxyModel_SourceColumnForProxyColumn(@ptrCast(self), @intCast(proxyColumn));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KRearrangeColumnsProxyModel_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krearrangecolumnsproxymodel.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KRearrangeColumnsProxyModel_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krearrangecolumnsproxymodel.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#handleSourceLayoutChanges)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel ```
    pub fn HandleSourceLayoutChanges(self: ?*anyopaque) bool {
        return qtc.QIdentityProxyModel_HandleSourceLayoutChanges(@ptrCast(self));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#handleSourceDataChanges)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel ```
    pub fn HandleSourceDataChanges(self: ?*anyopaque) bool {
        return qtc.QIdentityProxyModel_HandleSourceDataChanges(@ptrCast(self));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#sourceModel)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel ```
    pub fn SourceModel(self: ?*anyopaque) QtC.QAbstractItemModel {
        return qtc.QAbstractProxyModel_SourceModel(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, row: i32, column: i32 ```
    pub fn HasIndex(self: ?*anyopaque, row: i32, column: i32) bool {
        return qtc.QAbstractItemModel_HasIndex(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, row: i32 ```
    pub fn InsertRow(self: ?*anyopaque, row: i32) bool {
        return qtc.QAbstractItemModel_InsertRow(@ptrCast(self), @intCast(row));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, column: i32 ```
    pub fn InsertColumn(self: ?*anyopaque, column: i32) bool {
        return qtc.QAbstractItemModel_InsertColumn(@ptrCast(self), @intCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, row: i32 ```
    pub fn RemoveRow(self: ?*anyopaque, row: i32) bool {
        return qtc.QAbstractItemModel_RemoveRow(@ptrCast(self), @intCast(row));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, column: i32 ```
    pub fn RemoveColumn(self: ?*anyopaque, column: i32) bool {
        return qtc.QAbstractItemModel_RemoveColumn(@ptrCast(self), @intCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, sourceParent: QtC.QModelIndex, sourceRow: i32, destinationParent: QtC.QModelIndex, destinationChild: i32 ```
    pub fn MoveRow(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceRow: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.QAbstractItemModel_MoveRow(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceRow), @ptrCast(destinationParent), @intCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, sourceParent: QtC.QModelIndex, sourceColumn: i32, destinationParent: QtC.QModelIndex, destinationChild: i32 ```
    pub fn MoveColumn(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceColumn: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.QAbstractItemModel_MoveColumn(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceColumn), @ptrCast(destinationParent), @intCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, index: QtC.QModelIndex ```
    pub fn CheckIndex(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_CheckIndex(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, topLeft: QtC.QModelIndex, bottomRight: QtC.QModelIndex ```
    pub fn DataChanged(self: ?*anyopaque, topLeft: ?*anyopaque, bottomRight: ?*anyopaque) void {
        qtc.QAbstractItemModel_DataChanged(@ptrCast(self), @ptrCast(topLeft), @ptrCast(bottomRight));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, topLeft: QtC.QModelIndex, bottomRight: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnDataChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_DataChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, orientation: qnamespace_enums.Orientation, first: i32, last: i32 ```
    pub fn HeaderDataChanged(self: ?*anyopaque, orientation: i32, first: i32, last: i32) void {
        qtc.QAbstractItemModel_HeaderDataChanged(@ptrCast(self), @intCast(orientation), @intCast(first), @intCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, orientation: qnamespace_enums.Orientation, first: i32, last: i32) callconv(.c) void ```
    pub fn OnHeaderDataChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_HeaderDataChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel ```
    pub fn LayoutChanged(self: ?*anyopaque) void {
        qtc.QAbstractItemModel_LayoutChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel) callconv(.c) void ```
    pub fn OnLayoutChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel ```
    pub fn LayoutAboutToBeChanged(self: ?*anyopaque) void {
        qtc.QAbstractItemModel_LayoutAboutToBeChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel) callconv(.c) void ```
    pub fn OnLayoutAboutToBeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutAboutToBeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, row: i32, column: i32, parent: QtC.QModelIndex ```
    pub fn HasIndex3(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_HasIndex3(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, row: i32, parent: QtC.QModelIndex ```
    pub fn InsertRow2(self: ?*anyopaque, row: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_InsertRow2(@ptrCast(self), @intCast(row), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, column: i32, parent: QtC.QModelIndex ```
    pub fn InsertColumn2(self: ?*anyopaque, column: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_InsertColumn2(@ptrCast(self), @intCast(column), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, row: i32, parent: QtC.QModelIndex ```
    pub fn RemoveRow2(self: ?*anyopaque, row: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_RemoveRow2(@ptrCast(self), @intCast(row), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, column: i32, parent: QtC.QModelIndex ```
    pub fn RemoveColumn2(self: ?*anyopaque, column: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_RemoveColumn2(@ptrCast(self), @intCast(column), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, index: QtC.QModelIndex, options: flag of qabstractitemmodel_enums.CheckIndexOption ```
    pub fn CheckIndex2(self: ?*anyopaque, index: ?*anyopaque, options: i32) bool {
        return qtc.QAbstractItemModel_CheckIndex2(@ptrCast(self), @ptrCast(index), @intCast(options));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, topLeft: QtC.QModelIndex, bottomRight: QtC.QModelIndex, roles: []i32 ```
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
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, topLeft: QtC.QModelIndex, bottomRight: QtC.QModelIndex, roles: [*:-1]i32) callconv(.c) void ```
    pub fn OnDataChanged3(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, [*:-1]i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_DataChanged3(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, parents: []QtC.QPersistentModelIndex ```
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
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, parents: [*]QtC.QPersistentModelIndex) callconv(.c) void ```
    pub fn OnLayoutChanged1(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*]QtC.QPersistentModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutChanged1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, parents: []QtC.QPersistentModelIndex, hint: qabstractitemmodel_enums.LayoutChangeHint ```
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
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, parents: [*]QtC.QPersistentModelIndex, hint: qabstractitemmodel_enums.LayoutChangeHint) callconv(.c) void ```
    pub fn OnLayoutChanged2(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*]QtC.QPersistentModelIndex, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutChanged2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, parents: []QtC.QPersistentModelIndex ```
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
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, parents: [*]QtC.QPersistentModelIndex) callconv(.c) void ```
    pub fn OnLayoutAboutToBeChanged1(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*]QtC.QPersistentModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutAboutToBeChanged1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, parents: []QtC.QPersistentModelIndex, hint: qabstractitemmodel_enums.LayoutChangeHint ```
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
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, parents: [*]QtC.QPersistentModelIndex, hint: qabstractitemmodel_enums.LayoutChangeHint) callconv(.c) void ```
    pub fn OnLayoutAboutToBeChanged2(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*]QtC.QPersistentModelIndex, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutAboutToBeChanged2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krearrangecolumnsproxymodel.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, name: []const u8 ```
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
    /// ``` self: QtC.KRearrangeColumnsProxyModel ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("krearrangecolumnsproxymodel.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, obj: QtC.QObject ```
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
    /// ``` self: QtC.KRearrangeColumnsProxyModel, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.KRearrangeColumnsProxyModel ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.KRearrangeColumnsProxyModel, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#dropMimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, data: QtC.QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QtC.QModelIndex ```
    pub fn DropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.KRearrangeColumnsProxyModel_DropMimeData(@ptrCast(self), @ptrCast(data), @intCast(action), @intCast(row), @intCast(column), @ptrCast(parent));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#dropMimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, data: QtC.QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QtC.QModelIndex ```
    pub fn QBaseDropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.KRearrangeColumnsProxyModel_QBaseDropMimeData(@ptrCast(self), @ptrCast(data), @intCast(action), @intCast(row), @intCast(column), @ptrCast(parent));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#dropMimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, data: QtC.QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QtC.QModelIndex) callconv(.c) bool ```
    pub fn OnDropMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.KRearrangeColumnsProxyModel_OnDropMimeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapSelectionFromSource)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, selection: QtC.QItemSelection ```
    pub fn MapSelectionFromSource(self: ?*anyopaque, selection: ?*anyopaque) QtC.QItemSelection {
        return qtc.KRearrangeColumnsProxyModel_MapSelectionFromSource(@ptrCast(self), @ptrCast(selection));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapSelectionFromSource)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, selection: QtC.QItemSelection ```
    pub fn QBaseMapSelectionFromSource(self: ?*anyopaque, selection: ?*anyopaque) QtC.QItemSelection {
        return qtc.KRearrangeColumnsProxyModel_QBaseMapSelectionFromSource(@ptrCast(self), @ptrCast(selection));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapSelectionFromSource)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, selection: QtC.QItemSelection) callconv(.c) QtC.QItemSelection ```
    pub fn OnMapSelectionFromSource(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QItemSelection) void {
        qtc.KRearrangeColumnsProxyModel_OnMapSelectionFromSource(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapSelectionToSource)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, selection: QtC.QItemSelection ```
    pub fn MapSelectionToSource(self: ?*anyopaque, selection: ?*anyopaque) QtC.QItemSelection {
        return qtc.KRearrangeColumnsProxyModel_MapSelectionToSource(@ptrCast(self), @ptrCast(selection));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapSelectionToSource)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, selection: QtC.QItemSelection ```
    pub fn QBaseMapSelectionToSource(self: ?*anyopaque, selection: ?*anyopaque) QtC.QItemSelection {
        return qtc.KRearrangeColumnsProxyModel_QBaseMapSelectionToSource(@ptrCast(self), @ptrCast(selection));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#mapSelectionToSource)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, selection: QtC.QItemSelection) callconv(.c) QtC.QItemSelection ```
    pub fn OnMapSelectionToSource(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QItemSelection) void {
        qtc.KRearrangeColumnsProxyModel_OnMapSelectionToSource(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#match)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, start: QtC.QModelIndex, role: i32, value: QtC.QVariant, hits: i32, flags: flag of qnamespace_enums.MatchFlag, allocator: std.mem.Allocator ```
    pub fn Match(self: ?*anyopaque, start: ?*anyopaque, role: i32, value: ?*anyopaque, hits: i32, flags: i32, allocator: std.mem.Allocator) []QtC.QModelIndex {
        const _arr: qtc.libqt_list = qtc.KRearrangeColumnsProxyModel_Match(@ptrCast(self), @ptrCast(start), @intCast(role), @ptrCast(value), @intCast(hits), @intCast(flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QModelIndex, _arr.len) catch @panic("krearrangecolumnsproxymodel.Match: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#match)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, start: QtC.QModelIndex, role: i32, value: QtC.QVariant, hits: i32, flags: flag of qnamespace_enums.MatchFlag, allocator: std.mem.Allocator ```
    pub fn QBaseMatch(self: ?*anyopaque, start: ?*anyopaque, role: i32, value: ?*anyopaque, hits: i32, flags: i32, allocator: std.mem.Allocator) []QtC.QModelIndex {
        const _arr: qtc.libqt_list = qtc.KRearrangeColumnsProxyModel_QBaseMatch(@ptrCast(self), @ptrCast(start), @intCast(role), @ptrCast(value), @intCast(hits), @intCast(flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QModelIndex, _arr.len) catch @panic("krearrangecolumnsproxymodel.Match: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#match)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, start: QtC.QModelIndex, role: i32, value: QtC.QVariant, hits: i32, flags: flag of qnamespace_enums.MatchFlag) callconv(.c) [*:null]QtC.QModelIndex ```
    pub fn OnMatch(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, ?*anyopaque, i32, i32) callconv(.c) [*:null]QtC.QModelIndex) void {
        qtc.KRearrangeColumnsProxyModel_OnMatch(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#setSourceModel)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, sourceModel: QtC.QAbstractItemModel ```
    pub fn SetSourceModel(self: ?*anyopaque, sourceModel: ?*anyopaque) void {
        qtc.KRearrangeColumnsProxyModel_SetSourceModel(@ptrCast(self), @ptrCast(sourceModel));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#setSourceModel)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, sourceModel: QtC.QAbstractItemModel ```
    pub fn QBaseSetSourceModel(self: ?*anyopaque, sourceModel: ?*anyopaque) void {
        qtc.KRearrangeColumnsProxyModel_QBaseSetSourceModel(@ptrCast(self), @ptrCast(sourceModel));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#setSourceModel)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, sourceModel: QtC.QAbstractItemModel) callconv(.c) void ```
    pub fn OnSetSourceModel(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnSetSourceModel(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#insertColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, column: i32, count: i32, parent: QtC.QModelIndex ```
    pub fn InsertColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.KRearrangeColumnsProxyModel_InsertColumns(@ptrCast(self), @intCast(column), @intCast(count), @ptrCast(parent));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#insertColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, column: i32, count: i32, parent: QtC.QModelIndex ```
    pub fn QBaseInsertColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.KRearrangeColumnsProxyModel_QBaseInsertColumns(@ptrCast(self), @intCast(column), @intCast(count), @ptrCast(parent));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#insertColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, column: i32, count: i32, parent: QtC.QModelIndex) callconv(.c) bool ```
    pub fn OnInsertColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.KRearrangeColumnsProxyModel_OnInsertColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#insertRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, row: i32, count: i32, parent: QtC.QModelIndex ```
    pub fn InsertRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.KRearrangeColumnsProxyModel_InsertRows(@ptrCast(self), @intCast(row), @intCast(count), @ptrCast(parent));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#insertRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, row: i32, count: i32, parent: QtC.QModelIndex ```
    pub fn QBaseInsertRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.KRearrangeColumnsProxyModel_QBaseInsertRows(@ptrCast(self), @intCast(row), @intCast(count), @ptrCast(parent));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#insertRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, row: i32, count: i32, parent: QtC.QModelIndex) callconv(.c) bool ```
    pub fn OnInsertRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.KRearrangeColumnsProxyModel_OnInsertRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#removeColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, column: i32, count: i32, parent: QtC.QModelIndex ```
    pub fn RemoveColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.KRearrangeColumnsProxyModel_RemoveColumns(@ptrCast(self), @intCast(column), @intCast(count), @ptrCast(parent));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#removeColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, column: i32, count: i32, parent: QtC.QModelIndex ```
    pub fn QBaseRemoveColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.KRearrangeColumnsProxyModel_QBaseRemoveColumns(@ptrCast(self), @intCast(column), @intCast(count), @ptrCast(parent));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#removeColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, column: i32, count: i32, parent: QtC.QModelIndex) callconv(.c) bool ```
    pub fn OnRemoveColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.KRearrangeColumnsProxyModel_OnRemoveColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#removeRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, row: i32, count: i32, parent: QtC.QModelIndex ```
    pub fn RemoveRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.KRearrangeColumnsProxyModel_RemoveRows(@ptrCast(self), @intCast(row), @intCast(count), @ptrCast(parent));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#removeRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, row: i32, count: i32, parent: QtC.QModelIndex ```
    pub fn QBaseRemoveRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.KRearrangeColumnsProxyModel_QBaseRemoveRows(@ptrCast(self), @intCast(row), @intCast(count), @ptrCast(parent));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#removeRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, row: i32, count: i32, parent: QtC.QModelIndex) callconv(.c) bool ```
    pub fn OnRemoveRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.KRearrangeColumnsProxyModel_OnRemoveRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#moveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, sourceParent: QtC.QModelIndex, sourceRow: i32, count: i32, destinationParent: QtC.QModelIndex, destinationChild: i32 ```
    pub fn MoveRows(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceRow: i32, count: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.KRearrangeColumnsProxyModel_MoveRows(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceRow), @intCast(count), @ptrCast(destinationParent), @intCast(destinationChild));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#moveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, sourceParent: QtC.QModelIndex, sourceRow: i32, count: i32, destinationParent: QtC.QModelIndex, destinationChild: i32 ```
    pub fn QBaseMoveRows(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceRow: i32, count: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.KRearrangeColumnsProxyModel_QBaseMoveRows(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceRow), @intCast(count), @ptrCast(destinationParent), @intCast(destinationChild));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#moveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, sourceParent: QtC.QModelIndex, sourceRow: i32, count: i32, destinationParent: QtC.QModelIndex, destinationChild: i32) callconv(.c) bool ```
    pub fn OnMoveRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.KRearrangeColumnsProxyModel_OnMoveRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#moveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, sourceParent: QtC.QModelIndex, sourceColumn: i32, count: i32, destinationParent: QtC.QModelIndex, destinationChild: i32 ```
    pub fn MoveColumns(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceColumn: i32, count: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.KRearrangeColumnsProxyModel_MoveColumns(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceColumn), @intCast(count), @ptrCast(destinationParent), @intCast(destinationChild));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#moveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, sourceParent: QtC.QModelIndex, sourceColumn: i32, count: i32, destinationParent: QtC.QModelIndex, destinationChild: i32 ```
    pub fn QBaseMoveColumns(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceColumn: i32, count: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.KRearrangeColumnsProxyModel_QBaseMoveColumns(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceColumn), @intCast(count), @ptrCast(destinationParent), @intCast(destinationChild));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#moveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, sourceParent: QtC.QModelIndex, sourceColumn: i32, count: i32, destinationParent: QtC.QModelIndex, destinationChild: i32) callconv(.c) bool ```
    pub fn OnMoveColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.KRearrangeColumnsProxyModel_OnMoveColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel ```
    pub fn Submit(self: ?*anyopaque) bool {
        return qtc.KRearrangeColumnsProxyModel_Submit(@ptrCast(self));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel ```
    pub fn QBaseSubmit(self: ?*anyopaque) bool {
        return qtc.KRearrangeColumnsProxyModel_QBaseSubmit(@ptrCast(self));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn () callconv(.c) bool ```
    pub fn OnSubmit(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KRearrangeColumnsProxyModel_OnSubmit(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel ```
    pub fn Revert(self: ?*anyopaque) void {
        qtc.KRearrangeColumnsProxyModel_Revert(@ptrCast(self));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel ```
    pub fn QBaseRevert(self: ?*anyopaque) void {
        qtc.KRearrangeColumnsProxyModel_QBaseRevert(@ptrCast(self));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn () callconv(.c) void ```
    pub fn OnRevert(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnRevert(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#data)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, proxyIndex: QtC.QModelIndex, role: i32 ```
    pub fn Data(self: ?*anyopaque, proxyIndex: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.KRearrangeColumnsProxyModel_Data(@ptrCast(self), @ptrCast(proxyIndex), @intCast(role));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#data)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, proxyIndex: QtC.QModelIndex, role: i32 ```
    pub fn QBaseData(self: ?*anyopaque, proxyIndex: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.KRearrangeColumnsProxyModel_QBaseData(@ptrCast(self), @ptrCast(proxyIndex), @intCast(role));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#data)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, proxyIndex: QtC.QModelIndex, role: i32) callconv(.c) QtC.QVariant ```
    pub fn OnData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) QtC.QVariant) void {
        qtc.KRearrangeColumnsProxyModel_OnData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, index: QtC.QModelIndex, allocator: std.mem.Allocator ```
    pub fn ItemData(self: ?*anyopaque, index: ?*anyopaque, allocator: std.mem.Allocator) map_i32_qtcqvariant {
        const _map: qtc.libqt_map = qtc.KRearrangeColumnsProxyModel_ItemData(@ptrCast(self), @ptrCast(index));
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
            _ret.put(allocator, _key, _value) catch @panic("krearrangecolumnsproxymodel.ItemData: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, index: QtC.QModelIndex, allocator: std.mem.Allocator ```
    pub fn QBaseItemData(self: ?*anyopaque, index: ?*anyopaque, allocator: std.mem.Allocator) map_i32_qtcqvariant {
        const _map: qtc.libqt_map = qtc.KRearrangeColumnsProxyModel_QBaseItemData(@ptrCast(self), @ptrCast(index));
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
            _ret.put(allocator, _key, _value) catch @panic("krearrangecolumnsproxymodel.ItemData: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, index: QtC.QModelIndex) callconv(.c) map_i32_qtcqvariant ```
    pub fn OnItemData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) map_i32_qtcqvariant) void {
        qtc.KRearrangeColumnsProxyModel_OnItemData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#flags)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, index: QtC.QModelIndex ```
    ///
    /// Returns: ``` flag of qnamespace_enums.ItemFlag ```
    pub fn Flags(self: ?*anyopaque, index: ?*anyopaque) i32 {
        return qtc.KRearrangeColumnsProxyModel_Flags(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#flags)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, index: QtC.QModelIndex ```
    ///
    /// Returns: ``` flag of qnamespace_enums.ItemFlag ```
    pub fn QBaseFlags(self: ?*anyopaque, index: ?*anyopaque) i32 {
        return qtc.KRearrangeColumnsProxyModel_QBaseFlags(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#flags)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, index: QtC.QModelIndex) callconv(.c) i32 ```
    pub fn OnFlags(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.KRearrangeColumnsProxyModel_OnFlags(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#setData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, index: QtC.QModelIndex, value: QtC.QVariant, role: i32 ```
    pub fn SetData(self: ?*anyopaque, index: ?*anyopaque, value: ?*anyopaque, role: i32) bool {
        return qtc.KRearrangeColumnsProxyModel_SetData(@ptrCast(self), @ptrCast(index), @ptrCast(value), @intCast(role));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#setData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, index: QtC.QModelIndex, value: QtC.QVariant, role: i32 ```
    pub fn QBaseSetData(self: ?*anyopaque, index: ?*anyopaque, value: ?*anyopaque, role: i32) bool {
        return qtc.KRearrangeColumnsProxyModel_QBaseSetData(@ptrCast(self), @ptrCast(index), @ptrCast(value), @intCast(role));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#setData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, index: QtC.QModelIndex, value: QtC.QVariant, role: i32) callconv(.c) bool ```
    pub fn OnSetData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.KRearrangeColumnsProxyModel_OnSetData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, index: QtC.QModelIndex, roles: map_i32_qtcqvariant, allocator: std.mem.Allocator ```
    pub fn SetItemData(self: ?*anyopaque, index: ?*anyopaque, roles: map_i32_qtcqvariant, allocator: std.mem.Allocator) bool {
        const roles_keys = allocator.alloc(i32, roles.count()) catch @panic("krearrangecolumnsproxymodel.SetItemData: Memory allocation failed");
        defer allocator.free(roles_keys);
        const roles_values = allocator.alloc(QtC.QVariant, roles.count()) catch @panic("krearrangecolumnsproxymodel.SetItemData: Memory allocation failed");
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
        return qtc.KRearrangeColumnsProxyModel_SetItemData(@ptrCast(self), @ptrCast(index), roles_map);
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, index: QtC.QModelIndex, roles: map_i32_qtcqvariant, allocator: std.mem.Allocator ```
    pub fn QBaseSetItemData(self: ?*anyopaque, index: ?*anyopaque, roles: map_i32_qtcqvariant, allocator: std.mem.Allocator) bool {
        const roles_keys = allocator.alloc(i32, roles.count()) catch @panic("krearrangecolumnsproxymodel.SetItemData: Memory allocation failed");
        defer allocator.free(roles_keys);
        const roles_values = allocator.alloc(QtC.QVariant, roles.count()) catch @panic("krearrangecolumnsproxymodel.SetItemData: Memory allocation failed");
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
        return qtc.KRearrangeColumnsProxyModel_QBaseSetItemData(@ptrCast(self), @ptrCast(index), roles_map);
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, index: QtC.QModelIndex, roles: map_i32_qtcqvariant) callconv(.c) bool ```
    pub fn OnSetItemData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, map_i32_qtcqvariant) callconv(.c) bool) void {
        qtc.KRearrangeColumnsProxyModel_OnSetItemData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#setHeaderData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, section: i32, orientation: qnamespace_enums.Orientation, value: QtC.QVariant, role: i32 ```
    pub fn SetHeaderData(self: ?*anyopaque, section: i32, orientation: i32, value: ?*anyopaque, role: i32) bool {
        return qtc.KRearrangeColumnsProxyModel_SetHeaderData(@ptrCast(self), @intCast(section), @intCast(orientation), @ptrCast(value), @intCast(role));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#setHeaderData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, section: i32, orientation: qnamespace_enums.Orientation, value: QtC.QVariant, role: i32 ```
    pub fn QBaseSetHeaderData(self: ?*anyopaque, section: i32, orientation: i32, value: ?*anyopaque, role: i32) bool {
        return qtc.KRearrangeColumnsProxyModel_QBaseSetHeaderData(@ptrCast(self), @intCast(section), @intCast(orientation), @ptrCast(value), @intCast(role));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#setHeaderData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, section: i32, orientation: qnamespace_enums.Orientation, value: QtC.QVariant, role: i32) callconv(.c) bool ```
    pub fn OnSetHeaderData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.KRearrangeColumnsProxyModel_OnSetHeaderData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, index: QtC.QModelIndex ```
    pub fn ClearItemData(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.KRearrangeColumnsProxyModel_ClearItemData(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, index: QtC.QModelIndex ```
    pub fn QBaseClearItemData(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.KRearrangeColumnsProxyModel_QBaseClearItemData(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, index: QtC.QModelIndex) callconv(.c) bool ```
    pub fn OnClearItemData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KRearrangeColumnsProxyModel_OnClearItemData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#buddy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, index: QtC.QModelIndex ```
    pub fn Buddy(self: ?*anyopaque, index: ?*anyopaque) QtC.QModelIndex {
        return qtc.KRearrangeColumnsProxyModel_Buddy(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#buddy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, index: QtC.QModelIndex ```
    pub fn QBaseBuddy(self: ?*anyopaque, index: ?*anyopaque) QtC.QModelIndex {
        return qtc.KRearrangeColumnsProxyModel_QBaseBuddy(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#buddy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, index: QtC.QModelIndex) callconv(.c) QtC.QModelIndex ```
    pub fn OnBuddy(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.KRearrangeColumnsProxyModel_OnBuddy(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#canFetchMore)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, parent: QtC.QModelIndex ```
    pub fn CanFetchMore(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.KRearrangeColumnsProxyModel_CanFetchMore(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#canFetchMore)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, parent: QtC.QModelIndex ```
    pub fn QBaseCanFetchMore(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.KRearrangeColumnsProxyModel_QBaseCanFetchMore(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#canFetchMore)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, parent: QtC.QModelIndex) callconv(.c) bool ```
    pub fn OnCanFetchMore(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KRearrangeColumnsProxyModel_OnCanFetchMore(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#fetchMore)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, parent: QtC.QModelIndex ```
    pub fn FetchMore(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.KRearrangeColumnsProxyModel_FetchMore(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#fetchMore)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, parent: QtC.QModelIndex ```
    pub fn QBaseFetchMore(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.KRearrangeColumnsProxyModel_QBaseFetchMore(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#fetchMore)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, parent: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnFetchMore(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnFetchMore(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#sort)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, column: i32, order: qnamespace_enums.SortOrder ```
    pub fn Sort(self: ?*anyopaque, column: i32, order: i32) void {
        qtc.KRearrangeColumnsProxyModel_Sort(@ptrCast(self), @intCast(column), @intCast(order));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#sort)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, column: i32, order: qnamespace_enums.SortOrder ```
    pub fn QBaseSort(self: ?*anyopaque, column: i32, order: i32) void {
        qtc.KRearrangeColumnsProxyModel_QBaseSort(@ptrCast(self), @intCast(column), @intCast(order));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#sort)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, column: i32, order: qnamespace_enums.SortOrder) callconv(.c) void ```
    pub fn OnSort(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnSort(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#span)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, index: QtC.QModelIndex ```
    pub fn Span(self: ?*anyopaque, index: ?*anyopaque) QtC.QSize {
        return qtc.KRearrangeColumnsProxyModel_Span(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#span)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, index: QtC.QModelIndex ```
    pub fn QBaseSpan(self: ?*anyopaque, index: ?*anyopaque) QtC.QSize {
        return qtc.KRearrangeColumnsProxyModel_QBaseSpan(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#span)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, index: QtC.QModelIndex) callconv(.c) QtC.QSize ```
    pub fn OnSpan(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.KRearrangeColumnsProxyModel_OnSpan(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, indexes: []QtC.QModelIndex ```
    pub fn MimeData(self: ?*anyopaque, indexes: []QtC.QModelIndex) QtC.QMimeData {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        return qtc.KRearrangeColumnsProxyModel_MimeData(@ptrCast(self), indexes_list);
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, indexes: []QtC.QModelIndex ```
    pub fn QBaseMimeData(self: ?*anyopaque, indexes: []QtC.QModelIndex) QtC.QMimeData {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        return qtc.KRearrangeColumnsProxyModel_QBaseMimeData(@ptrCast(self), indexes_list);
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, indexes: [*]QtC.QModelIndex) callconv(.c) QtC.QMimeData ```
    pub fn OnMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*]QtC.QModelIndex) callconv(.c) QtC.QMimeData) void {
        qtc.KRearrangeColumnsProxyModel_OnMimeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, data: QtC.QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QtC.QModelIndex ```
    pub fn CanDropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.KRearrangeColumnsProxyModel_CanDropMimeData(@ptrCast(self), @ptrCast(data), @intCast(action), @intCast(row), @intCast(column), @ptrCast(parent));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, data: QtC.QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QtC.QModelIndex ```
    pub fn QBaseCanDropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.KRearrangeColumnsProxyModel_QBaseCanDropMimeData(@ptrCast(self), @ptrCast(data), @intCast(action), @intCast(row), @intCast(column), @ptrCast(parent));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, data: QtC.QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QtC.QModelIndex) callconv(.c) bool ```
    pub fn OnCanDropMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.KRearrangeColumnsProxyModel_OnCanDropMimeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeTypes)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, allocator: std.mem.Allocator ```
    pub fn MimeTypes(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KRearrangeColumnsProxyModel_MimeTypes(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeTypes)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, allocator: std.mem.Allocator ```
    pub fn QBaseMimeTypes(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KRearrangeColumnsProxyModel_QBaseMimeTypes(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeTypes)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn () callconv(.c) [*][*:0]const u8 ```
    pub fn OnMimeTypes(self: ?*anyopaque, callback: *const fn () callconv(.c) [*][*:0]const u8) void {
        qtc.KRearrangeColumnsProxyModel_OnMimeTypes(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel ```
    ///
    /// Returns: ``` flag of qnamespace_enums.DropAction ```
    pub fn SupportedDragActions(self: ?*anyopaque) i32 {
        return qtc.KRearrangeColumnsProxyModel_SupportedDragActions(@ptrCast(self));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel ```
    ///
    /// Returns: ``` flag of qnamespace_enums.DropAction ```
    pub fn QBaseSupportedDragActions(self: ?*anyopaque) i32 {
        return qtc.KRearrangeColumnsProxyModel_QBaseSupportedDragActions(@ptrCast(self));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSupportedDragActions(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KRearrangeColumnsProxyModel_OnSupportedDragActions(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDropActions)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel ```
    ///
    /// Returns: ``` flag of qnamespace_enums.DropAction ```
    pub fn SupportedDropActions(self: ?*anyopaque) i32 {
        return qtc.KRearrangeColumnsProxyModel_SupportedDropActions(@ptrCast(self));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDropActions)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel ```
    ///
    /// Returns: ``` flag of qnamespace_enums.DropAction ```
    pub fn QBaseSupportedDropActions(self: ?*anyopaque) i32 {
        return qtc.KRearrangeColumnsProxyModel_QBaseSupportedDropActions(@ptrCast(self));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDropActions)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSupportedDropActions(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KRearrangeColumnsProxyModel_OnSupportedDropActions(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, allocator: std.mem.Allocator ```
    pub fn RoleNames(self: ?*anyopaque, allocator: std.mem.Allocator) map_i32_u8 {
        const _map: qtc.libqt_map = qtc.KRearrangeColumnsProxyModel_RoleNames(@ptrCast(self));
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
            _ret.put(allocator, _key, _value) catch @panic("krearrangecolumnsproxymodel.RoleNames: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, allocator: std.mem.Allocator ```
    pub fn QBaseRoleNames(self: ?*anyopaque, allocator: std.mem.Allocator) map_i32_u8 {
        const _map: qtc.libqt_map = qtc.KRearrangeColumnsProxyModel_QBaseRoleNames(@ptrCast(self));
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
            _ret.put(allocator, _key, _value) catch @panic("krearrangecolumnsproxymodel.RoleNames: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn () callconv(.c) map_i32_u8 ```
    pub fn OnRoleNames(self: ?*anyopaque, callback: *const fn () callconv(.c) map_i32_u8) void {
        qtc.KRearrangeColumnsProxyModel_OnRoleNames(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, index: QtC.QModelIndex, roleDataSpan: QtC.QModelRoleDataSpan ```
    pub fn MultiData(self: ?*anyopaque, index: ?*anyopaque, roleDataSpan: QtC.QModelRoleDataSpan) void {
        qtc.KRearrangeColumnsProxyModel_MultiData(@ptrCast(self), @ptrCast(index), @ptrCast(roleDataSpan));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, index: QtC.QModelIndex, roleDataSpan: QtC.QModelRoleDataSpan ```
    pub fn QBaseMultiData(self: ?*anyopaque, index: ?*anyopaque, roleDataSpan: QtC.QModelRoleDataSpan) void {
        qtc.KRearrangeColumnsProxyModel_QBaseMultiData(@ptrCast(self), @ptrCast(index), @ptrCast(roleDataSpan));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, index: QtC.QModelIndex, roleDataSpan: QtC.QModelRoleDataSpan) callconv(.c) void ```
    pub fn OnMultiData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, QtC.QModelRoleDataSpan) callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnMultiData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel ```
    pub fn ResetInternalData(self: ?*anyopaque) void {
        qtc.KRearrangeColumnsProxyModel_ResetInternalData(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel ```
    pub fn QBaseResetInternalData(self: ?*anyopaque) void {
        qtc.KRearrangeColumnsProxyModel_QBaseResetInternalData(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn () callconv(.c) void ```
    pub fn OnResetInternalData(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnResetInternalData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KRearrangeColumnsProxyModel_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KRearrangeColumnsProxyModel_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KRearrangeColumnsProxyModel_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KRearrangeColumnsProxyModel_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KRearrangeColumnsProxyModel_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KRearrangeColumnsProxyModel_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KRearrangeColumnsProxyModel_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KRearrangeColumnsProxyModel_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KRearrangeColumnsProxyModel_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KRearrangeColumnsProxyModel_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KRearrangeColumnsProxyModel_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KRearrangeColumnsProxyModel_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KRearrangeColumnsProxyModel_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KRearrangeColumnsProxyModel_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KRearrangeColumnsProxyModel_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KRearrangeColumnsProxyModel_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#setHandleSourceLayoutChanges)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, handleSourceLayoutChanges: bool ```
    pub fn SetHandleSourceLayoutChanges(self: ?*anyopaque, handleSourceLayoutChanges: bool) void {
        qtc.KRearrangeColumnsProxyModel_SetHandleSourceLayoutChanges(@ptrCast(self), handleSourceLayoutChanges);
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#setHandleSourceLayoutChanges)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, handleSourceLayoutChanges: bool ```
    pub fn QBaseSetHandleSourceLayoutChanges(self: ?*anyopaque, handleSourceLayoutChanges: bool) void {
        qtc.KRearrangeColumnsProxyModel_QBaseSetHandleSourceLayoutChanges(@ptrCast(self), handleSourceLayoutChanges);
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#setHandleSourceLayoutChanges)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, handleSourceLayoutChanges: bool) callconv(.c) void ```
    pub fn OnSetHandleSourceLayoutChanges(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnSetHandleSourceLayoutChanges(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#setHandleSourceDataChanges)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, handleSourceDataChanges: bool ```
    pub fn SetHandleSourceDataChanges(self: ?*anyopaque, handleSourceDataChanges: bool) void {
        qtc.KRearrangeColumnsProxyModel_SetHandleSourceDataChanges(@ptrCast(self), handleSourceDataChanges);
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#setHandleSourceDataChanges)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, handleSourceDataChanges: bool ```
    pub fn QBaseSetHandleSourceDataChanges(self: ?*anyopaque, handleSourceDataChanges: bool) void {
        qtc.KRearrangeColumnsProxyModel_QBaseSetHandleSourceDataChanges(@ptrCast(self), handleSourceDataChanges);
    }

    /// Inherited from QIdentityProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qidentityproxymodel.html#setHandleSourceDataChanges)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, handleSourceDataChanges: bool) callconv(.c) void ```
    pub fn OnSetHandleSourceDataChanges(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnSetHandleSourceDataChanges(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, row: i32, col: i32, internalPtr: ?*anyopaque ```
    pub fn CreateSourceIndex(self: ?*anyopaque, row: i32, col: i32, internalPtr: ?*anyopaque) QtC.QModelIndex {
        return qtc.KRearrangeColumnsProxyModel_CreateSourceIndex(@ptrCast(self), @intCast(row), @intCast(col), internalPtr);
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, row: i32, col: i32, internalPtr: ?*anyopaque ```
    pub fn QBaseCreateSourceIndex(self: ?*anyopaque, row: i32, col: i32, internalPtr: ?*anyopaque) QtC.QModelIndex {
        return qtc.KRearrangeColumnsProxyModel_QBaseCreateSourceIndex(@ptrCast(self), @intCast(row), @intCast(col), internalPtr);
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, row: i32, col: i32, internalPtr: ?*anyopaque) callconv(.c) QtC.QModelIndex ```
    pub fn OnCreateSourceIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.KRearrangeColumnsProxyModel_OnCreateSourceIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, row: i32, column: i32 ```
    pub fn CreateIndex(self: ?*anyopaque, row: i32, column: i32) QtC.QModelIndex {
        return qtc.KRearrangeColumnsProxyModel_CreateIndex(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, row: i32, column: i32 ```
    pub fn QBaseCreateIndex(self: ?*anyopaque, row: i32, column: i32) QtC.QModelIndex {
        return qtc.KRearrangeColumnsProxyModel_QBaseCreateIndex(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, row: i32, column: i32) callconv(.c) QtC.QModelIndex ```
    pub fn OnCreateIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) QtC.QModelIndex) void {
        qtc.KRearrangeColumnsProxyModel_OnCreateIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, indexes: []QtC.QModelIndex, stream: QtC.QDataStream ```
    pub fn EncodeData(self: ?*anyopaque, indexes: []QtC.QModelIndex, stream: ?*anyopaque) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        qtc.KRearrangeColumnsProxyModel_EncodeData(@ptrCast(self), indexes_list, @ptrCast(stream));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, indexes: []QtC.QModelIndex, stream: QtC.QDataStream ```
    pub fn QBaseEncodeData(self: ?*anyopaque, indexes: []QtC.QModelIndex, stream: ?*anyopaque) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        qtc.KRearrangeColumnsProxyModel_QBaseEncodeData(@ptrCast(self), indexes_list, @ptrCast(stream));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, indexes: [*]QtC.QModelIndex, stream: QtC.QDataStream) callconv(.c) void ```
    pub fn OnEncodeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*]QtC.QModelIndex, ?*anyopaque) callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnEncodeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, row: i32, column: i32, parent: QtC.QModelIndex, stream: QtC.QDataStream ```
    pub fn DecodeData(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque, stream: ?*anyopaque) bool {
        return qtc.KRearrangeColumnsProxyModel_DecodeData(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(parent), @ptrCast(stream));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, row: i32, column: i32, parent: QtC.QModelIndex, stream: QtC.QDataStream ```
    pub fn QBaseDecodeData(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque, stream: ?*anyopaque) bool {
        return qtc.KRearrangeColumnsProxyModel_QBaseDecodeData(@ptrCast(self), @intCast(row), @intCast(column), @ptrCast(parent), @ptrCast(stream));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, row: i32, column: i32, parent: QtC.QModelIndex, stream: QtC.QDataStream) callconv(.c) bool ```
    pub fn OnDecodeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KRearrangeColumnsProxyModel_OnDecodeData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, parent: QtC.QModelIndex, first: i32, last: i32 ```
    pub fn BeginInsertRows(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.KRearrangeColumnsProxyModel_BeginInsertRows(@ptrCast(self), @ptrCast(parent), @intCast(first), @intCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, parent: QtC.QModelIndex, first: i32, last: i32 ```
    pub fn QBaseBeginInsertRows(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.KRearrangeColumnsProxyModel_QBaseBeginInsertRows(@ptrCast(self), @ptrCast(parent), @intCast(first), @intCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void ```
    pub fn OnBeginInsertRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnBeginInsertRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel ```
    pub fn EndInsertRows(self: ?*anyopaque) void {
        qtc.KRearrangeColumnsProxyModel_EndInsertRows(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel ```
    pub fn QBaseEndInsertRows(self: ?*anyopaque) void {
        qtc.KRearrangeColumnsProxyModel_QBaseEndInsertRows(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn () callconv(.c) void ```
    pub fn OnEndInsertRows(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnEndInsertRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, parent: QtC.QModelIndex, first: i32, last: i32 ```
    pub fn BeginRemoveRows(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.KRearrangeColumnsProxyModel_BeginRemoveRows(@ptrCast(self), @ptrCast(parent), @intCast(first), @intCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, parent: QtC.QModelIndex, first: i32, last: i32 ```
    pub fn QBaseBeginRemoveRows(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.KRearrangeColumnsProxyModel_QBaseBeginRemoveRows(@ptrCast(self), @ptrCast(parent), @intCast(first), @intCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void ```
    pub fn OnBeginRemoveRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnBeginRemoveRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel ```
    pub fn EndRemoveRows(self: ?*anyopaque) void {
        qtc.KRearrangeColumnsProxyModel_EndRemoveRows(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel ```
    pub fn QBaseEndRemoveRows(self: ?*anyopaque) void {
        qtc.KRearrangeColumnsProxyModel_QBaseEndRemoveRows(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn () callconv(.c) void ```
    pub fn OnEndRemoveRows(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnEndRemoveRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, sourceParent: QtC.QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QtC.QModelIndex, destinationRow: i32 ```
    pub fn BeginMoveRows(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceFirst: i32, sourceLast: i32, destinationParent: ?*anyopaque, destinationRow: i32) bool {
        return qtc.KRearrangeColumnsProxyModel_BeginMoveRows(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceFirst), @intCast(sourceLast), @ptrCast(destinationParent), @intCast(destinationRow));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, sourceParent: QtC.QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QtC.QModelIndex, destinationRow: i32 ```
    pub fn QBaseBeginMoveRows(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceFirst: i32, sourceLast: i32, destinationParent: ?*anyopaque, destinationRow: i32) bool {
        return qtc.KRearrangeColumnsProxyModel_QBaseBeginMoveRows(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceFirst), @intCast(sourceLast), @ptrCast(destinationParent), @intCast(destinationRow));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, sourceParent: QtC.QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QtC.QModelIndex, destinationRow: i32) callconv(.c) bool ```
    pub fn OnBeginMoveRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.KRearrangeColumnsProxyModel_OnBeginMoveRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel ```
    pub fn EndMoveRows(self: ?*anyopaque) void {
        qtc.KRearrangeColumnsProxyModel_EndMoveRows(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel ```
    pub fn QBaseEndMoveRows(self: ?*anyopaque) void {
        qtc.KRearrangeColumnsProxyModel_QBaseEndMoveRows(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn () callconv(.c) void ```
    pub fn OnEndMoveRows(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnEndMoveRows(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, parent: QtC.QModelIndex, first: i32, last: i32 ```
    pub fn BeginInsertColumns(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.KRearrangeColumnsProxyModel_BeginInsertColumns(@ptrCast(self), @ptrCast(parent), @intCast(first), @intCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, parent: QtC.QModelIndex, first: i32, last: i32 ```
    pub fn QBaseBeginInsertColumns(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.KRearrangeColumnsProxyModel_QBaseBeginInsertColumns(@ptrCast(self), @ptrCast(parent), @intCast(first), @intCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void ```
    pub fn OnBeginInsertColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnBeginInsertColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel ```
    pub fn EndInsertColumns(self: ?*anyopaque) void {
        qtc.KRearrangeColumnsProxyModel_EndInsertColumns(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel ```
    pub fn QBaseEndInsertColumns(self: ?*anyopaque) void {
        qtc.KRearrangeColumnsProxyModel_QBaseEndInsertColumns(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn () callconv(.c) void ```
    pub fn OnEndInsertColumns(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnEndInsertColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, parent: QtC.QModelIndex, first: i32, last: i32 ```
    pub fn BeginRemoveColumns(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.KRearrangeColumnsProxyModel_BeginRemoveColumns(@ptrCast(self), @ptrCast(parent), @intCast(first), @intCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, parent: QtC.QModelIndex, first: i32, last: i32 ```
    pub fn QBaseBeginRemoveColumns(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.KRearrangeColumnsProxyModel_QBaseBeginRemoveColumns(@ptrCast(self), @ptrCast(parent), @intCast(first), @intCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void ```
    pub fn OnBeginRemoveColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnBeginRemoveColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel ```
    pub fn EndRemoveColumns(self: ?*anyopaque) void {
        qtc.KRearrangeColumnsProxyModel_EndRemoveColumns(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel ```
    pub fn QBaseEndRemoveColumns(self: ?*anyopaque) void {
        qtc.KRearrangeColumnsProxyModel_QBaseEndRemoveColumns(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn () callconv(.c) void ```
    pub fn OnEndRemoveColumns(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnEndRemoveColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, sourceParent: QtC.QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QtC.QModelIndex, destinationColumn: i32 ```
    pub fn BeginMoveColumns(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceFirst: i32, sourceLast: i32, destinationParent: ?*anyopaque, destinationColumn: i32) bool {
        return qtc.KRearrangeColumnsProxyModel_BeginMoveColumns(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceFirst), @intCast(sourceLast), @ptrCast(destinationParent), @intCast(destinationColumn));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, sourceParent: QtC.QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QtC.QModelIndex, destinationColumn: i32 ```
    pub fn QBaseBeginMoveColumns(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceFirst: i32, sourceLast: i32, destinationParent: ?*anyopaque, destinationColumn: i32) bool {
        return qtc.KRearrangeColumnsProxyModel_QBaseBeginMoveColumns(@ptrCast(self), @ptrCast(sourceParent), @intCast(sourceFirst), @intCast(sourceLast), @ptrCast(destinationParent), @intCast(destinationColumn));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, sourceParent: QtC.QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QtC.QModelIndex, destinationColumn: i32) callconv(.c) bool ```
    pub fn OnBeginMoveColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.KRearrangeColumnsProxyModel_OnBeginMoveColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel ```
    pub fn EndMoveColumns(self: ?*anyopaque) void {
        qtc.KRearrangeColumnsProxyModel_EndMoveColumns(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel ```
    pub fn QBaseEndMoveColumns(self: ?*anyopaque) void {
        qtc.KRearrangeColumnsProxyModel_QBaseEndMoveColumns(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn () callconv(.c) void ```
    pub fn OnEndMoveColumns(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnEndMoveColumns(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel ```
    pub fn BeginResetModel(self: ?*anyopaque) void {
        qtc.KRearrangeColumnsProxyModel_BeginResetModel(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel ```
    pub fn QBaseBeginResetModel(self: ?*anyopaque) void {
        qtc.KRearrangeColumnsProxyModel_QBaseBeginResetModel(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn () callconv(.c) void ```
    pub fn OnBeginResetModel(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnBeginResetModel(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel ```
    pub fn EndResetModel(self: ?*anyopaque) void {
        qtc.KRearrangeColumnsProxyModel_EndResetModel(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel ```
    pub fn QBaseEndResetModel(self: ?*anyopaque) void {
        qtc.KRearrangeColumnsProxyModel_QBaseEndResetModel(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn () callconv(.c) void ```
    pub fn OnEndResetModel(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnEndResetModel(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, from: QtC.QModelIndex, to: QtC.QModelIndex ```
    pub fn ChangePersistentIndex(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque) void {
        qtc.KRearrangeColumnsProxyModel_ChangePersistentIndex(@ptrCast(self), @ptrCast(from), @ptrCast(to));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, from: QtC.QModelIndex, to: QtC.QModelIndex ```
    pub fn QBaseChangePersistentIndex(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque) void {
        qtc.KRearrangeColumnsProxyModel_QBaseChangePersistentIndex(@ptrCast(self), @ptrCast(from), @ptrCast(to));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, from: QtC.QModelIndex, to: QtC.QModelIndex) callconv(.c) void ```
    pub fn OnChangePersistentIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnChangePersistentIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, from: []QtC.QModelIndex, to: []QtC.QModelIndex ```
    pub fn ChangePersistentIndexList(self: ?*anyopaque, from: []QtC.QModelIndex, to: []QtC.QModelIndex) void {
        const from_list = qtc.libqt_list{
            .len = from.len,
            .data = @ptrCast(from.ptr),
        };
        const to_list = qtc.libqt_list{
            .len = to.len,
            .data = @ptrCast(to.ptr),
        };
        qtc.KRearrangeColumnsProxyModel_ChangePersistentIndexList(@ptrCast(self), from_list, to_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, from: []QtC.QModelIndex, to: []QtC.QModelIndex ```
    pub fn QBaseChangePersistentIndexList(self: ?*anyopaque, from: []QtC.QModelIndex, to: []QtC.QModelIndex) void {
        const from_list = qtc.libqt_list{
            .len = from.len,
            .data = @ptrCast(from.ptr),
        };
        const to_list = qtc.libqt_list{
            .len = to.len,
            .data = @ptrCast(to.ptr),
        };
        qtc.KRearrangeColumnsProxyModel_QBaseChangePersistentIndexList(@ptrCast(self), from_list, to_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, from: [*]QtC.QModelIndex, to: [*]QtC.QModelIndex) callconv(.c) void ```
    pub fn OnChangePersistentIndexList(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*]QtC.QModelIndex, [*]QtC.QModelIndex) callconv(.c) void) void {
        qtc.KRearrangeColumnsProxyModel_OnChangePersistentIndexList(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, allocator: std.mem.Allocator ```
    pub fn PersistentIndexList(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QModelIndex {
        const _arr: qtc.libqt_list = qtc.KRearrangeColumnsProxyModel_PersistentIndexList(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QModelIndex, _arr.len) catch @panic("krearrangecolumnsproxymodel.PersistentIndexList: Memory allocation failed");
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
    /// ``` self: QtC.KRearrangeColumnsProxyModel, allocator: std.mem.Allocator ```
    pub fn QBasePersistentIndexList(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QModelIndex {
        const _arr: qtc.libqt_list = qtc.KRearrangeColumnsProxyModel_QBasePersistentIndexList(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QModelIndex, _arr.len) catch @panic("krearrangecolumnsproxymodel.PersistentIndexList: Memory allocation failed");
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
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn () callconv(.c) [*:null]QtC.QModelIndex ```
    pub fn OnPersistentIndexList(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:null]QtC.QModelIndex) void {
        qtc.KRearrangeColumnsProxyModel_OnPersistentIndexList(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KRearrangeColumnsProxyModel_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KRearrangeColumnsProxyModel_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.KRearrangeColumnsProxyModel_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KRearrangeColumnsProxyModel_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KRearrangeColumnsProxyModel_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KRearrangeColumnsProxyModel_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KRearrangeColumnsProxyModel_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KRearrangeColumnsProxyModel_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KRearrangeColumnsProxyModel_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KRearrangeColumnsProxyModel_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KRearrangeColumnsProxyModel_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KRearrangeColumnsProxyModel_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractProxyModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractproxymodel.html#sourceModelChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel) callconv(.c) void ```
    pub fn OnSourceModelChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractProxyModel_Connect_SourceModelChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void ```
    pub fn OnRowsAboutToBeInserted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsAboutToBeInserted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void ```
    pub fn OnRowsInserted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsInserted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void ```
    pub fn OnRowsAboutToBeRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsAboutToBeRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void ```
    pub fn OnRowsRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void ```
    pub fn OnColumnsAboutToBeInserted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsAboutToBeInserted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void ```
    pub fn OnColumnsInserted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsInserted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void ```
    pub fn OnColumnsAboutToBeRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsAboutToBeRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void ```
    pub fn OnColumnsRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel) callconv(.c) void ```
    pub fn OnModelAboutToBeReset(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ModelAboutToBeReset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel) callconv(.c) void ```
    pub fn OnModelReset(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ModelReset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, sourceParent: QtC.QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QtC.QModelIndex, destinationRow: i32) callconv(.c) void ```
    pub fn OnRowsAboutToBeMoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsAboutToBeMoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, sourceParent: QtC.QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QtC.QModelIndex, destinationRow: i32) callconv(.c) void ```
    pub fn OnRowsMoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsMoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, sourceParent: QtC.QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QtC.QModelIndex, destinationColumn: i32) callconv(.c) void ```
    pub fn OnColumnsAboutToBeMoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsAboutToBeMoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, sourceParent: QtC.QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QtC.QModelIndex, destinationColumn: i32) callconv(.c) void ```
    pub fn OnColumnsMoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsMoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel, callback: *const fn (self: QtC.KRearrangeColumnsProxyModel, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/krearrangecolumnsproxymodel.html#dtor.KRearrangeColumnsProxyModel)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KRearrangeColumnsProxyModel ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KRearrangeColumnsProxyModel_Delete(@ptrCast(self));
    }
};
