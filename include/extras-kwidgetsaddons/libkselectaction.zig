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
const kselectaction_enums = enums;
const qaction_enums = @import("../libqaction.zig").enums;
const qkeysequence_enums = @import("../libqkeysequence.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qtoolbutton_enums = @import("../libqtoolbutton.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kselectaction.html)
pub const KSelectAction = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kselectaction.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KSelectAction,

    pub const _is_KSelectAction = {};
    pub const _is_QWidgetAction = {};
    pub const _is_QAction = {};
    pub const _is_QObject = {};

    /// New constructs a new KSelectAction object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New(parent: anytype) KSelectAction {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KSelectAction_new(@ptrCast(parent.ptr)) };
    }

    /// New2 constructs a new KSelectAction object.
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(text: []const u8, parent: anytype) KSelectAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KSelectAction_new2(text_str, @ptrCast(parent.ptr)) };
    }

    /// New3 constructs a new KSelectAction object.
    ///
    /// ## Parameter(s):
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn New3(icon: anytype, text: []const u8, parent: anytype) KSelectAction {
        comptime _ = @TypeOf(icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KSelectAction_new3(@ptrCast(icon.ptr), text_str, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    pub fn MetaObject(self: KSelectAction) QMetaObject {
        return .{ .ptr = qtc.KSelectAction_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSelectAction `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KSelectAction, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KSelectAction_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSelectAction `
    ///
    pub fn SuperMetaObject(self: KSelectAction) QMetaObject {
        return .{ .ptr = qtc.KSelectAction_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KSelectAction, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KSelectAction_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSelectAction `
    ///
    /// ` callback: *const fn (self: KSelectAction, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KSelectAction, callback: *const fn (KSelectAction, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KSelectAction_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KSelectAction, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KSelectAction_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KSelectAction, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KSelectAction_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSelectAction `
    ///
    /// ` callback: *const fn (self: KSelectAction, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KSelectAction, callback: *const fn (KSelectAction, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KSelectAction_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KSelectAction, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KSelectAction_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kselectaction.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#toolBarMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ## Returns:
    ///
    /// ` kselectaction_enums.ToolBarMode `
    ///
    pub fn ToolBarMode(self: KSelectAction) i32 {
        return qtc.KSelectAction_ToolBarMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#setToolBarMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` mode: kselectaction_enums.ToolBarMode `
    ///
    pub fn SetToolBarMode(self: KSelectAction, mode: i32) void {
        qtc.KSelectAction_SetToolBarMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#toolButtonPopupMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ## Returns:
    ///
    /// ` qtoolbutton_enums.ToolButtonPopupMode `
    ///
    pub fn ToolButtonPopupMode(self: KSelectAction) i32 {
        return qtc.KSelectAction_ToolButtonPopupMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#setToolButtonPopupMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` mode: qtoolbutton_enums.ToolButtonPopupMode `
    ///
    pub fn SetToolButtonPopupMode(self: KSelectAction, mode: i32) void {
        qtc.KSelectAction_SetToolButtonPopupMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#selectableActionGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    pub fn SelectableActionGroup(self: KSelectAction) QActionGroup {
        return .{ .ptr = qtc.KSelectAction_SelectableActionGroup(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#currentAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    pub fn CurrentAction(self: KSelectAction) QAction {
        return .{ .ptr = qtc.KSelectAction_CurrentAction(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#currentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    pub fn CurrentItem(self: KSelectAction) i32 {
        return qtc.KSelectAction_CurrentItem(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#currentText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CurrentText(self: KSelectAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSelectAction_CurrentText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kselectaction.CurrentText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: KSelectAction, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.KSelectAction_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("kselectaction.Actions: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` index: i32 `
    ///
    pub fn Action(self: KSelectAction, index: i32) QAction {
        return .{ .ptr = qtc.KSelectAction_Action(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` text: []const u8 `
    ///
    pub fn Action2(self: KSelectAction, text: []const u8) QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.KSelectAction_Action2(@ptrCast(self.ptr), text_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#setCurrentAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` action: QAction `
    ///
    pub fn SetCurrentAction(self: KSelectAction, action: anytype) bool {
        comptime _ = @TypeOf(action)._is_QAction;
        return qtc.KSelectAction_SetCurrentAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#setCurrentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` index: i32 `
    ///
    pub fn SetCurrentItem(self: KSelectAction, index: i32) bool {
        return qtc.KSelectAction_SetCurrentItem(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#setCurrentAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetCurrentAction2(self: KSelectAction, text: []const u8) bool {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KSelectAction_SetCurrentAction2(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` action: QAction `
    ///
    pub fn AddAction(self: KSelectAction, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.KSelectAction_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction2(self: KSelectAction, text: []const u8) QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.KSelectAction_AddAction2(@ptrCast(self.ptr), text_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction3(self: KSelectAction, icon: anytype, text: []const u8) QAction {
        comptime _ = @TypeOf(icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.KSelectAction_AddAction3(@ptrCast(self.ptr), @ptrCast(icon.ptr), text_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#removeAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` action: QAction `
    ///
    pub fn RemoveAction(self: KSelectAction, action: anytype) QAction {
        comptime _ = @TypeOf(action)._is_QAction;
        return .{ .ptr = qtc.KSelectAction_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#removeAction)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSelectAction `
    ///
    /// ` callback: *const fn (self: KSelectAction, action: QAction) callconv(.c) QAction `
    ///
    pub fn OnRemoveAction(self: KSelectAction, callback: *const fn (KSelectAction, QAction) callconv(.c) QAction) void {
        qtc.KSelectAction_OnRemoveAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRemoveAction` instead
    ///
    pub const QBaseRemoveAction = SuperRemoveAction;

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#removeAction)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` action: QAction `
    ///
    pub fn SuperRemoveAction(self: KSelectAction, action: anytype) QAction {
        comptime _ = @TypeOf(action)._is_QAction;
        return .{ .ptr = qtc.KSelectAction_SuperRemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#insertAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn InsertAction(self: KSelectAction, before: anytype, action: anytype) void {
        comptime _ = @TypeOf(before)._is_QAction;
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.KSelectAction_InsertAction(@ptrCast(self.ptr), @ptrCast(before.ptr), @ptrCast(action.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#insertAction)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSelectAction `
    ///
    /// ` callback: *const fn (self: KSelectAction, before: QAction, action: QAction) callconv(.c) void `
    ///
    pub fn OnInsertAction(self: KSelectAction, callback: *const fn (KSelectAction, QAction, QAction) callconv(.c) void) void {
        qtc.KSelectAction_OnInsertAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInsertAction` instead
    ///
    pub const QBaseInsertAction = SuperInsertAction;

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#insertAction)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn SuperInsertAction(self: KSelectAction, before: anytype, action: anytype) void {
        comptime _ = @TypeOf(before)._is_QAction;
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.KSelectAction_SuperInsertAction(@ptrCast(self.ptr), @ptrCast(before.ptr), @ptrCast(action.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#setItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` lst: []const []const u8 `
    ///
    pub fn SetItems(self: KSelectAction, allocator: std.mem.Allocator, lst: []const []const u8) void {
        const lst_arr = allocator.alloc(qtc.libqt_string, lst.len) catch @panic("kselectaction.SetItems: Memory allocation failed");
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

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Items(self: KSelectAction, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KSelectAction_Items(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kselectaction.Items: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kselectaction.Items: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#isEditable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    pub fn IsEditable(self: KSelectAction) bool {
        return qtc.KSelectAction_IsEditable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#setEditable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` editable: bool `
    ///
    pub fn SetEditable(self: KSelectAction, editable: bool) void {
        qtc.KSelectAction_SetEditable(@ptrCast(self.ptr), editable);
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#comboWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    pub fn ComboWidth(self: KSelectAction) i32 {
        return qtc.KSelectAction_ComboWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#setComboWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` width: i32 `
    ///
    pub fn SetComboWidth(self: KSelectAction, width: i32) void {
        qtc.KSelectAction_SetComboWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#setMaxComboViewCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` n: i32 `
    ///
    pub fn SetMaxComboViewCount(self: KSelectAction, n: i32) void {
        qtc.KSelectAction_SetMaxComboViewCount(@ptrCast(self.ptr), @bitCast(n));
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    pub fn Clear(self: KSelectAction) void {
        qtc.KSelectAction_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#removeAllActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    pub fn RemoveAllActions(self: KSelectAction) void {
        qtc.KSelectAction_RemoveAllActions(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#setMenuAccelsEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` b: bool `
    ///
    pub fn SetMenuAccelsEnabled(self: KSelectAction, b: bool) void {
        qtc.KSelectAction_SetMenuAccelsEnabled(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#menuAccelsEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    pub fn MenuAccelsEnabled(self: KSelectAction) bool {
        return qtc.KSelectAction_MenuAccelsEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#changeItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` index: i32 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn ChangeItem(self: KSelectAction, index: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KSelectAction_ChangeItem(@ptrCast(self.ptr), @bitCast(index), text_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#actionTriggered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` action: QAction `
    ///
    pub fn ActionTriggered(self: KSelectAction, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.KSelectAction_ActionTriggered(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#actionTriggered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSelectAction `
    ///
    /// ` callback: *const fn (self: KSelectAction, action: QAction) callconv(.c) void `
    ///
    pub fn OnActionTriggered(self: KSelectAction, callback: *const fn (KSelectAction, QAction) callconv(.c) void) void {
        qtc.KSelectAction_Connect_ActionTriggered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#indexTriggered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` index: i32 `
    ///
    pub fn IndexTriggered(self: KSelectAction, index: i32) void {
        qtc.KSelectAction_IndexTriggered(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#indexTriggered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSelectAction `
    ///
    /// ` callback: *const fn (self: KSelectAction, index: i32) callconv(.c) void `
    ///
    pub fn OnIndexTriggered(self: KSelectAction, callback: *const fn (KSelectAction, i32) callconv(.c) void) void {
        qtc.KSelectAction_Connect_IndexTriggered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#textTriggered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` text: []const u8 `
    ///
    pub fn TextTriggered(self: KSelectAction, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KSelectAction_TextTriggered(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#textTriggered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSelectAction `
    ///
    /// ` callback: *const fn (self: KSelectAction, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnTextTriggered(self: KSelectAction, callback: *const fn (KSelectAction, [*:0]const u8) callconv(.c) void) void {
        qtc.KSelectAction_Connect_TextTriggered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#slotActionTriggered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` action: QAction `
    ///
    pub fn SlotActionTriggered(self: KSelectAction, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.KSelectAction_SlotActionTriggered(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#slotActionTriggered)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSelectAction `
    ///
    /// ` callback: *const fn (self: KSelectAction, action: QAction) callconv(.c) void `
    ///
    pub fn OnSlotActionTriggered(self: KSelectAction, callback: *const fn (KSelectAction, QAction) callconv(.c) void) void {
        qtc.KSelectAction_OnSlotActionTriggered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSlotActionTriggered` instead
    ///
    pub const QBaseSlotActionTriggered = SuperSlotActionTriggered;

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#slotActionTriggered)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` action: QAction `
    ///
    pub fn SuperSlotActionTriggered(self: KSelectAction, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.KSelectAction_SuperSlotActionTriggered(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#slotToggled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` param1: bool `
    ///
    pub fn SlotToggled(self: KSelectAction, param1: bool) void {
        qtc.KSelectAction_SlotToggled(@ptrCast(self.ptr), param1);
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#slotToggled)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSelectAction `
    ///
    /// ` callback: *const fn (self: KSelectAction, param1: bool) callconv(.c) void `
    ///
    pub fn OnSlotToggled(self: KSelectAction, callback: *const fn (KSelectAction, bool) callconv(.c) void) void {
        qtc.KSelectAction_OnSlotToggled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSlotToggled` instead
    ///
    pub const QBaseSlotToggled = SuperSlotToggled;

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#slotToggled)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` param1: bool `
    ///
    pub fn SuperSlotToggled(self: KSelectAction, param1: bool) void {
        qtc.KSelectAction_SuperSlotToggled(@ptrCast(self.ptr), param1);
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#createWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` parent: QWidget `
    ///
    pub fn CreateWidget(self: KSelectAction, parent: anytype) QWidget {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.KSelectAction_CreateWidget(@ptrCast(self.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#createWidget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSelectAction `
    ///
    /// ` callback: *const fn (self: KSelectAction, parent: QWidget) callconv(.c) QWidget `
    ///
    pub fn OnCreateWidget(self: KSelectAction, callback: *const fn (KSelectAction, QWidget) callconv(.c) QWidget) void {
        qtc.KSelectAction_OnCreateWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCreateWidget` instead
    ///
    pub const QBaseCreateWidget = SuperCreateWidget;

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#createWidget)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SuperCreateWidget(self: KSelectAction, parent: anytype) QWidget {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.KSelectAction_SuperCreateWidget(@ptrCast(self.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#deleteWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` widget: QWidget `
    ///
    pub fn DeleteWidget(self: KSelectAction, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.KSelectAction_DeleteWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#deleteWidget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSelectAction `
    ///
    /// ` callback: *const fn (self: KSelectAction, widget: QWidget) callconv(.c) void `
    ///
    pub fn OnDeleteWidget(self: KSelectAction, callback: *const fn (KSelectAction, QWidget) callconv(.c) void) void {
        qtc.KSelectAction_OnDeleteWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDeleteWidget` instead
    ///
    pub const QBaseDeleteWidget = SuperDeleteWidget;

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#deleteWidget)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SuperDeleteWidget(self: KSelectAction, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.KSelectAction_SuperDeleteWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KSelectAction, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KSelectAction_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSelectAction `
    ///
    /// ` callback: *const fn (self: KSelectAction, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KSelectAction, callback: *const fn (KSelectAction, QEvent) callconv(.c) bool) void {
        qtc.KSelectAction_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#event)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KSelectAction, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KSelectAction_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KSelectAction, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KSelectAction_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#eventFilter)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSelectAction `
    ///
    /// ` callback: *const fn (self: KSelectAction, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KSelectAction, callback: *const fn (KSelectAction, QObject, QEvent) callconv(.c) bool) void {
        qtc.KSelectAction_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#eventFilter)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KSelectAction, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KSelectAction_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kselectaction.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kselectaction.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#action)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` text: []const u8 `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn Action22(self: KSelectAction, text: []const u8, cs: i32) QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.KSelectAction_Action22(@ptrCast(self.ptr), text_str, @bitCast(cs)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#setCurrentAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` text: []const u8 `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn SetCurrentAction22(self: KSelectAction, text: []const u8, cs: i32) bool {
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
    /// ` self: KSelectAction `
    ///
    /// ` w: QWidget `
    ///
    pub fn SetDefaultWidget(self: KSelectAction, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QWidgetAction_SetDefaultWidget(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#defaultWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    pub fn DefaultWidget(self: KSelectAction) QWidget {
        return .{ .ptr = qtc.QWidgetAction_DefaultWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#requestWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` parent: QWidget `
    ///
    pub fn RequestWidget(self: KSelectAction, parent: anytype) QWidget {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QWidgetAction_RequestWidget(@ptrCast(self.ptr), @ptrCast(parent.ptr)) };
    }

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#releaseWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` widget: QWidget `
    ///
    pub fn ReleaseWidget(self: KSelectAction, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QWidgetAction_ReleaseWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#associatedObjects)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AssociatedObjects(self: KSelectAction, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QAction_AssociatedObjects(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kselectaction.AssociatedObjects: Memory allocation failed");
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
    /// ` self: KSelectAction `
    ///
    /// ` group: QActionGroup `
    ///
    pub fn SetActionGroup(self: KSelectAction, group: anytype) void {
        comptime _ = @TypeOf(group)._is_QActionGroup;
        qtc.QAction_SetActionGroup(@ptrCast(self.ptr), @ptrCast(group.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#actionGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    pub fn ActionGroup(self: KSelectAction) QActionGroup {
        return .{ .ptr = qtc.QAction_ActionGroup(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetIcon(self: KSelectAction, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QAction_SetIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    pub fn Icon(self: KSelectAction) QIcon {
        return .{ .ptr = qtc.QAction_Icon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: KSelectAction, text: []const u8) void {
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
    /// ` self: KSelectAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: KSelectAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAction_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kselectaction.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetIconText(self: KSelectAction, text: []const u8) void {
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
    /// ` self: KSelectAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn IconText(self: KSelectAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAction_IconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kselectaction.IconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` tip: []const u8 `
    ///
    pub fn SetToolTip(self: KSelectAction, tip: []const u8) void {
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
    /// ` self: KSelectAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: KSelectAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAction_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kselectaction.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: KSelectAction, statusTip: []const u8) void {
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
    /// ` self: KSelectAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusTip(self: KSelectAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAction_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kselectaction.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` what: []const u8 `
    ///
    pub fn SetWhatsThis(self: KSelectAction, what: []const u8) void {
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
    /// ` self: KSelectAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: KSelectAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAction_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kselectaction.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setPriority)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` priority: qaction_enums.Priority `
    ///
    pub fn SetPriority(self: KSelectAction, priority: i32) void {
        qtc.QAction_SetPriority(@ptrCast(self.ptr), @bitCast(priority));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#priority)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ## Returns:
    ///
    /// ` qaction_enums.Priority `
    ///
    pub fn Priority(self: KSelectAction) i32 {
        return qtc.QAction_Priority(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setSeparator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` b: bool `
    ///
    pub fn SetSeparator(self: KSelectAction, b: bool) void {
        qtc.QAction_SetSeparator(@ptrCast(self.ptr), b);
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isSeparator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    pub fn IsSeparator(self: KSelectAction) bool {
        return qtc.QAction_IsSeparator(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn SetShortcut(self: KSelectAction, shortcut: anytype) void {
        comptime _ = @TypeOf(shortcut)._is_QKeySequence;
        qtc.QAction_SetShortcut(@ptrCast(self.ptr), @ptrCast(shortcut.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    pub fn Shortcut(self: KSelectAction) QKeySequence {
        return .{ .ptr = qtc.QAction_Shortcut(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` shortcuts: []QKeySequence `
    ///
    pub fn SetShortcuts(self: KSelectAction, shortcuts: []QKeySequence) void {
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
    /// ` self: KSelectAction `
    ///
    /// ` shortcuts: qkeysequence_enums.StandardKey `
    ///
    pub fn SetShortcuts2(self: KSelectAction, shortcuts: i32) void {
        qtc.QAction_SetShortcuts2(@ptrCast(self.ptr), @bitCast(shortcuts));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcuts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Shortcuts(self: KSelectAction, allocator: std.mem.Allocator) []QKeySequence {
        const _arr: qtc.libqt_list = qtc.QAction_Shortcuts(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QKeySequence, _arr.len) catch @panic("kselectaction.Shortcuts: Memory allocation failed");
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
    /// ` self: KSelectAction `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn SetShortcutContext(self: KSelectAction, context: i32) void {
        qtc.QAction_SetShortcutContext(@ptrCast(self.ptr), @bitCast(context));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#shortcutContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ShortcutContext `
    ///
    pub fn ShortcutContext(self: KSelectAction) i32 {
        return qtc.QAction_ShortcutContext(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` autoRepeat: bool `
    ///
    pub fn SetAutoRepeat(self: KSelectAction, autoRepeat: bool) void {
        qtc.QAction_SetAutoRepeat(@ptrCast(self.ptr), autoRepeat);
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#autoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    pub fn AutoRepeat(self: KSelectAction) bool {
        return qtc.QAction_AutoRepeat(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: KSelectAction, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QAction_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    pub fn Font(self: KSelectAction) QFont {
        return .{ .ptr = qtc.QAction_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setCheckable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` checkable: bool `
    ///
    pub fn SetCheckable(self: KSelectAction, checkable: bool) void {
        qtc.QAction_SetCheckable(@ptrCast(self.ptr), checkable);
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isCheckable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    pub fn IsCheckable(self: KSelectAction) bool {
        return qtc.QAction_IsCheckable(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    pub fn Data(self: KSelectAction) QVariant {
        return .{ .ptr = qtc.QAction_Data(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` varVal: QVariant `
    ///
    pub fn SetData(self: KSelectAction, varVal: anytype) void {
        comptime _ = @TypeOf(varVal)._is_QVariant;
        qtc.QAction_SetData(@ptrCast(self.ptr), @ptrCast(varVal.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isChecked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    pub fn IsChecked(self: KSelectAction) bool {
        return qtc.QAction_IsChecked(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    pub fn IsEnabled(self: KSelectAction) bool {
        return qtc.QAction_IsEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    pub fn IsVisible(self: KSelectAction) bool {
        return qtc.QAction_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#activate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` event: qaction_enums.ActionEvent `
    ///
    pub fn Activate(self: KSelectAction, event: i32) void {
        qtc.QAction_Activate(@ptrCast(self.ptr), @bitCast(event));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setMenuRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` menuRole: qaction_enums.MenuRole `
    ///
    pub fn SetMenuRole(self: KSelectAction, menuRole: i32) void {
        qtc.QAction_SetMenuRole(@ptrCast(self.ptr), @bitCast(menuRole));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#menuRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ## Returns:
    ///
    /// ` qaction_enums.MenuRole `
    ///
    pub fn MenuRole(self: KSelectAction) i32 {
        return qtc.QAction_MenuRole(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setIconVisibleInMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` visible: bool `
    ///
    pub fn SetIconVisibleInMenu(self: KSelectAction, visible: bool) void {
        qtc.QAction_SetIconVisibleInMenu(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isIconVisibleInMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    pub fn IsIconVisibleInMenu(self: KSelectAction) bool {
        return qtc.QAction_IsIconVisibleInMenu(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setShortcutVisibleInContextMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` show: bool `
    ///
    pub fn SetShortcutVisibleInContextMenu(self: KSelectAction, show: bool) void {
        qtc.QAction_SetShortcutVisibleInContextMenu(@ptrCast(self.ptr), show);
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#isShortcutVisibleInContextMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    pub fn IsShortcutVisibleInContextMenu(self: KSelectAction) bool {
        return qtc.QAction_IsShortcutVisibleInContextMenu(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#showStatusText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    pub fn ShowStatusText(self: KSelectAction) bool {
        return qtc.QAction_ShowStatusText(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#trigger)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    pub fn Trigger(self: KSelectAction) void {
        qtc.QAction_Trigger(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hover)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    pub fn Hover(self: KSelectAction) void {
        qtc.QAction_Hover(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setChecked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` checked: bool `
    ///
    pub fn SetChecked(self: KSelectAction, checked: bool) void {
        qtc.QAction_SetChecked(@ptrCast(self.ptr), checked);
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    pub fn Toggle(self: KSelectAction) void {
        qtc.QAction_Toggle(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: KSelectAction, enabled: bool) void {
        qtc.QAction_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#resetEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    pub fn ResetEnabled(self: KSelectAction) void {
        qtc.QAction_ResetEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` b: bool `
    ///
    pub fn SetDisabled(self: KSelectAction, b: bool) void {
        qtc.QAction_SetDisabled(@ptrCast(self.ptr), b);
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#setVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: KSelectAction, visible: bool) void {
        qtc.QAction_SetVisible(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#changed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    pub fn Changed(self: KSelectAction) void {
        qtc.QAction_Changed(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#changed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSelectAction `
    ///
    /// ` callback: *const fn (self: KSelectAction) callconv(.c) void `
    ///
    pub fn OnChanged(self: KSelectAction, callback: *const fn (KSelectAction) callconv(.c) void) void {
        qtc.QAction_Connect_Changed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` enabled: bool `
    ///
    pub fn EnabledChanged(self: KSelectAction, enabled: bool) void {
        qtc.QAction_EnabledChanged(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSelectAction `
    ///
    /// ` callback: *const fn (self: KSelectAction, enabled: bool) callconv(.c) void `
    ///
    pub fn OnEnabledChanged(self: KSelectAction, callback: *const fn (KSelectAction, bool) callconv(.c) void) void {
        qtc.QAction_Connect_EnabledChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` checkable: bool `
    ///
    pub fn CheckableChanged(self: KSelectAction, checkable: bool) void {
        qtc.QAction_CheckableChanged(@ptrCast(self.ptr), checkable);
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSelectAction `
    ///
    /// ` callback: *const fn (self: KSelectAction, checkable: bool) callconv(.c) void `
    ///
    pub fn OnCheckableChanged(self: KSelectAction, callback: *const fn (KSelectAction, bool) callconv(.c) void) void {
        qtc.QAction_Connect_CheckableChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    pub fn VisibleChanged(self: KSelectAction) void {
        qtc.QAction_VisibleChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSelectAction `
    ///
    /// ` callback: *const fn (self: KSelectAction) callconv(.c) void `
    ///
    pub fn OnVisibleChanged(self: KSelectAction, callback: *const fn (KSelectAction) callconv(.c) void) void {
        qtc.QAction_Connect_VisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    pub fn Triggered(self: KSelectAction) void {
        qtc.QAction_Triggered(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSelectAction `
    ///
    /// ` callback: *const fn (self: KSelectAction) callconv(.c) void `
    ///
    pub fn OnTriggered(self: KSelectAction, callback: *const fn (KSelectAction) callconv(.c) void) void {
        qtc.QAction_Connect_Triggered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hovered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    pub fn Hovered(self: KSelectAction) void {
        qtc.QAction_Hovered(@ptrCast(self.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#hovered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSelectAction `
    ///
    /// ` callback: *const fn (self: KSelectAction) callconv(.c) void `
    ///
    pub fn OnHovered(self: KSelectAction, callback: *const fn (KSelectAction) callconv(.c) void) void {
        qtc.QAction_Connect_Hovered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` param1: bool `
    ///
    pub fn Toggled(self: KSelectAction, param1: bool) void {
        qtc.QAction_Toggled(@ptrCast(self.ptr), param1);
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#toggled)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSelectAction `
    ///
    /// ` callback: *const fn (self: KSelectAction, param1: bool) callconv(.c) void `
    ///
    pub fn OnToggled(self: KSelectAction, callback: *const fn (KSelectAction, bool) callconv(.c) void) void {
        qtc.QAction_Connect_Toggled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#showStatusText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` object: QObject `
    ///
    pub fn ShowStatusText1(self: KSelectAction, object: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        return qtc.QAction_ShowStatusText1(@ptrCast(self.ptr), @ptrCast(object.ptr));
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` checked: bool `
    ///
    pub fn Triggered1(self: KSelectAction, checked: bool) void {
        qtc.QAction_Triggered1(@ptrCast(self.ptr), checked);
    }

    /// Inherited from QAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaction.html#triggered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSelectAction `
    ///
    /// ` callback: *const fn (self: KSelectAction, checked: bool) callconv(.c) void `
    ///
    pub fn OnTriggered1(self: KSelectAction, callback: *const fn (KSelectAction, bool) callconv(.c) void) void {
        qtc.QAction_Connect_Triggered1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KSelectAction, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kselectaction.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KSelectAction, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    pub fn IsWidgetType(self: KSelectAction) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    pub fn IsWindowType(self: KSelectAction) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    pub fn IsQuickItemType(self: KSelectAction) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    pub fn SignalsBlocked(self: KSelectAction) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KSelectAction, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    pub fn Thread(self: KSelectAction) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KSelectAction, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KSelectAction, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KSelectAction, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KSelectAction, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KSelectAction, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KSelectAction, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kselectaction.Children: Memory allocation failed");
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
    /// ` self: KSelectAction `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KSelectAction, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KSelectAction, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KSelectAction, obj: anytype) void {
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
    /// ` self: KSelectAction `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KSelectAction, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KSelectAction `
    ///
    pub fn Disconnect3(self: KSelectAction) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KSelectAction, receiver: anytype) bool {
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
    /// ` self: KSelectAction `
    ///
    pub fn DumpObjectTree(self: KSelectAction) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    pub fn DumpObjectInfo(self: KSelectAction) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KSelectAction, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KSelectAction `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KSelectAction, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KSelectAction, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kselectaction.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kselectaction.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KSelectAction `
    ///
    pub fn BindingStorage(self: KSelectAction) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    pub fn BindingStorage2(self: KSelectAction) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    pub fn Destroyed(self: KSelectAction) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSelectAction `
    ///
    /// ` callback: *const fn (self: KSelectAction) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KSelectAction, callback: *const fn (KSelectAction) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    pub fn Parent(self: KSelectAction) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KSelectAction, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    pub fn DeleteLater(self: KSelectAction) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KSelectAction, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KSelectAction, time: i64, timerType: i32) i32 {
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
    /// ` self: KSelectAction `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KSelectAction, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KSelectAction `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KSelectAction, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KSelectAction, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KSelectAction `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KSelectAction, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KSelectAction `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KSelectAction, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KSelectAction `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KSelectAction, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSelectAction `
    ///
    /// ` callback: *const fn (self: KSelectAction, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KSelectAction, callback: *const fn (KSelectAction, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KSelectAction, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KSelectAction_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KSelectAction `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KSelectAction, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KSelectAction_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSelectAction`
    ///
    /// ` callback: *const fn (self: KSelectAction, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KSelectAction, callback: *const fn (KSelectAction, QTimerEvent) callconv(.c) void) void {
        qtc.KSelectAction_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KSelectAction, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KSelectAction_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KSelectAction `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KSelectAction, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KSelectAction_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSelectAction`
    ///
    /// ` callback: *const fn (self: KSelectAction, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KSelectAction, callback: *const fn (KSelectAction, QChildEvent) callconv(.c) void) void {
        qtc.KSelectAction_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KSelectAction, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KSelectAction_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KSelectAction `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KSelectAction, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KSelectAction_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSelectAction`
    ///
    /// ` callback: *const fn (self: KSelectAction, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KSelectAction, callback: *const fn (KSelectAction, QEvent) callconv(.c) void) void {
        qtc.KSelectAction_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KSelectAction, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSelectAction_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSelectAction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KSelectAction, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSelectAction_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSelectAction`
    ///
    /// ` callback: *const fn (self: KSelectAction, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KSelectAction, callback: *const fn (KSelectAction, QMetaMethod) callconv(.c) void) void {
        qtc.KSelectAction_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KSelectAction, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSelectAction_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSelectAction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KSelectAction, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSelectAction_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSelectAction`
    ///
    /// ` callback: *const fn (self: KSelectAction, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KSelectAction, callback: *const fn (KSelectAction, QMetaMethod) callconv(.c) void) void {
        qtc.KSelectAction_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidgetAction
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CreatedWidgets(self: KSelectAction, allocator: std.mem.Allocator) []QWidget {
        const _arr: qtc.libqt_list = qtc.KSelectAction_CreatedWidgets(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("kselectaction.CreatedWidgets: Memory allocation failed");
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
    /// ` self: KSelectAction `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperCreatedWidgets(self: KSelectAction, allocator: std.mem.Allocator) []QWidget {
        const _arr: qtc.libqt_list = qtc.KSelectAction_SuperCreatedWidgets(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("kselectaction.CreatedWidgets: Memory allocation failed");
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
    /// ` self: KSelectAction`
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QWidget `
    ///
    pub fn OnCreatedWidgets(self: KSelectAction, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.KSelectAction_OnCreatedWidgets(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    pub fn Sender(self: KSelectAction) QObject {
        return .{ .ptr = qtc.KSelectAction_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KSelectAction `
    ///
    pub fn SuperSender(self: KSelectAction) QObject {
        return .{ .ptr = qtc.KSelectAction_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSelectAction`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KSelectAction, callback: *const fn () callconv(.c) QObject) void {
        qtc.KSelectAction_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    pub fn SenderSignalIndex(self: KSelectAction) i32 {
        return qtc.KSelectAction_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KSelectAction `
    ///
    pub fn SuperSenderSignalIndex(self: KSelectAction) i32 {
        return qtc.KSelectAction_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSelectAction`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KSelectAction, callback: *const fn () callconv(.c) i32) void {
        qtc.KSelectAction_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KSelectAction, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KSelectAction_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KSelectAction `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KSelectAction, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KSelectAction_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSelectAction`
    ///
    /// ` callback: *const fn (self: KSelectAction, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KSelectAction, callback: *const fn (KSelectAction, [*:0]const u8) callconv(.c) i32) void {
        qtc.KSelectAction_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSelectAction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KSelectAction, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KSelectAction_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSelectAction `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KSelectAction, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KSelectAction_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSelectAction`
    ///
    /// ` callback: *const fn (self: KSelectAction, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KSelectAction, callback: *const fn (KSelectAction, QMetaMethod) callconv(.c) bool) void {
        qtc.KSelectAction_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KSelectAction `
    ///
    /// ` callback: *const fn (self: KSelectAction, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KSelectAction, callback: *const fn (KSelectAction, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kselectaction.html#dtor.KSelectAction)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KSelectAction `
    ///
    pub fn Delete(self: KSelectAction) void {
        qtc.KSelectAction_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kselectaction.html#public-types)
pub const enums = struct {
    pub const ToolBarMode = enum(i32) {
        pub const MenuMode: i32 = 0;
        pub const ComboBoxMode: i32 = 1;
    };
};
