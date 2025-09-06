const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
pub const map_constu8_u8 = std.StringHashMapUnmanaged([]u8);

/// https://api-staging.kde.org/kconfigdialogmanager.html
pub const kconfigdialogmanager = struct {
    /// New constructs a new KConfigDialogManager object.
    ///
    /// ``` parent: QtC.QWidget, conf: QtC.KCoreConfigSkeleton ```
    pub fn New(parent: ?*anyopaque, conf: ?*anyopaque) QtC.KConfigDialogManager {
        return qtc.KConfigDialogManager_new(@ptrCast(parent), @ptrCast(conf));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KConfigDialogManager ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KConfigDialogManager_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KConfigDialogManager, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KConfigDialogManager_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KConfigDialogManager, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KConfigDialogManager_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KConfigDialogManager, slot: fn (self: QtC.KConfigDialogManager, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.KConfigDialogManager_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.KConfigDialogManager, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KConfigDialogManager_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KConfigDialogManager_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfigdialogmanager.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfigdialogmanager.html#settingsChanged)
    ///
    /// ``` self: QtC.KConfigDialogManager ```
    pub fn SettingsChanged(self: ?*anyopaque) void {
        qtc.KConfigDialogManager_SettingsChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfigdialogmanager.html#settingsChanged)
    ///
    /// ``` self: QtC.KConfigDialogManager, slot: fn (self: QtC.KConfigDialogManager) callconv(.c) void ```
    pub fn OnSettingsChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.KConfigDialogManager_Connect_SettingsChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfigdialogmanager.html#widgetModified)
    ///
    /// ``` self: QtC.KConfigDialogManager ```
    pub fn WidgetModified(self: ?*anyopaque) void {
        qtc.KConfigDialogManager_WidgetModified(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfigdialogmanager.html#widgetModified)
    ///
    /// ``` self: QtC.KConfigDialogManager, slot: fn (self: QtC.KConfigDialogManager) callconv(.c) void ```
    pub fn OnWidgetModified(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.KConfigDialogManager_Connect_WidgetModified(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfigdialogmanager.html#addWidget)
    ///
    /// ``` self: QtC.KConfigDialogManager, widget: QtC.QWidget ```
    pub fn AddWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.KConfigDialogManager_AddWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfigdialogmanager.html#hasChanged)
    ///
    /// ``` self: QtC.KConfigDialogManager ```
    pub fn HasChanged(self: ?*anyopaque) bool {
        return qtc.KConfigDialogManager_HasChanged(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfigdialogmanager.html#isDefault)
    ///
    /// ``` self: QtC.KConfigDialogManager ```
    pub fn IsDefault(self: ?*anyopaque) bool {
        return qtc.KConfigDialogManager_IsDefault(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfigdialogmanager.html#propertyMap)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn PropertyMap(allocator: std.mem.Allocator) *map_constu8_u8 {
        const _map: qtc.libqt_map = qtc.KConfigDialogManager_PropertyMap();
        var _ret: map_constu8_u8 = .empty;
        defer {
            const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
            for (0.._map.len) |i| {
                qtc.libqt_free(_keys[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
        const _values: [*][]u8 = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _entry_slice = std.mem.span(_key.data);
            const _value = _values[i];
            _ret.put(allocator, _entry_slice, _value) catch @panic("kconfigdialogmanager.PropertyMap: Memory allocation failed");
        }
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfigdialogmanager.html#updateSettings)
    ///
    /// ``` self: QtC.KConfigDialogManager ```
    pub fn UpdateSettings(self: ?*anyopaque) void {
        qtc.KConfigDialogManager_UpdateSettings(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfigdialogmanager.html#updateWidgets)
    ///
    /// ``` self: QtC.KConfigDialogManager ```
    pub fn UpdateWidgets(self: ?*anyopaque) void {
        qtc.KConfigDialogManager_UpdateWidgets(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfigdialogmanager.html#updateWidgetsDefault)
    ///
    /// ``` self: QtC.KConfigDialogManager ```
    pub fn UpdateWidgetsDefault(self: ?*anyopaque) void {
        qtc.KConfigDialogManager_UpdateWidgetsDefault(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfigdialogmanager.html#setDefaultsIndicatorsVisible)
    ///
    /// ``` self: QtC.KConfigDialogManager, enabled: bool ```
    pub fn SetDefaultsIndicatorsVisible(self: ?*anyopaque, enabled: bool) void {
        qtc.KConfigDialogManager_SetDefaultsIndicatorsVisible(@ptrCast(self), enabled);
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfigdialogmanager.html#init)
    ///
    /// ``` self: QtC.KConfigDialogManager, trackChanges: bool ```
    pub fn Init(self: ?*anyopaque, trackChanges: bool) void {
        qtc.KConfigDialogManager_Init(@ptrCast(self), trackChanges);
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfigdialogmanager.html#init)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KConfigDialogManager, slot: fn (self: QtC.KConfigDialogManager, trackChanges: bool) callconv(.c) void ```
    pub fn OnInit(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.KConfigDialogManager_OnInit(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfigdialogmanager.html#init)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KConfigDialogManager, trackChanges: bool ```
    pub fn QBaseInit(self: ?*anyopaque, trackChanges: bool) void {
        qtc.KConfigDialogManager_QBaseInit(@ptrCast(self), trackChanges);
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfigdialogmanager.html#parseChildren)
    ///
    /// ``` self: QtC.KConfigDialogManager, widget: QtC.QWidget, trackChanges: bool ```
    pub fn ParseChildren(self: ?*anyopaque, widget: ?*anyopaque, trackChanges: bool) bool {
        return qtc.KConfigDialogManager_ParseChildren(@ptrCast(self), @ptrCast(widget), trackChanges);
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfigdialogmanager.html#parseChildren)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KConfigDialogManager, slot: fn (self: QtC.KConfigDialogManager, widget: QtC.QWidget, trackChanges: bool) callconv(.c) bool ```
    pub fn OnParseChildren(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, bool) callconv(.c) bool) void {
        qtc.KConfigDialogManager_OnParseChildren(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfigdialogmanager.html#parseChildren)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KConfigDialogManager, widget: QtC.QWidget, trackChanges: bool ```
    pub fn QBaseParseChildren(self: ?*anyopaque, widget: ?*anyopaque, trackChanges: bool) bool {
        return qtc.KConfigDialogManager_QBaseParseChildren(@ptrCast(self), @ptrCast(widget), trackChanges);
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfigdialogmanager.html#getUserProperty)
    ///
    /// ``` self: QtC.KConfigDialogManager, widget: QtC.QWidget, allocator: std.mem.Allocator ```
    pub fn GetUserProperty(self: ?*anyopaque, widget: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.KConfigDialogManager_GetUserProperty(@ptrCast(self), @ptrCast(widget));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kconfigdialogmanager.GetUserProperty: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfigdialogmanager.html#getUserProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KConfigDialogManager, slot: fn (self: QtC.KConfigDialogManager, widget: QtC.QWidget) callconv(.c) [*:0]u8 ```
    pub fn OnGetUserProperty(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) [*:0]u8) void {
        qtc.KConfigDialogManager_OnGetUserProperty(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfigdialogmanager.html#getUserProperty)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KConfigDialogManager, widget: QtC.QWidget, allocator: std.mem.Allocator ```
    pub fn QBaseGetUserProperty(self: ?*anyopaque, widget: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.KConfigDialogManager_QBaseGetUserProperty(@ptrCast(self), @ptrCast(widget));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kconfigdialogmanager.GetUserProperty: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfigdialogmanager.html#getCustomProperty)
    ///
    /// ``` self: QtC.KConfigDialogManager, widget: QtC.QWidget, allocator: std.mem.Allocator ```
    pub fn GetCustomProperty(self: ?*anyopaque, widget: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.KConfigDialogManager_GetCustomProperty(@ptrCast(self), @ptrCast(widget));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kconfigdialogmanager.GetCustomProperty: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfigdialogmanager.html#getCustomProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KConfigDialogManager, slot: fn (self: QtC.KConfigDialogManager, widget: QtC.QWidget) callconv(.c) [*:0]u8 ```
    pub fn OnGetCustomProperty(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) [*:0]u8) void {
        qtc.KConfigDialogManager_OnGetCustomProperty(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfigdialogmanager.html#getCustomProperty)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KConfigDialogManager, widget: QtC.QWidget, allocator: std.mem.Allocator ```
    pub fn QBaseGetCustomProperty(self: ?*anyopaque, widget: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.KConfigDialogManager_QBaseGetCustomProperty(@ptrCast(self), @ptrCast(widget));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kconfigdialogmanager.GetCustomProperty: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfigdialogmanager.html#getUserPropertyChangedSignal)
    ///
    /// ``` self: QtC.KConfigDialogManager, widget: QtC.QWidget, allocator: std.mem.Allocator ```
    pub fn GetUserPropertyChangedSignal(self: ?*anyopaque, widget: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.KConfigDialogManager_GetUserPropertyChangedSignal(@ptrCast(self), @ptrCast(widget));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kconfigdialogmanager.GetUserPropertyChangedSignal: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfigdialogmanager.html#getUserPropertyChangedSignal)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KConfigDialogManager, slot: fn (self: QtC.KConfigDialogManager, widget: QtC.QWidget) callconv(.c) [*:0]u8 ```
    pub fn OnGetUserPropertyChangedSignal(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) [*:0]u8) void {
        qtc.KConfigDialogManager_OnGetUserPropertyChangedSignal(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfigdialogmanager.html#getUserPropertyChangedSignal)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KConfigDialogManager, widget: QtC.QWidget, allocator: std.mem.Allocator ```
    pub fn QBaseGetUserPropertyChangedSignal(self: ?*anyopaque, widget: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.KConfigDialogManager_QBaseGetUserPropertyChangedSignal(@ptrCast(self), @ptrCast(widget));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kconfigdialogmanager.GetUserPropertyChangedSignal: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfigdialogmanager.html#getCustomPropertyChangedSignal)
    ///
    /// ``` self: QtC.KConfigDialogManager, widget: QtC.QWidget, allocator: std.mem.Allocator ```
    pub fn GetCustomPropertyChangedSignal(self: ?*anyopaque, widget: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.KConfigDialogManager_GetCustomPropertyChangedSignal(@ptrCast(self), @ptrCast(widget));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kconfigdialogmanager.GetCustomPropertyChangedSignal: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfigdialogmanager.html#getCustomPropertyChangedSignal)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KConfigDialogManager, slot: fn (self: QtC.KConfigDialogManager, widget: QtC.QWidget) callconv(.c) [*:0]u8 ```
    pub fn OnGetCustomPropertyChangedSignal(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) [*:0]u8) void {
        qtc.KConfigDialogManager_OnGetCustomPropertyChangedSignal(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfigdialogmanager.html#getCustomPropertyChangedSignal)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KConfigDialogManager, widget: QtC.QWidget, allocator: std.mem.Allocator ```
    pub fn QBaseGetCustomPropertyChangedSignal(self: ?*anyopaque, widget: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.KConfigDialogManager_QBaseGetCustomPropertyChangedSignal(@ptrCast(self), @ptrCast(widget));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kconfigdialogmanager.GetCustomPropertyChangedSignal: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfigdialogmanager.html#setProperty)
    ///
    /// ``` self: QtC.KConfigDialogManager, w: QtC.QWidget, v: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, w: ?*anyopaque, v: ?*anyopaque) void {
        qtc.KConfigDialogManager_SetProperty(@ptrCast(self), @ptrCast(w), @ptrCast(v));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfigdialogmanager.html#setProperty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KConfigDialogManager, slot: fn (self: QtC.KConfigDialogManager, w: QtC.QWidget, v: QtC.QVariant) callconv(.c) void ```
    pub fn OnSetProperty(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KConfigDialogManager_OnSetProperty(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfigdialogmanager.html#setProperty)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KConfigDialogManager, w: QtC.QWidget, v: QtC.QVariant ```
    pub fn QBaseSetProperty(self: ?*anyopaque, w: ?*anyopaque, v: ?*anyopaque) void {
        qtc.KConfigDialogManager_QBaseSetProperty(@ptrCast(self), @ptrCast(w), @ptrCast(v));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfigdialogmanager.html#property)
    ///
    /// ``` self: QtC.KConfigDialogManager, w: QtC.QWidget ```
    pub fn Property(self: ?*anyopaque, w: ?*anyopaque) QtC.QVariant {
        return qtc.KConfigDialogManager_Property(@ptrCast(self), @ptrCast(w));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfigdialogmanager.html#property)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KConfigDialogManager, slot: fn (self: QtC.KConfigDialogManager, w: QtC.QWidget) callconv(.c) QtC.QVariant ```
    pub fn OnProperty(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QVariant) void {
        qtc.KConfigDialogManager_OnProperty(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfigdialogmanager.html#property)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KConfigDialogManager, w: QtC.QWidget ```
    pub fn QBaseProperty(self: ?*anyopaque, w: ?*anyopaque) QtC.QVariant {
        return qtc.KConfigDialogManager_QBaseProperty(@ptrCast(self), @ptrCast(w));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfigdialogmanager.html#setupWidget)
    ///
    /// ``` self: QtC.KConfigDialogManager, widget: QtC.QWidget, item: QtC.KConfigSkeletonItem ```
    pub fn SetupWidget(self: ?*anyopaque, widget: ?*anyopaque, item: ?*anyopaque) void {
        qtc.KConfigDialogManager_SetupWidget(@ptrCast(self), @ptrCast(widget), @ptrCast(item));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfigdialogmanager.html#setupWidget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KConfigDialogManager, slot: fn (self: QtC.KConfigDialogManager, widget: QtC.QWidget, item: QtC.KConfigSkeletonItem) callconv(.c) void ```
    pub fn OnSetupWidget(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KConfigDialogManager_OnSetupWidget(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfigdialogmanager.html#setupWidget)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KConfigDialogManager, widget: QtC.QWidget, item: QtC.KConfigSkeletonItem ```
    pub fn QBaseSetupWidget(self: ?*anyopaque, widget: ?*anyopaque, item: ?*anyopaque) void {
        qtc.KConfigDialogManager_QBaseSetupWidget(@ptrCast(self), @ptrCast(widget), @ptrCast(item));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfigdialogmanager.html#initMaps)
    ///
    /// ``` self: QtC.KConfigDialogManager ```
    pub fn InitMaps(self: ?*anyopaque) void {
        qtc.KConfigDialogManager_InitMaps(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfigdialogmanager.html#initMaps)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KConfigDialogManager, slot: fn () callconv(.c) void ```
    pub fn OnInitMaps(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KConfigDialogManager_OnInitMaps(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfigdialogmanager.html#initMaps)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KConfigDialogManager ```
    pub fn QBaseInitMaps(self: ?*anyopaque) void {
        qtc.KConfigDialogManager_QBaseInitMaps(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KConfigDialogManager_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfigdialogmanager.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KConfigDialogManager_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfigdialogmanager.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.KConfigDialogManager, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kconfigdialogmanager.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KConfigDialogManager, name: []const u8 ```
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
    /// ``` self: QtC.KConfigDialogManager ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KConfigDialogManager ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KConfigDialogManager ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KConfigDialogManager ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KConfigDialogManager, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KConfigDialogManager ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KConfigDialogManager, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KConfigDialogManager, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KConfigDialogManager, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KConfigDialogManager, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KConfigDialogManager, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("kconfigdialogmanager.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.KConfigDialogManager, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KConfigDialogManager, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KConfigDialogManager, obj: QtC.QObject ```
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
    /// ``` self: QtC.KConfigDialogManager, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.KConfigDialogManager ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KConfigDialogManager ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KConfigDialogManager, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KConfigDialogManager ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KConfigDialogManager ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KConfigDialogManager ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KConfigDialogManager, slot: fn (self: QtC.KConfigDialogManager) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KConfigDialogManager ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KConfigDialogManager, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KConfigDialogManager ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KConfigDialogManager, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KConfigDialogManager, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.KConfigDialogManager, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KConfigDialogManager, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KConfigDialogManager, slot: fn (self: QtC.KConfigDialogManager, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KConfigDialogManager, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KConfigDialogManager_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigDialogManager, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KConfigDialogManager_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigDialogManager, slot: fn (self: QtC.KConfigDialogManager, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KConfigDialogManager_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KConfigDialogManager, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KConfigDialogManager_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigDialogManager, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KConfigDialogManager_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigDialogManager, slot: fn (self: QtC.KConfigDialogManager, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KConfigDialogManager_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KConfigDialogManager, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KConfigDialogManager_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigDialogManager, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KConfigDialogManager_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigDialogManager, slot: fn (self: QtC.KConfigDialogManager, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KConfigDialogManager_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KConfigDialogManager, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KConfigDialogManager_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigDialogManager, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KConfigDialogManager_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigDialogManager, slot: fn (self: QtC.KConfigDialogManager, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KConfigDialogManager_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KConfigDialogManager, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KConfigDialogManager_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigDialogManager, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KConfigDialogManager_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigDialogManager, slot: fn (self: QtC.KConfigDialogManager, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KConfigDialogManager_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KConfigDialogManager, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KConfigDialogManager_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigDialogManager, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KConfigDialogManager_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigDialogManager, slot: fn (self: QtC.KConfigDialogManager, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KConfigDialogManager_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KConfigDialogManager, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KConfigDialogManager_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigDialogManager, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KConfigDialogManager_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigDialogManager, slot: fn (self: QtC.KConfigDialogManager, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KConfigDialogManager_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KConfigDialogManager ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KConfigDialogManager_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigDialogManager ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KConfigDialogManager_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigDialogManager, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.KConfigDialogManager_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KConfigDialogManager ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KConfigDialogManager_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigDialogManager ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KConfigDialogManager_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigDialogManager, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.KConfigDialogManager_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KConfigDialogManager, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KConfigDialogManager_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigDialogManager, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KConfigDialogManager_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigDialogManager, slot: fn (self: QtC.KConfigDialogManager, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KConfigDialogManager_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KConfigDialogManager, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KConfigDialogManager_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigDialogManager, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KConfigDialogManager_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KConfigDialogManager, slot: fn (self: QtC.KConfigDialogManager, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KConfigDialogManager_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KConfigDialogManager, slot: fn (self: QtC.KConfigDialogManager, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kconfigdialogmanager.html#dtor.KConfigDialogManager)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KConfigDialogManager ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KConfigDialogManager_Delete(@ptrCast(self));
    }
};
