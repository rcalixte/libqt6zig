const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAction = @import("libqt6").QAction;
const QActionGroup = @import("libqt6").QActionGroup;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
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
const kselectaction_enums = @import("libkselectaction.zig").enums;
const qaction_enums = @import("../libqaction.zig").enums;
const qkeysequence_enums = @import("../libqkeysequence.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qtoolbutton_enums = @import("../libqtoolbutton.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kfontaction.html)
pub const KFontAction = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kfontaction.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KFontAction,

    pub const _is_KFontAction = {};
    pub const _is_KSelectAction = {};
    pub const _is_QWidgetAction = {};
    pub const _is_QAction = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KFontAction object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` fontListCriteria: u32 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new(fontListCriteria: u32, _parent: anytype) KFontAction {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KFontAction_new(@bitCast(fontListCriteria), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KFontAction object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) KFontAction {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KFontAction_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KFontAction object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _text: []const u8 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new3(_text: []const u8, _parent: anytype) KFontAction {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KFontAction_new3(text_str, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new KFontAction object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _icon: QIcon `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new4(_icon: anytype, _text: []const u8, _parent: anytype) KFontAction {
        comptime _ = @TypeOf(_icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KFontAction_new4(@ptrCast(_icon.ptr), text_str, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    pub fn metaObject(self: KFontAction) QMetaObject {
        return .{ .ptr = qtc.KFontAction_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: KFontAction `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KFontAction, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KFontAction_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KFontAction `
    ///
    pub fn superMetaObject(self: KFontAction) QMetaObject {
        return .{ .ptr = qtc.KFontAction_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KFontAction, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KFontAction_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFontAction `
    ///
    /// ` callback: *const fn (self: KFontAction, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KFontAction, callback: *const fn (KFontAction, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KFontAction_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KFontAction, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KFontAction_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: KFontAction, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KFontAction_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFontAction `
    ///
    /// ` callback: *const fn (self: KFontAction, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KFontAction, callback: *const fn (KFontAction, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KFontAction_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: KFontAction, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KFontAction_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFontAction.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `font` instead
    ///
    pub const Font = font;

    /// ### [Upstream resources](https://api.kde.org/kfontaction.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn font(self: KFontAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFontAction_Font(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFontAction.font: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setFont` instead
    ///
    pub const SetFont = setFont;

    /// ### [Upstream resources](https://api.kde.org/kfontaction.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    /// ` family: []const u8 `
    ///
    pub fn setFont(self: KFontAction, family: []const u8) void {
        const family_str = qtc.libqt_string{
            .len = family.len,
            .data = family.ptr,
        };
        qtc.KFontAction_SetFont(@ptrCast(self.ptr), family_str);
    }

    /// ### DEPRECATED: Use `createWidget` instead
    ///
    pub const CreateWidget = createWidget;

    /// ### [Upstream resources](https://api.kde.org/kfontaction.html#createWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn createWidget(self: KFontAction, _parent: anytype) QWidget {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.KFontAction_CreateWidget(@ptrCast(self.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `onCreateWidget` instead
    ///
    pub const OnCreateWidget = onCreateWidget;

    /// ### [Upstream resources](https://api.kde.org/kfontaction.html#createWidget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFontAction `
    ///
    /// ` callback: *const fn (self: KFontAction, parent: QWidget) callconv(.c) QWidget `
    ///
    pub fn onCreateWidget(self: KFontAction, callback: *const fn (KFontAction, QWidget) callconv(.c) QWidget) void {
        qtc.KFontAction_OnCreateWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCreateWidget` instead
    ///
    pub const SuperCreateWidget = superCreateWidget;

    /// ### [Upstream resources](https://api.kde.org/kfontaction.html#createWidget)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn superCreateWidget(self: KFontAction, _parent: anytype) QWidget {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.KFontAction_SuperCreateWidget(@ptrCast(self.ptr), @ptrCast(_parent.ptr)) };
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFontAction.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFontAction.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toolBarMode` instead
    ///
    pub const ToolBarMode = toolBarMode;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#toolBarMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    /// ## Returns:
    ///
    /// ` kselectaction_enums.ToolBarMode `
    ///
    pub fn toolBarMode(self: KFontAction) i32 {
        return qtc.KSelectAction_ToolBarMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setToolBarMode` instead
    ///
    pub const SetToolBarMode = setToolBarMode;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#setToolBarMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    /// ` mode: kselectaction_enums.ToolBarMode `
    ///
    pub fn setToolBarMode(self: KFontAction, mode: i32) void {
        qtc.KSelectAction_SetToolBarMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `toolButtonPopupMode` instead
    ///
    pub const ToolButtonPopupMode = toolButtonPopupMode;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#toolButtonPopupMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    /// ## Returns:
    ///
    /// ` qtoolbutton_enums.ToolButtonPopupMode `
    ///
    pub fn toolButtonPopupMode(self: KFontAction) i32 {
        return qtc.KSelectAction_ToolButtonPopupMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setToolButtonPopupMode` instead
    ///
    pub const SetToolButtonPopupMode = setToolButtonPopupMode;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#setToolButtonPopupMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    /// ` mode: qtoolbutton_enums.ToolButtonPopupMode `
    ///
    pub fn setToolButtonPopupMode(self: KFontAction, mode: i32) void {
        qtc.KSelectAction_SetToolButtonPopupMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `selectableActionGroup` instead
    ///
    pub const SelectableActionGroup = selectableActionGroup;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#selectableActionGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    pub fn selectableActionGroup(self: KFontAction) QActionGroup {
        return .{ .ptr = qtc.KSelectAction_SelectableActionGroup(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `currentAction` instead
    ///
    pub const CurrentAction = currentAction;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#currentAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    pub fn currentAction(self: KFontAction) QAction {
        return .{ .ptr = qtc.KSelectAction_CurrentAction(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `currentItem` instead
    ///
    pub const CurrentItem = currentItem;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#currentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    pub fn currentItem(self: KFontAction) i32 {
        return qtc.KSelectAction_CurrentItem(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `currentText` instead
    ///
    pub const CurrentText = currentText;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#currentText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn currentText(self: KFontAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSelectAction_CurrentText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFontAction.currentText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `actions` instead
    ///
    pub const Actions = actions;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn actions(self: KFontAction, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.KSelectAction_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("KFontAction.actions: Memory allocation failed");
        const _data_val: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `action` instead
    ///
    pub const Action = action;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    /// ` index: i32 `
    ///
    pub fn action(self: KFontAction, index: i32) QAction {
        return .{ .ptr = qtc.KSelectAction_Action(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `action2` instead
    ///
    pub const Action2 = action2;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn action2(self: KFontAction, _text: []const u8) QAction {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return .{ .ptr = qtc.KSelectAction_Action2(@ptrCast(self.ptr), text_str) };
    }

    /// ### DEPRECATED: Use `setCurrentAction` instead
    ///
    pub const SetCurrentAction = setCurrentAction;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#setCurrentAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    /// ` _action: QAction `
    ///
    pub fn setCurrentAction(self: KFontAction, _action: anytype) bool {
        comptime _ = @TypeOf(_action)._is_QAction;
        return qtc.KSelectAction_SetCurrentAction(@ptrCast(self.ptr), @ptrCast(_action.ptr));
    }

    /// ### DEPRECATED: Use `setCurrentItem` instead
    ///
    pub const SetCurrentItem = setCurrentItem;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#setCurrentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    /// ` index: i32 `
    ///
    pub fn setCurrentItem(self: KFontAction, index: i32) bool {
        return qtc.KSelectAction_SetCurrentItem(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `setCurrentAction2` instead
    ///
    pub const SetCurrentAction2 = setCurrentAction2;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#setCurrentAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn setCurrentAction2(self: KFontAction, _text: []const u8) bool {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return qtc.KSelectAction_SetCurrentAction2(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `addAction` instead
    ///
    pub const AddAction = addAction;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    /// ` _action: QAction `
    ///
    pub fn addAction(self: KFontAction, _action: anytype) void {
        comptime _ = @TypeOf(_action)._is_QAction;
        qtc.KSelectAction_AddAction(@ptrCast(self.ptr), @ptrCast(_action.ptr));
    }

    /// ### DEPRECATED: Use `addAction2` instead
    ///
    pub const AddAction2 = addAction2;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn addAction2(self: KFontAction, _text: []const u8) QAction {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return .{ .ptr = qtc.KSelectAction_AddAction2(@ptrCast(self.ptr), text_str) };
    }

    /// ### DEPRECATED: Use `addAction3` instead
    ///
    pub const AddAction3 = addAction3;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    /// ` _icon: QIcon `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn addAction3(self: KFontAction, _icon: anytype, _text: []const u8) QAction {
        comptime _ = @TypeOf(_icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return .{ .ptr = qtc.KSelectAction_AddAction3(@ptrCast(self.ptr), @ptrCast(_icon.ptr), text_str) };
    }

    /// ### DEPRECATED: Use `setItems` instead
    ///
    pub const SetItems = setItems;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#setItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` lst: []const []const u8 `
    ///
    pub fn setItems(self: KFontAction, allocator: std.mem.Allocator, lst: []const []const u8) void {
        const lst_arr = allocator.alloc(qtc.libqt_string, lst.len) catch @panic("KFontAction.setItems: Memory allocation failed");
        defer allocator.free(lst_arr);
        for (lst, 0..lst.len) |str_item, i|
            lst_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const lst_list = qtc.libqt_list{
            .len = lst.len,
            .data = lst_arr.ptr,
        };
        qtc.KSelectAction_SetItems(@ptrCast(self.ptr), lst_list);
    }

    /// ### DEPRECATED: Use `items` instead
    ///
    pub const Items = items;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn items(self: KFontAction, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KSelectAction_Items(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KFontAction.items: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KFontAction.items: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `isEditable` instead
    ///
    pub const IsEditable = isEditable;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#isEditable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    pub fn isEditable(self: KFontAction) bool {
        return qtc.KSelectAction_IsEditable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setEditable` instead
    ///
    pub const SetEditable = setEditable;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#setEditable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    /// ` editable: bool `
    ///
    pub fn setEditable(self: KFontAction, editable: bool) void {
        qtc.KSelectAction_SetEditable(@ptrCast(self.ptr), editable);
    }

    /// ### DEPRECATED: Use `comboWidth` instead
    ///
    pub const ComboWidth = comboWidth;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#comboWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    pub fn comboWidth(self: KFontAction) i32 {
        return qtc.KSelectAction_ComboWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setComboWidth` instead
    ///
    pub const SetComboWidth = setComboWidth;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#setComboWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    /// ` width: i32 `
    ///
    pub fn setComboWidth(self: KFontAction, width: i32) void {
        qtc.KSelectAction_SetComboWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### DEPRECATED: Use `setMaxComboViewCount` instead
    ///
    pub const SetMaxComboViewCount = setMaxComboViewCount;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#setMaxComboViewCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    /// ` n: i32 `
    ///
    pub fn setMaxComboViewCount(self: KFontAction, n: i32) void {
        qtc.KSelectAction_SetMaxComboViewCount(@ptrCast(self.ptr), @bitCast(n));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    pub fn clear(self: KFontAction) void {
        qtc.KSelectAction_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `removeAllActions` instead
    ///
    pub const RemoveAllActions = removeAllActions;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#removeAllActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    pub fn removeAllActions(self: KFontAction) void {
        qtc.KSelectAction_RemoveAllActions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMenuAccelsEnabled` instead
    ///
    pub const SetMenuAccelsEnabled = setMenuAccelsEnabled;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#setMenuAccelsEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    /// ` b: bool `
    ///
    pub fn setMenuAccelsEnabled(self: KFontAction, b: bool) void {
        qtc.KSelectAction_SetMenuAccelsEnabled(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `menuAccelsEnabled` instead
    ///
    pub const MenuAccelsEnabled = menuAccelsEnabled;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#menuAccelsEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    pub fn menuAccelsEnabled(self: KFontAction) bool {
        return qtc.KSelectAction_MenuAccelsEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `changeItem` instead
    ///
    pub const ChangeItem = changeItem;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#changeItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    /// ` index: i32 `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn changeItem(self: KFontAction, index: i32, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.KSelectAction_ChangeItem(@ptrCast(self.ptr), @bitCast(index), text_str);
    }

    /// ### DEPRECATED: Use `actionTriggered` instead
    ///
    pub const ActionTriggered = actionTriggered;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#actionTriggered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    /// ` _action: QAction `
    ///
    pub fn actionTriggered(self: KFontAction, _action: anytype) void {
        comptime _ = @TypeOf(_action)._is_QAction;
        qtc.KSelectAction_ActionTriggered(@ptrCast(self.ptr), @ptrCast(_action.ptr));
    }

    /// ### DEPRECATED: Use `onActionTriggered` instead
    ///
    pub const OnActionTriggered = onActionTriggered;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#actionTriggered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFontAction `
    ///
    /// ` callback: *const fn (self: KFontAction, action: QAction) callconv(.c) void `
    ///
    pub fn onActionTriggered(self: KFontAction, callback: *const fn (KFontAction, QAction) callconv(.c) void) void {
        qtc.KSelectAction_Connect_ActionTriggered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `indexTriggered` instead
    ///
    pub const IndexTriggered = indexTriggered;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#indexTriggered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    /// ` index: i32 `
    ///
    pub fn indexTriggered(self: KFontAction, index: i32) void {
        qtc.KSelectAction_IndexTriggered(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `onIndexTriggered` instead
    ///
    pub const OnIndexTriggered = onIndexTriggered;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#indexTriggered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFontAction `
    ///
    /// ` callback: *const fn (self: KFontAction, index: i32) callconv(.c) void `
    ///
    pub fn onIndexTriggered(self: KFontAction, callback: *const fn (KFontAction, i32) callconv(.c) void) void {
        qtc.KSelectAction_Connect_IndexTriggered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `textTriggered` instead
    ///
    pub const TextTriggered = textTriggered;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#textTriggered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn textTriggered(self: KFontAction, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.KSelectAction_TextTriggered(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `onTextTriggered` instead
    ///
    pub const OnTextTriggered = onTextTriggered;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#textTriggered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFontAction `
    ///
    /// ` callback: *const fn (self: KFontAction, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onTextTriggered(self: KFontAction, callback: *const fn (KFontAction, [*:0]const u8) callconv(.c) void) void {
        qtc.KSelectAction_Connect_TextTriggered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `action22` instead
    ///
    pub const Action22 = action22;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn action22(self: KFontAction, _text: []const u8, cs: i32) QAction {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return .{ .ptr = qtc.KSelectAction_Action22(@ptrCast(self.ptr), text_str, @bitCast(cs)) };
    }

    /// ### DEPRECATED: Use `setCurrentAction22` instead
    ///
    pub const SetCurrentAction22 = setCurrentAction22;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#setCurrentAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn setCurrentAction22(self: KFontAction, _text: []const u8, cs: i32) bool {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return qtc.KSelectAction_SetCurrentAction22(@ptrCast(self.ptr), text_str, @bitCast(cs));
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
    /// ` self: KFontAction `
    ///
    /// ` w: QWidget `
    ///
    pub fn setDefaultWidget(self: KFontAction, w: anytype) void {
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
    /// ` self: KFontAction `
    ///
    pub fn defaultWidget(self: KFontAction) QWidget {
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
    /// ` self: KFontAction `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn requestWidget(self: KFontAction, _parent: anytype) QWidget {
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
    /// ` self: KFontAction `
    ///
    /// ` widget: QWidget `
    ///
    pub fn releaseWidget(self: KFontAction, widget: anytype) void {
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
    /// ` self: KFontAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn associatedObjects(self: KFontAction, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QAction_AssociatedObjects(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KFontAction.associatedObjects: Memory allocation failed");
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
    /// ` self: KFontAction `
    ///
    /// ` group: QActionGroup `
    ///
    pub fn setActionGroup(self: KFontAction, group: anytype) void {
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
    /// ` self: KFontAction `
    ///
    pub fn actionGroup(self: KFontAction) QActionGroup {
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
    /// ` self: KFontAction `
    ///
    /// ` _icon: QIcon `
    ///
    pub fn setIcon(self: KFontAction, _icon: anytype) void {
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
    /// ` self: KFontAction `
    ///
    pub fn icon(self: KFontAction) QIcon {
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
    /// ` self: KFontAction `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn setText(self: KFontAction, _text: []const u8) void {
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
    /// ` self: KFontAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(self: KFontAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAction_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFontAction.text: Memory allocation failed");
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
    /// ` self: KFontAction `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn setIconText(self: KFontAction, _text: []const u8) void {
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
    /// ` self: KFontAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn iconText(self: KFontAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAction_IconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFontAction.iconText: Memory allocation failed");
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
    /// ` self: KFontAction `
    ///
    /// ` tip: []const u8 `
    ///
    pub fn setToolTip(self: KFontAction, tip: []const u8) void {
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
    /// ` self: KFontAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toolTip(self: KFontAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAction_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFontAction.toolTip: Memory allocation failed");
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
    /// ` self: KFontAction `
    ///
    /// ` _statusTip: []const u8 `
    ///
    pub fn setStatusTip(self: KFontAction, _statusTip: []const u8) void {
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
    /// ` self: KFontAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn statusTip(self: KFontAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAction_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFontAction.statusTip: Memory allocation failed");
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
    /// ` self: KFontAction `
    ///
    /// ` what: []const u8 `
    ///
    pub fn setWhatsThis(self: KFontAction, what: []const u8) void {
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
    /// ` self: KFontAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn whatsThis(self: KFontAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAction_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFontAction.whatsThis: Memory allocation failed");
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
    /// ` self: KFontAction `
    ///
    /// ` _priority: qaction_enums.Priority `
    ///
    pub fn setPriority(self: KFontAction, _priority: i32) void {
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
    /// ` self: KFontAction `
    ///
    /// ## Returns:
    ///
    /// ` qaction_enums.Priority `
    ///
    pub fn priority(self: KFontAction) i32 {
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
    /// ` self: KFontAction `
    ///
    /// ` b: bool `
    ///
    pub fn setSeparator(self: KFontAction, b: bool) void {
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
    /// ` self: KFontAction `
    ///
    pub fn isSeparator(self: KFontAction) bool {
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
    /// ` self: KFontAction `
    ///
    /// ` _shortcut: QKeySequence `
    ///
    pub fn setShortcut(self: KFontAction, _shortcut: anytype) void {
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
    /// ` self: KFontAction `
    ///
    pub fn shortcut(self: KFontAction) QKeySequence {
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
    /// ` self: KFontAction `
    ///
    /// ` _shortcuts: []QKeySequence `
    ///
    pub fn setShortcuts(self: KFontAction, _shortcuts: []QKeySequence) void {
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
    /// ` self: KFontAction `
    ///
    /// ` _shortcuts: qkeysequence_enums.StandardKey `
    ///
    pub fn setShortcuts2(self: KFontAction, _shortcuts: i32) void {
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
    /// ` self: KFontAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn shortcuts(self: KFontAction, allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.QAction_Shortcuts(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("KFontAction.shortcuts: Memory allocation failed");
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
    /// ` self: KFontAction `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn setShortcutContext(self: KFontAction, context: i32) void {
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
    /// ` self: KFontAction `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ShortcutContext `
    ///
    pub fn shortcutContext(self: KFontAction) i32 {
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
    /// ` self: KFontAction `
    ///
    /// ` _autoRepeat: bool `
    ///
    pub fn setAutoRepeat(self: KFontAction, _autoRepeat: bool) void {
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
    /// ` self: KFontAction `
    ///
    pub fn autoRepeat(self: KFontAction) bool {
        return qtc.QAction_AutoRepeat(@ptrCast(self.ptr));
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
    /// ` self: KFontAction `
    ///
    /// ` checkable: bool `
    ///
    pub fn setCheckable(self: KFontAction, checkable: bool) void {
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
    /// ` self: KFontAction `
    ///
    pub fn isCheckable(self: KFontAction) bool {
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
    /// ` self: KFontAction `
    ///
    pub fn data(self: KFontAction) QVariant {
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
    /// ` self: KFontAction `
    ///
    /// ` varVal: QVariant `
    ///
    pub fn setData(self: KFontAction, varVal: anytype) void {
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
    /// ` self: KFontAction `
    ///
    pub fn isChecked(self: KFontAction) bool {
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
    /// ` self: KFontAction `
    ///
    pub fn isEnabled(self: KFontAction) bool {
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
    /// ` self: KFontAction `
    ///
    pub fn isVisible(self: KFontAction) bool {
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
    /// ` self: KFontAction `
    ///
    /// ` _event: qaction_enums.ActionEvent `
    ///
    pub fn activate(self: KFontAction, _event: i32) void {
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
    /// ` self: KFontAction `
    ///
    /// ` _menuRole: qaction_enums.MenuRole `
    ///
    pub fn setMenuRole(self: KFontAction, _menuRole: i32) void {
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
    /// ` self: KFontAction `
    ///
    /// ## Returns:
    ///
    /// ` qaction_enums.MenuRole `
    ///
    pub fn menuRole(self: KFontAction) i32 {
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
    /// ` self: KFontAction `
    ///
    /// ` visible: bool `
    ///
    pub fn setIconVisibleInMenu(self: KFontAction, visible: bool) void {
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
    /// ` self: KFontAction `
    ///
    pub fn isIconVisibleInMenu(self: KFontAction) bool {
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
    /// ` self: KFontAction `
    ///
    /// ` show: bool `
    ///
    pub fn setShortcutVisibleInContextMenu(self: KFontAction, show: bool) void {
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
    /// ` self: KFontAction `
    ///
    pub fn isShortcutVisibleInContextMenu(self: KFontAction) bool {
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
    /// ` self: KFontAction `
    ///
    pub fn showStatusText(self: KFontAction) bool {
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
    /// ` self: KFontAction `
    ///
    pub fn trigger(self: KFontAction) void {
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
    /// ` self: KFontAction `
    ///
    pub fn hover(self: KFontAction) void {
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
    /// ` self: KFontAction `
    ///
    /// ` checked: bool `
    ///
    pub fn setChecked(self: KFontAction, checked: bool) void {
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
    /// ` self: KFontAction `
    ///
    pub fn toggle(self: KFontAction) void {
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
    /// ` self: KFontAction `
    ///
    /// ` enabled: bool `
    ///
    pub fn setEnabled(self: KFontAction, enabled: bool) void {
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
    /// ` self: KFontAction `
    ///
    pub fn resetEnabled(self: KFontAction) void {
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
    /// ` self: KFontAction `
    ///
    /// ` b: bool `
    ///
    pub fn setDisabled(self: KFontAction, b: bool) void {
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
    /// ` self: KFontAction `
    ///
    /// ` visible: bool `
    ///
    pub fn setVisible(self: KFontAction, visible: bool) void {
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
    /// ` self: KFontAction `
    ///
    pub fn changed(self: KFontAction) void {
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
    /// ` self: KFontAction `
    ///
    /// ` callback: *const fn (self: KFontAction) callconv(.c) void `
    ///
    pub fn onChanged(self: KFontAction, callback: *const fn (KFontAction) callconv(.c) void) void {
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
    /// ` self: KFontAction `
    ///
    /// ` enabled: bool `
    ///
    pub fn enabledChanged(self: KFontAction, enabled: bool) void {
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
    /// ` self: KFontAction `
    ///
    /// ` callback: *const fn (self: KFontAction, enabled: bool) callconv(.c) void `
    ///
    pub fn onEnabledChanged(self: KFontAction, callback: *const fn (KFontAction, bool) callconv(.c) void) void {
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
    /// ` self: KFontAction `
    ///
    /// ` checkable: bool `
    ///
    pub fn checkableChanged(self: KFontAction, checkable: bool) void {
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
    /// ` self: KFontAction `
    ///
    /// ` callback: *const fn (self: KFontAction, checkable: bool) callconv(.c) void `
    ///
    pub fn onCheckableChanged(self: KFontAction, callback: *const fn (KFontAction, bool) callconv(.c) void) void {
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
    /// ` self: KFontAction `
    ///
    pub fn visibleChanged(self: KFontAction) void {
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
    /// ` self: KFontAction `
    ///
    /// ` callback: *const fn (self: KFontAction) callconv(.c) void `
    ///
    pub fn onVisibleChanged(self: KFontAction, callback: *const fn (KFontAction) callconv(.c) void) void {
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
    /// ` self: KFontAction `
    ///
    pub fn triggered(self: KFontAction) void {
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
    /// ` self: KFontAction `
    ///
    /// ` callback: *const fn (self: KFontAction) callconv(.c) void `
    ///
    pub fn onTriggered(self: KFontAction, callback: *const fn (KFontAction) callconv(.c) void) void {
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
    /// ` self: KFontAction `
    ///
    pub fn hovered(self: KFontAction) void {
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
    /// ` self: KFontAction `
    ///
    /// ` callback: *const fn (self: KFontAction) callconv(.c) void `
    ///
    pub fn onHovered(self: KFontAction, callback: *const fn (KFontAction) callconv(.c) void) void {
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
    /// ` self: KFontAction `
    ///
    /// ` param1: bool `
    ///
    pub fn toggled(self: KFontAction, param1: bool) void {
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
    /// ` self: KFontAction `
    ///
    /// ` callback: *const fn (self: KFontAction, param1: bool) callconv(.c) void `
    ///
    pub fn onToggled(self: KFontAction, callback: *const fn (KFontAction, bool) callconv(.c) void) void {
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
    /// ` self: KFontAction `
    ///
    /// ` object: QObject `
    ///
    pub fn showStatusText1(self: KFontAction, object: anytype) bool {
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
    /// ` self: KFontAction `
    ///
    /// ` checked: bool `
    ///
    pub fn triggered1(self: KFontAction, checked: bool) void {
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
    /// ` self: KFontAction `
    ///
    /// ` callback: *const fn (self: KFontAction, checked: bool) callconv(.c) void `
    ///
    pub fn onTriggered1(self: KFontAction, callback: *const fn (KFontAction, bool) callconv(.c) void) void {
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
    /// ` self: KFontAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KFontAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KFontAction.objectName: Memory allocation failed");
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
    /// ` self: KFontAction `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KFontAction, name: []const u8) void {
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
    /// ` self: KFontAction `
    ///
    pub fn isWidgetType(self: KFontAction) bool {
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
    /// ` self: KFontAction `
    ///
    pub fn isWindowType(self: KFontAction) bool {
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
    /// ` self: KFontAction `
    ///
    pub fn isQuickItemType(self: KFontAction) bool {
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
    /// ` self: KFontAction `
    ///
    pub fn signalsBlocked(self: KFontAction) bool {
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
    /// ` self: KFontAction `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KFontAction, b: bool) bool {
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
    /// ` self: KFontAction `
    ///
    pub fn thread(self: KFontAction) QThread {
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
    /// ` self: KFontAction `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KFontAction, _thread: anytype) bool {
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
    /// ` self: KFontAction `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KFontAction, interval: i32) i32 {
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
    /// ` self: KFontAction `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KFontAction, time: i64) i32 {
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
    /// ` self: KFontAction `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KFontAction, id: i32) void {
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
    /// ` self: KFontAction `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KFontAction, id: i32) void {
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
    /// ` self: KFontAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KFontAction, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KFontAction.children: Memory allocation failed");
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
    /// ` self: KFontAction `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KFontAction, _parent: anytype) void {
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
    /// ` self: KFontAction `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KFontAction, filterObj: anytype) void {
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
    /// ` self: KFontAction `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KFontAction, obj: anytype) void {
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
    /// ` self: KFontAction `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KFontAction, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KFontAction `
    ///
    pub fn disconnect3(self: KFontAction) bool {
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
    /// ` self: KFontAction `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KFontAction, receiver: anytype) bool {
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
    /// ` self: KFontAction `
    ///
    pub fn dumpObjectTree(self: KFontAction) void {
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
    /// ` self: KFontAction `
    ///
    pub fn dumpObjectInfo(self: KFontAction) void {
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
    /// ` self: KFontAction `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KFontAction, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KFontAction `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KFontAction, name: [:0]const u8) QVariant {
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
    /// ` self: KFontAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KFontAction, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KFontAction.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KFontAction.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KFontAction `
    ///
    pub fn bindingStorage(self: KFontAction) QBindingStorage {
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
    /// ` self: KFontAction `
    ///
    pub fn bindingStorage2(self: KFontAction) QBindingStorage {
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
    /// ` self: KFontAction `
    ///
    pub fn destroyed(self: KFontAction) void {
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
    /// ` self: KFontAction `
    ///
    /// ` callback: *const fn (self: KFontAction) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KFontAction, callback: *const fn (KFontAction) callconv(.c) void) void {
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
    /// ` self: KFontAction `
    ///
    pub fn parent(self: KFontAction) QObject {
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
    /// ` self: KFontAction `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KFontAction, classname: [:0]const u8) bool {
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
    /// ` self: KFontAction `
    ///
    pub fn deleteLater(self: KFontAction) void {
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
    /// ` self: KFontAction `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KFontAction, interval: i32, timerType: i32) i32 {
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
    /// ` self: KFontAction `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KFontAction, time: i64, timerType: i32) i32 {
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
    /// ` self: KFontAction `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KFontAction, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KFontAction `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KFontAction, signal: [:0]const u8) bool {
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
    /// ` self: KFontAction `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KFontAction, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KFontAction `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KFontAction, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KFontAction `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KFontAction, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KFontAction `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KFontAction, param1: anytype) void {
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
    /// ` self: KFontAction `
    ///
    /// ` callback: *const fn (self: KFontAction, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KFontAction, callback: *const fn (KFontAction, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `removeAction` instead
    ///
    pub const RemoveAction = removeAction;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#removeAction)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    /// ` _action: QAction `
    ///
    pub fn removeAction(self: KFontAction, _action: anytype) QAction {
        comptime _ = @TypeOf(_action)._is_QAction;
        return .{ .ptr = qtc.KFontAction_RemoveAction(@ptrCast(self.ptr), @ptrCast(_action.ptr)) };
    }

    /// ### DEPRECATED: Use `superRemoveAction` instead
    ///
    pub const SuperRemoveAction = superRemoveAction;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#removeAction)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    /// ` _action: QAction `
    ///
    pub fn superRemoveAction(self: KFontAction, _action: anytype) QAction {
        comptime _ = @TypeOf(_action)._is_QAction;
        return .{ .ptr = qtc.KFontAction_SuperRemoveAction(@ptrCast(self.ptr), @ptrCast(_action.ptr)) };
    }

    /// ### DEPRECATED: Use `onRemoveAction` instead
    ///
    pub const OnRemoveAction = onRemoveAction;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#removeAction)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFontAction`
    ///
    /// ` callback: *const fn (self: KFontAction, action: QAction) callconv(.c) QAction `
    ///
    pub fn onRemoveAction(self: KFontAction, callback: *const fn (KFontAction, QAction) callconv(.c) QAction) void {
        qtc.KFontAction_OnRemoveAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `insertAction` instead
    ///
    pub const InsertAction = insertAction;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#insertAction)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    /// ` before: QAction `
    ///
    /// ` _action: QAction `
    ///
    pub fn insertAction(self: KFontAction, before: anytype, _action: anytype) void {
        comptime _ = @TypeOf(before)._is_QAction;
        comptime _ = @TypeOf(_action)._is_QAction;
        qtc.KFontAction_InsertAction(@ptrCast(self.ptr), @ptrCast(before.ptr), @ptrCast(_action.ptr));
    }

    /// ### DEPRECATED: Use `superInsertAction` instead
    ///
    pub const SuperInsertAction = superInsertAction;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#insertAction)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    /// ` before: QAction `
    ///
    /// ` _action: QAction `
    ///
    pub fn superInsertAction(self: KFontAction, before: anytype, _action: anytype) void {
        comptime _ = @TypeOf(before)._is_QAction;
        comptime _ = @TypeOf(_action)._is_QAction;
        qtc.KFontAction_SuperInsertAction(@ptrCast(self.ptr), @ptrCast(before.ptr), @ptrCast(_action.ptr));
    }

    /// ### DEPRECATED: Use `onInsertAction` instead
    ///
    pub const OnInsertAction = onInsertAction;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#insertAction)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFontAction`
    ///
    /// ` callback: *const fn (self: KFontAction, before: QAction, action: QAction) callconv(.c) void `
    ///
    pub fn onInsertAction(self: KFontAction, callback: *const fn (KFontAction, QAction, QAction) callconv(.c) void) void {
        qtc.KFontAction_OnInsertAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `slotActionTriggered` instead
    ///
    pub const SlotActionTriggered = slotActionTriggered;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#slotActionTriggered)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    /// ` _action: QAction `
    ///
    pub fn slotActionTriggered(self: KFontAction, _action: anytype) void {
        comptime _ = @TypeOf(_action)._is_QAction;
        qtc.KFontAction_SlotActionTriggered(@ptrCast(self.ptr), @ptrCast(_action.ptr));
    }

    /// ### DEPRECATED: Use `superSlotActionTriggered` instead
    ///
    pub const SuperSlotActionTriggered = superSlotActionTriggered;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#slotActionTriggered)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    /// ` _action: QAction `
    ///
    pub fn superSlotActionTriggered(self: KFontAction, _action: anytype) void {
        comptime _ = @TypeOf(_action)._is_QAction;
        qtc.KFontAction_SuperSlotActionTriggered(@ptrCast(self.ptr), @ptrCast(_action.ptr));
    }

    /// ### DEPRECATED: Use `onSlotActionTriggered` instead
    ///
    pub const OnSlotActionTriggered = onSlotActionTriggered;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#slotActionTriggered)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFontAction`
    ///
    /// ` callback: *const fn (self: KFontAction, action: QAction) callconv(.c) void `
    ///
    pub fn onSlotActionTriggered(self: KFontAction, callback: *const fn (KFontAction, QAction) callconv(.c) void) void {
        qtc.KFontAction_OnSlotActionTriggered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `deleteWidget` instead
    ///
    pub const DeleteWidget = deleteWidget;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#deleteWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    /// ` widget: QWidget `
    ///
    pub fn deleteWidget(self: KFontAction, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.KFontAction_DeleteWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `superDeleteWidget` instead
    ///
    pub const SuperDeleteWidget = superDeleteWidget;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#deleteWidget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    /// ` widget: QWidget `
    ///
    pub fn superDeleteWidget(self: KFontAction, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.KFontAction_SuperDeleteWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `onDeleteWidget` instead
    ///
    pub const OnDeleteWidget = onDeleteWidget;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#deleteWidget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFontAction`
    ///
    /// ` callback: *const fn (self: KFontAction, widget: QWidget) callconv(.c) void `
    ///
    pub fn onDeleteWidget(self: KFontAction, callback: *const fn (KFontAction, QWidget) callconv(.c) void) void {
        qtc.KFontAction_OnDeleteWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KFontAction, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KFontAction_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KFontAction, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KFontAction_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFontAction`
    ///
    /// ` callback: *const fn (self: KFontAction, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: KFontAction, callback: *const fn (KFontAction, QEvent) callconv(.c) bool) void {
        qtc.KFontAction_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KFontAction, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KFontAction_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KFontAction, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KFontAction_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFontAction`
    ///
    /// ` callback: *const fn (self: KFontAction, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: KFontAction, callback: *const fn (KFontAction, QObject, QEvent) callconv(.c) bool) void {
        qtc.KFontAction_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KFontAction `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KFontAction, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KFontAction_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KFontAction `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KFontAction, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KFontAction_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KFontAction`
    ///
    /// ` callback: *const fn (self: KFontAction, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KFontAction, callback: *const fn (KFontAction, QTimerEvent) callconv(.c) void) void {
        qtc.KFontAction_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KFontAction `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KFontAction, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KFontAction_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KFontAction `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KFontAction, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KFontAction_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KFontAction`
    ///
    /// ` callback: *const fn (self: KFontAction, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KFontAction, callback: *const fn (KFontAction, QChildEvent) callconv(.c) void) void {
        qtc.KFontAction_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KFontAction `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KFontAction, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KFontAction_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KFontAction `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KFontAction, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KFontAction_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KFontAction`
    ///
    /// ` callback: *const fn (self: KFontAction, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KFontAction, callback: *const fn (KFontAction, QEvent) callconv(.c) void) void {
        qtc.KFontAction_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KFontAction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KFontAction, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KFontAction_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KFontAction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KFontAction, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KFontAction_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KFontAction`
    ///
    /// ` callback: *const fn (self: KFontAction, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KFontAction, callback: *const fn (KFontAction, QMetaMethod) callconv(.c) void) void {
        qtc.KFontAction_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KFontAction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KFontAction, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KFontAction_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KFontAction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KFontAction, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KFontAction_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KFontAction`
    ///
    /// ` callback: *const fn (self: KFontAction, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KFontAction, callback: *const fn (KFontAction, QMetaMethod) callconv(.c) void) void {
        qtc.KFontAction_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `slotToggled` instead
    ///
    pub const SlotToggled = slotToggled;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#slotToggled)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    /// ` param1: bool `
    ///
    pub fn slotToggled(self: KFontAction, param1: bool) void {
        qtc.KFontAction_SlotToggled(@ptrCast(self.ptr), param1);
    }

    /// ### DEPRECATED: Use `superSlotToggled` instead
    ///
    pub const SuperSlotToggled = superSlotToggled;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#slotToggled)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontAction `
    ///
    /// ` param1: bool `
    ///
    pub fn superSlotToggled(self: KFontAction, param1: bool) void {
        qtc.KFontAction_SuperSlotToggled(@ptrCast(self.ptr), param1);
    }

    /// ### DEPRECATED: Use `onSlotToggled` instead
    ///
    pub const OnSlotToggled = onSlotToggled;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#slotToggled)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFontAction`
    ///
    /// ` callback: *const fn (self: KFontAction, param1: bool) callconv(.c) void `
    ///
    pub fn onSlotToggled(self: KFontAction, callback: *const fn (KFontAction, bool) callconv(.c) void) void {
        qtc.KFontAction_OnSlotToggled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KFontAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn createdWidgets(self: KFontAction, allocator: std.mem.Allocator) []QWidget {
        const _arr: qtc.libqt_list = qtc.KFontAction_CreatedWidgets(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("KFontAction.createdWidgets: Memory allocation failed");
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
    /// ` self: KFontAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superCreatedWidgets(self: KFontAction, allocator: std.mem.Allocator) []QWidget {
        const _arr: qtc.libqt_list = qtc.KFontAction_SuperCreatedWidgets(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("KFontAction.createdWidgets: Memory allocation failed");
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
    /// ` self: KFontAction`
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QWidget `
    ///
    pub fn onCreatedWidgets(self: KFontAction, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.KFontAction_OnCreatedWidgets(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KFontAction `
    ///
    pub fn sender(self: KFontAction) QObject {
        return .{ .ptr = qtc.KFontAction_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KFontAction `
    ///
    pub fn superSender(self: KFontAction) QObject {
        return .{ .ptr = qtc.KFontAction_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KFontAction`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KFontAction, callback: *const fn () callconv(.c) QObject) void {
        qtc.KFontAction_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KFontAction `
    ///
    pub fn senderSignalIndex(self: KFontAction) i32 {
        return qtc.KFontAction_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KFontAction `
    ///
    pub fn superSenderSignalIndex(self: KFontAction) i32 {
        return qtc.KFontAction_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KFontAction`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KFontAction, callback: *const fn () callconv(.c) i32) void {
        qtc.KFontAction_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KFontAction `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KFontAction, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KFontAction_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KFontAction `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KFontAction, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KFontAction_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KFontAction`
    ///
    /// ` callback: *const fn (self: KFontAction, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KFontAction, callback: *const fn (KFontAction, [*:0]const u8) callconv(.c) i32) void {
        qtc.KFontAction_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KFontAction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KFontAction, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KFontAction_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KFontAction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KFontAction, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KFontAction_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KFontAction`
    ///
    /// ` callback: *const fn (self: KFontAction, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KFontAction, callback: *const fn (KFontAction, QMetaMethod) callconv(.c) bool) void {
        qtc.KFontAction_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KFontAction `
    ///
    /// ` callback: *const fn (self: KFontAction, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KFontAction, callback: *const fn (KFontAction, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kfontaction.html#dtor.KFontAction)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KFontAction `
    ///
    pub fn delete(self: KFontAction) void {
        qtc.KFontAction_Delete(@ptrCast(self.ptr));
    }
};
