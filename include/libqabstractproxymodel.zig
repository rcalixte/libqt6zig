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
const qabstractitemmodel_enums = @import("libqabstractitemmodel.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");
const ArrayMap_i32_QVariant = std.array_hash_map.Auto(i32, QVariant);
const Map_i32_u8 = std.AutoHashMapUnmanaged(i32, []u8);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html)
pub const QAbstractProxyModel = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAbstractProxyModel,

    pub const _is_QAbstractProxyModel = {};
    pub const _is_QAbstractItemModel = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QAbstractProxyModel object in C++ memory
    ///
    pub fn new() QAbstractProxyModel {
        return .{ .ptr = qtc.QAbstractProxyModel_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QAbstractProxyModel object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QAbstractProxyModel {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QAbstractProxyModel_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    pub fn metaObject(self: QAbstractProxyModel) QMetaObject {
        return .{ .ptr = qtc.QAbstractProxyModel_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QAbstractProxyModel, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QAbstractProxyModel_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractProxyModel `
    ///
    pub fn superMetaObject(self: QAbstractProxyModel) QMetaObject {
        return .{ .ptr = qtc.QAbstractProxyModel_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QAbstractProxyModel, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QAbstractProxyModel_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QAbstractProxyModel_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QAbstractProxyModel, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QAbstractProxyModel_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QAbstractProxyModel, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QAbstractProxyModel_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QAbstractProxyModel_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QAbstractProxyModel, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QAbstractProxyModel_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstractProxyModel.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setSourceModel` instead
    ///
    pub const SetSourceModel = setSourceModel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setSourceModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` _sourceModel: QAbstractItemModel `
    ///
    pub fn setSourceModel(self: QAbstractProxyModel, _sourceModel: anytype) void {
        comptime _ = @TypeOf(_sourceModel)._is_QAbstractItemModel;
        qtc.QAbstractProxyModel_SetSourceModel(@ptrCast(self.ptr), @ptrCast(_sourceModel.ptr));
    }

    /// ### DEPRECATED: Use `onSetSourceModel` instead
    ///
    pub const OnSetSourceModel = onSetSourceModel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setSourceModel)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, sourceModel: QAbstractItemModel) callconv(.c) void `
    ///
    pub fn onSetSourceModel(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QAbstractItemModel) callconv(.c) void) void {
        qtc.QAbstractProxyModel_OnSetSourceModel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetSourceModel` instead
    ///
    pub const SuperSetSourceModel = superSetSourceModel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setSourceModel)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` _sourceModel: QAbstractItemModel `
    ///
    pub fn superSetSourceModel(self: QAbstractProxyModel, _sourceModel: anytype) void {
        comptime _ = @TypeOf(_sourceModel)._is_QAbstractItemModel;
        qtc.QAbstractProxyModel_SuperSetSourceModel(@ptrCast(self.ptr), @ptrCast(_sourceModel.ptr));
    }

    /// ### DEPRECATED: Use `sourceModel` instead
    ///
    pub const SourceModel = sourceModel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sourceModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    pub fn sourceModel(self: QAbstractProxyModel) QAbstractItemModel {
        return .{ .ptr = qtc.QAbstractProxyModel_SourceModel(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToSource` instead
    ///
    pub const MapToSource = mapToSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapToSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` proxyIndex: QModelIndex `
    ///
    pub fn mapToSource(self: QAbstractProxyModel, proxyIndex: anytype) QModelIndex {
        comptime _ = @TypeOf(proxyIndex)._is_QModelIndex;
        return .{ .ptr = qtc.QAbstractProxyModel_MapToSource(@ptrCast(self.ptr), @ptrCast(proxyIndex.ptr)) };
    }

    /// ### DEPRECATED: Use `onMapToSource` instead
    ///
    pub const OnMapToSource = onMapToSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapToSource)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, proxyIndex: QModelIndex) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMapToSource(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.QAbstractProxyModel_OnMapToSource(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMapToSource` instead
    ///
    pub const SuperMapToSource = superMapToSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapToSource)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` proxyIndex: QModelIndex `
    ///
    pub fn superMapToSource(self: QAbstractProxyModel, proxyIndex: anytype) QModelIndex {
        comptime _ = @TypeOf(proxyIndex)._is_QModelIndex;
        return .{ .ptr = qtc.QAbstractProxyModel_SuperMapToSource(@ptrCast(self.ptr), @ptrCast(proxyIndex.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromSource` instead
    ///
    pub const MapFromSource = mapFromSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapFromSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` sourceIndex: QModelIndex `
    ///
    pub fn mapFromSource(self: QAbstractProxyModel, sourceIndex: anytype) QModelIndex {
        comptime _ = @TypeOf(sourceIndex)._is_QModelIndex;
        return .{ .ptr = qtc.QAbstractProxyModel_MapFromSource(@ptrCast(self.ptr), @ptrCast(sourceIndex.ptr)) };
    }

    /// ### DEPRECATED: Use `onMapFromSource` instead
    ///
    pub const OnMapFromSource = onMapFromSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapFromSource)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, sourceIndex: QModelIndex) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMapFromSource(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.QAbstractProxyModel_OnMapFromSource(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMapFromSource` instead
    ///
    pub const SuperMapFromSource = superMapFromSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapFromSource)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` sourceIndex: QModelIndex `
    ///
    pub fn superMapFromSource(self: QAbstractProxyModel, sourceIndex: anytype) QModelIndex {
        comptime _ = @TypeOf(sourceIndex)._is_QModelIndex;
        return .{ .ptr = qtc.QAbstractProxyModel_SuperMapFromSource(@ptrCast(self.ptr), @ptrCast(sourceIndex.ptr)) };
    }

    /// ### DEPRECATED: Use `mapSelectionToSource` instead
    ///
    pub const MapSelectionToSource = mapSelectionToSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapSelectionToSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` selection: QItemSelection `
    ///
    pub fn mapSelectionToSource(self: QAbstractProxyModel, selection: anytype) QItemSelection {
        comptime _ = @TypeOf(selection)._is_QItemSelection;
        return .{ .ptr = qtc.QAbstractProxyModel_MapSelectionToSource(@ptrCast(self.ptr), @ptrCast(selection.ptr)) };
    }

    /// ### DEPRECATED: Use `onMapSelectionToSource` instead
    ///
    pub const OnMapSelectionToSource = onMapSelectionToSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapSelectionToSource)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, selection: QItemSelection) callconv(.c) QItemSelection `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMapSelectionToSource(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QItemSelection) callconv(.c) QItemSelection) void {
        qtc.QAbstractProxyModel_OnMapSelectionToSource(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMapSelectionToSource` instead
    ///
    pub const SuperMapSelectionToSource = superMapSelectionToSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapSelectionToSource)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` selection: QItemSelection `
    ///
    pub fn superMapSelectionToSource(self: QAbstractProxyModel, selection: anytype) QItemSelection {
        comptime _ = @TypeOf(selection)._is_QItemSelection;
        return .{ .ptr = qtc.QAbstractProxyModel_SuperMapSelectionToSource(@ptrCast(self.ptr), @ptrCast(selection.ptr)) };
    }

    /// ### DEPRECATED: Use `mapSelectionFromSource` instead
    ///
    pub const MapSelectionFromSource = mapSelectionFromSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapSelectionFromSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` selection: QItemSelection `
    ///
    pub fn mapSelectionFromSource(self: QAbstractProxyModel, selection: anytype) QItemSelection {
        comptime _ = @TypeOf(selection)._is_QItemSelection;
        return .{ .ptr = qtc.QAbstractProxyModel_MapSelectionFromSource(@ptrCast(self.ptr), @ptrCast(selection.ptr)) };
    }

    /// ### DEPRECATED: Use `onMapSelectionFromSource` instead
    ///
    pub const OnMapSelectionFromSource = onMapSelectionFromSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapSelectionFromSource)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, selection: QItemSelection) callconv(.c) QItemSelection `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMapSelectionFromSource(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QItemSelection) callconv(.c) QItemSelection) void {
        qtc.QAbstractProxyModel_OnMapSelectionFromSource(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMapSelectionFromSource` instead
    ///
    pub const SuperMapSelectionFromSource = superMapSelectionFromSource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mapSelectionFromSource)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` selection: QItemSelection `
    ///
    pub fn superMapSelectionFromSource(self: QAbstractProxyModel, selection: anytype) QItemSelection {
        comptime _ = @TypeOf(selection)._is_QItemSelection;
        return .{ .ptr = qtc.QAbstractProxyModel_SuperMapSelectionFromSource(@ptrCast(self.ptr), @ptrCast(selection.ptr)) };
    }

    /// ### DEPRECATED: Use `submit` instead
    ///
    pub const Submit = submit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    pub fn submit(self: QAbstractProxyModel) bool {
        return qtc.QAbstractProxyModel_Submit(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSubmit` instead
    ///
    pub const OnSubmit = onSubmit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onSubmit(self: QAbstractProxyModel, callback: *const fn () callconv(.c) bool) void {
        qtc.QAbstractProxyModel_OnSubmit(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSubmit` instead
    ///
    pub const SuperSubmit = superSubmit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#submit)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    pub fn superSubmit(self: QAbstractProxyModel) bool {
        return qtc.QAbstractProxyModel_SuperSubmit(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `revert` instead
    ///
    pub const Revert = revert;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    pub fn revert(self: QAbstractProxyModel) void {
        qtc.QAbstractProxyModel_Revert(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRevert` instead
    ///
    pub const OnRevert = onRevert;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onRevert(self: QAbstractProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.QAbstractProxyModel_OnRevert(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRevert` instead
    ///
    pub const SuperRevert = superRevert;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#revert)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    pub fn superRevert(self: QAbstractProxyModel) void {
        qtc.QAbstractProxyModel_SuperRevert(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `data` instead
    ///
    pub const Data = data;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` proxyIndex: QModelIndex `
    ///
    /// ` role: i32 `
    ///
    pub fn data(self: QAbstractProxyModel, proxyIndex: anytype, role: i32) QVariant {
        comptime _ = @TypeOf(proxyIndex)._is_QModelIndex;
        return .{ .ptr = qtc.QAbstractProxyModel_Data(@ptrCast(self.ptr), @ptrCast(proxyIndex.ptr), @bitCast(role)) };
    }

    /// ### DEPRECATED: Use `onData` instead
    ///
    pub const OnData = onData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#data)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, proxyIndex: QModelIndex, role: i32) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onData(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QModelIndex, i32) callconv(.c) QVariant) void {
        qtc.QAbstractProxyModel_OnData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superData` instead
    ///
    pub const SuperData = superData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#data)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` proxyIndex: QModelIndex `
    ///
    /// ` role: i32 `
    ///
    pub fn superData(self: QAbstractProxyModel, proxyIndex: anytype, role: i32) QVariant {
        comptime _ = @TypeOf(proxyIndex)._is_QModelIndex;
        return .{ .ptr = qtc.QAbstractProxyModel_SuperData(@ptrCast(self.ptr), @ptrCast(proxyIndex.ptr), @bitCast(role)) };
    }

    /// ### DEPRECATED: Use `headerData` instead
    ///
    pub const HeaderData = headerData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#headerData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` role: i32 `
    ///
    pub fn headerData(self: QAbstractProxyModel, section: i32, orientation: i32, role: i32) QVariant {
        return .{ .ptr = qtc.QAbstractProxyModel_HeaderData(@ptrCast(self.ptr), @bitCast(section), @bitCast(orientation), @bitCast(role)) };
    }

    /// ### DEPRECATED: Use `onHeaderData` instead
    ///
    pub const OnHeaderData = onHeaderData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#headerData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, section: i32, orientation: qnamespace_enums.Orientation, role: i32) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onHeaderData(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, i32, i32, i32) callconv(.c) QVariant) void {
        qtc.QAbstractProxyModel_OnHeaderData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHeaderData` instead
    ///
    pub const SuperHeaderData = superHeaderData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#headerData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` role: i32 `
    ///
    pub fn superHeaderData(self: QAbstractProxyModel, section: i32, orientation: i32, role: i32) QVariant {
        return .{ .ptr = qtc.QAbstractProxyModel_SuperHeaderData(@ptrCast(self.ptr), @bitCast(section), @bitCast(orientation), @bitCast(role)) };
    }

    /// ### DEPRECATED: Use `itemData` instead
    ///
    pub const ItemData = itemData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn itemData(self: QAbstractProxyModel, allocator: std.mem.Allocator, _index: anytype) ArrayMap_i32_QVariant {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        const _map: qtc.libqt_map = qtc.QAbstractProxyModel_ItemData(@ptrCast(self.ptr), @ptrCast(_index.ptr));
        var _ret: ArrayMap_i32_QVariant = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("QAbstractProxyModel.itemData: Total capacity allocation failed");
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, index: QModelIndex) callconv(.c) qtc.libqt_map `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of ArrayMap_i32_QVariant `
    ///
    pub fn onItemData(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QModelIndex) callconv(.c) qtc.libqt_map) void {
        qtc.QAbstractProxyModel_OnItemData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superItemData` instead
    ///
    pub const SuperItemData = superItemData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#itemData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn superItemData(self: QAbstractProxyModel, allocator: std.mem.Allocator, _index: anytype) ArrayMap_i32_QVariant {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        const _map: qtc.libqt_map = qtc.QAbstractProxyModel_SuperItemData(@ptrCast(self.ptr), @ptrCast(_index.ptr));
        var _ret: ArrayMap_i32_QVariant = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("QAbstractProxyModel.itemData: Total capacity allocation failed");
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

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#flags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.ItemFlag `
    ///
    pub fn flags(self: QAbstractProxyModel, _index: anytype) i32 {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return qtc.QAbstractProxyModel_Flags(@ptrCast(self.ptr), @ptrCast(_index.ptr));
    }

    /// ### DEPRECATED: Use `onFlags` instead
    ///
    pub const OnFlags = onFlags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#flags)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, index: QModelIndex) callconv(.c) i32 `
    ///
    pub fn onFlags(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QModelIndex) callconv(.c) i32) void {
        qtc.QAbstractProxyModel_OnFlags(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFlags` instead
    ///
    pub const SuperFlags = superFlags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#flags)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.ItemFlag `
    ///
    pub fn superFlags(self: QAbstractProxyModel, _index: anytype) i32 {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return qtc.QAbstractProxyModel_SuperFlags(@ptrCast(self.ptr), @ptrCast(_index.ptr));
    }

    /// ### DEPRECATED: Use `setData` instead
    ///
    pub const SetData = setData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` value: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn setData(self: QAbstractProxyModel, _index: anytype, value: anytype, role: i32) bool {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QAbstractProxyModel_SetData(@ptrCast(self.ptr), @ptrCast(_index.ptr), @ptrCast(value.ptr), @bitCast(role));
    }

    /// ### DEPRECATED: Use `onSetData` instead
    ///
    pub const OnSetData = onSetData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, index: QModelIndex, value: QVariant, role: i32) callconv(.c) bool `
    ///
    pub fn onSetData(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QModelIndex, QVariant, i32) callconv(.c) bool) void {
        qtc.QAbstractProxyModel_OnSetData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetData` instead
    ///
    pub const SuperSetData = superSetData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` value: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn superSetData(self: QAbstractProxyModel, _index: anytype, value: anytype, role: i32) bool {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QAbstractProxyModel_SuperSetData(@ptrCast(self.ptr), @ptrCast(_index.ptr), @ptrCast(value.ptr), @bitCast(role));
    }

    /// ### DEPRECATED: Use `setItemData` instead
    ///
    pub const SetItemData = setItemData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` roles: ArrayMap_i32_QVariant `
    ///
    pub fn setItemData(self: QAbstractProxyModel, allocator: std.mem.Allocator, _index: anytype, roles: ArrayMap_i32_QVariant) bool {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        const roles_count = roles.count();
        const roles_keys = allocator.alloc(i32, roles_count) catch @panic("QAbstractProxyModel.setItemData: Memory allocation failed");
        defer allocator.free(roles_keys);
        const roles_values = allocator.alloc(QtC.QVariant, roles_count) catch @panic("QAbstractProxyModel.setItemData: Memory allocation failed");
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
        return qtc.QAbstractProxyModel_SetItemData(@ptrCast(self.ptr), @ptrCast(_index.ptr), roles_map);
    }

    /// ### DEPRECATED: Use `onSetItemData` instead
    ///
    pub const OnSetItemData = onSetItemData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, index: QModelIndex, roles: qtc.libqt_map (ArrayMap_i32_QVariant)) callconv(.c) bool `
    ///
    pub fn onSetItemData(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QModelIndex, qtc.libqt_map) callconv(.c) bool) void {
        qtc.QAbstractProxyModel_OnSetItemData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetItemData` instead
    ///
    pub const SuperSetItemData = superSetItemData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setItemData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` roles: ArrayMap_i32_QVariant `
    ///
    pub fn superSetItemData(self: QAbstractProxyModel, allocator: std.mem.Allocator, _index: anytype, roles: ArrayMap_i32_QVariant) bool {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        const roles_count = roles.count();
        const roles_keys = allocator.alloc(i32, roles_count) catch @panic("QAbstractProxyModel.setItemData: Memory allocation failed");
        defer allocator.free(roles_keys);
        const roles_values = allocator.alloc(QtC.QVariant, roles_count) catch @panic("QAbstractProxyModel.setItemData: Memory allocation failed");
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
        return qtc.QAbstractProxyModel_SuperSetItemData(@ptrCast(self.ptr), @ptrCast(_index.ptr), roles_map);
    }

    /// ### DEPRECATED: Use `setHeaderData` instead
    ///
    pub const SetHeaderData = setHeaderData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setHeaderData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` value: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn setHeaderData(self: QAbstractProxyModel, section: i32, orientation: i32, value: anytype, role: i32) bool {
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QAbstractProxyModel_SetHeaderData(@ptrCast(self.ptr), @bitCast(section), @bitCast(orientation), @ptrCast(value.ptr), @bitCast(role));
    }

    /// ### DEPRECATED: Use `onSetHeaderData` instead
    ///
    pub const OnSetHeaderData = onSetHeaderData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setHeaderData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, section: i32, orientation: qnamespace_enums.Orientation, value: QVariant, role: i32) callconv(.c) bool `
    ///
    pub fn onSetHeaderData(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, i32, i32, QVariant, i32) callconv(.c) bool) void {
        qtc.QAbstractProxyModel_OnSetHeaderData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetHeaderData` instead
    ///
    pub const SuperSetHeaderData = superSetHeaderData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#setHeaderData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` value: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn superSetHeaderData(self: QAbstractProxyModel, section: i32, orientation: i32, value: anytype, role: i32) bool {
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QAbstractProxyModel_SuperSetHeaderData(@ptrCast(self.ptr), @bitCast(section), @bitCast(orientation), @ptrCast(value.ptr), @bitCast(role));
    }

    /// ### DEPRECATED: Use `clearItemData` instead
    ///
    pub const ClearItemData = clearItemData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn clearItemData(self: QAbstractProxyModel, _index: anytype) bool {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return qtc.QAbstractProxyModel_ClearItemData(@ptrCast(self.ptr), @ptrCast(_index.ptr));
    }

    /// ### DEPRECATED: Use `onClearItemData` instead
    ///
    pub const OnClearItemData = onClearItemData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, index: QModelIndex) callconv(.c) bool `
    ///
    pub fn onClearItemData(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QModelIndex) callconv(.c) bool) void {
        qtc.QAbstractProxyModel_OnClearItemData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClearItemData` instead
    ///
    pub const SuperClearItemData = superClearItemData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#clearItemData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn superClearItemData(self: QAbstractProxyModel, _index: anytype) bool {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return qtc.QAbstractProxyModel_SuperClearItemData(@ptrCast(self.ptr), @ptrCast(_index.ptr));
    }

    /// ### DEPRECATED: Use `buddy` instead
    ///
    pub const Buddy = buddy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#buddy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn buddy(self: QAbstractProxyModel, _index: anytype) QModelIndex {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return .{ .ptr = qtc.QAbstractProxyModel_Buddy(@ptrCast(self.ptr), @ptrCast(_index.ptr)) };
    }

    /// ### DEPRECATED: Use `onBuddy` instead
    ///
    pub const OnBuddy = onBuddy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#buddy)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, index: QModelIndex) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onBuddy(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.QAbstractProxyModel_OnBuddy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superBuddy` instead
    ///
    pub const SuperBuddy = superBuddy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#buddy)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn superBuddy(self: QAbstractProxyModel, _index: anytype) QModelIndex {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return .{ .ptr = qtc.QAbstractProxyModel_SuperBuddy(@ptrCast(self.ptr), @ptrCast(_index.ptr)) };
    }

    /// ### DEPRECATED: Use `canFetchMore` instead
    ///
    pub const CanFetchMore = canFetchMore;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canFetchMore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn canFetchMore(self: QAbstractProxyModel, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QAbstractProxyModel_CanFetchMore(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onCanFetchMore` instead
    ///
    pub const OnCanFetchMore = onCanFetchMore;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canFetchMore)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onCanFetchMore(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QModelIndex) callconv(.c) bool) void {
        qtc.QAbstractProxyModel_OnCanFetchMore(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCanFetchMore` instead
    ///
    pub const SuperCanFetchMore = superCanFetchMore;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canFetchMore)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superCanFetchMore(self: QAbstractProxyModel, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QAbstractProxyModel_SuperCanFetchMore(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `fetchMore` instead
    ///
    pub const FetchMore = fetchMore;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#fetchMore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn fetchMore(self: QAbstractProxyModel, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QAbstractProxyModel_FetchMore(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onFetchMore` instead
    ///
    pub const OnFetchMore = onFetchMore;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#fetchMore)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, parent: QModelIndex) callconv(.c) void `
    ///
    pub fn onFetchMore(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QModelIndex) callconv(.c) void) void {
        qtc.QAbstractProxyModel_OnFetchMore(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFetchMore` instead
    ///
    pub const SuperFetchMore = superFetchMore;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#fetchMore)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superFetchMore(self: QAbstractProxyModel, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QAbstractProxyModel_SuperFetchMore(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `sort` instead
    ///
    pub const Sort = sort;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` column: i32 `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    pub fn sort(self: QAbstractProxyModel, column: i32, order: i32) void {
        qtc.QAbstractProxyModel_Sort(@ptrCast(self.ptr), @bitCast(column), @bitCast(order));
    }

    /// ### DEPRECATED: Use `onSort` instead
    ///
    pub const OnSort = onSort;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sort)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, column: i32, order: qnamespace_enums.SortOrder) callconv(.c) void `
    ///
    pub fn onSort(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, i32, i32) callconv(.c) void) void {
        qtc.QAbstractProxyModel_OnSort(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSort` instead
    ///
    pub const SuperSort = superSort;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sort)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` column: i32 `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    pub fn superSort(self: QAbstractProxyModel, column: i32, order: i32) void {
        qtc.QAbstractProxyModel_SuperSort(@ptrCast(self.ptr), @bitCast(column), @bitCast(order));
    }

    /// ### DEPRECATED: Use `span` instead
    ///
    pub const Span = span;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#span)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn span(self: QAbstractProxyModel, _index: anytype) QSize {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return .{ .ptr = qtc.QAbstractProxyModel_Span(@ptrCast(self.ptr), @ptrCast(_index.ptr)) };
    }

    /// ### DEPRECATED: Use `onSpan` instead
    ///
    pub const OnSpan = onSpan;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#span)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, index: QModelIndex) callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSpan(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QModelIndex) callconv(.c) QSize) void {
        qtc.QAbstractProxyModel_OnSpan(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSpan` instead
    ///
    pub const SuperSpan = superSpan;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#span)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn superSpan(self: QAbstractProxyModel, _index: anytype) QSize {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return .{ .ptr = qtc.QAbstractProxyModel_SuperSpan(@ptrCast(self.ptr), @ptrCast(_index.ptr)) };
    }

    /// ### DEPRECATED: Use `hasChildren` instead
    ///
    pub const HasChildren = hasChildren;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#hasChildren)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn hasChildren(self: QAbstractProxyModel, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QAbstractProxyModel_HasChildren(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onHasChildren` instead
    ///
    pub const OnHasChildren = onHasChildren;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#hasChildren)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onHasChildren(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QModelIndex) callconv(.c) bool) void {
        qtc.QAbstractProxyModel_OnHasChildren(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHasChildren` instead
    ///
    pub const SuperHasChildren = superHasChildren;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#hasChildren)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superHasChildren(self: QAbstractProxyModel, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QAbstractProxyModel_SuperHasChildren(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `sibling` instead
    ///
    pub const Sibling = sibling;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sibling)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` idx: QModelIndex `
    ///
    pub fn sibling(self: QAbstractProxyModel, row: i32, column: i32, idx: anytype) QModelIndex {
        comptime _ = @TypeOf(idx)._is_QModelIndex;
        return .{ .ptr = qtc.QAbstractProxyModel_Sibling(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(idx.ptr)) };
    }

    /// ### DEPRECATED: Use `onSibling` instead
    ///
    pub const OnSibling = onSibling;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sibling)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, row: i32, column: i32, idx: QModelIndex) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSibling(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, i32, i32, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.QAbstractProxyModel_OnSibling(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSibling` instead
    ///
    pub const SuperSibling = superSibling;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sibling)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` idx: QModelIndex `
    ///
    pub fn superSibling(self: QAbstractProxyModel, row: i32, column: i32, idx: anytype) QModelIndex {
        comptime _ = @TypeOf(idx)._is_QModelIndex;
        return .{ .ptr = qtc.QAbstractProxyModel_SuperSibling(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(idx.ptr)) };
    }

    /// ### DEPRECATED: Use `mimeData` instead
    ///
    pub const MimeData = mimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` indexes: []QModelIndex `
    ///
    pub fn mimeData(self: QAbstractProxyModel, indexes: []QModelIndex) QMimeData {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        return .{ .ptr = qtc.QAbstractProxyModel_MimeData(@ptrCast(self.ptr), indexes_list) };
    }

    /// ### DEPRECATED: Use `onMimeData` instead
    ///
    pub const OnMimeData = onMimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, indexes: qtc.libqt_list ([]QModelIndex)) callconv(.c) QMimeData `
    ///
    pub fn onMimeData(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, qtc.libqt_list) callconv(.c) QMimeData) void {
        qtc.QAbstractProxyModel_OnMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMimeData` instead
    ///
    pub const SuperMimeData = superMimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` indexes: []QModelIndex `
    ///
    pub fn superMimeData(self: QAbstractProxyModel, indexes: []QModelIndex) QMimeData {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        return .{ .ptr = qtc.QAbstractProxyModel_SuperMimeData(@ptrCast(self.ptr), indexes_list) };
    }

    /// ### DEPRECATED: Use `canDropMimeData` instead
    ///
    pub const CanDropMimeData = canDropMimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
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
    pub fn canDropMimeData(self: QAbstractProxyModel, _data: anytype, action: i32, row: i32, column: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_data)._is_QMimeData;
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QAbstractProxyModel_CanDropMimeData(@ptrCast(self.ptr), @ptrCast(_data.ptr), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onCanDropMimeData` instead
    ///
    pub const OnCanDropMimeData = onCanDropMimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, data: QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onCanDropMimeData(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QMimeData, i32, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.QAbstractProxyModel_OnCanDropMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCanDropMimeData` instead
    ///
    pub const SuperCanDropMimeData = superCanDropMimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#canDropMimeData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
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
    pub fn superCanDropMimeData(self: QAbstractProxyModel, _data: anytype, action: i32, row: i32, column: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_data)._is_QMimeData;
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QAbstractProxyModel_SuperCanDropMimeData(@ptrCast(self.ptr), @ptrCast(_data.ptr), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `dropMimeData` instead
    ///
    pub const DropMimeData = dropMimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#dropMimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
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
    pub fn dropMimeData(self: QAbstractProxyModel, _data: anytype, action: i32, row: i32, column: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_data)._is_QMimeData;
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QAbstractProxyModel_DropMimeData(@ptrCast(self.ptr), @ptrCast(_data.ptr), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onDropMimeData` instead
    ///
    pub const OnDropMimeData = onDropMimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#dropMimeData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, data: QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onDropMimeData(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QMimeData, i32, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.QAbstractProxyModel_OnDropMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDropMimeData` instead
    ///
    pub const SuperDropMimeData = superDropMimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#dropMimeData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
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
    pub fn superDropMimeData(self: QAbstractProxyModel, _data: anytype, action: i32, row: i32, column: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_data)._is_QMimeData;
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QAbstractProxyModel_SuperDropMimeData(@ptrCast(self.ptr), @ptrCast(_data.ptr), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `mimeTypes` instead
    ///
    pub const MimeTypes = mimeTypes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn mimeTypes(self: QAbstractProxyModel, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QAbstractProxyModel_MimeTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QAbstractProxyModel.mimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QAbstractProxyModel.mimeTypes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `onMimeTypes` instead
    ///
    pub const OnMimeTypes = onMimeTypes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeTypes)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8 `
    ///
    pub fn onMimeTypes(self: QAbstractProxyModel, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.QAbstractProxyModel_OnMimeTypes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMimeTypes` instead
    ///
    pub const SuperMimeTypes = superMimeTypes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#mimeTypes)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superMimeTypes(self: QAbstractProxyModel, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QAbstractProxyModel_SuperMimeTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QAbstractProxyModel.mimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QAbstractProxyModel.mimeTypes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `supportedDragActions` instead
    ///
    pub const SupportedDragActions = supportedDragActions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn supportedDragActions(self: QAbstractProxyModel) i32 {
        return qtc.QAbstractProxyModel_SupportedDragActions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSupportedDragActions` instead
    ///
    pub const OnSupportedDragActions = onSupportedDragActions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSupportedDragActions(self: QAbstractProxyModel, callback: *const fn () callconv(.c) i32) void {
        qtc.QAbstractProxyModel_OnSupportedDragActions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSupportedDragActions` instead
    ///
    pub const SuperSupportedDragActions = superSupportedDragActions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDragActions)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn superSupportedDragActions(self: QAbstractProxyModel) i32 {
        return qtc.QAbstractProxyModel_SuperSupportedDragActions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `supportedDropActions` instead
    ///
    pub const SupportedDropActions = supportedDropActions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDropActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn supportedDropActions(self: QAbstractProxyModel) i32 {
        return qtc.QAbstractProxyModel_SupportedDropActions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSupportedDropActions` instead
    ///
    pub const OnSupportedDropActions = onSupportedDropActions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDropActions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSupportedDropActions(self: QAbstractProxyModel, callback: *const fn () callconv(.c) i32) void {
        qtc.QAbstractProxyModel_OnSupportedDropActions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSupportedDropActions` instead
    ///
    pub const SuperSupportedDropActions = superSupportedDropActions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#supportedDropActions)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn superSupportedDropActions(self: QAbstractProxyModel) i32 {
        return qtc.QAbstractProxyModel_SuperSupportedDropActions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `roleNames` instead
    ///
    pub const RoleNames = roleNames;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn roleNames(self: QAbstractProxyModel, allocator: std.mem.Allocator) Map_i32_u8 {
        const _map: qtc.libqt_map = qtc.QAbstractProxyModel_RoleNames(@ptrCast(self.ptr));
        var _ret: Map_i32_u8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("QAbstractProxyModel.roleNames: Total capacity allocation failed");
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
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("QAbstractProxyModel.roleNames: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.putAssumeCapacity(_key, _value_slice);
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `onRoleNames` instead
    ///
    pub const OnRoleNames = onRoleNames;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_map `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of Map_i32_u8 `
    ///
    pub fn onRoleNames(self: QAbstractProxyModel, callback: *const fn () callconv(.c) qtc.libqt_map) void {
        qtc.QAbstractProxyModel_OnRoleNames(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRoleNames` instead
    ///
    pub const SuperRoleNames = superRoleNames;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#roleNames)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superRoleNames(self: QAbstractProxyModel, allocator: std.mem.Allocator) Map_i32_u8 {
        const _map: qtc.libqt_map = qtc.QAbstractProxyModel_SuperRoleNames(@ptrCast(self.ptr));
        var _ret: Map_i32_u8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("QAbstractProxyModel.roleNames: Total capacity allocation failed");
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
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("QAbstractProxyModel.roleNames: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.putAssumeCapacity(_key, _value_slice);
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `createSourceIndex` instead
    ///
    pub const CreateSourceIndex = createSourceIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` col: i32 `
    ///
    /// ` internalPtr: ?*anyopaque `
    ///
    pub fn createSourceIndex(self: QAbstractProxyModel, row: i32, col: i32, internalPtr: ?*anyopaque) QModelIndex {
        return .{ .ptr = qtc.QAbstractProxyModel_CreateSourceIndex(@ptrCast(self.ptr), @bitCast(row), @bitCast(col), @ptrCast(internalPtr)) };
    }

    /// ### DEPRECATED: Use `onCreateSourceIndex` instead
    ///
    pub const OnCreateSourceIndex = onCreateSourceIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, row: i32, col: i32, internalPtr: ?*anyopaque) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onCreateSourceIndex(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, i32, i32, ?*anyopaque) callconv(.c) QModelIndex) void {
        qtc.QAbstractProxyModel_OnCreateSourceIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCreateSourceIndex` instead
    ///
    pub const SuperCreateSourceIndex = superCreateSourceIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#createSourceIndex)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` col: i32 `
    ///
    /// ` internalPtr: ?*anyopaque `
    ///
    pub fn superCreateSourceIndex(self: QAbstractProxyModel, row: i32, col: i32, internalPtr: ?*anyopaque) QModelIndex {
        return .{ .ptr = qtc.QAbstractProxyModel_SuperCreateSourceIndex(@ptrCast(self.ptr), @bitCast(row), @bitCast(col), @ptrCast(internalPtr)) };
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstractProxyModel.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstractProxyModel.tr3: Memory allocation failed");
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn hasIndex(self: QAbstractProxyModel, row: i32, column: i32) bool {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` row: i32 `
    ///
    pub fn insertRow(self: QAbstractProxyModel, row: i32) bool {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` column: i32 `
    ///
    pub fn insertColumn(self: QAbstractProxyModel, column: i32) bool {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` row: i32 `
    ///
    pub fn removeRow(self: QAbstractProxyModel, row: i32) bool {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` column: i32 `
    ///
    pub fn removeColumn(self: QAbstractProxyModel, column: i32) bool {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceRow: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn moveRow(self: QAbstractProxyModel, sourceParent: anytype, sourceRow: i32, destinationParent: anytype, destinationChild: i32) bool {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceColumn: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn moveColumn(self: QAbstractProxyModel, sourceParent: anytype, sourceColumn: i32, destinationParent: anytype, destinationChild: i32) bool {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn checkIndex(self: QAbstractProxyModel, _index: anytype) bool {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` topLeft: QModelIndex `
    ///
    /// ` bottomRight: QModelIndex `
    ///
    pub fn dataChanged(self: QAbstractProxyModel, topLeft: anytype, bottomRight: anytype) void {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, topLeft: QModelIndex, bottomRight: QModelIndex) callconv(.c) void `
    ///
    pub fn onDataChanged(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QModelIndex, QModelIndex) callconv(.c) void) void {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn headerDataChanged(self: QAbstractProxyModel, orientation: i32, first: i32, last: i32) void {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, orientation: qnamespace_enums.Orientation, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onHeaderDataChanged(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, i32, i32, i32) callconv(.c) void) void {
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
    /// ` self: QAbstractProxyModel `
    ///
    pub fn layoutChanged(self: QAbstractProxyModel) void {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel) callconv(.c) void `
    ///
    pub fn onLayoutChanged(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel) callconv(.c) void) void {
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
    /// ` self: QAbstractProxyModel `
    ///
    pub fn layoutAboutToBeChanged(self: QAbstractProxyModel) void {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel) callconv(.c) void `
    ///
    pub fn onLayoutAboutToBeChanged(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel) callconv(.c) void) void {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn hasIndex3(self: QAbstractProxyModel, row: i32, column: i32, _parent: anytype) bool {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn insertRow2(self: QAbstractProxyModel, row: i32, _parent: anytype) bool {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn insertColumn2(self: QAbstractProxyModel, column: i32, _parent: anytype) bool {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn removeRow2(self: QAbstractProxyModel, row: i32, _parent: anytype) bool {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn removeColumn2(self: QAbstractProxyModel, column: i32, _parent: anytype) bool {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` options: flag of qabstractitemmodel_enums.CheckIndexOption `
    ///
    pub fn checkIndex2(self: QAbstractProxyModel, _index: anytype, options: i32) bool {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` topLeft: QModelIndex `
    ///
    /// ` bottomRight: QModelIndex `
    ///
    /// ` roles: []i32 `
    ///
    pub fn dataChanged3(self: QAbstractProxyModel, topLeft: anytype, bottomRight: anytype, roles: []i32) void {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, topLeft: QModelIndex, bottomRight: QModelIndex, roles: qtc.libqt_list ([]i32)) callconv(.c) void `
    ///
    pub fn onDataChanged3(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QModelIndex, QModelIndex, qtc.libqt_list) callconv(.c) void) void {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` parents: []QPersistentModelIndex `
    ///
    pub fn layoutChanged1(self: QAbstractProxyModel, parents: []QPersistentModelIndex) void {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, parents: qtc.libqt_list ([]QPersistentModelIndex)) callconv(.c) void `
    ///
    pub fn onLayoutChanged1(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, qtc.libqt_list) callconv(.c) void) void {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` parents: []QPersistentModelIndex `
    ///
    /// ` hint: qabstractitemmodel_enums.LayoutChangeHint `
    ///
    pub fn layoutChanged2(self: QAbstractProxyModel, parents: []QPersistentModelIndex, hint: i32) void {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, parents: qtc.libqt_list ([]QPersistentModelIndex), hint: qabstractitemmodel_enums.LayoutChangeHint) callconv(.c) void `
    ///
    pub fn onLayoutChanged2(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, qtc.libqt_list, i32) callconv(.c) void) void {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` parents: []QPersistentModelIndex `
    ///
    pub fn layoutAboutToBeChanged1(self: QAbstractProxyModel, parents: []QPersistentModelIndex) void {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, parents: qtc.libqt_list ([]QPersistentModelIndex)) callconv(.c) void `
    ///
    pub fn onLayoutAboutToBeChanged1(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, qtc.libqt_list) callconv(.c) void) void {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` parents: []QPersistentModelIndex `
    ///
    /// ` hint: qabstractitemmodel_enums.LayoutChangeHint `
    ///
    pub fn layoutAboutToBeChanged2(self: QAbstractProxyModel, parents: []QPersistentModelIndex, hint: i32) void {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, parents: qtc.libqt_list ([]QPersistentModelIndex), hint: qabstractitemmodel_enums.LayoutChangeHint) callconv(.c) void `
    ///
    pub fn onLayoutAboutToBeChanged2(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, qtc.libqt_list, i32) callconv(.c) void) void {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QAbstractProxyModel, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstractProxyModel.objectName: Memory allocation failed");
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QAbstractProxyModel, name: []const u8) void {
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
    /// ` self: QAbstractProxyModel `
    ///
    pub fn isWidgetType(self: QAbstractProxyModel) bool {
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
    /// ` self: QAbstractProxyModel `
    ///
    pub fn isWindowType(self: QAbstractProxyModel) bool {
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
    /// ` self: QAbstractProxyModel `
    ///
    pub fn isQuickItemType(self: QAbstractProxyModel) bool {
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
    /// ` self: QAbstractProxyModel `
    ///
    pub fn signalsBlocked(self: QAbstractProxyModel) bool {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QAbstractProxyModel, b: bool) bool {
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
    /// ` self: QAbstractProxyModel `
    ///
    pub fn thread(self: QAbstractProxyModel) QThread {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QAbstractProxyModel, _thread: anytype) bool {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QAbstractProxyModel, interval: i32) i32 {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QAbstractProxyModel, time: i64) i32 {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QAbstractProxyModel, id: i32) void {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QAbstractProxyModel, id: i32) void {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QAbstractProxyModel, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QAbstractProxyModel.children: Memory allocation failed");
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QAbstractProxyModel, _parent: anytype) void {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QAbstractProxyModel, filterObj: anytype) void {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QAbstractProxyModel, obj: anytype) void {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QAbstractProxyModel, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QAbstractProxyModel `
    ///
    pub fn disconnect3(self: QAbstractProxyModel) bool {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QAbstractProxyModel, receiver: anytype) bool {
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
    /// ` self: QAbstractProxyModel `
    ///
    pub fn dumpObjectTree(self: QAbstractProxyModel) void {
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
    /// ` self: QAbstractProxyModel `
    ///
    pub fn dumpObjectInfo(self: QAbstractProxyModel) void {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QAbstractProxyModel, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QAbstractProxyModel, name: [:0]const u8) QVariant {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QAbstractProxyModel, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QAbstractProxyModel.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QAbstractProxyModel.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QAbstractProxyModel `
    ///
    pub fn bindingStorage(self: QAbstractProxyModel) QBindingStorage {
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
    /// ` self: QAbstractProxyModel `
    ///
    pub fn bindingStorage2(self: QAbstractProxyModel) QBindingStorage {
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
    /// ` self: QAbstractProxyModel `
    ///
    pub fn destroyed(self: QAbstractProxyModel) void {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel) callconv(.c) void) void {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QAbstractProxyModel, classname: [:0]const u8) bool {
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
    /// ` self: QAbstractProxyModel `
    ///
    pub fn deleteLater(self: QAbstractProxyModel) void {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QAbstractProxyModel, interval: i32, timerType: i32) i32 {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QAbstractProxyModel, time: i64, timerType: i32) i32 {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QAbstractProxyModel, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QAbstractProxyModel, signal: [:0]const u8) bool {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QAbstractProxyModel, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QAbstractProxyModel, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QAbstractProxyModel, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QAbstractProxyModel, param1: anytype) void {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `index` instead
    ///
    pub const Index = index;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#index)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn index(self: QAbstractProxyModel, row: i32, column: i32, _parent: anytype) QModelIndex {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return .{ .ptr = qtc.QAbstractProxyModel_Index(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `superIndex` instead
    ///
    pub const SuperIndex = superIndex;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#index)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superIndex(self: QAbstractProxyModel, row: i32, column: i32, _parent: anytype) QModelIndex {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return .{ .ptr = qtc.QAbstractProxyModel_SuperIndex(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `onIndex` instead
    ///
    pub const OnIndex = onIndex;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#index)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractProxyModel`
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, row: i32, column: i32, parent: QModelIndex) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onIndex(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, i32, i32, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.QAbstractProxyModel_OnIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` child: QModelIndex `
    ///
    pub fn parent(self: QAbstractProxyModel, child: anytype) QModelIndex {
        comptime _ = @TypeOf(child)._is_QModelIndex;
        return .{ .ptr = qtc.QAbstractProxyModel_Parent(@ptrCast(self.ptr), @ptrCast(child.ptr)) };
    }

    /// ### DEPRECATED: Use `superParent` instead
    ///
    pub const SuperParent = superParent;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` child: QModelIndex `
    ///
    pub fn superParent(self: QAbstractProxyModel, child: anytype) QModelIndex {
        comptime _ = @TypeOf(child)._is_QModelIndex;
        return .{ .ptr = qtc.QAbstractProxyModel_SuperParent(@ptrCast(self.ptr), @ptrCast(child.ptr)) };
    }

    /// ### DEPRECATED: Use `onParent` instead
    ///
    pub const OnParent = onParent;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#parent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractProxyModel`
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, child: QModelIndex) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onParent(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.QAbstractProxyModel_OnParent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rowCount` instead
    ///
    pub const RowCount = rowCount;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowCount)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn rowCount(self: QAbstractProxyModel, _parent: anytype) i32 {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QAbstractProxyModel_RowCount(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `superRowCount` instead
    ///
    pub const SuperRowCount = superRowCount;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowCount)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superRowCount(self: QAbstractProxyModel, _parent: anytype) i32 {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QAbstractProxyModel_SuperRowCount(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onRowCount` instead
    ///
    pub const OnRowCount = onRowCount;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowCount)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractProxyModel`
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, parent: QModelIndex) callconv(.c) i32 `
    ///
    pub fn onRowCount(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QModelIndex) callconv(.c) i32) void {
        qtc.QAbstractProxyModel_OnRowCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `columnCount` instead
    ///
    pub const ColumnCount = columnCount;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn columnCount(self: QAbstractProxyModel, _parent: anytype) i32 {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QAbstractProxyModel_ColumnCount(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `superColumnCount` instead
    ///
    pub const SuperColumnCount = superColumnCount;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superColumnCount(self: QAbstractProxyModel, _parent: anytype) i32 {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QAbstractProxyModel_SuperColumnCount(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onColumnCount` instead
    ///
    pub const OnColumnCount = onColumnCount;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnCount)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractProxyModel`
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, parent: QModelIndex) callconv(.c) i32 `
    ///
    pub fn onColumnCount(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QModelIndex) callconv(.c) i32) void {
        qtc.QAbstractProxyModel_OnColumnCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn insertRows(self: QAbstractProxyModel, row: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QAbstractProxyModel_InsertRows(@ptrCast(self.ptr), @bitCast(row), @bitCast(count), @ptrCast(_parent.ptr));
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superInsertRows(self: QAbstractProxyModel, row: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QAbstractProxyModel_SuperInsertRows(@ptrCast(self.ptr), @bitCast(row), @bitCast(count), @ptrCast(_parent.ptr));
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
    /// ` self: QAbstractProxyModel`
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, row: i32, count: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onInsertRows(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.QAbstractProxyModel_OnInsertRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn insertColumns(self: QAbstractProxyModel, column: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QAbstractProxyModel_InsertColumns(@ptrCast(self.ptr), @bitCast(column), @bitCast(count), @ptrCast(_parent.ptr));
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superInsertColumns(self: QAbstractProxyModel, column: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QAbstractProxyModel_SuperInsertColumns(@ptrCast(self.ptr), @bitCast(column), @bitCast(count), @ptrCast(_parent.ptr));
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
    /// ` self: QAbstractProxyModel`
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, column: i32, count: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onInsertColumns(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.QAbstractProxyModel_OnInsertColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn removeRows(self: QAbstractProxyModel, row: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QAbstractProxyModel_RemoveRows(@ptrCast(self.ptr), @bitCast(row), @bitCast(count), @ptrCast(_parent.ptr));
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superRemoveRows(self: QAbstractProxyModel, row: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QAbstractProxyModel_SuperRemoveRows(@ptrCast(self.ptr), @bitCast(row), @bitCast(count), @ptrCast(_parent.ptr));
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
    /// ` self: QAbstractProxyModel`
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, row: i32, count: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onRemoveRows(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.QAbstractProxyModel_OnRemoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn removeColumns(self: QAbstractProxyModel, column: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QAbstractProxyModel_RemoveColumns(@ptrCast(self.ptr), @bitCast(column), @bitCast(count), @ptrCast(_parent.ptr));
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superRemoveColumns(self: QAbstractProxyModel, column: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.QAbstractProxyModel_SuperRemoveColumns(@ptrCast(self.ptr), @bitCast(column), @bitCast(count), @ptrCast(_parent.ptr));
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
    /// ` self: QAbstractProxyModel`
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, column: i32, count: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onRemoveColumns(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.QAbstractProxyModel_OnRemoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractProxyModel `
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
    pub fn moveRows(self: QAbstractProxyModel, sourceParent: anytype, sourceRow: i32, count: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QAbstractProxyModel_MoveRows(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceRow), @bitCast(count), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
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
    /// ` self: QAbstractProxyModel `
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
    pub fn superMoveRows(self: QAbstractProxyModel, sourceParent: anytype, sourceRow: i32, count: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QAbstractProxyModel_SuperMoveRows(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceRow), @bitCast(count), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
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
    /// ` self: QAbstractProxyModel`
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, sourceParent: QModelIndex, sourceRow: i32, count: i32, destinationParent: QModelIndex, destinationChild: i32) callconv(.c) bool `
    ///
    pub fn onMoveRows(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) bool) void {
        qtc.QAbstractProxyModel_OnMoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractProxyModel `
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
    pub fn moveColumns(self: QAbstractProxyModel, sourceParent: anytype, sourceColumn: i32, count: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QAbstractProxyModel_MoveColumns(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceColumn), @bitCast(count), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
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
    /// ` self: QAbstractProxyModel `
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
    pub fn superMoveColumns(self: QAbstractProxyModel, sourceParent: anytype, sourceColumn: i32, count: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QAbstractProxyModel_SuperMoveColumns(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceColumn), @bitCast(count), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
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
    /// ` self: QAbstractProxyModel`
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, sourceParent: QModelIndex, sourceColumn: i32, count: i32, destinationParent: QModelIndex, destinationChild: i32) callconv(.c) bool `
    ///
    pub fn onMoveColumns(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) bool) void {
        qtc.QAbstractProxyModel_OnMoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractProxyModel `
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
    pub fn match(self: QAbstractProxyModel, allocator: std.mem.Allocator, start: anytype, role: i32, value: anytype, hits: i32, _flags: i32) []QModelIndex {
        comptime _ = @TypeOf(start)._is_QModelIndex;
        comptime _ = @TypeOf(value)._is_QVariant;
        const _arr: qtc.libqt_list = qtc.QAbstractProxyModel_Match(@ptrCast(self.ptr), @ptrCast(start.ptr), @bitCast(role), @ptrCast(value.ptr), @bitCast(hits), @bitCast(_flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("QAbstractProxyModel.match: Memory allocation failed");
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
    /// ` self: QAbstractProxyModel `
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
    pub fn superMatch(self: QAbstractProxyModel, allocator: std.mem.Allocator, start: anytype, role: i32, value: anytype, hits: i32, _flags: i32) []QModelIndex {
        comptime _ = @TypeOf(start)._is_QModelIndex;
        comptime _ = @TypeOf(value)._is_QVariant;
        const _arr: qtc.libqt_list = qtc.QAbstractProxyModel_SuperMatch(@ptrCast(self.ptr), @ptrCast(start.ptr), @bitCast(role), @ptrCast(value.ptr), @bitCast(hits), @bitCast(_flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("QAbstractProxyModel.match: Memory allocation failed");
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
    /// ` self: QAbstractProxyModel`
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, start: QModelIndex, role: i32, value: QVariant, hits: i32, flags: flag of qnamespace_enums.MatchFlag) callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QModelIndex `
    ///
    pub fn onMatch(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QModelIndex, i32, QVariant, i32, i32) callconv(.c) qtc.libqt_list) void {
        qtc.QAbstractProxyModel_OnMatch(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` roleDataSpan: QModelRoleDataSpan `
    ///
    pub fn multiData(self: QAbstractProxyModel, _index: anytype, roleDataSpan: anytype) void {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        comptime _ = @TypeOf(roleDataSpan)._is_QModelRoleDataSpan;
        qtc.QAbstractProxyModel_MultiData(@ptrCast(self.ptr), @ptrCast(_index.ptr), @ptrCast(roleDataSpan.ptr));
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` roleDataSpan: QModelRoleDataSpan `
    ///
    pub fn superMultiData(self: QAbstractProxyModel, _index: anytype, roleDataSpan: anytype) void {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        comptime _ = @TypeOf(roleDataSpan)._is_QModelRoleDataSpan;
        qtc.QAbstractProxyModel_SuperMultiData(@ptrCast(self.ptr), @ptrCast(_index.ptr), @ptrCast(roleDataSpan.ptr));
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
    /// ` self: QAbstractProxyModel`
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, index: QModelIndex, roleDataSpan: QModelRoleDataSpan) callconv(.c) void `
    ///
    pub fn onMultiData(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QModelIndex, QModelRoleDataSpan) callconv(.c) void) void {
        qtc.QAbstractProxyModel_OnMultiData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractProxyModel `
    ///
    pub fn resetInternalData(self: QAbstractProxyModel) void {
        qtc.QAbstractProxyModel_ResetInternalData(@ptrCast(self.ptr));
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
    /// ` self: QAbstractProxyModel `
    ///
    pub fn superResetInternalData(self: QAbstractProxyModel) void {
        qtc.QAbstractProxyModel_SuperResetInternalData(@ptrCast(self.ptr));
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
    /// ` self: QAbstractProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onResetInternalData(self: QAbstractProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.QAbstractProxyModel_OnResetInternalData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QAbstractProxyModel, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QAbstractProxyModel_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QAbstractProxyModel, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QAbstractProxyModel_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QAbstractProxyModel`
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QEvent) callconv(.c) bool) void {
        qtc.QAbstractProxyModel_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QAbstractProxyModel, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QAbstractProxyModel_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QAbstractProxyModel, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QAbstractProxyModel_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QAbstractProxyModel`
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QObject, QEvent) callconv(.c) bool) void {
        qtc.QAbstractProxyModel_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QAbstractProxyModel, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QAbstractProxyModel_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QAbstractProxyModel, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QAbstractProxyModel_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QAbstractProxyModel`
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QTimerEvent) callconv(.c) void) void {
        qtc.QAbstractProxyModel_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QAbstractProxyModel, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QAbstractProxyModel_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QAbstractProxyModel, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QAbstractProxyModel_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QAbstractProxyModel`
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QChildEvent) callconv(.c) void) void {
        qtc.QAbstractProxyModel_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QAbstractProxyModel, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QAbstractProxyModel_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QAbstractProxyModel, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QAbstractProxyModel_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QAbstractProxyModel`
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QEvent) callconv(.c) void) void {
        qtc.QAbstractProxyModel_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QAbstractProxyModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QAbstractProxyModel_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QAbstractProxyModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QAbstractProxyModel_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QAbstractProxyModel`
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QMetaMethod) callconv(.c) void) void {
        qtc.QAbstractProxyModel_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QAbstractProxyModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QAbstractProxyModel_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QAbstractProxyModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QAbstractProxyModel_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QAbstractProxyModel`
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QMetaMethod) callconv(.c) void) void {
        qtc.QAbstractProxyModel_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn createIndex(self: QAbstractProxyModel, row: i32, column: i32) QModelIndex {
        return .{ .ptr = qtc.QAbstractProxyModel_CreateIndex(@ptrCast(self.ptr), @bitCast(row), @bitCast(column)) };
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn superCreateIndex(self: QAbstractProxyModel, row: i32, column: i32) QModelIndex {
        return .{ .ptr = qtc.QAbstractProxyModel_SuperCreateIndex(@ptrCast(self.ptr), @bitCast(row), @bitCast(column)) };
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
    /// ` self: QAbstractProxyModel`
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, row: i32, column: i32) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onCreateIndex(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, i32, i32) callconv(.c) QModelIndex) void {
        qtc.QAbstractProxyModel_OnCreateIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` indexes: []QModelIndex `
    ///
    /// ` stream: QDataStream `
    ///
    pub fn encodeData(self: QAbstractProxyModel, indexes: []QModelIndex, stream: anytype) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        comptime _ = @TypeOf(stream)._is_QDataStream;
        qtc.QAbstractProxyModel_EncodeData(@ptrCast(self.ptr), indexes_list, @ptrCast(stream.ptr));
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` indexes: []QModelIndex `
    ///
    /// ` stream: QDataStream `
    ///
    pub fn superEncodeData(self: QAbstractProxyModel, indexes: []QModelIndex, stream: anytype) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        comptime _ = @TypeOf(stream)._is_QDataStream;
        qtc.QAbstractProxyModel_SuperEncodeData(@ptrCast(self.ptr), indexes_list, @ptrCast(stream.ptr));
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
    /// ` self: QAbstractProxyModel`
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, indexes: qtc.libqt_list ([]QModelIndex), stream: QDataStream) callconv(.c) void `
    ///
    pub fn onEncodeData(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, qtc.libqt_list, QDataStream) callconv(.c) void) void {
        qtc.QAbstractProxyModel_OnEncodeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` stream: QDataStream `
    ///
    pub fn decodeData(self: QAbstractProxyModel, row: i32, column: i32, _parent: anytype, stream: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        comptime _ = @TypeOf(stream)._is_QDataStream;
        return qtc.QAbstractProxyModel_DecodeData(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(_parent.ptr), @ptrCast(stream.ptr));
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` stream: QDataStream `
    ///
    pub fn superDecodeData(self: QAbstractProxyModel, row: i32, column: i32, _parent: anytype, stream: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        comptime _ = @TypeOf(stream)._is_QDataStream;
        return qtc.QAbstractProxyModel_SuperDecodeData(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(_parent.ptr), @ptrCast(stream.ptr));
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
    /// ` self: QAbstractProxyModel`
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, row: i32, column: i32, parent: QModelIndex, stream: QDataStream) callconv(.c) bool `
    ///
    pub fn onDecodeData(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, i32, i32, QModelIndex, QDataStream) callconv(.c) bool) void {
        qtc.QAbstractProxyModel_OnDecodeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn beginInsertRows(self: QAbstractProxyModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QAbstractProxyModel_BeginInsertRows(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn superBeginInsertRows(self: QAbstractProxyModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QAbstractProxyModel_SuperBeginInsertRows(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
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
    /// ` self: QAbstractProxyModel`
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onBeginInsertRows(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractProxyModel_OnBeginInsertRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractProxyModel `
    ///
    pub fn endInsertRows(self: QAbstractProxyModel) void {
        qtc.QAbstractProxyModel_EndInsertRows(@ptrCast(self.ptr));
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
    /// ` self: QAbstractProxyModel `
    ///
    pub fn superEndInsertRows(self: QAbstractProxyModel) void {
        qtc.QAbstractProxyModel_SuperEndInsertRows(@ptrCast(self.ptr));
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
    /// ` self: QAbstractProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEndInsertRows(self: QAbstractProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.QAbstractProxyModel_OnEndInsertRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn beginRemoveRows(self: QAbstractProxyModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QAbstractProxyModel_BeginRemoveRows(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn superBeginRemoveRows(self: QAbstractProxyModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QAbstractProxyModel_SuperBeginRemoveRows(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
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
    /// ` self: QAbstractProxyModel`
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onBeginRemoveRows(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractProxyModel_OnBeginRemoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractProxyModel `
    ///
    pub fn endRemoveRows(self: QAbstractProxyModel) void {
        qtc.QAbstractProxyModel_EndRemoveRows(@ptrCast(self.ptr));
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
    /// ` self: QAbstractProxyModel `
    ///
    pub fn superEndRemoveRows(self: QAbstractProxyModel) void {
        qtc.QAbstractProxyModel_SuperEndRemoveRows(@ptrCast(self.ptr));
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
    /// ` self: QAbstractProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEndRemoveRows(self: QAbstractProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.QAbstractProxyModel_OnEndRemoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractProxyModel `
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
    pub fn beginMoveRows(self: QAbstractProxyModel, sourceParent: anytype, sourceFirst: i32, sourceLast: i32, destinationParent: anytype, destinationRow: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QAbstractProxyModel_BeginMoveRows(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent.ptr), @bitCast(destinationRow));
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
    /// ` self: QAbstractProxyModel `
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
    pub fn superBeginMoveRows(self: QAbstractProxyModel, sourceParent: anytype, sourceFirst: i32, sourceLast: i32, destinationParent: anytype, destinationRow: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QAbstractProxyModel_SuperBeginMoveRows(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent.ptr), @bitCast(destinationRow));
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
    /// ` self: QAbstractProxyModel`
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, sourceParent: QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QModelIndex, destinationRow: i32) callconv(.c) bool `
    ///
    pub fn onBeginMoveRows(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) bool) void {
        qtc.QAbstractProxyModel_OnBeginMoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractProxyModel `
    ///
    pub fn endMoveRows(self: QAbstractProxyModel) void {
        qtc.QAbstractProxyModel_EndMoveRows(@ptrCast(self.ptr));
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
    /// ` self: QAbstractProxyModel `
    ///
    pub fn superEndMoveRows(self: QAbstractProxyModel) void {
        qtc.QAbstractProxyModel_SuperEndMoveRows(@ptrCast(self.ptr));
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
    /// ` self: QAbstractProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEndMoveRows(self: QAbstractProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.QAbstractProxyModel_OnEndMoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn beginInsertColumns(self: QAbstractProxyModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QAbstractProxyModel_BeginInsertColumns(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn superBeginInsertColumns(self: QAbstractProxyModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QAbstractProxyModel_SuperBeginInsertColumns(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
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
    /// ` self: QAbstractProxyModel`
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onBeginInsertColumns(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractProxyModel_OnBeginInsertColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractProxyModel `
    ///
    pub fn endInsertColumns(self: QAbstractProxyModel) void {
        qtc.QAbstractProxyModel_EndInsertColumns(@ptrCast(self.ptr));
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
    /// ` self: QAbstractProxyModel `
    ///
    pub fn superEndInsertColumns(self: QAbstractProxyModel) void {
        qtc.QAbstractProxyModel_SuperEndInsertColumns(@ptrCast(self.ptr));
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
    /// ` self: QAbstractProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEndInsertColumns(self: QAbstractProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.QAbstractProxyModel_OnEndInsertColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn beginRemoveColumns(self: QAbstractProxyModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QAbstractProxyModel_BeginRemoveColumns(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn superBeginRemoveColumns(self: QAbstractProxyModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QAbstractProxyModel_SuperBeginRemoveColumns(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
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
    /// ` self: QAbstractProxyModel`
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onBeginRemoveColumns(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QAbstractProxyModel_OnBeginRemoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractProxyModel `
    ///
    pub fn endRemoveColumns(self: QAbstractProxyModel) void {
        qtc.QAbstractProxyModel_EndRemoveColumns(@ptrCast(self.ptr));
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
    /// ` self: QAbstractProxyModel `
    ///
    pub fn superEndRemoveColumns(self: QAbstractProxyModel) void {
        qtc.QAbstractProxyModel_SuperEndRemoveColumns(@ptrCast(self.ptr));
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
    /// ` self: QAbstractProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEndRemoveColumns(self: QAbstractProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.QAbstractProxyModel_OnEndRemoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractProxyModel `
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
    pub fn beginMoveColumns(self: QAbstractProxyModel, sourceParent: anytype, sourceFirst: i32, sourceLast: i32, destinationParent: anytype, destinationColumn: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QAbstractProxyModel_BeginMoveColumns(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent.ptr), @bitCast(destinationColumn));
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
    /// ` self: QAbstractProxyModel `
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
    pub fn superBeginMoveColumns(self: QAbstractProxyModel, sourceParent: anytype, sourceFirst: i32, sourceLast: i32, destinationParent: anytype, destinationColumn: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.QAbstractProxyModel_SuperBeginMoveColumns(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent.ptr), @bitCast(destinationColumn));
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
    /// ` self: QAbstractProxyModel`
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, sourceParent: QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QModelIndex, destinationColumn: i32) callconv(.c) bool `
    ///
    pub fn onBeginMoveColumns(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) bool) void {
        qtc.QAbstractProxyModel_OnBeginMoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractProxyModel `
    ///
    pub fn endMoveColumns(self: QAbstractProxyModel) void {
        qtc.QAbstractProxyModel_EndMoveColumns(@ptrCast(self.ptr));
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
    /// ` self: QAbstractProxyModel `
    ///
    pub fn superEndMoveColumns(self: QAbstractProxyModel) void {
        qtc.QAbstractProxyModel_SuperEndMoveColumns(@ptrCast(self.ptr));
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
    /// ` self: QAbstractProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEndMoveColumns(self: QAbstractProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.QAbstractProxyModel_OnEndMoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractProxyModel `
    ///
    pub fn beginResetModel(self: QAbstractProxyModel) void {
        qtc.QAbstractProxyModel_BeginResetModel(@ptrCast(self.ptr));
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
    /// ` self: QAbstractProxyModel `
    ///
    pub fn superBeginResetModel(self: QAbstractProxyModel) void {
        qtc.QAbstractProxyModel_SuperBeginResetModel(@ptrCast(self.ptr));
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
    /// ` self: QAbstractProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onBeginResetModel(self: QAbstractProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.QAbstractProxyModel_OnBeginResetModel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractProxyModel `
    ///
    pub fn endResetModel(self: QAbstractProxyModel) void {
        qtc.QAbstractProxyModel_EndResetModel(@ptrCast(self.ptr));
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
    /// ` self: QAbstractProxyModel `
    ///
    pub fn superEndResetModel(self: QAbstractProxyModel) void {
        qtc.QAbstractProxyModel_SuperEndResetModel(@ptrCast(self.ptr));
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
    /// ` self: QAbstractProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEndResetModel(self: QAbstractProxyModel, callback: *const fn () callconv(.c) void) void {
        qtc.QAbstractProxyModel_OnEndResetModel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` from: QModelIndex `
    ///
    /// ` to: QModelIndex `
    ///
    pub fn changePersistentIndex(self: QAbstractProxyModel, from: anytype, to: anytype) void {
        comptime _ = @TypeOf(from)._is_QModelIndex;
        comptime _ = @TypeOf(to)._is_QModelIndex;
        qtc.QAbstractProxyModel_ChangePersistentIndex(@ptrCast(self.ptr), @ptrCast(from.ptr), @ptrCast(to.ptr));
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` from: QModelIndex `
    ///
    /// ` to: QModelIndex `
    ///
    pub fn superChangePersistentIndex(self: QAbstractProxyModel, from: anytype, to: anytype) void {
        comptime _ = @TypeOf(from)._is_QModelIndex;
        comptime _ = @TypeOf(to)._is_QModelIndex;
        qtc.QAbstractProxyModel_SuperChangePersistentIndex(@ptrCast(self.ptr), @ptrCast(from.ptr), @ptrCast(to.ptr));
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
    /// ` self: QAbstractProxyModel`
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, from: QModelIndex, to: QModelIndex) callconv(.c) void `
    ///
    pub fn onChangePersistentIndex(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QModelIndex, QModelIndex) callconv(.c) void) void {
        qtc.QAbstractProxyModel_OnChangePersistentIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` from: []QModelIndex `
    ///
    /// ` to: []QModelIndex `
    ///
    pub fn changePersistentIndexList(self: QAbstractProxyModel, from: []QModelIndex, to: []QModelIndex) void {
        const from_list = qtc.libqt_list{
            .len = from.len,
            .data = @ptrCast(from.ptr),
        };
        const to_list = qtc.libqt_list{
            .len = to.len,
            .data = @ptrCast(to.ptr),
        };
        qtc.QAbstractProxyModel_ChangePersistentIndexList(@ptrCast(self.ptr), from_list, to_list);
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` from: []QModelIndex `
    ///
    /// ` to: []QModelIndex `
    ///
    pub fn superChangePersistentIndexList(self: QAbstractProxyModel, from: []QModelIndex, to: []QModelIndex) void {
        const from_list = qtc.libqt_list{
            .len = from.len,
            .data = @ptrCast(from.ptr),
        };
        const to_list = qtc.libqt_list{
            .len = to.len,
            .data = @ptrCast(to.ptr),
        };
        qtc.QAbstractProxyModel_SuperChangePersistentIndexList(@ptrCast(self.ptr), from_list, to_list);
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
    /// ` self: QAbstractProxyModel`
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, from: qtc.libqt_list ([]QModelIndex), to: qtc.libqt_list ([]QModelIndex)) callconv(.c) void `
    ///
    pub fn onChangePersistentIndexList(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, qtc.libqt_list, qtc.libqt_list) callconv(.c) void) void {
        qtc.QAbstractProxyModel_OnChangePersistentIndexList(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn persistentIndexList(self: QAbstractProxyModel, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.QAbstractProxyModel_PersistentIndexList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("QAbstractProxyModel.persistentIndexList: Memory allocation failed");
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superPersistentIndexList(self: QAbstractProxyModel, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.QAbstractProxyModel_SuperPersistentIndexList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("QAbstractProxyModel.persistentIndexList: Memory allocation failed");
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
    /// ` self: QAbstractProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QModelIndex `
    ///
    pub fn onPersistentIndexList(self: QAbstractProxyModel, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.QAbstractProxyModel_OnPersistentIndexList(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractProxyModel `
    ///
    pub fn sender(self: QAbstractProxyModel) QObject {
        return .{ .ptr = qtc.QAbstractProxyModel_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QAbstractProxyModel `
    ///
    pub fn superSender(self: QAbstractProxyModel) QObject {
        return .{ .ptr = qtc.QAbstractProxyModel_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QAbstractProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QAbstractProxyModel, callback: *const fn () callconv(.c) QObject) void {
        qtc.QAbstractProxyModel_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractProxyModel `
    ///
    pub fn senderSignalIndex(self: QAbstractProxyModel) i32 {
        return qtc.QAbstractProxyModel_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QAbstractProxyModel `
    ///
    pub fn superSenderSignalIndex(self: QAbstractProxyModel) i32 {
        return qtc.QAbstractProxyModel_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QAbstractProxyModel`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QAbstractProxyModel, callback: *const fn () callconv(.c) i32) void {
        qtc.QAbstractProxyModel_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QAbstractProxyModel, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QAbstractProxyModel_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QAbstractProxyModel, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QAbstractProxyModel_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QAbstractProxyModel`
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, [*:0]const u8) callconv(.c) i32) void {
        qtc.QAbstractProxyModel_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QAbstractProxyModel, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QAbstractProxyModel_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QAbstractProxyModel, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QAbstractProxyModel_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QAbstractProxyModel`
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QMetaMethod) callconv(.c) bool) void {
        qtc.QAbstractProxyModel_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onSourceModelChanged` instead
    ///
    pub const OnSourceModelChanged = onSourceModelChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#sourceModelChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel) callconv(.c) void `
    ///
    pub fn onSourceModelChanged(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel) callconv(.c) void) void {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onRowsAboutToBeInserted(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onRowsInserted(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onRowsAboutToBeRemoved(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onRowsRemoved(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onColumnsAboutToBeInserted(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onColumnsInserted(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onColumnsAboutToBeRemoved(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onColumnsRemoved(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QModelIndex, i32, i32) callconv(.c) void) void {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel) callconv(.c) void `
    ///
    pub fn onModelAboutToBeReset(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel) callconv(.c) void) void {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel) callconv(.c) void `
    ///
    pub fn onModelReset(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel) callconv(.c) void) void {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, sourceParent: QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QModelIndex, destinationRow: i32) callconv(.c) void `
    ///
    pub fn onRowsAboutToBeMoved(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) void) void {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, sourceParent: QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QModelIndex, destinationRow: i32) callconv(.c) void `
    ///
    pub fn onRowsMoved(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) void) void {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, sourceParent: QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QModelIndex, destinationColumn: i32) callconv(.c) void `
    ///
    pub fn onColumnsAboutToBeMoved(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) void) void {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, sourceParent: QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QModelIndex, destinationColumn: i32) callconv(.c) void `
    ///
    pub fn onColumnsMoved(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) void) void {
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
    /// ` self: QAbstractProxyModel `
    ///
    /// ` callback: *const fn (self: QAbstractProxyModel, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QAbstractProxyModel, callback: *const fn (QAbstractProxyModel, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractproxymodel.html#dtor.QAbstractProxyModel)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAbstractProxyModel `
    ///
    pub fn delete(self: QAbstractProxyModel) void {
        qtc.QAbstractProxyModel_Delete(@ptrCast(self.ptr));
    }
};
