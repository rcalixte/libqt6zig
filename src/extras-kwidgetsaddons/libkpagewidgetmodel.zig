const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAction = @import("libqt6").QAction;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QDataStream = @import("libqt6").QDataStream;
const QEvent = @import("libqt6").QEvent;
const QIcon = @import("libqt6").QIcon;
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
const QWidget = @import("libqt6").QWidget;
const qabstractitemmodel_enums = @import("../libqabstractitemmodel.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const ArrayMap_i32_QVariant = std.array_hash_map.Auto(i32, QVariant);
const Map_i32_u8 = std.AutoHashMapUnmanaged(i32, []u8);

/// ### [Upstream resources](https://api.kde.org/kpagewidgetitem.html)
pub const KPageWidgetItem = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kpagewidgetitem.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KPageWidgetItem,

    pub const _is_KPageWidgetItem = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KPageWidgetItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _widget: QWidget `
    ///
    pub fn new(_widget: anytype) KPageWidgetItem {
        comptime _ = @TypeOf(_widget)._is_QWidget;
        return .{ .ptr = qtc.KPageWidgetItem_new(@ptrCast(_widget.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KPageWidgetItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _widget: QWidget `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn new2(_widget: anytype, _name: []const u8) KPageWidgetItem {
        comptime _ = @TypeOf(_widget)._is_QWidget;
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.KPageWidgetItem_new2(@ptrCast(_widget.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetItem `
    ///
    pub fn metaObject(self: KPageWidgetItem) QMetaObject {
        return .{ .ptr = qtc.KPageWidgetItem_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: KPageWidgetItem `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KPageWidgetItem, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KPageWidgetItem_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetItem `
    ///
    pub fn superMetaObject(self: KPageWidgetItem) QMetaObject {
        return .{ .ptr = qtc.KPageWidgetItem_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetItem `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KPageWidgetItem, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KPageWidgetItem_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPageWidgetItem `
    ///
    /// ` callback: *const fn (self: KPageWidgetItem, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KPageWidgetItem, callback: *const fn (KPageWidgetItem, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KPageWidgetItem_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetItem `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KPageWidgetItem, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KPageWidgetItem_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetItem `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: KPageWidgetItem, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KPageWidgetItem_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPageWidgetItem `
    ///
    /// ` callback: *const fn (self: KPageWidgetItem, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KPageWidgetItem, callback: *const fn (KPageWidgetItem, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KPageWidgetItem_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetItem `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: KPageWidgetItem, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KPageWidgetItem_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KPageWidgetItem.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `widget` instead
    ///
    pub const Widget = widget;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetitem.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetItem `
    ///
    pub fn widget(self: KPageWidgetItem) QWidget {
        return .{ .ptr = qtc.KPageWidgetItem_Widget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetitem.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetItem `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: KPageWidgetItem, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.KPageWidgetItem_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetitem.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: KPageWidgetItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KPageWidgetItem_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KPageWidgetItem.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setHeader` instead
    ///
    pub const SetHeader = setHeader;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetitem.html#setHeader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetItem `
    ///
    /// ` _header: []const u8 `
    ///
    pub fn setHeader(self: KPageWidgetItem, _header: []const u8) void {
        const header_str = qtc.libqt_string{
            .len = _header.len,
            .data = _header.ptr,
        };
        qtc.KPageWidgetItem_SetHeader(@ptrCast(self.ptr), header_str);
    }

    /// ### DEPRECATED: Use `header` instead
    ///
    pub const Header = header;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetitem.html#header)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn header(self: KPageWidgetItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KPageWidgetItem_Header(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KPageWidgetItem.header: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setIcon` instead
    ///
    pub const SetIcon = setIcon;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetitem.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetItem `
    ///
    /// ` _icon: QIcon `
    ///
    pub fn setIcon(self: KPageWidgetItem, _icon: anytype) void {
        comptime _ = @TypeOf(_icon)._is_QIcon;
        qtc.KPageWidgetItem_SetIcon(@ptrCast(self.ptr), @ptrCast(_icon.ptr));
    }

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetitem.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetItem `
    ///
    pub fn icon(self: KPageWidgetItem) QIcon {
        return .{ .ptr = qtc.KPageWidgetItem_Icon(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCheckable` instead
    ///
    pub const SetCheckable = setCheckable;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetitem.html#setCheckable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetItem `
    ///
    /// ` checkable: bool `
    ///
    pub fn setCheckable(self: KPageWidgetItem, checkable: bool) void {
        qtc.KPageWidgetItem_SetCheckable(@ptrCast(self.ptr), checkable);
    }

    /// ### DEPRECATED: Use `isCheckable` instead
    ///
    pub const IsCheckable = isCheckable;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetitem.html#isCheckable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetItem `
    ///
    pub fn isCheckable(self: KPageWidgetItem) bool {
        return qtc.KPageWidgetItem_IsCheckable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isChecked` instead
    ///
    pub const IsChecked = isChecked;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetitem.html#isChecked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetItem `
    ///
    pub fn isChecked(self: KPageWidgetItem) bool {
        return qtc.KPageWidgetItem_IsChecked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEnabled` instead
    ///
    pub const IsEnabled = isEnabled;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetitem.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetItem `
    ///
    pub fn isEnabled(self: KPageWidgetItem) bool {
        return qtc.KPageWidgetItem_IsEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isHeaderVisible` instead
    ///
    pub const IsHeaderVisible = isHeaderVisible;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetitem.html#isHeaderVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetItem `
    ///
    pub fn isHeaderVisible(self: KPageWidgetItem) bool {
        return qtc.KPageWidgetItem_IsHeaderVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHeaderVisible` instead
    ///
    pub const SetHeaderVisible = setHeaderVisible;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetitem.html#setHeaderVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetItem `
    ///
    /// ` visible: bool `
    ///
    pub fn setHeaderVisible(self: KPageWidgetItem, visible: bool) void {
        qtc.KPageWidgetItem_SetHeaderVisible(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `actions` instead
    ///
    pub const Actions = actions;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetitem.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn actions(self: KPageWidgetItem, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.KPageWidgetItem_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("KPageWidgetItem.actions: Memory allocation failed");
        const _data_val: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setActions` instead
    ///
    pub const SetActions = setActions;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetitem.html#setActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetItem `
    ///
    /// ` _actions: []QAction `
    ///
    pub fn setActions(self: KPageWidgetItem, _actions: []QAction) void {
        const actions_list = qtc.libqt_list{
            .len = _actions.len,
            .data = @ptrCast(_actions.ptr),
        };
        qtc.KPageWidgetItem_SetActions(@ptrCast(self.ptr), actions_list);
    }

    /// ### DEPRECATED: Use `setEnabled` instead
    ///
    pub const SetEnabled = setEnabled;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetitem.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetItem `
    ///
    /// ` enabled: bool `
    ///
    pub fn setEnabled(self: KPageWidgetItem, enabled: bool) void {
        qtc.KPageWidgetItem_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `setChecked` instead
    ///
    pub const SetChecked = setChecked;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetitem.html#setChecked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetItem `
    ///
    /// ` checked: bool `
    ///
    pub fn setChecked(self: KPageWidgetItem, checked: bool) void {
        qtc.KPageWidgetItem_SetChecked(@ptrCast(self.ptr), checked);
    }

    /// ### DEPRECATED: Use `changed` instead
    ///
    pub const Changed = changed;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetitem.html#changed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetItem `
    ///
    pub fn changed(self: KPageWidgetItem) void {
        qtc.KPageWidgetItem_Changed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onChanged` instead
    ///
    pub const OnChanged = onChanged;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetitem.html#changed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KPageWidgetItem `
    ///
    /// ` callback: *const fn (self: KPageWidgetItem) callconv(.c) void `
    ///
    pub fn onChanged(self: KPageWidgetItem, callback: *const fn (KPageWidgetItem) callconv(.c) void) void {
        qtc.KPageWidgetItem_Connect_Changed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `toggled` instead
    ///
    pub const Toggled = toggled;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetitem.html#toggled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetItem `
    ///
    /// ` checked: bool `
    ///
    pub fn toggled(self: KPageWidgetItem, checked: bool) void {
        qtc.KPageWidgetItem_Toggled(@ptrCast(self.ptr), checked);
    }

    /// ### DEPRECATED: Use `onToggled` instead
    ///
    pub const OnToggled = onToggled;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetitem.html#toggled)
    ///
    /// ## Parameters:
    ///
    /// ` self: KPageWidgetItem `
    ///
    /// ` callback: *const fn (self: KPageWidgetItem, checked: bool) callconv(.c) void `
    ///
    pub fn onToggled(self: KPageWidgetItem, callback: *const fn (KPageWidgetItem, bool) callconv(.c) void) void {
        qtc.KPageWidgetItem_Connect_Toggled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `actionsChanged` instead
    ///
    pub const ActionsChanged = actionsChanged;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetitem.html#actionsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetItem `
    ///
    pub fn actionsChanged(self: KPageWidgetItem) void {
        qtc.KPageWidgetItem_ActionsChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onActionsChanged` instead
    ///
    pub const OnActionsChanged = onActionsChanged;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetitem.html#actionsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KPageWidgetItem `
    ///
    /// ` callback: *const fn (self: KPageWidgetItem) callconv(.c) void `
    ///
    pub fn onActionsChanged(self: KPageWidgetItem, callback: *const fn (KPageWidgetItem) callconv(.c) void) void {
        qtc.KPageWidgetItem_Connect_ActionsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KPageWidgetItem.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KPageWidgetItem.tr3: Memory allocation failed");
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
    /// ` self: KPageWidgetItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KPageWidgetItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KPageWidgetItem.objectName: Memory allocation failed");
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
    /// ` self: KPageWidgetItem `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setObjectName(self: KPageWidgetItem, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
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
    /// ` self: KPageWidgetItem `
    ///
    pub fn isWidgetType(self: KPageWidgetItem) bool {
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
    /// ` self: KPageWidgetItem `
    ///
    pub fn isWindowType(self: KPageWidgetItem) bool {
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
    /// ` self: KPageWidgetItem `
    ///
    pub fn isQuickItemType(self: KPageWidgetItem) bool {
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
    /// ` self: KPageWidgetItem `
    ///
    pub fn signalsBlocked(self: KPageWidgetItem) bool {
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
    /// ` self: KPageWidgetItem `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KPageWidgetItem, b: bool) bool {
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
    /// ` self: KPageWidgetItem `
    ///
    pub fn thread(self: KPageWidgetItem) QThread {
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
    /// ` self: KPageWidgetItem `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KPageWidgetItem, _thread: anytype) bool {
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
    /// ` self: KPageWidgetItem `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KPageWidgetItem, interval: i32) i32 {
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
    /// ` self: KPageWidgetItem `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KPageWidgetItem, time: i64) i32 {
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
    /// ` self: KPageWidgetItem `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KPageWidgetItem, id: i32) void {
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
    /// ` self: KPageWidgetItem `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KPageWidgetItem, id: i32) void {
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
    /// ` self: KPageWidgetItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KPageWidgetItem, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KPageWidgetItem.children: Memory allocation failed");
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
    /// ` self: KPageWidgetItem `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KPageWidgetItem, _parent: anytype) void {
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
    /// ` self: KPageWidgetItem `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KPageWidgetItem, filterObj: anytype) void {
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
    /// ` self: KPageWidgetItem `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KPageWidgetItem, obj: anytype) void {
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
    /// ` self: KPageWidgetItem `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KPageWidgetItem, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KPageWidgetItem `
    ///
    pub fn disconnect3(self: KPageWidgetItem) bool {
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
    /// ` self: KPageWidgetItem `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KPageWidgetItem, receiver: anytype) bool {
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
    /// ` self: KPageWidgetItem `
    ///
    pub fn dumpObjectTree(self: KPageWidgetItem) void {
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
    /// ` self: KPageWidgetItem `
    ///
    pub fn dumpObjectInfo(self: KPageWidgetItem) void {
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
    /// ` self: KPageWidgetItem `
    ///
    /// ` _name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KPageWidgetItem, _name: [:0]const u8, value: anytype) bool {
        const name_Cstring = _name.ptr;
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
    /// ` self: KPageWidgetItem `
    ///
    /// ` _name: [:0]const u8 `
    ///
    pub fn property(self: KPageWidgetItem, _name: [:0]const u8) QVariant {
        const name_Cstring = _name.ptr;
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
    /// ` self: KPageWidgetItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KPageWidgetItem, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KPageWidgetItem.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KPageWidgetItem.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KPageWidgetItem `
    ///
    pub fn bindingStorage(self: KPageWidgetItem) QBindingStorage {
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
    /// ` self: KPageWidgetItem `
    ///
    pub fn bindingStorage2(self: KPageWidgetItem) QBindingStorage {
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
    /// ` self: KPageWidgetItem `
    ///
    pub fn destroyed(self: KPageWidgetItem) void {
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
    /// ` self: KPageWidgetItem `
    ///
    /// ` callback: *const fn (self: KPageWidgetItem) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KPageWidgetItem, callback: *const fn (KPageWidgetItem) callconv(.c) void) void {
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
    /// ` self: KPageWidgetItem `
    ///
    pub fn parent(self: KPageWidgetItem) QObject {
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
    /// ` self: KPageWidgetItem `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KPageWidgetItem, classname: [:0]const u8) bool {
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
    /// ` self: KPageWidgetItem `
    ///
    pub fn deleteLater(self: KPageWidgetItem) void {
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
    /// ` self: KPageWidgetItem `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KPageWidgetItem, interval: i32, timerType: i32) i32 {
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
    /// ` self: KPageWidgetItem `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KPageWidgetItem, time: i64, timerType: i32) i32 {
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
    /// ` self: KPageWidgetItem `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KPageWidgetItem, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KPageWidgetItem `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KPageWidgetItem, signal: [:0]const u8) bool {
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
    /// ` self: KPageWidgetItem `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KPageWidgetItem, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KPageWidgetItem `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KPageWidgetItem, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KPageWidgetItem `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KPageWidgetItem, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KPageWidgetItem `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KPageWidgetItem, param1: anytype) void {
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
    /// ` self: KPageWidgetItem `
    ///
    /// ` callback: *const fn (self: KPageWidgetItem, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KPageWidgetItem, callback: *const fn (KPageWidgetItem, QObject) callconv(.c) void) void {
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
    /// ` self: KPageWidgetItem `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KPageWidgetItem, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KPageWidgetItem_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KPageWidgetItem `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KPageWidgetItem, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KPageWidgetItem_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KPageWidgetItem`
    ///
    /// ` callback: *const fn (self: KPageWidgetItem, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: KPageWidgetItem, callback: *const fn (KPageWidgetItem, QEvent) callconv(.c) bool) void {
        qtc.KPageWidgetItem_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetItem `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KPageWidgetItem, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KPageWidgetItem_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KPageWidgetItem `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KPageWidgetItem, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KPageWidgetItem_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KPageWidgetItem`
    ///
    /// ` callback: *const fn (self: KPageWidgetItem, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: KPageWidgetItem, callback: *const fn (KPageWidgetItem, QObject, QEvent) callconv(.c) bool) void {
        qtc.KPageWidgetItem_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetItem `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KPageWidgetItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KPageWidgetItem_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KPageWidgetItem `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KPageWidgetItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KPageWidgetItem_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KPageWidgetItem`
    ///
    /// ` callback: *const fn (self: KPageWidgetItem, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KPageWidgetItem, callback: *const fn (KPageWidgetItem, QTimerEvent) callconv(.c) void) void {
        qtc.KPageWidgetItem_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetItem `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KPageWidgetItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KPageWidgetItem_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KPageWidgetItem `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KPageWidgetItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KPageWidgetItem_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KPageWidgetItem`
    ///
    /// ` callback: *const fn (self: KPageWidgetItem, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KPageWidgetItem, callback: *const fn (KPageWidgetItem, QChildEvent) callconv(.c) void) void {
        qtc.KPageWidgetItem_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetItem `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KPageWidgetItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KPageWidgetItem_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KPageWidgetItem `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KPageWidgetItem, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KPageWidgetItem_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KPageWidgetItem`
    ///
    /// ` callback: *const fn (self: KPageWidgetItem, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KPageWidgetItem, callback: *const fn (KPageWidgetItem, QEvent) callconv(.c) void) void {
        qtc.KPageWidgetItem_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KPageWidgetItem, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KPageWidgetItem_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KPageWidgetItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KPageWidgetItem, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KPageWidgetItem_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KPageWidgetItem`
    ///
    /// ` callback: *const fn (self: KPageWidgetItem, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KPageWidgetItem, callback: *const fn (KPageWidgetItem, QMetaMethod) callconv(.c) void) void {
        qtc.KPageWidgetItem_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KPageWidgetItem, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KPageWidgetItem_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KPageWidgetItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KPageWidgetItem, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KPageWidgetItem_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KPageWidgetItem`
    ///
    /// ` callback: *const fn (self: KPageWidgetItem, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KPageWidgetItem, callback: *const fn (KPageWidgetItem, QMetaMethod) callconv(.c) void) void {
        qtc.KPageWidgetItem_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetItem `
    ///
    pub fn sender(self: KPageWidgetItem) QObject {
        return .{ .ptr = qtc.KPageWidgetItem_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KPageWidgetItem `
    ///
    pub fn superSender(self: KPageWidgetItem) QObject {
        return .{ .ptr = qtc.KPageWidgetItem_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KPageWidgetItem`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KPageWidgetItem, callback: *const fn () callconv(.c) QObject) void {
        qtc.KPageWidgetItem_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetItem `
    ///
    pub fn senderSignalIndex(self: KPageWidgetItem) i32 {
        return qtc.KPageWidgetItem_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KPageWidgetItem `
    ///
    pub fn superSenderSignalIndex(self: KPageWidgetItem) i32 {
        return qtc.KPageWidgetItem_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KPageWidgetItem`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KPageWidgetItem, callback: *const fn () callconv(.c) i32) void {
        qtc.KPageWidgetItem_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetItem `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KPageWidgetItem, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KPageWidgetItem_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KPageWidgetItem `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KPageWidgetItem, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KPageWidgetItem_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KPageWidgetItem`
    ///
    /// ` callback: *const fn (self: KPageWidgetItem, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KPageWidgetItem, callback: *const fn (KPageWidgetItem, [*:0]const u8) callconv(.c) i32) void {
        qtc.KPageWidgetItem_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KPageWidgetItem, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KPageWidgetItem_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KPageWidgetItem `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KPageWidgetItem, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KPageWidgetItem_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KPageWidgetItem`
    ///
    /// ` callback: *const fn (self: KPageWidgetItem, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KPageWidgetItem, callback: *const fn (KPageWidgetItem, QMetaMethod) callconv(.c) bool) void {
        qtc.KPageWidgetItem_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetItem `
    ///
    /// ` callback: *const fn (self: KPageWidgetItem, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KPageWidgetItem, callback: *const fn (KPageWidgetItem, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetitem.html#dtor.KPageWidgetItem)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KPageWidgetItem `
    ///
    pub fn delete(self: KPageWidgetItem) void {
        qtc.KPageWidgetItem_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kpagewidgetmodel.html)
pub const KPageWidgetModel = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kpagewidgetmodel.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KPageWidgetModel,

    pub const _is_KPageWidgetModel = {};
    pub const _is_KPageModel = {};
    pub const _is_QAbstractItemModel = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KPageWidgetModel object in C++ memory
    ///
    pub fn new() KPageWidgetModel {
        return .{ .ptr = qtc.KPageWidgetModel_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KPageWidgetModel object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) KPageWidgetModel {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KPageWidgetModel_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetModel `
    ///
    pub fn metaObject(self: KPageWidgetModel) QMetaObject {
        return .{ .ptr = qtc.KPageWidgetModel_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KPageWidgetModel, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KPageWidgetModel_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    pub fn superMetaObject(self: KPageWidgetModel) QMetaObject {
        return .{ .ptr = qtc.KPageWidgetModel_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetModel `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KPageWidgetModel, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KPageWidgetModel_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPageWidgetModel `
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KPageWidgetModel_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetModel `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KPageWidgetModel, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KPageWidgetModel_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetModel `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: KPageWidgetModel, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KPageWidgetModel_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPageWidgetModel `
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KPageWidgetModel_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetModel `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: KPageWidgetModel, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KPageWidgetModel_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KPageWidgetModel.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `addPage` instead
    ///
    pub const AddPage = addPage;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#addPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetModel `
    ///
    /// ` _widget: QWidget `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn addPage(self: KPageWidgetModel, _widget: anytype, _name: []const u8) KPageWidgetItem {
        comptime _ = @TypeOf(_widget)._is_QWidget;
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.KPageWidgetModel_AddPage(@ptrCast(self.ptr), @ptrCast(_widget.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `addPage2` instead
    ///
    pub const AddPage2 = addPage2;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#addPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetModel `
    ///
    /// ` _item: KPageWidgetItem `
    ///
    pub fn addPage2(self: KPageWidgetModel, _item: anytype) void {
        comptime _ = @TypeOf(_item)._is_KPageWidgetItem;
        qtc.KPageWidgetModel_AddPage2(@ptrCast(self.ptr), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `insertPage` instead
    ///
    pub const InsertPage = insertPage;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#insertPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetModel `
    ///
    /// ` before: KPageWidgetItem `
    ///
    /// ` _widget: QWidget `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn insertPage(self: KPageWidgetModel, before: anytype, _widget: anytype, _name: []const u8) KPageWidgetItem {
        comptime _ = @TypeOf(before)._is_KPageWidgetItem;
        comptime _ = @TypeOf(_widget)._is_QWidget;
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.KPageWidgetModel_InsertPage(@ptrCast(self.ptr), @ptrCast(before.ptr), @ptrCast(_widget.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `insertPage2` instead
    ///
    pub const InsertPage2 = insertPage2;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#insertPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetModel `
    ///
    /// ` before: KPageWidgetItem `
    ///
    /// ` _item: KPageWidgetItem `
    ///
    pub fn insertPage2(self: KPageWidgetModel, before: anytype, _item: anytype) void {
        comptime _ = @TypeOf(before)._is_KPageWidgetItem;
        comptime _ = @TypeOf(_item)._is_KPageWidgetItem;
        qtc.KPageWidgetModel_InsertPage2(@ptrCast(self.ptr), @ptrCast(before.ptr), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `addSubPage` instead
    ///
    pub const AddSubPage = addSubPage;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#addSubPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetModel `
    ///
    /// ` _parent: KPageWidgetItem `
    ///
    /// ` _widget: QWidget `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn addSubPage(self: KPageWidgetModel, _parent: anytype, _widget: anytype, _name: []const u8) KPageWidgetItem {
        comptime _ = @TypeOf(_parent)._is_KPageWidgetItem;
        comptime _ = @TypeOf(_widget)._is_QWidget;
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.KPageWidgetModel_AddSubPage(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @ptrCast(_widget.ptr), name_str) };
    }

    /// ### DEPRECATED: Use `addSubPage2` instead
    ///
    pub const AddSubPage2 = addSubPage2;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#addSubPage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetModel `
    ///
    /// ` _parent: KPageWidgetItem `
    ///
    /// ` _item: KPageWidgetItem `
    ///
    pub fn addSubPage2(self: KPageWidgetModel, _parent: anytype, _item: anytype) void {
        comptime _ = @TypeOf(_parent)._is_KPageWidgetItem;
        comptime _ = @TypeOf(_item)._is_KPageWidgetItem;
        qtc.KPageWidgetModel_AddSubPage2(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `removePage` instead
    ///
    pub const RemovePage = removePage;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#removePage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetModel `
    ///
    /// ` _item: KPageWidgetItem `
    ///
    pub fn removePage(self: KPageWidgetModel, _item: anytype) void {
        comptime _ = @TypeOf(_item)._is_KPageWidgetItem;
        qtc.KPageWidgetModel_RemovePage(@ptrCast(self.ptr), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `columnCount` instead
    ///
    pub const ColumnCount = columnCount;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#columnCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn columnCount(self: KPageWidgetModel, _parent: anytype) i32 {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.KPageWidgetModel_ColumnCount(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onColumnCount` instead
    ///
    pub const OnColumnCount = onColumnCount;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#columnCount)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPageWidgetModel `
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, parent: QModelIndex) callconv(.c) i32 `
    ///
    pub fn onColumnCount(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, QModelIndex) callconv(.c) i32) void {
        qtc.KPageWidgetModel_OnColumnCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superColumnCount` instead
    ///
    pub const SuperColumnCount = superColumnCount;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#columnCount)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superColumnCount(self: KPageWidgetModel, _parent: anytype) i32 {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.KPageWidgetModel_SuperColumnCount(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `data` instead
    ///
    pub const Data = data;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` role: i32 `
    ///
    pub fn data(self: KPageWidgetModel, _index: anytype, role: i32) QVariant {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return .{ .ptr = qtc.KPageWidgetModel_Data(@ptrCast(self.ptr), @ptrCast(_index.ptr), @bitCast(role)) };
    }

    /// ### DEPRECATED: Use `onData` instead
    ///
    pub const OnData = onData;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#data)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPageWidgetModel `
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, index: QModelIndex, role: i32) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onData(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, QModelIndex, i32) callconv(.c) QVariant) void {
        qtc.KPageWidgetModel_OnData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superData` instead
    ///
    pub const SuperData = superData;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#data)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` role: i32 `
    ///
    pub fn superData(self: KPageWidgetModel, _index: anytype, role: i32) QVariant {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return .{ .ptr = qtc.KPageWidgetModel_SuperData(@ptrCast(self.ptr), @ptrCast(_index.ptr), @bitCast(role)) };
    }

    /// ### DEPRECATED: Use `setData` instead
    ///
    pub const SetData = setData;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` value: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn setData(self: KPageWidgetModel, _index: anytype, value: anytype, role: i32) bool {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.KPageWidgetModel_SetData(@ptrCast(self.ptr), @ptrCast(_index.ptr), @ptrCast(value.ptr), @bitCast(role));
    }

    /// ### DEPRECATED: Use `onSetData` instead
    ///
    pub const OnSetData = onSetData;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#setData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPageWidgetModel `
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, index: QModelIndex, value: QVariant, role: i32) callconv(.c) bool `
    ///
    pub fn onSetData(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, QModelIndex, QVariant, i32) callconv(.c) bool) void {
        qtc.KPageWidgetModel_OnSetData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetData` instead
    ///
    pub const SuperSetData = superSetData;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#setData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` value: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn superSetData(self: KPageWidgetModel, _index: anytype, value: anytype, role: i32) bool {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.KPageWidgetModel_SuperSetData(@ptrCast(self.ptr), @ptrCast(_index.ptr), @ptrCast(value.ptr), @bitCast(role));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#flags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.ItemFlag `
    ///
    pub fn flags(self: KPageWidgetModel, _index: anytype) i32 {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return qtc.KPageWidgetModel_Flags(@ptrCast(self.ptr), @ptrCast(_index.ptr));
    }

    /// ### DEPRECATED: Use `onFlags` instead
    ///
    pub const OnFlags = onFlags;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#flags)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPageWidgetModel `
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, index: QModelIndex) callconv(.c) i32 `
    ///
    pub fn onFlags(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, QModelIndex) callconv(.c) i32) void {
        qtc.KPageWidgetModel_OnFlags(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFlags` instead
    ///
    pub const SuperFlags = superFlags;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#flags)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.ItemFlag `
    ///
    pub fn superFlags(self: KPageWidgetModel, _index: anytype) i32 {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return qtc.KPageWidgetModel_SuperFlags(@ptrCast(self.ptr), @ptrCast(_index.ptr));
    }

    /// ### DEPRECATED: Use `index` instead
    ///
    pub const Index = index;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#index)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn index(self: KPageWidgetModel, row: i32, column: i32, _parent: anytype) QModelIndex {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return .{ .ptr = qtc.KPageWidgetModel_Index(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `onIndex` instead
    ///
    pub const OnIndex = onIndex;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#index)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPageWidgetModel `
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, row: i32, column: i32, parent: QModelIndex) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onIndex(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, i32, i32, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.KPageWidgetModel_OnIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIndex` instead
    ///
    pub const SuperIndex = superIndex;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#index)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superIndex(self: KPageWidgetModel, row: i32, column: i32, _parent: anytype) QModelIndex {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return .{ .ptr = qtc.KPageWidgetModel_SuperIndex(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn parent(self: KPageWidgetModel, _index: anytype) QModelIndex {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return .{ .ptr = qtc.KPageWidgetModel_Parent(@ptrCast(self.ptr), @ptrCast(_index.ptr)) };
    }

    /// ### DEPRECATED: Use `onParent` instead
    ///
    pub const OnParent = onParent;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#parent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPageWidgetModel `
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, index: QModelIndex) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onParent(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.KPageWidgetModel_OnParent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superParent` instead
    ///
    pub const SuperParent = superParent;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#parent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn superParent(self: KPageWidgetModel, _index: anytype) QModelIndex {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return .{ .ptr = qtc.KPageWidgetModel_SuperParent(@ptrCast(self.ptr), @ptrCast(_index.ptr)) };
    }

    /// ### DEPRECATED: Use `rowCount` instead
    ///
    pub const RowCount = rowCount;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#rowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn rowCount(self: KPageWidgetModel, _parent: anytype) i32 {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.KPageWidgetModel_RowCount(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onRowCount` instead
    ///
    pub const OnRowCount = onRowCount;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#rowCount)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPageWidgetModel `
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, parent: QModelIndex) callconv(.c) i32 `
    ///
    pub fn onRowCount(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, QModelIndex) callconv(.c) i32) void {
        qtc.KPageWidgetModel_OnRowCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRowCount` instead
    ///
    pub const SuperRowCount = superRowCount;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#rowCount)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superRowCount(self: KPageWidgetModel, _parent: anytype) i32 {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.KPageWidgetModel_SuperRowCount(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `item` instead
    ///
    pub const Item = item;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#item)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn item(self: KPageWidgetModel, _index: anytype) KPageWidgetItem {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return .{ .ptr = qtc.KPageWidgetModel_Item(@ptrCast(self.ptr), @ptrCast(_index.ptr)) };
    }

    /// ### DEPRECATED: Use `index2` instead
    ///
    pub const Index2 = index2;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#index)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetModel `
    ///
    /// ` _item: KPageWidgetItem `
    ///
    pub fn index2(self: KPageWidgetModel, _item: anytype) QModelIndex {
        comptime _ = @TypeOf(_item)._is_KPageWidgetItem;
        return .{ .ptr = qtc.KPageWidgetModel_Index2(@ptrCast(self.ptr), @ptrCast(_item.ptr)) };
    }

    /// ### DEPRECATED: Use `toggled` instead
    ///
    pub const Toggled = toggled;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#toggled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetModel `
    ///
    /// ` page: KPageWidgetItem `
    ///
    /// ` checked: bool `
    ///
    pub fn toggled(self: KPageWidgetModel, page: anytype, checked: bool) void {
        comptime _ = @TypeOf(page)._is_KPageWidgetItem;
        qtc.KPageWidgetModel_Toggled(@ptrCast(self.ptr), @ptrCast(page.ptr), checked);
    }

    /// ### DEPRECATED: Use `onToggled` instead
    ///
    pub const OnToggled = onToggled;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#toggled)
    ///
    /// ## Parameters:
    ///
    /// ` self: KPageWidgetModel `
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, page: KPageWidgetItem, checked: bool) callconv(.c) void `
    ///
    pub fn onToggled(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, KPageWidgetItem, bool) callconv(.c) void) void {
        qtc.KPageWidgetModel_Connect_Toggled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KPageWidgetModel.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KPageWidgetModel.tr3: Memory allocation failed");
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn hasIndex(self: KPageWidgetModel, row: i32, column: i32) bool {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` row: i32 `
    ///
    pub fn insertRow(self: KPageWidgetModel, row: i32) bool {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` column: i32 `
    ///
    pub fn insertColumn(self: KPageWidgetModel, column: i32) bool {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` row: i32 `
    ///
    pub fn removeRow(self: KPageWidgetModel, row: i32) bool {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` column: i32 `
    ///
    pub fn removeColumn(self: KPageWidgetModel, column: i32) bool {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceRow: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn moveRow(self: KPageWidgetModel, sourceParent: anytype, sourceRow: i32, destinationParent: anytype, destinationChild: i32) bool {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` sourceParent: QModelIndex `
    ///
    /// ` sourceColumn: i32 `
    ///
    /// ` destinationParent: QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn moveColumn(self: KPageWidgetModel, sourceParent: anytype, sourceColumn: i32, destinationParent: anytype, destinationChild: i32) bool {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn checkIndex(self: KPageWidgetModel, _index: anytype) bool {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` topLeft: QModelIndex `
    ///
    /// ` bottomRight: QModelIndex `
    ///
    pub fn dataChanged(self: KPageWidgetModel, topLeft: anytype, bottomRight: anytype) void {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, topLeft: QModelIndex, bottomRight: QModelIndex) callconv(.c) void `
    ///
    pub fn onDataChanged(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, QModelIndex, QModelIndex) callconv(.c) void) void {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn headerDataChanged(self: KPageWidgetModel, orientation: i32, first: i32, last: i32) void {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, orientation: qnamespace_enums.Orientation, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onHeaderDataChanged(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, i32, i32, i32) callconv(.c) void) void {
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
    /// ` self: KPageWidgetModel `
    ///
    pub fn layoutChanged(self: KPageWidgetModel) void {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` callback: *const fn (self: KPageWidgetModel) callconv(.c) void `
    ///
    pub fn onLayoutChanged(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel) callconv(.c) void) void {
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
    /// ` self: KPageWidgetModel `
    ///
    pub fn layoutAboutToBeChanged(self: KPageWidgetModel) void {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` callback: *const fn (self: KPageWidgetModel) callconv(.c) void `
    ///
    pub fn onLayoutAboutToBeChanged(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel) callconv(.c) void) void {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn hasIndex3(self: KPageWidgetModel, row: i32, column: i32, _parent: anytype) bool {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` row: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn insertRow2(self: KPageWidgetModel, row: i32, _parent: anytype) bool {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn insertColumn2(self: KPageWidgetModel, column: i32, _parent: anytype) bool {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` row: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn removeRow2(self: KPageWidgetModel, row: i32, _parent: anytype) bool {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn removeColumn2(self: KPageWidgetModel, column: i32, _parent: anytype) bool {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` options: flag of qabstractitemmodel_enums.CheckIndexOption `
    ///
    pub fn checkIndex2(self: KPageWidgetModel, _index: anytype, options: i32) bool {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` topLeft: QModelIndex `
    ///
    /// ` bottomRight: QModelIndex `
    ///
    /// ` roles: []i32 `
    ///
    pub fn dataChanged3(self: KPageWidgetModel, topLeft: anytype, bottomRight: anytype, roles: []i32) void {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, topLeft: QModelIndex, bottomRight: QModelIndex, roles: qtc.libqt_list ([]i32)) callconv(.c) void `
    ///
    pub fn onDataChanged3(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, QModelIndex, QModelIndex, qtc.libqt_list) callconv(.c) void) void {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` parents: []QPersistentModelIndex `
    ///
    pub fn layoutChanged1(self: KPageWidgetModel, parents: []QPersistentModelIndex) void {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, parents: qtc.libqt_list ([]QPersistentModelIndex)) callconv(.c) void `
    ///
    pub fn onLayoutChanged1(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, qtc.libqt_list) callconv(.c) void) void {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` parents: []QPersistentModelIndex `
    ///
    /// ` hint: qabstractitemmodel_enums.LayoutChangeHint `
    ///
    pub fn layoutChanged2(self: KPageWidgetModel, parents: []QPersistentModelIndex, hint: i32) void {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, parents: qtc.libqt_list ([]QPersistentModelIndex), hint: qabstractitemmodel_enums.LayoutChangeHint) callconv(.c) void `
    ///
    pub fn onLayoutChanged2(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, qtc.libqt_list, i32) callconv(.c) void) void {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` parents: []QPersistentModelIndex `
    ///
    pub fn layoutAboutToBeChanged1(self: KPageWidgetModel, parents: []QPersistentModelIndex) void {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, parents: qtc.libqt_list ([]QPersistentModelIndex)) callconv(.c) void `
    ///
    pub fn onLayoutAboutToBeChanged1(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, qtc.libqt_list) callconv(.c) void) void {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` parents: []QPersistentModelIndex `
    ///
    /// ` hint: qabstractitemmodel_enums.LayoutChangeHint `
    ///
    pub fn layoutAboutToBeChanged2(self: KPageWidgetModel, parents: []QPersistentModelIndex, hint: i32) void {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, parents: qtc.libqt_list ([]QPersistentModelIndex), hint: qabstractitemmodel_enums.LayoutChangeHint) callconv(.c) void `
    ///
    pub fn onLayoutAboutToBeChanged2(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, qtc.libqt_list, i32) callconv(.c) void) void {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KPageWidgetModel, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KPageWidgetModel.objectName: Memory allocation failed");
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setObjectName(self: KPageWidgetModel, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
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
    /// ` self: KPageWidgetModel `
    ///
    pub fn isWidgetType(self: KPageWidgetModel) bool {
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
    /// ` self: KPageWidgetModel `
    ///
    pub fn isWindowType(self: KPageWidgetModel) bool {
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
    /// ` self: KPageWidgetModel `
    ///
    pub fn isQuickItemType(self: KPageWidgetModel) bool {
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
    /// ` self: KPageWidgetModel `
    ///
    pub fn signalsBlocked(self: KPageWidgetModel) bool {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KPageWidgetModel, b: bool) bool {
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
    /// ` self: KPageWidgetModel `
    ///
    pub fn thread(self: KPageWidgetModel) QThread {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KPageWidgetModel, _thread: anytype) bool {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KPageWidgetModel, interval: i32) i32 {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KPageWidgetModel, time: i64) i32 {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KPageWidgetModel, id: i32) void {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KPageWidgetModel, id: i32) void {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KPageWidgetModel, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KPageWidgetModel.children: Memory allocation failed");
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KPageWidgetModel, _parent: anytype) void {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KPageWidgetModel, filterObj: anytype) void {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KPageWidgetModel, obj: anytype) void {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KPageWidgetModel, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KPageWidgetModel `
    ///
    pub fn disconnect3(self: KPageWidgetModel) bool {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KPageWidgetModel, receiver: anytype) bool {
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
    /// ` self: KPageWidgetModel `
    ///
    pub fn dumpObjectTree(self: KPageWidgetModel) void {
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
    /// ` self: KPageWidgetModel `
    ///
    pub fn dumpObjectInfo(self: KPageWidgetModel) void {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` _name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KPageWidgetModel, _name: [:0]const u8, value: anytype) bool {
        const name_Cstring = _name.ptr;
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` _name: [:0]const u8 `
    ///
    pub fn property(self: KPageWidgetModel, _name: [:0]const u8) QVariant {
        const name_Cstring = _name.ptr;
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KPageWidgetModel, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KPageWidgetModel.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KPageWidgetModel.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KPageWidgetModel `
    ///
    pub fn bindingStorage(self: KPageWidgetModel) QBindingStorage {
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
    /// ` self: KPageWidgetModel `
    ///
    pub fn bindingStorage2(self: KPageWidgetModel) QBindingStorage {
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
    /// ` self: KPageWidgetModel `
    ///
    pub fn destroyed(self: KPageWidgetModel) void {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` callback: *const fn (self: KPageWidgetModel) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel) callconv(.c) void) void {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KPageWidgetModel, classname: [:0]const u8) bool {
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
    /// ` self: KPageWidgetModel `
    ///
    pub fn deleteLater(self: KPageWidgetModel) void {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KPageWidgetModel, interval: i32, timerType: i32) i32 {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KPageWidgetModel, time: i64, timerType: i32) i32 {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KPageWidgetModel, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KPageWidgetModel, signal: [:0]const u8) bool {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KPageWidgetModel, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KPageWidgetModel, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KPageWidgetModel, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KPageWidgetModel, param1: anytype) void {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sibling` instead
    ///
    pub const Sibling = sibling;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` idx: QModelIndex `
    ///
    pub fn sibling(self: KPageWidgetModel, row: i32, column: i32, idx: anytype) QModelIndex {
        comptime _ = @TypeOf(idx)._is_QModelIndex;
        return .{ .ptr = qtc.KPageWidgetModel_Sibling(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(idx.ptr)) };
    }

    /// ### DEPRECATED: Use `superSibling` instead
    ///
    pub const SuperSibling = superSibling;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` idx: QModelIndex `
    ///
    pub fn superSibling(self: KPageWidgetModel, row: i32, column: i32, idx: anytype) QModelIndex {
        comptime _ = @TypeOf(idx)._is_QModelIndex;
        return .{ .ptr = qtc.KPageWidgetModel_SuperSibling(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(idx.ptr)) };
    }

    /// ### DEPRECATED: Use `onSibling` instead
    ///
    pub const OnSibling = onSibling;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, row: i32, column: i32, idx: QModelIndex) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSibling(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, i32, i32, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.KPageWidgetModel_OnSibling(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hasChildren` instead
    ///
    pub const HasChildren = hasChildren;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn hasChildren(self: KPageWidgetModel, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.KPageWidgetModel_HasChildren(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `superHasChildren` instead
    ///
    pub const SuperHasChildren = superHasChildren;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superHasChildren(self: KPageWidgetModel, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.KPageWidgetModel_SuperHasChildren(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onHasChildren` instead
    ///
    pub const OnHasChildren = onHasChildren;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onHasChildren(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, QModelIndex) callconv(.c) bool) void {
        qtc.KPageWidgetModel_OnHasChildren(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` role: i32 `
    ///
    pub fn headerData(self: KPageWidgetModel, section: i32, orientation: i32, role: i32) QVariant {
        return .{ .ptr = qtc.KPageWidgetModel_HeaderData(@ptrCast(self.ptr), @bitCast(section), @bitCast(orientation), @bitCast(role)) };
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` role: i32 `
    ///
    pub fn superHeaderData(self: KPageWidgetModel, section: i32, orientation: i32, role: i32) QVariant {
        return .{ .ptr = qtc.KPageWidgetModel_SuperHeaderData(@ptrCast(self.ptr), @bitCast(section), @bitCast(orientation), @bitCast(role)) };
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, section: i32, orientation: qnamespace_enums.Orientation, role: i32) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onHeaderData(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, i32, i32, i32) callconv(.c) QVariant) void {
        qtc.KPageWidgetModel_OnHeaderData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` value: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn setHeaderData(self: KPageWidgetModel, section: i32, orientation: i32, value: anytype, role: i32) bool {
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.KPageWidgetModel_SetHeaderData(@ptrCast(self.ptr), @bitCast(section), @bitCast(orientation), @ptrCast(value.ptr), @bitCast(role));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` value: QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn superSetHeaderData(self: KPageWidgetModel, section: i32, orientation: i32, value: anytype, role: i32) bool {
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.KPageWidgetModel_SuperSetHeaderData(@ptrCast(self.ptr), @bitCast(section), @bitCast(orientation), @ptrCast(value.ptr), @bitCast(role));
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, section: i32, orientation: qnamespace_enums.Orientation, value: QVariant, role: i32) callconv(.c) bool `
    ///
    pub fn onSetHeaderData(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, i32, i32, QVariant, i32) callconv(.c) bool) void {
        qtc.KPageWidgetModel_OnSetHeaderData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn itemData(self: KPageWidgetModel, allocator: std.mem.Allocator, _index: anytype) ArrayMap_i32_QVariant {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        const _map: qtc.libqt_map = qtc.KPageWidgetModel_ItemData(@ptrCast(self.ptr), @ptrCast(_index.ptr));
        var _ret: ArrayMap_i32_QVariant = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("KPageWidgetModel.itemData: Total capacity allocation failed");
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn superItemData(self: KPageWidgetModel, allocator: std.mem.Allocator, _index: anytype) ArrayMap_i32_QVariant {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        const _map: qtc.libqt_map = qtc.KPageWidgetModel_SuperItemData(@ptrCast(self.ptr), @ptrCast(_index.ptr));
        var _ret: ArrayMap_i32_QVariant = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("KPageWidgetModel.itemData: Total capacity allocation failed");
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, index: QModelIndex) callconv(.c) qtc.libqt_map `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of ArrayMap_i32_QVariant `
    ///
    pub fn onItemData(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, QModelIndex) callconv(.c) qtc.libqt_map) void {
        qtc.KPageWidgetModel_OnItemData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` roles: ArrayMap_i32_QVariant `
    ///
    pub fn setItemData(self: KPageWidgetModel, allocator: std.mem.Allocator, _index: anytype, roles: ArrayMap_i32_QVariant) bool {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        const roles_count = roles.count();
        const roles_keys = allocator.alloc(i32, roles_count) catch @panic("KPageWidgetModel.setItemData: Memory allocation failed");
        defer allocator.free(roles_keys);
        const roles_values = allocator.alloc(QtC.QVariant, roles_count) catch @panic("KPageWidgetModel.setItemData: Memory allocation failed");
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
        return qtc.KPageWidgetModel_SetItemData(@ptrCast(self.ptr), @ptrCast(_index.ptr), roles_map);
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` roles: ArrayMap_i32_QVariant `
    ///
    pub fn superSetItemData(self: KPageWidgetModel, allocator: std.mem.Allocator, _index: anytype, roles: ArrayMap_i32_QVariant) bool {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        const roles_count = roles.count();
        const roles_keys = allocator.alloc(i32, roles_count) catch @panic("KPageWidgetModel.setItemData: Memory allocation failed");
        defer allocator.free(roles_keys);
        const roles_values = allocator.alloc(QtC.QVariant, roles_count) catch @panic("KPageWidgetModel.setItemData: Memory allocation failed");
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
        return qtc.KPageWidgetModel_SuperSetItemData(@ptrCast(self.ptr), @ptrCast(_index.ptr), roles_map);
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, index: QModelIndex, roles: qtc.libqt_map (ArrayMap_i32_QVariant)) callconv(.c) bool `
    ///
    pub fn onSetItemData(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, QModelIndex, qtc.libqt_map) callconv(.c) bool) void {
        qtc.KPageWidgetModel_OnSetItemData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn clearItemData(self: KPageWidgetModel, _index: anytype) bool {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return qtc.KPageWidgetModel_ClearItemData(@ptrCast(self.ptr), @ptrCast(_index.ptr));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn superClearItemData(self: KPageWidgetModel, _index: anytype) bool {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return qtc.KPageWidgetModel_SuperClearItemData(@ptrCast(self.ptr), @ptrCast(_index.ptr));
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, index: QModelIndex) callconv(.c) bool `
    ///
    pub fn onClearItemData(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, QModelIndex) callconv(.c) bool) void {
        qtc.KPageWidgetModel_OnClearItemData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn mimeTypes(self: KPageWidgetModel, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KPageWidgetModel_MimeTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KPageWidgetModel.mimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KPageWidgetModel.mimeTypes: Memory allocation failed");
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superMimeTypes(self: KPageWidgetModel, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KPageWidgetModel_SuperMimeTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KPageWidgetModel.mimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KPageWidgetModel.mimeTypes: Memory allocation failed");
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8 `
    ///
    pub fn onMimeTypes(self: KPageWidgetModel, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.KPageWidgetModel_OnMimeTypes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` indexes: []QModelIndex `
    ///
    pub fn mimeData(self: KPageWidgetModel, indexes: []QModelIndex) QMimeData {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        return .{ .ptr = qtc.KPageWidgetModel_MimeData(@ptrCast(self.ptr), indexes_list) };
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` indexes: []QModelIndex `
    ///
    pub fn superMimeData(self: KPageWidgetModel, indexes: []QModelIndex) QMimeData {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        return .{ .ptr = qtc.KPageWidgetModel_SuperMimeData(@ptrCast(self.ptr), indexes_list) };
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, indexes: qtc.libqt_list ([]QModelIndex)) callconv(.c) QMimeData `
    ///
    pub fn onMimeData(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, qtc.libqt_list) callconv(.c) QMimeData) void {
        qtc.KPageWidgetModel_OnMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
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
    pub fn canDropMimeData(self: KPageWidgetModel, _data: anytype, action: i32, row: i32, column: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_data)._is_QMimeData;
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.KPageWidgetModel_CanDropMimeData(@ptrCast(self.ptr), @ptrCast(_data.ptr), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(_parent.ptr));
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
    /// ` self: KPageWidgetModel `
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
    pub fn superCanDropMimeData(self: KPageWidgetModel, _data: anytype, action: i32, row: i32, column: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_data)._is_QMimeData;
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.KPageWidgetModel_SuperCanDropMimeData(@ptrCast(self.ptr), @ptrCast(_data.ptr), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(_parent.ptr));
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, data: QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onCanDropMimeData(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, QMimeData, i32, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.KPageWidgetModel_OnCanDropMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dropMimeData` instead
    ///
    pub const DropMimeData = dropMimeData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dropMimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetModel `
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
    pub fn dropMimeData(self: KPageWidgetModel, _data: anytype, action: i32, row: i32, column: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_data)._is_QMimeData;
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.KPageWidgetModel_DropMimeData(@ptrCast(self.ptr), @ptrCast(_data.ptr), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `superDropMimeData` instead
    ///
    pub const SuperDropMimeData = superDropMimeData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dropMimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetModel `
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
    pub fn superDropMimeData(self: KPageWidgetModel, _data: anytype, action: i32, row: i32, column: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_data)._is_QMimeData;
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.KPageWidgetModel_SuperDropMimeData(@ptrCast(self.ptr), @ptrCast(_data.ptr), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `onDropMimeData` instead
    ///
    pub const OnDropMimeData = onDropMimeData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dropMimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, data: QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onDropMimeData(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, QMimeData, i32, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.KPageWidgetModel_OnDropMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn supportedDropActions(self: KPageWidgetModel) i32 {
        return qtc.KPageWidgetModel_SupportedDropActions(@ptrCast(self.ptr));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn superSupportedDropActions(self: KPageWidgetModel) i32 {
        return qtc.KPageWidgetModel_SuperSupportedDropActions(@ptrCast(self.ptr));
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSupportedDropActions(self: KPageWidgetModel, callback: *const fn () callconv(.c) i32) void {
        qtc.KPageWidgetModel_OnSupportedDropActions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn supportedDragActions(self: KPageWidgetModel) i32 {
        return qtc.KPageWidgetModel_SupportedDragActions(@ptrCast(self.ptr));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn superSupportedDragActions(self: KPageWidgetModel) i32 {
        return qtc.KPageWidgetModel_SuperSupportedDragActions(@ptrCast(self.ptr));
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSupportedDragActions(self: KPageWidgetModel, callback: *const fn () callconv(.c) i32) void {
        qtc.KPageWidgetModel_OnSupportedDragActions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn insertRows(self: KPageWidgetModel, row: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.KPageWidgetModel_InsertRows(@ptrCast(self.ptr), @bitCast(row), @bitCast(count), @ptrCast(_parent.ptr));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superInsertRows(self: KPageWidgetModel, row: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.KPageWidgetModel_SuperInsertRows(@ptrCast(self.ptr), @bitCast(row), @bitCast(count), @ptrCast(_parent.ptr));
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, row: i32, count: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onInsertRows(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.KPageWidgetModel_OnInsertRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn insertColumns(self: KPageWidgetModel, column: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.KPageWidgetModel_InsertColumns(@ptrCast(self.ptr), @bitCast(column), @bitCast(count), @ptrCast(_parent.ptr));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superInsertColumns(self: KPageWidgetModel, column: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.KPageWidgetModel_SuperInsertColumns(@ptrCast(self.ptr), @bitCast(column), @bitCast(count), @ptrCast(_parent.ptr));
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, column: i32, count: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onInsertColumns(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.KPageWidgetModel_OnInsertColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn removeRows(self: KPageWidgetModel, row: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.KPageWidgetModel_RemoveRows(@ptrCast(self.ptr), @bitCast(row), @bitCast(count), @ptrCast(_parent.ptr));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superRemoveRows(self: KPageWidgetModel, row: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.KPageWidgetModel_SuperRemoveRows(@ptrCast(self.ptr), @bitCast(row), @bitCast(count), @ptrCast(_parent.ptr));
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, row: i32, count: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onRemoveRows(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.KPageWidgetModel_OnRemoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn removeColumns(self: KPageWidgetModel, column: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.KPageWidgetModel_RemoveColumns(@ptrCast(self.ptr), @bitCast(column), @bitCast(count), @ptrCast(_parent.ptr));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superRemoveColumns(self: KPageWidgetModel, column: i32, count: i32, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.KPageWidgetModel_SuperRemoveColumns(@ptrCast(self.ptr), @bitCast(column), @bitCast(count), @ptrCast(_parent.ptr));
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, column: i32, count: i32, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onRemoveColumns(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, i32, i32, QModelIndex) callconv(.c) bool) void {
        qtc.KPageWidgetModel_OnRemoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
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
    pub fn moveRows(self: KPageWidgetModel, sourceParent: anytype, sourceRow: i32, count: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.KPageWidgetModel_MoveRows(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceRow), @bitCast(count), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
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
    /// ` self: KPageWidgetModel `
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
    pub fn superMoveRows(self: KPageWidgetModel, sourceParent: anytype, sourceRow: i32, count: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.KPageWidgetModel_SuperMoveRows(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceRow), @bitCast(count), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, sourceParent: QModelIndex, sourceRow: i32, count: i32, destinationParent: QModelIndex, destinationChild: i32) callconv(.c) bool `
    ///
    pub fn onMoveRows(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) bool) void {
        qtc.KPageWidgetModel_OnMoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
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
    pub fn moveColumns(self: KPageWidgetModel, sourceParent: anytype, sourceColumn: i32, count: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.KPageWidgetModel_MoveColumns(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceColumn), @bitCast(count), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
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
    /// ` self: KPageWidgetModel `
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
    pub fn superMoveColumns(self: KPageWidgetModel, sourceParent: anytype, sourceColumn: i32, count: i32, destinationParent: anytype, destinationChild: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.KPageWidgetModel_SuperMoveColumns(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceColumn), @bitCast(count), @ptrCast(destinationParent.ptr), @bitCast(destinationChild));
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, sourceParent: QModelIndex, sourceColumn: i32, count: i32, destinationParent: QModelIndex, destinationChild: i32) callconv(.c) bool `
    ///
    pub fn onMoveColumns(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) bool) void {
        qtc.KPageWidgetModel_OnMoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn fetchMore(self: KPageWidgetModel, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.KPageWidgetModel_FetchMore(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superFetchMore(self: KPageWidgetModel, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.KPageWidgetModel_SuperFetchMore(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, parent: QModelIndex) callconv(.c) void `
    ///
    pub fn onFetchMore(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, QModelIndex) callconv(.c) void) void {
        qtc.KPageWidgetModel_OnFetchMore(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn canFetchMore(self: KPageWidgetModel, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.KPageWidgetModel_CanFetchMore(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    pub fn superCanFetchMore(self: KPageWidgetModel, _parent: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        return qtc.KPageWidgetModel_SuperCanFetchMore(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, parent: QModelIndex) callconv(.c) bool `
    ///
    pub fn onCanFetchMore(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, QModelIndex) callconv(.c) bool) void {
        qtc.KPageWidgetModel_OnCanFetchMore(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` column: i32 `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    pub fn sort(self: KPageWidgetModel, column: i32, order: i32) void {
        qtc.KPageWidgetModel_Sort(@ptrCast(self.ptr), @bitCast(column), @bitCast(order));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` column: i32 `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    pub fn superSort(self: KPageWidgetModel, column: i32, order: i32) void {
        qtc.KPageWidgetModel_SuperSort(@ptrCast(self.ptr), @bitCast(column), @bitCast(order));
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, column: i32, order: qnamespace_enums.SortOrder) callconv(.c) void `
    ///
    pub fn onSort(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, i32, i32) callconv(.c) void) void {
        qtc.KPageWidgetModel_OnSort(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn buddy(self: KPageWidgetModel, _index: anytype) QModelIndex {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return .{ .ptr = qtc.KPageWidgetModel_Buddy(@ptrCast(self.ptr), @ptrCast(_index.ptr)) };
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn superBuddy(self: KPageWidgetModel, _index: anytype) QModelIndex {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return .{ .ptr = qtc.KPageWidgetModel_SuperBuddy(@ptrCast(self.ptr), @ptrCast(_index.ptr)) };
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, index: QModelIndex) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onBuddy(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, QModelIndex) callconv(.c) QModelIndex) void {
        qtc.KPageWidgetModel_OnBuddy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
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
    pub fn match(self: KPageWidgetModel, allocator: std.mem.Allocator, start: anytype, role: i32, value: anytype, hits: i32, _flags: i32) []QModelIndex {
        comptime _ = @TypeOf(start)._is_QModelIndex;
        comptime _ = @TypeOf(value)._is_QVariant;
        const _arr: qtc.libqt_list = qtc.KPageWidgetModel_Match(@ptrCast(self.ptr), @ptrCast(start.ptr), @bitCast(role), @ptrCast(value.ptr), @bitCast(hits), @bitCast(_flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("KPageWidgetModel.match: Memory allocation failed");
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
    /// ` self: KPageWidgetModel `
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
    pub fn superMatch(self: KPageWidgetModel, allocator: std.mem.Allocator, start: anytype, role: i32, value: anytype, hits: i32, _flags: i32) []QModelIndex {
        comptime _ = @TypeOf(start)._is_QModelIndex;
        comptime _ = @TypeOf(value)._is_QVariant;
        const _arr: qtc.libqt_list = qtc.KPageWidgetModel_SuperMatch(@ptrCast(self.ptr), @ptrCast(start.ptr), @bitCast(role), @ptrCast(value.ptr), @bitCast(hits), @bitCast(_flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("KPageWidgetModel.match: Memory allocation failed");
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, start: QModelIndex, role: i32, value: QVariant, hits: i32, flags: flag of qnamespace_enums.MatchFlag) callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QModelIndex `
    ///
    pub fn onMatch(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, QModelIndex, i32, QVariant, i32, i32) callconv(.c) qtc.libqt_list) void {
        qtc.KPageWidgetModel_OnMatch(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn span(self: KPageWidgetModel, _index: anytype) QSize {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return .{ .ptr = qtc.KPageWidgetModel_Span(@ptrCast(self.ptr), @ptrCast(_index.ptr)) };
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` _index: QModelIndex `
    ///
    pub fn superSpan(self: KPageWidgetModel, _index: anytype) QSize {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        return .{ .ptr = qtc.KPageWidgetModel_SuperSpan(@ptrCast(self.ptr), @ptrCast(_index.ptr)) };
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, index: QModelIndex) callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSpan(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, QModelIndex) callconv(.c) QSize) void {
        qtc.KPageWidgetModel_OnSpan(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `roleNames` instead
    ///
    pub const RoleNames = roleNames;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn roleNames(self: KPageWidgetModel, allocator: std.mem.Allocator) Map_i32_u8 {
        const _map: qtc.libqt_map = qtc.KPageWidgetModel_RoleNames(@ptrCast(self.ptr));
        var _ret: Map_i32_u8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("KPageWidgetModel.roleNames: Total capacity allocation failed");
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
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("KPageWidgetModel.roleNames: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.putAssumeCapacity(_key, _value_slice);
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `superRoleNames` instead
    ///
    pub const SuperRoleNames = superRoleNames;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPageWidgetModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superRoleNames(self: KPageWidgetModel, allocator: std.mem.Allocator) Map_i32_u8 {
        const _map: qtc.libqt_map = qtc.KPageWidgetModel_SuperRoleNames(@ptrCast(self.ptr));
        var _ret: Map_i32_u8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("KPageWidgetModel.roleNames: Total capacity allocation failed");
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
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("KPageWidgetModel.roleNames: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.putAssumeCapacity(_key, _value_slice);
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `onRoleNames` instead
    ///
    pub const OnRoleNames = onRoleNames;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#roleNames)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_map `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of Map_i32_u8 `
    ///
    pub fn onRoleNames(self: KPageWidgetModel, callback: *const fn () callconv(.c) qtc.libqt_map) void {
        qtc.KPageWidgetModel_OnRoleNames(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` roleDataSpan: QModelRoleDataSpan `
    ///
    pub fn multiData(self: KPageWidgetModel, _index: anytype, roleDataSpan: anytype) void {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        comptime _ = @TypeOf(roleDataSpan)._is_QModelRoleDataSpan;
        qtc.KPageWidgetModel_MultiData(@ptrCast(self.ptr), @ptrCast(_index.ptr), @ptrCast(roleDataSpan.ptr));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` _index: QModelIndex `
    ///
    /// ` roleDataSpan: QModelRoleDataSpan `
    ///
    pub fn superMultiData(self: KPageWidgetModel, _index: anytype, roleDataSpan: anytype) void {
        comptime _ = @TypeOf(_index)._is_QModelIndex;
        comptime _ = @TypeOf(roleDataSpan)._is_QModelRoleDataSpan;
        qtc.KPageWidgetModel_SuperMultiData(@ptrCast(self.ptr), @ptrCast(_index.ptr), @ptrCast(roleDataSpan.ptr));
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, index: QModelIndex, roleDataSpan: QModelRoleDataSpan) callconv(.c) void `
    ///
    pub fn onMultiData(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, QModelIndex, QModelRoleDataSpan) callconv(.c) void) void {
        qtc.KPageWidgetModel_OnMultiData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    pub fn submit(self: KPageWidgetModel) bool {
        return qtc.KPageWidgetModel_Submit(@ptrCast(self.ptr));
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
    /// ` self: KPageWidgetModel `
    ///
    pub fn superSubmit(self: KPageWidgetModel) bool {
        return qtc.KPageWidgetModel_SuperSubmit(@ptrCast(self.ptr));
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onSubmit(self: KPageWidgetModel, callback: *const fn () callconv(.c) bool) void {
        qtc.KPageWidgetModel_OnSubmit(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    pub fn revert(self: KPageWidgetModel) void {
        qtc.KPageWidgetModel_Revert(@ptrCast(self.ptr));
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
    /// ` self: KPageWidgetModel `
    ///
    pub fn superRevert(self: KPageWidgetModel) void {
        qtc.KPageWidgetModel_SuperRevert(@ptrCast(self.ptr));
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onRevert(self: KPageWidgetModel, callback: *const fn () callconv(.c) void) void {
        qtc.KPageWidgetModel_OnRevert(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    pub fn resetInternalData(self: KPageWidgetModel) void {
        qtc.KPageWidgetModel_ResetInternalData(@ptrCast(self.ptr));
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
    /// ` self: KPageWidgetModel `
    ///
    pub fn superResetInternalData(self: KPageWidgetModel) void {
        qtc.KPageWidgetModel_SuperResetInternalData(@ptrCast(self.ptr));
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onResetInternalData(self: KPageWidgetModel, callback: *const fn () callconv(.c) void) void {
        qtc.KPageWidgetModel_OnResetInternalData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KPageWidgetModel, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KPageWidgetModel_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KPageWidgetModel, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KPageWidgetModel_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, QEvent) callconv(.c) bool) void {
        qtc.KPageWidgetModel_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KPageWidgetModel, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KPageWidgetModel_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KPageWidgetModel, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KPageWidgetModel_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, QObject, QEvent) callconv(.c) bool) void {
        qtc.KPageWidgetModel_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KPageWidgetModel, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KPageWidgetModel_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KPageWidgetModel, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KPageWidgetModel_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, QTimerEvent) callconv(.c) void) void {
        qtc.KPageWidgetModel_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KPageWidgetModel, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KPageWidgetModel_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KPageWidgetModel, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KPageWidgetModel_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, QChildEvent) callconv(.c) void) void {
        qtc.KPageWidgetModel_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KPageWidgetModel, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KPageWidgetModel_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KPageWidgetModel, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KPageWidgetModel_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, QEvent) callconv(.c) void) void {
        qtc.KPageWidgetModel_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KPageWidgetModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KPageWidgetModel_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KPageWidgetModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KPageWidgetModel_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, QMetaMethod) callconv(.c) void) void {
        qtc.KPageWidgetModel_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KPageWidgetModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KPageWidgetModel_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KPageWidgetModel, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KPageWidgetModel_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, QMetaMethod) callconv(.c) void) void {
        qtc.KPageWidgetModel_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn createIndex(self: KPageWidgetModel, row: i32, column: i32) QModelIndex {
        return .{ .ptr = qtc.KPageWidgetModel_CreateIndex(@ptrCast(self.ptr), @bitCast(row), @bitCast(column)) };
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn superCreateIndex(self: KPageWidgetModel, row: i32, column: i32) QModelIndex {
        return .{ .ptr = qtc.KPageWidgetModel_SuperCreateIndex(@ptrCast(self.ptr), @bitCast(row), @bitCast(column)) };
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, row: i32, column: i32) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onCreateIndex(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, i32, i32) callconv(.c) QModelIndex) void {
        qtc.KPageWidgetModel_OnCreateIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` indexes: []QModelIndex `
    ///
    /// ` stream: QDataStream `
    ///
    pub fn encodeData(self: KPageWidgetModel, indexes: []QModelIndex, stream: anytype) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        comptime _ = @TypeOf(stream)._is_QDataStream;
        qtc.KPageWidgetModel_EncodeData(@ptrCast(self.ptr), indexes_list, @ptrCast(stream.ptr));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` indexes: []QModelIndex `
    ///
    /// ` stream: QDataStream `
    ///
    pub fn superEncodeData(self: KPageWidgetModel, indexes: []QModelIndex, stream: anytype) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        comptime _ = @TypeOf(stream)._is_QDataStream;
        qtc.KPageWidgetModel_SuperEncodeData(@ptrCast(self.ptr), indexes_list, @ptrCast(stream.ptr));
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, indexes: qtc.libqt_list ([]QModelIndex), stream: QDataStream) callconv(.c) void `
    ///
    pub fn onEncodeData(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, qtc.libqt_list, QDataStream) callconv(.c) void) void {
        qtc.KPageWidgetModel_OnEncodeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` stream: QDataStream `
    ///
    pub fn decodeData(self: KPageWidgetModel, row: i32, column: i32, _parent: anytype, stream: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        comptime _ = @TypeOf(stream)._is_QDataStream;
        return qtc.KPageWidgetModel_DecodeData(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(_parent.ptr), @ptrCast(stream.ptr));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` stream: QDataStream `
    ///
    pub fn superDecodeData(self: KPageWidgetModel, row: i32, column: i32, _parent: anytype, stream: anytype) bool {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        comptime _ = @TypeOf(stream)._is_QDataStream;
        return qtc.KPageWidgetModel_SuperDecodeData(@ptrCast(self.ptr), @bitCast(row), @bitCast(column), @ptrCast(_parent.ptr), @ptrCast(stream.ptr));
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, row: i32, column: i32, parent: QModelIndex, stream: QDataStream) callconv(.c) bool `
    ///
    pub fn onDecodeData(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, i32, i32, QModelIndex, QDataStream) callconv(.c) bool) void {
        qtc.KPageWidgetModel_OnDecodeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn beginInsertRows(self: KPageWidgetModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.KPageWidgetModel_BeginInsertRows(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn superBeginInsertRows(self: KPageWidgetModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.KPageWidgetModel_SuperBeginInsertRows(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onBeginInsertRows(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.KPageWidgetModel_OnBeginInsertRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    pub fn endInsertRows(self: KPageWidgetModel) void {
        qtc.KPageWidgetModel_EndInsertRows(@ptrCast(self.ptr));
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
    /// ` self: KPageWidgetModel `
    ///
    pub fn superEndInsertRows(self: KPageWidgetModel) void {
        qtc.KPageWidgetModel_SuperEndInsertRows(@ptrCast(self.ptr));
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEndInsertRows(self: KPageWidgetModel, callback: *const fn () callconv(.c) void) void {
        qtc.KPageWidgetModel_OnEndInsertRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn beginRemoveRows(self: KPageWidgetModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.KPageWidgetModel_BeginRemoveRows(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn superBeginRemoveRows(self: KPageWidgetModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.KPageWidgetModel_SuperBeginRemoveRows(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onBeginRemoveRows(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.KPageWidgetModel_OnBeginRemoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    pub fn endRemoveRows(self: KPageWidgetModel) void {
        qtc.KPageWidgetModel_EndRemoveRows(@ptrCast(self.ptr));
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
    /// ` self: KPageWidgetModel `
    ///
    pub fn superEndRemoveRows(self: KPageWidgetModel) void {
        qtc.KPageWidgetModel_SuperEndRemoveRows(@ptrCast(self.ptr));
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEndRemoveRows(self: KPageWidgetModel, callback: *const fn () callconv(.c) void) void {
        qtc.KPageWidgetModel_OnEndRemoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
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
    pub fn beginMoveRows(self: KPageWidgetModel, sourceParent: anytype, sourceFirst: i32, sourceLast: i32, destinationParent: anytype, destinationRow: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.KPageWidgetModel_BeginMoveRows(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent.ptr), @bitCast(destinationRow));
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
    /// ` self: KPageWidgetModel `
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
    pub fn superBeginMoveRows(self: KPageWidgetModel, sourceParent: anytype, sourceFirst: i32, sourceLast: i32, destinationParent: anytype, destinationRow: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.KPageWidgetModel_SuperBeginMoveRows(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent.ptr), @bitCast(destinationRow));
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, sourceParent: QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QModelIndex, destinationRow: i32) callconv(.c) bool `
    ///
    pub fn onBeginMoveRows(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) bool) void {
        qtc.KPageWidgetModel_OnBeginMoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    pub fn endMoveRows(self: KPageWidgetModel) void {
        qtc.KPageWidgetModel_EndMoveRows(@ptrCast(self.ptr));
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
    /// ` self: KPageWidgetModel `
    ///
    pub fn superEndMoveRows(self: KPageWidgetModel) void {
        qtc.KPageWidgetModel_SuperEndMoveRows(@ptrCast(self.ptr));
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEndMoveRows(self: KPageWidgetModel, callback: *const fn () callconv(.c) void) void {
        qtc.KPageWidgetModel_OnEndMoveRows(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn beginInsertColumns(self: KPageWidgetModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.KPageWidgetModel_BeginInsertColumns(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn superBeginInsertColumns(self: KPageWidgetModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.KPageWidgetModel_SuperBeginInsertColumns(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onBeginInsertColumns(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.KPageWidgetModel_OnBeginInsertColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    pub fn endInsertColumns(self: KPageWidgetModel) void {
        qtc.KPageWidgetModel_EndInsertColumns(@ptrCast(self.ptr));
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
    /// ` self: KPageWidgetModel `
    ///
    pub fn superEndInsertColumns(self: KPageWidgetModel) void {
        qtc.KPageWidgetModel_SuperEndInsertColumns(@ptrCast(self.ptr));
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEndInsertColumns(self: KPageWidgetModel, callback: *const fn () callconv(.c) void) void {
        qtc.KPageWidgetModel_OnEndInsertColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn beginRemoveColumns(self: KPageWidgetModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.KPageWidgetModel_BeginRemoveColumns(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn superBeginRemoveColumns(self: KPageWidgetModel, _parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.KPageWidgetModel_SuperBeginRemoveColumns(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(first), @bitCast(last));
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onBeginRemoveColumns(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.KPageWidgetModel_OnBeginRemoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    pub fn endRemoveColumns(self: KPageWidgetModel) void {
        qtc.KPageWidgetModel_EndRemoveColumns(@ptrCast(self.ptr));
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
    /// ` self: KPageWidgetModel `
    ///
    pub fn superEndRemoveColumns(self: KPageWidgetModel) void {
        qtc.KPageWidgetModel_SuperEndRemoveColumns(@ptrCast(self.ptr));
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEndRemoveColumns(self: KPageWidgetModel, callback: *const fn () callconv(.c) void) void {
        qtc.KPageWidgetModel_OnEndRemoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
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
    pub fn beginMoveColumns(self: KPageWidgetModel, sourceParent: anytype, sourceFirst: i32, sourceLast: i32, destinationParent: anytype, destinationColumn: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.KPageWidgetModel_BeginMoveColumns(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent.ptr), @bitCast(destinationColumn));
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
    /// ` self: KPageWidgetModel `
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
    pub fn superBeginMoveColumns(self: KPageWidgetModel, sourceParent: anytype, sourceFirst: i32, sourceLast: i32, destinationParent: anytype, destinationColumn: i32) bool {
        comptime _ = @TypeOf(sourceParent)._is_QModelIndex;
        comptime _ = @TypeOf(destinationParent)._is_QModelIndex;
        return qtc.KPageWidgetModel_SuperBeginMoveColumns(@ptrCast(self.ptr), @ptrCast(sourceParent.ptr), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent.ptr), @bitCast(destinationColumn));
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, sourceParent: QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QModelIndex, destinationColumn: i32) callconv(.c) bool `
    ///
    pub fn onBeginMoveColumns(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) bool) void {
        qtc.KPageWidgetModel_OnBeginMoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    pub fn endMoveColumns(self: KPageWidgetModel) void {
        qtc.KPageWidgetModel_EndMoveColumns(@ptrCast(self.ptr));
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
    /// ` self: KPageWidgetModel `
    ///
    pub fn superEndMoveColumns(self: KPageWidgetModel) void {
        qtc.KPageWidgetModel_SuperEndMoveColumns(@ptrCast(self.ptr));
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEndMoveColumns(self: KPageWidgetModel, callback: *const fn () callconv(.c) void) void {
        qtc.KPageWidgetModel_OnEndMoveColumns(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    pub fn beginResetModel(self: KPageWidgetModel) void {
        qtc.KPageWidgetModel_BeginResetModel(@ptrCast(self.ptr));
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
    /// ` self: KPageWidgetModel `
    ///
    pub fn superBeginResetModel(self: KPageWidgetModel) void {
        qtc.KPageWidgetModel_SuperBeginResetModel(@ptrCast(self.ptr));
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onBeginResetModel(self: KPageWidgetModel, callback: *const fn () callconv(.c) void) void {
        qtc.KPageWidgetModel_OnBeginResetModel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    pub fn endResetModel(self: KPageWidgetModel) void {
        qtc.KPageWidgetModel_EndResetModel(@ptrCast(self.ptr));
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
    /// ` self: KPageWidgetModel `
    ///
    pub fn superEndResetModel(self: KPageWidgetModel) void {
        qtc.KPageWidgetModel_SuperEndResetModel(@ptrCast(self.ptr));
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onEndResetModel(self: KPageWidgetModel, callback: *const fn () callconv(.c) void) void {
        qtc.KPageWidgetModel_OnEndResetModel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` from: QModelIndex `
    ///
    /// ` to: QModelIndex `
    ///
    pub fn changePersistentIndex(self: KPageWidgetModel, from: anytype, to: anytype) void {
        comptime _ = @TypeOf(from)._is_QModelIndex;
        comptime _ = @TypeOf(to)._is_QModelIndex;
        qtc.KPageWidgetModel_ChangePersistentIndex(@ptrCast(self.ptr), @ptrCast(from.ptr), @ptrCast(to.ptr));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` from: QModelIndex `
    ///
    /// ` to: QModelIndex `
    ///
    pub fn superChangePersistentIndex(self: KPageWidgetModel, from: anytype, to: anytype) void {
        comptime _ = @TypeOf(from)._is_QModelIndex;
        comptime _ = @TypeOf(to)._is_QModelIndex;
        qtc.KPageWidgetModel_SuperChangePersistentIndex(@ptrCast(self.ptr), @ptrCast(from.ptr), @ptrCast(to.ptr));
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, from: QModelIndex, to: QModelIndex) callconv(.c) void `
    ///
    pub fn onChangePersistentIndex(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, QModelIndex, QModelIndex) callconv(.c) void) void {
        qtc.KPageWidgetModel_OnChangePersistentIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` from: []QModelIndex `
    ///
    /// ` to: []QModelIndex `
    ///
    pub fn changePersistentIndexList(self: KPageWidgetModel, from: []QModelIndex, to: []QModelIndex) void {
        const from_list = qtc.libqt_list{
            .len = from.len,
            .data = @ptrCast(from.ptr),
        };
        const to_list = qtc.libqt_list{
            .len = to.len,
            .data = @ptrCast(to.ptr),
        };
        qtc.KPageWidgetModel_ChangePersistentIndexList(@ptrCast(self.ptr), from_list, to_list);
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` from: []QModelIndex `
    ///
    /// ` to: []QModelIndex `
    ///
    pub fn superChangePersistentIndexList(self: KPageWidgetModel, from: []QModelIndex, to: []QModelIndex) void {
        const from_list = qtc.libqt_list{
            .len = from.len,
            .data = @ptrCast(from.ptr),
        };
        const to_list = qtc.libqt_list{
            .len = to.len,
            .data = @ptrCast(to.ptr),
        };
        qtc.KPageWidgetModel_SuperChangePersistentIndexList(@ptrCast(self.ptr), from_list, to_list);
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, from: qtc.libqt_list ([]QModelIndex), to: qtc.libqt_list ([]QModelIndex)) callconv(.c) void `
    ///
    pub fn onChangePersistentIndexList(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, qtc.libqt_list, qtc.libqt_list) callconv(.c) void) void {
        qtc.KPageWidgetModel_OnChangePersistentIndexList(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn persistentIndexList(self: KPageWidgetModel, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.KPageWidgetModel_PersistentIndexList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("KPageWidgetModel.persistentIndexList: Memory allocation failed");
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superPersistentIndexList(self: KPageWidgetModel, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.KPageWidgetModel_SuperPersistentIndexList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("KPageWidgetModel.persistentIndexList: Memory allocation failed");
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QModelIndex `
    ///
    pub fn onPersistentIndexList(self: KPageWidgetModel, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.KPageWidgetModel_OnPersistentIndexList(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    pub fn sender(self: KPageWidgetModel) QObject {
        return .{ .ptr = qtc.KPageWidgetModel_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KPageWidgetModel `
    ///
    pub fn superSender(self: KPageWidgetModel) QObject {
        return .{ .ptr = qtc.KPageWidgetModel_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KPageWidgetModel, callback: *const fn () callconv(.c) QObject) void {
        qtc.KPageWidgetModel_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    pub fn senderSignalIndex(self: KPageWidgetModel) i32 {
        return qtc.KPageWidgetModel_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KPageWidgetModel `
    ///
    pub fn superSenderSignalIndex(self: KPageWidgetModel) i32 {
        return qtc.KPageWidgetModel_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KPageWidgetModel, callback: *const fn () callconv(.c) i32) void {
        qtc.KPageWidgetModel_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KPageWidgetModel, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KPageWidgetModel_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KPageWidgetModel, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KPageWidgetModel_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, [*:0]const u8) callconv(.c) i32) void {
        qtc.KPageWidgetModel_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KPageWidgetModel, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KPageWidgetModel_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KPageWidgetModel, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KPageWidgetModel_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KPageWidgetModel`
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, QMetaMethod) callconv(.c) bool) void {
        qtc.KPageWidgetModel_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onRowsAboutToBeInserted(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, QModelIndex, i32, i32) callconv(.c) void) void {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onRowsInserted(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, QModelIndex, i32, i32) callconv(.c) void) void {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onRowsAboutToBeRemoved(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, QModelIndex, i32, i32) callconv(.c) void) void {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onRowsRemoved(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, QModelIndex, i32, i32) callconv(.c) void) void {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onColumnsAboutToBeInserted(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, QModelIndex, i32, i32) callconv(.c) void) void {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onColumnsInserted(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, QModelIndex, i32, i32) callconv(.c) void) void {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onColumnsAboutToBeRemoved(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, QModelIndex, i32, i32) callconv(.c) void) void {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn onColumnsRemoved(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, QModelIndex, i32, i32) callconv(.c) void) void {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` callback: *const fn (self: KPageWidgetModel) callconv(.c) void `
    ///
    pub fn onModelAboutToBeReset(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel) callconv(.c) void) void {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` callback: *const fn (self: KPageWidgetModel) callconv(.c) void `
    ///
    pub fn onModelReset(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel) callconv(.c) void) void {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, sourceParent: QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QModelIndex, destinationRow: i32) callconv(.c) void `
    ///
    pub fn onRowsAboutToBeMoved(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) void) void {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, sourceParent: QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QModelIndex, destinationRow: i32) callconv(.c) void `
    ///
    pub fn onRowsMoved(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) void) void {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, sourceParent: QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QModelIndex, destinationColumn: i32) callconv(.c) void `
    ///
    pub fn onColumnsAboutToBeMoved(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) void) void {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, sourceParent: QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QModelIndex, destinationColumn: i32) callconv(.c) void `
    ///
    pub fn onColumnsMoved(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, QModelIndex, i32, i32, QModelIndex, i32) callconv(.c) void) void {
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
    /// ` self: KPageWidgetModel `
    ///
    /// ` callback: *const fn (self: KPageWidgetModel, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KPageWidgetModel, callback: *const fn (KPageWidgetModel, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kpagewidgetmodel.html#dtor.KPageWidgetModel)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KPageWidgetModel `
    ///
    pub fn delete(self: KPageWidgetModel) void {
        qtc.KPageWidgetModel_Delete(@ptrCast(self.ptr));
    }
};
