const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qabstractitemmodel_enums = @import("../libqabstractitemmodel.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const map_i32_qtcqvariant = std.AutoHashMapUnmanaged(i32, QtC.QVariant);
const map_i32_u8 = std.AutoHashMapUnmanaged(i32, []u8);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html)
pub const qpdfbookmarkmodel = struct {
    /// New constructs a new QPdfBookmarkModel object.
    ///
    pub fn New() QtC.QPdfBookmarkModel {
        return qtc.QPdfBookmarkModel_new();
    }

    /// New2 constructs a new QPdfBookmarkModel object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn New2(parent: ?*anyopaque) QtC.QPdfBookmarkModel {
        return qtc.QPdfBookmarkModel_new2(@ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QPdfBookmarkModel_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.QPdfBookmarkModel_OnMetaObject(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    pub fn QBaseMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QPdfBookmarkModel_QBaseMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPdfBookmarkModel_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QPdfBookmarkModel_OnMetacast(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn QBaseMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPdfBookmarkModel_QBaseMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPdfBookmarkModel_Metacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QPdfBookmarkModel_OnMetacall(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPdfBookmarkModel_QBaseMetacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr(s: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpdfbookmarkmodel.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#document)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    pub fn Document(self: ?*anyopaque) QtC.QPdfDocument {
        return qtc.QPdfBookmarkModel_Document(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#setDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` document: QtC.QPdfDocument `
    ///
    pub fn SetDocument(self: ?*anyopaque, document: ?*anyopaque) void {
        qtc.QPdfBookmarkModel_SetDocument(@ptrCast(self), @ptrCast(document));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` role: i32 `
    ///
    pub fn Data(self: ?*anyopaque, index: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.QPdfBookmarkModel_Data(@ptrCast(self), @ptrCast(index), @bitCast(role));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#data)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, index: QtC.QModelIndex, role: i32) callconv(.c) QtC.QVariant `
    ///
    pub fn OnData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) QtC.QVariant) void {
        qtc.QPdfBookmarkModel_OnData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#data)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` role: i32 `
    ///
    pub fn QBaseData(self: ?*anyopaque, index: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.QPdfBookmarkModel_QBaseData(@ptrCast(self), @ptrCast(index), @bitCast(role));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#index)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn Index(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque) QtC.QModelIndex {
        return qtc.QPdfBookmarkModel_Index(@ptrCast(self), @bitCast(row), @bitCast(column), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#index)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, row: i32, column: i32, parent: QtC.QModelIndex) callconv(.c) QtC.QModelIndex `
    ///
    pub fn OnIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QPdfBookmarkModel_OnIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#index)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn QBaseIndex(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque) QtC.QModelIndex {
        return qtc.QPdfBookmarkModel_QBaseIndex(@ptrCast(self), @bitCast(row), @bitCast(column), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn Parent(self: ?*anyopaque, index: ?*anyopaque) QtC.QModelIndex {
        return qtc.QPdfBookmarkModel_Parent(@ptrCast(self), @ptrCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#parent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, index: QtC.QModelIndex) callconv(.c) QtC.QModelIndex `
    ///
    pub fn OnParent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QPdfBookmarkModel_OnParent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#parent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn QBaseParent(self: ?*anyopaque, index: ?*anyopaque) QtC.QModelIndex {
        return qtc.QPdfBookmarkModel_QBaseParent(@ptrCast(self), @ptrCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#rowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn RowCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QPdfBookmarkModel_RowCount(@ptrCast(self), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#rowCount)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, parent: QtC.QModelIndex) callconv(.c) i32 `
    ///
    pub fn OnRowCount(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QPdfBookmarkModel_OnRowCount(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#rowCount)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn QBaseRowCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QPdfBookmarkModel_QBaseRowCount(@ptrCast(self), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#columnCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn ColumnCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QPdfBookmarkModel_ColumnCount(@ptrCast(self), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#columnCount)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, parent: QtC.QModelIndex) callconv(.c) i32 `
    ///
    pub fn OnColumnCount(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QPdfBookmarkModel_OnColumnCount(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#columnCount)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn QBaseColumnCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.QPdfBookmarkModel_QBaseColumnCount(@ptrCast(self), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#roleNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn RoleNames(self: ?*anyopaque, allocator: std.mem.Allocator) map_i32_u8 {
        const _map: qtc.libqt_map = qtc.QPdfBookmarkModel_RoleNames(@ptrCast(self));
        var _ret: map_i32_u8 = .empty;
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
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("qpdfbookmarkmodel.RoleNames: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.put(allocator, _key, _value_slice) catch @panic("qpdfbookmarkmodel.RoleNames: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#roleNames)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_map `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of map_i32_u8 `
    ///
    pub fn OnRoleNames(self: ?*anyopaque, callback: *const fn () callconv(.c) qtc.libqt_map) void {
        qtc.QPdfBookmarkModel_OnRoleNames(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#roleNames)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn QBaseRoleNames(self: ?*anyopaque, allocator: std.mem.Allocator) map_i32_u8 {
        const _map: qtc.libqt_map = qtc.QPdfBookmarkModel_QBaseRoleNames(@ptrCast(self));
        var _ret: map_i32_u8 = .empty;
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
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("qpdfbookmarkmodel.RoleNames: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.put(allocator, _key, _value_slice) catch @panic("qpdfbookmarkmodel.RoleNames: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#documentChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` document: QtC.QPdfDocument `
    ///
    pub fn DocumentChanged(self: ?*anyopaque, document: ?*anyopaque) void {
        qtc.QPdfBookmarkModel_DocumentChanged(@ptrCast(self), @ptrCast(document));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#documentChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, document: QtC.QPdfDocument) callconv(.c) void `
    ///
    pub fn OnDocumentChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPdfBookmarkModel_Connect_DocumentChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(s: [:0]const u8, c: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpdfbookmarkmodel.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr3(s: [:0]const u8, c: [:0]const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpdfbookmarkmodel.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn HasIndex(self: ?*anyopaque, row: i32, column: i32) bool {
        return qtc.QAbstractItemModel_HasIndex(@ptrCast(self), @bitCast(row), @bitCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` row: i32 `
    ///
    pub fn InsertRow(self: ?*anyopaque, row: i32) bool {
        return qtc.QAbstractItemModel_InsertRow(@ptrCast(self), @bitCast(row));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` column: i32 `
    ///
    pub fn InsertColumn(self: ?*anyopaque, column: i32) bool {
        return qtc.QAbstractItemModel_InsertColumn(@ptrCast(self), @bitCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` row: i32 `
    ///
    pub fn RemoveRow(self: ?*anyopaque, row: i32) bool {
        return qtc.QAbstractItemModel_RemoveRow(@ptrCast(self), @bitCast(row));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` column: i32 `
    ///
    pub fn RemoveColumn(self: ?*anyopaque, column: i32) bool {
        return qtc.QAbstractItemModel_RemoveColumn(@ptrCast(self), @bitCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` sourceParent: QtC.QModelIndex `
    ///
    /// ` sourceRow: i32 `
    ///
    /// ` destinationParent: QtC.QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn MoveRow(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceRow: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.QAbstractItemModel_MoveRow(@ptrCast(self), @ptrCast(sourceParent), @bitCast(sourceRow), @ptrCast(destinationParent), @bitCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` sourceParent: QtC.QModelIndex `
    ///
    /// ` sourceColumn: i32 `
    ///
    /// ` destinationParent: QtC.QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn MoveColumn(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceColumn: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.QAbstractItemModel_MoveColumn(@ptrCast(self), @ptrCast(sourceParent), @bitCast(sourceColumn), @ptrCast(destinationParent), @bitCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn CheckIndex(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_CheckIndex(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` topLeft: QtC.QModelIndex `
    ///
    /// ` bottomRight: QtC.QModelIndex `
    ///
    pub fn DataChanged(self: ?*anyopaque, topLeft: ?*anyopaque, bottomRight: ?*anyopaque) void {
        qtc.QAbstractItemModel_DataChanged(@ptrCast(self), @ptrCast(topLeft), @ptrCast(bottomRight));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, topLeft: QtC.QModelIndex, bottomRight: QtC.QModelIndex) callconv(.c) void `
    ///
    pub fn OnDataChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_DataChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn HeaderDataChanged(self: ?*anyopaque, orientation: i32, first: i32, last: i32) void {
        qtc.QAbstractItemModel_HeaderDataChanged(@ptrCast(self), @bitCast(orientation), @bitCast(first), @bitCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, orientation: qnamespace_enums.Orientation, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnHeaderDataChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_HeaderDataChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    pub fn LayoutChanged(self: ?*anyopaque) void {
        qtc.QAbstractItemModel_LayoutChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel) callconv(.c) void `
    ///
    pub fn OnLayoutChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    pub fn LayoutAboutToBeChanged(self: ?*anyopaque) void {
        qtc.QAbstractItemModel_LayoutAboutToBeChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel) callconv(.c) void `
    ///
    pub fn OnLayoutAboutToBeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutAboutToBeChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn HasIndex3(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_HasIndex3(@ptrCast(self), @bitCast(row), @bitCast(column), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` row: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn InsertRow2(self: ?*anyopaque, row: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_InsertRow2(@ptrCast(self), @bitCast(row), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn InsertColumn2(self: ?*anyopaque, column: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_InsertColumn2(@ptrCast(self), @bitCast(column), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` row: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn RemoveRow2(self: ?*anyopaque, row: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_RemoveRow2(@ptrCast(self), @bitCast(row), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn RemoveColumn2(self: ?*anyopaque, column: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_RemoveColumn2(@ptrCast(self), @bitCast(column), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` options: flag of qabstractitemmodel_enums.CheckIndexOption `
    ///
    pub fn CheckIndex2(self: ?*anyopaque, index: ?*anyopaque, options: i32) bool {
        return qtc.QAbstractItemModel_CheckIndex2(@ptrCast(self), @ptrCast(index), @bitCast(options));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` topLeft: QtC.QModelIndex `
    ///
    /// ` bottomRight: QtC.QModelIndex `
    ///
    /// ` roles: []i32 `
    ///
    pub fn DataChanged3(self: ?*anyopaque, topLeft: ?*anyopaque, bottomRight: ?*anyopaque, roles: []i32) void {
        const roles_list = qtc.libqt_list{
            .len = roles.len,
            .data = roles.ptr,
        };
        qtc.QAbstractItemModel_DataChanged3(@ptrCast(self), @ptrCast(topLeft), @ptrCast(bottomRight), roles_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, topLeft: QtC.QModelIndex, bottomRight: QtC.QModelIndex, roles: qtc.libqt_list ([]i32)) callconv(.c) void `
    ///
    pub fn OnDataChanged3(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, qtc.libqt_list) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_DataChanged3(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` parents: []QtC.QPersistentModelIndex `
    ///
    pub fn LayoutChanged1(self: ?*anyopaque, parents: []QtC.QPersistentModelIndex) void {
        const parents_list = qtc.libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        qtc.QAbstractItemModel_LayoutChanged1(@ptrCast(self), parents_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, parents: qtc.libqt_list ([]QtC.QPersistentModelIndex)) callconv(.c) void `
    ///
    pub fn OnLayoutChanged1(self: ?*anyopaque, callback: *const fn (?*anyopaque, qtc.libqt_list) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutChanged1(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` parents: []QtC.QPersistentModelIndex `
    ///
    /// ` hint: qabstractitemmodel_enums.LayoutChangeHint `
    ///
    pub fn LayoutChanged2(self: ?*anyopaque, parents: []QtC.QPersistentModelIndex, hint: i32) void {
        const parents_list = qtc.libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        qtc.QAbstractItemModel_LayoutChanged2(@ptrCast(self), parents_list, @bitCast(hint));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, parents: qtc.libqt_list ([]QtC.QPersistentModelIndex), hint: qabstractitemmodel_enums.LayoutChangeHint) callconv(.c) void `
    ///
    pub fn OnLayoutChanged2(self: ?*anyopaque, callback: *const fn (?*anyopaque, qtc.libqt_list, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutChanged2(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` parents: []QtC.QPersistentModelIndex `
    ///
    pub fn LayoutAboutToBeChanged1(self: ?*anyopaque, parents: []QtC.QPersistentModelIndex) void {
        const parents_list = qtc.libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        qtc.QAbstractItemModel_LayoutAboutToBeChanged1(@ptrCast(self), parents_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, parents: qtc.libqt_list ([]QtC.QPersistentModelIndex)) callconv(.c) void `
    ///
    pub fn OnLayoutAboutToBeChanged1(self: ?*anyopaque, callback: *const fn (?*anyopaque, qtc.libqt_list) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutAboutToBeChanged1(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` parents: []QtC.QPersistentModelIndex `
    ///
    /// ` hint: qabstractitemmodel_enums.LayoutChangeHint `
    ///
    pub fn LayoutAboutToBeChanged2(self: ?*anyopaque, parents: []QtC.QPersistentModelIndex, hint: i32) void {
        const parents_list = qtc.libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        qtc.QAbstractItemModel_LayoutAboutToBeChanged2(@ptrCast(self), parents_list, @bitCast(hint));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, parents: qtc.libqt_list ([]QtC.QPersistentModelIndex), hint: qabstractitemmodel_enums.LayoutChangeHint) callconv(.c) void `
    ///
    pub fn OnLayoutAboutToBeChanged2(self: ?*anyopaque, callback: *const fn (?*anyopaque, qtc.libqt_list, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutAboutToBeChanged2(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpdfbookmarkmodel.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` thread: QtC.QThread `
    ///
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: ?*anyopaque, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qpdfbookmarkmodel.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` filterObj: QtC.QObject `
    ///
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` obj: QtC.QObject `
    ///
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    pub fn Connect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect3(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: QtC.QMetaMethod `
    ///
    pub fn Disconnect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    pub fn Disconnect3(self: ?*anyopaque) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect4(self: ?*anyopaque, receiver: ?*anyopaque) bool {
        return qtc.QObject_Disconnect4(@ptrCast(self), @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect5(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, name: [:0]const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: ?*anyopaque, name: [:0]const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qpdfbookmarkmodel.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qpdfbookmarkmodel.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: ?*anyopaque, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: ?*anyopaque, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8, param5: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect5(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring, @bitCast(param5));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect52(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: ?*anyopaque, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect22(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect22(@ptrCast(self), signal_Cstring, @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: ?*anyopaque, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self), @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` param1: QtC.QObject `
    ///
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` idx: QtC.QModelIndex `
    ///
    pub fn Sibling(self: ?*anyopaque, row: i32, column: i32, idx: ?*anyopaque) QtC.QModelIndex {
        return qtc.QPdfBookmarkModel_Sibling(@ptrCast(self), @bitCast(row), @bitCast(column), @ptrCast(idx));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` idx: QtC.QModelIndex `
    ///
    pub fn QBaseSibling(self: ?*anyopaque, row: i32, column: i32, idx: ?*anyopaque) QtC.QModelIndex {
        return qtc.QPdfBookmarkModel_QBaseSibling(@ptrCast(self), @bitCast(row), @bitCast(column), @ptrCast(idx));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, row: i32, column: i32, idx: QtC.QModelIndex) callconv(.c) QtC.QModelIndex `
    ///
    pub fn OnSibling(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QPdfBookmarkModel_OnSibling(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn HasChildren(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.QPdfBookmarkModel_HasChildren(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn QBaseHasChildren(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.QPdfBookmarkModel_QBaseHasChildren(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, parent: QtC.QModelIndex) callconv(.c) bool `
    ///
    pub fn OnHasChildren(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPdfBookmarkModel_OnHasChildren(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` value: QtC.QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn SetData(self: ?*anyopaque, index: ?*anyopaque, value: ?*anyopaque, role: i32) bool {
        return qtc.QPdfBookmarkModel_SetData(@ptrCast(self), @ptrCast(index), @ptrCast(value), @bitCast(role));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` value: QtC.QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn QBaseSetData(self: ?*anyopaque, index: ?*anyopaque, value: ?*anyopaque, role: i32) bool {
        return qtc.QPdfBookmarkModel_QBaseSetData(@ptrCast(self), @ptrCast(index), @ptrCast(value), @bitCast(role));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, index: QtC.QModelIndex, value: QtC.QVariant, role: i32) callconv(.c) bool `
    ///
    pub fn OnSetData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QPdfBookmarkModel_OnSetData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` role: i32 `
    ///
    pub fn HeaderData(self: ?*anyopaque, section: i32, orientation: i32, role: i32) QtC.QVariant {
        return qtc.QPdfBookmarkModel_HeaderData(@ptrCast(self), @bitCast(section), @bitCast(orientation), @bitCast(role));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` role: i32 `
    ///
    pub fn QBaseHeaderData(self: ?*anyopaque, section: i32, orientation: i32, role: i32) QtC.QVariant {
        return qtc.QPdfBookmarkModel_QBaseHeaderData(@ptrCast(self), @bitCast(section), @bitCast(orientation), @bitCast(role));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, section: i32, orientation: qnamespace_enums.Orientation, role: i32) callconv(.c) QtC.QVariant `
    ///
    pub fn OnHeaderData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, i32) callconv(.c) QtC.QVariant) void {
        qtc.QPdfBookmarkModel_OnHeaderData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` value: QtC.QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn SetHeaderData(self: ?*anyopaque, section: i32, orientation: i32, value: ?*anyopaque, role: i32) bool {
        return qtc.QPdfBookmarkModel_SetHeaderData(@ptrCast(self), @bitCast(section), @bitCast(orientation), @ptrCast(value), @bitCast(role));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` value: QtC.QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn QBaseSetHeaderData(self: ?*anyopaque, section: i32, orientation: i32, value: ?*anyopaque, role: i32) bool {
        return qtc.QPdfBookmarkModel_QBaseSetHeaderData(@ptrCast(self), @bitCast(section), @bitCast(orientation), @ptrCast(value), @bitCast(role));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, section: i32, orientation: qnamespace_enums.Orientation, value: QtC.QVariant, role: i32) callconv(.c) bool `
    ///
    pub fn OnSetHeaderData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QPdfBookmarkModel_OnSetHeaderData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ItemData(self: ?*anyopaque, index: ?*anyopaque, allocator: std.mem.Allocator) map_i32_qtcqvariant {
        const _map: qtc.libqt_map = qtc.QPdfBookmarkModel_ItemData(@ptrCast(self), @ptrCast(index));
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
            _ret.put(allocator, _key, @ptrCast(_value)) catch @panic("qpdfbookmarkmodel.ItemData: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn QBaseItemData(self: ?*anyopaque, index: ?*anyopaque, allocator: std.mem.Allocator) map_i32_qtcqvariant {
        const _map: qtc.libqt_map = qtc.QPdfBookmarkModel_QBaseItemData(@ptrCast(self), @ptrCast(index));
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
            _ret.put(allocator, _key, @ptrCast(_value)) catch @panic("qpdfbookmarkmodel.ItemData: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, index: QtC.QModelIndex) callconv(.c) qtc.libqt_map `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of map_i32_qtcqvariant `
    ///
    pub fn OnItemData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) qtc.libqt_map) void {
        qtc.QPdfBookmarkModel_OnItemData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` roles: map_i32_qtcqvariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SetItemData(self: ?*anyopaque, index: ?*anyopaque, roles: map_i32_qtcqvariant, allocator: std.mem.Allocator) bool {
        const roles_count = roles.count();
        const roles_keys = allocator.alloc(i32, roles_count) catch @panic("qpdfbookmarkmodel.SetItemData: Memory allocation failed");
        defer allocator.free(roles_keys);
        const roles_values = allocator.alloc(QtC.QVariant, roles_count) catch @panic("qpdfbookmarkmodel.SetItemData: Memory allocation failed");
        defer allocator.free(roles_values);
        var i: usize = 0;
        var roles_it = roles.iterator();
        while (roles_it.next()) |it_entry| : (i += 1) {
            const roles_key = it_entry.key_ptr.*;
            roles_keys[i] = @bitCast(roles_key);
            roles_values[i] = @ptrCast(it_entry.value_ptr.*);
        }
        const roles_map = qtc.libqt_map{
            .len = roles_count,
            .keys = @ptrCast(roles_keys.ptr),
            .values = @ptrCast(roles_values.ptr),
        };
        return qtc.QPdfBookmarkModel_SetItemData(@ptrCast(self), @ptrCast(index), roles_map);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` roles: map_i32_qtcqvariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn QBaseSetItemData(self: ?*anyopaque, index: ?*anyopaque, roles: map_i32_qtcqvariant, allocator: std.mem.Allocator) bool {
        const roles_count = roles.count();
        const roles_keys = allocator.alloc(i32, roles_count) catch @panic("qpdfbookmarkmodel.SetItemData: Memory allocation failed");
        defer allocator.free(roles_keys);
        const roles_values = allocator.alloc(QtC.QVariant, roles_count) catch @panic("qpdfbookmarkmodel.SetItemData: Memory allocation failed");
        defer allocator.free(roles_values);
        var i: usize = 0;
        var roles_it = roles.iterator();
        while (roles_it.next()) |it_entry| : (i += 1) {
            const roles_key = it_entry.key_ptr.*;
            roles_keys[i] = @bitCast(roles_key);
            roles_values[i] = @ptrCast(it_entry.value_ptr.*);
        }
        const roles_map = qtc.libqt_map{
            .len = roles_count,
            .keys = @ptrCast(roles_keys.ptr),
            .values = @ptrCast(roles_values.ptr),
        };
        return qtc.QPdfBookmarkModel_QBaseSetItemData(@ptrCast(self), @ptrCast(index), roles_map);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, index: QtC.QModelIndex, roles: qtc.libqt_map (map_i32_qtcqvariant)) callconv(.c) bool `
    ///
    pub fn OnSetItemData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, qtc.libqt_map) callconv(.c) bool) void {
        qtc.QPdfBookmarkModel_OnSetItemData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn ClearItemData(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QPdfBookmarkModel_ClearItemData(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn QBaseClearItemData(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QPdfBookmarkModel_QBaseClearItemData(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, index: QtC.QModelIndex) callconv(.c) bool `
    ///
    pub fn OnClearItemData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPdfBookmarkModel_OnClearItemData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MimeTypes(self: ?*anyopaque, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QPdfBookmarkModel_MimeTypes(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qpdfbookmarkmodel.MimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qpdfbookmarkmodel.MimeTypes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn QBaseMimeTypes(self: ?*anyopaque, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QPdfBookmarkModel_QBaseMimeTypes(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qpdfbookmarkmodel.MimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qpdfbookmarkmodel.MimeTypes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8 `
    ///
    pub fn OnMimeTypes(self: ?*anyopaque, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.QPdfBookmarkModel_OnMimeTypes(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` indexes: []QtC.QModelIndex `
    ///
    pub fn MimeData(self: ?*anyopaque, indexes: []QtC.QModelIndex) QtC.QMimeData {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        return qtc.QPdfBookmarkModel_MimeData(@ptrCast(self), indexes_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` indexes: []QtC.QModelIndex `
    ///
    pub fn QBaseMimeData(self: ?*anyopaque, indexes: []QtC.QModelIndex) QtC.QMimeData {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        return qtc.QPdfBookmarkModel_QBaseMimeData(@ptrCast(self), indexes_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, indexes: qtc.libqt_list ([]QtC.QModelIndex)) callconv(.c) QtC.QMimeData `
    ///
    pub fn OnMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, qtc.libqt_list) callconv(.c) QtC.QMimeData) void {
        qtc.QPdfBookmarkModel_OnMimeData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` data: QtC.QMimeData `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn CanDropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.QPdfBookmarkModel_CanDropMimeData(@ptrCast(self), @ptrCast(data), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` data: QtC.QMimeData `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn QBaseCanDropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.QPdfBookmarkModel_QBaseCanDropMimeData(@ptrCast(self), @ptrCast(data), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, data: QtC.QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QtC.QModelIndex) callconv(.c) bool `
    ///
    pub fn OnCanDropMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPdfBookmarkModel_OnCanDropMimeData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dropMimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` data: QtC.QMimeData `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn DropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.QPdfBookmarkModel_DropMimeData(@ptrCast(self), @ptrCast(data), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dropMimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` data: QtC.QMimeData `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn QBaseDropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.QPdfBookmarkModel_QBaseDropMimeData(@ptrCast(self), @ptrCast(data), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dropMimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, data: QtC.QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QtC.QModelIndex) callconv(.c) bool `
    ///
    pub fn OnDropMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPdfBookmarkModel_OnDropMimeData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn SupportedDropActions(self: ?*anyopaque) i32 {
        return qtc.QPdfBookmarkModel_SupportedDropActions(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn QBaseSupportedDropActions(self: ?*anyopaque) i32 {
        return qtc.QPdfBookmarkModel_QBaseSupportedDropActions(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSupportedDropActions(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QPdfBookmarkModel_OnSupportedDropActions(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn SupportedDragActions(self: ?*anyopaque) i32 {
        return qtc.QPdfBookmarkModel_SupportedDragActions(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn QBaseSupportedDragActions(self: ?*anyopaque) i32 {
        return qtc.QPdfBookmarkModel_QBaseSupportedDragActions(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSupportedDragActions(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QPdfBookmarkModel_OnSupportedDragActions(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn InsertRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QPdfBookmarkModel_InsertRows(@ptrCast(self), @bitCast(row), @bitCast(count), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn QBaseInsertRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QPdfBookmarkModel_QBaseInsertRows(@ptrCast(self), @bitCast(row), @bitCast(count), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, row: i32, count: i32, parent: QtC.QModelIndex) callconv(.c) bool `
    ///
    pub fn OnInsertRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPdfBookmarkModel_OnInsertRows(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn InsertColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QPdfBookmarkModel_InsertColumns(@ptrCast(self), @bitCast(column), @bitCast(count), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn QBaseInsertColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QPdfBookmarkModel_QBaseInsertColumns(@ptrCast(self), @bitCast(column), @bitCast(count), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, column: i32, count: i32, parent: QtC.QModelIndex) callconv(.c) bool `
    ///
    pub fn OnInsertColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPdfBookmarkModel_OnInsertColumns(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn RemoveRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QPdfBookmarkModel_RemoveRows(@ptrCast(self), @bitCast(row), @bitCast(count), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn QBaseRemoveRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QPdfBookmarkModel_QBaseRemoveRows(@ptrCast(self), @bitCast(row), @bitCast(count), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, row: i32, count: i32, parent: QtC.QModelIndex) callconv(.c) bool `
    ///
    pub fn OnRemoveRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPdfBookmarkModel_OnRemoveRows(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn RemoveColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QPdfBookmarkModel_RemoveColumns(@ptrCast(self), @bitCast(column), @bitCast(count), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn QBaseRemoveColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.QPdfBookmarkModel_QBaseRemoveColumns(@ptrCast(self), @bitCast(column), @bitCast(count), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, column: i32, count: i32, parent: QtC.QModelIndex) callconv(.c) bool `
    ///
    pub fn OnRemoveColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPdfBookmarkModel_OnRemoveColumns(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` sourceParent: QtC.QModelIndex `
    ///
    /// ` sourceRow: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` destinationParent: QtC.QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn MoveRows(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceRow: i32, count: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.QPdfBookmarkModel_MoveRows(@ptrCast(self), @ptrCast(sourceParent), @bitCast(sourceRow), @bitCast(count), @ptrCast(destinationParent), @bitCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` sourceParent: QtC.QModelIndex `
    ///
    /// ` sourceRow: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` destinationParent: QtC.QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn QBaseMoveRows(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceRow: i32, count: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.QPdfBookmarkModel_QBaseMoveRows(@ptrCast(self), @ptrCast(sourceParent), @bitCast(sourceRow), @bitCast(count), @ptrCast(destinationParent), @bitCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, sourceParent: QtC.QModelIndex, sourceRow: i32, count: i32, destinationParent: QtC.QModelIndex, destinationChild: i32) callconv(.c) bool `
    ///
    pub fn OnMoveRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QPdfBookmarkModel_OnMoveRows(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` sourceParent: QtC.QModelIndex `
    ///
    /// ` sourceColumn: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` destinationParent: QtC.QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn MoveColumns(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceColumn: i32, count: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.QPdfBookmarkModel_MoveColumns(@ptrCast(self), @ptrCast(sourceParent), @bitCast(sourceColumn), @bitCast(count), @ptrCast(destinationParent), @bitCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` sourceParent: QtC.QModelIndex `
    ///
    /// ` sourceColumn: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` destinationParent: QtC.QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn QBaseMoveColumns(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceColumn: i32, count: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.QPdfBookmarkModel_QBaseMoveColumns(@ptrCast(self), @ptrCast(sourceParent), @bitCast(sourceColumn), @bitCast(count), @ptrCast(destinationParent), @bitCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, sourceParent: QtC.QModelIndex, sourceColumn: i32, count: i32, destinationParent: QtC.QModelIndex, destinationChild: i32) callconv(.c) bool `
    ///
    pub fn OnMoveColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QPdfBookmarkModel_OnMoveColumns(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn FetchMore(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QPdfBookmarkModel_FetchMore(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn QBaseFetchMore(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QPdfBookmarkModel_QBaseFetchMore(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, parent: QtC.QModelIndex) callconv(.c) void `
    ///
    pub fn OnFetchMore(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPdfBookmarkModel_OnFetchMore(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn CanFetchMore(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.QPdfBookmarkModel_CanFetchMore(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn QBaseCanFetchMore(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.QPdfBookmarkModel_QBaseCanFetchMore(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, parent: QtC.QModelIndex) callconv(.c) bool `
    ///
    pub fn OnCanFetchMore(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPdfBookmarkModel_OnCanFetchMore(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#flags)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.ItemFlag `
    ///
    pub fn Flags(self: ?*anyopaque, index: ?*anyopaque) i32 {
        return qtc.QPdfBookmarkModel_Flags(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#flags)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.ItemFlag `
    ///
    pub fn QBaseFlags(self: ?*anyopaque, index: ?*anyopaque) i32 {
        return qtc.QPdfBookmarkModel_QBaseFlags(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#flags)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, index: QtC.QModelIndex) callconv(.c) i32 `
    ///
    pub fn OnFlags(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QPdfBookmarkModel_OnFlags(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` column: i32 `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    pub fn Sort(self: ?*anyopaque, column: i32, order: i32) void {
        qtc.QPdfBookmarkModel_Sort(@ptrCast(self), @bitCast(column), @bitCast(order));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` column: i32 `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    pub fn QBaseSort(self: ?*anyopaque, column: i32, order: i32) void {
        qtc.QPdfBookmarkModel_QBaseSort(@ptrCast(self), @bitCast(column), @bitCast(order));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, column: i32, order: qnamespace_enums.SortOrder) callconv(.c) void `
    ///
    pub fn OnSort(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QPdfBookmarkModel_OnSort(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn Buddy(self: ?*anyopaque, index: ?*anyopaque) QtC.QModelIndex {
        return qtc.QPdfBookmarkModel_Buddy(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn QBaseBuddy(self: ?*anyopaque, index: ?*anyopaque) QtC.QModelIndex {
        return qtc.QPdfBookmarkModel_QBaseBuddy(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, index: QtC.QModelIndex) callconv(.c) QtC.QModelIndex `
    ///
    pub fn OnBuddy(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.QPdfBookmarkModel_OnBuddy(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` start: QtC.QModelIndex `
    ///
    /// ` role: i32 `
    ///
    /// ` value: QtC.QVariant `
    ///
    /// ` hits: i32 `
    ///
    /// ` flags: flag of qnamespace_enums.MatchFlag `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Match(self: ?*anyopaque, start: ?*anyopaque, role: i32, value: ?*anyopaque, hits: i32, flags: i32, allocator: std.mem.Allocator) []QtC.QModelIndex {
        const _arr: qtc.libqt_list = qtc.QPdfBookmarkModel_Match(@ptrCast(self), @ptrCast(start), @bitCast(role), @ptrCast(value), @bitCast(hits), @bitCast(flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QModelIndex, _arr.len) catch @panic("qpdfbookmarkmodel.Match: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` start: QtC.QModelIndex `
    ///
    /// ` role: i32 `
    ///
    /// ` value: QtC.QVariant `
    ///
    /// ` hits: i32 `
    ///
    /// ` flags: flag of qnamespace_enums.MatchFlag `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn QBaseMatch(self: ?*anyopaque, start: ?*anyopaque, role: i32, value: ?*anyopaque, hits: i32, flags: i32, allocator: std.mem.Allocator) []QtC.QModelIndex {
        const _arr: qtc.libqt_list = qtc.QPdfBookmarkModel_QBaseMatch(@ptrCast(self), @ptrCast(start), @bitCast(role), @ptrCast(value), @bitCast(hits), @bitCast(flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QModelIndex, _arr.len) catch @panic("qpdfbookmarkmodel.Match: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, start: QtC.QModelIndex, role: i32, value: QtC.QVariant, hits: i32, flags: flag of qnamespace_enums.MatchFlag) callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QtC.QModelIndex `
    ///
    pub fn OnMatch(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, ?*anyopaque, i32, i32) callconv(.c) qtc.libqt_list) void {
        qtc.QPdfBookmarkModel_OnMatch(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn Span(self: ?*anyopaque, index: ?*anyopaque) QtC.QSize {
        return qtc.QPdfBookmarkModel_Span(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn QBaseSpan(self: ?*anyopaque, index: ?*anyopaque) QtC.QSize {
        return qtc.QPdfBookmarkModel_QBaseSpan(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, index: QtC.QModelIndex) callconv(.c) QtC.QSize `
    ///
    pub fn OnSpan(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QPdfBookmarkModel_OnSpan(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` roleDataSpan: QtC.QModelRoleDataSpan `
    ///
    pub fn MultiData(self: ?*anyopaque, index: ?*anyopaque, roleDataSpan: QtC.QModelRoleDataSpan) void {
        qtc.QPdfBookmarkModel_MultiData(@ptrCast(self), @ptrCast(index), @ptrCast(roleDataSpan));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` roleDataSpan: QtC.QModelRoleDataSpan `
    ///
    pub fn QBaseMultiData(self: ?*anyopaque, index: ?*anyopaque, roleDataSpan: QtC.QModelRoleDataSpan) void {
        qtc.QPdfBookmarkModel_QBaseMultiData(@ptrCast(self), @ptrCast(index), @ptrCast(roleDataSpan));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, index: QtC.QModelIndex, roleDataSpan: QtC.QModelRoleDataSpan) callconv(.c) void `
    ///
    pub fn OnMultiData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, QtC.QModelRoleDataSpan) callconv(.c) void) void {
        qtc.QPdfBookmarkModel_OnMultiData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    pub fn Submit(self: ?*anyopaque) bool {
        return qtc.QPdfBookmarkModel_Submit(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    pub fn QBaseSubmit(self: ?*anyopaque) bool {
        return qtc.QPdfBookmarkModel_QBaseSubmit(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnSubmit(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QPdfBookmarkModel_OnSubmit(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    pub fn Revert(self: ?*anyopaque) void {
        qtc.QPdfBookmarkModel_Revert(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    pub fn QBaseRevert(self: ?*anyopaque) void {
        qtc.QPdfBookmarkModel_QBaseRevert(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnRevert(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QPdfBookmarkModel_OnRevert(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    pub fn ResetInternalData(self: ?*anyopaque) void {
        qtc.QPdfBookmarkModel_ResetInternalData(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    pub fn QBaseResetInternalData(self: ?*anyopaque) void {
        qtc.QPdfBookmarkModel_QBaseResetInternalData(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnResetInternalData(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QPdfBookmarkModel_OnResetInternalData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QPdfBookmarkModel_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QPdfBookmarkModel_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPdfBookmarkModel_OnEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QPdfBookmarkModel_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QPdfBookmarkModel_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPdfBookmarkModel_OnEventFilter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPdfBookmarkModel_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPdfBookmarkModel_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPdfBookmarkModel_OnTimerEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPdfBookmarkModel_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPdfBookmarkModel_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPdfBookmarkModel_OnChildEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPdfBookmarkModel_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QPdfBookmarkModel_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPdfBookmarkModel_OnCustomEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QPdfBookmarkModel_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QPdfBookmarkModel_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPdfBookmarkModel_OnConnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QPdfBookmarkModel_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QPdfBookmarkModel_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPdfBookmarkModel_OnDisconnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn CreateIndex(self: ?*anyopaque, row: i32, column: i32) QtC.QModelIndex {
        return qtc.QPdfBookmarkModel_CreateIndex(@ptrCast(self), @bitCast(row), @bitCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn QBaseCreateIndex(self: ?*anyopaque, row: i32, column: i32) QtC.QModelIndex {
        return qtc.QPdfBookmarkModel_QBaseCreateIndex(@ptrCast(self), @bitCast(row), @bitCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, row: i32, column: i32) callconv(.c) QtC.QModelIndex `
    ///
    pub fn OnCreateIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) QtC.QModelIndex) void {
        qtc.QPdfBookmarkModel_OnCreateIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` indexes: []QtC.QModelIndex `
    ///
    /// ` stream: QtC.QDataStream `
    ///
    pub fn EncodeData(self: ?*anyopaque, indexes: []QtC.QModelIndex, stream: ?*anyopaque) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        qtc.QPdfBookmarkModel_EncodeData(@ptrCast(self), indexes_list, @ptrCast(stream));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` indexes: []QtC.QModelIndex `
    ///
    /// ` stream: QtC.QDataStream `
    ///
    pub fn QBaseEncodeData(self: ?*anyopaque, indexes: []QtC.QModelIndex, stream: ?*anyopaque) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        qtc.QPdfBookmarkModel_QBaseEncodeData(@ptrCast(self), indexes_list, @ptrCast(stream));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, indexes: qtc.libqt_list ([]QtC.QModelIndex), stream: QtC.QDataStream) callconv(.c) void `
    ///
    pub fn OnEncodeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, qtc.libqt_list, ?*anyopaque) callconv(.c) void) void {
        qtc.QPdfBookmarkModel_OnEncodeData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    /// ` stream: QtC.QDataStream `
    ///
    pub fn DecodeData(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque, stream: ?*anyopaque) bool {
        return qtc.QPdfBookmarkModel_DecodeData(@ptrCast(self), @bitCast(row), @bitCast(column), @ptrCast(parent), @ptrCast(stream));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    /// ` stream: QtC.QDataStream `
    ///
    pub fn QBaseDecodeData(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque, stream: ?*anyopaque) bool {
        return qtc.QPdfBookmarkModel_QBaseDecodeData(@ptrCast(self), @bitCast(row), @bitCast(column), @ptrCast(parent), @ptrCast(stream));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, row: i32, column: i32, parent: QtC.QModelIndex, stream: QtC.QDataStream) callconv(.c) bool `
    ///
    pub fn OnDecodeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPdfBookmarkModel_OnDecodeData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn BeginInsertRows(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.QPdfBookmarkModel_BeginInsertRows(@ptrCast(self), @ptrCast(parent), @bitCast(first), @bitCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn QBaseBeginInsertRows(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.QPdfBookmarkModel_QBaseBeginInsertRows(@ptrCast(self), @ptrCast(parent), @bitCast(first), @bitCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnBeginInsertRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QPdfBookmarkModel_OnBeginInsertRows(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    pub fn EndInsertRows(self: ?*anyopaque) void {
        qtc.QPdfBookmarkModel_EndInsertRows(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    pub fn QBaseEndInsertRows(self: ?*anyopaque) void {
        qtc.QPdfBookmarkModel_QBaseEndInsertRows(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndInsertRows(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QPdfBookmarkModel_OnEndInsertRows(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn BeginRemoveRows(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.QPdfBookmarkModel_BeginRemoveRows(@ptrCast(self), @ptrCast(parent), @bitCast(first), @bitCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn QBaseBeginRemoveRows(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.QPdfBookmarkModel_QBaseBeginRemoveRows(@ptrCast(self), @ptrCast(parent), @bitCast(first), @bitCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnBeginRemoveRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QPdfBookmarkModel_OnBeginRemoveRows(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    pub fn EndRemoveRows(self: ?*anyopaque) void {
        qtc.QPdfBookmarkModel_EndRemoveRows(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    pub fn QBaseEndRemoveRows(self: ?*anyopaque) void {
        qtc.QPdfBookmarkModel_QBaseEndRemoveRows(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndRemoveRows(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QPdfBookmarkModel_OnEndRemoveRows(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` sourceParent: QtC.QModelIndex `
    ///
    /// ` sourceFirst: i32 `
    ///
    /// ` sourceLast: i32 `
    ///
    /// ` destinationParent: QtC.QModelIndex `
    ///
    /// ` destinationRow: i32 `
    ///
    pub fn BeginMoveRows(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceFirst: i32, sourceLast: i32, destinationParent: ?*anyopaque, destinationRow: i32) bool {
        return qtc.QPdfBookmarkModel_BeginMoveRows(@ptrCast(self), @ptrCast(sourceParent), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent), @bitCast(destinationRow));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` sourceParent: QtC.QModelIndex `
    ///
    /// ` sourceFirst: i32 `
    ///
    /// ` sourceLast: i32 `
    ///
    /// ` destinationParent: QtC.QModelIndex `
    ///
    /// ` destinationRow: i32 `
    ///
    pub fn QBaseBeginMoveRows(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceFirst: i32, sourceLast: i32, destinationParent: ?*anyopaque, destinationRow: i32) bool {
        return qtc.QPdfBookmarkModel_QBaseBeginMoveRows(@ptrCast(self), @ptrCast(sourceParent), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent), @bitCast(destinationRow));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, sourceParent: QtC.QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QtC.QModelIndex, destinationRow: i32) callconv(.c) bool `
    ///
    pub fn OnBeginMoveRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QPdfBookmarkModel_OnBeginMoveRows(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    pub fn EndMoveRows(self: ?*anyopaque) void {
        qtc.QPdfBookmarkModel_EndMoveRows(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    pub fn QBaseEndMoveRows(self: ?*anyopaque) void {
        qtc.QPdfBookmarkModel_QBaseEndMoveRows(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndMoveRows(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QPdfBookmarkModel_OnEndMoveRows(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn BeginInsertColumns(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.QPdfBookmarkModel_BeginInsertColumns(@ptrCast(self), @ptrCast(parent), @bitCast(first), @bitCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn QBaseBeginInsertColumns(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.QPdfBookmarkModel_QBaseBeginInsertColumns(@ptrCast(self), @ptrCast(parent), @bitCast(first), @bitCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnBeginInsertColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QPdfBookmarkModel_OnBeginInsertColumns(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    pub fn EndInsertColumns(self: ?*anyopaque) void {
        qtc.QPdfBookmarkModel_EndInsertColumns(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    pub fn QBaseEndInsertColumns(self: ?*anyopaque) void {
        qtc.QPdfBookmarkModel_QBaseEndInsertColumns(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndInsertColumns(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QPdfBookmarkModel_OnEndInsertColumns(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn BeginRemoveColumns(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.QPdfBookmarkModel_BeginRemoveColumns(@ptrCast(self), @ptrCast(parent), @bitCast(first), @bitCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn QBaseBeginRemoveColumns(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.QPdfBookmarkModel_QBaseBeginRemoveColumns(@ptrCast(self), @ptrCast(parent), @bitCast(first), @bitCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnBeginRemoveColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QPdfBookmarkModel_OnBeginRemoveColumns(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    pub fn EndRemoveColumns(self: ?*anyopaque) void {
        qtc.QPdfBookmarkModel_EndRemoveColumns(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    pub fn QBaseEndRemoveColumns(self: ?*anyopaque) void {
        qtc.QPdfBookmarkModel_QBaseEndRemoveColumns(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndRemoveColumns(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QPdfBookmarkModel_OnEndRemoveColumns(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` sourceParent: QtC.QModelIndex `
    ///
    /// ` sourceFirst: i32 `
    ///
    /// ` sourceLast: i32 `
    ///
    /// ` destinationParent: QtC.QModelIndex `
    ///
    /// ` destinationColumn: i32 `
    ///
    pub fn BeginMoveColumns(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceFirst: i32, sourceLast: i32, destinationParent: ?*anyopaque, destinationColumn: i32) bool {
        return qtc.QPdfBookmarkModel_BeginMoveColumns(@ptrCast(self), @ptrCast(sourceParent), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent), @bitCast(destinationColumn));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` sourceParent: QtC.QModelIndex `
    ///
    /// ` sourceFirst: i32 `
    ///
    /// ` sourceLast: i32 `
    ///
    /// ` destinationParent: QtC.QModelIndex `
    ///
    /// ` destinationColumn: i32 `
    ///
    pub fn QBaseBeginMoveColumns(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceFirst: i32, sourceLast: i32, destinationParent: ?*anyopaque, destinationColumn: i32) bool {
        return qtc.QPdfBookmarkModel_QBaseBeginMoveColumns(@ptrCast(self), @ptrCast(sourceParent), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent), @bitCast(destinationColumn));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, sourceParent: QtC.QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QtC.QModelIndex, destinationColumn: i32) callconv(.c) bool `
    ///
    pub fn OnBeginMoveColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QPdfBookmarkModel_OnBeginMoveColumns(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    pub fn EndMoveColumns(self: ?*anyopaque) void {
        qtc.QPdfBookmarkModel_EndMoveColumns(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    pub fn QBaseEndMoveColumns(self: ?*anyopaque) void {
        qtc.QPdfBookmarkModel_QBaseEndMoveColumns(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndMoveColumns(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QPdfBookmarkModel_OnEndMoveColumns(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    pub fn BeginResetModel(self: ?*anyopaque) void {
        qtc.QPdfBookmarkModel_BeginResetModel(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    pub fn QBaseBeginResetModel(self: ?*anyopaque) void {
        qtc.QPdfBookmarkModel_QBaseBeginResetModel(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnBeginResetModel(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QPdfBookmarkModel_OnBeginResetModel(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    pub fn EndResetModel(self: ?*anyopaque) void {
        qtc.QPdfBookmarkModel_EndResetModel(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    pub fn QBaseEndResetModel(self: ?*anyopaque) void {
        qtc.QPdfBookmarkModel_QBaseEndResetModel(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndResetModel(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QPdfBookmarkModel_OnEndResetModel(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` from: QtC.QModelIndex `
    ///
    /// ` to: QtC.QModelIndex `
    ///
    pub fn ChangePersistentIndex(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque) void {
        qtc.QPdfBookmarkModel_ChangePersistentIndex(@ptrCast(self), @ptrCast(from), @ptrCast(to));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` from: QtC.QModelIndex `
    ///
    /// ` to: QtC.QModelIndex `
    ///
    pub fn QBaseChangePersistentIndex(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque) void {
        qtc.QPdfBookmarkModel_QBaseChangePersistentIndex(@ptrCast(self), @ptrCast(from), @ptrCast(to));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, from: QtC.QModelIndex, to: QtC.QModelIndex) callconv(.c) void `
    ///
    pub fn OnChangePersistentIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPdfBookmarkModel_OnChangePersistentIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` from: []QtC.QModelIndex `
    ///
    /// ` to: []QtC.QModelIndex `
    ///
    pub fn ChangePersistentIndexList(self: ?*anyopaque, from: []QtC.QModelIndex, to: []QtC.QModelIndex) void {
        const from_list = qtc.libqt_list{
            .len = from.len,
            .data = @ptrCast(from.ptr),
        };
        const to_list = qtc.libqt_list{
            .len = to.len,
            .data = @ptrCast(to.ptr),
        };
        qtc.QPdfBookmarkModel_ChangePersistentIndexList(@ptrCast(self), from_list, to_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` from: []QtC.QModelIndex `
    ///
    /// ` to: []QtC.QModelIndex `
    ///
    pub fn QBaseChangePersistentIndexList(self: ?*anyopaque, from: []QtC.QModelIndex, to: []QtC.QModelIndex) void {
        const from_list = qtc.libqt_list{
            .len = from.len,
            .data = @ptrCast(from.ptr),
        };
        const to_list = qtc.libqt_list{
            .len = to.len,
            .data = @ptrCast(to.ptr),
        };
        qtc.QPdfBookmarkModel_QBaseChangePersistentIndexList(@ptrCast(self), from_list, to_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, from: qtc.libqt_list ([]QtC.QModelIndex), to: qtc.libqt_list ([]QtC.QModelIndex)) callconv(.c) void `
    ///
    pub fn OnChangePersistentIndexList(self: ?*anyopaque, callback: *const fn (?*anyopaque, qtc.libqt_list, qtc.libqt_list) callconv(.c) void) void {
        qtc.QPdfBookmarkModel_OnChangePersistentIndexList(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PersistentIndexList(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QModelIndex {
        const _arr: qtc.libqt_list = qtc.QPdfBookmarkModel_PersistentIndexList(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QModelIndex, _arr.len) catch @panic("qpdfbookmarkmodel.PersistentIndexList: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn QBasePersistentIndexList(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QModelIndex {
        const _arr: qtc.libqt_list = qtc.QPdfBookmarkModel_QBasePersistentIndexList(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QModelIndex, _arr.len) catch @panic("qpdfbookmarkmodel.PersistentIndexList: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QtC.QModelIndex `
    ///
    pub fn OnPersistentIndexList(self: ?*anyopaque, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.QPdfBookmarkModel_OnPersistentIndexList(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QPdfBookmarkModel_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QPdfBookmarkModel_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QPdfBookmarkModel_OnSender(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QPdfBookmarkModel_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QPdfBookmarkModel_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QPdfBookmarkModel_OnSenderSignalIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPdfBookmarkModel_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn QBaseReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPdfBookmarkModel_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QPdfBookmarkModel_OnReceivers(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QPdfBookmarkModel_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QPdfBookmarkModel_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel`
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPdfBookmarkModel_OnIsSignalConnected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnRowsAboutToBeInserted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsAboutToBeInserted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnRowsInserted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsInserted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnRowsAboutToBeRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsAboutToBeRemoved(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnRowsRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsRemoved(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnColumnsAboutToBeInserted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsAboutToBeInserted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnColumnsInserted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsInserted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnColumnsAboutToBeRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsAboutToBeRemoved(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnColumnsRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsRemoved(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel) callconv(.c) void `
    ///
    pub fn OnModelAboutToBeReset(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ModelAboutToBeReset(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel) callconv(.c) void `
    ///
    pub fn OnModelReset(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ModelReset(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, sourceParent: QtC.QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QtC.QModelIndex, destinationRow: i32) callconv(.c) void `
    ///
    pub fn OnRowsAboutToBeMoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsAboutToBeMoved(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, sourceParent: QtC.QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QtC.QModelIndex, destinationRow: i32) callconv(.c) void `
    ///
    pub fn OnRowsMoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsMoved(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, sourceParent: QtC.QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QtC.QModelIndex, destinationColumn: i32) callconv(.c) void `
    ///
    pub fn OnColumnsAboutToBeMoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsAboutToBeMoved(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, sourceParent: QtC.QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QtC.QModelIndex, destinationColumn: i32) callconv(.c) void `
    ///
    pub fn OnColumnsMoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsMoved(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    /// ` callback: *const fn (self: QtC.QPdfBookmarkModel, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#dtor.QPdfBookmarkModel)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QPdfBookmarkModel `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPdfBookmarkModel_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpdfbookmarkmodel.html#public-types)
pub const enums = struct {
    pub const Role = enum(i32) {
        pub const Title: i32 = 256;
        pub const Level: i32 = 257;
        pub const Page: i32 = 258;
        pub const Location: i32 = 259;
        pub const Zoom: i32 = 260;
        pub const NRoles: i32 = 261;
    };
};
