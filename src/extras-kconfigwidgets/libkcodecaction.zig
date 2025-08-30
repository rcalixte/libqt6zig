const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kselectaction_enums = @import("../extras-kwidgetsaddons/libkselectaction.zig").enums;
const qaction_enums = @import("../libqaction.zig").enums;
const qkeysequence_enums = @import("../libqkeysequence.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qtoolbutton_enums = @import("../libqtoolbutton.zig").enums;
const std = @import("std");

/// https://api-staging.kde.org/kcodecaction.html
pub const kcodecaction = struct {
    /// New constructs a new KCodecAction object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New(parent: ?*anyopaque) QtC.KCodecAction {
        return qtc.KCodecAction_new(@ptrCast(parent));
    }

    /// New2 constructs a new KCodecAction object.
    ///
    /// ``` text: []const u8, parent: QtC.QObject ```
    pub fn New2(text: []const u8, parent: ?*anyopaque) QtC.KCodecAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.KCodecAction_new2(text_str, @ptrCast(parent));
    }

    /// New3 constructs a new KCodecAction object.
    ///
    /// ``` icon: QtC.QIcon, text: []const u8, parent: QtC.QObject ```
    pub fn New3(icon: ?*anyopaque, text: []const u8, parent: ?*anyopaque) QtC.KCodecAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.KCodecAction_new3(@ptrCast(icon), text_str, @ptrCast(parent));
    }

    /// New4 constructs a new KCodecAction object.
    ///
    /// ``` parent: QtC.QObject, showAutoOptions: bool ```
    pub fn New4(parent: ?*anyopaque, showAutoOptions: bool) QtC.KCodecAction {
        return qtc.KCodecAction_new4(@ptrCast(parent), showAutoOptions);
    }

    /// New5 constructs a new KCodecAction object.
    ///
    /// ``` text: []const u8, parent: QtC.QObject, showAutoOptions: bool ```
    pub fn New5(text: []const u8, parent: ?*anyopaque, showAutoOptions: bool) QtC.KCodecAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.KCodecAction_new5(text_str, @ptrCast(parent), showAutoOptions);
    }

    /// New6 constructs a new KCodecAction object.
    ///
    /// ``` icon: QtC.QIcon, text: []const u8, parent: QtC.QObject, showAutoOptions: bool ```
    pub fn New6(icon: ?*anyopaque, text: []const u8, parent: ?*anyopaque, showAutoOptions: bool) QtC.KCodecAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.KCodecAction_new6(@ptrCast(icon), text_str, @ptrCast(parent), showAutoOptions);
    }

    /// [Qt documentation](https://api-staging.kde.org/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KCodecAction ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KCodecAction_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KCodecAction, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KCodecAction_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KCodecAction, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KCodecAction_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KCodecAction, slot: fn (self: QtC.KCodecAction, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.KCodecAction_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.KCodecAction, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KCodecAction_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KCodecAction_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcodecaction.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kcodecaction.html#currentCodecName)
    ///
    /// ``` self: QtC.KCodecAction, allocator: std.mem.Allocator ```
    pub fn CurrentCodecName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KCodecAction_CurrentCodecName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcodecaction.CurrentCodecName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kcodecaction.html#setCurrentCodec)
    ///
    /// ``` self: QtC.KCodecAction, codecName: []const u8 ```
    pub fn SetCurrentCodec(self: ?*anyopaque, codecName: []const u8) bool {
        const codecName_str = qtc.libqt_string{
            .len = codecName.len,
            .data = codecName.ptr,
        };
        return qtc.KCodecAction_SetCurrentCodec(@ptrCast(self), codecName_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kcodecaction.html#codecNameTriggered)
    ///
    /// ``` self: QtC.KCodecAction, name: []u8 ```
    pub fn CodecNameTriggered(self: ?*anyopaque, name: []u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KCodecAction_CodecNameTriggered(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kcodecaction.html#codecNameTriggered)
    ///
    /// ``` self: QtC.KCodecAction, slot: fn (self: QtC.KCodecAction, name: [*:0]u8) callconv(.c) void ```
    pub fn OnCodecNameTriggered(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]u8) callconv(.c) void) void {
        qtc.KCodecAction_Connect_CodecNameTriggered(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcodecaction.html#defaultItemTriggered)
    ///
    /// ``` self: QtC.KCodecAction ```
    pub fn DefaultItemTriggered(self: ?*anyopaque) void {
        qtc.KCodecAction_DefaultItemTriggered(@ptrCast(self));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcodecaction.html#defaultItemTriggered)
    ///
    /// ``` self: QtC.KCodecAction, slot: fn (self: QtC.KCodecAction) callconv(.c) void ```
    pub fn OnDefaultItemTriggered(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.KCodecAction_Connect_DefaultItemTriggered(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcodecaction.html#slotActionTriggered)
    ///
    /// ``` self: QtC.KCodecAction, param1: QtC.QAction ```
    pub fn SlotActionTriggered(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KCodecAction_SlotActionTriggered(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcodecaction.html#slotActionTriggered)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KCodecAction, slot: fn (self: QtC.KCodecAction, param1: QtC.QAction) callconv(.c) void ```
    pub fn OnSlotActionTriggered(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCodecAction_OnSlotActionTriggered(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcodecaction.html#slotActionTriggered)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KCodecAction, param1: QtC.QAction ```
    pub fn QBaseSlotActionTriggered(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KCodecAction_QBaseSlotActionTriggered(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KCodecAction_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcodecaction.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KCodecAction_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcodecaction.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#toolBarMode)
    ///
    /// ``` self: QtC.KCodecAction ```
    ///
    /// Returns: ``` kselectaction_enums.ToolBarMode ```
    pub fn ToolBarMode(self: ?*anyopaque) i32 {
        return qtc.KSelectAction_ToolBarMode(@ptrCast(self));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#setToolBarMode)
    ///
    /// ``` self: QtC.KCodecAction, mode: kselectaction_enums.ToolBarMode ```
    pub fn SetToolBarMode(self: ?*anyopaque, mode: i32) void {
        qtc.KSelectAction_SetToolBarMode(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#toolButtonPopupMode)
    ///
    /// ``` self: QtC.KCodecAction ```
    ///
    /// Returns: ``` qtoolbutton_enums.ToolButtonPopupMode ```
    pub fn ToolButtonPopupMode(self: ?*anyopaque) i32 {
        return qtc.KSelectAction_ToolButtonPopupMode(@ptrCast(self));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#setToolButtonPopupMode)
    ///
    /// ``` self: QtC.KCodecAction, mode: qtoolbutton_enums.ToolButtonPopupMode ```
    pub fn SetToolButtonPopupMode(self: ?*anyopaque, mode: i32) void {
        qtc.KSelectAction_SetToolButtonPopupMode(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#selectableActionGroup)
    ///
    /// ``` self: QtC.KCodecAction ```
    pub fn SelectableActionGroup(self: ?*anyopaque) QtC.QActionGroup {
        return qtc.KSelectAction_SelectableActionGroup(@ptrCast(self));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#currentAction)
    ///
    /// ``` self: QtC.KCodecAction ```
    pub fn CurrentAction(self: ?*anyopaque) QtC.QAction {
        return qtc.KSelectAction_CurrentAction(@ptrCast(self));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#currentItem)
    ///
    /// ``` self: QtC.KCodecAction ```
    pub fn CurrentItem(self: ?*anyopaque) i32 {
        return qtc.KSelectAction_CurrentItem(@ptrCast(self));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#currentText)
    ///
    /// ``` self: QtC.KCodecAction, allocator: std.mem.Allocator ```
    pub fn CurrentText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KSelectAction_CurrentText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcodecaction.CurrentText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#actions)
    ///
    /// ``` self: QtC.KCodecAction, allocator: std.mem.Allocator ```
    pub fn Actions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAction {
        const _arr: qtc.libqt_list = qtc.KSelectAction_Actions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAction, _arr.len) catch @panic("kcodecaction.Actions: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#action)
    ///
    /// ``` self: QtC.KCodecAction, index: i32 ```
    pub fn Action(self: ?*anyopaque, index: i32) QtC.QAction {
        return qtc.KSelectAction_Action(@ptrCast(self), @intCast(index));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#action)
    ///
    /// ``` self: QtC.KCodecAction, text: []const u8 ```
    pub fn Action2(self: ?*anyopaque, text: []const u8) QtC.QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KSelectAction_Action2(@ptrCast(self), text_str);
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#setCurrentAction)
    ///
    /// ``` self: QtC.KCodecAction, action: QtC.QAction ```
    pub fn SetCurrentAction(self: ?*anyopaque, action: ?*anyopaque) bool {
        return qtc.KSelectAction_SetCurrentAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#setCurrentItem)
    ///
    /// ``` self: QtC.KCodecAction, index: i32 ```
    pub fn SetCurrentItem(self: ?*anyopaque, index: i32) bool {
        return qtc.KSelectAction_SetCurrentItem(@ptrCast(self), @intCast(index));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#setCurrentAction)
    ///
    /// ``` self: QtC.KCodecAction, text: []const u8 ```
    pub fn SetCurrentAction2(self: ?*anyopaque, text: []const u8) bool {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KSelectAction_SetCurrentAction2(@ptrCast(self), text_str);
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#addAction)
    ///
    /// ``` self: QtC.KCodecAction, action: QtC.QAction ```
    pub fn AddAction(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.KSelectAction_AddAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#addAction)
    ///
    /// ``` self: QtC.KCodecAction, text: []const u8 ```
    pub fn AddAction2(self: ?*anyopaque, text: []const u8) QtC.QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KSelectAction_AddAction2(@ptrCast(self), text_str);
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#addAction)
    ///
    /// ``` self: QtC.KCodecAction, icon: QtC.QIcon, text: []const u8 ```
    pub fn AddAction3(self: ?*anyopaque, icon: ?*anyopaque, text: []const u8) QtC.QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KSelectAction_AddAction3(@ptrCast(self), @ptrCast(icon), text_str);
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#setItems)
    ///
    /// ``` self: QtC.KCodecAction, lst: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetItems(self: ?*anyopaque, lst: [][]const u8, allocator: std.mem.Allocator) void {
        var lst_arr = allocator.alloc(qtc.libqt_string, lst.len) catch @panic("kcodecaction.SetItems: Memory allocation failed");
        defer allocator.free(lst_arr);
        for (lst, 0..lst.len) |item, i| {
            lst_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const lst_list = qtc.libqt_list{
            .len = lst.len,
            .data = lst_arr.ptr,
        };
        qtc.KSelectAction_SetItems(@ptrCast(self), lst_list);
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#items)
    ///
    /// ``` self: QtC.KCodecAction, allocator: std.mem.Allocator ```
    pub fn Items(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KSelectAction_Items(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kcodecaction.Items: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kcodecaction.Items: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#isEditable)
    ///
    /// ``` self: QtC.KCodecAction ```
    pub fn IsEditable(self: ?*anyopaque) bool {
        return qtc.KSelectAction_IsEditable(@ptrCast(self));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#setEditable)
    ///
    /// ``` self: QtC.KCodecAction, editable: bool ```
    pub fn SetEditable(self: ?*anyopaque, editable: bool) void {
        qtc.KSelectAction_SetEditable(@ptrCast(self), editable);
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#comboWidth)
    ///
    /// ``` self: QtC.KCodecAction ```
    pub fn ComboWidth(self: ?*anyopaque) i32 {
        return qtc.KSelectAction_ComboWidth(@ptrCast(self));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#setComboWidth)
    ///
    /// ``` self: QtC.KCodecAction, width: i32 ```
    pub fn SetComboWidth(self: ?*anyopaque, width: i32) void {
        qtc.KSelectAction_SetComboWidth(@ptrCast(self), @intCast(width));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#setMaxComboViewCount)
    ///
    /// ``` self: QtC.KCodecAction, n: i32 ```
    pub fn SetMaxComboViewCount(self: ?*anyopaque, n: i32) void {
        qtc.KSelectAction_SetMaxComboViewCount(@ptrCast(self), @intCast(n));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#clear)
    ///
    /// ``` self: QtC.KCodecAction ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.KSelectAction_Clear(@ptrCast(self));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#removeAllActions)
    ///
    /// ``` self: QtC.KCodecAction ```
    pub fn RemoveAllActions(self: ?*anyopaque) void {
        qtc.KSelectAction_RemoveAllActions(@ptrCast(self));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#setMenuAccelsEnabled)
    ///
    /// ``` self: QtC.KCodecAction, b: bool ```
    pub fn SetMenuAccelsEnabled(self: ?*anyopaque, b: bool) void {
        qtc.KSelectAction_SetMenuAccelsEnabled(@ptrCast(self), b);
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#menuAccelsEnabled)
    ///
    /// ``` self: QtC.KCodecAction ```
    pub fn MenuAccelsEnabled(self: ?*anyopaque) bool {
        return qtc.KSelectAction_MenuAccelsEnabled(@ptrCast(self));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#changeItem)
    ///
    /// ``` self: QtC.KCodecAction, index: i32, text: []const u8 ```
    pub fn ChangeItem(self: ?*anyopaque, index: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KSelectAction_ChangeItem(@ptrCast(self), @intCast(index), text_str);
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#actionTriggered)
    ///
    /// ``` self: QtC.KCodecAction, action: QtC.QAction ```
    pub fn ActionTriggered(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.KSelectAction_ActionTriggered(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#actionTriggered)
    ///
    /// ``` self: QtC.KCodecAction, slot: fn (self: QtC.KCodecAction, action: QtC.QAction) callconv(.c) void ```
    pub fn OnActionTriggered(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KSelectAction_Connect_ActionTriggered(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#indexTriggered)
    ///
    /// ``` self: QtC.KCodecAction, index: i32 ```
    pub fn IndexTriggered(self: ?*anyopaque, index: i32) void {
        qtc.KSelectAction_IndexTriggered(@ptrCast(self), @intCast(index));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#indexTriggered)
    ///
    /// ``` self: QtC.KCodecAction, slot: fn (self: QtC.KCodecAction, index: i32) callconv(.c) void ```
    pub fn OnIndexTriggered(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.KSelectAction_Connect_IndexTriggered(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#textTriggered)
    ///
    /// ``` self: QtC.KCodecAction, text: []const u8 ```
    pub fn TextTriggered(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KSelectAction_TextTriggered(@ptrCast(self), text_str);
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#textTriggered)
    ///
    /// ``` self: QtC.KCodecAction, slot: fn (self: QtC.KCodecAction, text: [*:0]const u8) callconv(.c) void ```
    pub fn OnTextTriggered(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KSelectAction_Connect_TextTriggered(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#action)
    ///
    /// ``` self: QtC.KCodecAction, text: []const u8, cs: qnamespace_enums.CaseSensitivity ```
    pub fn Action22(self: ?*anyopaque, text: []const u8, cs: i32) QtC.QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KSelectAction_Action22(@ptrCast(self), text_str, @intCast(cs));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#setCurrentAction)
    ///
    /// ``` self: QtC.KCodecAction, text: []const u8, cs: qnamespace_enums.CaseSensitivity ```
    pub fn SetCurrentAction22(self: ?*anyopaque, text: []const u8, cs: i32) bool {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KSelectAction_SetCurrentAction22(@ptrCast(self), text_str, @intCast(cs));
    }

    /// Inherited from QWidgetAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#setDefaultWidget)
    ///
    /// ``` self: QtC.KCodecAction, w: QtC.QWidget ```
    pub fn SetDefaultWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QWidgetAction_SetDefaultWidget(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QWidgetAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#defaultWidget)
    ///
    /// ``` self: QtC.KCodecAction ```
    pub fn DefaultWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidgetAction_DefaultWidget(@ptrCast(self));
    }

    /// Inherited from QWidgetAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#requestWidget)
    ///
    /// ``` self: QtC.KCodecAction, parent: QtC.QWidget ```
    pub fn RequestWidget(self: ?*anyopaque, parent: ?*anyopaque) QtC.QWidget {
        return qtc.QWidgetAction_RequestWidget(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QWidgetAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#releaseWidget)
    ///
    /// ``` self: QtC.KCodecAction, widget: QtC.QWidget ```
    pub fn ReleaseWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QWidgetAction_ReleaseWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#associatedObjects)
    ///
    /// ``` self: QtC.KCodecAction, allocator: std.mem.Allocator ```
    pub fn AssociatedObjects(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QAction_AssociatedObjects(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("kcodecaction.AssociatedObjects: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setActionGroup)
    ///
    /// ``` self: QtC.KCodecAction, group: QtC.QActionGroup ```
    pub fn SetActionGroup(self: ?*anyopaque, group: ?*anyopaque) void {
        qtc.QAction_SetActionGroup(@ptrCast(self), @ptrCast(group));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#actionGroup)
    ///
    /// ``` self: QtC.KCodecAction ```
    pub fn ActionGroup(self: ?*anyopaque) QtC.QActionGroup {
        return qtc.QAction_ActionGroup(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setIcon)
    ///
    /// ``` self: QtC.KCodecAction, icon: QtC.QIcon ```
    pub fn SetIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QAction_SetIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#icon)
    ///
    /// ``` self: QtC.KCodecAction ```
    pub fn Icon(self: ?*anyopaque) QtC.QIcon {
        return qtc.QAction_Icon(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setText)
    ///
    /// ``` self: QtC.KCodecAction, text: []const u8 ```
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
    /// ``` self: QtC.KCodecAction, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAction_Text(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcodecaction.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setIconText)
    ///
    /// ``` self: QtC.KCodecAction, text: []const u8 ```
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
    /// ``` self: QtC.KCodecAction, allocator: std.mem.Allocator ```
    pub fn IconText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAction_IconText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcodecaction.IconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setToolTip)
    ///
    /// ``` self: QtC.KCodecAction, tip: []const u8 ```
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
    /// ``` self: QtC.KCodecAction, allocator: std.mem.Allocator ```
    pub fn ToolTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAction_ToolTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcodecaction.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setStatusTip)
    ///
    /// ``` self: QtC.KCodecAction, statusTip: []const u8 ```
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
    /// ``` self: QtC.KCodecAction, allocator: std.mem.Allocator ```
    pub fn StatusTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAction_StatusTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcodecaction.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setWhatsThis)
    ///
    /// ``` self: QtC.KCodecAction, what: []const u8 ```
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
    /// ``` self: QtC.KCodecAction, allocator: std.mem.Allocator ```
    pub fn WhatsThis(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAction_WhatsThis(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcodecaction.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setPriority)
    ///
    /// ``` self: QtC.KCodecAction, priority: qaction_enums.Priority ```
    pub fn SetPriority(self: ?*anyopaque, priority: i32) void {
        qtc.QAction_SetPriority(@ptrCast(self), @intCast(priority));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#priority)
    ///
    /// ``` self: QtC.KCodecAction ```
    ///
    /// Returns: ``` qaction_enums.Priority ```
    pub fn Priority(self: ?*anyopaque) i32 {
        return qtc.QAction_Priority(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setSeparator)
    ///
    /// ``` self: QtC.KCodecAction, b: bool ```
    pub fn SetSeparator(self: ?*anyopaque, b: bool) void {
        qtc.QAction_SetSeparator(@ptrCast(self), b);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isSeparator)
    ///
    /// ``` self: QtC.KCodecAction ```
    pub fn IsSeparator(self: ?*anyopaque) bool {
        return qtc.QAction_IsSeparator(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcut)
    ///
    /// ``` self: QtC.KCodecAction, shortcut: QtC.QKeySequence ```
    pub fn SetShortcut(self: ?*anyopaque, shortcut: ?*anyopaque) void {
        qtc.QAction_SetShortcut(@ptrCast(self), @ptrCast(shortcut));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#shortcut)
    ///
    /// ``` self: QtC.KCodecAction ```
    pub fn Shortcut(self: ?*anyopaque) QtC.QKeySequence {
        return qtc.QAction_Shortcut(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcuts)
    ///
    /// ``` self: QtC.KCodecAction, shortcuts: []QtC.QKeySequence ```
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
    /// ``` self: QtC.KCodecAction, shortcuts: qkeysequence_enums.StandardKey ```
    pub fn SetShortcuts2(self: ?*anyopaque, shortcuts: i32) void {
        qtc.QAction_SetShortcuts2(@ptrCast(self), @intCast(shortcuts));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#shortcuts)
    ///
    /// ``` self: QtC.KCodecAction, allocator: std.mem.Allocator ```
    pub fn Shortcuts(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QKeySequence {
        const _arr: qtc.libqt_list = qtc.QAction_Shortcuts(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QKeySequence, _arr.len) catch @panic("kcodecaction.Shortcuts: Memory allocation failed");
        const _data: [*]QtC.QKeySequence = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcutContext)
    ///
    /// ``` self: QtC.KCodecAction, context: qnamespace_enums.ShortcutContext ```
    pub fn SetShortcutContext(self: ?*anyopaque, context: i32) void {
        qtc.QAction_SetShortcutContext(@ptrCast(self), @intCast(context));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#shortcutContext)
    ///
    /// ``` self: QtC.KCodecAction ```
    ///
    /// Returns: ``` qnamespace_enums.ShortcutContext ```
    pub fn ShortcutContext(self: ?*anyopaque) i32 {
        return qtc.QAction_ShortcutContext(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setAutoRepeat)
    ///
    /// ``` self: QtC.KCodecAction, autoRepeat: bool ```
    pub fn SetAutoRepeat(self: ?*anyopaque, autoRepeat: bool) void {
        qtc.QAction_SetAutoRepeat(@ptrCast(self), autoRepeat);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#autoRepeat)
    ///
    /// ``` self: QtC.KCodecAction ```
    pub fn AutoRepeat(self: ?*anyopaque) bool {
        return qtc.QAction_AutoRepeat(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setFont)
    ///
    /// ``` self: QtC.KCodecAction, font: QtC.QFont ```
    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QAction_SetFont(@ptrCast(self), @ptrCast(font));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#font)
    ///
    /// ``` self: QtC.KCodecAction ```
    pub fn Font(self: ?*anyopaque) QtC.QFont {
        return qtc.QAction_Font(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setCheckable)
    ///
    /// ``` self: QtC.KCodecAction, checkable: bool ```
    pub fn SetCheckable(self: ?*anyopaque, checkable: bool) void {
        qtc.QAction_SetCheckable(@ptrCast(self), checkable);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isCheckable)
    ///
    /// ``` self: QtC.KCodecAction ```
    pub fn IsCheckable(self: ?*anyopaque) bool {
        return qtc.QAction_IsCheckable(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#data)
    ///
    /// ``` self: QtC.KCodecAction ```
    pub fn Data(self: ?*anyopaque) QtC.QVariant {
        return qtc.QAction_Data(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setData)
    ///
    /// ``` self: QtC.KCodecAction, varVal: QtC.QVariant ```
    pub fn SetData(self: ?*anyopaque, varVal: ?*anyopaque) void {
        qtc.QAction_SetData(@ptrCast(self), @ptrCast(varVal));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isChecked)
    ///
    /// ``` self: QtC.KCodecAction ```
    pub fn IsChecked(self: ?*anyopaque) bool {
        return qtc.QAction_IsChecked(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isEnabled)
    ///
    /// ``` self: QtC.KCodecAction ```
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return qtc.QAction_IsEnabled(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isVisible)
    ///
    /// ``` self: QtC.KCodecAction ```
    pub fn IsVisible(self: ?*anyopaque) bool {
        return qtc.QAction_IsVisible(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#activate)
    ///
    /// ``` self: QtC.KCodecAction, event: qaction_enums.ActionEvent ```
    pub fn Activate(self: ?*anyopaque, event: i32) void {
        qtc.QAction_Activate(@ptrCast(self), @intCast(event));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setMenuRole)
    ///
    /// ``` self: QtC.KCodecAction, menuRole: qaction_enums.MenuRole ```
    pub fn SetMenuRole(self: ?*anyopaque, menuRole: i32) void {
        qtc.QAction_SetMenuRole(@ptrCast(self), @intCast(menuRole));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#menuRole)
    ///
    /// ``` self: QtC.KCodecAction ```
    ///
    /// Returns: ``` qaction_enums.MenuRole ```
    pub fn MenuRole(self: ?*anyopaque) i32 {
        return qtc.QAction_MenuRole(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setIconVisibleInMenu)
    ///
    /// ``` self: QtC.KCodecAction, visible: bool ```
    pub fn SetIconVisibleInMenu(self: ?*anyopaque, visible: bool) void {
        qtc.QAction_SetIconVisibleInMenu(@ptrCast(self), visible);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isIconVisibleInMenu)
    ///
    /// ``` self: QtC.KCodecAction ```
    pub fn IsIconVisibleInMenu(self: ?*anyopaque) bool {
        return qtc.QAction_IsIconVisibleInMenu(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setShortcutVisibleInContextMenu)
    ///
    /// ``` self: QtC.KCodecAction, show: bool ```
    pub fn SetShortcutVisibleInContextMenu(self: ?*anyopaque, show: bool) void {
        qtc.QAction_SetShortcutVisibleInContextMenu(@ptrCast(self), show);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#isShortcutVisibleInContextMenu)
    ///
    /// ``` self: QtC.KCodecAction ```
    pub fn IsShortcutVisibleInContextMenu(self: ?*anyopaque) bool {
        return qtc.QAction_IsShortcutVisibleInContextMenu(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#showStatusText)
    ///
    /// ``` self: QtC.KCodecAction ```
    pub fn ShowStatusText(self: ?*anyopaque) bool {
        return qtc.QAction_ShowStatusText(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#trigger)
    ///
    /// ``` self: QtC.KCodecAction ```
    pub fn Trigger(self: ?*anyopaque) void {
        qtc.QAction_Trigger(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#hover)
    ///
    /// ``` self: QtC.KCodecAction ```
    pub fn Hover(self: ?*anyopaque) void {
        qtc.QAction_Hover(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setChecked)
    ///
    /// ``` self: QtC.KCodecAction, checked: bool ```
    pub fn SetChecked(self: ?*anyopaque, checked: bool) void {
        qtc.QAction_SetChecked(@ptrCast(self), checked);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#toggle)
    ///
    /// ``` self: QtC.KCodecAction ```
    pub fn Toggle(self: ?*anyopaque) void {
        qtc.QAction_Toggle(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setEnabled)
    ///
    /// ``` self: QtC.KCodecAction, enabled: bool ```
    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QAction_SetEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#resetEnabled)
    ///
    /// ``` self: QtC.KCodecAction ```
    pub fn ResetEnabled(self: ?*anyopaque) void {
        qtc.QAction_ResetEnabled(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setDisabled)
    ///
    /// ``` self: QtC.KCodecAction, b: bool ```
    pub fn SetDisabled(self: ?*anyopaque, b: bool) void {
        qtc.QAction_SetDisabled(@ptrCast(self), b);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#setVisible)
    ///
    /// ``` self: QtC.KCodecAction, visible: bool ```
    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QAction_SetVisible(@ptrCast(self), visible);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#changed)
    ///
    /// ``` self: QtC.KCodecAction ```
    pub fn Changed(self: ?*anyopaque) void {
        qtc.QAction_Changed(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#changed)
    ///
    /// ``` self: QtC.KCodecAction, slot: fn (self: QtC.KCodecAction) callconv(.c) void ```
    pub fn OnChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAction_Connect_Changed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
    ///
    /// ``` self: QtC.KCodecAction, enabled: bool ```
    pub fn EnabledChanged(self: ?*anyopaque, enabled: bool) void {
        qtc.QAction_EnabledChanged(@ptrCast(self), enabled);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#enabledChanged)
    ///
    /// ``` self: QtC.KCodecAction, slot: fn (self: QtC.KCodecAction, enabled: bool) callconv(.c) void ```
    pub fn OnEnabledChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAction_Connect_EnabledChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
    ///
    /// ``` self: QtC.KCodecAction, checkable: bool ```
    pub fn CheckableChanged(self: ?*anyopaque, checkable: bool) void {
        qtc.QAction_CheckableChanged(@ptrCast(self), checkable);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#checkableChanged)
    ///
    /// ``` self: QtC.KCodecAction, slot: fn (self: QtC.KCodecAction, checkable: bool) callconv(.c) void ```
    pub fn OnCheckableChanged(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAction_Connect_CheckableChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
    ///
    /// ``` self: QtC.KCodecAction ```
    pub fn VisibleChanged(self: ?*anyopaque) void {
        qtc.QAction_VisibleChanged(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#visibleChanged)
    ///
    /// ``` self: QtC.KCodecAction, slot: fn (self: QtC.KCodecAction) callconv(.c) void ```
    pub fn OnVisibleChanged(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAction_Connect_VisibleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#triggered)
    ///
    /// ``` self: QtC.KCodecAction ```
    pub fn Triggered(self: ?*anyopaque) void {
        qtc.QAction_Triggered(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#triggered)
    ///
    /// ``` self: QtC.KCodecAction, slot: fn (self: QtC.KCodecAction) callconv(.c) void ```
    pub fn OnTriggered(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAction_Connect_Triggered(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#hovered)
    ///
    /// ``` self: QtC.KCodecAction ```
    pub fn Hovered(self: ?*anyopaque) void {
        qtc.QAction_Hovered(@ptrCast(self));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#hovered)
    ///
    /// ``` self: QtC.KCodecAction, slot: fn (self: QtC.KCodecAction) callconv(.c) void ```
    pub fn OnHovered(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAction_Connect_Hovered(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#toggled)
    ///
    /// ``` self: QtC.KCodecAction, param1: bool ```
    pub fn Toggled(self: ?*anyopaque, param1: bool) void {
        qtc.QAction_Toggled(@ptrCast(self), param1);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#toggled)
    ///
    /// ``` self: QtC.KCodecAction, slot: fn (self: QtC.KCodecAction, param1: bool) callconv(.c) void ```
    pub fn OnToggled(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAction_Connect_Toggled(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#showStatusText)
    ///
    /// ``` self: QtC.KCodecAction, object: QtC.QObject ```
    pub fn ShowStatusText1(self: ?*anyopaque, object: ?*anyopaque) bool {
        return qtc.QAction_ShowStatusText1(@ptrCast(self), @ptrCast(object));
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#triggered)
    ///
    /// ``` self: QtC.KCodecAction, checked: bool ```
    pub fn Triggered1(self: ?*anyopaque, checked: bool) void {
        qtc.QAction_Triggered1(@ptrCast(self), checked);
    }

    /// Inherited from QAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaction.html#triggered)
    ///
    /// ``` self: QtC.KCodecAction, slot: fn (self: QtC.KCodecAction, checked: bool) callconv(.c) void ```
    pub fn OnTriggered1(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAction_Connect_Triggered1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.KCodecAction, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcodecaction.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KCodecAction, name: []const u8 ```
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
    /// ``` self: QtC.KCodecAction ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KCodecAction ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KCodecAction ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KCodecAction ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KCodecAction, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KCodecAction ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KCodecAction, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KCodecAction, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KCodecAction, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KCodecAction, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KCodecAction, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("kcodecaction.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.KCodecAction, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KCodecAction, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KCodecAction, obj: QtC.QObject ```
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
    /// ``` self: QtC.KCodecAction, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.KCodecAction ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KCodecAction ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KCodecAction, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KCodecAction, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KCodecAction, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kcodecaction.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kcodecaction.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KCodecAction ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KCodecAction ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KCodecAction ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KCodecAction, slot: fn (self: QtC.KCodecAction) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KCodecAction ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KCodecAction, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KCodecAction ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KCodecAction, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KCodecAction, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.KCodecAction, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KCodecAction, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KCodecAction, slot: fn (self: QtC.KCodecAction, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#removeAction)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction, action: QtC.QAction ```
    pub fn RemoveAction(self: ?*anyopaque, action: ?*anyopaque) QtC.QAction {
        return qtc.KCodecAction_RemoveAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#removeAction)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction, action: QtC.QAction ```
    pub fn QBaseRemoveAction(self: ?*anyopaque, action: ?*anyopaque) QtC.QAction {
        return qtc.KCodecAction_QBaseRemoveAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#removeAction)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction, slot: fn (self: QtC.KCodecAction, action: QtC.QAction) callconv(.c) QtC.QAction ```
    pub fn OnRemoveAction(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QAction) void {
        qtc.KCodecAction_OnRemoveAction(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#insertAction)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction, before: QtC.QAction, action: QtC.QAction ```
    pub fn InsertAction(self: ?*anyopaque, before: ?*anyopaque, action: ?*anyopaque) void {
        qtc.KCodecAction_InsertAction(@ptrCast(self), @ptrCast(before), @ptrCast(action));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#insertAction)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction, before: QtC.QAction, action: QtC.QAction ```
    pub fn QBaseInsertAction(self: ?*anyopaque, before: ?*anyopaque, action: ?*anyopaque) void {
        qtc.KCodecAction_QBaseInsertAction(@ptrCast(self), @ptrCast(before), @ptrCast(action));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#insertAction)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction, slot: fn (self: QtC.KCodecAction, before: QtC.QAction, action: QtC.QAction) callconv(.c) void ```
    pub fn OnInsertAction(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCodecAction_OnInsertAction(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#createWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction, parent: QtC.QWidget ```
    pub fn CreateWidget(self: ?*anyopaque, parent: ?*anyopaque) QtC.QWidget {
        return qtc.KCodecAction_CreateWidget(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#createWidget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction, parent: QtC.QWidget ```
    pub fn QBaseCreateWidget(self: ?*anyopaque, parent: ?*anyopaque) QtC.QWidget {
        return qtc.KCodecAction_QBaseCreateWidget(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#createWidget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction, slot: fn (self: QtC.KCodecAction, parent: QtC.QWidget) callconv(.c) QtC.QWidget ```
    pub fn OnCreateWidget(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QWidget) void {
        qtc.KCodecAction_OnCreateWidget(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#deleteWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction, widget: QtC.QWidget ```
    pub fn DeleteWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.KCodecAction_DeleteWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#deleteWidget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction, widget: QtC.QWidget ```
    pub fn QBaseDeleteWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.KCodecAction_QBaseDeleteWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#deleteWidget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction, slot: fn (self: QtC.KCodecAction, widget: QtC.QWidget) callconv(.c) void ```
    pub fn OnDeleteWidget(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCodecAction_OnDeleteWidget(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KCodecAction_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KCodecAction_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction, slot: fn (self: QtC.KCodecAction, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KCodecAction_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KCodecAction_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KCodecAction_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction, slot: fn (self: QtC.KCodecAction, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KCodecAction_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KCodecAction_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KCodecAction_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction, slot: fn (self: QtC.KCodecAction, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCodecAction_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KCodecAction_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KCodecAction_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction, slot: fn (self: QtC.KCodecAction, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCodecAction_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KCodecAction_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KCodecAction_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction, slot: fn (self: QtC.KCodecAction, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCodecAction_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KCodecAction_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KCodecAction_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction, slot: fn (self: QtC.KCodecAction, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCodecAction_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KCodecAction_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KCodecAction_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction, slot: fn (self: QtC.KCodecAction, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KCodecAction_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#slotToggled)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction, param1: bool ```
    pub fn SlotToggled(self: ?*anyopaque, param1: bool) void {
        qtc.KCodecAction_SlotToggled(@ptrCast(self), param1);
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#slotToggled)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction, param1: bool ```
    pub fn QBaseSlotToggled(self: ?*anyopaque, param1: bool) void {
        qtc.KCodecAction_QBaseSlotToggled(@ptrCast(self), param1);
    }

    /// Inherited from KSelectAction
    ///
    /// [Qt documentation](https://api-staging.kde.org/kselectaction.html#slotToggled)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction, slot: fn (self: QtC.KCodecAction, param1: bool) callconv(.c) void ```
    pub fn OnSlotToggled(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.KCodecAction_OnSlotToggled(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidgetAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction, allocator: std.mem.Allocator ```
    pub fn CreatedWidgets(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QWidget {
        const _arr: qtc.libqt_list = qtc.KCodecAction_CreatedWidgets(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QWidget, _arr.len) catch @panic("kcodecaction.CreatedWidgets: Memory allocation failed");
        const _data: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QWidgetAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction, allocator: std.mem.Allocator ```
    pub fn QBaseCreatedWidgets(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QWidget {
        const _arr: qtc.libqt_list = qtc.KCodecAction_QBaseCreatedWidgets(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QWidget, _arr.len) catch @panic("kcodecaction.CreatedWidgets: Memory allocation failed");
        const _data: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QWidgetAction
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidgetaction.html#createdWidgets)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction, slot: fn () callconv(.c) [*:null]QtC.QWidget ```
    pub fn OnCreatedWidgets(self: ?*anyopaque, slot: fn () callconv(.c) [*:null]QtC.QWidget) void {
        qtc.KCodecAction_OnCreatedWidgets(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KCodecAction_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KCodecAction_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.KCodecAction_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KCodecAction_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KCodecAction_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.KCodecAction_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KCodecAction_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KCodecAction_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction, slot: fn (self: QtC.KCodecAction, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KCodecAction_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KCodecAction_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KCodecAction_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KCodecAction, slot: fn (self: QtC.KCodecAction, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KCodecAction_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KCodecAction, slot: fn (self: QtC.KCodecAction, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api-staging.kde.org/kcodecaction.html#dtor.KCodecAction)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KCodecAction ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KCodecAction_Delete(@ptrCast(self));
    }
};
