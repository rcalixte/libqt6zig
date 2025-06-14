const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qaccessible_base_enums = @import("libqaccessible_base.zig").enums;
const std = @import("std");
pub const struct_qtcqaccessibleinterface_i32 = struct { first: QtC.QAccessibleInterface, second: i32 };
pub const struct_qtcqaccessibleinterface_i64 = struct { first: QtC.QAccessibleInterface, second: i64 };

/// https://doc.qt.io/qt-6/qaccessiblewidget.html
pub const qaccessiblewidget = struct {
    /// New constructs a new QAccessibleWidget object.
    ///
    /// ``` o: QtC.QWidget ```
    pub fn New(o: ?*anyopaque) QtC.QAccessibleWidget {
        return qtc.QAccessibleWidget_new(@ptrCast(o));
    }

    /// New2 constructs a new QAccessibleWidget object.
    ///
    /// ``` o: QtC.QWidget, r: qaccessible_base_enums.Role ```
    pub fn New2(o: ?*anyopaque, r: i64) QtC.QAccessibleWidget {
        return qtc.QAccessibleWidget_new2(@ptrCast(o), @intCast(r));
    }

    /// New3 constructs a new QAccessibleWidget object.
    ///
    /// ``` o: QtC.QWidget, r: qaccessible_base_enums.Role, name: []const u8 ```
    pub fn New3(o: ?*anyopaque, r: i64, name: []const u8) QtC.QAccessibleWidget {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };

        return qtc.QAccessibleWidget_new3(@ptrCast(o), @intCast(r), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#isValid)
    ///
    /// ``` self: QtC.QAccessibleWidget ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QAccessibleWidget_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#window)
    ///
    /// ``` self: QtC.QAccessibleWidget ```
    pub fn Window(self: ?*anyopaque) QtC.QWindow {
        return qtc.QAccessibleWidget_Window(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#childCount)
    ///
    /// ``` self: QtC.QAccessibleWidget ```
    pub fn ChildCount(self: ?*anyopaque) i32 {
        return qtc.QAccessibleWidget_ChildCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#indexOfChild)
    ///
    /// ``` self: QtC.QAccessibleWidget, child: QtC.QAccessibleInterface ```
    pub fn IndexOfChild(self: ?*anyopaque, child: ?*anyopaque) i32 {
        return qtc.QAccessibleWidget_IndexOfChild(@ptrCast(self), @ptrCast(child));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#relations)
    ///
    /// ``` self: QtC.QAccessibleWidget, match: i32, allocator: std.mem.Allocator ```
    pub fn Relations(self: ?*anyopaque, match: i64, allocator: std.mem.Allocator) []struct_qtcqaccessibleinterface_i64 {
        const _arr: qtc.struct_libqt_list = qtc.QAccessibleWidget_Relations(@ptrCast(self), @intCast(match));
        defer {
            const _pair: [*]qtc.struct_libqt_pair = @ptrCast(@alignCast(_arr.data));
            for (0.._arr.len) |i| {
                qtc.libqt_free(_pair[i].first);
                qtc.libqt_free(_pair[i].second);
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(struct_qtcqaccessibleinterface_i32, _arr.len) catch @panic("qaccessiblewidget.Relations: Memory allocation failed");
        const _data: [*]struct_qtcqaccessibleinterface_i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#focusChild)
    ///
    /// ``` self: QtC.QAccessibleWidget ```
    pub fn FocusChild(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleWidget_FocusChild(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#rect)
    ///
    /// ``` self: QtC.QAccessibleWidget ```
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QAccessibleWidget_Rect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#parent)
    ///
    /// ``` self: QtC.QAccessibleWidget ```
    pub fn Parent(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleWidget_Parent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#child)
    ///
    /// ``` self: QtC.QAccessibleWidget, index: i32 ```
    pub fn Child(self: ?*anyopaque, index: i32) QtC.QAccessibleInterface {
        return qtc.QAccessibleWidget_Child(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#text)
    ///
    /// ``` self: QtC.QAccessibleWidget, t: qaccessible_base_enums.Text, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, t: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleWidget_Text(@ptrCast(self), @intCast(t));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblewidget.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#role)
    ///
    /// ``` self: QtC.QAccessibleWidget ```
    pub fn Role(self: ?*anyopaque) i64 {
        return qtc.QAccessibleWidget_Role(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#state)
    ///
    /// ``` self: QtC.QAccessibleWidget ```
    pub fn State(self: ?*anyopaque) QtC.QAccessible__State {
        return qtc.QAccessibleWidget_State(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#foregroundColor)
    ///
    /// ``` self: QtC.QAccessibleWidget ```
    pub fn ForegroundColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QAccessibleWidget_ForegroundColor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#backgroundColor)
    ///
    /// ``` self: QtC.QAccessibleWidget ```
    pub fn BackgroundColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QAccessibleWidget_BackgroundColor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#interface_cast)
    ///
    /// ``` self: QtC.QAccessibleWidget, t: qaccessible_base_enums.InterfaceType ```
    pub fn InterfaceCast(self: ?*anyopaque, t: i64) ?*anyopaque {
        return qtc.QAccessibleWidget_InterfaceCast(@ptrCast(self), @intCast(t));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#actionNames)
    ///
    /// ``` self: QtC.QAccessibleWidget, allocator: std.mem.Allocator ```
    pub fn ActionNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.struct_libqt_list = qtc.QAccessibleWidget_ActionNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qaccessiblewidget.ActionNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qaccessiblewidget.ActionNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#doAction)
    ///
    /// ``` self: QtC.QAccessibleWidget, actionName: []const u8 ```
    pub fn DoAction(self: ?*anyopaque, actionName: []const u8) void {
        const actionName_str = qtc.struct_libqt_string{
            .len = actionName.len,
            .data = actionName.ptr,
        };
        qtc.QAccessibleWidget_DoAction(@ptrCast(self), actionName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblewidget.html#keyBindingsForAction)
    ///
    /// ``` self: QtC.QAccessibleWidget, actionName: []const u8, allocator: std.mem.Allocator ```
    pub fn KeyBindingsForAction(self: ?*anyopaque, actionName: []const u8, allocator: std.mem.Allocator) [][]const u8 {
        const actionName_str = qtc.struct_libqt_string{
            .len = actionName.len,
            .data = actionName.ptr,
        };
        const _arr: qtc.struct_libqt_list = qtc.QAccessibleWidget_KeyBindingsForAction(@ptrCast(self), actionName_str);
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qaccessiblewidget.KeyBindingsForAction: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qaccessiblewidget.KeyBindingsForAction: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QAccessibleObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
    ///
    /// ``` self: QtC.QAccessibleWidget ```
    pub fn Object(self: ?*anyopaque) QtC.QObject {
        return qtc.QAccessibleObject_Object(@ptrCast(self));
    }

    /// Inherited from QAccessibleObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#setText)
    ///
    /// ``` self: QtC.QAccessibleWidget, t: qaccessible_base_enums.Text, text: []const u8 ```
    pub fn SetText(self: ?*anyopaque, t: i64, text: []const u8) void {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QAccessibleObject_SetText(@ptrCast(self), @intCast(t), text_str);
    }

    /// Inherited from QAccessibleObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#childAt)
    ///
    /// ``` self: QtC.QAccessibleWidget, x: i32, y: i32 ```
    pub fn ChildAt(self: ?*anyopaque, x: i32, y: i32) QtC.QAccessibleInterface {
        return qtc.QAccessibleObject_ChildAt(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#textInterface)
    ///
    /// ``` self: QtC.QAccessibleWidget ```
    pub fn TextInterface(self: ?*anyopaque) QtC.QAccessibleTextInterface {
        return qtc.QAccessibleInterface_TextInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#editableTextInterface)
    ///
    /// ``` self: QtC.QAccessibleWidget ```
    pub fn EditableTextInterface(self: ?*anyopaque) QtC.QAccessibleEditableTextInterface {
        return qtc.QAccessibleInterface_EditableTextInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#valueInterface)
    ///
    /// ``` self: QtC.QAccessibleWidget ```
    pub fn ValueInterface(self: ?*anyopaque) QtC.QAccessibleValueInterface {
        return qtc.QAccessibleInterface_ValueInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#actionInterface)
    ///
    /// ``` self: QtC.QAccessibleWidget ```
    pub fn ActionInterface(self: ?*anyopaque) QtC.QAccessibleActionInterface {
        return qtc.QAccessibleInterface_ActionInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#imageInterface)
    ///
    /// ``` self: QtC.QAccessibleWidget ```
    pub fn ImageInterface(self: ?*anyopaque) QtC.QAccessibleImageInterface {
        return qtc.QAccessibleInterface_ImageInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableInterface)
    ///
    /// ``` self: QtC.QAccessibleWidget ```
    pub fn TableInterface(self: ?*anyopaque) QtC.QAccessibleTableInterface {
        return qtc.QAccessibleInterface_TableInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableCellInterface)
    ///
    /// ``` self: QtC.QAccessibleWidget ```
    pub fn TableCellInterface(self: ?*anyopaque) QtC.QAccessibleTableCellInterface {
        return qtc.QAccessibleInterface_TableCellInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#hyperlinkInterface)
    ///
    /// ``` self: QtC.QAccessibleWidget ```
    pub fn HyperlinkInterface(self: ?*anyopaque) QtC.QAccessibleHyperlinkInterface {
        return qtc.QAccessibleInterface_HyperlinkInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#virtual_hook)
    ///
    /// ``` self: QtC.QAccessibleWidget, id: i32, data: ?*anyopaque ```
    pub fn VirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.QAccessibleInterface_VirtualHook(@ptrCast(self), @intCast(id), data);
    }

    /// Inherited from QAccessibleActionInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` sourceText: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(sourceText: []const u8, allocator: std.mem.Allocator) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const _str = qtc.QAccessibleActionInterface_Tr(sourceText_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblewidget.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAccessibleActionInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#localizedActionName)
    ///
    /// ``` self: QtC.QAccessibleWidget, name: []const u8, allocator: std.mem.Allocator ```
    pub fn LocalizedActionName(self: ?*anyopaque, name: []const u8, allocator: std.mem.Allocator) []const u8 {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const _str = qtc.QAccessibleActionInterface_LocalizedActionName(@ptrCast(self), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblewidget.LocalizedActionName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAccessibleActionInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#localizedActionDescription)
    ///
    /// ``` self: QtC.QAccessibleWidget, name: []const u8, allocator: std.mem.Allocator ```
    pub fn LocalizedActionDescription(self: ?*anyopaque, name: []const u8, allocator: std.mem.Allocator) []const u8 {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const _str = qtc.QAccessibleActionInterface_LocalizedActionDescription(@ptrCast(self), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblewidget.LocalizedActionDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAccessibleActionInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#pressAction)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn PressAction(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleActionInterface_PressAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblewidget.PressAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAccessibleActionInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#increaseAction)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn IncreaseAction(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleActionInterface_IncreaseAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblewidget.IncreaseAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAccessibleActionInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#decreaseAction)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn DecreaseAction(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleActionInterface_DecreaseAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblewidget.DecreaseAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAccessibleActionInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#showMenuAction)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn ShowMenuAction(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleActionInterface_ShowMenuAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblewidget.ShowMenuAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAccessibleActionInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#setFocusAction)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn SetFocusAction(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleActionInterface_SetFocusAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblewidget.SetFocusAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAccessibleActionInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#toggleAction)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn ToggleAction(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleActionInterface_ToggleAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblewidget.ToggleAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAccessibleActionInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#scrollLeftAction)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn ScrollLeftAction(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleActionInterface_ScrollLeftAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblewidget.ScrollLeftAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAccessibleActionInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#scrollRightAction)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn ScrollRightAction(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleActionInterface_ScrollRightAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblewidget.ScrollRightAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAccessibleActionInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#scrollUpAction)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn ScrollUpAction(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleActionInterface_ScrollUpAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblewidget.ScrollUpAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAccessibleActionInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#scrollDownAction)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn ScrollDownAction(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleActionInterface_ScrollDownAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblewidget.ScrollDownAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAccessibleActionInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#nextPageAction)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn NextPageAction(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleActionInterface_NextPageAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblewidget.NextPageAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAccessibleActionInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#previousPageAction)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn PreviousPageAction(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleActionInterface_PreviousPageAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblewidget.PreviousPageAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAccessibleActionInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` sourceText: []const u8, disambiguation: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(sourceText: []const u8, disambiguation: []const u8, allocator: std.mem.Allocator) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        const _str = qtc.QAccessibleActionInterface_Tr2(sourceText_Cstring, disambiguation_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblewidget.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAccessibleActionInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` sourceText: []const u8, disambiguation: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(sourceText: []const u8, disambiguation: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        const _str = qtc.QAccessibleActionInterface_Tr3(sourceText_Cstring, disambiguation_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblewidget.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }
};
