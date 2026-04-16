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
const kselectaction_enums = @import("libkselectaction.zig").enums;
const qaction_enums = @import("../libqaction.zig").enums;
const qkeysequence_enums = @import("../libqkeysequence.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qtoolbutton_enums = @import("../libqtoolbutton.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kfontsizeaction.html)
pub const KFontSizeAction = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kfontsizeaction.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KFontSizeAction,

    pub const _is_KFontSizeAction = {};
    pub const _is_KSelectAction = {};
    pub const _is_QWidgetAction = {};
    pub const _is_QAction = {};
    pub const _is_QObject = {};

    /// New constructs a new KFontSizeAction object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New(parent: anytype) KFontSizeAction {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KFontSizeAction_new(@ptrCast(parent.ptr)) };
    }

    /// New2 constructs a new KFontSizeAction object.
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(text: []const u8, parent: anytype) KFontSizeAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KFontSizeAction_new2(text_str, @ptrCast(parent.ptr)) };
    }

    /// New3 constructs a new KFontSizeAction object.
    ///
    /// ## Parameter(s):
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn New3(icon: anytype, text: []const u8, parent: anytype) KFontSizeAction {
        comptime _ = @TypeOf(icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KFontSizeAction_new3(@ptrCast(icon.ptr), text_str, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    pub fn MetaObject(self: KFontSizeAction) QMetaObject {
        return .{ .ptr = qtc.KFontSizeAction_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KFontSizeAction, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KFontSizeAction_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KFontSizeAction `
    ///
    pub fn SuperMetaObject(self: KFontSizeAction) QMetaObject {
        return .{ .ptr = qtc.KFontSizeAction_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KFontSizeAction, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KFontSizeAction_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` callback: *const fn (self: KFontSizeAction, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KFontSizeAction, callback: *const fn (KFontSizeAction, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KFontSizeAction_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KFontSizeAction, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KFontSizeAction_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KFontSizeAction, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KFontSizeAction_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` callback: *const fn (self: KFontSizeAction, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KFontSizeAction, callback: *const fn (KFontSizeAction, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KFontSizeAction_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KFontSizeAction, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KFontSizeAction_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfontsizeaction.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfontsizeaction.html#fontSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    pub fn FontSize(self: KFontSizeAction) i32 {
        return qtc.KFontSizeAction_FontSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfontsizeaction.html#setFontSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` size: i32 `
    ///
    pub fn SetFontSize(self: KFontSizeAction, size: i32) void {
        qtc.KFontSizeAction_SetFontSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### [Upstream resources](https://api.kde.org/kfontsizeaction.html#fontSizeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` param1: i32 `
    ///
    pub fn FontSizeChanged(self: KFontSizeAction, param1: i32) void {
        qtc.KFontSizeAction_FontSizeChanged(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### [Upstream resources](https://api.kde.org/kfontsizeaction.html#fontSizeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` callback: *const fn (self: KFontSizeAction, param1: i32) callconv(.c) void `
    ///
    pub fn OnFontSizeChanged(self: KFontSizeAction, callback: *const fn (KFontSizeAction, i32) callconv(.c) void) void {
        qtc.KFontSizeAction_Connect_FontSizeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kfontsizeaction.html#slotActionTriggered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` action: QAction `
    ///
    pub fn SlotActionTriggered(self: KFontSizeAction, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.KFontSizeAction_SlotActionTriggered(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kfontsizeaction.html#slotActionTriggered)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` callback: *const fn (self: KFontSizeAction, action: QAction) callconv(.c) void `
    ///
    pub fn OnSlotActionTriggered(self: KFontSizeAction, callback: *const fn (KFontSizeAction, QAction) callconv(.c) void) void {
        qtc.KFontSizeAction_OnSlotActionTriggered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSlotActionTriggered` instead
    ///
    pub const QBaseSlotActionTriggered = SuperSlotActionTriggered;

    /// ### [Upstream resources](https://api.kde.org/kfontsizeaction.html#slotActionTriggered)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` action: QAction `
    ///
    pub fn SuperSlotActionTriggered(self: KFontSizeAction, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.KFontSizeAction_SuperSlotActionTriggered(@ptrCast(self.ptr), @ptrCast(action.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfontsizeaction.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfontsizeaction.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#toolBarMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ## Returns:
    ///
    /// ` kselectaction_enums.ToolBarMode `
    ///
    pub fn ToolBarMode(self: KFontSizeAction) i32 {
        return qtc.KSelectAction_ToolBarMode(@ptrCast(self.ptr));
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#setToolBarMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` mode: kselectaction_enums.ToolBarMode `
    ///
    pub fn SetToolBarMode(self: KFontSizeAction, mode: i32) void {
        qtc.KSelectAction_SetToolBarMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#toolButtonPopupMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ## Returns:
    ///
    /// ` qtoolbutton_enums.ToolButtonPopupMode `
    ///
    pub fn ToolButtonPopupMode(self: KFontSizeAction) i32 {
        return qtc.KSelectAction_ToolButtonPopupMode(@ptrCast(self.ptr));
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#setToolButtonPopupMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` mode: qtoolbutton_enums.ToolButtonPopupMode `
    ///
    pub fn SetToolButtonPopupMode(self: KFontSizeAction, mode: i32) void {
        qtc.KSelectAction_SetToolButtonPopupMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#selectableActionGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    pub fn SelectableActionGroup(self: KFontSizeAction) QActionGroup {
        return .{ .ptr = qtc.KSelectAction_SelectableActionGroup(@ptrCast(self.ptr)) };
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#currentAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    pub fn CurrentAction(self: KFontSizeAction) QAction {
        return .{ .ptr = qtc.KSelectAction_CurrentAction(@ptrCast(self.ptr)) };
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#currentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    pub fn CurrentItem(self: KFontSizeAction) i32 {
        return qtc.KSelectAction_CurrentItem(@ptrCast(self.ptr));
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#currentText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CurrentText(self: KFontSizeAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSelectAction_CurrentText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfontsizeaction.CurrentText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: KFontSizeAction, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.KSelectAction_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("kfontsizeaction.Actions: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` index: i32 `
    ///
    pub fn Action(self: KFontSizeAction, index: i32) QAction {
        return .{ .ptr = qtc.KSelectAction_Action(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` text: []const u8 `
    ///
    pub fn Action2(self: KFontSizeAction, text: []const u8) QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.KSelectAction_Action2(@ptrCast(self.ptr), text_str) };
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#setCurrentAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` action: QAction `
    ///
    pub fn SetCurrentAction(self: KFontSizeAction, action: anytype) bool {
        comptime _ = @TypeOf(action)._is_QAction;
        return qtc.KSelectAction_SetCurrentAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#setCurrentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` index: i32 `
    ///
    pub fn SetCurrentItem(self: KFontSizeAction, index: i32) bool {
        return qtc.KSelectAction_SetCurrentItem(@ptrCast(self.ptr), @bitCast(index));
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#setCurrentAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetCurrentAction2(self: KFontSizeAction, text: []const u8) bool {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KSelectAction_SetCurrentAction2(@ptrCast(self.ptr), text_str);
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` action: QAction `
    ///
    pub fn AddAction(self: KFontSizeAction, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.KSelectAction_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction2(self: KFontSizeAction, text: []const u8) QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.KSelectAction_AddAction2(@ptrCast(self.ptr), text_str) };
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction3(self: KFontSizeAction, icon: anytype, text: []const u8) QAction {
        comptime _ = @TypeOf(icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.KSelectAction_AddAction3(@ptrCast(self.ptr), @ptrCast(icon.ptr), text_str) };
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#setItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` lst: []const []const u8 `
    ///
    pub fn SetItems(self: KFontSizeAction, allocator: std.mem.Allocator, lst: []const []const u8) void {
        const lst_arr = allocator.alloc(qtc.libqt_string, lst.len) catch @panic("kfontsizeaction.SetItems: Memory allocation failed");
        defer allocator.free(lst_arr);
        for (lst, 0..lst.len) |item, i|
            lst_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const lst_list = qtc.libqt_list{
            .len = lst.len,
            .data = lst_arr.ptr,
        };
        qtc.KSelectAction_SetItems(@ptrCast(self.ptr), lst_list);
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Items(self: KFontSizeAction, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KSelectAction_Items(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kfontsizeaction.Items: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kfontsizeaction.Items: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#isEditable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    pub fn IsEditable(self: KFontSizeAction) bool {
        return qtc.KSelectAction_IsEditable(@ptrCast(self.ptr));
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#setEditable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` editable: bool `
    ///
    pub fn SetEditable(self: KFontSizeAction, editable: bool) void {
        qtc.KSelectAction_SetEditable(@ptrCast(self.ptr), editable);
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#comboWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    pub fn ComboWidth(self: KFontSizeAction) i32 {
        return qtc.KSelectAction_ComboWidth(@ptrCast(self.ptr));
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#setComboWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` width: i32 `
    ///
    pub fn SetComboWidth(self: KFontSizeAction, width: i32) void {
        qtc.KSelectAction_SetComboWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#setMaxComboViewCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` n: i32 `
    ///
    pub fn SetMaxComboViewCount(self: KFontSizeAction, n: i32) void {
        qtc.KSelectAction_SetMaxComboViewCount(@ptrCast(self.ptr), @bitCast(n));
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    pub fn Clear(self: KFontSizeAction) void {
        qtc.KSelectAction_Clear(@ptrCast(self.ptr));
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#removeAllActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    pub fn RemoveAllActions(self: KFontSizeAction) void {
        qtc.KSelectAction_RemoveAllActions(@ptrCast(self.ptr));
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#setMenuAccelsEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` b: bool `
    ///
    pub fn SetMenuAccelsEnabled(self: KFontSizeAction, b: bool) void {
        qtc.KSelectAction_SetMenuAccelsEnabled(@ptrCast(self.ptr), b);
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#menuAccelsEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    pub fn MenuAccelsEnabled(self: KFontSizeAction) bool {
        return qtc.KSelectAction_MenuAccelsEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#changeItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` index: i32 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn ChangeItem(self: KFontSizeAction, index: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KSelectAction_ChangeItem(@ptrCast(self.ptr), @bitCast(index), text_str);
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#actionTriggered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` action: QAction `
    ///
    pub fn ActionTriggered(self: KFontSizeAction, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.KSelectAction_ActionTriggered(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#actionTriggered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` callback: *const fn (self: KFontSizeAction, action: QAction) callconv(.c) void `
    ///
    pub fn OnActionTriggered(self: KFontSizeAction, callback: *const fn (KFontSizeAction, QAction) callconv(.c) void) void {
        qtc.KSelectAction_Connect_ActionTriggered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#indexTriggered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` index: i32 `
    ///
    pub fn IndexTriggered(self: KFontSizeAction, index: i32) void {
        qtc.KSelectAction_IndexTriggered(@ptrCast(self.ptr), @bitCast(index));
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#indexTriggered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` callback: *const fn (self: KFontSizeAction, index: i32) callconv(.c) void `
    ///
    pub fn OnIndexTriggered(self: KFontSizeAction, callback: *const fn (KFontSizeAction, i32) callconv(.c) void) void {
        qtc.KSelectAction_Connect_IndexTriggered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#textTriggered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` text: []const u8 `
    ///
    pub fn TextTriggered(self: KFontSizeAction, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KSelectAction_TextTriggered(@ptrCast(self.ptr), text_str);
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#textTriggered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` callback: *const fn (self: KFontSizeAction, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnTextTriggered(self: KFontSizeAction, callback: *const fn (KFontSizeAction, [*:0]const u8) callconv(.c) void) void {
        qtc.KSelectAction_Connect_TextTriggered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` text: []const u8 `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn Action22(self: KFontSizeAction, text: []const u8, cs: i32) QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.KSelectAction_Action22(@ptrCast(self.ptr), text_str, @bitCast(cs)) };
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#setCurrentAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` text: []const u8 `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn SetCurrentAction22(self: KFontSizeAction, text: []const u8, cs: i32) bool {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KSelectAction_SetCurrentAction22(@ptrCast(self.ptr), text_str, @bitCast(cs));
    }

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#setDefaultWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` w: QWidget `
    ///
    pub fn SetDefaultWidget(self: KFontSizeAction, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QWidgetAction_SetDefaultWidget(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#defaultWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    pub fn DefaultWidget(self: KFontSizeAction) QWidget {
        return .{ .ptr = qtc.QWidgetAction_DefaultWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#requestWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` parent: QWidget `
    ///
    pub fn RequestWidget(self: KFontSizeAction, parent: anytype) QWidget {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QWidgetAction_RequestWidget(@ptrCast(self.ptr), @ptrCast(parent.ptr)) };
    }

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#releaseWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` widget: QWidget `
    ///
    pub fn ReleaseWidget(self: KFontSizeAction, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QWidgetAction_ReleaseWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#associatedObjects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AssociatedObjects(self: KFontSizeAction, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QAction_AssociatedObjects(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kfontsizeaction.AssociatedObjects: Memory allocation failed");
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
    /// ` self: KFontSizeAction `
    ///
    /// ` group: QActionGroup `
    ///
    pub fn SetActionGroup(self: KFontSizeAction, group: anytype) void {
        comptime _ = @TypeOf(group)._is_QActionGroup;
        qtc.QAction_SetActionGroup(@ptrCast(self.ptr), @ptrCast(group.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#actionGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    pub fn ActionGroup(self: KFontSizeAction) QActionGroup {
        return .{ .ptr = qtc.QAction_ActionGroup(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetIcon(self: KFontSizeAction, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QAction_SetIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    pub fn Icon(self: KFontSizeAction) QIcon {
        return .{ .ptr = qtc.QAction_Icon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: KFontSizeAction, text: []const u8) void {
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
    /// ` self: KFontSizeAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: KFontSizeAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAction_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfontsizeaction.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetIconText(self: KFontSizeAction, text: []const u8) void {
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
    /// ` self: KFontSizeAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn IconText(self: KFontSizeAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAction_IconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfontsizeaction.IconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` tip: []const u8 `
    ///
    pub fn SetToolTip(self: KFontSizeAction, tip: []const u8) void {
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
    /// ` self: KFontSizeAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: KFontSizeAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAction_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfontsizeaction.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: KFontSizeAction, statusTip: []const u8) void {
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
    /// ` self: KFontSizeAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusTip(self: KFontSizeAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAction_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfontsizeaction.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` what: []const u8 `
    ///
    pub fn SetWhatsThis(self: KFontSizeAction, what: []const u8) void {
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
    /// ` self: KFontSizeAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: KFontSizeAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAction_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfontsizeaction.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setPriority)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` priority: qaction_enums.Priority `
    ///
    pub fn SetPriority(self: KFontSizeAction, priority: i32) void {
        qtc.QAction_SetPriority(@ptrCast(self.ptr), @bitCast(priority));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#priority)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ## Returns:
    ///
    /// ` qaction_enums.Priority `
    ///
    pub fn Priority(self: KFontSizeAction) i32 {
        return qtc.QAction_Priority(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setSeparator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` b: bool `
    ///
    pub fn SetSeparator(self: KFontSizeAction, b: bool) void {
        qtc.QAction_SetSeparator(@ptrCast(self.ptr), b);
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isSeparator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    pub fn IsSeparator(self: KFontSizeAction) bool {
        return qtc.QAction_IsSeparator(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn SetShortcut(self: KFontSizeAction, shortcut: anytype) void {
        comptime _ = @TypeOf(shortcut)._is_QKeySequence;
        qtc.QAction_SetShortcut(@ptrCast(self.ptr), @ptrCast(shortcut.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    pub fn Shortcut(self: KFontSizeAction) QKeySequence {
        return .{ .ptr = qtc.QAction_Shortcut(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` shortcuts: []QKeySequence `
    ///
    pub fn SetShortcuts(self: KFontSizeAction, shortcuts: []QKeySequence) void {
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
    /// ` self: KFontSizeAction `
    ///
    /// ` shortcuts: qkeysequence_enums.StandardKey `
    ///
    pub fn SetShortcuts2(self: KFontSizeAction, shortcuts: i32) void {
        qtc.QAction_SetShortcuts2(@ptrCast(self.ptr), @bitCast(shortcuts));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcuts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Shortcuts(self: KFontSizeAction, allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.QAction_Shortcuts(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("kfontsizeaction.Shortcuts: Memory allocation failed");
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
    /// ` self: KFontSizeAction `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn SetShortcutContext(self: KFontSizeAction, context: i32) void {
        qtc.QAction_SetShortcutContext(@ptrCast(self.ptr), @bitCast(context));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcutContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ShortcutContext `
    ///
    pub fn ShortcutContext(self: KFontSizeAction) i32 {
        return qtc.QAction_ShortcutContext(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` autoRepeat: bool `
    ///
    pub fn SetAutoRepeat(self: KFontSizeAction, autoRepeat: bool) void {
        qtc.QAction_SetAutoRepeat(@ptrCast(self.ptr), autoRepeat);
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#autoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    pub fn AutoRepeat(self: KFontSizeAction) bool {
        return qtc.QAction_AutoRepeat(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: KFontSizeAction, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QAction_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    pub fn Font(self: KFontSizeAction) QFont {
        return .{ .ptr = qtc.QAction_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setCheckable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` checkable: bool `
    ///
    pub fn SetCheckable(self: KFontSizeAction, checkable: bool) void {
        qtc.QAction_SetCheckable(@ptrCast(self.ptr), checkable);
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isCheckable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    pub fn IsCheckable(self: KFontSizeAction) bool {
        return qtc.QAction_IsCheckable(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    pub fn Data(self: KFontSizeAction) QVariant {
        return .{ .ptr = qtc.QAction_Data(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` varVal: QVariant `
    ///
    pub fn SetData(self: KFontSizeAction, varVal: anytype) void {
        comptime _ = @TypeOf(varVal)._is_QVariant;
        qtc.QAction_SetData(@ptrCast(self.ptr), @ptrCast(varVal.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isChecked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    pub fn IsChecked(self: KFontSizeAction) bool {
        return qtc.QAction_IsChecked(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    pub fn IsEnabled(self: KFontSizeAction) bool {
        return qtc.QAction_IsEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    pub fn IsVisible(self: KFontSizeAction) bool {
        return qtc.QAction_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#activate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` event: qaction_enums.ActionEvent `
    ///
    pub fn Activate(self: KFontSizeAction, event: i32) void {
        qtc.QAction_Activate(@ptrCast(self.ptr), @bitCast(event));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setMenuRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` menuRole: qaction_enums.MenuRole `
    ///
    pub fn SetMenuRole(self: KFontSizeAction, menuRole: i32) void {
        qtc.QAction_SetMenuRole(@ptrCast(self.ptr), @bitCast(menuRole));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#menuRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ## Returns:
    ///
    /// ` qaction_enums.MenuRole `
    ///
    pub fn MenuRole(self: KFontSizeAction) i32 {
        return qtc.QAction_MenuRole(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIconVisibleInMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` visible: bool `
    ///
    pub fn SetIconVisibleInMenu(self: KFontSizeAction, visible: bool) void {
        qtc.QAction_SetIconVisibleInMenu(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isIconVisibleInMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    pub fn IsIconVisibleInMenu(self: KFontSizeAction) bool {
        return qtc.QAction_IsIconVisibleInMenu(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcutVisibleInContextMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` show: bool `
    ///
    pub fn SetShortcutVisibleInContextMenu(self: KFontSizeAction, show: bool) void {
        qtc.QAction_SetShortcutVisibleInContextMenu(@ptrCast(self.ptr), show);
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isShortcutVisibleInContextMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    pub fn IsShortcutVisibleInContextMenu(self: KFontSizeAction) bool {
        return qtc.QAction_IsShortcutVisibleInContextMenu(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#showStatusText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    pub fn ShowStatusText(self: KFontSizeAction) bool {
        return qtc.QAction_ShowStatusText(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#trigger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    pub fn Trigger(self: KFontSizeAction) void {
        qtc.QAction_Trigger(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hover)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    pub fn Hover(self: KFontSizeAction) void {
        qtc.QAction_Hover(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setChecked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` checked: bool `
    ///
    pub fn SetChecked(self: KFontSizeAction, checked: bool) void {
        qtc.QAction_SetChecked(@ptrCast(self.ptr), checked);
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    pub fn Toggle(self: KFontSizeAction) void {
        qtc.QAction_Toggle(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: KFontSizeAction, enabled: bool) void {
        qtc.QAction_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#resetEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    pub fn ResetEnabled(self: KFontSizeAction) void {
        qtc.QAction_ResetEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` b: bool `
    ///
    pub fn SetDisabled(self: KFontSizeAction, b: bool) void {
        qtc.QAction_SetDisabled(@ptrCast(self.ptr), b);
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: KFontSizeAction, visible: bool) void {
        qtc.QAction_SetVisible(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#changed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    pub fn Changed(self: KFontSizeAction) void {
        qtc.QAction_Changed(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#changed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` callback: *const fn (self: KFontSizeAction) callconv(.c) void `
    ///
    pub fn OnChanged(self: KFontSizeAction, callback: *const fn (KFontSizeAction) callconv(.c) void) void {
        qtc.QAction_Connect_Changed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` enabled: bool `
    ///
    pub fn EnabledChanged(self: KFontSizeAction, enabled: bool) void {
        qtc.QAction_EnabledChanged(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` callback: *const fn (self: KFontSizeAction, enabled: bool) callconv(.c) void `
    ///
    pub fn OnEnabledChanged(self: KFontSizeAction, callback: *const fn (KFontSizeAction, bool) callconv(.c) void) void {
        qtc.QAction_Connect_EnabledChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` checkable: bool `
    ///
    pub fn CheckableChanged(self: KFontSizeAction, checkable: bool) void {
        qtc.QAction_CheckableChanged(@ptrCast(self.ptr), checkable);
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` callback: *const fn (self: KFontSizeAction, checkable: bool) callconv(.c) void `
    ///
    pub fn OnCheckableChanged(self: KFontSizeAction, callback: *const fn (KFontSizeAction, bool) callconv(.c) void) void {
        qtc.QAction_Connect_CheckableChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    pub fn VisibleChanged(self: KFontSizeAction) void {
        qtc.QAction_VisibleChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` callback: *const fn (self: KFontSizeAction) callconv(.c) void `
    ///
    pub fn OnVisibleChanged(self: KFontSizeAction, callback: *const fn (KFontSizeAction) callconv(.c) void) void {
        qtc.QAction_Connect_VisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    pub fn Triggered(self: KFontSizeAction) void {
        qtc.QAction_Triggered(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` callback: *const fn (self: KFontSizeAction) callconv(.c) void `
    ///
    pub fn OnTriggered(self: KFontSizeAction, callback: *const fn (KFontSizeAction) callconv(.c) void) void {
        qtc.QAction_Connect_Triggered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hovered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    pub fn Hovered(self: KFontSizeAction) void {
        qtc.QAction_Hovered(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hovered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` callback: *const fn (self: KFontSizeAction) callconv(.c) void `
    ///
    pub fn OnHovered(self: KFontSizeAction, callback: *const fn (KFontSizeAction) callconv(.c) void) void {
        qtc.QAction_Connect_Hovered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` param1: bool `
    ///
    pub fn Toggled(self: KFontSizeAction, param1: bool) void {
        qtc.QAction_Toggled(@ptrCast(self.ptr), param1);
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggled)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` callback: *const fn (self: KFontSizeAction, param1: bool) callconv(.c) void `
    ///
    pub fn OnToggled(self: KFontSizeAction, callback: *const fn (KFontSizeAction, bool) callconv(.c) void) void {
        qtc.QAction_Connect_Toggled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#showStatusText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` object: QObject `
    ///
    pub fn ShowStatusText1(self: KFontSizeAction, object: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        return qtc.QAction_ShowStatusText1(@ptrCast(self.ptr), @ptrCast(object.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` checked: bool `
    ///
    pub fn Triggered1(self: KFontSizeAction, checked: bool) void {
        qtc.QAction_Triggered1(@ptrCast(self.ptr), checked);
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` callback: *const fn (self: KFontSizeAction, checked: bool) callconv(.c) void `
    ///
    pub fn OnTriggered1(self: KFontSizeAction, callback: *const fn (KFontSizeAction, bool) callconv(.c) void) void {
        qtc.QAction_Connect_Triggered1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KFontSizeAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfontsizeaction.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KFontSizeAction, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    pub fn IsWidgetType(self: KFontSizeAction) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    pub fn IsWindowType(self: KFontSizeAction) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    pub fn IsQuickItemType(self: KFontSizeAction) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    pub fn SignalsBlocked(self: KFontSizeAction) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KFontSizeAction, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    pub fn Thread(self: KFontSizeAction) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KFontSizeAction, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KFontSizeAction, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KFontSizeAction, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KFontSizeAction, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KFontSizeAction, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KFontSizeAction, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kfontsizeaction.Children: Memory allocation failed");
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
    /// ` self: KFontSizeAction `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KFontSizeAction, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KFontSizeAction, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KFontSizeAction, obj: anytype) void {
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
    /// ` self: KFontSizeAction `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KFontSizeAction, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KFontSizeAction `
    ///
    pub fn Disconnect3(self: KFontSizeAction) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KFontSizeAction, receiver: anytype) bool {
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
    /// ` self: KFontSizeAction `
    ///
    pub fn DumpObjectTree(self: KFontSizeAction) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    pub fn DumpObjectInfo(self: KFontSizeAction) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KFontSizeAction, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KFontSizeAction `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KFontSizeAction, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KFontSizeAction, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kfontsizeaction.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kfontsizeaction.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KFontSizeAction `
    ///
    pub fn BindingStorage(self: KFontSizeAction) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    pub fn BindingStorage2(self: KFontSizeAction) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    pub fn Destroyed(self: KFontSizeAction) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` callback: *const fn (self: KFontSizeAction) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KFontSizeAction, callback: *const fn (KFontSizeAction) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    pub fn Parent(self: KFontSizeAction) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KFontSizeAction, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    pub fn DeleteLater(self: KFontSizeAction) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KFontSizeAction, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KFontSizeAction, time: i64, timerType: i32) i32 {
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
    /// ` self: KFontSizeAction `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KFontSizeAction, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KFontSizeAction `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KFontSizeAction, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KFontSizeAction, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KFontSizeAction `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KFontSizeAction, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KFontSizeAction `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KFontSizeAction, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KFontSizeAction `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KFontSizeAction, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` callback: *const fn (self: KFontSizeAction, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KFontSizeAction, callback: *const fn (KFontSizeAction, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#removeAction)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` action: QAction `
    ///
    pub fn RemoveAction(self: KFontSizeAction, action: anytype) QAction {
        comptime _ = @TypeOf(action)._is_QAction;
        return .{ .ptr = qtc.KFontSizeAction_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperRemoveAction` instead
    ///
    pub const QBaseRemoveAction = SuperRemoveAction;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#removeAction)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` action: QAction `
    ///
    pub fn SuperRemoveAction(self: KFontSizeAction, action: anytype) QAction {
        comptime _ = @TypeOf(action)._is_QAction;
        return .{ .ptr = qtc.KFontSizeAction_SuperRemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr)) };
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#removeAction)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFontSizeAction`
    ///
    /// ` callback: *const fn (self: KFontSizeAction, action: QAction) callconv(.c) QAction `
    ///
    pub fn OnRemoveAction(self: KFontSizeAction, callback: *const fn (KFontSizeAction, QAction) callconv(.c) QAction) void {
        qtc.KFontSizeAction_OnRemoveAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#insertAction)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn InsertAction(self: KFontSizeAction, before: anytype, action: anytype) void {
        comptime _ = @TypeOf(before)._is_QAction;
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.KFontSizeAction_InsertAction(@ptrCast(self.ptr), @ptrCast(before.ptr), @ptrCast(action.ptr));
    }

    /// ### DEPRECATED: Use `SuperInsertAction` instead
    ///
    pub const QBaseInsertAction = SuperInsertAction;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#insertAction)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn SuperInsertAction(self: KFontSizeAction, before: anytype, action: anytype) void {
        comptime _ = @TypeOf(before)._is_QAction;
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.KFontSizeAction_SuperInsertAction(@ptrCast(self.ptr), @ptrCast(before.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#insertAction)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFontSizeAction`
    ///
    /// ` callback: *const fn (self: KFontSizeAction, before: QAction, action: QAction) callconv(.c) void `
    ///
    pub fn OnInsertAction(self: KFontSizeAction, callback: *const fn (KFontSizeAction, QAction, QAction) callconv(.c) void) void {
        qtc.KFontSizeAction_OnInsertAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#createWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` parent: QWidget `
    ///
    pub fn CreateWidget(self: KFontSizeAction, parent: anytype) QWidget {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.KFontSizeAction_CreateWidget(@ptrCast(self.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperCreateWidget` instead
    ///
    pub const QBaseCreateWidget = SuperCreateWidget;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#createWidget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SuperCreateWidget(self: KFontSizeAction, parent: anytype) QWidget {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.KFontSizeAction_SuperCreateWidget(@ptrCast(self.ptr), @ptrCast(parent.ptr)) };
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#createWidget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFontSizeAction`
    ///
    /// ` callback: *const fn (self: KFontSizeAction, parent: QWidget) callconv(.c) QWidget `
    ///
    pub fn OnCreateWidget(self: KFontSizeAction, callback: *const fn (KFontSizeAction, QWidget) callconv(.c) QWidget) void {
        qtc.KFontSizeAction_OnCreateWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#deleteWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` widget: QWidget `
    ///
    pub fn DeleteWidget(self: KFontSizeAction, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.KFontSizeAction_DeleteWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `SuperDeleteWidget` instead
    ///
    pub const QBaseDeleteWidget = SuperDeleteWidget;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#deleteWidget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SuperDeleteWidget(self: KFontSizeAction, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.KFontSizeAction_SuperDeleteWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#deleteWidget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFontSizeAction`
    ///
    /// ` callback: *const fn (self: KFontSizeAction, widget: QWidget) callconv(.c) void `
    ///
    pub fn OnDeleteWidget(self: KFontSizeAction, callback: *const fn (KFontSizeAction, QWidget) callconv(.c) void) void {
        qtc.KFontSizeAction_OnDeleteWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KFontSizeAction, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KFontSizeAction_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KFontSizeAction, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KFontSizeAction_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFontSizeAction`
    ///
    /// ` callback: *const fn (self: KFontSizeAction, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KFontSizeAction, callback: *const fn (KFontSizeAction, QEvent) callconv(.c) bool) void {
        qtc.KFontSizeAction_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KFontSizeAction, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KFontSizeAction_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KFontSizeAction, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KFontSizeAction_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFontSizeAction`
    ///
    /// ` callback: *const fn (self: KFontSizeAction, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KFontSizeAction, callback: *const fn (KFontSizeAction, QObject, QEvent) callconv(.c) bool) void {
        qtc.KFontSizeAction_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KFontSizeAction, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KFontSizeAction_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KFontSizeAction `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KFontSizeAction, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KFontSizeAction_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFontSizeAction`
    ///
    /// ` callback: *const fn (self: KFontSizeAction, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KFontSizeAction, callback: *const fn (KFontSizeAction, QTimerEvent) callconv(.c) void) void {
        qtc.KFontSizeAction_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KFontSizeAction, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KFontSizeAction_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KFontSizeAction `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KFontSizeAction, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KFontSizeAction_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFontSizeAction`
    ///
    /// ` callback: *const fn (self: KFontSizeAction, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KFontSizeAction, callback: *const fn (KFontSizeAction, QChildEvent) callconv(.c) void) void {
        qtc.KFontSizeAction_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KFontSizeAction, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KFontSizeAction_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KFontSizeAction `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KFontSizeAction, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KFontSizeAction_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFontSizeAction`
    ///
    /// ` callback: *const fn (self: KFontSizeAction, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KFontSizeAction, callback: *const fn (KFontSizeAction, QEvent) callconv(.c) void) void {
        qtc.KFontSizeAction_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KFontSizeAction, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KFontSizeAction_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KFontSizeAction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KFontSizeAction, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KFontSizeAction_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFontSizeAction`
    ///
    /// ` callback: *const fn (self: KFontSizeAction, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KFontSizeAction, callback: *const fn (KFontSizeAction, QMetaMethod) callconv(.c) void) void {
        qtc.KFontSizeAction_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KFontSizeAction, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KFontSizeAction_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KFontSizeAction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KFontSizeAction, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KFontSizeAction_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFontSizeAction`
    ///
    /// ` callback: *const fn (self: KFontSizeAction, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KFontSizeAction, callback: *const fn (KFontSizeAction, QMetaMethod) callconv(.c) void) void {
        qtc.KFontSizeAction_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#slotToggled)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` param1: bool `
    ///
    pub fn SlotToggled(self: KFontSizeAction, param1: bool) void {
        qtc.KFontSizeAction_SlotToggled(@ptrCast(self.ptr), param1);
    }

    /// ### DEPRECATED: Use `SuperSlotToggled` instead
    ///
    pub const QBaseSlotToggled = SuperSlotToggled;

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#slotToggled)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` param1: bool `
    ///
    pub fn SuperSlotToggled(self: KFontSizeAction, param1: bool) void {
        qtc.KFontSizeAction_SuperSlotToggled(@ptrCast(self.ptr), param1);
    }

    /// Inherited from KSelectAction
    ///
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#slotToggled)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFontSizeAction`
    ///
    /// ` callback: *const fn (self: KFontSizeAction, param1: bool) callconv(.c) void `
    ///
    pub fn OnSlotToggled(self: KFontSizeAction, callback: *const fn (KFontSizeAction, bool) callconv(.c) void) void {
        qtc.KFontSizeAction_OnSlotToggled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CreatedWidgets(self: KFontSizeAction, allocator: std.mem.Allocator) []QWidget {
        const _arr: qtc.libqt_list = qtc.KFontSizeAction_CreatedWidgets(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("kfontsizeaction.CreatedWidgets: Memory allocation failed");
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
    /// ` self: KFontSizeAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperCreatedWidgets(self: KFontSizeAction, allocator: std.mem.Allocator) []QWidget {
        const _arr: qtc.libqt_list = qtc.KFontSizeAction_SuperCreatedWidgets(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("kfontsizeaction.CreatedWidgets: Memory allocation failed");
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
    /// ` self: KFontSizeAction`
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QWidget `
    ///
    pub fn OnCreatedWidgets(self: KFontSizeAction, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.KFontSizeAction_OnCreatedWidgets(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    pub fn Sender(self: KFontSizeAction) QObject {
        return .{ .ptr = qtc.KFontSizeAction_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KFontSizeAction `
    ///
    pub fn SuperSender(self: KFontSizeAction) QObject {
        return .{ .ptr = qtc.KFontSizeAction_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFontSizeAction`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KFontSizeAction, callback: *const fn () callconv(.c) QObject) void {
        qtc.KFontSizeAction_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    pub fn SenderSignalIndex(self: KFontSizeAction) i32 {
        return qtc.KFontSizeAction_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KFontSizeAction `
    ///
    pub fn SuperSenderSignalIndex(self: KFontSizeAction) i32 {
        return qtc.KFontSizeAction_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFontSizeAction`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KFontSizeAction, callback: *const fn () callconv(.c) i32) void {
        qtc.KFontSizeAction_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KFontSizeAction, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KFontSizeAction_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KFontSizeAction `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KFontSizeAction, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KFontSizeAction_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFontSizeAction`
    ///
    /// ` callback: *const fn (self: KFontSizeAction, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KFontSizeAction, callback: *const fn (KFontSizeAction, [*:0]const u8) callconv(.c) i32) void {
        qtc.KFontSizeAction_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KFontSizeAction, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KFontSizeAction_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KFontSizeAction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KFontSizeAction, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KFontSizeAction_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KFontSizeAction`
    ///
    /// ` callback: *const fn (self: KFontSizeAction, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KFontSizeAction, callback: *const fn (KFontSizeAction, QMetaMethod) callconv(.c) bool) void {
        qtc.KFontSizeAction_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KFontSizeAction `
    ///
    /// ` callback: *const fn (self: KFontSizeAction, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KFontSizeAction, callback: *const fn (KFontSizeAction, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kfontsizeaction.html#dtor.KFontSizeAction)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KFontSizeAction `
    ///
    pub fn Delete(self: KFontSizeAction) void {
        qtc.KFontSizeAction_Delete(@ptrCast(self.ptr));
    }
};
