const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qaction_enums = @import("../libqaction.zig").enums;
const qkeysequence_enums = @import("../libqkeysequence.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://api-staging.kde.org/ktoggleaction.html
pub const ktoggleaction = struct {
    /// New constructs a new KToggleAction object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New(parent: ?*anyopaque) QtC.KToggleAction {
        return qtc.KToggleAction_new(@ptrCast(parent));
    }

    /// New2 constructs a new KToggleAction object.
    ///
    /// ``` text: []const u8, parent: QtC.QObject ```
    pub fn New2(text: []const u8, parent: ?*anyopaque) QtC.KToggleAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.KToggleAction_new2(text_str, @ptrCast(parent));
    }

    /// New3 constructs a new KToggleAction object.
    ///
    /// ``` icon: QtC.QIcon, text: []const u8, parent: QtC.QObject ```
    pub fn New3(icon: ?*anyopaque, text: []const u8, parent: ?*anyopaque) QtC.KToggleAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.KToggleAction_new3(@ptrCast(icon), text_str, @ptrCast(parent));
    }

    /// [Qt documentation](https://api-staging.kde.org/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KToggleAction ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KToggleAction_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KToggleAction, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KToggleAction_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KToggleAction, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KToggleAction_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KToggleAction, slot: fn (self: QtC.KToggleAction, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.KToggleAction_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.KToggleAction, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KToggleAction_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KToggleAction_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktoggleaction.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/ktoggleaction.html#setCheckedState)
    ///
    /// ``` self: QtC.KToggleAction, checkedItem: QtC.KGuiItem ```
    pub fn SetCheckedState(self: ?*anyopaque, checkedItem: ?*anyopaque) void {
        qtc.KToggleAction_SetCheckedState(@ptrCast(self), @ptrCast(checkedItem));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktoggleaction.html#slotToggled)
    ///
    /// ``` self: QtC.KToggleAction, checked: bool ```
    pub fn SlotToggled(self: ?*anyopaque, checked: bool) void {
        qtc.KToggleAction_SlotToggled(@ptrCast(self), checked);
    }

    /// [Qt documentation](https://api-staging.kde.org/ktoggleaction.html#slotToggled)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KToggleAction, slot: fn (self: QtC.KToggleAction, checked: bool) callconv(.c) void ```
    pub fn OnSlotToggled(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.KToggleAction_OnSlotToggled(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktoggleaction.html#slotToggled)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KToggleAction, checked: bool ```
    pub fn QBaseSlotToggled(self: ?*anyopaque, checked: bool) void {
        qtc.KToggleAction_QBaseSlotToggled(@ptrCast(self), checked);
    }

    /// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KToggleAction_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktoggleaction.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KToggleAction_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktoggleaction.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#associatedObjects)
    ///
    /// ``` self: QtC.KToggleAction, allocator: std.mem.Allocator ```
    pub fn AssociatedObjects(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QAction_AssociatedObjects(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("ktoggleaction.AssociatedObjects: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setActionGroup)
    ///
    /// ``` self: QtC.KToggleAction, group: QtC.QActionGroup ```
    pub fn SetActionGroup(self: ?*anyopaque, group: ?*anyopaque) void {
        qtc.QAction_SetActionGroup(@ptrCast(self), @ptrCast(group));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#actionGroup)
    ///
    /// ``` self: QtC.KToggleAction ```
    pub fn ActionGroup(self: ?*anyopaque) QtC.QActionGroup {
        return qtc.QAction_ActionGroup(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setIcon)
    ///
    /// ``` self: QtC.KToggleAction, icon: QtC.QIcon ```
    pub fn SetIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QAction_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#icon)
    ///
    /// ``` self: QtC.KToggleAction ```
    pub fn Icon(self: ?*anyopaque) QtC.QIcon {
        return qtc.QAction_Icon(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setText)
    ///
    /// ``` self: QtC.KToggleAction, text: []const u8 ```
    pub fn SetText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QAction_SetText(@ptrCast(self), text_str);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#text)
    ///
    /// ``` self: QtC.KToggleAction, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAction_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktoggleaction.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setIconText)
    ///
    /// ``` self: QtC.KToggleAction, text: []const u8 ```
    pub fn SetIconText(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QAction_SetIconText(@ptrCast(self), text_str);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#iconText)
    ///
    /// ``` self: QtC.KToggleAction, allocator: std.mem.Allocator ```
    pub fn IconText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAction_IconText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktoggleaction.IconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setToolTip)
    ///
    /// ``` self: QtC.KToggleAction, tip: []const u8 ```
    pub fn SetToolTip(self: ?*anyopaque, tip: []const u8) void {
        const tip_str = qtc.libqt_string{
            .len = tip.len,
            .data = tip.ptr,
        };
        qtc.QAction_SetToolTip(@ptrCast(self), tip_str);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#toolTip)
    ///
    /// ``` self: QtC.KToggleAction, allocator: std.mem.Allocator ```
    pub fn ToolTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAction_ToolTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktoggleaction.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setStatusTip)
    ///
    /// ``` self: QtC.KToggleAction, statusTip: []const u8 ```
    pub fn SetStatusTip(self: ?*anyopaque, statusTip: []const u8) void {
        const statusTip_str = qtc.libqt_string{
            .len = statusTip.len,
            .data = statusTip.ptr,
        };
        qtc.QAction_SetStatusTip(@ptrCast(self), statusTip_str);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#statusTip)
    ///
    /// ``` self: QtC.KToggleAction, allocator: std.mem.Allocator ```
    pub fn StatusTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAction_StatusTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktoggleaction.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setWhatsThis)
    ///
    /// ``` self: QtC.KToggleAction, what: []const u8 ```
    pub fn SetWhatsThis(self: ?*anyopaque, what: []const u8) void {
        const what_str = qtc.libqt_string{
            .len = what.len,
            .data = what.ptr,
        };
        qtc.QAction_SetWhatsThis(@ptrCast(self), what_str);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#whatsThis)
    ///
    /// ``` self: QtC.KToggleAction, allocator: std.mem.Allocator ```
    pub fn WhatsThis(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAction_WhatsThis(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktoggleaction.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setPriority)
    ///
    /// ``` self: QtC.KToggleAction, priority: qaction_enums.Priority ```
    pub fn SetPriority(self: ?*anyopaque, priority: i32) void {
        qtc.QAction_SetPriority(@ptrCast(self), @intCast(priority));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#priority)
    ///
    /// ``` self: QtC.KToggleAction ```
    ///
    /// Returns: ``` qaction_enums.Priority ```
    pub fn Priority(self: ?*anyopaque) i32 {
        return qtc.QAction_Priority(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setSeparator)
    ///
    /// ``` self: QtC.KToggleAction, b: bool ```
    pub fn SetSeparator(self: ?*anyopaque, b: bool) void {
        qtc.QAction_SetSeparator(@ptrCast(self), b);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isSeparator)
    ///
    /// ``` self: QtC.KToggleAction ```
    pub fn IsSeparator(self: ?*anyopaque) bool {
        return qtc.QAction_IsSeparator(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcut)
    ///
    /// ``` self: QtC.KToggleAction, shortcut: QtC.QKeySequence ```
    pub fn SetShortcut(self: ?*anyopaque, shortcut: ?*anyopaque) void {
        qtc.QAction_SetShortcut(@ptrCast(self), @ptrCast(shortcut));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#shortcut)
    ///
    /// ``` self: QtC.KToggleAction ```
    pub fn Shortcut(self: ?*anyopaque) QtC.QKeySequence {
        return qtc.QAction_Shortcut(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
    ///
    /// ``` self: QtC.KToggleAction, shortcuts: []QtC.QKeySequence ```
    pub fn SetShortcuts(self: ?*anyopaque, shortcuts: []QtC.QKeySequence) void {
        const shortcuts_list = qtc.libqt_list{
            .len = shortcuts.len,
            .data = @ptrCast(shortcuts.ptr),
        };
        qtc.QAction_SetShortcuts(@ptrCast(self), shortcuts_list);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
    ///
    /// ``` self: QtC.KToggleAction, shortcuts: qkeysequence_enums.StandardKey ```
    pub fn SetShortcuts2(self: ?*anyopaque, shortcuts: i32) void {
        qtc.QAction_SetShortcuts2(@ptrCast(self), @intCast(shortcuts));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#shortcuts)
    ///
    /// ``` self: QtC.KToggleAction, allocator: std.mem.Allocator ```
    pub fn Shortcuts(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.QAction_Shortcuts(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("ktoggleaction.Shortcuts: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcutContext)
    ///
    /// ``` self: QtC.KToggleAction, context: qnamespace_enums.ShortcutContext ```
    pub fn SetShortcutContext(self: ?*anyopaque, context: i32) void {
        qtc.QAction_SetShortcutContext(@ptrCast(self), @intCast(context));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#shortcutContext)
    ///
    /// ``` self: QtC.KToggleAction ```
    ///
    /// Returns: ``` qnamespace_enums.ShortcutContext ```
    pub fn ShortcutContext(self: ?*anyopaque) i32 {
        return qtc.QAction_ShortcutContext(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setAutoRepeat)
    ///
    /// ``` self: QtC.KToggleAction, autoRepeat: bool ```
    pub fn SetAutoRepeat(self: ?*anyopaque, autoRepeat: bool) void {
        qtc.QAction_SetAutoRepeat(@ptrCast(self), autoRepeat);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#autoRepeat)
    ///
    /// ``` self: QtC.KToggleAction ```
    pub fn AutoRepeat(self: ?*anyopaque) bool {
        return qtc.QAction_AutoRepeat(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setFont)
    ///
    /// ``` self: QtC.KToggleAction, font: QtC.QFont ```
    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QAction_SetFont(@ptrCast(self), @ptrCast(font));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#font)
    ///
    /// ``` self: QtC.KToggleAction ```
    pub fn Font(self: ?*anyopaque) QtC.QFont {
        return qtc.QAction_Font(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setCheckable)
    ///
    /// ``` self: QtC.KToggleAction, checkable: bool ```
    pub fn SetCheckable(self: ?*anyopaque, checkable: bool) void {
        qtc.QAction_SetCheckable(@ptrCast(self), checkable);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isCheckable)
    ///
    /// ``` self: QtC.KToggleAction ```
    pub fn IsCheckable(self: ?*anyopaque) bool {
        return qtc.QAction_IsCheckable(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#data)
    ///
    /// ``` self: QtC.KToggleAction ```
    pub fn Data(self: ?*anyopaque) QtC.QVariant {
        return qtc.QAction_Data(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setData)
    ///
    /// ``` self: QtC.KToggleAction, varVal: QtC.QVariant ```
    pub fn SetData(self: ?*anyopaque, varVal: ?*anyopaque) void {
        qtc.QAction_SetData(@ptrCast(self), @ptrCast(varVal));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isChecked)
    ///
    /// ``` self: QtC.KToggleAction ```
    pub fn IsChecked(self: ?*anyopaque) bool {
        return qtc.QAction_IsChecked(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isEnabled)
    ///
    /// ``` self: QtC.KToggleAction ```
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return qtc.QAction_IsEnabled(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isVisible)
    ///
    /// ``` self: QtC.KToggleAction ```
    pub fn IsVisible(self: ?*anyopaque) bool {
        return qtc.QAction_IsVisible(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#activate)
    ///
    /// ``` self: QtC.KToggleAction, event: qaction_enums.ActionEvent ```
    pub fn Activate(self: ?*anyopaque, event: i32) void {
        qtc.QAction_Activate(@ptrCast(self), @intCast(event));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setMenuRole)
    ///
    /// ``` self: QtC.KToggleAction, menuRole: qaction_enums.MenuRole ```
    pub fn SetMenuRole(self: ?*anyopaque, menuRole: i32) void {
        qtc.QAction_SetMenuRole(@ptrCast(self), @intCast(menuRole));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#menuRole)
    ///
    /// ``` self: QtC.KToggleAction ```
    ///
    /// Returns: ``` qaction_enums.MenuRole ```
    pub fn MenuRole(self: ?*anyopaque) i32 {
        return qtc.QAction_MenuRole(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setIconVisibleInMenu)
    ///
    /// ``` self: QtC.KToggleAction, visible: bool ```
    pub fn SetIconVisibleInMenu(self: ?*anyopaque, visible: bool) void {
        qtc.QAction_SetIconVisibleInMenu(@ptrCast(self), visible);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isIconVisibleInMenu)
    ///
    /// ``` self: QtC.KToggleAction ```
    pub fn IsIconVisibleInMenu(self: ?*anyopaque) bool {
        return qtc.QAction_IsIconVisibleInMenu(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcutVisibleInContextMenu)
    ///
    /// ``` self: QtC.KToggleAction, show: bool ```
    pub fn SetShortcutVisibleInContextMenu(self: ?*anyopaque, show: bool) void {
        qtc.QAction_SetShortcutVisibleInContextMenu(@ptrCast(self), show);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isShortcutVisibleInContextMenu)
    ///
    /// ``` self: QtC.KToggleAction ```
    pub fn IsShortcutVisibleInContextMenu(self: ?*anyopaque) bool {
        return qtc.QAction_IsShortcutVisibleInContextMenu(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#showStatusText)
    ///
    /// ``` self: QtC.KToggleAction ```
    pub fn ShowStatusText(self: ?*anyopaque) bool {
        return qtc.QAction_ShowStatusText(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#trigger)
    ///
    /// ``` self: QtC.KToggleAction ```
    pub fn Trigger(self: ?*anyopaque) void {
        qtc.QAction_Trigger(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#hover)
    ///
    /// ``` self: QtC.KToggleAction ```
    pub fn Hover(self: ?*anyopaque) void {
        qtc.QAction_Hover(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setChecked)
    ///
    /// ``` self: QtC.KToggleAction, checked: bool ```
    pub fn SetChecked(self: ?*anyopaque, checked: bool) void {
        qtc.QAction_SetChecked(@ptrCast(self), checked);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#toggle)
    ///
    /// ``` self: QtC.KToggleAction ```
    pub fn Toggle(self: ?*anyopaque) void {
        qtc.QAction_Toggle(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setEnabled)
    ///
    /// ``` self: QtC.KToggleAction, enabled: bool ```
    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QAction_SetEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#resetEnabled)
    ///
    /// ``` self: QtC.KToggleAction ```
    pub fn ResetEnabled(self: ?*anyopaque) void {
        qtc.QAction_ResetEnabled(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setDisabled)
    ///
    /// ``` self: QtC.KToggleAction, b: bool ```
    pub fn SetDisabled(self: ?*anyopaque, b: bool) void {
        qtc.QAction_SetDisabled(@ptrCast(self), b);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setVisible)
    ///
    /// ``` self: QtC.KToggleAction, visible: bool ```
    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QAction_SetVisible(@ptrCast(self), visible);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#changed)
    ///
    /// ``` self: QtC.KToggleAction ```
    pub fn Changed(self: ?*anyopaque) void {
        qtc.QAction_Changed(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#changed)
    ///
    /// ``` self: QtC.KToggleAction, slot: fn (self: QtC.KToggleAction) callconv(.c) void ```
    pub fn OnChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAction_Connect_Changed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
    ///
    /// ``` self: QtC.KToggleAction, enabled: bool ```
    pub fn EnabledChanged(self: ?*anyopaque, enabled: bool) void {
        qtc.QAction_EnabledChanged(@ptrCast(self), enabled);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
    ///
    /// ``` self: QtC.KToggleAction, slot: fn (self: QtC.KToggleAction, enabled: bool) callconv(.c) void ```
    pub fn OnEnabledChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAction_Connect_EnabledChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
    ///
    /// ``` self: QtC.KToggleAction, checkable: bool ```
    pub fn CheckableChanged(self: ?*anyopaque, checkable: bool) void {
        qtc.QAction_CheckableChanged(@ptrCast(self), checkable);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
    ///
    /// ``` self: QtC.KToggleAction, slot: fn (self: QtC.KToggleAction, checkable: bool) callconv(.c) void ```
    pub fn OnCheckableChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAction_Connect_CheckableChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
    ///
    /// ``` self: QtC.KToggleAction ```
    pub fn VisibleChanged(self: ?*anyopaque) void {
        qtc.QAction_VisibleChanged(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
    ///
    /// ``` self: QtC.KToggleAction, slot: fn (self: QtC.KToggleAction) callconv(.c) void ```
    pub fn OnVisibleChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAction_Connect_VisibleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#triggered)
    ///
    /// ``` self: QtC.KToggleAction ```
    pub fn Triggered(self: ?*anyopaque) void {
        qtc.QAction_Triggered(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#triggered)
    ///
    /// ``` self: QtC.KToggleAction, slot: fn (self: QtC.KToggleAction) callconv(.c) void ```
    pub fn OnTriggered(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAction_Connect_Triggered(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#hovered)
    ///
    /// ``` self: QtC.KToggleAction ```
    pub fn Hovered(self: ?*anyopaque) void {
        qtc.QAction_Hovered(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#hovered)
    ///
    /// ``` self: QtC.KToggleAction, slot: fn (self: QtC.KToggleAction) callconv(.c) void ```
    pub fn OnHovered(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAction_Connect_Hovered(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#toggled)
    ///
    /// ``` self: QtC.KToggleAction, param1: bool ```
    pub fn Toggled(self: ?*anyopaque, param1: bool) void {
        qtc.QAction_Toggled(@ptrCast(self), param1);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#toggled)
    ///
    /// ``` self: QtC.KToggleAction, slot: fn (self: QtC.KToggleAction, param1: bool) callconv(.c) void ```
    pub fn OnToggled(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAction_Connect_Toggled(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#showStatusText)
    ///
    /// ``` self: QtC.KToggleAction, object: QtC.QObject ```
    pub fn ShowStatusText1(self: ?*anyopaque, object: ?*anyopaque) bool {
        return qtc.QAction_ShowStatusText1(@ptrCast(self), @ptrCast(object));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#triggered)
    ///
    /// ``` self: QtC.KToggleAction, checked: bool ```
    pub fn Triggered1(self: ?*anyopaque, checked: bool) void {
        qtc.QAction_Triggered1(@ptrCast(self), checked);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#triggered)
    ///
    /// ``` self: QtC.KToggleAction, slot: fn (self: QtC.KToggleAction, checked: bool) callconv(.c) void ```
    pub fn OnTriggered1(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAction_Connect_Triggered1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.KToggleAction, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktoggleaction.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KToggleAction, name: []const u8 ```
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
    /// ``` self: QtC.KToggleAction ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KToggleAction ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KToggleAction ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KToggleAction ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KToggleAction, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KToggleAction ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KToggleAction, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KToggleAction, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KToggleAction, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KToggleAction, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KToggleAction, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("ktoggleaction.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.KToggleAction, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KToggleAction, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KToggleAction, obj: QtC.QObject ```
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
    /// ``` self: QtC.KToggleAction, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.KToggleAction ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KToggleAction ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KToggleAction, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KToggleAction, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KToggleAction, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("ktoggleaction.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ktoggleaction.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KToggleAction ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KToggleAction ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KToggleAction ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KToggleAction, slot: fn (self: QtC.KToggleAction) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KToggleAction ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KToggleAction, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KToggleAction ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KToggleAction, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KToggleAction, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.KToggleAction, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KToggleAction, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KToggleAction, slot: fn (self: QtC.KToggleAction, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KToggleAction, param1: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.KToggleAction_Event(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KToggleAction, param1: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.KToggleAction_QBaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KToggleAction, slot: fn (self: QtC.KToggleAction, param1: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KToggleAction_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KToggleAction, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KToggleAction_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KToggleAction, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KToggleAction_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KToggleAction, slot: fn (self: QtC.KToggleAction, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KToggleAction_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KToggleAction, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KToggleAction_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KToggleAction, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KToggleAction_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KToggleAction, slot: fn (self: QtC.KToggleAction, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KToggleAction_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KToggleAction, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KToggleAction_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KToggleAction, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KToggleAction_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KToggleAction, slot: fn (self: QtC.KToggleAction, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KToggleAction_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KToggleAction, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KToggleAction_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KToggleAction, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KToggleAction_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KToggleAction, slot: fn (self: QtC.KToggleAction, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KToggleAction_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KToggleAction, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KToggleAction_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KToggleAction, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KToggleAction_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KToggleAction, slot: fn (self: QtC.KToggleAction, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KToggleAction_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KToggleAction, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KToggleAction_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KToggleAction, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KToggleAction_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KToggleAction, slot: fn (self: QtC.KToggleAction, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KToggleAction_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KToggleAction ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KToggleAction_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KToggleAction ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KToggleAction_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KToggleAction, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.KToggleAction_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KToggleAction ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KToggleAction_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KToggleAction ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KToggleAction_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KToggleAction, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.KToggleAction_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KToggleAction, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KToggleAction_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KToggleAction, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KToggleAction_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KToggleAction, slot: fn (self: QtC.KToggleAction, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KToggleAction_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KToggleAction, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KToggleAction_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KToggleAction, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KToggleAction_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KToggleAction, slot: fn (self: QtC.KToggleAction, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KToggleAction_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KToggleAction, slot: fn (self: QtC.KToggleAction, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/ktoggleaction.html#dtor.KToggleAction)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KToggleAction ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KToggleAction_Delete(@ptrCast(self));
    }
};
