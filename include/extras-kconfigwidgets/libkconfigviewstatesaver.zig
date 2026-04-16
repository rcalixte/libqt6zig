const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KConfigGroup = @import("libqt6").KConfigGroup;
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

/// ### [Upstream resources](https://api.kde.org/kconfigviewstatesaver.html)
pub const KConfigViewStateSaver = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kconfigviewstatesaver.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KConfigViewStateSaver,

    pub const _is_KConfigViewStateSaver = {};
    pub const _is_KViewStateSerializer = {};
    pub const _is_QObject = {};

    /// New constructs a new KConfigViewStateSaver object.
    ///
    pub fn New() KConfigViewStateSaver {
        return .{ .ptr = qtc.KConfigViewStateSaver_new() };
    }

    /// New2 constructs a new KConfigViewStateSaver object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) KConfigViewStateSaver {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KConfigViewStateSaver_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    pub fn MetaObject(self: KConfigViewStateSaver) QMetaObject {
        return .{ .ptr = qtc.KConfigViewStateSaver_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KConfigViewStateSaver, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KConfigViewStateSaver_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KConfigViewStateSaver `
    ///
    pub fn SuperMetaObject(self: KConfigViewStateSaver) QMetaObject {
        return .{ .ptr = qtc.KConfigViewStateSaver_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KConfigViewStateSaver, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KConfigViewStateSaver_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` callback: *const fn (self: KConfigViewStateSaver, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KConfigViewStateSaver, callback: *const fn (KConfigViewStateSaver, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KConfigViewStateSaver_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KConfigViewStateSaver, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KConfigViewStateSaver_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KConfigViewStateSaver, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KConfigViewStateSaver_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` callback: *const fn (self: KConfigViewStateSaver, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KConfigViewStateSaver, callback: *const fn (KConfigViewStateSaver, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KConfigViewStateSaver_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KConfigViewStateSaver, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KConfigViewStateSaver_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfigviewstatesaver.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigviewstatesaver.html#saveState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` configGroup: KConfigGroup `
    ///
    pub fn SaveState(self: KConfigViewStateSaver, configGroup: anytype) void {
        comptime _ = @TypeOf(configGroup)._is_KConfigGroup;
        qtc.KConfigViewStateSaver_SaveState(@ptrCast(self.ptr), @ptrCast(configGroup.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigviewstatesaver.html#restoreState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` configGroup: KConfigGroup `
    ///
    pub fn RestoreState(self: KConfigViewStateSaver, configGroup: anytype) void {
        comptime _ = @TypeOf(configGroup)._is_KConfigGroup;
        qtc.KConfigViewStateSaver_RestoreState(@ptrCast(self.ptr), @ptrCast(configGroup.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfigviewstatesaver.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfigviewstatesaver.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KViewStateSerializer
    ///
    /// ### [Upstream resources](https://api.kde.org/kviewstateserializer.html#view)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    pub fn View(self: KConfigViewStateSaver) QAbstractItemView {
        return .{ .ptr = qtc.KViewStateSerializer_View(@ptrCast(self.ptr)) };
    }

    /// Inherited from KViewStateSerializer
    ///
    /// ### [Upstream resources](https://api.kde.org/kviewstateserializer.html#setView)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` view: QAbstractItemView `
    ///
    pub fn SetView(self: KConfigViewStateSaver, view: anytype) void {
        comptime _ = @TypeOf(view)._is_QAbstractItemView;
        qtc.KViewStateSerializer_SetView(@ptrCast(self.ptr), @ptrCast(view.ptr));
    }

    /// Inherited from KViewStateSerializer
    ///
    /// ### [Upstream resources](https://api.kde.org/kviewstateserializer.html#selectionModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    pub fn SelectionModel(self: KConfigViewStateSaver) QItemSelectionModel {
        return .{ .ptr = qtc.KViewStateSerializer_SelectionModel(@ptrCast(self.ptr)) };
    }

    /// Inherited from KViewStateSerializer
    ///
    /// ### [Upstream resources](https://api.kde.org/kviewstateserializer.html#setSelectionModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` selectionModel: QItemSelectionModel `
    ///
    pub fn SetSelectionModel(self: KConfigViewStateSaver, selectionModel: anytype) void {
        comptime _ = @TypeOf(selectionModel)._is_QItemSelectionModel;
        qtc.KViewStateSerializer_SetSelectionModel(@ptrCast(self.ptr), @ptrCast(selectionModel.ptr));
    }

    /// Inherited from KViewStateSerializer
    ///
    /// ### [Upstream resources](https://api.kde.org/kviewstateserializer.html#selectionKeys)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectionKeys(self: KConfigViewStateSaver, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KViewStateSerializer_SelectionKeys(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kconfigviewstatesaver.SelectionKeys: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kconfigviewstatesaver.SelectionKeys: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from KViewStateSerializer
    ///
    /// ### [Upstream resources](https://api.kde.org/kviewstateserializer.html#expansionKeys)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ExpansionKeys(self: KConfigViewStateSaver, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KViewStateSerializer_ExpansionKeys(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kconfigviewstatesaver.ExpansionKeys: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kconfigviewstatesaver.ExpansionKeys: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from KViewStateSerializer
    ///
    /// ### [Upstream resources](https://api.kde.org/kviewstateserializer.html#currentIndexKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CurrentIndexKey(self: KConfigViewStateSaver, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KViewStateSerializer_CurrentIndexKey(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfigviewstatesaver.CurrentIndexKey: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KViewStateSerializer
    ///
    /// ### [Upstream resources](https://api.kde.org/kviewstateserializer.html#scrollState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    pub fn ScrollState(self: KConfigViewStateSaver) Struct_i32_i32 {
        const _pair = qtc.KViewStateSerializer_ScrollState(@ptrCast(self.ptr));
        return @bitCast(_pair);
    }

    /// Inherited from KViewStateSerializer
    ///
    /// ### [Upstream resources](https://api.kde.org/kviewstateserializer.html#restoreSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` indexStrings: []const []const u8 `
    ///
    pub fn RestoreSelection(self: KConfigViewStateSaver, allocator: std.mem.Allocator, indexStrings: []const []const u8) void {
        const indexStrings_arr = allocator.alloc(qtc.libqt_string, indexStrings.len) catch @panic("kconfigviewstatesaver.RestoreSelection: Memory allocation failed");
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

    /// Inherited from KViewStateSerializer
    ///
    /// ### [Upstream resources](https://api.kde.org/kviewstateserializer.html#restoreCurrentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` indexString: []const u8 `
    ///
    pub fn RestoreCurrentItem(self: KConfigViewStateSaver, indexString: []const u8) void {
        const indexString_str = qtc.libqt_string{
            .len = indexString.len,
            .data = indexString.ptr,
        };
        qtc.KViewStateSerializer_RestoreCurrentItem(@ptrCast(self.ptr), indexString_str);
    }

    /// Inherited from KViewStateSerializer
    ///
    /// ### [Upstream resources](https://api.kde.org/kviewstateserializer.html#restoreExpanded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` indexStrings: []const []const u8 `
    ///
    pub fn RestoreExpanded(self: KConfigViewStateSaver, allocator: std.mem.Allocator, indexStrings: []const []const u8) void {
        const indexStrings_arr = allocator.alloc(qtc.libqt_string, indexStrings.len) catch @panic("kconfigviewstatesaver.RestoreExpanded: Memory allocation failed");
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

    /// Inherited from KViewStateSerializer
    ///
    /// ### [Upstream resources](https://api.kde.org/kviewstateserializer.html#restoreScrollState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` verticalScoll: i32 `
    ///
    /// ` horizontalScroll: i32 `
    ///
    pub fn RestoreScrollState(self: KConfigViewStateSaver, verticalScoll: i32, horizontalScroll: i32) void {
        qtc.KViewStateSerializer_RestoreScrollState(@ptrCast(self.ptr), @bitCast(verticalScoll), @bitCast(horizontalScroll));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KConfigViewStateSaver, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfigviewstatesaver.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KConfigViewStateSaver, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    pub fn IsWidgetType(self: KConfigViewStateSaver) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    pub fn IsWindowType(self: KConfigViewStateSaver) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    pub fn IsQuickItemType(self: KConfigViewStateSaver) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    pub fn SignalsBlocked(self: KConfigViewStateSaver) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KConfigViewStateSaver, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    pub fn Thread(self: KConfigViewStateSaver) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KConfigViewStateSaver, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KConfigViewStateSaver, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KConfigViewStateSaver, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KConfigViewStateSaver, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KConfigViewStateSaver, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KConfigViewStateSaver, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kconfigviewstatesaver.Children: Memory allocation failed");
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
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KConfigViewStateSaver, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KConfigViewStateSaver, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KConfigViewStateSaver, obj: anytype) void {
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
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KConfigViewStateSaver, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KConfigViewStateSaver `
    ///
    pub fn Disconnect3(self: KConfigViewStateSaver) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KConfigViewStateSaver, receiver: anytype) bool {
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
    /// ` self: KConfigViewStateSaver `
    ///
    pub fn DumpObjectTree(self: KConfigViewStateSaver) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    pub fn DumpObjectInfo(self: KConfigViewStateSaver) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KConfigViewStateSaver, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KConfigViewStateSaver, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KConfigViewStateSaver, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kconfigviewstatesaver.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kconfigviewstatesaver.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KConfigViewStateSaver `
    ///
    pub fn BindingStorage(self: KConfigViewStateSaver) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    pub fn BindingStorage2(self: KConfigViewStateSaver) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    pub fn Destroyed(self: KConfigViewStateSaver) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` callback: *const fn (self: KConfigViewStateSaver) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KConfigViewStateSaver, callback: *const fn (KConfigViewStateSaver) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    pub fn Parent(self: KConfigViewStateSaver) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KConfigViewStateSaver, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    pub fn DeleteLater(self: KConfigViewStateSaver) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KConfigViewStateSaver, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KConfigViewStateSaver, time: i64, timerType: i32) i32 {
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
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KConfigViewStateSaver, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KConfigViewStateSaver, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KConfigViewStateSaver, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KConfigViewStateSaver, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KConfigViewStateSaver, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KConfigViewStateSaver, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` callback: *const fn (self: KConfigViewStateSaver, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KConfigViewStateSaver, callback: *const fn (KConfigViewStateSaver, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KViewStateSerializer
    ///
    /// ### [Upstream resources](https://api.kde.org/kviewstateserializer.html#indexFromConfigString)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` model: QAbstractItemModel `
    ///
    /// ` key: []const u8 `
    ///
    pub fn IndexFromConfigString(self: KConfigViewStateSaver, model: anytype, key: []const u8) QModelIndex {
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KConfigViewStateSaver_IndexFromConfigString(@ptrCast(self.ptr), @ptrCast(model.ptr), key_str) };
    }

    /// ### DEPRECATED: Use `SuperIndexFromConfigString` instead
    ///
    pub const QBaseIndexFromConfigString = SuperIndexFromConfigString;

    /// Inherited from KViewStateSerializer
    ///
    /// ### [Upstream resources](https://api.kde.org/kviewstateserializer.html#indexFromConfigString)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` model: QAbstractItemModel `
    ///
    /// ` key: []const u8 `
    ///
    pub fn SuperIndexFromConfigString(self: KConfigViewStateSaver, model: anytype, key: []const u8) QModelIndex {
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return .{ .ptr = qtc.KConfigViewStateSaver_SuperIndexFromConfigString(@ptrCast(self.ptr), @ptrCast(model.ptr), key_str) };
    }

    /// Inherited from KViewStateSerializer
    ///
    /// ### [Upstream resources](https://api.kde.org/kviewstateserializer.html#indexFromConfigString)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigViewStateSaver`
    ///
    /// ` callback: *const fn (self: KConfigViewStateSaver, model: QAbstractItemModel, key: [*:0]const u8) callconv(.c) QModelIndex `
    ///
    pub fn OnIndexFromConfigString(self: KConfigViewStateSaver, callback: *const fn (KConfigViewStateSaver, QAbstractItemModel, [*:0]const u8) callconv(.c) QModelIndex) void {
        qtc.KConfigViewStateSaver_OnIndexFromConfigString(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KViewStateSerializer
    ///
    /// ### [Upstream resources](https://api.kde.org/kviewstateserializer.html#indexToConfigString)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn IndexToConfigString(self: KConfigViewStateSaver, allocator: std.mem.Allocator, index: anytype) []const u8 {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        var _str = qtc.KConfigViewStateSaver_IndexToConfigString(@ptrCast(self.ptr), @ptrCast(index.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfigviewstatesaver.IndexToConfigString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperIndexToConfigString` instead
    ///
    pub const QBaseIndexToConfigString = SuperIndexToConfigString;

    /// Inherited from KViewStateSerializer
    ///
    /// ### [Upstream resources](https://api.kde.org/kviewstateserializer.html#indexToConfigString)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperIndexToConfigString(self: KConfigViewStateSaver, allocator: std.mem.Allocator, index: anytype) []const u8 {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        var _str = qtc.KConfigViewStateSaver_SuperIndexToConfigString(@ptrCast(self.ptr), @ptrCast(index.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfigviewstatesaver.IndexToConfigString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KViewStateSerializer
    ///
    /// ### [Upstream resources](https://api.kde.org/kviewstateserializer.html#indexToConfigString)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigViewStateSaver`
    ///
    /// ` callback: *const fn (self: KConfigViewStateSaver, index: QModelIndex) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnIndexToConfigString(self: KConfigViewStateSaver, callback: *const fn (KConfigViewStateSaver, QModelIndex) callconv(.c) [*:0]const u8) void {
        qtc.KConfigViewStateSaver_OnIndexToConfigString(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KConfigViewStateSaver, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KConfigViewStateSaver_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KConfigViewStateSaver, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KConfigViewStateSaver_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigViewStateSaver`
    ///
    /// ` callback: *const fn (self: KConfigViewStateSaver, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KConfigViewStateSaver, callback: *const fn (KConfigViewStateSaver, QEvent) callconv(.c) bool) void {
        qtc.KConfigViewStateSaver_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KConfigViewStateSaver, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KConfigViewStateSaver_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KConfigViewStateSaver, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KConfigViewStateSaver_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigViewStateSaver`
    ///
    /// ` callback: *const fn (self: KConfigViewStateSaver, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KConfigViewStateSaver, callback: *const fn (KConfigViewStateSaver, QObject, QEvent) callconv(.c) bool) void {
        qtc.KConfigViewStateSaver_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KConfigViewStateSaver, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KConfigViewStateSaver_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KConfigViewStateSaver, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KConfigViewStateSaver_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigViewStateSaver`
    ///
    /// ` callback: *const fn (self: KConfigViewStateSaver, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KConfigViewStateSaver, callback: *const fn (KConfigViewStateSaver, QTimerEvent) callconv(.c) void) void {
        qtc.KConfigViewStateSaver_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KConfigViewStateSaver, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KConfigViewStateSaver_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KConfigViewStateSaver, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KConfigViewStateSaver_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigViewStateSaver`
    ///
    /// ` callback: *const fn (self: KConfigViewStateSaver, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KConfigViewStateSaver, callback: *const fn (KConfigViewStateSaver, QChildEvent) callconv(.c) void) void {
        qtc.KConfigViewStateSaver_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KConfigViewStateSaver, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KConfigViewStateSaver_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KConfigViewStateSaver, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KConfigViewStateSaver_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigViewStateSaver`
    ///
    /// ` callback: *const fn (self: KConfigViewStateSaver, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KConfigViewStateSaver, callback: *const fn (KConfigViewStateSaver, QEvent) callconv(.c) void) void {
        qtc.KConfigViewStateSaver_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KConfigViewStateSaver, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KConfigViewStateSaver_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KConfigViewStateSaver, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KConfigViewStateSaver_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigViewStateSaver`
    ///
    /// ` callback: *const fn (self: KConfigViewStateSaver, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KConfigViewStateSaver, callback: *const fn (KConfigViewStateSaver, QMetaMethod) callconv(.c) void) void {
        qtc.KConfigViewStateSaver_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KConfigViewStateSaver, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KConfigViewStateSaver_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KConfigViewStateSaver, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KConfigViewStateSaver_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigViewStateSaver`
    ///
    /// ` callback: *const fn (self: KConfigViewStateSaver, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KConfigViewStateSaver, callback: *const fn (KConfigViewStateSaver, QMetaMethod) callconv(.c) void) void {
        qtc.KConfigViewStateSaver_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    pub fn Sender(self: KConfigViewStateSaver) QObject {
        return .{ .ptr = qtc.KConfigViewStateSaver_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KConfigViewStateSaver `
    ///
    pub fn SuperSender(self: KConfigViewStateSaver) QObject {
        return .{ .ptr = qtc.KConfigViewStateSaver_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigViewStateSaver`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KConfigViewStateSaver, callback: *const fn () callconv(.c) QObject) void {
        qtc.KConfigViewStateSaver_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    pub fn SenderSignalIndex(self: KConfigViewStateSaver) i32 {
        return qtc.KConfigViewStateSaver_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KConfigViewStateSaver `
    ///
    pub fn SuperSenderSignalIndex(self: KConfigViewStateSaver) i32 {
        return qtc.KConfigViewStateSaver_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigViewStateSaver`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KConfigViewStateSaver, callback: *const fn () callconv(.c) i32) void {
        qtc.KConfigViewStateSaver_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KConfigViewStateSaver, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KConfigViewStateSaver_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KConfigViewStateSaver, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KConfigViewStateSaver_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigViewStateSaver`
    ///
    /// ` callback: *const fn (self: KConfigViewStateSaver, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KConfigViewStateSaver, callback: *const fn (KConfigViewStateSaver, [*:0]const u8) callconv(.c) i32) void {
        qtc.KConfigViewStateSaver_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KConfigViewStateSaver, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KConfigViewStateSaver_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KConfigViewStateSaver, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KConfigViewStateSaver_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigViewStateSaver`
    ///
    /// ` callback: *const fn (self: KConfigViewStateSaver, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KConfigViewStateSaver, callback: *const fn (KConfigViewStateSaver, QMetaMethod) callconv(.c) bool) void {
        qtc.KConfigViewStateSaver_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    /// ` callback: *const fn (self: KConfigViewStateSaver, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KConfigViewStateSaver, callback: *const fn (KConfigViewStateSaver, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kconfigviewstatesaver.html#dtor.KConfigViewStateSaver)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KConfigViewStateSaver `
    ///
    pub fn Delete(self: KConfigViewStateSaver) void {
        qtc.KConfigViewStateSaver_Delete(@ptrCast(self.ptr));
    }
};
