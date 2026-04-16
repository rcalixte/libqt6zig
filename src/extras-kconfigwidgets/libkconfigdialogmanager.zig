const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KConfigSkeletonItem = @import("libqt6").KConfigSkeletonItem;
const KCoreConfigSkeleton = @import("libqt6").KCoreConfigSkeleton;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const QWidget = @import("libqt6").QWidget;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const Map_constu8_u8 = std.StringHashMapUnmanaged([]u8);

/// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html)
pub const KConfigDialogManager = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KConfigDialogManager,

    pub const _is_KConfigDialogManager = {};
    pub const _is_QObject = {};

    /// New constructs a new KConfigDialogManager object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` conf: KCoreConfigSkeleton `
    ///
    pub fn New(parent: anytype, conf: anytype) KConfigDialogManager {
        comptime _ = @TypeOf(parent)._is_QWidget;
        comptime _ = @TypeOf(conf)._is_KCoreConfigSkeleton;
        return .{ .ptr = qtc.KConfigDialogManager_new(@ptrCast(parent.ptr), @ptrCast(conf.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    pub fn MetaObject(self: KConfigDialogManager) QMetaObject {
        return .{ .ptr = qtc.KConfigDialogManager_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KConfigDialogManager, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KConfigDialogManager_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KConfigDialogManager `
    ///
    pub fn SuperMetaObject(self: KConfigDialogManager) QMetaObject {
        return .{ .ptr = qtc.KConfigDialogManager_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KConfigDialogManager, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KConfigDialogManager_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` callback: *const fn (self: KConfigDialogManager, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KConfigDialogManager, callback: *const fn (KConfigDialogManager, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KConfigDialogManager_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KConfigDialogManager, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KConfigDialogManager_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KConfigDialogManager, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KConfigDialogManager_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` callback: *const fn (self: KConfigDialogManager, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KConfigDialogManager, callback: *const fn (KConfigDialogManager, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KConfigDialogManager_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KConfigDialogManager, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KConfigDialogManager_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfigdialogmanager.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#settingsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    pub fn SettingsChanged(self: KConfigDialogManager) void {
        qtc.KConfigDialogManager_SettingsChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#settingsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` callback: *const fn (self: KConfigDialogManager) callconv(.c) void `
    ///
    pub fn OnSettingsChanged(self: KConfigDialogManager, callback: *const fn (KConfigDialogManager) callconv(.c) void) void {
        qtc.KConfigDialogManager_Connect_SettingsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#widgetModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    pub fn WidgetModified(self: KConfigDialogManager) void {
        qtc.KConfigDialogManager_WidgetModified(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#widgetModified)
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` callback: *const fn (self: KConfigDialogManager) callconv(.c) void `
    ///
    pub fn OnWidgetModified(self: KConfigDialogManager, callback: *const fn (KConfigDialogManager) callconv(.c) void) void {
        qtc.KConfigDialogManager_Connect_WidgetModified(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#addWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` widget: QWidget `
    ///
    pub fn AddWidget(self: KConfigDialogManager, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.KConfigDialogManager_AddWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#hasChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    pub fn HasChanged(self: KConfigDialogManager) bool {
        return qtc.KConfigDialogManager_HasChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#isDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    pub fn IsDefault(self: KConfigDialogManager) bool {
        return qtc.KConfigDialogManager_IsDefault(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#propertyMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PropertyMap(allocator: std.mem.Allocator) Map_constu8_u8 {
        const _map: qtc.libqt_map = qtc.KConfigDialogManager_PropertyMap().?.*;
        var _ret: Map_constu8_u8 = .empty;
        defer {
            const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
            const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
            for (0.._map.len) |i| {
                qtc.libqt_free(_keys[i].data);
                qtc.libqt_free(_values[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
        const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("kconfigdialogmanager.PropertyMap: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("kconfigdialogmanager.PropertyMap: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.put(allocator, _entry_slice, _value_slice) catch @panic("kconfigdialogmanager.PropertyMap: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#updateSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    pub fn UpdateSettings(self: KConfigDialogManager) void {
        qtc.KConfigDialogManager_UpdateSettings(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#updateWidgets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    pub fn UpdateWidgets(self: KConfigDialogManager) void {
        qtc.KConfigDialogManager_UpdateWidgets(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#updateWidgetsDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    pub fn UpdateWidgetsDefault(self: KConfigDialogManager) void {
        qtc.KConfigDialogManager_UpdateWidgetsDefault(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#setDefaultsIndicatorsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetDefaultsIndicatorsVisible(self: KConfigDialogManager, enabled: bool) void {
        qtc.KConfigDialogManager_SetDefaultsIndicatorsVisible(@ptrCast(self.ptr), enabled);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#init)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` trackChanges: bool `
    ///
    pub fn Init(self: KConfigDialogManager, trackChanges: bool) void {
        qtc.KConfigDialogManager_Init(@ptrCast(self.ptr), trackChanges);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#init)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` callback: *const fn (self: KConfigDialogManager, trackChanges: bool) callconv(.c) void `
    ///
    pub fn OnInit(self: KConfigDialogManager, callback: *const fn (KConfigDialogManager, bool) callconv(.c) void) void {
        qtc.KConfigDialogManager_OnInit(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInit` instead
    ///
    pub const QBaseInit = SuperInit;

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#init)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` trackChanges: bool `
    ///
    pub fn SuperInit(self: KConfigDialogManager, trackChanges: bool) void {
        qtc.KConfigDialogManager_SuperInit(@ptrCast(self.ptr), trackChanges);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#parseChildren)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` widget: QWidget `
    ///
    /// ` trackChanges: bool `
    ///
    pub fn ParseChildren(self: KConfigDialogManager, widget: anytype, trackChanges: bool) bool {
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.KConfigDialogManager_ParseChildren(@ptrCast(self.ptr), @ptrCast(widget.ptr), trackChanges);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#parseChildren)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` callback: *const fn (self: KConfigDialogManager, widget: QWidget, trackChanges: bool) callconv(.c) bool `
    ///
    pub fn OnParseChildren(self: KConfigDialogManager, callback: *const fn (KConfigDialogManager, QWidget, bool) callconv(.c) bool) void {
        qtc.KConfigDialogManager_OnParseChildren(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperParseChildren` instead
    ///
    pub const QBaseParseChildren = SuperParseChildren;

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#parseChildren)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` widget: QWidget `
    ///
    /// ` trackChanges: bool `
    ///
    pub fn SuperParseChildren(self: KConfigDialogManager, widget: anytype, trackChanges: bool) bool {
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.KConfigDialogManager_SuperParseChildren(@ptrCast(self.ptr), @ptrCast(widget.ptr), trackChanges);
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#getUserProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` widget: QWidget `
    ///
    pub fn GetUserProperty(self: KConfigDialogManager, allocator: std.mem.Allocator, widget: anytype) []u8 {
        comptime _ = @TypeOf(widget)._is_QWidget;
        var _bytearray: qtc.libqt_string = qtc.KConfigDialogManager_GetUserProperty(@ptrCast(self.ptr), @ptrCast(widget.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kconfigdialogmanager.GetUserProperty: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#getUserProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` callback: *const fn (self: KConfigDialogManager, widget: QWidget) callconv(.c) qtc.libqt_string `
    ///
    pub fn OnGetUserProperty(self: KConfigDialogManager, callback: *const fn (KConfigDialogManager, QWidget) callconv(.c) qtc.libqt_string) void {
        qtc.KConfigDialogManager_OnGetUserProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperGetUserProperty` instead
    ///
    pub const QBaseGetUserProperty = SuperGetUserProperty;

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#getUserProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SuperGetUserProperty(self: KConfigDialogManager, allocator: std.mem.Allocator, widget: anytype) []u8 {
        comptime _ = @TypeOf(widget)._is_QWidget;
        var _bytearray: qtc.libqt_string = qtc.KConfigDialogManager_SuperGetUserProperty(@ptrCast(self.ptr), @ptrCast(widget.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kconfigdialogmanager.GetUserProperty: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#getCustomProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` widget: QWidget `
    ///
    pub fn GetCustomProperty(self: KConfigDialogManager, allocator: std.mem.Allocator, widget: anytype) []u8 {
        comptime _ = @TypeOf(widget)._is_QWidget;
        var _bytearray: qtc.libqt_string = qtc.KConfigDialogManager_GetCustomProperty(@ptrCast(self.ptr), @ptrCast(widget.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kconfigdialogmanager.GetCustomProperty: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#getCustomProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` callback: *const fn (self: KConfigDialogManager, widget: QWidget) callconv(.c) qtc.libqt_string `
    ///
    pub fn OnGetCustomProperty(self: KConfigDialogManager, callback: *const fn (KConfigDialogManager, QWidget) callconv(.c) qtc.libqt_string) void {
        qtc.KConfigDialogManager_OnGetCustomProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperGetCustomProperty` instead
    ///
    pub const QBaseGetCustomProperty = SuperGetCustomProperty;

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#getCustomProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SuperGetCustomProperty(self: KConfigDialogManager, allocator: std.mem.Allocator, widget: anytype) []u8 {
        comptime _ = @TypeOf(widget)._is_QWidget;
        var _bytearray: qtc.libqt_string = qtc.KConfigDialogManager_SuperGetCustomProperty(@ptrCast(self.ptr), @ptrCast(widget.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kconfigdialogmanager.GetCustomProperty: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#getUserPropertyChangedSignal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` widget: QWidget `
    ///
    pub fn GetUserPropertyChangedSignal(self: KConfigDialogManager, allocator: std.mem.Allocator, widget: anytype) []u8 {
        comptime _ = @TypeOf(widget)._is_QWidget;
        var _bytearray: qtc.libqt_string = qtc.KConfigDialogManager_GetUserPropertyChangedSignal(@ptrCast(self.ptr), @ptrCast(widget.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kconfigdialogmanager.GetUserPropertyChangedSignal: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#getUserPropertyChangedSignal)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` callback: *const fn (self: KConfigDialogManager, widget: QWidget) callconv(.c) qtc.libqt_string `
    ///
    pub fn OnGetUserPropertyChangedSignal(self: KConfigDialogManager, callback: *const fn (KConfigDialogManager, QWidget) callconv(.c) qtc.libqt_string) void {
        qtc.KConfigDialogManager_OnGetUserPropertyChangedSignal(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperGetUserPropertyChangedSignal` instead
    ///
    pub const QBaseGetUserPropertyChangedSignal = SuperGetUserPropertyChangedSignal;

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#getUserPropertyChangedSignal)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SuperGetUserPropertyChangedSignal(self: KConfigDialogManager, allocator: std.mem.Allocator, widget: anytype) []u8 {
        comptime _ = @TypeOf(widget)._is_QWidget;
        var _bytearray: qtc.libqt_string = qtc.KConfigDialogManager_SuperGetUserPropertyChangedSignal(@ptrCast(self.ptr), @ptrCast(widget.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kconfigdialogmanager.GetUserPropertyChangedSignal: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#getCustomPropertyChangedSignal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` widget: QWidget `
    ///
    pub fn GetCustomPropertyChangedSignal(self: KConfigDialogManager, allocator: std.mem.Allocator, widget: anytype) []u8 {
        comptime _ = @TypeOf(widget)._is_QWidget;
        var _bytearray: qtc.libqt_string = qtc.KConfigDialogManager_GetCustomPropertyChangedSignal(@ptrCast(self.ptr), @ptrCast(widget.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kconfigdialogmanager.GetCustomPropertyChangedSignal: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#getCustomPropertyChangedSignal)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` callback: *const fn (self: KConfigDialogManager, widget: QWidget) callconv(.c) qtc.libqt_string `
    ///
    pub fn OnGetCustomPropertyChangedSignal(self: KConfigDialogManager, callback: *const fn (KConfigDialogManager, QWidget) callconv(.c) qtc.libqt_string) void {
        qtc.KConfigDialogManager_OnGetCustomPropertyChangedSignal(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperGetCustomPropertyChangedSignal` instead
    ///
    pub const QBaseGetCustomPropertyChangedSignal = SuperGetCustomPropertyChangedSignal;

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#getCustomPropertyChangedSignal)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SuperGetCustomPropertyChangedSignal(self: KConfigDialogManager, allocator: std.mem.Allocator, widget: anytype) []u8 {
        comptime _ = @TypeOf(widget)._is_QWidget;
        var _bytearray: qtc.libqt_string = qtc.KConfigDialogManager_SuperGetCustomPropertyChangedSignal(@ptrCast(self.ptr), @ptrCast(widget.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kconfigdialogmanager.GetCustomPropertyChangedSignal: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` w: QWidget `
    ///
    /// ` v: QVariant `
    ///
    pub fn SetProperty(self: KConfigDialogManager, w: anytype, v: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        comptime _ = @TypeOf(v)._is_QVariant;
        qtc.KConfigDialogManager_SetProperty(@ptrCast(self.ptr), @ptrCast(w.ptr), @ptrCast(v.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` callback: *const fn (self: KConfigDialogManager, w: QWidget, v: QVariant) callconv(.c) void `
    ///
    pub fn OnSetProperty(self: KConfigDialogManager, callback: *const fn (KConfigDialogManager, QWidget, QVariant) callconv(.c) void) void {
        qtc.KConfigDialogManager_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetProperty` instead
    ///
    pub const QBaseSetProperty = SuperSetProperty;

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` w: QWidget `
    ///
    /// ` v: QVariant `
    ///
    pub fn SuperSetProperty(self: KConfigDialogManager, w: anytype, v: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        comptime _ = @TypeOf(v)._is_QVariant;
        qtc.KConfigDialogManager_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(w.ptr), @ptrCast(v.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` w: QWidget `
    ///
    pub fn Property(self: KConfigDialogManager, w: anytype) QVariant {
        comptime _ = @TypeOf(w)._is_QWidget;
        return .{ .ptr = qtc.KConfigDialogManager_Property(@ptrCast(self.ptr), @ptrCast(w.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#property)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` callback: *const fn (self: KConfigDialogManager, w: QWidget) callconv(.c) QVariant `
    ///
    pub fn OnProperty(self: KConfigDialogManager, callback: *const fn (KConfigDialogManager, QWidget) callconv(.c) QVariant) void {
        qtc.KConfigDialogManager_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperProperty` instead
    ///
    pub const QBaseProperty = SuperProperty;

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#property)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` w: QWidget `
    ///
    pub fn SuperProperty(self: KConfigDialogManager, w: anytype) QVariant {
        comptime _ = @TypeOf(w)._is_QWidget;
        return .{ .ptr = qtc.KConfigDialogManager_SuperProperty(@ptrCast(self.ptr), @ptrCast(w.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#setupWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` widget: QWidget `
    ///
    /// ` item: KConfigSkeletonItem `
    ///
    pub fn SetupWidget(self: KConfigDialogManager, widget: anytype, item: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        comptime _ = @TypeOf(item)._is_KConfigSkeletonItem;
        qtc.KConfigDialogManager_SetupWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#setupWidget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` callback: *const fn (self: KConfigDialogManager, widget: QWidget, item: KConfigSkeletonItem) callconv(.c) void `
    ///
    pub fn OnSetupWidget(self: KConfigDialogManager, callback: *const fn (KConfigDialogManager, QWidget, KConfigSkeletonItem) callconv(.c) void) void {
        qtc.KConfigDialogManager_OnSetupWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetupWidget` instead
    ///
    pub const QBaseSetupWidget = SuperSetupWidget;

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#setupWidget)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` widget: QWidget `
    ///
    /// ` item: KConfigSkeletonItem `
    ///
    pub fn SuperSetupWidget(self: KConfigDialogManager, widget: anytype, item: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        comptime _ = @TypeOf(item)._is_KConfigSkeletonItem;
        qtc.KConfigDialogManager_SuperSetupWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#initMaps)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    pub fn InitMaps(self: KConfigDialogManager) void {
        qtc.KConfigDialogManager_InitMaps(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#initMaps)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnInitMaps(self: KConfigDialogManager, callback: *const fn () callconv(.c) void) void {
        qtc.KConfigDialogManager_OnInitMaps(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInitMaps` instead
    ///
    pub const QBaseInitMaps = SuperInitMaps;

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#initMaps)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    pub fn SuperInitMaps(self: KConfigDialogManager) void {
        qtc.KConfigDialogManager_SuperInitMaps(@ptrCast(self.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfigdialogmanager.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfigdialogmanager.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KConfigDialogManager, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfigdialogmanager.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KConfigDialogManager, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    pub fn IsWidgetType(self: KConfigDialogManager) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    pub fn IsWindowType(self: KConfigDialogManager) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    pub fn IsQuickItemType(self: KConfigDialogManager) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    pub fn SignalsBlocked(self: KConfigDialogManager) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KConfigDialogManager, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    pub fn Thread(self: KConfigDialogManager) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KConfigDialogManager, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KConfigDialogManager, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KConfigDialogManager, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KConfigDialogManager, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KConfigDialogManager, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KConfigDialogManager, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kconfigdialogmanager.Children: Memory allocation failed");
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KConfigDialogManager, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KConfigDialogManager, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KConfigDialogManager, obj: anytype) void {
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KConfigDialogManager, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KConfigDialogManager `
    ///
    pub fn Disconnect3(self: KConfigDialogManager) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KConfigDialogManager, receiver: anytype) bool {
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
    /// ` self: KConfigDialogManager `
    ///
    pub fn DumpObjectTree(self: KConfigDialogManager) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    pub fn DumpObjectInfo(self: KConfigDialogManager) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KConfigDialogManager, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kconfigdialogmanager.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kconfigdialogmanager.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KConfigDialogManager `
    ///
    pub fn BindingStorage(self: KConfigDialogManager) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    pub fn BindingStorage2(self: KConfigDialogManager) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    pub fn Destroyed(self: KConfigDialogManager) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` callback: *const fn (self: KConfigDialogManager) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KConfigDialogManager, callback: *const fn (KConfigDialogManager) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    pub fn Parent(self: KConfigDialogManager) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KConfigDialogManager, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    pub fn DeleteLater(self: KConfigDialogManager) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KConfigDialogManager, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KConfigDialogManager, time: i64, timerType: i32) i32 {
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KConfigDialogManager, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KConfigDialogManager, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KConfigDialogManager, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KConfigDialogManager, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KConfigDialogManager, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KConfigDialogManager, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` callback: *const fn (self: KConfigDialogManager, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KConfigDialogManager, callback: *const fn (KConfigDialogManager, QObject) callconv(.c) void) void {
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KConfigDialogManager, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KConfigDialogManager_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KConfigDialogManager, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KConfigDialogManager_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigDialogManager`
    ///
    /// ` callback: *const fn (self: KConfigDialogManager, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KConfigDialogManager, callback: *const fn (KConfigDialogManager, QEvent) callconv(.c) bool) void {
        qtc.KConfigDialogManager_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KConfigDialogManager, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KConfigDialogManager_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KConfigDialogManager, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KConfigDialogManager_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigDialogManager`
    ///
    /// ` callback: *const fn (self: KConfigDialogManager, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KConfigDialogManager, callback: *const fn (KConfigDialogManager, QObject, QEvent) callconv(.c) bool) void {
        qtc.KConfigDialogManager_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KConfigDialogManager, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KConfigDialogManager_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KConfigDialogManager, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KConfigDialogManager_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigDialogManager`
    ///
    /// ` callback: *const fn (self: KConfigDialogManager, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KConfigDialogManager, callback: *const fn (KConfigDialogManager, QTimerEvent) callconv(.c) void) void {
        qtc.KConfigDialogManager_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KConfigDialogManager, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KConfigDialogManager_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KConfigDialogManager, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KConfigDialogManager_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigDialogManager`
    ///
    /// ` callback: *const fn (self: KConfigDialogManager, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KConfigDialogManager, callback: *const fn (KConfigDialogManager, QChildEvent) callconv(.c) void) void {
        qtc.KConfigDialogManager_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KConfigDialogManager, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KConfigDialogManager_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KConfigDialogManager, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KConfigDialogManager_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigDialogManager`
    ///
    /// ` callback: *const fn (self: KConfigDialogManager, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KConfigDialogManager, callback: *const fn (KConfigDialogManager, QEvent) callconv(.c) void) void {
        qtc.KConfigDialogManager_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KConfigDialogManager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KConfigDialogManager_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KConfigDialogManager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KConfigDialogManager_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigDialogManager`
    ///
    /// ` callback: *const fn (self: KConfigDialogManager, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KConfigDialogManager, callback: *const fn (KConfigDialogManager, QMetaMethod) callconv(.c) void) void {
        qtc.KConfigDialogManager_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KConfigDialogManager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KConfigDialogManager_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KConfigDialogManager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KConfigDialogManager_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigDialogManager`
    ///
    /// ` callback: *const fn (self: KConfigDialogManager, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KConfigDialogManager, callback: *const fn (KConfigDialogManager, QMetaMethod) callconv(.c) void) void {
        qtc.KConfigDialogManager_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    pub fn Sender(self: KConfigDialogManager) QObject {
        return .{ .ptr = qtc.KConfigDialogManager_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KConfigDialogManager `
    ///
    pub fn SuperSender(self: KConfigDialogManager) QObject {
        return .{ .ptr = qtc.KConfigDialogManager_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigDialogManager`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KConfigDialogManager, callback: *const fn () callconv(.c) QObject) void {
        qtc.KConfigDialogManager_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    pub fn SenderSignalIndex(self: KConfigDialogManager) i32 {
        return qtc.KConfigDialogManager_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KConfigDialogManager `
    ///
    pub fn SuperSenderSignalIndex(self: KConfigDialogManager) i32 {
        return qtc.KConfigDialogManager_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigDialogManager`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KConfigDialogManager, callback: *const fn () callconv(.c) i32) void {
        qtc.KConfigDialogManager_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KConfigDialogManager, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KConfigDialogManager_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KConfigDialogManager, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KConfigDialogManager_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigDialogManager`
    ///
    /// ` callback: *const fn (self: KConfigDialogManager, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KConfigDialogManager, callback: *const fn (KConfigDialogManager, [*:0]const u8) callconv(.c) i32) void {
        qtc.KConfigDialogManager_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KConfigDialogManager, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KConfigDialogManager_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KConfigDialogManager, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KConfigDialogManager_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigDialogManager`
    ///
    /// ` callback: *const fn (self: KConfigDialogManager, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KConfigDialogManager, callback: *const fn (KConfigDialogManager, QMetaMethod) callconv(.c) bool) void {
        qtc.KConfigDialogManager_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` callback: *const fn (self: KConfigDialogManager, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KConfigDialogManager, callback: *const fn (KConfigDialogManager, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#dtor.KConfigDialogManager)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KConfigDialogManager `
    ///
    pub fn Delete(self: KConfigDialogManager) void {
        qtc.KConfigDialogManager_Delete(@ptrCast(self.ptr));
    }
};
