const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAbstractItemModel = @import("libqt6").QAbstractItemModel;
const QAbstractItemView = @import("libqt6").QAbstractItemView;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QItemSelectionModel = @import("libqt6").QItemSelectionModel;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QModelIndex = @import("libqt6").QModelIndex;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const Struct_i32_i32 = extern struct { first: i32, second: i32 };

/// ### [Upstream resources](https://api.kde.org/kviewstateserializer.html)
pub const KViewStateSerializer = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kviewstateserializer.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KViewStateSerializer,

    pub const _is_KViewStateSerializer = {};
    pub const _is_QObject = {};

    /// New constructs a new KViewStateSerializer object.
    ///
    pub fn New() KViewStateSerializer {
        return .{ .ptr = qtc.KViewStateSerializer_new() };
    }

    /// New2 constructs a new KViewStateSerializer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) KViewStateSerializer {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KViewStateSerializer_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    pub fn MetaObject(self: KViewStateSerializer) QMetaObject {
        return .{ .ptr = qtc.KViewStateSerializer_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KViewStateSerializer, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KViewStateSerializer_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KViewStateSerializer `
    ///
    pub fn SuperMetaObject(self: KViewStateSerializer) QMetaObject {
        return .{ .ptr = qtc.KViewStateSerializer_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KViewStateSerializer, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KViewStateSerializer_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` callback: *const fn (self: KViewStateSerializer, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KViewStateSerializer, callback: *const fn (KViewStateSerializer, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KViewStateSerializer_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KViewStateSerializer, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KViewStateSerializer_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KViewStateSerializer, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KViewStateSerializer_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` callback: *const fn (self: KViewStateSerializer, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KViewStateSerializer, callback: *const fn (KViewStateSerializer, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KViewStateSerializer_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KViewStateSerializer, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KViewStateSerializer_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kviewstateserializer.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kviewstateserializer.html#view)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    pub fn View(self: KViewStateSerializer) QAbstractItemView {
        return .{ .ptr = qtc.KViewStateSerializer_View(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kviewstateserializer.html#setView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` view: QAbstractItemView `
    ///
    pub fn SetView(self: KViewStateSerializer, view: anytype) void {
        comptime _ = @TypeOf(view)._is_QAbstractItemView;
        qtc.KViewStateSerializer_SetView(@ptrCast(self.ptr), @ptrCast(view.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kviewstateserializer.html#selectionModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    pub fn SelectionModel(self: KViewStateSerializer) QItemSelectionModel {
        return .{ .ptr = qtc.KViewStateSerializer_SelectionModel(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kviewstateserializer.html#setSelectionModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` selectionModel: QItemSelectionModel `
    ///
    pub fn SetSelectionModel(self: KViewStateSerializer, selectionModel: anytype) void {
        comptime _ = @TypeOf(selectionModel)._is_QItemSelectionModel;
        qtc.KViewStateSerializer_SetSelectionModel(@ptrCast(self.ptr), @ptrCast(selectionModel.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kviewstateserializer.html#selectionKeys)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectionKeys(self: KViewStateSerializer, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KViewStateSerializer_SelectionKeys(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kviewstateserializer.SelectionKeys: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kviewstateserializer.SelectionKeys: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kviewstateserializer.html#expansionKeys)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ExpansionKeys(self: KViewStateSerializer, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KViewStateSerializer_ExpansionKeys(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kviewstateserializer.ExpansionKeys: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kviewstateserializer.ExpansionKeys: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kviewstateserializer.html#currentIndexKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CurrentIndexKey(self: KViewStateSerializer, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KViewStateSerializer_CurrentIndexKey(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kviewstateserializer.CurrentIndexKey: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kviewstateserializer.html#scrollState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    pub fn ScrollState(self: KViewStateSerializer) Struct_i32_i32 {
        const _pair = qtc.KViewStateSerializer_ScrollState(@ptrCast(self.ptr));
        return @bitCast(_pair);
    }

    /// ### [Upstream resources](https://api.kde.org/kviewstateserializer.html#restoreSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` indexStrings: []const []const u8 `
    ///
    pub fn RestoreSelection(self: KViewStateSerializer, allocator: std.mem.Allocator, indexStrings: []const []const u8) void {
        const indexStrings_arr = allocator.alloc(qtc.libqt_string, indexStrings.len) catch @panic("kviewstateserializer.RestoreSelection: Memory allocation failed");
        defer allocator.free(indexStrings_arr);
        for (indexStrings, 0..indexStrings.len) |item, i|
            indexStrings_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const indexStrings_list = qtc.libqt_list{
            .len = indexStrings.len,
            .data = indexStrings_arr.ptr,
        };
        qtc.KViewStateSerializer_RestoreSelection(@ptrCast(self.ptr), indexStrings_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kviewstateserializer.html#restoreCurrentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` indexString: []const u8 `
    ///
    pub fn RestoreCurrentItem(self: KViewStateSerializer, indexString: []const u8) void {
        const indexString_str = qtc.libqt_string{
            .len = indexString.len,
            .data = indexString.ptr,
        };
        qtc.KViewStateSerializer_RestoreCurrentItem(@ptrCast(self.ptr), indexString_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kviewstateserializer.html#restoreExpanded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` indexStrings: []const []const u8 `
    ///
    pub fn RestoreExpanded(self: KViewStateSerializer, allocator: std.mem.Allocator, indexStrings: []const []const u8) void {
        const indexStrings_arr = allocator.alloc(qtc.libqt_string, indexStrings.len) catch @panic("kviewstateserializer.RestoreExpanded: Memory allocation failed");
        defer allocator.free(indexStrings_arr);
        for (indexStrings, 0..indexStrings.len) |item, i|
            indexStrings_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const indexStrings_list = qtc.libqt_list{
            .len = indexStrings.len,
            .data = indexStrings_arr.ptr,
        };
        qtc.KViewStateSerializer_RestoreExpanded(@ptrCast(self.ptr), indexStrings_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kviewstateserializer.html#restoreScrollState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` verticalScoll: i32 `
    ///
    /// ` horizontalScroll: i32 `
    ///
    pub fn RestoreScrollState(self: KViewStateSerializer, verticalScoll: i32, horizontalScroll: i32) void {
        qtc.KViewStateSerializer_RestoreScrollState(@ptrCast(self.ptr), @bitCast(verticalScoll), @bitCast(horizontalScroll));
    }

    /// ### [Upstream resources](https://api.kde.org/kviewstateserializer.html#indexFromConfigString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` model: QAbstractItemModel `
    ///
    /// ` key: []const u8 `
    ///
    pub fn IndexFromConfigString(self: KViewStateSerializer, model: anytype, key: []const u8) QModelIndex {
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KViewStateSerializer_IndexFromConfigString(@ptrCast(self.ptr), @ptrCast(model.ptr), key_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kviewstateserializer.html#indexFromConfigString)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` callback: *const fn (self: KViewStateSerializer, model: QAbstractItemModel, key: [*:0]const u8) callconv(.c) QModelIndex `
    ///
    pub fn OnIndexFromConfigString(self: KViewStateSerializer, callback: *const fn (KViewStateSerializer, QAbstractItemModel, [*:0]const u8) callconv(.c) QModelIndex) void {
        qtc.KViewStateSerializer_OnIndexFromConfigString(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIndexFromConfigString` instead
    ///
    pub const QBaseIndexFromConfigString = SuperIndexFromConfigString;

    /// ### [Upstream resources](https://api.kde.org/kviewstateserializer.html#indexFromConfigString)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` model: QAbstractItemModel `
    ///
    /// ` key: []const u8 `
    ///
    pub fn SuperIndexFromConfigString(self: KViewStateSerializer, model: anytype, key: []const u8) QModelIndex {
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KViewStateSerializer_SuperIndexFromConfigString(@ptrCast(self.ptr), @ptrCast(model.ptr), key_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kviewstateserializer.html#indexToConfigString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn IndexToConfigString(self: KViewStateSerializer, allocator: std.mem.Allocator, index: anytype) []const u8 {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        var _str = qtc.KViewStateSerializer_IndexToConfigString(@ptrCast(self.ptr), @ptrCast(index.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kviewstateserializer.IndexToConfigString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kviewstateserializer.html#indexToConfigString)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` callback: *const fn (self: KViewStateSerializer, index: QModelIndex) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnIndexToConfigString(self: KViewStateSerializer, callback: *const fn (KViewStateSerializer, QModelIndex) callconv(.c) [*:0]const u8) void {
        qtc.KViewStateSerializer_OnIndexToConfigString(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIndexToConfigString` instead
    ///
    pub const QBaseIndexToConfigString = SuperIndexToConfigString;

    /// ### [Upstream resources](https://api.kde.org/kviewstateserializer.html#indexToConfigString)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperIndexToConfigString(self: KViewStateSerializer, allocator: std.mem.Allocator, index: anytype) []const u8 {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        var _str = qtc.KViewStateSerializer_SuperIndexToConfigString(@ptrCast(self.ptr), @ptrCast(index.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kviewstateserializer.IndexToConfigString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kviewstateserializer.html#restoreState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    pub fn RestoreState(self: KViewStateSerializer) void {
        qtc.KViewStateSerializer_RestoreState(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kviewstateserializer.html#restoreState)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnRestoreState(self: KViewStateSerializer, callback: *const fn () callconv(.c) void) void {
        qtc.KViewStateSerializer_OnRestoreState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRestoreState` instead
    ///
    pub const QBaseRestoreState = SuperRestoreState;

    /// ### [Upstream resources](https://api.kde.org/kviewstateserializer.html#restoreState)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    pub fn SuperRestoreState(self: KViewStateSerializer) void {
        qtc.KViewStateSerializer_SuperRestoreState(@ptrCast(self.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kviewstateserializer.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kviewstateserializer.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KViewStateSerializer, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kviewstateserializer.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KViewStateSerializer, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    pub fn IsWidgetType(self: KViewStateSerializer) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    pub fn IsWindowType(self: KViewStateSerializer) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    pub fn IsQuickItemType(self: KViewStateSerializer) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    pub fn SignalsBlocked(self: KViewStateSerializer) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KViewStateSerializer, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    pub fn Thread(self: KViewStateSerializer) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KViewStateSerializer, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KViewStateSerializer, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KViewStateSerializer, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KViewStateSerializer, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KViewStateSerializer, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KViewStateSerializer, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kviewstateserializer.Children: Memory allocation failed");
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
    /// ` self: KViewStateSerializer `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KViewStateSerializer, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KViewStateSerializer, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KViewStateSerializer, obj: anytype) void {
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
    /// ` self: KViewStateSerializer `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KViewStateSerializer, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KViewStateSerializer `
    ///
    pub fn Disconnect3(self: KViewStateSerializer) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KViewStateSerializer, receiver: anytype) bool {
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
    /// ` self: KViewStateSerializer `
    ///
    pub fn DumpObjectTree(self: KViewStateSerializer) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    pub fn DumpObjectInfo(self: KViewStateSerializer) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KViewStateSerializer, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KViewStateSerializer `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KViewStateSerializer, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KViewStateSerializer, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kviewstateserializer.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kviewstateserializer.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KViewStateSerializer `
    ///
    pub fn BindingStorage(self: KViewStateSerializer) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    pub fn BindingStorage2(self: KViewStateSerializer) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    pub fn Destroyed(self: KViewStateSerializer) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` callback: *const fn (self: KViewStateSerializer) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KViewStateSerializer, callback: *const fn (KViewStateSerializer) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    pub fn Parent(self: KViewStateSerializer) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KViewStateSerializer, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    pub fn DeleteLater(self: KViewStateSerializer) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KViewStateSerializer, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KViewStateSerializer, time: i64, timerType: i32) i32 {
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
    /// ` self: KViewStateSerializer `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KViewStateSerializer, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KViewStateSerializer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KViewStateSerializer, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KViewStateSerializer, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KViewStateSerializer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KViewStateSerializer, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KViewStateSerializer `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KViewStateSerializer, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KViewStateSerializer `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KViewStateSerializer, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` callback: *const fn (self: KViewStateSerializer, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KViewStateSerializer, callback: *const fn (KViewStateSerializer, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KViewStateSerializer, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KViewStateSerializer_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KViewStateSerializer `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KViewStateSerializer, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KViewStateSerializer_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KViewStateSerializer`
    ///
    /// ` callback: *const fn (self: KViewStateSerializer, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KViewStateSerializer, callback: *const fn (KViewStateSerializer, QEvent) callconv(.c) bool) void {
        qtc.KViewStateSerializer_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KViewStateSerializer, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KViewStateSerializer_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KViewStateSerializer `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KViewStateSerializer, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KViewStateSerializer_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KViewStateSerializer`
    ///
    /// ` callback: *const fn (self: KViewStateSerializer, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KViewStateSerializer, callback: *const fn (KViewStateSerializer, QObject, QEvent) callconv(.c) bool) void {
        qtc.KViewStateSerializer_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KViewStateSerializer, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KViewStateSerializer_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KViewStateSerializer `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KViewStateSerializer, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KViewStateSerializer_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KViewStateSerializer`
    ///
    /// ` callback: *const fn (self: KViewStateSerializer, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KViewStateSerializer, callback: *const fn (KViewStateSerializer, QTimerEvent) callconv(.c) void) void {
        qtc.KViewStateSerializer_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KViewStateSerializer, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KViewStateSerializer_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KViewStateSerializer `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KViewStateSerializer, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KViewStateSerializer_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KViewStateSerializer`
    ///
    /// ` callback: *const fn (self: KViewStateSerializer, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KViewStateSerializer, callback: *const fn (KViewStateSerializer, QChildEvent) callconv(.c) void) void {
        qtc.KViewStateSerializer_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KViewStateSerializer, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KViewStateSerializer_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KViewStateSerializer `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KViewStateSerializer, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KViewStateSerializer_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KViewStateSerializer`
    ///
    /// ` callback: *const fn (self: KViewStateSerializer, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KViewStateSerializer, callback: *const fn (KViewStateSerializer, QEvent) callconv(.c) void) void {
        qtc.KViewStateSerializer_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KViewStateSerializer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KViewStateSerializer_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KViewStateSerializer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KViewStateSerializer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KViewStateSerializer_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KViewStateSerializer`
    ///
    /// ` callback: *const fn (self: KViewStateSerializer, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KViewStateSerializer, callback: *const fn (KViewStateSerializer, QMetaMethod) callconv(.c) void) void {
        qtc.KViewStateSerializer_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KViewStateSerializer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KViewStateSerializer_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KViewStateSerializer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KViewStateSerializer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KViewStateSerializer_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KViewStateSerializer`
    ///
    /// ` callback: *const fn (self: KViewStateSerializer, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KViewStateSerializer, callback: *const fn (KViewStateSerializer, QMetaMethod) callconv(.c) void) void {
        qtc.KViewStateSerializer_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    pub fn Sender(self: KViewStateSerializer) QObject {
        return .{ .ptr = qtc.KViewStateSerializer_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KViewStateSerializer `
    ///
    pub fn SuperSender(self: KViewStateSerializer) QObject {
        return .{ .ptr = qtc.KViewStateSerializer_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KViewStateSerializer`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KViewStateSerializer, callback: *const fn () callconv(.c) QObject) void {
        qtc.KViewStateSerializer_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    pub fn SenderSignalIndex(self: KViewStateSerializer) i32 {
        return qtc.KViewStateSerializer_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KViewStateSerializer `
    ///
    pub fn SuperSenderSignalIndex(self: KViewStateSerializer) i32 {
        return qtc.KViewStateSerializer_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KViewStateSerializer`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KViewStateSerializer, callback: *const fn () callconv(.c) i32) void {
        qtc.KViewStateSerializer_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KViewStateSerializer, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KViewStateSerializer_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KViewStateSerializer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KViewStateSerializer, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KViewStateSerializer_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KViewStateSerializer`
    ///
    /// ` callback: *const fn (self: KViewStateSerializer, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KViewStateSerializer, callback: *const fn (KViewStateSerializer, [*:0]const u8) callconv(.c) i32) void {
        qtc.KViewStateSerializer_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KViewStateSerializer, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KViewStateSerializer_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KViewStateSerializer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KViewStateSerializer, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KViewStateSerializer_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KViewStateSerializer`
    ///
    /// ` callback: *const fn (self: KViewStateSerializer, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KViewStateSerializer, callback: *const fn (KViewStateSerializer, QMetaMethod) callconv(.c) bool) void {
        qtc.KViewStateSerializer_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KViewStateSerializer `
    ///
    /// ` callback: *const fn (self: KViewStateSerializer, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KViewStateSerializer, callback: *const fn (KViewStateSerializer, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kviewstateserializer.html#dtor.KViewStateSerializer)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KViewStateSerializer `
    ///
    pub fn Delete(self: KViewStateSerializer) void {
        qtc.KViewStateSerializer_Delete(@ptrCast(self.ptr));
    }
};
