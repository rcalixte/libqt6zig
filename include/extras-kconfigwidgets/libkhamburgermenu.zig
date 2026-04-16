const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAction = @import("libqt6").QAction;
const QActionGroup = @import("libqt6").QActionGroup;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QFont = @import("libqt6").QFont;
const QIcon = @import("libqt6").QIcon;
const QKeySequence = @import("libqt6").QKeySequence;
const QMenu = @import("libqt6").QMenu;
const QMenuBar = @import("libqt6").QMenuBar;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const QWidget = @import("libqt6").QWidget;
const qaction_enums = @import("../libqaction.zig").enums;
const qkeysequence_enums = @import("../libqkeysequence.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/khamburgermenu.html)
pub const KHamburgerMenu = extern struct {
    /// ### [Upstream resources](https://api.kde.org/khamburgermenu.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KHamburgerMenu,

    pub const _is_KHamburgerMenu = {};
    pub const _is_QWidgetAction = {};
    pub const _is_QAction = {};
    pub const _is_QObject = {};

    /// New constructs a new KHamburgerMenu object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New(parent: anytype) KHamburgerMenu {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KHamburgerMenu_new(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    pub fn MetaObject(self: KHamburgerMenu) QMetaObject {
        return .{ .ptr = qtc.KHamburgerMenu_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KHamburgerMenu, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KHamburgerMenu_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KHamburgerMenu `
    ///
    pub fn SuperMetaObject(self: KHamburgerMenu) QMetaObject {
        return .{ .ptr = qtc.KHamburgerMenu_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KHamburgerMenu, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KHamburgerMenu_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` callback: *const fn (self: KHamburgerMenu, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KHamburgerMenu, callback: *const fn (KHamburgerMenu, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KHamburgerMenu_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KHamburgerMenu, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KHamburgerMenu_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KHamburgerMenu, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KHamburgerMenu_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` callback: *const fn (self: KHamburgerMenu, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KHamburgerMenu, callback: *const fn (KHamburgerMenu, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KHamburgerMenu_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KHamburgerMenu, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KHamburgerMenu_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("khamburgermenu.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/khamburgermenu.html#setMenuBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` menuBar: QMenuBar `
    ///
    pub fn SetMenuBar(self: KHamburgerMenu, menuBar: anytype) void {
        comptime _ = @TypeOf(menuBar)._is_QMenuBar;
        qtc.KHamburgerMenu_SetMenuBar(@ptrCast(self.ptr), @ptrCast(menuBar.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/khamburgermenu.html#menuBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    pub fn MenuBar(self: KHamburgerMenu) QMenuBar {
        return .{ .ptr = qtc.KHamburgerMenu_MenuBar(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/khamburgermenu.html#setMenuBarAdvertised)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` advertise: bool `
    ///
    pub fn SetMenuBarAdvertised(self: KHamburgerMenu, advertise: bool) void {
        qtc.KHamburgerMenu_SetMenuBarAdvertised(@ptrCast(self.ptr), advertise);
    }

    /// ### [Upstream resources](https://api.kde.org/khamburgermenu.html#menuBarAdvertised)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    pub fn MenuBarAdvertised(self: KHamburgerMenu) bool {
        return qtc.KHamburgerMenu_MenuBarAdvertised(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/khamburgermenu.html#setShowMenuBarAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` showMenuBarAction: QAction `
    ///
    pub fn SetShowMenuBarAction(self: KHamburgerMenu, showMenuBarAction: anytype) void {
        comptime _ = @TypeOf(showMenuBarAction)._is_QAction;
        qtc.KHamburgerMenu_SetShowMenuBarAction(@ptrCast(self.ptr), @ptrCast(showMenuBarAction.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/khamburgermenu.html#addToMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` menu: QMenu `
    ///
    pub fn AddToMenu(self: KHamburgerMenu, menu: anytype) void {
        comptime _ = @TypeOf(menu)._is_QMenu;
        qtc.KHamburgerMenu_AddToMenu(@ptrCast(self.ptr), @ptrCast(menu.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/khamburgermenu.html#insertIntoMenuBefore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` menu: QMenu `
    ///
    /// ` before: QAction `
    ///
    pub fn InsertIntoMenuBefore(self: KHamburgerMenu, menu: anytype, before: anytype) void {
        comptime _ = @TypeOf(menu)._is_QMenu;
        comptime _ = @TypeOf(before)._is_QAction;
        qtc.KHamburgerMenu_InsertIntoMenuBefore(@ptrCast(self.ptr), @ptrCast(menu.ptr), @ptrCast(before.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/khamburgermenu.html#hideActionsOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` widget: QWidget `
    ///
    pub fn HideActionsOf(self: KHamburgerMenu, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.KHamburgerMenu_HideActionsOf(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/khamburgermenu.html#showActionsOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` widget: QWidget `
    ///
    pub fn ShowActionsOf(self: KHamburgerMenu, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.KHamburgerMenu_ShowActionsOf(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/khamburgermenu.html#aboutToShowMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    pub fn AboutToShowMenu(self: KHamburgerMenu) void {
        qtc.KHamburgerMenu_AboutToShowMenu(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/khamburgermenu.html#aboutToShowMenu)
    ///
    /// ## Parameters:
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` callback: *const fn (self: KHamburgerMenu) callconv(.c) void `
    ///
    pub fn OnAboutToShowMenu(self: KHamburgerMenu, callback: *const fn (KHamburgerMenu) callconv(.c) void) void {
        qtc.KHamburgerMenu_Connect_AboutToShowMenu(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/khamburgermenu.html#createWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` parent: QWidget `
    ///
    pub fn CreateWidget(self: KHamburgerMenu, parent: anytype) QWidget {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.KHamburgerMenu_CreateWidget(@ptrCast(self.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/khamburgermenu.html#createWidget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` callback: *const fn (self: KHamburgerMenu, parent: QWidget) callconv(.c) QWidget `
    ///
    pub fn OnCreateWidget(self: KHamburgerMenu, callback: *const fn (KHamburgerMenu, QWidget) callconv(.c) QWidget) void {
        qtc.KHamburgerMenu_OnCreateWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCreateWidget` instead
    ///
    pub const QBaseCreateWidget = SuperCreateWidget;

    /// ### [Upstream resources](https://api.kde.org/khamburgermenu.html#createWidget)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SuperCreateWidget(self: KHamburgerMenu, parent: anytype) QWidget {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.KHamburgerMenu_SuperCreateWidget(@ptrCast(self.ptr), @ptrCast(parent.ptr)) };
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("khamburgermenu.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("khamburgermenu.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#setDefaultWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` w: QWidget `
    ///
    pub fn SetDefaultWidget(self: KHamburgerMenu, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QWidgetAction_SetDefaultWidget(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#defaultWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    pub fn DefaultWidget(self: KHamburgerMenu) QWidget {
        return .{ .ptr = qtc.QWidgetAction_DefaultWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#requestWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` parent: QWidget `
    ///
    pub fn RequestWidget(self: KHamburgerMenu, parent: anytype) QWidget {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QWidgetAction_RequestWidget(@ptrCast(self.ptr), @ptrCast(parent.ptr)) };
    }

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#releaseWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` widget: QWidget `
    ///
    pub fn ReleaseWidget(self: KHamburgerMenu, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QWidgetAction_ReleaseWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#associatedObjects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AssociatedObjects(self: KHamburgerMenu, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QAction_AssociatedObjects(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("khamburgermenu.AssociatedObjects: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setActionGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` group: QActionGroup `
    ///
    pub fn SetActionGroup(self: KHamburgerMenu, group: anytype) void {
        comptime _ = @TypeOf(group)._is_QActionGroup;
        qtc.QAction_SetActionGroup(@ptrCast(self.ptr), @ptrCast(group.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#actionGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    pub fn ActionGroup(self: KHamburgerMenu) QActionGroup {
        return .{ .ptr = qtc.QAction_ActionGroup(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetIcon(self: KHamburgerMenu, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QAction_SetIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    pub fn Icon(self: KHamburgerMenu) QIcon {
        return .{ .ptr = qtc.QAction_Icon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: KHamburgerMenu, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QAction_SetText(@ptrCast(self.ptr), text_str);
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: KHamburgerMenu, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAction_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("khamburgermenu.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetIconText(self: KHamburgerMenu, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QAction_SetIconText(@ptrCast(self.ptr), text_str);
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#iconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn IconText(self: KHamburgerMenu, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAction_IconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("khamburgermenu.IconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` tip: []const u8 `
    ///
    pub fn SetToolTip(self: KHamburgerMenu, tip: []const u8) void {
        const tip_str = qtc.libqt_string{
            .len = tip.len,
            .data = tip.ptr,
        };
        qtc.QAction_SetToolTip(@ptrCast(self.ptr), tip_str);
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: KHamburgerMenu, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAction_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("khamburgermenu.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: KHamburgerMenu, statusTip: []const u8) void {
        const statusTip_str = qtc.libqt_string{
            .len = statusTip.len,
            .data = statusTip.ptr,
        };
        qtc.QAction_SetStatusTip(@ptrCast(self.ptr), statusTip_str);
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#statusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusTip(self: KHamburgerMenu, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAction_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("khamburgermenu.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` what: []const u8 `
    ///
    pub fn SetWhatsThis(self: KHamburgerMenu, what: []const u8) void {
        const what_str = qtc.libqt_string{
            .len = what.len,
            .data = what.ptr,
        };
        qtc.QAction_SetWhatsThis(@ptrCast(self.ptr), what_str);
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#whatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: KHamburgerMenu, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAction_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("khamburgermenu.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setPriority)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` priority: qaction_enums.Priority `
    ///
    pub fn SetPriority(self: KHamburgerMenu, priority: i32) void {
        qtc.QAction_SetPriority(@ptrCast(self.ptr), @bitCast(priority));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#priority)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ## Returns:
    ///
    /// ` qaction_enums.Priority `
    ///
    pub fn Priority(self: KHamburgerMenu) i32 {
        return qtc.QAction_Priority(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setSeparator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` b: bool `
    ///
    pub fn SetSeparator(self: KHamburgerMenu, b: bool) void {
        qtc.QAction_SetSeparator(@ptrCast(self.ptr), b);
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isSeparator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    pub fn IsSeparator(self: KHamburgerMenu) bool {
        return qtc.QAction_IsSeparator(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn SetShortcut(self: KHamburgerMenu, shortcut: anytype) void {
        comptime _ = @TypeOf(shortcut)._is_QKeySequence;
        qtc.QAction_SetShortcut(@ptrCast(self.ptr), @ptrCast(shortcut.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    pub fn Shortcut(self: KHamburgerMenu) QKeySequence {
        return .{ .ptr = qtc.QAction_Shortcut(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` shortcuts: []QKeySequence `
    ///
    pub fn SetShortcuts(self: KHamburgerMenu, shortcuts: []QKeySequence) void {
        const shortcuts_list = qtc.libqt_list{
            .len = shortcuts.len,
            .data = @ptrCast(shortcuts.ptr),
        };
        qtc.QAction_SetShortcuts(@ptrCast(self.ptr), shortcuts_list);
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` shortcuts: qkeysequence_enums.StandardKey `
    ///
    pub fn SetShortcuts2(self: KHamburgerMenu, shortcuts: i32) void {
        qtc.QAction_SetShortcuts2(@ptrCast(self.ptr), @bitCast(shortcuts));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcuts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Shortcuts(self: KHamburgerMenu, allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.QAction_Shortcuts(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("khamburgermenu.Shortcuts: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcutContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn SetShortcutContext(self: KHamburgerMenu, context: i32) void {
        qtc.QAction_SetShortcutContext(@ptrCast(self.ptr), @bitCast(context));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcutContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ShortcutContext `
    ///
    pub fn ShortcutContext(self: KHamburgerMenu) i32 {
        return qtc.QAction_ShortcutContext(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` autoRepeat: bool `
    ///
    pub fn SetAutoRepeat(self: KHamburgerMenu, autoRepeat: bool) void {
        qtc.QAction_SetAutoRepeat(@ptrCast(self.ptr), autoRepeat);
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#autoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    pub fn AutoRepeat(self: KHamburgerMenu) bool {
        return qtc.QAction_AutoRepeat(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: KHamburgerMenu, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QAction_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    pub fn Font(self: KHamburgerMenu) QFont {
        return .{ .ptr = qtc.QAction_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setCheckable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` checkable: bool `
    ///
    pub fn SetCheckable(self: KHamburgerMenu, checkable: bool) void {
        qtc.QAction_SetCheckable(@ptrCast(self.ptr), checkable);
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isCheckable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    pub fn IsCheckable(self: KHamburgerMenu) bool {
        return qtc.QAction_IsCheckable(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    pub fn Data(self: KHamburgerMenu) QVariant {
        return .{ .ptr = qtc.QAction_Data(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` varVal: QVariant `
    ///
    pub fn SetData(self: KHamburgerMenu, varVal: anytype) void {
        comptime _ = @TypeOf(varVal)._is_QVariant;
        qtc.QAction_SetData(@ptrCast(self.ptr), @ptrCast(varVal.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isChecked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    pub fn IsChecked(self: KHamburgerMenu) bool {
        return qtc.QAction_IsChecked(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    pub fn IsEnabled(self: KHamburgerMenu) bool {
        return qtc.QAction_IsEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    pub fn IsVisible(self: KHamburgerMenu) bool {
        return qtc.QAction_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#activate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` event: qaction_enums.ActionEvent `
    ///
    pub fn Activate(self: KHamburgerMenu, event: i32) void {
        qtc.QAction_Activate(@ptrCast(self.ptr), @bitCast(event));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setMenuRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` menuRole: qaction_enums.MenuRole `
    ///
    pub fn SetMenuRole(self: KHamburgerMenu, menuRole: i32) void {
        qtc.QAction_SetMenuRole(@ptrCast(self.ptr), @bitCast(menuRole));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#menuRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ## Returns:
    ///
    /// ` qaction_enums.MenuRole `
    ///
    pub fn MenuRole(self: KHamburgerMenu) i32 {
        return qtc.QAction_MenuRole(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIconVisibleInMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` visible: bool `
    ///
    pub fn SetIconVisibleInMenu(self: KHamburgerMenu, visible: bool) void {
        qtc.QAction_SetIconVisibleInMenu(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isIconVisibleInMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    pub fn IsIconVisibleInMenu(self: KHamburgerMenu) bool {
        return qtc.QAction_IsIconVisibleInMenu(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcutVisibleInContextMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` show: bool `
    ///
    pub fn SetShortcutVisibleInContextMenu(self: KHamburgerMenu, show: bool) void {
        qtc.QAction_SetShortcutVisibleInContextMenu(@ptrCast(self.ptr), show);
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isShortcutVisibleInContextMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    pub fn IsShortcutVisibleInContextMenu(self: KHamburgerMenu) bool {
        return qtc.QAction_IsShortcutVisibleInContextMenu(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#showStatusText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    pub fn ShowStatusText(self: KHamburgerMenu) bool {
        return qtc.QAction_ShowStatusText(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#trigger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    pub fn Trigger(self: KHamburgerMenu) void {
        qtc.QAction_Trigger(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hover)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    pub fn Hover(self: KHamburgerMenu) void {
        qtc.QAction_Hover(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setChecked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` checked: bool `
    ///
    pub fn SetChecked(self: KHamburgerMenu, checked: bool) void {
        qtc.QAction_SetChecked(@ptrCast(self.ptr), checked);
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    pub fn Toggle(self: KHamburgerMenu) void {
        qtc.QAction_Toggle(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: KHamburgerMenu, enabled: bool) void {
        qtc.QAction_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#resetEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    pub fn ResetEnabled(self: KHamburgerMenu) void {
        qtc.QAction_ResetEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` b: bool `
    ///
    pub fn SetDisabled(self: KHamburgerMenu, b: bool) void {
        qtc.QAction_SetDisabled(@ptrCast(self.ptr), b);
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: KHamburgerMenu, visible: bool) void {
        qtc.QAction_SetVisible(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#changed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    pub fn Changed(self: KHamburgerMenu) void {
        qtc.QAction_Changed(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#changed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` callback: *const fn (self: KHamburgerMenu) callconv(.c) void `
    ///
    pub fn OnChanged(self: KHamburgerMenu, callback: *const fn (KHamburgerMenu) callconv(.c) void) void {
        qtc.QAction_Connect_Changed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` enabled: bool `
    ///
    pub fn EnabledChanged(self: KHamburgerMenu, enabled: bool) void {
        qtc.QAction_EnabledChanged(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` callback: *const fn (self: KHamburgerMenu, enabled: bool) callconv(.c) void `
    ///
    pub fn OnEnabledChanged(self: KHamburgerMenu, callback: *const fn (KHamburgerMenu, bool) callconv(.c) void) void {
        qtc.QAction_Connect_EnabledChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` checkable: bool `
    ///
    pub fn CheckableChanged(self: KHamburgerMenu, checkable: bool) void {
        qtc.QAction_CheckableChanged(@ptrCast(self.ptr), checkable);
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` callback: *const fn (self: KHamburgerMenu, checkable: bool) callconv(.c) void `
    ///
    pub fn OnCheckableChanged(self: KHamburgerMenu, callback: *const fn (KHamburgerMenu, bool) callconv(.c) void) void {
        qtc.QAction_Connect_CheckableChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    pub fn VisibleChanged(self: KHamburgerMenu) void {
        qtc.QAction_VisibleChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` callback: *const fn (self: KHamburgerMenu) callconv(.c) void `
    ///
    pub fn OnVisibleChanged(self: KHamburgerMenu, callback: *const fn (KHamburgerMenu) callconv(.c) void) void {
        qtc.QAction_Connect_VisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    pub fn Triggered(self: KHamburgerMenu) void {
        qtc.QAction_Triggered(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` callback: *const fn (self: KHamburgerMenu) callconv(.c) void `
    ///
    pub fn OnTriggered(self: KHamburgerMenu, callback: *const fn (KHamburgerMenu) callconv(.c) void) void {
        qtc.QAction_Connect_Triggered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hovered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    pub fn Hovered(self: KHamburgerMenu) void {
        qtc.QAction_Hovered(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hovered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` callback: *const fn (self: KHamburgerMenu) callconv(.c) void `
    ///
    pub fn OnHovered(self: KHamburgerMenu, callback: *const fn (KHamburgerMenu) callconv(.c) void) void {
        qtc.QAction_Connect_Hovered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` param1: bool `
    ///
    pub fn Toggled(self: KHamburgerMenu, param1: bool) void {
        qtc.QAction_Toggled(@ptrCast(self.ptr), param1);
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggled)
    ///
    /// ## Parameters:
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` callback: *const fn (self: KHamburgerMenu, param1: bool) callconv(.c) void `
    ///
    pub fn OnToggled(self: KHamburgerMenu, callback: *const fn (KHamburgerMenu, bool) callconv(.c) void) void {
        qtc.QAction_Connect_Toggled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#showStatusText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` object: QObject `
    ///
    pub fn ShowStatusText1(self: KHamburgerMenu, object: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        return qtc.QAction_ShowStatusText1(@ptrCast(self.ptr), @ptrCast(object.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` checked: bool `
    ///
    pub fn Triggered1(self: KHamburgerMenu, checked: bool) void {
        qtc.QAction_Triggered1(@ptrCast(self.ptr), checked);
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` callback: *const fn (self: KHamburgerMenu, checked: bool) callconv(.c) void `
    ///
    pub fn OnTriggered1(self: KHamburgerMenu, callback: *const fn (KHamburgerMenu, bool) callconv(.c) void) void {
        qtc.QAction_Connect_Triggered1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KHamburgerMenu, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("khamburgermenu.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KHamburgerMenu, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    pub fn IsWidgetType(self: KHamburgerMenu) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    pub fn IsWindowType(self: KHamburgerMenu) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    pub fn IsQuickItemType(self: KHamburgerMenu) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    pub fn SignalsBlocked(self: KHamburgerMenu) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KHamburgerMenu, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    pub fn Thread(self: KHamburgerMenu) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KHamburgerMenu, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KHamburgerMenu, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KHamburgerMenu, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KHamburgerMenu, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KHamburgerMenu, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KHamburgerMenu, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("khamburgermenu.Children: Memory allocation failed");
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
    /// ` self: KHamburgerMenu `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KHamburgerMenu, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KHamburgerMenu, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KHamburgerMenu, obj: anytype) void {
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
    /// ` self: KHamburgerMenu `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KHamburgerMenu, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KHamburgerMenu `
    ///
    pub fn Disconnect3(self: KHamburgerMenu) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KHamburgerMenu, receiver: anytype) bool {
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
    /// ` self: KHamburgerMenu `
    ///
    pub fn DumpObjectTree(self: KHamburgerMenu) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    pub fn DumpObjectInfo(self: KHamburgerMenu) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KHamburgerMenu, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KHamburgerMenu `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KHamburgerMenu, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KHamburgerMenu, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("khamburgermenu.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("khamburgermenu.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KHamburgerMenu `
    ///
    pub fn BindingStorage(self: KHamburgerMenu) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    pub fn BindingStorage2(self: KHamburgerMenu) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    pub fn Destroyed(self: KHamburgerMenu) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` callback: *const fn (self: KHamburgerMenu) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KHamburgerMenu, callback: *const fn (KHamburgerMenu) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    pub fn Parent(self: KHamburgerMenu) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KHamburgerMenu, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    pub fn DeleteLater(self: KHamburgerMenu) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KHamburgerMenu, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KHamburgerMenu, time: i64, timerType: i32) i32 {
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
    /// ` self: KHamburgerMenu `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KHamburgerMenu, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KHamburgerMenu `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KHamburgerMenu, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KHamburgerMenu, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KHamburgerMenu `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KHamburgerMenu, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KHamburgerMenu `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KHamburgerMenu, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KHamburgerMenu `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KHamburgerMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` callback: *const fn (self: KHamburgerMenu, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KHamburgerMenu, callback: *const fn (KHamburgerMenu, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` param1: QEvent `
    ///
    pub fn Event(self: KHamburgerMenu, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.KHamburgerMenu_Event(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` param1: QEvent `
    ///
    pub fn SuperEvent(self: KHamburgerMenu, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.KHamburgerMenu_SuperEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KHamburgerMenu`
    ///
    /// ` callback: *const fn (self: KHamburgerMenu, param1: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KHamburgerMenu, callback: *const fn (KHamburgerMenu, QEvent) callconv(.c) bool) void {
        qtc.KHamburgerMenu_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: QEvent `
    ///
    pub fn EventFilter(self: KHamburgerMenu, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.KHamburgerMenu_EventFilter(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: QEvent `
    ///
    pub fn SuperEventFilter(self: KHamburgerMenu, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.KHamburgerMenu_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KHamburgerMenu`
    ///
    /// ` callback: *const fn (self: KHamburgerMenu, param1: QObject, param2: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KHamburgerMenu, callback: *const fn (KHamburgerMenu, QObject, QEvent) callconv(.c) bool) void {
        qtc.KHamburgerMenu_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#deleteWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` widget: QWidget `
    ///
    pub fn DeleteWidget(self: KHamburgerMenu, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.KHamburgerMenu_DeleteWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `SuperDeleteWidget` instead
    ///
    pub const QBaseDeleteWidget = SuperDeleteWidget;

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#deleteWidget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SuperDeleteWidget(self: KHamburgerMenu, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.KHamburgerMenu_SuperDeleteWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#deleteWidget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KHamburgerMenu`
    ///
    /// ` callback: *const fn (self: KHamburgerMenu, widget: QWidget) callconv(.c) void `
    ///
    pub fn OnDeleteWidget(self: KHamburgerMenu, callback: *const fn (KHamburgerMenu, QWidget) callconv(.c) void) void {
        qtc.KHamburgerMenu_OnDeleteWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KHamburgerMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KHamburgerMenu_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KHamburgerMenu `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KHamburgerMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KHamburgerMenu_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KHamburgerMenu`
    ///
    /// ` callback: *const fn (self: KHamburgerMenu, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KHamburgerMenu, callback: *const fn (KHamburgerMenu, QTimerEvent) callconv(.c) void) void {
        qtc.KHamburgerMenu_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KHamburgerMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KHamburgerMenu_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KHamburgerMenu `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KHamburgerMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KHamburgerMenu_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KHamburgerMenu`
    ///
    /// ` callback: *const fn (self: KHamburgerMenu, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KHamburgerMenu, callback: *const fn (KHamburgerMenu, QChildEvent) callconv(.c) void) void {
        qtc.KHamburgerMenu_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KHamburgerMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KHamburgerMenu_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KHamburgerMenu `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KHamburgerMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KHamburgerMenu_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KHamburgerMenu`
    ///
    /// ` callback: *const fn (self: KHamburgerMenu, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KHamburgerMenu, callback: *const fn (KHamburgerMenu, QEvent) callconv(.c) void) void {
        qtc.KHamburgerMenu_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KHamburgerMenu, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KHamburgerMenu_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KHamburgerMenu `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KHamburgerMenu, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KHamburgerMenu_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KHamburgerMenu`
    ///
    /// ` callback: *const fn (self: KHamburgerMenu, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KHamburgerMenu, callback: *const fn (KHamburgerMenu, QMetaMethod) callconv(.c) void) void {
        qtc.KHamburgerMenu_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KHamburgerMenu, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KHamburgerMenu_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KHamburgerMenu `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KHamburgerMenu, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KHamburgerMenu_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KHamburgerMenu`
    ///
    /// ` callback: *const fn (self: KHamburgerMenu, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KHamburgerMenu, callback: *const fn (KHamburgerMenu, QMetaMethod) callconv(.c) void) void {
        qtc.KHamburgerMenu_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CreatedWidgets(self: KHamburgerMenu, allocator: std.mem.Allocator) []QWidget {
        const _arr: qtc.libqt_list = qtc.KHamburgerMenu_CreatedWidgets(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("khamburgermenu.CreatedWidgets: Memory allocation failed");
        const _data: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperCreatedWidgets` instead
    ///
    pub const QBaseCreatedWidgets = SuperCreatedWidgets;

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperCreatedWidgets(self: KHamburgerMenu, allocator: std.mem.Allocator) []QWidget {
        const _arr: qtc.libqt_list = qtc.KHamburgerMenu_SuperCreatedWidgets(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("khamburgermenu.CreatedWidgets: Memory allocation failed");
        const _data: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KHamburgerMenu`
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QWidget `
    ///
    pub fn OnCreatedWidgets(self: KHamburgerMenu, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.KHamburgerMenu_OnCreatedWidgets(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    pub fn Sender(self: KHamburgerMenu) QObject {
        return .{ .ptr = qtc.KHamburgerMenu_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KHamburgerMenu `
    ///
    pub fn SuperSender(self: KHamburgerMenu) QObject {
        return .{ .ptr = qtc.KHamburgerMenu_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KHamburgerMenu`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KHamburgerMenu, callback: *const fn () callconv(.c) QObject) void {
        qtc.KHamburgerMenu_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    pub fn SenderSignalIndex(self: KHamburgerMenu) i32 {
        return qtc.KHamburgerMenu_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KHamburgerMenu `
    ///
    pub fn SuperSenderSignalIndex(self: KHamburgerMenu) i32 {
        return qtc.KHamburgerMenu_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KHamburgerMenu`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KHamburgerMenu, callback: *const fn () callconv(.c) i32) void {
        qtc.KHamburgerMenu_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KHamburgerMenu, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KHamburgerMenu_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KHamburgerMenu `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KHamburgerMenu, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KHamburgerMenu_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KHamburgerMenu`
    ///
    /// ` callback: *const fn (self: KHamburgerMenu, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KHamburgerMenu, callback: *const fn (KHamburgerMenu, [*:0]const u8) callconv(.c) i32) void {
        qtc.KHamburgerMenu_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KHamburgerMenu, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KHamburgerMenu_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KHamburgerMenu `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KHamburgerMenu, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KHamburgerMenu_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KHamburgerMenu`
    ///
    /// ` callback: *const fn (self: KHamburgerMenu, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KHamburgerMenu, callback: *const fn (KHamburgerMenu, QMetaMethod) callconv(.c) bool) void {
        qtc.KHamburgerMenu_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KHamburgerMenu `
    ///
    /// ` callback: *const fn (self: KHamburgerMenu, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KHamburgerMenu, callback: *const fn (KHamburgerMenu, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/khamburgermenu.html#dtor.KHamburgerMenu)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KHamburgerMenu `
    ///
    pub fn Delete(self: KHamburgerMenu) void {
        qtc.KHamburgerMenu_Delete(@ptrCast(self.ptr));
    }
};
