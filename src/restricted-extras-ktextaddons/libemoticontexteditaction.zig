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
const qtoolbutton_enums = @import("../libqtoolbutton.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsWidgets_1_1EmoticonTextEditAction.html)
pub const TextEmoticonsWidgets__EmoticonTextEditAction = extern struct {
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsWidgets_1_1EmoticonTextEditAction.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.TextEmoticonsWidgets__EmoticonTextEditAction,

    pub const _is_TextEmoticonsWidgets__EmoticonTextEditAction = {};
    pub const _is_KActionMenu = {};
    pub const _is_QWidgetAction = {};
    pub const _is_QAction = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new TextEmoticonsWidgets::EmoticonTextEditAction object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new(_parent: anytype) TextEmoticonsWidgets__EmoticonTextEditAction {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.TextEmoticonsWidgets__EmoticonTextEditAction_new(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsWidgets_1_1EmoticonTextEditAction.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    pub fn metaObject(self: TextEmoticonsWidgets__EmoticonTextEditAction) QMetaObject {
        return .{ .ptr = qtc.TextEmoticonsWidgets__EmoticonTextEditAction_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsWidgets_1_1EmoticonTextEditAction.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: TextEmoticonsWidgets__EmoticonTextEditAction, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditAction_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsWidgets_1_1EmoticonTextEditAction.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    pub fn superMetaObject(self: TextEmoticonsWidgets__EmoticonTextEditAction) QMetaObject {
        return .{ .ptr = qtc.TextEmoticonsWidgets__EmoticonTextEditAction_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: TextEmoticonsWidgets__EmoticonTextEditAction, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.TextEmoticonsWidgets__EmoticonTextEditAction_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditAction, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: TextEmoticonsWidgets__EmoticonTextEditAction, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditAction, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditAction_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: TextEmoticonsWidgets__EmoticonTextEditAction, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.TextEmoticonsWidgets__EmoticonTextEditAction_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: TextEmoticonsWidgets__EmoticonTextEditAction, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.TextEmoticonsWidgets__EmoticonTextEditAction_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditAction, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: TextEmoticonsWidgets__EmoticonTextEditAction, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditAction, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditAction_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: TextEmoticonsWidgets__EmoticonTextEditAction, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.TextEmoticonsWidgets__EmoticonTextEditAction_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextEmoticonsWidgets__EmoticonTextEditAction.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setCustomEmojiSupport` instead
    ///
    pub const SetCustomEmojiSupport = setCustomEmojiSupport;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsWidgets_1_1EmoticonTextEditAction.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` b: bool `
    ///
    pub fn setCustomEmojiSupport(self: TextEmoticonsWidgets__EmoticonTextEditAction, b: bool) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditAction_SetCustomEmojiSupport(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `customEmojiSupport` instead
    ///
    pub const CustomEmojiSupport = customEmojiSupport;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsWidgets_1_1EmoticonTextEditAction.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    pub fn customEmojiSupport(self: TextEmoticonsWidgets__EmoticonTextEditAction) bool {
        return qtc.TextEmoticonsWidgets__EmoticonTextEditAction_CustomEmojiSupport(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `insertEmoticon` instead
    ///
    pub const InsertEmoticon = insertEmoticon;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsWidgets_1_1EmoticonTextEditAction.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn insertEmoticon(self: TextEmoticonsWidgets__EmoticonTextEditAction, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.TextEmoticonsWidgets__EmoticonTextEditAction_InsertEmoticon(@ptrCast(self.ptr), param1_str);
    }

    /// ### DEPRECATED: Use `onInsertEmoticon` instead
    ///
    pub const OnInsertEmoticon = onInsertEmoticon;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsWidgets_1_1EmoticonTextEditAction.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditAction, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onInsertEmoticon(self: TextEmoticonsWidgets__EmoticonTextEditAction, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditAction, [*:0]const u8) callconv(.c) void) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditAction_Connect_InsertEmoticon(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextEmoticonsWidgets__EmoticonTextEditAction.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextEmoticonsWidgets__EmoticonTextEditAction.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `addAction` instead
    ///
    pub const AddAction = addAction;

    /// Inherited from KActionMenu
    ///
    /// ### [Upstream resources](https://api.kde.org/kactionmenu.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` action: QAction `
    ///
    pub fn addAction(self: TextEmoticonsWidgets__EmoticonTextEditAction, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.KActionMenu_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// ### DEPRECATED: Use `addSeparator` instead
    ///
    pub const AddSeparator = addSeparator;

    /// Inherited from KActionMenu
    ///
    /// ### [Upstream resources](https://api.kde.org/kactionmenu.html#addSeparator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    pub fn addSeparator(self: TextEmoticonsWidgets__EmoticonTextEditAction) QAction {
        return .{ .ptr = qtc.KActionMenu_AddSeparator(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `insertAction` instead
    ///
    pub const InsertAction = insertAction;

    /// Inherited from KActionMenu
    ///
    /// ### [Upstream resources](https://api.kde.org/kactionmenu.html#insertAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn insertAction(self: TextEmoticonsWidgets__EmoticonTextEditAction, before: anytype, action: anytype) void {
        comptime _ = @TypeOf(before)._is_QAction;
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.KActionMenu_InsertAction(@ptrCast(self.ptr), @ptrCast(before.ptr), @ptrCast(action.ptr));
    }

    /// ### DEPRECATED: Use `insertSeparator` instead
    ///
    pub const InsertSeparator = insertSeparator;

    /// Inherited from KActionMenu
    ///
    /// ### [Upstream resources](https://api.kde.org/kactionmenu.html#insertSeparator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` before: QAction `
    ///
    pub fn insertSeparator(self: TextEmoticonsWidgets__EmoticonTextEditAction, before: anytype) QAction {
        comptime _ = @TypeOf(before)._is_QAction;
        return .{ .ptr = qtc.KActionMenu_InsertSeparator(@ptrCast(self.ptr), @ptrCast(before.ptr)) };
    }

    /// ### DEPRECATED: Use `removeAction` instead
    ///
    pub const RemoveAction = removeAction;

    /// Inherited from KActionMenu
    ///
    /// ### [Upstream resources](https://api.kde.org/kactionmenu.html#removeAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` action: QAction `
    ///
    pub fn removeAction(self: TextEmoticonsWidgets__EmoticonTextEditAction, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.KActionMenu_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// ### DEPRECATED: Use `popupMode` instead
    ///
    pub const PopupMode = popupMode;

    /// Inherited from KActionMenu
    ///
    /// ### [Upstream resources](https://api.kde.org/kactionmenu.html#popupMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ## Returns:
    ///
    /// ` qtoolbutton_enums.ToolButtonPopupMode `
    ///
    pub fn popupMode(self: TextEmoticonsWidgets__EmoticonTextEditAction) i32 {
        return qtc.KActionMenu_PopupMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPopupMode` instead
    ///
    pub const SetPopupMode = setPopupMode;

    /// Inherited from KActionMenu
    ///
    /// ### [Upstream resources](https://api.kde.org/kactionmenu.html#setPopupMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` _popupMode: qtoolbutton_enums.ToolButtonPopupMode `
    ///
    pub fn setPopupMode(self: TextEmoticonsWidgets__EmoticonTextEditAction, _popupMode: i32) void {
        qtc.KActionMenu_SetPopupMode(@ptrCast(self.ptr), @bitCast(_popupMode));
    }

    /// ### DEPRECATED: Use `setDefaultWidget` instead
    ///
    pub const SetDefaultWidget = setDefaultWidget;

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#setDefaultWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` w: QWidget `
    ///
    pub fn setDefaultWidget(self: TextEmoticonsWidgets__EmoticonTextEditAction, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QWidgetAction_SetDefaultWidget(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `defaultWidget` instead
    ///
    pub const DefaultWidget = defaultWidget;

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#defaultWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    pub fn defaultWidget(self: TextEmoticonsWidgets__EmoticonTextEditAction) QWidget {
        return .{ .ptr = qtc.QWidgetAction_DefaultWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `requestWidget` instead
    ///
    pub const RequestWidget = requestWidget;

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#requestWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn requestWidget(self: TextEmoticonsWidgets__EmoticonTextEditAction, _parent: anytype) QWidget {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.QWidgetAction_RequestWidget(@ptrCast(self.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `releaseWidget` instead
    ///
    pub const ReleaseWidget = releaseWidget;

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#releaseWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` widget: QWidget `
    ///
    pub fn releaseWidget(self: TextEmoticonsWidgets__EmoticonTextEditAction, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QWidgetAction_ReleaseWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `associatedObjects` instead
    ///
    pub const AssociatedObjects = associatedObjects;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#associatedObjects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn associatedObjects(self: TextEmoticonsWidgets__EmoticonTextEditAction, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QAction_AssociatedObjects(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("TextEmoticonsWidgets__EmoticonTextEditAction.associatedObjects: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setActionGroup` instead
    ///
    pub const SetActionGroup = setActionGroup;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setActionGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` group: QActionGroup `
    ///
    pub fn setActionGroup(self: TextEmoticonsWidgets__EmoticonTextEditAction, group: anytype) void {
        comptime _ = @TypeOf(group)._is_QActionGroup;
        qtc.QAction_SetActionGroup(@ptrCast(self.ptr), @ptrCast(group.ptr));
    }

    /// ### DEPRECATED: Use `actionGroup` instead
    ///
    pub const ActionGroup = actionGroup;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#actionGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    pub fn actionGroup(self: TextEmoticonsWidgets__EmoticonTextEditAction) QActionGroup {
        return .{ .ptr = qtc.QAction_ActionGroup(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setIcon` instead
    ///
    pub const SetIcon = setIcon;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` _icon: QIcon `
    ///
    pub fn setIcon(self: TextEmoticonsWidgets__EmoticonTextEditAction, _icon: anytype) void {
        comptime _ = @TypeOf(_icon)._is_QIcon;
        qtc.QAction_SetIcon(@ptrCast(self.ptr), @ptrCast(_icon.ptr));
    }

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    pub fn icon(self: TextEmoticonsWidgets__EmoticonTextEditAction) QIcon {
        return .{ .ptr = qtc.QAction_Icon(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setText` instead
    ///
    pub const SetText = setText;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn setText(self: TextEmoticonsWidgets__EmoticonTextEditAction, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QAction_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(self: TextEmoticonsWidgets__EmoticonTextEditAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAction_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextEmoticonsWidgets__EmoticonTextEditAction.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setIconText` instead
    ///
    pub const SetIconText = setIconText;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn setIconText(self: TextEmoticonsWidgets__EmoticonTextEditAction, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QAction_SetIconText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `iconText` instead
    ///
    pub const IconText = iconText;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#iconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn iconText(self: TextEmoticonsWidgets__EmoticonTextEditAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAction_IconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextEmoticonsWidgets__EmoticonTextEditAction.iconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setToolTip` instead
    ///
    pub const SetToolTip = setToolTip;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` tip: []const u8 `
    ///
    pub fn setToolTip(self: TextEmoticonsWidgets__EmoticonTextEditAction, tip: []const u8) void {
        const tip_str = qtc.libqt_string{
            .len = tip.len,
            .data = tip.ptr,
        };
        qtc.QAction_SetToolTip(@ptrCast(self.ptr), tip_str);
    }

    /// ### DEPRECATED: Use `toolTip` instead
    ///
    pub const ToolTip = toolTip;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toolTip(self: TextEmoticonsWidgets__EmoticonTextEditAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAction_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextEmoticonsWidgets__EmoticonTextEditAction.toolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setStatusTip` instead
    ///
    pub const SetStatusTip = setStatusTip;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` _statusTip: []const u8 `
    ///
    pub fn setStatusTip(self: TextEmoticonsWidgets__EmoticonTextEditAction, _statusTip: []const u8) void {
        const statusTip_str = qtc.libqt_string{
            .len = _statusTip.len,
            .data = _statusTip.ptr,
        };
        qtc.QAction_SetStatusTip(@ptrCast(self.ptr), statusTip_str);
    }

    /// ### DEPRECATED: Use `statusTip` instead
    ///
    pub const StatusTip = statusTip;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#statusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn statusTip(self: TextEmoticonsWidgets__EmoticonTextEditAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAction_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextEmoticonsWidgets__EmoticonTextEditAction.statusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setWhatsThis` instead
    ///
    pub const SetWhatsThis = setWhatsThis;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` what: []const u8 `
    ///
    pub fn setWhatsThis(self: TextEmoticonsWidgets__EmoticonTextEditAction, what: []const u8) void {
        const what_str = qtc.libqt_string{
            .len = what.len,
            .data = what.ptr,
        };
        qtc.QAction_SetWhatsThis(@ptrCast(self.ptr), what_str);
    }

    /// ### DEPRECATED: Use `whatsThis` instead
    ///
    pub const WhatsThis = whatsThis;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#whatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn whatsThis(self: TextEmoticonsWidgets__EmoticonTextEditAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAction_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextEmoticonsWidgets__EmoticonTextEditAction.whatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPriority` instead
    ///
    pub const SetPriority = setPriority;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setPriority)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` _priority: qaction_enums.Priority `
    ///
    pub fn setPriority(self: TextEmoticonsWidgets__EmoticonTextEditAction, _priority: i32) void {
        qtc.QAction_SetPriority(@ptrCast(self.ptr), @bitCast(_priority));
    }

    /// ### DEPRECATED: Use `priority` instead
    ///
    pub const Priority = priority;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#priority)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ## Returns:
    ///
    /// ` qaction_enums.Priority `
    ///
    pub fn priority(self: TextEmoticonsWidgets__EmoticonTextEditAction) i32 {
        return qtc.QAction_Priority(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSeparator` instead
    ///
    pub const SetSeparator = setSeparator;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setSeparator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` b: bool `
    ///
    pub fn setSeparator(self: TextEmoticonsWidgets__EmoticonTextEditAction, b: bool) void {
        qtc.QAction_SetSeparator(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `isSeparator` instead
    ///
    pub const IsSeparator = isSeparator;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isSeparator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    pub fn isSeparator(self: TextEmoticonsWidgets__EmoticonTextEditAction) bool {
        return qtc.QAction_IsSeparator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setShortcut` instead
    ///
    pub const SetShortcut = setShortcut;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` _shortcut: QKeySequence `
    ///
    pub fn setShortcut(self: TextEmoticonsWidgets__EmoticonTextEditAction, _shortcut: anytype) void {
        comptime _ = @TypeOf(_shortcut)._is_QKeySequence;
        qtc.QAction_SetShortcut(@ptrCast(self.ptr), @ptrCast(_shortcut.ptr));
    }

    /// ### DEPRECATED: Use `shortcut` instead
    ///
    pub const Shortcut = shortcut;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    pub fn shortcut(self: TextEmoticonsWidgets__EmoticonTextEditAction) QKeySequence {
        return .{ .ptr = qtc.QAction_Shortcut(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setShortcuts` instead
    ///
    pub const SetShortcuts = setShortcuts;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` _shortcuts: []QKeySequence `
    ///
    pub fn setShortcuts(self: TextEmoticonsWidgets__EmoticonTextEditAction, _shortcuts: []QKeySequence) void {
        const shortcuts_list = qtc.libqt_list{
            .len = _shortcuts.len,
            .data = @ptrCast(_shortcuts.ptr),
        };
        qtc.QAction_SetShortcuts(@ptrCast(self.ptr), shortcuts_list);
    }

    /// ### DEPRECATED: Use `setShortcuts2` instead
    ///
    pub const SetShortcuts2 = setShortcuts2;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` _shortcuts: qkeysequence_enums.StandardKey `
    ///
    pub fn setShortcuts2(self: TextEmoticonsWidgets__EmoticonTextEditAction, _shortcuts: i32) void {
        qtc.QAction_SetShortcuts2(@ptrCast(self.ptr), @bitCast(_shortcuts));
    }

    /// ### DEPRECATED: Use `shortcuts` instead
    ///
    pub const Shortcuts = shortcuts;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcuts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn shortcuts(self: TextEmoticonsWidgets__EmoticonTextEditAction, allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.QAction_Shortcuts(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("TextEmoticonsWidgets__EmoticonTextEditAction.shortcuts: Memory allocation failed");
        const _data_val: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setShortcutContext` instead
    ///
    pub const SetShortcutContext = setShortcutContext;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcutContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn setShortcutContext(self: TextEmoticonsWidgets__EmoticonTextEditAction, context: i32) void {
        qtc.QAction_SetShortcutContext(@ptrCast(self.ptr), @bitCast(context));
    }

    /// ### DEPRECATED: Use `shortcutContext` instead
    ///
    pub const ShortcutContext = shortcutContext;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcutContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ShortcutContext `
    ///
    pub fn shortcutContext(self: TextEmoticonsWidgets__EmoticonTextEditAction) i32 {
        return qtc.QAction_ShortcutContext(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoRepeat` instead
    ///
    pub const SetAutoRepeat = setAutoRepeat;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` _autoRepeat: bool `
    ///
    pub fn setAutoRepeat(self: TextEmoticonsWidgets__EmoticonTextEditAction, _autoRepeat: bool) void {
        qtc.QAction_SetAutoRepeat(@ptrCast(self.ptr), _autoRepeat);
    }

    /// ### DEPRECATED: Use `autoRepeat` instead
    ///
    pub const AutoRepeat = autoRepeat;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#autoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    pub fn autoRepeat(self: TextEmoticonsWidgets__EmoticonTextEditAction) bool {
        return qtc.QAction_AutoRepeat(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFont` instead
    ///
    pub const SetFont = setFont;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` _font: QFont `
    ///
    pub fn setFont(self: TextEmoticonsWidgets__EmoticonTextEditAction, _font: anytype) void {
        comptime _ = @TypeOf(_font)._is_QFont;
        qtc.QAction_SetFont(@ptrCast(self.ptr), @ptrCast(_font.ptr));
    }

    /// ### DEPRECATED: Use `font` instead
    ///
    pub const Font = font;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    pub fn font(self: TextEmoticonsWidgets__EmoticonTextEditAction) QFont {
        return .{ .ptr = qtc.QAction_Font(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCheckable` instead
    ///
    pub const SetCheckable = setCheckable;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setCheckable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` checkable: bool `
    ///
    pub fn setCheckable(self: TextEmoticonsWidgets__EmoticonTextEditAction, checkable: bool) void {
        qtc.QAction_SetCheckable(@ptrCast(self.ptr), checkable);
    }

    /// ### DEPRECATED: Use `isCheckable` instead
    ///
    pub const IsCheckable = isCheckable;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isCheckable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    pub fn isCheckable(self: TextEmoticonsWidgets__EmoticonTextEditAction) bool {
        return qtc.QAction_IsCheckable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `data` instead
    ///
    pub const Data = data;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    pub fn data(self: TextEmoticonsWidgets__EmoticonTextEditAction) QVariant {
        return .{ .ptr = qtc.QAction_Data(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setData` instead
    ///
    pub const SetData = setData;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` varVal: QVariant `
    ///
    pub fn setData(self: TextEmoticonsWidgets__EmoticonTextEditAction, varVal: anytype) void {
        comptime _ = @TypeOf(varVal)._is_QVariant;
        qtc.QAction_SetData(@ptrCast(self.ptr), @ptrCast(varVal.ptr));
    }

    /// ### DEPRECATED: Use `isChecked` instead
    ///
    pub const IsChecked = isChecked;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isChecked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    pub fn isChecked(self: TextEmoticonsWidgets__EmoticonTextEditAction) bool {
        return qtc.QAction_IsChecked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEnabled` instead
    ///
    pub const IsEnabled = isEnabled;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    pub fn isEnabled(self: TextEmoticonsWidgets__EmoticonTextEditAction) bool {
        return qtc.QAction_IsEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isVisible` instead
    ///
    pub const IsVisible = isVisible;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    pub fn isVisible(self: TextEmoticonsWidgets__EmoticonTextEditAction) bool {
        return qtc.QAction_IsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `activate` instead
    ///
    pub const Activate = activate;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#activate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` _event: qaction_enums.ActionEvent `
    ///
    pub fn activate(self: TextEmoticonsWidgets__EmoticonTextEditAction, _event: i32) void {
        qtc.QAction_Activate(@ptrCast(self.ptr), @bitCast(_event));
    }

    /// ### DEPRECATED: Use `setMenuRole` instead
    ///
    pub const SetMenuRole = setMenuRole;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setMenuRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` _menuRole: qaction_enums.MenuRole `
    ///
    pub fn setMenuRole(self: TextEmoticonsWidgets__EmoticonTextEditAction, _menuRole: i32) void {
        qtc.QAction_SetMenuRole(@ptrCast(self.ptr), @bitCast(_menuRole));
    }

    /// ### DEPRECATED: Use `menuRole` instead
    ///
    pub const MenuRole = menuRole;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#menuRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ## Returns:
    ///
    /// ` qaction_enums.MenuRole `
    ///
    pub fn menuRole(self: TextEmoticonsWidgets__EmoticonTextEditAction) i32 {
        return qtc.QAction_MenuRole(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setIconVisibleInMenu` instead
    ///
    pub const SetIconVisibleInMenu = setIconVisibleInMenu;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIconVisibleInMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` visible: bool `
    ///
    pub fn setIconVisibleInMenu(self: TextEmoticonsWidgets__EmoticonTextEditAction, visible: bool) void {
        qtc.QAction_SetIconVisibleInMenu(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `isIconVisibleInMenu` instead
    ///
    pub const IsIconVisibleInMenu = isIconVisibleInMenu;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isIconVisibleInMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    pub fn isIconVisibleInMenu(self: TextEmoticonsWidgets__EmoticonTextEditAction) bool {
        return qtc.QAction_IsIconVisibleInMenu(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setShortcutVisibleInContextMenu` instead
    ///
    pub const SetShortcutVisibleInContextMenu = setShortcutVisibleInContextMenu;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcutVisibleInContextMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` show: bool `
    ///
    pub fn setShortcutVisibleInContextMenu(self: TextEmoticonsWidgets__EmoticonTextEditAction, show: bool) void {
        qtc.QAction_SetShortcutVisibleInContextMenu(@ptrCast(self.ptr), show);
    }

    /// ### DEPRECATED: Use `isShortcutVisibleInContextMenu` instead
    ///
    pub const IsShortcutVisibleInContextMenu = isShortcutVisibleInContextMenu;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isShortcutVisibleInContextMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    pub fn isShortcutVisibleInContextMenu(self: TextEmoticonsWidgets__EmoticonTextEditAction) bool {
        return qtc.QAction_IsShortcutVisibleInContextMenu(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showStatusText` instead
    ///
    pub const ShowStatusText = showStatusText;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#showStatusText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    pub fn showStatusText(self: TextEmoticonsWidgets__EmoticonTextEditAction) bool {
        return qtc.QAction_ShowStatusText(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `trigger` instead
    ///
    pub const Trigger = trigger;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#trigger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    pub fn trigger(self: TextEmoticonsWidgets__EmoticonTextEditAction) void {
        qtc.QAction_Trigger(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hover` instead
    ///
    pub const Hover = hover;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hover)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    pub fn hover(self: TextEmoticonsWidgets__EmoticonTextEditAction) void {
        qtc.QAction_Hover(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setChecked` instead
    ///
    pub const SetChecked = setChecked;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setChecked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` checked: bool `
    ///
    pub fn setChecked(self: TextEmoticonsWidgets__EmoticonTextEditAction, checked: bool) void {
        qtc.QAction_SetChecked(@ptrCast(self.ptr), checked);
    }

    /// ### DEPRECATED: Use `toggle` instead
    ///
    pub const Toggle = toggle;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    pub fn toggle(self: TextEmoticonsWidgets__EmoticonTextEditAction) void {
        qtc.QAction_Toggle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setEnabled` instead
    ///
    pub const SetEnabled = setEnabled;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` enabled: bool `
    ///
    pub fn setEnabled(self: TextEmoticonsWidgets__EmoticonTextEditAction, enabled: bool) void {
        qtc.QAction_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `resetEnabled` instead
    ///
    pub const ResetEnabled = resetEnabled;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#resetEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    pub fn resetEnabled(self: TextEmoticonsWidgets__EmoticonTextEditAction) void {
        qtc.QAction_ResetEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDisabled` instead
    ///
    pub const SetDisabled = setDisabled;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` b: bool `
    ///
    pub fn setDisabled(self: TextEmoticonsWidgets__EmoticonTextEditAction, b: bool) void {
        qtc.QAction_SetDisabled(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `setVisible` instead
    ///
    pub const SetVisible = setVisible;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` visible: bool `
    ///
    pub fn setVisible(self: TextEmoticonsWidgets__EmoticonTextEditAction, visible: bool) void {
        qtc.QAction_SetVisible(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `changed` instead
    ///
    pub const Changed = changed;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#changed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    pub fn changed(self: TextEmoticonsWidgets__EmoticonTextEditAction) void {
        qtc.QAction_Changed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onChanged` instead
    ///
    pub const OnChanged = onChanged;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#changed)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditAction) callconv(.c) void `
    ///
    pub fn onChanged(self: TextEmoticonsWidgets__EmoticonTextEditAction, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditAction) callconv(.c) void) void {
        qtc.QAction_Connect_Changed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `enabledChanged` instead
    ///
    pub const EnabledChanged = enabledChanged;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` enabled: bool `
    ///
    pub fn enabledChanged(self: TextEmoticonsWidgets__EmoticonTextEditAction, enabled: bool) void {
        qtc.QAction_EnabledChanged(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `onEnabledChanged` instead
    ///
    pub const OnEnabledChanged = onEnabledChanged;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditAction, enabled: bool) callconv(.c) void `
    ///
    pub fn onEnabledChanged(self: TextEmoticonsWidgets__EmoticonTextEditAction, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditAction, bool) callconv(.c) void) void {
        qtc.QAction_Connect_EnabledChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `checkableChanged` instead
    ///
    pub const CheckableChanged = checkableChanged;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` checkable: bool `
    ///
    pub fn checkableChanged(self: TextEmoticonsWidgets__EmoticonTextEditAction, checkable: bool) void {
        qtc.QAction_CheckableChanged(@ptrCast(self.ptr), checkable);
    }

    /// ### DEPRECATED: Use `onCheckableChanged` instead
    ///
    pub const OnCheckableChanged = onCheckableChanged;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditAction, checkable: bool) callconv(.c) void `
    ///
    pub fn onCheckableChanged(self: TextEmoticonsWidgets__EmoticonTextEditAction, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditAction, bool) callconv(.c) void) void {
        qtc.QAction_Connect_CheckableChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `visibleChanged` instead
    ///
    pub const VisibleChanged = visibleChanged;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    pub fn visibleChanged(self: TextEmoticonsWidgets__EmoticonTextEditAction) void {
        qtc.QAction_VisibleChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onVisibleChanged` instead
    ///
    pub const OnVisibleChanged = onVisibleChanged;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditAction) callconv(.c) void `
    ///
    pub fn onVisibleChanged(self: TextEmoticonsWidgets__EmoticonTextEditAction, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditAction) callconv(.c) void) void {
        qtc.QAction_Connect_VisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `triggered` instead
    ///
    pub const Triggered = triggered;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    pub fn triggered(self: TextEmoticonsWidgets__EmoticonTextEditAction) void {
        qtc.QAction_Triggered(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onTriggered` instead
    ///
    pub const OnTriggered = onTriggered;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditAction) callconv(.c) void `
    ///
    pub fn onTriggered(self: TextEmoticonsWidgets__EmoticonTextEditAction, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditAction) callconv(.c) void) void {
        qtc.QAction_Connect_Triggered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hovered` instead
    ///
    pub const Hovered = hovered;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hovered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    pub fn hovered(self: TextEmoticonsWidgets__EmoticonTextEditAction) void {
        qtc.QAction_Hovered(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHovered` instead
    ///
    pub const OnHovered = onHovered;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hovered)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditAction) callconv(.c) void `
    ///
    pub fn onHovered(self: TextEmoticonsWidgets__EmoticonTextEditAction, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditAction) callconv(.c) void) void {
        qtc.QAction_Connect_Hovered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `toggled` instead
    ///
    pub const Toggled = toggled;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` param1: bool `
    ///
    pub fn toggled(self: TextEmoticonsWidgets__EmoticonTextEditAction, param1: bool) void {
        qtc.QAction_Toggled(@ptrCast(self.ptr), param1);
    }

    /// ### DEPRECATED: Use `onToggled` instead
    ///
    pub const OnToggled = onToggled;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggled)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditAction, param1: bool) callconv(.c) void `
    ///
    pub fn onToggled(self: TextEmoticonsWidgets__EmoticonTextEditAction, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditAction, bool) callconv(.c) void) void {
        qtc.QAction_Connect_Toggled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `showStatusText1` instead
    ///
    pub const ShowStatusText1 = showStatusText1;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#showStatusText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` object: QObject `
    ///
    pub fn showStatusText1(self: TextEmoticonsWidgets__EmoticonTextEditAction, object: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        return qtc.QAction_ShowStatusText1(@ptrCast(self.ptr), @ptrCast(object.ptr));
    }

    /// ### DEPRECATED: Use `triggered1` instead
    ///
    pub const Triggered1 = triggered1;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` checked: bool `
    ///
    pub fn triggered1(self: TextEmoticonsWidgets__EmoticonTextEditAction, checked: bool) void {
        qtc.QAction_Triggered1(@ptrCast(self.ptr), checked);
    }

    /// ### DEPRECATED: Use `onTriggered1` instead
    ///
    pub const OnTriggered1 = onTriggered1;

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditAction, checked: bool) callconv(.c) void `
    ///
    pub fn onTriggered1(self: TextEmoticonsWidgets__EmoticonTextEditAction, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditAction, bool) callconv(.c) void) void {
        qtc.QAction_Connect_Triggered1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: TextEmoticonsWidgets__EmoticonTextEditAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextEmoticonsWidgets__EmoticonTextEditAction.objectName: Memory allocation failed");
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: TextEmoticonsWidgets__EmoticonTextEditAction, name: []const u8) void {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    pub fn isWidgetType(self: TextEmoticonsWidgets__EmoticonTextEditAction) bool {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    pub fn isWindowType(self: TextEmoticonsWidgets__EmoticonTextEditAction) bool {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    pub fn isQuickItemType(self: TextEmoticonsWidgets__EmoticonTextEditAction) bool {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    pub fn signalsBlocked(self: TextEmoticonsWidgets__EmoticonTextEditAction) bool {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: TextEmoticonsWidgets__EmoticonTextEditAction, b: bool) bool {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    pub fn thread(self: TextEmoticonsWidgets__EmoticonTextEditAction) QThread {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: TextEmoticonsWidgets__EmoticonTextEditAction, _thread: anytype) bool {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: TextEmoticonsWidgets__EmoticonTextEditAction, interval: i32) i32 {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: TextEmoticonsWidgets__EmoticonTextEditAction, time: i64) i32 {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: TextEmoticonsWidgets__EmoticonTextEditAction, id: i32) void {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: TextEmoticonsWidgets__EmoticonTextEditAction, id: i32) void {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: TextEmoticonsWidgets__EmoticonTextEditAction, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("TextEmoticonsWidgets__EmoticonTextEditAction.children: Memory allocation failed");
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: TextEmoticonsWidgets__EmoticonTextEditAction, _parent: anytype) void {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: TextEmoticonsWidgets__EmoticonTextEditAction, filterObj: anytype) void {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: TextEmoticonsWidgets__EmoticonTextEditAction, obj: anytype) void {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: TextEmoticonsWidgets__EmoticonTextEditAction, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    pub fn disconnect3(self: TextEmoticonsWidgets__EmoticonTextEditAction) bool {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: TextEmoticonsWidgets__EmoticonTextEditAction, receiver: anytype) bool {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    pub fn dumpObjectTree(self: TextEmoticonsWidgets__EmoticonTextEditAction) void {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    pub fn dumpObjectInfo(self: TextEmoticonsWidgets__EmoticonTextEditAction) void {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: TextEmoticonsWidgets__EmoticonTextEditAction, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: TextEmoticonsWidgets__EmoticonTextEditAction, name: [:0]const u8) QVariant {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: TextEmoticonsWidgets__EmoticonTextEditAction, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("TextEmoticonsWidgets__EmoticonTextEditAction.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("TextEmoticonsWidgets__EmoticonTextEditAction.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    pub fn bindingStorage(self: TextEmoticonsWidgets__EmoticonTextEditAction) QBindingStorage {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    pub fn bindingStorage2(self: TextEmoticonsWidgets__EmoticonTextEditAction) QBindingStorage {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    pub fn destroyed(self: TextEmoticonsWidgets__EmoticonTextEditAction) void {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditAction) callconv(.c) void `
    ///
    pub fn onDestroyed(self: TextEmoticonsWidgets__EmoticonTextEditAction, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditAction) callconv(.c) void) void {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    pub fn parent(self: TextEmoticonsWidgets__EmoticonTextEditAction) QObject {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: TextEmoticonsWidgets__EmoticonTextEditAction, classname: [:0]const u8) bool {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    pub fn deleteLater(self: TextEmoticonsWidgets__EmoticonTextEditAction) void {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: TextEmoticonsWidgets__EmoticonTextEditAction, interval: i32, timerType: i32) i32 {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: TextEmoticonsWidgets__EmoticonTextEditAction, time: i64, timerType: i32) i32 {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: TextEmoticonsWidgets__EmoticonTextEditAction, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: TextEmoticonsWidgets__EmoticonTextEditAction, signal: [:0]const u8) bool {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: TextEmoticonsWidgets__EmoticonTextEditAction, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: TextEmoticonsWidgets__EmoticonTextEditAction, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: TextEmoticonsWidgets__EmoticonTextEditAction, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: TextEmoticonsWidgets__EmoticonTextEditAction, param1: anytype) void {
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditAction, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: TextEmoticonsWidgets__EmoticonTextEditAction, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditAction, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `createWidget` instead
    ///
    pub const CreateWidget = createWidget;

    /// Inherited from KActionMenu
    ///
    /// ### [Upstream resources](https://api.kde.org/kactionmenu.html#createWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn createWidget(self: TextEmoticonsWidgets__EmoticonTextEditAction, _parent: anytype) QWidget {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.TextEmoticonsWidgets__EmoticonTextEditAction_CreateWidget(@ptrCast(self.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `superCreateWidget` instead
    ///
    pub const SuperCreateWidget = superCreateWidget;

    /// Inherited from KActionMenu
    ///
    /// ### [Upstream resources](https://api.kde.org/kactionmenu.html#createWidget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn superCreateWidget(self: TextEmoticonsWidgets__EmoticonTextEditAction, _parent: anytype) QWidget {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.TextEmoticonsWidgets__EmoticonTextEditAction_SuperCreateWidget(@ptrCast(self.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `onCreateWidget` instead
    ///
    pub const OnCreateWidget = onCreateWidget;

    /// Inherited from KActionMenu
    ///
    /// ### [Upstream resources](https://api.kde.org/kactionmenu.html#createWidget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditAction, parent: QWidget) callconv(.c) QWidget `
    ///
    pub fn onCreateWidget(self: TextEmoticonsWidgets__EmoticonTextEditAction, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditAction, QWidget) callconv(.c) QWidget) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditAction_OnCreateWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` param1: QEvent `
    ///
    pub fn event(self: TextEmoticonsWidgets__EmoticonTextEditAction, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.TextEmoticonsWidgets__EmoticonTextEditAction_Event(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` param1: QEvent `
    ///
    pub fn superEvent(self: TextEmoticonsWidgets__EmoticonTextEditAction, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.TextEmoticonsWidgets__EmoticonTextEditAction_SuperEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditAction, param1: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: TextEmoticonsWidgets__EmoticonTextEditAction, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditAction, QEvent) callconv(.c) bool) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditAction_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: QEvent `
    ///
    pub fn eventFilter(self: TextEmoticonsWidgets__EmoticonTextEditAction, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.TextEmoticonsWidgets__EmoticonTextEditAction_EventFilter(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: QEvent `
    ///
    pub fn superEventFilter(self: TextEmoticonsWidgets__EmoticonTextEditAction, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.TextEmoticonsWidgets__EmoticonTextEditAction_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditAction, param1: QObject, param2: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: TextEmoticonsWidgets__EmoticonTextEditAction, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditAction, QObject, QEvent) callconv(.c) bool) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditAction_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `deleteWidget` instead
    ///
    pub const DeleteWidget = deleteWidget;

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#deleteWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` widget: QWidget `
    ///
    pub fn deleteWidget(self: TextEmoticonsWidgets__EmoticonTextEditAction, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.TextEmoticonsWidgets__EmoticonTextEditAction_DeleteWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `superDeleteWidget` instead
    ///
    pub const SuperDeleteWidget = superDeleteWidget;

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#deleteWidget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` widget: QWidget `
    ///
    pub fn superDeleteWidget(self: TextEmoticonsWidgets__EmoticonTextEditAction, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.TextEmoticonsWidgets__EmoticonTextEditAction_SuperDeleteWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `onDeleteWidget` instead
    ///
    pub const OnDeleteWidget = onDeleteWidget;

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#deleteWidget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditAction, widget: QWidget) callconv(.c) void `
    ///
    pub fn onDeleteWidget(self: TextEmoticonsWidgets__EmoticonTextEditAction, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditAction, QWidget) callconv(.c) void) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditAction_OnDeleteWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: TextEmoticonsWidgets__EmoticonTextEditAction, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditAction_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: TextEmoticonsWidgets__EmoticonTextEditAction, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditAction_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditAction, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: TextEmoticonsWidgets__EmoticonTextEditAction, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditAction, QTimerEvent) callconv(.c) void) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditAction_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: TextEmoticonsWidgets__EmoticonTextEditAction, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditAction_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: TextEmoticonsWidgets__EmoticonTextEditAction, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditAction_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditAction, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: TextEmoticonsWidgets__EmoticonTextEditAction, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditAction, QChildEvent) callconv(.c) void) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditAction_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: TextEmoticonsWidgets__EmoticonTextEditAction, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditAction_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: TextEmoticonsWidgets__EmoticonTextEditAction, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.TextEmoticonsWidgets__EmoticonTextEditAction_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditAction, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: TextEmoticonsWidgets__EmoticonTextEditAction, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditAction, QEvent) callconv(.c) void) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditAction_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: TextEmoticonsWidgets__EmoticonTextEditAction, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextEmoticonsWidgets__EmoticonTextEditAction_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: TextEmoticonsWidgets__EmoticonTextEditAction, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextEmoticonsWidgets__EmoticonTextEditAction_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditAction, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: TextEmoticonsWidgets__EmoticonTextEditAction, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditAction, QMetaMethod) callconv(.c) void) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditAction_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: TextEmoticonsWidgets__EmoticonTextEditAction, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextEmoticonsWidgets__EmoticonTextEditAction_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: TextEmoticonsWidgets__EmoticonTextEditAction, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextEmoticonsWidgets__EmoticonTextEditAction_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditAction, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: TextEmoticonsWidgets__EmoticonTextEditAction, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditAction, QMetaMethod) callconv(.c) void) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditAction_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `createdWidgets` instead
    ///
    pub const CreatedWidgets = createdWidgets;

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn createdWidgets(self: TextEmoticonsWidgets__EmoticonTextEditAction, allocator: std.mem.Allocator) []QWidget {
        const _arr: qtc.libqt_list = qtc.TextEmoticonsWidgets__EmoticonTextEditAction_CreatedWidgets(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("TextEmoticonsWidgets__EmoticonTextEditAction.createdWidgets: Memory allocation failed");
        const _data_val: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `superCreatedWidgets` instead
    ///
    pub const SuperCreatedWidgets = superCreatedWidgets;

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superCreatedWidgets(self: TextEmoticonsWidgets__EmoticonTextEditAction, allocator: std.mem.Allocator) []QWidget {
        const _arr: qtc.libqt_list = qtc.TextEmoticonsWidgets__EmoticonTextEditAction_SuperCreatedWidgets(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("TextEmoticonsWidgets__EmoticonTextEditAction.createdWidgets: Memory allocation failed");
        const _data_val: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `onCreatedWidgets` instead
    ///
    pub const OnCreatedWidgets = onCreatedWidgets;

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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction`
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QWidget `
    ///
    pub fn onCreatedWidgets(self: TextEmoticonsWidgets__EmoticonTextEditAction, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditAction_OnCreatedWidgets(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    pub fn sender(self: TextEmoticonsWidgets__EmoticonTextEditAction) QObject {
        return .{ .ptr = qtc.TextEmoticonsWidgets__EmoticonTextEditAction_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    pub fn superSender(self: TextEmoticonsWidgets__EmoticonTextEditAction) QObject {
        return .{ .ptr = qtc.TextEmoticonsWidgets__EmoticonTextEditAction_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: TextEmoticonsWidgets__EmoticonTextEditAction, callback: *const fn () callconv(.c) QObject) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditAction_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    pub fn senderSignalIndex(self: TextEmoticonsWidgets__EmoticonTextEditAction) i32 {
        return qtc.TextEmoticonsWidgets__EmoticonTextEditAction_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    pub fn superSenderSignalIndex(self: TextEmoticonsWidgets__EmoticonTextEditAction) i32 {
        return qtc.TextEmoticonsWidgets__EmoticonTextEditAction_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: TextEmoticonsWidgets__EmoticonTextEditAction, callback: *const fn () callconv(.c) i32) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditAction_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: TextEmoticonsWidgets__EmoticonTextEditAction, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.TextEmoticonsWidgets__EmoticonTextEditAction_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: TextEmoticonsWidgets__EmoticonTextEditAction, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.TextEmoticonsWidgets__EmoticonTextEditAction_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditAction, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: TextEmoticonsWidgets__EmoticonTextEditAction, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditAction, [*:0]const u8) callconv(.c) i32) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditAction_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: TextEmoticonsWidgets__EmoticonTextEditAction, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.TextEmoticonsWidgets__EmoticonTextEditAction_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: TextEmoticonsWidgets__EmoticonTextEditAction, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.TextEmoticonsWidgets__EmoticonTextEditAction_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction`
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditAction, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: TextEmoticonsWidgets__EmoticonTextEditAction, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditAction, QMetaMethod) callconv(.c) bool) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditAction_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    /// ` callback: *const fn (self: TextEmoticonsWidgets__EmoticonTextEditAction, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: TextEmoticonsWidgets__EmoticonTextEditAction, callback: *const fn (TextEmoticonsWidgets__EmoticonTextEditAction, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsWidgets_1_1EmoticonTextEditAction.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: TextEmoticonsWidgets__EmoticonTextEditAction `
    ///
    pub fn delete(self: TextEmoticonsWidgets__EmoticonTextEditAction) void {
        qtc.TextEmoticonsWidgets__EmoticonTextEditAction_Delete(@ptrCast(self.ptr));
    }
};
