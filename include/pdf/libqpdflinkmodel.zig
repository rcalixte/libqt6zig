const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QDataStream = @import("libqt6").QDataStream;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QMimeData = @import("libqt6").QMimeData;
const QModelIndex = @import("libqt6").QModelIndex;
const QModelRoleDataSpan = @import("libqt6").QModelRoleDataSpan;
const QObject = @import("libqt6").QObject;
const QPdfDocument = @import("libqt6").QPdfDocument;
const QPdfLink = @import("libqt6").QPdfLink;
const QPersistentModelIndex = @import("libqt6").QPersistentModelIndex;
const QPointF = @import("libqt6").QPointF;
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

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflinkmodel.html)
pub const QPdfLinkModel = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflinkmodel.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPdfLinkModel,

    pub const _is_QPdfLinkModel = {};
    pub const _is_QAbstractListModel = {};
    pub const _is_QAbstractItemModel = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPdfLinkModel object in C++ memory
    ///
    pub fn new() QPdfLinkModel {
        return .{ .ptr = qtc.QPdfLinkModel_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPdfLinkModel object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QPdfLinkModel {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QPdfLinkModel_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    pub fn metaObject(self: QPdfLinkModel) QMetaObject {
        return .{ .ptr = qtc.QPdfLinkModel_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QPdfLinkModel, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QPdfLinkModel_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfLinkModel `
    ///
    pub fn superMetaObject(self: QPdfLinkModel) QMetaObject {
        return .{ .ptr = qtc.QPdfLinkModel_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QPdfLinkModel, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPdfLinkModel_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QPdfLinkModel_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QPdfLinkModel, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPdfLinkModel_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QPdfLinkModel, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPdfLinkModel_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QPdfLinkModel_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QPdfLinkModel, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPdfLinkModel_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPdfLinkModel.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `document` instead
    ///
    pub const Document = document;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflinkmodel.html#document)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    pub fn document(self: QPdfLinkModel) QPdfDocument {
        return .{ .ptr = qtc.QPdfLinkModel_Document(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `roleNames` instead
    ///
    pub const RoleNames = roleNames;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflinkmodel.html#roleNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn roleNames(self: QPdfLinkModel, allocator: std.mem.Allocator) Map_i32_u8 {
        const _map: qtc.libqt_map = qtc.QPdfLinkModel_RoleNames(@ptrCast(self.ptr));
        var _ret: Map_i32_u8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("QPdfLinkModel.roleNames: Total capacity allocation failed");
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
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("QPdfLinkModel.roleNames: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.putAssumeCapacity(_key, _value_slice);
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `onRoleNames` instead
    ///
    pub const OnRoleNames = onRoleNames;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflinkmodel.html#roleNames)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_map `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of Map_i32_u8 `
    ///
    pub fn onRoleNames(self: QPdfLinkModel, callback: *const fn () callconv(.c) qtc.libqt_map) void {
        qtc.QPdfLinkModel_OnRoleNames(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRoleNames` instead
    ///
    pub const SuperRoleNames = superRoleNames;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflinkmodel.html#roleNames)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superRoleNames(self: QPdfLinkModel, allocator: std.mem.Allocator) Map_i32_u8 {
        const _map: qtc.libqt_map = qtc.QPdfLinkModel_SuperRoleNames(@ptrCast(self.ptr));
        var _ret: Map_i32_u8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("QPdfLinkModel.roleNames: Total capacity allocation failed");
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
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("QPdfLinkModel.roleNames: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.putAssumeCapacity(_key, _value_slice);
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `rowCount` instead
    ///
    pub const RowCount = rowCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflinkmodel.html#rowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn rowCount(self: QPdfLinkModel, _parent: anytype) i32 {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QPdfLinkModel_RowCount(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onRowCount` instead
    ///
    pub const OnRowCount = onRowCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflinkmodel.html#rowCount)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, parent: QModelIndex) callconv(.c) i32 `
    ///
    pub fn onRowCount(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, QModelIndex) callconv(.c) i32) void {
        qtc.QPdfLinkModel_OnRowCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRowCount` instead
    ///
    pub const SuperRowCount = superRowCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflinkmodel.html#rowCount)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superRowCount(self: QPdfLinkModel, _parent: anytype) i32 {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QPdfLinkModel_SuperRowCount(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `data` instead
    ///
    pub const Data = data;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflinkmodel.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` role: i32 `
    ///
    pub fn data(self: QPdfLinkModel, _index: anytype, role: i32) QVariant {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return .{ .ptr = qtc.QPdfLinkModel_Data(@ptrCast(self.ptr), @ptrCast(_index.ptr), @bitCast(role)) };
    }

    /// ### DEPRECATED: Use `onData` instead
    ///
    pub const OnData = onData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflinkmodel.html#data)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, index: QModelIndex, role: i32) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onData(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, QModelIndex, i32) callconv(.c) QVariant) void {
        qtc.QPdfLinkModel_OnData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superData` instead
    ///
    pub const SuperData = superData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflinkmodel.html#data)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` role: i32 `
    ///
    pub fn superData(self: QPdfLinkModel, _index: anytype, role: i32) QVariant {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return .{ .ptr = qtc.QPdfLinkModel_SuperData(@ptrCast(self.ptr), @ptrCast(_index.ptr), @bitCast(role)) };
    }

    /// ### DEPRECATED: Use `page` instead
    ///
    pub const Page = page;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflinkmodel.html#page)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    pub fn page(self: QPdfLinkModel) i32 {
        return qtc.QPdfLinkModel_Page(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `linkAt` instead
    ///
    pub const LinkAt = linkAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflinkmodel.html#linkAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` point: QPointF `
    ///
    pub fn linkAt(self: QPdfLinkModel, point: anytype) QPdfLink {
        comptime _ = @TypeOf(point)._is_QPointF;
        return .{ .ptr = qtc.QPdfLinkModel_LinkAt(@ptrCast(self.ptr), @ptrCast(point.ptr)) };
    }

    /// ### DEPRECATED: Use `setDocument` instead
    ///
    pub const SetDocument = setDocument;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflinkmodel.html#setDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` _document: QPdfDocument `
    ///
    pub fn setDocument(self: QPdfLinkModel, _document: anytype) void {
        comptime _ = @TypeOf(_document)._is_QPdfDocument;
        qtc.QPdfLinkModel_SetDocument(@ptrCast(self.ptr), @ptrCast(_document.ptr));
    }

    /// ### DEPRECATED: Use `setPage` instead
    ///
    pub const SetPage = setPage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflinkmodel.html#setPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` _page: i32 `
    ///
    pub fn setPage(self: QPdfLinkModel, _page: i32) void {
        qtc.QPdfLinkModel_SetPage(@ptrCast(self.ptr), @bitCast(_page));
    }

    /// ### DEPRECATED: Use `documentChanged` instead
    ///
    pub const DocumentChanged = documentChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflinkmodel.html#documentChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    pub fn documentChanged(self: QPdfLinkModel) void {
        qtc.QPdfLinkModel_DocumentChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDocumentChanged` instead
    ///
    pub const OnDocumentChanged = onDocumentChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflinkmodel.html#documentChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` callback: *const fn (self: QPdfLinkModel) callconv(.c) void `
    ///
    pub fn onDocumentChanged(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel) callconv(.c) void) void {
        qtc.QPdfLinkModel_Connect_DocumentChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `pageChanged` instead
    ///
    pub const PageChanged = pageChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflinkmodel.html#pageChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` _page: i32 `
    ///
    pub fn pageChanged(self: QPdfLinkModel, _page: i32) void {
        qtc.QPdfLinkModel_PageChanged(@ptrCast(self.ptr), @bitCast(_page));
    }

    /// ### DEPRECATED: Use `onPageChanged` instead
    ///
    pub const OnPageChanged = onPageChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflinkmodel.html#pageChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, page: i32) callconv(.c) void `
    ///
    pub fn onPageChanged(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, i32) callconv(.c) void) void {
        qtc.QPdfLinkModel_Connect_PageChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPdfLinkModel.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPdfLinkModel.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn hasIndex(self: QPdfLinkModel, row: i32, column: i32) bool {
        return qtc.QAbstractItemModel_HasIndex(@ptrCast(self.ptr), @bitCast(row), @bitCast(column));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` child: QModelIndex `
    ///
    pub fn parent(self: QPdfLinkModel, child: anytype) QModelIndex {
        comptime _ = @TypeOf(child)._is_QModelIndex;
        return .{ .ptr = qtc.QAbstractItemModel_Parent(@ptrCast(self.ptr), @ptrCast(child.ptr)) };
    }

    /// ### DEPRECATED: Use `onParent` instead
    ///
    pub const OnParent = onParent;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, child: QModelIndex) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onParent(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.QAbstractItemModel_OnParent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superParent` instead
    ///
    pub const SuperParent = superParent;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` child: QModelIndex `
    ///
    pub fn superParent(self: QPdfLinkModel, child: anytype) QModelIndex {
        comptime _ = @TypeOf(child)._is_QModelIndex;
        return .{ .ptr = qtc.QAbstractItemModel_SuperParent(@ptrCast(self.ptr), @ptrCast(child.ptr)) };
    }

    /// ### DEPRECATED: Use `columnCount` instead
    ///
    pub const ColumnCount = columnCount;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn columnCount(self: QPdfLinkModel, _parent: anytype) i32 {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QAbstractItemModel_ColumnCount(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onColumnCount` instead
    ///
    pub const OnColumnCount = onColumnCount;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, parent: QModelIndex) callconv(.c) i32 `
    ///
    pub fn onColumnCount(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, QModelIndex) callconv(.c) i32) void {
        qtc.QAbstractItemModel_OnColumnCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superColumnCount` instead
    ///
    pub const SuperColumnCount = superColumnCount;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superColumnCount(self: QPdfLinkModel, _parent: anytype) i32 {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QAbstractItemModel_SuperColumnCount(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `hasChildren` instead
    ///
    pub const HasChildren = hasChildren;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn hasChildren(self: QPdfLinkModel, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QAbstractItemModel_HasChildren(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onHasChildren` instead
    ///
    pub const OnHasChildren = onHasChildren;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onHasChildren(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, QModelIndex) callconv(.c) bool) void {
        qtc.QAbstractItemModel_OnHasChildren(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHasChildren` instead
    ///
    pub const SuperHasChildren = superHasChildren;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superHasChildren(self: QPdfLinkModel, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QAbstractItemModel_SuperHasChildren(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` row: i32 `
    ///
    pub fn insertRow(self: QPdfLinkModel, row: i32) bool {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` column: i32 `
    ///
    pub fn insertColumn(self: QPdfLinkModel, column: i32) bool {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` row: i32 `
    ///
    pub fn removeRow(self: QPdfLinkModel, row: i32) bool {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` column: i32 `
    ///
    pub fn removeColumn(self: QPdfLinkModel, column: i32) bool {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceRow: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn moveRow(self: QPdfLinkModel, sourceParent: anytype, sourceRow: i32, destinationParent: anytype, destinationChild: i32) bool {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceColumn: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn moveColumn(self: QPdfLinkModel, sourceParent: anytype, sourceColumn: i32, destinationParent: anytype, destinationChild: i32) bool {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn checkIndex(self: QPdfLinkModel, _index: anytype) bool {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` topLeft: QModelIndex `
    ///
    /// ` bottomRight: QModelIndex `
    ///
    pub fn dataChanged(self: QPdfLinkModel, topLeft: anytype, bottomRight: anytype) void {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, topLeft: QModelIndex, bottomRight: QModelIndex) callconv(.c) void `
    ///
    pub fn onDataChanged(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, QModelIndex, QModelIndex) callconv(.c) void) void {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn headerDataChanged(self: QPdfLinkModel, orientation: i32, first: i32, last: i32) void {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, orientation: qnamespace_enums.Orientation, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onHeaderDataChanged(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, i32, i32, i32) callconv(.c) void) void {
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
    /// ` self: QPdfLinkModel `
    ///
    pub fn layoutChanged(self: QPdfLinkModel) void {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` callback: *const fn (self: QPdfLinkModel) callconv(.c) void `
    ///
    pub fn onLayoutChanged(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel) callconv(.c) void) void {
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
    /// ` self: QPdfLinkModel `
    ///
    pub fn layoutAboutToBeChanged(self: QPdfLinkModel) void {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` callback: *const fn (self: QPdfLinkModel) callconv(.c) void `
    ///
    pub fn onLayoutAboutToBeChanged(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel) callconv(.c) void) void {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn hasIndex3(self: QPdfLinkModel, row: i32, column: i32, _parent: anytype) bool {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` row: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn insertRow2(self: QPdfLinkModel, row: i32, _parent: anytype) bool {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn insertColumn2(self: QPdfLinkModel, column: i32, _parent: anytype) bool {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` row: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn removeRow2(self: QPdfLinkModel, row: i32, _parent: anytype) bool {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn removeColumn2(self: QPdfLinkModel, column: i32, _parent: anytype) bool {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` options: flag of qabstractitemmodel_enums.CheckIndexOption `
    ///
    pub fn checkIndex2(self: QPdfLinkModel, _index: anytype, options: i32) bool {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` topLeft: QModelIndex `
    ///
    /// ` bottomRight: QModelIndex `
    ///
    /// ` roles: []i32 `
    ///
    pub fn dataChanged3(self: QPdfLinkModel, topLeft: anytype, bottomRight: anytype, roles: []i32) void {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, topLeft: QModelIndex, bottomRight: QModelIndex, roles: qtc.libqt_list ([]i32)) callconv(.c) void `
    ///
    pub fn onDataChanged3(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, QModelIndex, QModelIndex, qtc.libqt_list) callconv(.c) void) void {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` parents: []QPersistentModelIndex `
    ///
    pub fn layoutChanged1(self: QPdfLinkModel, parents: []QPersistentModelIndex) void {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, parents: qtc.libqt_list ([]QPersistentModelIndex)) callconv(.c) void `
    ///
    pub fn onLayoutChanged1(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, qtc.libqt_list) callconv(.c) void) void {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` parents: []QPersistentModelIndex `
    ///
    /// ` hint: qabstractitemmodel_enums.LayoutChangeHint `
    ///
    pub fn layoutChanged2(self: QPdfLinkModel, parents: []QPersistentModelIndex, hint: i32) void {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, parents: qtc.libqt_list ([]QPersistentModelIndex), hint: qabstractitemmodel_enums.LayoutChangeHint) callconv(.c) void `
    ///
    pub fn onLayoutChanged2(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, qtc.libqt_list, i32) callconv(.c) void) void {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` parents: []QPersistentModelIndex `
    ///
    pub fn layoutAboutToBeChanged1(self: QPdfLinkModel, parents: []QPersistentModelIndex) void {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, parents: qtc.libqt_list ([]QPersistentModelIndex)) callconv(.c) void `
    ///
    pub fn onLayoutAboutToBeChanged1(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, qtc.libqt_list) callconv(.c) void) void {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` parents: []QPersistentModelIndex `
    ///
    /// ` hint: qabstractitemmodel_enums.LayoutChangeHint `
    ///
    pub fn layoutAboutToBeChanged2(self: QPdfLinkModel, parents: []QPersistentModelIndex, hint: i32) void {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, parents: qtc.libqt_list ([]QPersistentModelIndex), hint: qabstractitemmodel_enums.LayoutChangeHint) callconv(.c) void `
    ///
    pub fn onLayoutAboutToBeChanged2(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, qtc.libqt_list, i32) callconv(.c) void) void {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QPdfLinkModel, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPdfLinkModel.objectName: Memory allocation failed");
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QPdfLinkModel, name: []const u8) void {
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
    /// ` self: QPdfLinkModel `
    ///
    pub fn isWidgetType(self: QPdfLinkModel) bool {
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
    /// ` self: QPdfLinkModel `
    ///
    pub fn isWindowType(self: QPdfLinkModel) bool {
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
    /// ` self: QPdfLinkModel `
    ///
    pub fn isQuickItemType(self: QPdfLinkModel) bool {
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
    /// ` self: QPdfLinkModel `
    ///
    pub fn signalsBlocked(self: QPdfLinkModel) bool {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QPdfLinkModel, b: bool) bool {
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
    /// ` self: QPdfLinkModel `
    ///
    pub fn thread(self: QPdfLinkModel) QThread {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QPdfLinkModel, _thread: anytype) bool {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QPdfLinkModel, interval: i32) i32 {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QPdfLinkModel, time: i64) i32 {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QPdfLinkModel, id: i32) void {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QPdfLinkModel, id: i32) void {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QPdfLinkModel, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QPdfLinkModel.children: Memory allocation failed");
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QPdfLinkModel, _parent: anytype) void {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QPdfLinkModel, filterObj: anytype) void {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QPdfLinkModel, obj: anytype) void {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QPdfLinkModel, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QPdfLinkModel `
    ///
    pub fn disconnect3(self: QPdfLinkModel) bool {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QPdfLinkModel, receiver: anytype) bool {
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
    /// ` self: QPdfLinkModel `
    ///
    pub fn dumpObjectTree(self: QPdfLinkModel) void {
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
    /// ` self: QPdfLinkModel `
    ///
    pub fn dumpObjectInfo(self: QPdfLinkModel) void {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QPdfLinkModel, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QPdfLinkModel, name: [:0]const u8) QVariant {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QPdfLinkModel, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QPdfLinkModel.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QPdfLinkModel.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QPdfLinkModel `
    ///
    pub fn bindingStorage(self: QPdfLinkModel) QBindingStorage {
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
    /// ` self: QPdfLinkModel `
    ///
    pub fn bindingStorage2(self: QPdfLinkModel) QBindingStorage {
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
    /// ` self: QPdfLinkModel `
    ///
    pub fn destroyed(self: QPdfLinkModel) void {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` callback: *const fn (self: QPdfLinkModel) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel) callconv(.c) void) void {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QPdfLinkModel, classname: [:0]const u8) bool {
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
    /// ` self: QPdfLinkModel `
    ///
    pub fn deleteLater(self: QPdfLinkModel) void {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QPdfLinkModel, interval: i32, timerType: i32) i32 {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QPdfLinkModel, time: i64, timerType: i32) i32 {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QPdfLinkModel, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QPdfLinkModel, signal: [:0]const u8) bool {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QPdfLinkModel, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QPdfLinkModel, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QPdfLinkModel, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QPdfLinkModel, param1: anytype) void {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `index` instead
    ///
    pub const Index = index;

    /// Inherited from QAbstractListModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#index)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn index(self: QPdfLinkModel, row: i32, column: i32, _parent: anytype) QModelIndex {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return .{ .ptr = qtc.QPdfLinkModel_Index(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `superIndex` instead
    ///
    pub const SuperIndex = superIndex;

    /// Inherited from QAbstractListModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#index)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superIndex(self: QPdfLinkModel, row: i32, column: i32, _parent: anytype) QModelIndex {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return .{ .ptr = qtc.QPdfLinkModel_SuperIndex(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `onIndex` instead
    ///
    pub const OnIndex = onIndex;

    /// Inherited from QAbstractListModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#index)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, row: i32, column: i32, parent: QModelIndex) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onIndex(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, i32, i32, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.QPdfLinkModel_OnIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sibling` instead
    ///
    pub const Sibling = sibling;

    /// Inherited from QAbstractListModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#sibling)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` idx: QModelIndex `
    ///
    pub fn sibling(self: QPdfLinkModel, row: i32, column: i32, idx: anytype) QModelIndex {
        comptime _ = @TypeOf(idx)._is_QModelIndex;
        return .{ .ptr = qtc.QPdfLinkModel_Sibling(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(idx.ptr)) };
    }

    /// ### DEPRECATED: Use `superSibling` instead
    ///
    pub const SuperSibling = superSibling;

    /// Inherited from QAbstractListModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#sibling)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` idx: QModelIndex `
    ///
    pub fn superSibling(self: QPdfLinkModel, row: i32, column: i32, idx: anytype) QModelIndex {
        comptime _ = @TypeOf(idx)._is_QModelIndex;
        return .{ .ptr = qtc.QPdfLinkModel_SuperSibling(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(idx.ptr)) };
    }

    /// ### DEPRECATED: Use `onSibling` instead
    ///
    pub const OnSibling = onSibling;

    /// Inherited from QAbstractListModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#sibling)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, row: i32, column: i32, idx: QModelIndex) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSibling(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, i32, i32, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.QPdfLinkModel_OnSibling(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dropMimeData` instead
    ///
    pub const DropMimeData = dropMimeData;

    /// Inherited from QAbstractListModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#dropMimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
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
    pub fn dropMimeData(self: QPdfLinkModel, _data: anytype, action: i32, row: i32, column: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_data)._is_QMimeData;
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QPdfLinkModel_DropMimeData(@ptrCast(self.ptr), @ptrCast(_data.ptr), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `superDropMimeData` instead
    ///
    pub const SuperDropMimeData = superDropMimeData;

    /// Inherited from QAbstractListModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#dropMimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
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
    pub fn superDropMimeData(self: QPdfLinkModel, _data: anytype, action: i32, row: i32, column: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_data)._is_QMimeData;
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QPdfLinkModel_SuperDropMimeData(@ptrCast(self.ptr), @ptrCast(_data.ptr), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onDropMimeData` instead
    ///
    pub const OnDropMimeData = onDropMimeData;

    /// Inherited from QAbstractListModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#dropMimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, data: QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onDropMimeData(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, QMimeData, i32, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.QPdfLinkModel_OnDropMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

    /// Inherited from QAbstractListModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#flags)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.ItemFlag `
    ///
    pub fn flags(self: QPdfLinkModel, _index: anytype) i32 {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return qtc.QPdfLinkModel_Flags(@ptrCast(self.ptr), @ptrCast(_index.ptr));
    }

    /// ### DEPRECATED: Use `superFlags` instead
    ///
    pub const SuperFlags = superFlags;

    /// Inherited from QAbstractListModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#flags)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.ItemFlag `
    ///
    pub fn superFlags(self: QPdfLinkModel, _index: anytype) i32 {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return qtc.QPdfLinkModel_SuperFlags(@ptrCast(self.ptr), @ptrCast(_index.ptr));
    }

    /// ### DEPRECATED: Use `onFlags` instead
    ///
    pub const OnFlags = onFlags;

    /// Inherited from QAbstractListModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractlistmodel.html#flags)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, index: QModelIndex) callconv(.c) i32 `
    ///
    pub fn onFlags(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, QModelIndex) callconv(.c) i32) void {
        qtc.QPdfLinkModel_OnFlags(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setData` instead
    ///
    pub const SetData = setData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` value: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn setData(self: QPdfLinkModel, _index: anytype, value: anytype, role: i32) bool {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QPdfLinkModel_SetData(@ptrCast(self.ptr), @ptrCast(_index.ptr), @ptrCast(value.ptr), @bitCast(role));
    }

    /// ### DEPRECATED: Use `superSetData` instead
    ///
    pub const SuperSetData = superSetData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` value: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn superSetData(self: QPdfLinkModel, _index: anytype, value: anytype, role: i32) bool {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QPdfLinkModel_SuperSetData(@ptrCast(self.ptr), @ptrCast(_index.ptr), @ptrCast(value.ptr), @bitCast(role));
    }

    /// ### DEPRECATED: Use `onSetData` instead
    ///
    pub const OnSetData = onSetData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, index: QModelIndex, value: QVariant, role: i32) callconv(.c) bool `
    ///
    pub fn onSetData(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, QModelIndex, QVariant, i32) callconv(.c) bool) void {
        qtc.QPdfLinkModel_OnSetData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `headerData` instead
    ///
    pub const HeaderData = headerData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` role: i32 `
    ///
    pub fn headerData(self: QPdfLinkModel, section: i32, orientation: i32, role: i32) QVariant {
        return .{ .ptr = qtc.QPdfLinkModel_HeaderData(@ptrCast(self.ptr), @bitCast(section), @bitCast(orientation), @bitCast(role)) };
    }

    /// ### DEPRECATED: Use `superHeaderData` instead
    ///
    pub const SuperHeaderData = superHeaderData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` role: i32 `
    ///
    pub fn superHeaderData(self: QPdfLinkModel, section: i32, orientation: i32, role: i32) QVariant {
        return .{ .ptr = qtc.QPdfLinkModel_SuperHeaderData(@ptrCast(self.ptr), @bitCast(section), @bitCast(orientation), @bitCast(role)) };
    }

    /// ### DEPRECATED: Use `onHeaderData` instead
    ///
    pub const OnHeaderData = onHeaderData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, section: i32, orientation: qnamespace_enums.Orientation, role: i32) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onHeaderData(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, i32, i32, i32) callconv(.c) QVariant) void {
        qtc.QPdfLinkModel_OnHeaderData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setHeaderData` instead
    ///
    pub const SetHeaderData = setHeaderData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` value: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn setHeaderData(self: QPdfLinkModel, section: i32, orientation: i32, value: anytype, role: i32) bool {
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QPdfLinkModel_SetHeaderData(@ptrCast(self.ptr), @bitCast(section), @bitCast(orientation), @ptrCast(value.ptr), @bitCast(role));
    }

    /// ### DEPRECATED: Use `superSetHeaderData` instead
    ///
    pub const SuperSetHeaderData = superSetHeaderData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` value: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn superSetHeaderData(self: QPdfLinkModel, section: i32, orientation: i32, value: anytype, role: i32) bool {
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QPdfLinkModel_SuperSetHeaderData(@ptrCast(self.ptr), @bitCast(section), @bitCast(orientation), @ptrCast(value.ptr), @bitCast(role));
    }

    /// ### DEPRECATED: Use `onSetHeaderData` instead
    ///
    pub const OnSetHeaderData = onSetHeaderData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, section: i32, orientation: qnamespace_enums.Orientation, value: QVariant, role: i32) callconv(.c) bool `
    ///
    pub fn onSetHeaderData(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, i32, i32, QVariant, i32) callconv(.c) bool) void {
        qtc.QPdfLinkModel_OnSetHeaderData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemData` instead
    ///
    pub const ItemData = itemData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn itemData(self: QPdfLinkModel, allocator: std.mem.Allocator, _index: anytype) ArrayMap_i32_QVariant {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        const _map: qtc.libqt_map = qtc.QPdfLinkModel_ItemData(@ptrCast(self.ptr), @ptrCast(_index.ptr));
        var _ret: ArrayMap_i32_QVariant = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("QPdfLinkModel.itemData: Total capacity allocation failed");
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

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn superItemData(self: QPdfLinkModel, allocator: std.mem.Allocator, _index: anytype) ArrayMap_i32_QVariant {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        const _map: qtc.libqt_map = qtc.QPdfLinkModel_SuperItemData(@ptrCast(self.ptr), @ptrCast(_index.ptr));
        var _ret: ArrayMap_i32_QVariant = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("QPdfLinkModel.itemData: Total capacity allocation failed");
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

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, index: QModelIndex) callconv(.c) qtc.libqt_map `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of ArrayMap_i32_QVariant `
    ///
    pub fn onItemData(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, QModelIndex) callconv(.c) qtc.libqt_map) void {
        qtc.QPdfLinkModel_OnItemData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setItemData` instead
    ///
    pub const SetItemData = setItemData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` roles: ArrayMap_i32_QVariant `
    ///
    pub fn setItemData(self: QPdfLinkModel, allocator: std.mem.Allocator, _index: anytype, roles: ArrayMap_i32_QVariant) bool {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        const roles_count = roles.count();
        const roles_keys = allocator.alloc(i32, roles_count) catch @panic("QPdfLinkModel.setItemData: Memory allocation failed");
        defer allocator.free(roles_keys);
        const roles_values = allocator.alloc(QtC.QVariant, roles_count) catch @panic("QPdfLinkModel.setItemData: Memory allocation failed");
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
        return qtc.QPdfLinkModel_SetItemData(@ptrCast(self.ptr), @ptrCast(_index.ptr), roles_map);
    }

    /// ### DEPRECATED: Use `superSetItemData` instead
    ///
    pub const SuperSetItemData = superSetItemData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` roles: ArrayMap_i32_QVariant `
    ///
    pub fn superSetItemData(self: QPdfLinkModel, allocator: std.mem.Allocator, _index: anytype, roles: ArrayMap_i32_QVariant) bool {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        const roles_count = roles.count();
        const roles_keys = allocator.alloc(i32, roles_count) catch @panic("QPdfLinkModel.setItemData: Memory allocation failed");
        defer allocator.free(roles_keys);
        const roles_values = allocator.alloc(QtC.QVariant, roles_count) catch @panic("QPdfLinkModel.setItemData: Memory allocation failed");
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
        return qtc.QPdfLinkModel_SuperSetItemData(@ptrCast(self.ptr), @ptrCast(_index.ptr), roles_map);
    }

    /// ### DEPRECATED: Use `onSetItemData` instead
    ///
    pub const OnSetItemData = onSetItemData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, index: QModelIndex, roles: qtc.libqt_map (ArrayMap_i32_QVariant)) callconv(.c) bool `
    ///
    pub fn onSetItemData(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, QModelIndex, qtc.libqt_map) callconv(.c) bool) void {
        qtc.QPdfLinkModel_OnSetItemData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `clearItemData` instead
    ///
    pub const ClearItemData = clearItemData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn clearItemData(self: QPdfLinkModel, _index: anytype) bool {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return qtc.QPdfLinkModel_ClearItemData(@ptrCast(self.ptr), @ptrCast(_index.ptr));
    }

    /// ### DEPRECATED: Use `superClearItemData` instead
    ///
    pub const SuperClearItemData = superClearItemData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn superClearItemData(self: QPdfLinkModel, _index: anytype) bool {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return qtc.QPdfLinkModel_SuperClearItemData(@ptrCast(self.ptr), @ptrCast(_index.ptr));
    }

    /// ### DEPRECATED: Use `onClearItemData` instead
    ///
    pub const OnClearItemData = onClearItemData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, index: QModelIndex) callconv(.c) bool `
    ///
    pub fn onClearItemData(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, QModelIndex) callconv(.c) bool) void {
        qtc.QPdfLinkModel_OnClearItemData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mimeTypes` instead
    ///
    pub const MimeTypes = mimeTypes;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn mimeTypes(self: QPdfLinkModel, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QPdfLinkModel_MimeTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QPdfLinkModel.mimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QPdfLinkModel.mimeTypes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `superMimeTypes` instead
    ///
    pub const SuperMimeTypes = superMimeTypes;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superMimeTypes(self: QPdfLinkModel, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QPdfLinkModel_SuperMimeTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QPdfLinkModel.mimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QPdfLinkModel.mimeTypes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `onMimeTypes` instead
    ///
    pub const OnMimeTypes = onMimeTypes;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeTypes)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8 `
    ///
    pub fn onMimeTypes(self: QPdfLinkModel, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.QPdfLinkModel_OnMimeTypes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mimeData` instead
    ///
    pub const MimeData = mimeData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` indexes: []QModelIndex `
    ///
    pub fn mimeData(self: QPdfLinkModel, indexes: []QModelIndex) QMimeData {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        return .{ .ptr = qtc.QPdfLinkModel_MimeData(@ptrCast(self.ptr), indexes_list) };
    }

    /// ### DEPRECATED: Use `superMimeData` instead
    ///
    pub const SuperMimeData = superMimeData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` indexes: []QModelIndex `
    ///
    pub fn superMimeData(self: QPdfLinkModel, indexes: []QModelIndex) QMimeData {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        return .{ .ptr = qtc.QPdfLinkModel_SuperMimeData(@ptrCast(self.ptr), indexes_list) };
    }

    /// ### DEPRECATED: Use `onMimeData` instead
    ///
    pub const OnMimeData = onMimeData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#mimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, indexes: qtc.libqt_list ([]QModelIndex)) callconv(.c) QMimeData `
    ///
    pub fn onMimeData(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, qtc.libqt_list) callconv(.c) QMimeData) void {
        qtc.QPdfLinkModel_OnMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `canDropMimeData` instead
    ///
    pub const CanDropMimeData = canDropMimeData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
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
    pub fn canDropMimeData(self: QPdfLinkModel, _data: anytype, action: i32, row: i32, column: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_data)._is_QMimeData;
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QPdfLinkModel_CanDropMimeData(@ptrCast(self.ptr), @ptrCast(_data.ptr), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `superCanDropMimeData` instead
    ///
    pub const SuperCanDropMimeData = superCanDropMimeData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
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
    pub fn superCanDropMimeData(self: QPdfLinkModel, _data: anytype, action: i32, row: i32, column: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_data)._is_QMimeData;
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QPdfLinkModel_SuperCanDropMimeData(@ptrCast(self.ptr), @ptrCast(_data.ptr), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onCanDropMimeData` instead
    ///
    pub const OnCanDropMimeData = onCanDropMimeData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, data: QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onCanDropMimeData(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, QMimeData, i32, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.QPdfLinkModel_OnCanDropMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `supportedDropActions` instead
    ///
    pub const SupportedDropActions = supportedDropActions;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn supportedDropActions(self: QPdfLinkModel) i32 {
        return qtc.QPdfLinkModel_SupportedDropActions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSupportedDropActions` instead
    ///
    pub const SuperSupportedDropActions = superSupportedDropActions;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn superSupportedDropActions(self: QPdfLinkModel) i32 {
        return qtc.QPdfLinkModel_SuperSupportedDropActions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSupportedDropActions` instead
    ///
    pub const OnSupportedDropActions = onSupportedDropActions;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDropActions)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSupportedDropActions(self: QPdfLinkModel, callback: *const fn () callconv(.c) i32) void {
        qtc.QPdfLinkModel_OnSupportedDropActions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `supportedDragActions` instead
    ///
    pub const SupportedDragActions = supportedDragActions;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn supportedDragActions(self: QPdfLinkModel) i32 {
        return qtc.QPdfLinkModel_SupportedDragActions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSupportedDragActions` instead
    ///
    pub const SuperSupportedDragActions = superSupportedDragActions;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn superSupportedDragActions(self: QPdfLinkModel) i32 {
        return qtc.QPdfLinkModel_SuperSupportedDragActions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSupportedDragActions` instead
    ///
    pub const OnSupportedDragActions = onSupportedDragActions;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSupportedDragActions(self: QPdfLinkModel, callback: *const fn () callconv(.c) i32) void {
        qtc.QPdfLinkModel_OnSupportedDragActions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `insertRows` instead
    ///
    pub const InsertRows = insertRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn insertRows(self: QPdfLinkModel, row: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QPdfLinkModel_InsertRows(@ptrCast(self.ptr), @bitCast(row), @bitCast(count), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `superInsertRows` instead
    ///
    pub const SuperInsertRows = superInsertRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superInsertRows(self: QPdfLinkModel, row: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QPdfLinkModel_SuperInsertRows(@ptrCast(self.ptr), @bitCast(row), @bitCast(count), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onInsertRows` instead
    ///
    pub const OnInsertRows = onInsertRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, row: i32, count: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onInsertRows(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.QPdfLinkModel_OnInsertRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `insertColumns` instead
    ///
    pub const InsertColumns = insertColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn insertColumns(self: QPdfLinkModel, column: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QPdfLinkModel_InsertColumns(@ptrCast(self.ptr), @bitCast(column), @bitCast(count), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `superInsertColumns` instead
    ///
    pub const SuperInsertColumns = superInsertColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superInsertColumns(self: QPdfLinkModel, column: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QPdfLinkModel_SuperInsertColumns(@ptrCast(self.ptr), @bitCast(column), @bitCast(count), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onInsertColumns` instead
    ///
    pub const OnInsertColumns = onInsertColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, column: i32, count: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onInsertColumns(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.QPdfLinkModel_OnInsertColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `removeRows` instead
    ///
    pub const RemoveRows = removeRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn removeRows(self: QPdfLinkModel, row: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QPdfLinkModel_RemoveRows(@ptrCast(self.ptr), @bitCast(row), @bitCast(count), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `superRemoveRows` instead
    ///
    pub const SuperRemoveRows = superRemoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superRemoveRows(self: QPdfLinkModel, row: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QPdfLinkModel_SuperRemoveRows(@ptrCast(self.ptr), @bitCast(row), @bitCast(count), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onRemoveRows` instead
    ///
    pub const OnRemoveRows = onRemoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, row: i32, count: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onRemoveRows(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.QPdfLinkModel_OnRemoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `removeColumns` instead
    ///
    pub const RemoveColumns = removeColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn removeColumns(self: QPdfLinkModel, column: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QPdfLinkModel_RemoveColumns(@ptrCast(self.ptr), @bitCast(column), @bitCast(count), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `superRemoveColumns` instead
    ///
    pub const SuperRemoveColumns = superRemoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superRemoveColumns(self: QPdfLinkModel, column: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QPdfLinkModel_SuperRemoveColumns(@ptrCast(self.ptr), @bitCast(column), @bitCast(count), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onRemoveColumns` instead
    ///
    pub const OnRemoveColumns = onRemoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, column: i32, count: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onRemoveColumns(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.QPdfLinkModel_OnRemoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfLinkModel `
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
    pub fn moveRows(self: QPdfLinkModel, sourceParent: anytype, sourceRow: i32, count: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QPdfLinkModel_MoveRows(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceRow), @bitCast(count), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
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
    /// ` self: QPdfLinkModel `
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
    pub fn superMoveRows(self: QPdfLinkModel, sourceParent: anytype, sourceRow: i32, count: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QPdfLinkModel_SuperMoveRows(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceRow), @bitCast(count), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
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
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, sourceParent: QModelIndex, sourceRow: i32, count: i32, destinationParent: QModelIndex, destinationChild: i32) callconv(.c) bool `
    ///
    pub fn onMoveRows(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) bool) void {
        qtc.QPdfLinkModel_OnMoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfLinkModel `
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
    pub fn moveColumns(self: QPdfLinkModel, sourceParent: anytype, sourceColumn: i32, count: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QPdfLinkModel_MoveColumns(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceColumn), @bitCast(count), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
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
    /// ` self: QPdfLinkModel `
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
    pub fn superMoveColumns(self: QPdfLinkModel, sourceParent: anytype, sourceColumn: i32, count: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QPdfLinkModel_SuperMoveColumns(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceColumn), @bitCast(count), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
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
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, sourceParent: QModelIndex, sourceColumn: i32, count: i32, destinationParent: QModelIndex, destinationChild: i32) callconv(.c) bool `
    ///
    pub fn onMoveColumns(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) bool) void {
        qtc.QPdfLinkModel_OnMoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `fetchMore` instead
    ///
    pub const FetchMore = fetchMore;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn fetchMore(self: QPdfLinkModel, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QPdfLinkModel_FetchMore(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `superFetchMore` instead
    ///
    pub const SuperFetchMore = superFetchMore;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superFetchMore(self: QPdfLinkModel, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QPdfLinkModel_SuperFetchMore(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onFetchMore` instead
    ///
    pub const OnFetchMore = onFetchMore;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, parent: QModelIndex) callconv(.c) void `
    ///
    pub fn onFetchMore(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, QModelIndex) callconv(.c) void) void {
        qtc.QPdfLinkModel_OnFetchMore(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `canFetchMore` instead
    ///
    pub const CanFetchMore = canFetchMore;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn canFetchMore(self: QPdfLinkModel, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QPdfLinkModel_CanFetchMore(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `superCanFetchMore` instead
    ///
    pub const SuperCanFetchMore = superCanFetchMore;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superCanFetchMore(self: QPdfLinkModel, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QPdfLinkModel_SuperCanFetchMore(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onCanFetchMore` instead
    ///
    pub const OnCanFetchMore = onCanFetchMore;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onCanFetchMore(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, QModelIndex) callconv(.c) bool) void {
        qtc.QPdfLinkModel_OnCanFetchMore(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sort` instead
    ///
    pub const Sort = sort;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` column: i32 `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    pub fn sort(self: QPdfLinkModel, column: i32, order: i32) void {
        qtc.QPdfLinkModel_Sort(@ptrCast(self.ptr), @bitCast(column), @bitCast(order));
    }

    /// ### DEPRECATED: Use `superSort` instead
    ///
    pub const SuperSort = superSort;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` column: i32 `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    pub fn superSort(self: QPdfLinkModel, column: i32, order: i32) void {
        qtc.QPdfLinkModel_SuperSort(@ptrCast(self.ptr), @bitCast(column), @bitCast(order));
    }

    /// ### DEPRECATED: Use `onSort` instead
    ///
    pub const OnSort = onSort;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, column: i32, order: qnamespace_enums.SortOrder) callconv(.c) void `
    ///
    pub fn onSort(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, i32, i32) callconv(.c) void) void {
        qtc.QPdfLinkModel_OnSort(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `buddy` instead
    ///
    pub const Buddy = buddy;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn buddy(self: QPdfLinkModel, _index: anytype) QModelIndex {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return .{ .ptr = qtc.QPdfLinkModel_Buddy(@ptrCast(self.ptr), @ptrCast(_index.ptr)) };
    }

    /// ### DEPRECATED: Use `superBuddy` instead
    ///
    pub const SuperBuddy = superBuddy;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn superBuddy(self: QPdfLinkModel, _index: anytype) QModelIndex {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return .{ .ptr = qtc.QPdfLinkModel_SuperBuddy(@ptrCast(self.ptr), @ptrCast(_index.ptr)) };
    }

    /// ### DEPRECATED: Use `onBuddy` instead
    ///
    pub const OnBuddy = onBuddy;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, index: QModelIndex) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onBuddy(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.QPdfLinkModel_OnBuddy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `match` instead
    ///
    pub const Match = match;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
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
    pub fn match(self: QPdfLinkModel, allocator: std.mem.Allocator, start: anytype, role: i32, value: anytype, hits: i32, _flags: i32) []QModelIndex {
        comptime _ = @TypeOf(start)._is_QModelIndex;
        comptime _ = @TypeOf(value)._is_QVariant;
        const _arr: qtc.libqt_list = qtc.QPdfLinkModel_Match(@ptrCast(self.ptr), @ptrCast(start.ptr), @bitCast(role), @ptrCast(value.ptr), @bitCast(hits), @bitCast(_flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("QPdfLinkModel.match: Memory allocation failed");
        const _data_val: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `superMatch` instead
    ///
    pub const SuperMatch = superMatch;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
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
    pub fn superMatch(self: QPdfLinkModel, allocator: std.mem.Allocator, start: anytype, role: i32, value: anytype, hits: i32, _flags: i32) []QModelIndex {
        comptime _ = @TypeOf(start)._is_QModelIndex;
        comptime _ = @TypeOf(value)._is_QVariant;
        const _arr: qtc.libqt_list = qtc.QPdfLinkModel_SuperMatch(@ptrCast(self.ptr), @ptrCast(start.ptr), @bitCast(role), @ptrCast(value.ptr), @bitCast(hits), @bitCast(_flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("QPdfLinkModel.match: Memory allocation failed");
        const _data_val: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `onMatch` instead
    ///
    pub const OnMatch = onMatch;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, start: QModelIndex, role: i32, value: QVariant, hits: i32, flags: flag of qnamespace_enums.MatchFlag) callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QModelIndex `
    ///
    pub fn onMatch(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, QModelIndex, i32, QVariant, i32, i32) callconv(.c) qtc.libqt_list) void {
        qtc.QPdfLinkModel_OnMatch(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `span` instead
    ///
    pub const Span = span;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn span(self: QPdfLinkModel, _index: anytype) QSize {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return .{ .ptr = qtc.QPdfLinkModel_Span(@ptrCast(self.ptr), @ptrCast(_index.ptr)) };
    }

    /// ### DEPRECATED: Use `superSpan` instead
    ///
    pub const SuperSpan = superSpan;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn superSpan(self: QPdfLinkModel, _index: anytype) QSize {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return .{ .ptr = qtc.QPdfLinkModel_SuperSpan(@ptrCast(self.ptr), @ptrCast(_index.ptr)) };
    }

    /// ### DEPRECATED: Use `onSpan` instead
    ///
    pub const OnSpan = onSpan;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, index: QModelIndex) callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSpan(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, QModelIndex) callconv(.c) QSize) void {
        qtc.QPdfLinkModel_OnSpan(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` roleDataSpan: QModelRoleDataSpan `
    ///
    pub fn multiData(self: QPdfLinkModel, _index: anytype, roleDataSpan: anytype) void {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        comptime _ = @TypeOf(roleDataSpan)._is_QModelRoleDataSpan;
        qtc.QPdfLinkModel_MultiData(@ptrCast(self.ptr), @ptrCast(_index.ptr), @ptrCast(roleDataSpan.ptr));
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` roleDataSpan: QModelRoleDataSpan `
    ///
    pub fn superMultiData(self: QPdfLinkModel, _index: anytype, roleDataSpan: anytype) void {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        comptime _ = @TypeOf(roleDataSpan)._is_QModelRoleDataSpan;
        qtc.QPdfLinkModel_SuperMultiData(@ptrCast(self.ptr), @ptrCast(_index.ptr), @ptrCast(roleDataSpan.ptr));
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
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, index: QModelIndex, roleDataSpan: QModelRoleDataSpan) callconv(.c) void `
    ///
    pub fn onMultiData(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, QModelIndex, QModelRoleDataSpan) callconv(.c) void) void {
        qtc.QPdfLinkModel_OnMultiData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `submit` instead
    ///
    pub const Submit = submit;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    pub fn submit(self: QPdfLinkModel) bool {
        return qtc.QPdfLinkModel_Submit(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSubmit` instead
    ///
    pub const SuperSubmit = superSubmit;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    pub fn superSubmit(self: QPdfLinkModel) bool {
        return qtc.QPdfLinkModel_SuperSubmit(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSubmit` instead
    ///
    pub const OnSubmit = onSubmit;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onSubmit(self: QPdfLinkModel, callback: *const fn () callconv(.c) bool) void {
        qtc.QPdfLinkModel_OnSubmit(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `revert` instead
    ///
    pub const Revert = revert;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    pub fn revert(self: QPdfLinkModel) void {
        qtc.QPdfLinkModel_Revert(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superRevert` instead
    ///
    pub const SuperRevert = superRevert;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPdfLinkModel `
    ///
    pub fn superRevert(self: QPdfLinkModel) void {
        qtc.QPdfLinkModel_SuperRevert(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRevert` instead
    ///
    pub const OnRevert = onRevert;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onRevert(self: QPdfLinkModel, callback: *const fn () callconv(.c) void) void {
        qtc.QPdfLinkModel_OnRevert(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfLinkModel `
    ///
    pub fn resetInternalData(self: QPdfLinkModel) void {
        qtc.QPdfLinkModel_ResetInternalData(@ptrCast(self.ptr));
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
    /// ` self: QPdfLinkModel `
    ///
    pub fn superResetInternalData(self: QPdfLinkModel) void {
        qtc.QPdfLinkModel_SuperResetInternalData(@ptrCast(self.ptr));
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
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onResetInternalData(self: QPdfLinkModel, callback: *const fn () callconv(.c) void) void {
        qtc.QPdfLinkModel_OnResetInternalData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QPdfLinkModel, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QPdfLinkModel_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QPdfLinkModel, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QPdfLinkModel_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, QEvent) callconv(.c) bool) void {
        qtc.QPdfLinkModel_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QPdfLinkModel, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QPdfLinkModel_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QPdfLinkModel, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QPdfLinkModel_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, QObject, QEvent) callconv(.c) bool) void {
        qtc.QPdfLinkModel_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QPdfLinkModel, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QPdfLinkModel_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QPdfLinkModel, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QPdfLinkModel_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, QTimerEvent) callconv(.c) void) void {
        qtc.QPdfLinkModel_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QPdfLinkModel, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QPdfLinkModel_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QPdfLinkModel, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QPdfLinkModel_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, QChildEvent) callconv(.c) void) void {
        qtc.QPdfLinkModel_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QPdfLinkModel, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QPdfLinkModel_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QPdfLinkModel, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QPdfLinkModel_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, QEvent) callconv(.c) void) void {
        qtc.QPdfLinkModel_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QPdfLinkModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPdfLinkModel_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QPdfLinkModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPdfLinkModel_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, QMetaMethod) callconv(.c) void) void {
        qtc.QPdfLinkModel_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QPdfLinkModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPdfLinkModel_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QPdfLinkModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPdfLinkModel_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, QMetaMethod) callconv(.c) void) void {
        qtc.QPdfLinkModel_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn createIndex(self: QPdfLinkModel, row: i32, column: i32) QModelIndex {
        return .{ .ptr = qtc.QPdfLinkModel_CreateIndex(@ptrCast(self.ptr), @bitCast(row), @bitCast(column)) };
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn superCreateIndex(self: QPdfLinkModel, row: i32, column: i32) QModelIndex {
        return .{ .ptr = qtc.QPdfLinkModel_SuperCreateIndex(@ptrCast(self.ptr), @bitCast(row), @bitCast(column)) };
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
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, row: i32, column: i32) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onCreateIndex(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, i32, i32) callconv(.c) QModelIndex) void {
        qtc.QPdfLinkModel_OnCreateIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` indexes: []QModelIndex `
    ///
    /// ` stream: QDataStream `
    ///
    pub fn encodeData(self: QPdfLinkModel, indexes: []QModelIndex, stream: anytype) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        comptime _ = @TypeOf(stream)._is_QDataStream;
        qtc.QPdfLinkModel_EncodeData(@ptrCast(self.ptr), indexes_list, @ptrCast(stream.ptr));
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` indexes: []QModelIndex `
    ///
    /// ` stream: QDataStream `
    ///
    pub fn superEncodeData(self: QPdfLinkModel, indexes: []QModelIndex, stream: anytype) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        comptime _ = @TypeOf(stream)._is_QDataStream;
        qtc.QPdfLinkModel_SuperEncodeData(@ptrCast(self.ptr), indexes_list, @ptrCast(stream.ptr));
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
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, indexes: qtc.libqt_list ([]QModelIndex), stream: QDataStream) callconv(.c) void `
    ///
    pub fn onEncodeData(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, qtc.libqt_list, QDataStream) callconv(.c) void) void {
        qtc.QPdfLinkModel_OnEncodeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` stream: QDataStream `
    ///
    pub fn decodeData(self: QPdfLinkModel, row: i32, column: i32, _parent: anytype, stream: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        comptime _ = @TypeOf(stream)._is_QDataStream;
        return qtc.QPdfLinkModel_DecodeData(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(_parent.ptr), @ptrCast(stream.ptr));
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` stream: QDataStream `
    ///
    pub fn superDecodeData(self: QPdfLinkModel, row: i32, column: i32, _parent: anytype, stream: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        comptime _ = @TypeOf(stream)._is_QDataStream;
        return qtc.QPdfLinkModel_SuperDecodeData(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(_parent.ptr), @ptrCast(stream.ptr));
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
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, row: i32, column: i32, parent: QModelIndex, stream: QDataStream) callconv(.c) bool `
    ///
    pub fn onDecodeData(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, i32, i32, QModelIndex, QDataStream) callconv(.c) bool) void {
        qtc.QPdfLinkModel_OnDecodeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn beginInsertRows(self: QPdfLinkModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QPdfLinkModel_BeginInsertRows(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn superBeginInsertRows(self: QPdfLinkModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QPdfLinkModel_SuperBeginInsertRows(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
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
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onBeginInsertRows(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QPdfLinkModel_OnBeginInsertRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfLinkModel `
    ///
    pub fn endInsertRows(self: QPdfLinkModel) void {
        qtc.QPdfLinkModel_EndInsertRows(@ptrCast(self.ptr));
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
    /// ` self: QPdfLinkModel `
    ///
    pub fn superEndInsertRows(self: QPdfLinkModel) void {
        qtc.QPdfLinkModel_SuperEndInsertRows(@ptrCast(self.ptr));
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
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEndInsertRows(self: QPdfLinkModel, callback: *const fn () callconv(.c) void) void {
        qtc.QPdfLinkModel_OnEndInsertRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn beginRemoveRows(self: QPdfLinkModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QPdfLinkModel_BeginRemoveRows(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn superBeginRemoveRows(self: QPdfLinkModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QPdfLinkModel_SuperBeginRemoveRows(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
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
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onBeginRemoveRows(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QPdfLinkModel_OnBeginRemoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfLinkModel `
    ///
    pub fn endRemoveRows(self: QPdfLinkModel) void {
        qtc.QPdfLinkModel_EndRemoveRows(@ptrCast(self.ptr));
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
    /// ` self: QPdfLinkModel `
    ///
    pub fn superEndRemoveRows(self: QPdfLinkModel) void {
        qtc.QPdfLinkModel_SuperEndRemoveRows(@ptrCast(self.ptr));
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
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEndRemoveRows(self: QPdfLinkModel, callback: *const fn () callconv(.c) void) void {
        qtc.QPdfLinkModel_OnEndRemoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfLinkModel `
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
    pub fn beginMoveRows(self: QPdfLinkModel, sourceParent: anytype, sourceFirst: i32, sourceLast: i32, destinationParent: anytype, destinationRow: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QPdfLinkModel_BeginMoveRows(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent.ptr), @bitCast(destinationRow));
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
    /// ` self: QPdfLinkModel `
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
    pub fn superBeginMoveRows(self: QPdfLinkModel, sourceParent: anytype, sourceFirst: i32, sourceLast: i32, destinationParent: anytype, destinationRow: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QPdfLinkModel_SuperBeginMoveRows(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent.ptr), @bitCast(destinationRow));
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
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, sourceParent: QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QModelIndex, destinationRow: i32) callconv(.c) bool `
    ///
    pub fn onBeginMoveRows(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) bool) void {
        qtc.QPdfLinkModel_OnBeginMoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfLinkModel `
    ///
    pub fn endMoveRows(self: QPdfLinkModel) void {
        qtc.QPdfLinkModel_EndMoveRows(@ptrCast(self.ptr));
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
    /// ` self: QPdfLinkModel `
    ///
    pub fn superEndMoveRows(self: QPdfLinkModel) void {
        qtc.QPdfLinkModel_SuperEndMoveRows(@ptrCast(self.ptr));
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
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEndMoveRows(self: QPdfLinkModel, callback: *const fn () callconv(.c) void) void {
        qtc.QPdfLinkModel_OnEndMoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn beginInsertColumns(self: QPdfLinkModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QPdfLinkModel_BeginInsertColumns(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn superBeginInsertColumns(self: QPdfLinkModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QPdfLinkModel_SuperBeginInsertColumns(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
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
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onBeginInsertColumns(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QPdfLinkModel_OnBeginInsertColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfLinkModel `
    ///
    pub fn endInsertColumns(self: QPdfLinkModel) void {
        qtc.QPdfLinkModel_EndInsertColumns(@ptrCast(self.ptr));
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
    /// ` self: QPdfLinkModel `
    ///
    pub fn superEndInsertColumns(self: QPdfLinkModel) void {
        qtc.QPdfLinkModel_SuperEndInsertColumns(@ptrCast(self.ptr));
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
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEndInsertColumns(self: QPdfLinkModel, callback: *const fn () callconv(.c) void) void {
        qtc.QPdfLinkModel_OnEndInsertColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn beginRemoveColumns(self: QPdfLinkModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QPdfLinkModel_BeginRemoveColumns(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn superBeginRemoveColumns(self: QPdfLinkModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QPdfLinkModel_SuperBeginRemoveColumns(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
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
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onBeginRemoveColumns(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QPdfLinkModel_OnBeginRemoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfLinkModel `
    ///
    pub fn endRemoveColumns(self: QPdfLinkModel) void {
        qtc.QPdfLinkModel_EndRemoveColumns(@ptrCast(self.ptr));
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
    /// ` self: QPdfLinkModel `
    ///
    pub fn superEndRemoveColumns(self: QPdfLinkModel) void {
        qtc.QPdfLinkModel_SuperEndRemoveColumns(@ptrCast(self.ptr));
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
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEndRemoveColumns(self: QPdfLinkModel, callback: *const fn () callconv(.c) void) void {
        qtc.QPdfLinkModel_OnEndRemoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfLinkModel `
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
    pub fn beginMoveColumns(self: QPdfLinkModel, sourceParent: anytype, sourceFirst: i32, sourceLast: i32, destinationParent: anytype, destinationColumn: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QPdfLinkModel_BeginMoveColumns(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent.ptr), @bitCast(destinationColumn));
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
    /// ` self: QPdfLinkModel `
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
    pub fn superBeginMoveColumns(self: QPdfLinkModel, sourceParent: anytype, sourceFirst: i32, sourceLast: i32, destinationParent: anytype, destinationColumn: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QPdfLinkModel_SuperBeginMoveColumns(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent.ptr), @bitCast(destinationColumn));
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
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, sourceParent: QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QModelIndex, destinationColumn: i32) callconv(.c) bool `
    ///
    pub fn onBeginMoveColumns(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) bool) void {
        qtc.QPdfLinkModel_OnBeginMoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfLinkModel `
    ///
    pub fn endMoveColumns(self: QPdfLinkModel) void {
        qtc.QPdfLinkModel_EndMoveColumns(@ptrCast(self.ptr));
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
    /// ` self: QPdfLinkModel `
    ///
    pub fn superEndMoveColumns(self: QPdfLinkModel) void {
        qtc.QPdfLinkModel_SuperEndMoveColumns(@ptrCast(self.ptr));
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
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEndMoveColumns(self: QPdfLinkModel, callback: *const fn () callconv(.c) void) void {
        qtc.QPdfLinkModel_OnEndMoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfLinkModel `
    ///
    pub fn beginResetModel(self: QPdfLinkModel) void {
        qtc.QPdfLinkModel_BeginResetModel(@ptrCast(self.ptr));
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
    /// ` self: QPdfLinkModel `
    ///
    pub fn superBeginResetModel(self: QPdfLinkModel) void {
        qtc.QPdfLinkModel_SuperBeginResetModel(@ptrCast(self.ptr));
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
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onBeginResetModel(self: QPdfLinkModel, callback: *const fn () callconv(.c) void) void {
        qtc.QPdfLinkModel_OnBeginResetModel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfLinkModel `
    ///
    pub fn endResetModel(self: QPdfLinkModel) void {
        qtc.QPdfLinkModel_EndResetModel(@ptrCast(self.ptr));
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
    /// ` self: QPdfLinkModel `
    ///
    pub fn superEndResetModel(self: QPdfLinkModel) void {
        qtc.QPdfLinkModel_SuperEndResetModel(@ptrCast(self.ptr));
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
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEndResetModel(self: QPdfLinkModel, callback: *const fn () callconv(.c) void) void {
        qtc.QPdfLinkModel_OnEndResetModel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` from: QModelIndex `
    ///
    /// ` to: QModelIndex `
    ///
    pub fn changePersistentIndex(self: QPdfLinkModel, from: anytype, to: anytype) void {
        comptime _ = @TypeOf(from)._is_QModelIndex;
        comptime _ = @TypeOf(to)._is_QModelIndex;
        qtc.QPdfLinkModel_ChangePersistentIndex(@ptrCast(self.ptr), @ptrCast(from.ptr), @ptrCast(to.ptr));
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` from: QModelIndex `
    ///
    /// ` to: QModelIndex `
    ///
    pub fn superChangePersistentIndex(self: QPdfLinkModel, from: anytype, to: anytype) void {
        comptime _ = @TypeOf(from)._is_QModelIndex;
        comptime _ = @TypeOf(to)._is_QModelIndex;
        qtc.QPdfLinkModel_SuperChangePersistentIndex(@ptrCast(self.ptr), @ptrCast(from.ptr), @ptrCast(to.ptr));
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
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, from: QModelIndex, to: QModelIndex) callconv(.c) void `
    ///
    pub fn onChangePersistentIndex(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, QModelIndex, QModelIndex) callconv(.c) void) void {
        qtc.QPdfLinkModel_OnChangePersistentIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` from: []QModelIndex `
    ///
    /// ` to: []QModelIndex `
    ///
    pub fn changePersistentIndexList(self: QPdfLinkModel, from: []QModelIndex, to: []QModelIndex) void {
        const from_list = qtc.libqt_list{
            .len = from.len,
            .data = @ptrCast(from.ptr),
        };
        const to_list = qtc.libqt_list{
            .len = to.len,
            .data = @ptrCast(to.ptr),
        };
        qtc.QPdfLinkModel_ChangePersistentIndexList(@ptrCast(self.ptr), from_list, to_list);
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` from: []QModelIndex `
    ///
    /// ` to: []QModelIndex `
    ///
    pub fn superChangePersistentIndexList(self: QPdfLinkModel, from: []QModelIndex, to: []QModelIndex) void {
        const from_list = qtc.libqt_list{
            .len = from.len,
            .data = @ptrCast(from.ptr),
        };
        const to_list = qtc.libqt_list{
            .len = to.len,
            .data = @ptrCast(to.ptr),
        };
        qtc.QPdfLinkModel_SuperChangePersistentIndexList(@ptrCast(self.ptr), from_list, to_list);
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
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, from: qtc.libqt_list ([]QModelIndex), to: qtc.libqt_list ([]QModelIndex)) callconv(.c) void `
    ///
    pub fn onChangePersistentIndexList(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, qtc.libqt_list, qtc.libqt_list) callconv(.c) void) void {
        qtc.QPdfLinkModel_OnChangePersistentIndexList(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn persistentIndexList(self: QPdfLinkModel, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.QPdfLinkModel_PersistentIndexList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("QPdfLinkModel.persistentIndexList: Memory allocation failed");
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superPersistentIndexList(self: QPdfLinkModel, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.QPdfLinkModel_SuperPersistentIndexList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("QPdfLinkModel.persistentIndexList: Memory allocation failed");
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
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QModelIndex `
    ///
    pub fn onPersistentIndexList(self: QPdfLinkModel, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.QPdfLinkModel_OnPersistentIndexList(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfLinkModel `
    ///
    pub fn sender(self: QPdfLinkModel) QObject {
        return .{ .ptr = qtc.QPdfLinkModel_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QPdfLinkModel `
    ///
    pub fn superSender(self: QPdfLinkModel) QObject {
        return .{ .ptr = qtc.QPdfLinkModel_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QPdfLinkModel, callback: *const fn () callconv(.c) QObject) void {
        qtc.QPdfLinkModel_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfLinkModel `
    ///
    pub fn senderSignalIndex(self: QPdfLinkModel) i32 {
        return qtc.QPdfLinkModel_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QPdfLinkModel `
    ///
    pub fn superSenderSignalIndex(self: QPdfLinkModel) i32 {
        return qtc.QPdfLinkModel_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QPdfLinkModel, callback: *const fn () callconv(.c) i32) void {
        qtc.QPdfLinkModel_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QPdfLinkModel, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPdfLinkModel_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QPdfLinkModel, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPdfLinkModel_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, [*:0]const u8) callconv(.c) i32) void {
        qtc.QPdfLinkModel_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QPdfLinkModel, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QPdfLinkModel_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QPdfLinkModel, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QPdfLinkModel_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPdfLinkModel`
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, QMetaMethod) callconv(.c) bool) void {
        qtc.QPdfLinkModel_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onRowsAboutToBeInserted(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, QModelIndex, i32, i32) callconv(.c) void) void {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onRowsInserted(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, QModelIndex, i32, i32) callconv(.c) void) void {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onRowsAboutToBeRemoved(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, QModelIndex, i32, i32) callconv(.c) void) void {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onRowsRemoved(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, QModelIndex, i32, i32) callconv(.c) void) void {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onColumnsAboutToBeInserted(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, QModelIndex, i32, i32) callconv(.c) void) void {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onColumnsInserted(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, QModelIndex, i32, i32) callconv(.c) void) void {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onColumnsAboutToBeRemoved(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, QModelIndex, i32, i32) callconv(.c) void) void {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onColumnsRemoved(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, QModelIndex, i32, i32) callconv(.c) void) void {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` callback: *const fn (self: QPdfLinkModel) callconv(.c) void `
    ///
    pub fn onModelAboutToBeReset(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel) callconv(.c) void) void {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` callback: *const fn (self: QPdfLinkModel) callconv(.c) void `
    ///
    pub fn onModelReset(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel) callconv(.c) void) void {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, sourceParent: QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QModelIndex, destinationRow: i32) callconv(.c) void `
    ///
    pub fn onRowsAboutToBeMoved(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) void) void {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, sourceParent: QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QModelIndex, destinationRow: i32) callconv(.c) void `
    ///
    pub fn onRowsMoved(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) void) void {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, sourceParent: QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QModelIndex, destinationColumn: i32) callconv(.c) void `
    ///
    pub fn onColumnsAboutToBeMoved(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) void) void {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, sourceParent: QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QModelIndex, destinationColumn: i32) callconv(.c) void `
    ///
    pub fn onColumnsMoved(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) void) void {
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
    /// ` self: QPdfLinkModel `
    ///
    /// ` callback: *const fn (self: QPdfLinkModel, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QPdfLinkModel, callback: *const fn (QPdfLinkModel, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflinkmodel.html#dtor.QPdfLinkModel)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPdfLinkModel `
    ///
    pub fn delete(self: QPdfLinkModel) void {
        qtc.QPdfLinkModel_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpdflinkmodel.html#public-types)
pub const enums = struct {
    pub const Role = enum(i32) {
        pub const Link: i32 = 256;
        pub const Rectangle: i32 = 257;
        pub const Url: i32 = 258;
        pub const Page: i32 = 259;
        pub const Location: i32 = 260;
        pub const Zoom: i32 = 261;
        pub const NRoles: i32 = 262;
    };
};
