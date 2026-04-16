const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QIcon = @import("libqt6").QIcon;
const QMenu = @import("libqt6").QMenu;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QRect = @import("libqt6").QRect;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qsystemtrayicon_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html)
pub const QSystemTrayIcon = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSystemTrayIcon,

    pub const _is_QSystemTrayIcon = {};
    pub const _is_QObject = {};

    /// New constructs a new QSystemTrayIcon object.
    ///
    pub fn New() QSystemTrayIcon {
        return .{ .ptr = qtc.QSystemTrayIcon_new() };
    }

    /// New2 constructs a new QSystemTrayIcon object.
    ///
    /// ## Parameter(s):
    ///
    /// ` icon: QIcon `
    ///
    pub fn New2(icon: anytype) QSystemTrayIcon {
        comptime _ = @TypeOf(icon)._is_QIcon;
        return .{ .ptr = qtc.QSystemTrayIcon_new2(@ptrCast(icon.ptr)) };
    }

    /// New3 constructs a new QSystemTrayIcon object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New3(parent: anytype) QSystemTrayIcon {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QSystemTrayIcon_new3(@ptrCast(parent.ptr)) };
    }

    /// New4 constructs a new QSystemTrayIcon object.
    ///
    /// ## Parameter(s):
    ///
    /// ` icon: QIcon `
    ///
    /// ` parent: QObject `
    ///
    pub fn New4(icon: anytype, parent: anytype) QSystemTrayIcon {
        comptime _ = @TypeOf(icon)._is_QIcon;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QSystemTrayIcon_new4(@ptrCast(icon.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    pub fn MetaObject(self: QSystemTrayIcon) QMetaObject {
        return .{ .ptr = qtc.QSystemTrayIcon_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QSystemTrayIcon, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QSystemTrayIcon_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSystemTrayIcon `
    ///
    pub fn SuperMetaObject(self: QSystemTrayIcon) QMetaObject {
        return .{ .ptr = qtc.QSystemTrayIcon_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QSystemTrayIcon, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSystemTrayIcon_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` callback: *const fn (self: QSystemTrayIcon, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QSystemTrayIcon, callback: *const fn (QSystemTrayIcon, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QSystemTrayIcon_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QSystemTrayIcon, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSystemTrayIcon_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QSystemTrayIcon, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSystemTrayIcon_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` callback: *const fn (self: QSystemTrayIcon, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QSystemTrayIcon, callback: *const fn (QSystemTrayIcon, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QSystemTrayIcon_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QSystemTrayIcon, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSystemTrayIcon_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsystemtrayicon.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#setContextMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` menu: QMenu `
    ///
    pub fn SetContextMenu(self: QSystemTrayIcon, menu: anytype) void {
        comptime _ = @TypeOf(menu)._is_QMenu;
        qtc.QSystemTrayIcon_SetContextMenu(@ptrCast(self.ptr), @ptrCast(menu.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#contextMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    pub fn ContextMenu(self: QSystemTrayIcon) QMenu {
        return .{ .ptr = qtc.QSystemTrayIcon_ContextMenu(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    pub fn Icon(self: QSystemTrayIcon) QIcon {
        return .{ .ptr = qtc.QSystemTrayIcon_Icon(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetIcon(self: QSystemTrayIcon, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QSystemTrayIcon_SetIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#toolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: QSystemTrayIcon, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSystemTrayIcon_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsystemtrayicon.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` tip: []const u8 `
    ///
    pub fn SetToolTip(self: QSystemTrayIcon, tip: []const u8) void {
        const tip_str = qtc.libqt_string{
            .len = tip.len,
            .data = tip.ptr,
        };
        qtc.QSystemTrayIcon_SetToolTip(@ptrCast(self.ptr), tip_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#isSystemTrayAvailable)
    ///
    pub fn IsSystemTrayAvailable() bool {
        return qtc.QSystemTrayIcon_IsSystemTrayAvailable();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#supportsMessages)
    ///
    pub fn SupportsMessages() bool {
        return qtc.QSystemTrayIcon_SupportsMessages();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    pub fn Geometry(self: QSystemTrayIcon) QRect {
        return .{ .ptr = qtc.QSystemTrayIcon_Geometry(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    pub fn IsVisible(self: QSystemTrayIcon) bool {
        return qtc.QSystemTrayIcon_IsVisible(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: QSystemTrayIcon, visible: bool) void {
        qtc.QSystemTrayIcon_SetVisible(@ptrCast(self.ptr), visible);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    pub fn Show(self: QSystemTrayIcon) void {
        qtc.QSystemTrayIcon_Show(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    pub fn Hide(self: QSystemTrayIcon) void {
        qtc.QSystemTrayIcon_Hide(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#showMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` title: []const u8 `
    ///
    /// ` msg: []const u8 `
    ///
    /// ` icon: QIcon `
    ///
    pub fn ShowMessage(self: QSystemTrayIcon, title: []const u8, msg: []const u8, icon: anytype) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QSystemTrayIcon_ShowMessage(@ptrCast(self.ptr), title_str, msg_str, @ptrCast(icon.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#showMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` title: []const u8 `
    ///
    /// ` msg: []const u8 `
    ///
    pub fn ShowMessage2(self: QSystemTrayIcon, title: []const u8, msg: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        qtc.QSystemTrayIcon_ShowMessage2(@ptrCast(self.ptr), title_str, msg_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#activated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` reason: qsystemtrayicon_enums.ActivationReason `
    ///
    pub fn Activated(self: QSystemTrayIcon, reason: i32) void {
        qtc.QSystemTrayIcon_Activated(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#activated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` callback: *const fn (self: QSystemTrayIcon, reason: qsystemtrayicon_enums.ActivationReason) callconv(.c) void `
    ///
    pub fn OnActivated(self: QSystemTrayIcon, callback: *const fn (QSystemTrayIcon, i32) callconv(.c) void) void {
        qtc.QSystemTrayIcon_Connect_Activated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#messageClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    pub fn MessageClicked(self: QSystemTrayIcon) void {
        qtc.QSystemTrayIcon_MessageClicked(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#messageClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` callback: *const fn (self: QSystemTrayIcon) callconv(.c) void `
    ///
    pub fn OnMessageClicked(self: QSystemTrayIcon, callback: *const fn (QSystemTrayIcon) callconv(.c) void) void {
        qtc.QSystemTrayIcon_Connect_MessageClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QSystemTrayIcon, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSystemTrayIcon_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` callback: *const fn (self: QSystemTrayIcon, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QSystemTrayIcon, callback: *const fn (QSystemTrayIcon, QEvent) callconv(.c) bool) void {
        qtc.QSystemTrayIcon_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#event)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QSystemTrayIcon, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSystemTrayIcon_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsystemtrayicon.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsystemtrayicon.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#showMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` title: []const u8 `
    ///
    /// ` msg: []const u8 `
    ///
    /// ` icon: QIcon `
    ///
    /// ` msecs: i32 `
    ///
    pub fn ShowMessage4(self: QSystemTrayIcon, title: []const u8, msg: []const u8, icon: anytype, msecs: i32) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QSystemTrayIcon_ShowMessage4(@ptrCast(self.ptr), title_str, msg_str, @ptrCast(icon.ptr), @bitCast(msecs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#showMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` title: []const u8 `
    ///
    /// ` msg: []const u8 `
    ///
    /// ` icon: qsystemtrayicon_enums.MessageIcon `
    ///
    pub fn ShowMessage3(self: QSystemTrayIcon, title: []const u8, msg: []const u8, icon: i32) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        qtc.QSystemTrayIcon_ShowMessage3(@ptrCast(self.ptr), title_str, msg_str, @bitCast(icon));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#showMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` title: []const u8 `
    ///
    /// ` msg: []const u8 `
    ///
    /// ` icon: qsystemtrayicon_enums.MessageIcon `
    ///
    /// ` msecs: i32 `
    ///
    pub fn ShowMessage42(self: QSystemTrayIcon, title: []const u8, msg: []const u8, icon: i32, msecs: i32) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const msg_str = qtc.libqt_string{
            .len = msg.len,
            .data = msg.ptr,
        };
        qtc.QSystemTrayIcon_ShowMessage42(@ptrCast(self.ptr), title_str, msg_str, @bitCast(icon), @bitCast(msecs));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QSystemTrayIcon, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsystemtrayicon.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QSystemTrayIcon, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    pub fn IsWidgetType(self: QSystemTrayIcon) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    pub fn IsWindowType(self: QSystemTrayIcon) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    pub fn IsQuickItemType(self: QSystemTrayIcon) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    pub fn SignalsBlocked(self: QSystemTrayIcon) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QSystemTrayIcon, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    pub fn Thread(self: QSystemTrayIcon) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QSystemTrayIcon, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QSystemTrayIcon, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QSystemTrayIcon, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QSystemTrayIcon, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QSystemTrayIcon, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QSystemTrayIcon, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qsystemtrayicon.Children: Memory allocation failed");
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
    /// ` self: QSystemTrayIcon `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QSystemTrayIcon, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QSystemTrayIcon, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QSystemTrayIcon, obj: anytype) void {
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
    /// ` self: QSystemTrayIcon `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QSystemTrayIcon, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QSystemTrayIcon `
    ///
    pub fn Disconnect3(self: QSystemTrayIcon) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QSystemTrayIcon, receiver: anytype) bool {
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
    /// ` self: QSystemTrayIcon `
    ///
    pub fn DumpObjectTree(self: QSystemTrayIcon) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    pub fn DumpObjectInfo(self: QSystemTrayIcon) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QSystemTrayIcon, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QSystemTrayIcon `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QSystemTrayIcon, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QSystemTrayIcon, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qsystemtrayicon.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qsystemtrayicon.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QSystemTrayIcon `
    ///
    pub fn BindingStorage(self: QSystemTrayIcon) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    pub fn BindingStorage2(self: QSystemTrayIcon) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    pub fn Destroyed(self: QSystemTrayIcon) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` callback: *const fn (self: QSystemTrayIcon) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QSystemTrayIcon, callback: *const fn (QSystemTrayIcon) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    pub fn Parent(self: QSystemTrayIcon) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QSystemTrayIcon, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    pub fn DeleteLater(self: QSystemTrayIcon) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QSystemTrayIcon, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QSystemTrayIcon, time: i64, timerType: i32) i32 {
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
    /// ` self: QSystemTrayIcon `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QSystemTrayIcon, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QSystemTrayIcon `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QSystemTrayIcon, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QSystemTrayIcon, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QSystemTrayIcon `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QSystemTrayIcon, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QSystemTrayIcon `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QSystemTrayIcon, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QSystemTrayIcon `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QSystemTrayIcon, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` callback: *const fn (self: QSystemTrayIcon, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QSystemTrayIcon, callback: *const fn (QSystemTrayIcon, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QSystemTrayIcon, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSystemTrayIcon_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSystemTrayIcon `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QSystemTrayIcon, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSystemTrayIcon_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSystemTrayIcon`
    ///
    /// ` callback: *const fn (self: QSystemTrayIcon, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QSystemTrayIcon, callback: *const fn (QSystemTrayIcon, QObject, QEvent) callconv(.c) bool) void {
        qtc.QSystemTrayIcon_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QSystemTrayIcon, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QSystemTrayIcon_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSystemTrayIcon `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QSystemTrayIcon, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QSystemTrayIcon_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSystemTrayIcon`
    ///
    /// ` callback: *const fn (self: QSystemTrayIcon, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QSystemTrayIcon, callback: *const fn (QSystemTrayIcon, QTimerEvent) callconv(.c) void) void {
        qtc.QSystemTrayIcon_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QSystemTrayIcon, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QSystemTrayIcon_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSystemTrayIcon `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QSystemTrayIcon, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QSystemTrayIcon_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSystemTrayIcon`
    ///
    /// ` callback: *const fn (self: QSystemTrayIcon, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QSystemTrayIcon, callback: *const fn (QSystemTrayIcon, QChildEvent) callconv(.c) void) void {
        qtc.QSystemTrayIcon_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QSystemTrayIcon, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QSystemTrayIcon_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSystemTrayIcon `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QSystemTrayIcon, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QSystemTrayIcon_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSystemTrayIcon`
    ///
    /// ` callback: *const fn (self: QSystemTrayIcon, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QSystemTrayIcon, callback: *const fn (QSystemTrayIcon, QEvent) callconv(.c) void) void {
        qtc.QSystemTrayIcon_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QSystemTrayIcon, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSystemTrayIcon_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSystemTrayIcon `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QSystemTrayIcon, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSystemTrayIcon_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSystemTrayIcon`
    ///
    /// ` callback: *const fn (self: QSystemTrayIcon, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QSystemTrayIcon, callback: *const fn (QSystemTrayIcon, QMetaMethod) callconv(.c) void) void {
        qtc.QSystemTrayIcon_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QSystemTrayIcon, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSystemTrayIcon_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSystemTrayIcon `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QSystemTrayIcon, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSystemTrayIcon_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSystemTrayIcon`
    ///
    /// ` callback: *const fn (self: QSystemTrayIcon, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QSystemTrayIcon, callback: *const fn (QSystemTrayIcon, QMetaMethod) callconv(.c) void) void {
        qtc.QSystemTrayIcon_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    pub fn Sender(self: QSystemTrayIcon) QObject {
        return .{ .ptr = qtc.QSystemTrayIcon_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QSystemTrayIcon `
    ///
    pub fn SuperSender(self: QSystemTrayIcon) QObject {
        return .{ .ptr = qtc.QSystemTrayIcon_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSystemTrayIcon`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QSystemTrayIcon, callback: *const fn () callconv(.c) QObject) void {
        qtc.QSystemTrayIcon_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    pub fn SenderSignalIndex(self: QSystemTrayIcon) i32 {
        return qtc.QSystemTrayIcon_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QSystemTrayIcon `
    ///
    pub fn SuperSenderSignalIndex(self: QSystemTrayIcon) i32 {
        return qtc.QSystemTrayIcon_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSystemTrayIcon`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QSystemTrayIcon, callback: *const fn () callconv(.c) i32) void {
        qtc.QSystemTrayIcon_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QSystemTrayIcon, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSystemTrayIcon_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QSystemTrayIcon `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QSystemTrayIcon, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSystemTrayIcon_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSystemTrayIcon`
    ///
    /// ` callback: *const fn (self: QSystemTrayIcon, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QSystemTrayIcon, callback: *const fn (QSystemTrayIcon, [*:0]const u8) callconv(.c) i32) void {
        qtc.QSystemTrayIcon_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QSystemTrayIcon, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSystemTrayIcon_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSystemTrayIcon `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QSystemTrayIcon, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSystemTrayIcon_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSystemTrayIcon`
    ///
    /// ` callback: *const fn (self: QSystemTrayIcon, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QSystemTrayIcon, callback: *const fn (QSystemTrayIcon, QMetaMethod) callconv(.c) bool) void {
        qtc.QSystemTrayIcon_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QSystemTrayIcon `
    ///
    /// ` callback: *const fn (self: QSystemTrayIcon, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QSystemTrayIcon, callback: *const fn (QSystemTrayIcon, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#dtor.QSystemTrayIcon)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QSystemTrayIcon `
    ///
    pub fn Delete(self: QSystemTrayIcon) void {
        qtc.QSystemTrayIcon_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsystemtrayicon.html#public-types)
pub const enums = struct {
    pub const ActivationReason = enum(i32) {
        pub const Unknown: i32 = 0;
        pub const Context: i32 = 1;
        pub const DoubleClick: i32 = 2;
        pub const Trigger: i32 = 3;
        pub const MiddleClick: i32 = 4;
    };

    pub const MessageIcon = enum(i32) {
        pub const NoIcon: i32 = 0;
        pub const Information: i32 = 1;
        pub const Warning: i32 = 2;
        pub const Critical: i32 = 3;
    };
};
