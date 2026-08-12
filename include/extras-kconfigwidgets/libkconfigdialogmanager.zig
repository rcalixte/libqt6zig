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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KConfigDialogManager object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QWidget `
    ///
    /// ` conf: KCoreConfigSkeleton `
    ///
    pub fn new(_parent: anytype, conf: anytype) KConfigDialogManager {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        comptime _ = @TypeOf(conf)._is_KCoreConfigSkeleton;
        return .{ .ptr = qtc.KConfigDialogManager_new(@ptrCast(_parent.ptr), @ptrCast(conf.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    pub fn metaObject(self: KConfigDialogManager) QMetaObject {
        return .{ .ptr = qtc.KConfigDialogManager_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KConfigDialogManager, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KConfigDialogManager_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KConfigDialogManager `
    ///
    pub fn superMetaObject(self: KConfigDialogManager) QMetaObject {
        return .{ .ptr = qtc.KConfigDialogManager_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KConfigDialogManager, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KConfigDialogManager_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` callback: *const fn (self: KConfigDialogManager, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KConfigDialogManager, callback: *const fn (KConfigDialogManager, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KConfigDialogManager_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KConfigDialogManager, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KConfigDialogManager_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: KConfigDialogManager, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KConfigDialogManager_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` callback: *const fn (self: KConfigDialogManager, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KConfigDialogManager, callback: *const fn (KConfigDialogManager, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KConfigDialogManager_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: KConfigDialogManager, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KConfigDialogManager_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KConfigDialogManager.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `settingsChanged` instead
    ///
    pub const SettingsChanged = settingsChanged;

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#settingsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    pub fn settingsChanged(self: KConfigDialogManager) void {
        qtc.KConfigDialogManager_SettingsChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSettingsChanged` instead
    ///
    pub const OnSettingsChanged = onSettingsChanged;

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#settingsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` callback: *const fn (self: KConfigDialogManager) callconv(.c) void `
    ///
    pub fn onSettingsChanged(self: KConfigDialogManager, callback: *const fn (KConfigDialogManager) callconv(.c) void) void {
        qtc.KConfigDialogManager_Connect_SettingsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `widgetModified` instead
    ///
    pub const WidgetModified = widgetModified;

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#widgetModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    pub fn widgetModified(self: KConfigDialogManager) void {
        qtc.KConfigDialogManager_WidgetModified(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onWidgetModified` instead
    ///
    pub const OnWidgetModified = onWidgetModified;

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#widgetModified)
    ///
    /// ## Parameters:
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` callback: *const fn (self: KConfigDialogManager) callconv(.c) void `
    ///
    pub fn onWidgetModified(self: KConfigDialogManager, callback: *const fn (KConfigDialogManager) callconv(.c) void) void {
        qtc.KConfigDialogManager_Connect_WidgetModified(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `addWidget` instead
    ///
    pub const AddWidget = addWidget;

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#addWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` widget: QWidget `
    ///
    pub fn addWidget(self: KConfigDialogManager, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.KConfigDialogManager_AddWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `hasChanged` instead
    ///
    pub const HasChanged = hasChanged;

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#hasChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    pub fn hasChanged(self: KConfigDialogManager) bool {
        return qtc.KConfigDialogManager_HasChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDefault` instead
    ///
    pub const IsDefault = isDefault;

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#isDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    pub fn isDefault(self: KConfigDialogManager) bool {
        return qtc.KConfigDialogManager_IsDefault(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `propertyMap` instead
    ///
    pub const PropertyMap = propertyMap;

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#propertyMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn propertyMap(allocator: std.mem.Allocator) Map_constu8_u8 {
        const _map: qtc.libqt_map = qtc.KConfigDialogManager_PropertyMap().?.*;
        var _ret: Map_constu8_u8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("KConfigDialogManager.propertyMap: Total capacity allocation failed");
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("KConfigDialogManager.propertyMap: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("KConfigDialogManager.propertyMap: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.putAssumeCapacity(_entry_slice, _value_slice);
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `updateSettings` instead
    ///
    pub const UpdateSettings = updateSettings;

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#updateSettings)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    pub fn updateSettings(self: KConfigDialogManager) void {
        qtc.KConfigDialogManager_UpdateSettings(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `updateWidgets` instead
    ///
    pub const UpdateWidgets = updateWidgets;

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#updateWidgets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    pub fn updateWidgets(self: KConfigDialogManager) void {
        qtc.KConfigDialogManager_UpdateWidgets(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `updateWidgetsDefault` instead
    ///
    pub const UpdateWidgetsDefault = updateWidgetsDefault;

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#updateWidgetsDefault)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    pub fn updateWidgetsDefault(self: KConfigDialogManager) void {
        qtc.KConfigDialogManager_UpdateWidgetsDefault(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDefaultsIndicatorsVisible` instead
    ///
    pub const SetDefaultsIndicatorsVisible = setDefaultsIndicatorsVisible;

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#setDefaultsIndicatorsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` enabled: bool `
    ///
    pub fn setDefaultsIndicatorsVisible(self: KConfigDialogManager, enabled: bool) void {
        qtc.KConfigDialogManager_SetDefaultsIndicatorsVisible(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `init` instead
    ///
    pub const Init = init;

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#init)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` trackChanges: bool `
    ///
    pub fn init(self: KConfigDialogManager, trackChanges: bool) void {
        qtc.KConfigDialogManager_Init(@ptrCast(self.ptr), trackChanges);
    }

    /// ### DEPRECATED: Use `onInit` instead
    ///
    pub const OnInit = onInit;

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
    pub fn onInit(self: KConfigDialogManager, callback: *const fn (KConfigDialogManager, bool) callconv(.c) void) void {
        qtc.KConfigDialogManager_OnInit(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInit` instead
    ///
    pub const SuperInit = superInit;

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
    pub fn superInit(self: KConfigDialogManager, trackChanges: bool) void {
        qtc.KConfigDialogManager_SuperInit(@ptrCast(self.ptr), trackChanges);
    }

    /// ### DEPRECATED: Use `parseChildren` instead
    ///
    pub const ParseChildren = parseChildren;

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
    pub fn parseChildren(self: KConfigDialogManager, widget: anytype, trackChanges: bool) bool {
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.KConfigDialogManager_ParseChildren(@ptrCast(self.ptr), @ptrCast(widget.ptr), trackChanges);
    }

    /// ### DEPRECATED: Use `onParseChildren` instead
    ///
    pub const OnParseChildren = onParseChildren;

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
    pub fn onParseChildren(self: KConfigDialogManager, callback: *const fn (KConfigDialogManager, QWidget, bool) callconv(.c) bool) void {
        qtc.KConfigDialogManager_OnParseChildren(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superParseChildren` instead
    ///
    pub const SuperParseChildren = superParseChildren;

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
    pub fn superParseChildren(self: KConfigDialogManager, widget: anytype, trackChanges: bool) bool {
        comptime _ = @TypeOf(widget)._is_QWidget;
        return qtc.KConfigDialogManager_SuperParseChildren(@ptrCast(self.ptr), @ptrCast(widget.ptr), trackChanges);
    }

    /// ### DEPRECATED: Use `getUserProperty` instead
    ///
    pub const GetUserProperty = getUserProperty;

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
    pub fn getUserProperty(self: KConfigDialogManager, allocator: std.mem.Allocator, widget: anytype) []u8 {
        comptime _ = @TypeOf(widget)._is_QWidget;
        var _bytearray: qtc.libqt_string = qtc.KConfigDialogManager_GetUserProperty(@ptrCast(self.ptr), @ptrCast(widget.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KConfigDialogManager.getUserProperty: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onGetUserProperty` instead
    ///
    pub const OnGetUserProperty = onGetUserProperty;

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
    pub fn onGetUserProperty(self: KConfigDialogManager, callback: *const fn (KConfigDialogManager, QWidget) callconv(.c) qtc.libqt_string) void {
        qtc.KConfigDialogManager_OnGetUserProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superGetUserProperty` instead
    ///
    pub const SuperGetUserProperty = superGetUserProperty;

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
    pub fn superGetUserProperty(self: KConfigDialogManager, allocator: std.mem.Allocator, widget: anytype) []u8 {
        comptime _ = @TypeOf(widget)._is_QWidget;
        var _bytearray: qtc.libqt_string = qtc.KConfigDialogManager_SuperGetUserProperty(@ptrCast(self.ptr), @ptrCast(widget.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KConfigDialogManager.getUserProperty: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `getCustomProperty` instead
    ///
    pub const GetCustomProperty = getCustomProperty;

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
    pub fn getCustomProperty(self: KConfigDialogManager, allocator: std.mem.Allocator, widget: anytype) []u8 {
        comptime _ = @TypeOf(widget)._is_QWidget;
        var _bytearray: qtc.libqt_string = qtc.KConfigDialogManager_GetCustomProperty(@ptrCast(self.ptr), @ptrCast(widget.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KConfigDialogManager.getCustomProperty: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onGetCustomProperty` instead
    ///
    pub const OnGetCustomProperty = onGetCustomProperty;

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
    pub fn onGetCustomProperty(self: KConfigDialogManager, callback: *const fn (KConfigDialogManager, QWidget) callconv(.c) qtc.libqt_string) void {
        qtc.KConfigDialogManager_OnGetCustomProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superGetCustomProperty` instead
    ///
    pub const SuperGetCustomProperty = superGetCustomProperty;

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
    pub fn superGetCustomProperty(self: KConfigDialogManager, allocator: std.mem.Allocator, widget: anytype) []u8 {
        comptime _ = @TypeOf(widget)._is_QWidget;
        var _bytearray: qtc.libqt_string = qtc.KConfigDialogManager_SuperGetCustomProperty(@ptrCast(self.ptr), @ptrCast(widget.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KConfigDialogManager.getCustomProperty: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `getUserPropertyChangedSignal` instead
    ///
    pub const GetUserPropertyChangedSignal = getUserPropertyChangedSignal;

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
    pub fn getUserPropertyChangedSignal(self: KConfigDialogManager, allocator: std.mem.Allocator, widget: anytype) []u8 {
        comptime _ = @TypeOf(widget)._is_QWidget;
        var _bytearray: qtc.libqt_string = qtc.KConfigDialogManager_GetUserPropertyChangedSignal(@ptrCast(self.ptr), @ptrCast(widget.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KConfigDialogManager.getUserPropertyChangedSignal: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onGetUserPropertyChangedSignal` instead
    ///
    pub const OnGetUserPropertyChangedSignal = onGetUserPropertyChangedSignal;

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
    pub fn onGetUserPropertyChangedSignal(self: KConfigDialogManager, callback: *const fn (KConfigDialogManager, QWidget) callconv(.c) qtc.libqt_string) void {
        qtc.KConfigDialogManager_OnGetUserPropertyChangedSignal(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superGetUserPropertyChangedSignal` instead
    ///
    pub const SuperGetUserPropertyChangedSignal = superGetUserPropertyChangedSignal;

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
    pub fn superGetUserPropertyChangedSignal(self: KConfigDialogManager, allocator: std.mem.Allocator, widget: anytype) []u8 {
        comptime _ = @TypeOf(widget)._is_QWidget;
        var _bytearray: qtc.libqt_string = qtc.KConfigDialogManager_SuperGetUserPropertyChangedSignal(@ptrCast(self.ptr), @ptrCast(widget.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KConfigDialogManager.getUserPropertyChangedSignal: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `getCustomPropertyChangedSignal` instead
    ///
    pub const GetCustomPropertyChangedSignal = getCustomPropertyChangedSignal;

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
    pub fn getCustomPropertyChangedSignal(self: KConfigDialogManager, allocator: std.mem.Allocator, widget: anytype) []u8 {
        comptime _ = @TypeOf(widget)._is_QWidget;
        var _bytearray: qtc.libqt_string = qtc.KConfigDialogManager_GetCustomPropertyChangedSignal(@ptrCast(self.ptr), @ptrCast(widget.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KConfigDialogManager.getCustomPropertyChangedSignal: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onGetCustomPropertyChangedSignal` instead
    ///
    pub const OnGetCustomPropertyChangedSignal = onGetCustomPropertyChangedSignal;

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
    pub fn onGetCustomPropertyChangedSignal(self: KConfigDialogManager, callback: *const fn (KConfigDialogManager, QWidget) callconv(.c) qtc.libqt_string) void {
        qtc.KConfigDialogManager_OnGetCustomPropertyChangedSignal(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superGetCustomPropertyChangedSignal` instead
    ///
    pub const SuperGetCustomPropertyChangedSignal = superGetCustomPropertyChangedSignal;

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
    pub fn superGetCustomPropertyChangedSignal(self: KConfigDialogManager, allocator: std.mem.Allocator, widget: anytype) []u8 {
        comptime _ = @TypeOf(widget)._is_QWidget;
        var _bytearray: qtc.libqt_string = qtc.KConfigDialogManager_SuperGetCustomPropertyChangedSignal(@ptrCast(self.ptr), @ptrCast(widget.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KConfigDialogManager.getCustomPropertyChangedSignal: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

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
    pub fn setProperty(self: KConfigDialogManager, w: anytype, v: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        comptime _ = @TypeOf(v)._is_QVariant;
        qtc.KConfigDialogManager_SetProperty(@ptrCast(self.ptr), @ptrCast(w.ptr), @ptrCast(v.ptr));
    }

    /// ### DEPRECATED: Use `onSetProperty` instead
    ///
    pub const OnSetProperty = onSetProperty;

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
    pub fn onSetProperty(self: KConfigDialogManager, callback: *const fn (KConfigDialogManager, QWidget, QVariant) callconv(.c) void) void {
        qtc.KConfigDialogManager_OnSetProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetProperty` instead
    ///
    pub const SuperSetProperty = superSetProperty;

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
    pub fn superSetProperty(self: KConfigDialogManager, w: anytype, v: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        comptime _ = @TypeOf(v)._is_QVariant;
        qtc.KConfigDialogManager_SuperSetProperty(@ptrCast(self.ptr), @ptrCast(w.ptr), @ptrCast(v.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    /// ` w: QWidget `
    ///
    pub fn property(self: KConfigDialogManager, w: anytype) QVariant {
        comptime _ = @TypeOf(w)._is_QWidget;
        return .{ .ptr = qtc.KConfigDialogManager_Property(@ptrCast(self.ptr), @ptrCast(w.ptr)) };
    }

    /// ### DEPRECATED: Use `onProperty` instead
    ///
    pub const OnProperty = onProperty;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onProperty(self: KConfigDialogManager, callback: *const fn (KConfigDialogManager, QWidget) callconv(.c) QVariant) void {
        qtc.KConfigDialogManager_OnProperty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superProperty` instead
    ///
    pub const SuperProperty = superProperty;

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
    pub fn superProperty(self: KConfigDialogManager, w: anytype) QVariant {
        comptime _ = @TypeOf(w)._is_QWidget;
        return .{ .ptr = qtc.KConfigDialogManager_SuperProperty(@ptrCast(self.ptr), @ptrCast(w.ptr)) };
    }

    /// ### DEPRECATED: Use `setupWidget` instead
    ///
    pub const SetupWidget = setupWidget;

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
    pub fn setupWidget(self: KConfigDialogManager, widget: anytype, item: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        comptime _ = @TypeOf(item)._is_KConfigSkeletonItem;
        qtc.KConfigDialogManager_SetupWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `onSetupWidget` instead
    ///
    pub const OnSetupWidget = onSetupWidget;

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
    pub fn onSetupWidget(self: KConfigDialogManager, callback: *const fn (KConfigDialogManager, QWidget, KConfigSkeletonItem) callconv(.c) void) void {
        qtc.KConfigDialogManager_OnSetupWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetupWidget` instead
    ///
    pub const SuperSetupWidget = superSetupWidget;

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
    pub fn superSetupWidget(self: KConfigDialogManager, widget: anytype, item: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        comptime _ = @TypeOf(item)._is_KConfigSkeletonItem;
        qtc.KConfigDialogManager_SuperSetupWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr), @ptrCast(item.ptr));
    }

    /// ### DEPRECATED: Use `initMaps` instead
    ///
    pub const InitMaps = initMaps;

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#initMaps)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    pub fn initMaps(self: KConfigDialogManager) void {
        qtc.KConfigDialogManager_InitMaps(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onInitMaps` instead
    ///
    pub const OnInitMaps = onInitMaps;

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
    pub fn onInitMaps(self: KConfigDialogManager, callback: *const fn () callconv(.c) void) void {
        qtc.KConfigDialogManager_OnInitMaps(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInitMaps` instead
    ///
    pub const SuperInitMaps = superInitMaps;

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#initMaps)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    pub fn superInitMaps(self: KConfigDialogManager) void {
        qtc.KConfigDialogManager_SuperInitMaps(@ptrCast(self.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KConfigDialogManager.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KConfigDialogManager.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KConfigDialogManager, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KConfigDialogManager.objectName: Memory allocation failed");
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KConfigDialogManager, name: []const u8) void {
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
    /// ` self: KConfigDialogManager `
    ///
    pub fn isWidgetType(self: KConfigDialogManager) bool {
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
    /// ` self: KConfigDialogManager `
    ///
    pub fn isWindowType(self: KConfigDialogManager) bool {
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
    /// ` self: KConfigDialogManager `
    ///
    pub fn isQuickItemType(self: KConfigDialogManager) bool {
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
    /// ` self: KConfigDialogManager `
    ///
    pub fn signalsBlocked(self: KConfigDialogManager) bool {
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KConfigDialogManager, b: bool) bool {
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
    /// ` self: KConfigDialogManager `
    ///
    pub fn thread(self: KConfigDialogManager) QThread {
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KConfigDialogManager, _thread: anytype) bool {
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KConfigDialogManager, interval: i32) i32 {
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KConfigDialogManager, time: i64) i32 {
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KConfigDialogManager, id: i32) void {
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KConfigDialogManager, id: i32) void {
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KConfigDialogManager, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KConfigDialogManager.children: Memory allocation failed");
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KConfigDialogManager, _parent: anytype) void {
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KConfigDialogManager, filterObj: anytype) void {
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KConfigDialogManager, obj: anytype) void {
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KConfigDialogManager, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KConfigDialogManager `
    ///
    pub fn disconnect3(self: KConfigDialogManager) bool {
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KConfigDialogManager, receiver: anytype) bool {
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
    /// ` self: KConfigDialogManager `
    ///
    pub fn dumpObjectTree(self: KConfigDialogManager) void {
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
    /// ` self: KConfigDialogManager `
    ///
    pub fn dumpObjectInfo(self: KConfigDialogManager) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KConfigDialogManager, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KConfigDialogManager.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KConfigDialogManager.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KConfigDialogManager `
    ///
    pub fn bindingStorage(self: KConfigDialogManager) QBindingStorage {
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
    /// ` self: KConfigDialogManager `
    ///
    pub fn bindingStorage2(self: KConfigDialogManager) QBindingStorage {
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
    /// ` self: KConfigDialogManager `
    ///
    pub fn destroyed(self: KConfigDialogManager) void {
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` callback: *const fn (self: KConfigDialogManager) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KConfigDialogManager, callback: *const fn (KConfigDialogManager) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KConfigDialogManager `
    ///
    pub fn parent(self: KConfigDialogManager) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KConfigDialogManager, classname: [:0]const u8) bool {
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
    /// ` self: KConfigDialogManager `
    ///
    pub fn deleteLater(self: KConfigDialogManager) void {
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KConfigDialogManager, interval: i32, timerType: i32) i32 {
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KConfigDialogManager, time: i64, timerType: i32) i32 {
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KConfigDialogManager, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KConfigDialogManager, signal: [:0]const u8) bool {
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KConfigDialogManager, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KConfigDialogManager, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KConfigDialogManager, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KConfigDialogManager, param1: anytype) void {
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` callback: *const fn (self: KConfigDialogManager, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KConfigDialogManager, callback: *const fn (KConfigDialogManager, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KConfigDialogManager, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KConfigDialogManager_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KConfigDialogManager, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KConfigDialogManager_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KConfigDialogManager`
    ///
    /// ` callback: *const fn (self: KConfigDialogManager, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: KConfigDialogManager, callback: *const fn (KConfigDialogManager, QEvent) callconv(.c) bool) void {
        qtc.KConfigDialogManager_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KConfigDialogManager, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KConfigDialogManager_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KConfigDialogManager, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KConfigDialogManager_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KConfigDialogManager`
    ///
    /// ` callback: *const fn (self: KConfigDialogManager, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: KConfigDialogManager, callback: *const fn (KConfigDialogManager, QObject, QEvent) callconv(.c) bool) void {
        qtc.KConfigDialogManager_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KConfigDialogManager, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KConfigDialogManager_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KConfigDialogManager, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KConfigDialogManager_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KConfigDialogManager`
    ///
    /// ` callback: *const fn (self: KConfigDialogManager, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KConfigDialogManager, callback: *const fn (KConfigDialogManager, QTimerEvent) callconv(.c) void) void {
        qtc.KConfigDialogManager_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KConfigDialogManager, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KConfigDialogManager_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KConfigDialogManager, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KConfigDialogManager_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KConfigDialogManager`
    ///
    /// ` callback: *const fn (self: KConfigDialogManager, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KConfigDialogManager, callback: *const fn (KConfigDialogManager, QChildEvent) callconv(.c) void) void {
        qtc.KConfigDialogManager_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KConfigDialogManager, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KConfigDialogManager_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KConfigDialogManager, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KConfigDialogManager_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KConfigDialogManager`
    ///
    /// ` callback: *const fn (self: KConfigDialogManager, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KConfigDialogManager, callback: *const fn (KConfigDialogManager, QEvent) callconv(.c) void) void {
        qtc.KConfigDialogManager_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KConfigDialogManager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KConfigDialogManager_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KConfigDialogManager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KConfigDialogManager_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KConfigDialogManager`
    ///
    /// ` callback: *const fn (self: KConfigDialogManager, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KConfigDialogManager, callback: *const fn (KConfigDialogManager, QMetaMethod) callconv(.c) void) void {
        qtc.KConfigDialogManager_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KConfigDialogManager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KConfigDialogManager_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KConfigDialogManager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KConfigDialogManager_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KConfigDialogManager`
    ///
    /// ` callback: *const fn (self: KConfigDialogManager, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KConfigDialogManager, callback: *const fn (KConfigDialogManager, QMetaMethod) callconv(.c) void) void {
        qtc.KConfigDialogManager_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KConfigDialogManager `
    ///
    pub fn sender(self: KConfigDialogManager) QObject {
        return .{ .ptr = qtc.KConfigDialogManager_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KConfigDialogManager `
    ///
    pub fn superSender(self: KConfigDialogManager) QObject {
        return .{ .ptr = qtc.KConfigDialogManager_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KConfigDialogManager`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KConfigDialogManager, callback: *const fn () callconv(.c) QObject) void {
        qtc.KConfigDialogManager_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KConfigDialogManager `
    ///
    pub fn senderSignalIndex(self: KConfigDialogManager) i32 {
        return qtc.KConfigDialogManager_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KConfigDialogManager `
    ///
    pub fn superSenderSignalIndex(self: KConfigDialogManager) i32 {
        return qtc.KConfigDialogManager_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KConfigDialogManager`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KConfigDialogManager, callback: *const fn () callconv(.c) i32) void {
        qtc.KConfigDialogManager_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KConfigDialogManager, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KConfigDialogManager_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KConfigDialogManager, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KConfigDialogManager_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KConfigDialogManager`
    ///
    /// ` callback: *const fn (self: KConfigDialogManager, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KConfigDialogManager, callback: *const fn (KConfigDialogManager, [*:0]const u8) callconv(.c) i32) void {
        qtc.KConfigDialogManager_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KConfigDialogManager, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KConfigDialogManager_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KConfigDialogManager, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KConfigDialogManager_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KConfigDialogManager`
    ///
    /// ` callback: *const fn (self: KConfigDialogManager, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KConfigDialogManager, callback: *const fn (KConfigDialogManager, QMetaMethod) callconv(.c) bool) void {
        qtc.KConfigDialogManager_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KConfigDialogManager `
    ///
    /// ` callback: *const fn (self: KConfigDialogManager, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KConfigDialogManager, callback: *const fn (KConfigDialogManager, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kconfigdialogmanager.html#dtor.KConfigDialogManager)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KConfigDialogManager `
    ///
    pub fn delete(self: KConfigDialogManager) void {
        qtc.KConfigDialogManager_Delete(@ptrCast(self.ptr));
    }
};
