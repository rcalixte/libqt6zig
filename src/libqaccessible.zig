const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qaccessible_base_enums = @import("libqaccessible_base.zig").enums;
const qaccessible_enums = enums;
const std = @import("std");
pub const struct_qtcqaccessibleinterface_i32 = struct { first: QtC.QAccessibleInterface, second: i32 };
pub const struct_qtcqaccessibleinterface_i64 = struct { first: QtC.QAccessibleInterface, second: i64 };

/// https://doc.qt.io/qt-6/qaccessibleinterface.html
pub const qaccessibleinterface = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#isValid)
    ///
    /// ``` self: QtC.QAccessibleInterface ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QAccessibleInterface_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#object)
    ///
    /// ``` self: QtC.QAccessibleInterface ```
    pub fn Object(self: ?*anyopaque) QtC.QObject {
        return qtc.QAccessibleInterface_Object(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#window)
    ///
    /// ``` self: QtC.QAccessibleInterface ```
    pub fn Window(self: ?*anyopaque) QtC.QWindow {
        return qtc.QAccessibleInterface_Window(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#relations)
    ///
    /// ``` self: QtC.QAccessibleInterface, match: i32, allocator: std.mem.Allocator ```
    pub fn Relations(self: ?*anyopaque, match: i64, allocator: std.mem.Allocator) []struct_qtcqaccessibleinterface_i64 {
        const _arr: qtc.struct_libqt_list = qtc.QAccessibleInterface_Relations(@ptrCast(self), @intCast(match));
        defer {
            const _pair: [*]qtc.struct_libqt_pair = @ptrCast(@alignCast(_arr.data));
            for (0.._arr.len) |_i| {
                qtc.libqt_free(_pair[_i].first);
                qtc.libqt_free(_pair[_i].second);
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(struct_qtcqaccessibleinterface_i32, _arr.len) catch @panic("qaccessibleinterface.Relations: Memory allocation failed");
        const _data: [*]struct_qtcqaccessibleinterface_i32 = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#focusChild)
    ///
    /// ``` self: QtC.QAccessibleInterface ```
    pub fn FocusChild(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleInterface_FocusChild(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#childAt)
    ///
    /// ``` self: QtC.QAccessibleInterface, x: i32, y: i32 ```
    pub fn ChildAt(self: ?*anyopaque, x: i32, y: i32) QtC.QAccessibleInterface {
        return qtc.QAccessibleInterface_ChildAt(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#parent)
    ///
    /// ``` self: QtC.QAccessibleInterface ```
    pub fn Parent(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleInterface_Parent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#child)
    ///
    /// ``` self: QtC.QAccessibleInterface, index: i32 ```
    pub fn Child(self: ?*anyopaque, index: i32) QtC.QAccessibleInterface {
        return qtc.QAccessibleInterface_Child(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#childCount)
    ///
    /// ``` self: QtC.QAccessibleInterface ```
    pub fn ChildCount(self: ?*anyopaque) i32 {
        return qtc.QAccessibleInterface_ChildCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#indexOfChild)
    ///
    /// ``` self: QtC.QAccessibleInterface, param1: QtC.QAccessibleInterface ```
    pub fn IndexOfChild(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QAccessibleInterface_IndexOfChild(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#text)
    ///
    /// ``` self: QtC.QAccessibleInterface, t: qaccessible_base_enums.Text, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, t: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleInterface_Text(@ptrCast(self), @intCast(t));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleinterface.Text: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#setText)
    ///
    /// ``` self: QtC.QAccessibleInterface, t: qaccessible_base_enums.Text, text: []const u8 ```
    pub fn SetText(self: ?*anyopaque, t: i64, text: []const u8) void {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        qtc.QAccessibleInterface_SetText(@ptrCast(self), @intCast(t), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#rect)
    ///
    /// ``` self: QtC.QAccessibleInterface ```
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QAccessibleInterface_Rect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#role)
    ///
    /// ``` self: QtC.QAccessibleInterface ```
    pub fn Role(self: ?*anyopaque) i64 {
        return qtc.QAccessibleInterface_Role(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#state)
    ///
    /// ``` self: QtC.QAccessibleInterface ```
    pub fn State(self: ?*anyopaque) QtC.QAccessible__State {
        return qtc.QAccessibleInterface_State(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#foregroundColor)
    ///
    /// ``` self: QtC.QAccessibleInterface ```
    pub fn ForegroundColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QAccessibleInterface_ForegroundColor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#backgroundColor)
    ///
    /// ``` self: QtC.QAccessibleInterface ```
    pub fn BackgroundColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QAccessibleInterface_BackgroundColor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#textInterface)
    ///
    /// ``` self: QtC.QAccessibleInterface ```
    pub fn TextInterface(self: ?*anyopaque) QtC.QAccessibleTextInterface {
        return qtc.QAccessibleInterface_TextInterface(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#editableTextInterface)
    ///
    /// ``` self: QtC.QAccessibleInterface ```
    pub fn EditableTextInterface(self: ?*anyopaque) QtC.QAccessibleEditableTextInterface {
        return qtc.QAccessibleInterface_EditableTextInterface(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#valueInterface)
    ///
    /// ``` self: QtC.QAccessibleInterface ```
    pub fn ValueInterface(self: ?*anyopaque) QtC.QAccessibleValueInterface {
        return qtc.QAccessibleInterface_ValueInterface(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#actionInterface)
    ///
    /// ``` self: QtC.QAccessibleInterface ```
    pub fn ActionInterface(self: ?*anyopaque) QtC.QAccessibleActionInterface {
        return qtc.QAccessibleInterface_ActionInterface(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#imageInterface)
    ///
    /// ``` self: QtC.QAccessibleInterface ```
    pub fn ImageInterface(self: ?*anyopaque) QtC.QAccessibleImageInterface {
        return qtc.QAccessibleInterface_ImageInterface(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableInterface)
    ///
    /// ``` self: QtC.QAccessibleInterface ```
    pub fn TableInterface(self: ?*anyopaque) QtC.QAccessibleTableInterface {
        return qtc.QAccessibleInterface_TableInterface(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableCellInterface)
    ///
    /// ``` self: QtC.QAccessibleInterface ```
    pub fn TableCellInterface(self: ?*anyopaque) QtC.QAccessibleTableCellInterface {
        return qtc.QAccessibleInterface_TableCellInterface(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#hyperlinkInterface)
    ///
    /// ``` self: QtC.QAccessibleInterface ```
    pub fn HyperlinkInterface(self: ?*anyopaque) QtC.QAccessibleHyperlinkInterface {
        return qtc.QAccessibleInterface_HyperlinkInterface(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#virtual_hook)
    ///
    /// ``` self: QtC.QAccessibleInterface, id: i32, data: ?*anyopaque ```
    pub fn VirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.QAccessibleInterface_VirtualHook(@ptrCast(self), @intCast(id), data);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#interface_cast)
    ///
    /// ``` self: QtC.QAccessibleInterface, param1: qaccessible_base_enums.InterfaceType ```
    pub fn InterfaceCast(self: ?*anyopaque, param1: i64) ?*anyopaque {
        return qtc.QAccessibleInterface_InterfaceCast(@ptrCast(self), @intCast(param1));
    }
};

/// https://doc.qt.io/qt-6/qaccessibletextinterface.html
pub const qaccessibletextinterface = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextinterface.html#selection)
    ///
    /// ``` self: QtC.QAccessibleTextInterface, selectionIndex: i32, startOffset: ?*i32, endOffset: ?*i32 ```
    pub fn Selection(self: ?*anyopaque, selectionIndex: i32, startOffset: ?*anyopaque, endOffset: ?*anyopaque) void {
        qtc.QAccessibleTextInterface_Selection(@ptrCast(self), @intCast(selectionIndex), @intCast(startOffset), @intCast(endOffset));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextinterface.html#selectionCount)
    ///
    /// ``` self: QtC.QAccessibleTextInterface ```
    pub fn SelectionCount(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTextInterface_SelectionCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextinterface.html#addSelection)
    ///
    /// ``` self: QtC.QAccessibleTextInterface, startOffset: i32, endOffset: i32 ```
    pub fn AddSelection(self: ?*anyopaque, startOffset: i32, endOffset: i32) void {
        qtc.QAccessibleTextInterface_AddSelection(@ptrCast(self), @intCast(startOffset), @intCast(endOffset));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextinterface.html#removeSelection)
    ///
    /// ``` self: QtC.QAccessibleTextInterface, selectionIndex: i32 ```
    pub fn RemoveSelection(self: ?*anyopaque, selectionIndex: i32) void {
        qtc.QAccessibleTextInterface_RemoveSelection(@ptrCast(self), @intCast(selectionIndex));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextinterface.html#setSelection)
    ///
    /// ``` self: QtC.QAccessibleTextInterface, selectionIndex: i32, startOffset: i32, endOffset: i32 ```
    pub fn SetSelection(self: ?*anyopaque, selectionIndex: i32, startOffset: i32, endOffset: i32) void {
        qtc.QAccessibleTextInterface_SetSelection(@ptrCast(self), @intCast(selectionIndex), @intCast(startOffset), @intCast(endOffset));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextinterface.html#cursorPosition)
    ///
    /// ``` self: QtC.QAccessibleTextInterface ```
    pub fn CursorPosition(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTextInterface_CursorPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextinterface.html#setCursorPosition)
    ///
    /// ``` self: QtC.QAccessibleTextInterface, position: i32 ```
    pub fn SetCursorPosition(self: ?*anyopaque, position: i32) void {
        qtc.QAccessibleTextInterface_SetCursorPosition(@ptrCast(self), @intCast(position));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextinterface.html#text)
    ///
    /// ``` self: QtC.QAccessibleTextInterface, startOffset: i32, endOffset: i32, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, startOffset: i32, endOffset: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleTextInterface_Text(@ptrCast(self), @intCast(startOffset), @intCast(endOffset));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletextinterface.Text: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextinterface.html#textBeforeOffset)
    ///
    /// ``` self: QtC.QAccessibleTextInterface, offset: i32, boundaryType: qaccessible_base_enums.TextBoundaryType, startOffset: ?*i32, endOffset: ?*i32, allocator: std.mem.Allocator ```
    pub fn TextBeforeOffset(self: ?*anyopaque, offset: i32, boundaryType: i64, startOffset: ?*anyopaque, endOffset: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleTextInterface_TextBeforeOffset(@ptrCast(self), @intCast(offset), @intCast(boundaryType), @intCast(startOffset), @intCast(endOffset));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletextinterface.TextBeforeOffset: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextinterface.html#textAfterOffset)
    ///
    /// ``` self: QtC.QAccessibleTextInterface, offset: i32, boundaryType: qaccessible_base_enums.TextBoundaryType, startOffset: ?*i32, endOffset: ?*i32, allocator: std.mem.Allocator ```
    pub fn TextAfterOffset(self: ?*anyopaque, offset: i32, boundaryType: i64, startOffset: ?*anyopaque, endOffset: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleTextInterface_TextAfterOffset(@ptrCast(self), @intCast(offset), @intCast(boundaryType), @intCast(startOffset), @intCast(endOffset));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletextinterface.TextAfterOffset: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextinterface.html#textAtOffset)
    ///
    /// ``` self: QtC.QAccessibleTextInterface, offset: i32, boundaryType: qaccessible_base_enums.TextBoundaryType, startOffset: ?*i32, endOffset: ?*i32, allocator: std.mem.Allocator ```
    pub fn TextAtOffset(self: ?*anyopaque, offset: i32, boundaryType: i64, startOffset: ?*anyopaque, endOffset: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleTextInterface_TextAtOffset(@ptrCast(self), @intCast(offset), @intCast(boundaryType), @intCast(startOffset), @intCast(endOffset));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletextinterface.TextAtOffset: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextinterface.html#characterCount)
    ///
    /// ``` self: QtC.QAccessibleTextInterface ```
    pub fn CharacterCount(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTextInterface_CharacterCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextinterface.html#characterRect)
    ///
    /// ``` self: QtC.QAccessibleTextInterface, offset: i32 ```
    pub fn CharacterRect(self: ?*anyopaque, offset: i32) QtC.QRect {
        return qtc.QAccessibleTextInterface_CharacterRect(@ptrCast(self), @intCast(offset));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextinterface.html#offsetAtPoint)
    ///
    /// ``` self: QtC.QAccessibleTextInterface, point: QtC.QPoint ```
    pub fn OffsetAtPoint(self: ?*anyopaque, point: ?*anyopaque) i32 {
        return qtc.QAccessibleTextInterface_OffsetAtPoint(@ptrCast(self), @ptrCast(point));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextinterface.html#scrollToSubstring)
    ///
    /// ``` self: QtC.QAccessibleTextInterface, startIndex: i32, endIndex: i32 ```
    pub fn ScrollToSubstring(self: ?*anyopaque, startIndex: i32, endIndex: i32) void {
        qtc.QAccessibleTextInterface_ScrollToSubstring(@ptrCast(self), @intCast(startIndex), @intCast(endIndex));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextinterface.html#attributes)
    ///
    /// ``` self: QtC.QAccessibleTextInterface, offset: i32, startOffset: ?*i32, endOffset: ?*i32, allocator: std.mem.Allocator ```
    pub fn Attributes(self: ?*anyopaque, offset: i32, startOffset: ?*anyopaque, endOffset: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleTextInterface_Attributes(@ptrCast(self), @intCast(offset), @intCast(startOffset), @intCast(endOffset));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletextinterface.Attributes: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextinterface.html#operator=)
    ///
    /// ``` self: QtC.QAccessibleTextInterface, param1: QtC.QAccessibleTextInterface ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAccessibleTextInterface_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextinterface.html#dtor.QAccessibleTextInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QAccessibleTextInterface ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleTextInterface_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qaccessibleeditabletextinterface.html
pub const qaccessibleeditabletextinterface = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleeditabletextinterface.html#deleteText)
    ///
    /// ``` self: QtC.QAccessibleEditableTextInterface, startOffset: i32, endOffset: i32 ```
    pub fn DeleteText(self: ?*anyopaque, startOffset: i32, endOffset: i32) void {
        qtc.QAccessibleEditableTextInterface_DeleteText(@ptrCast(self), @intCast(startOffset), @intCast(endOffset));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleeditabletextinterface.html#insertText)
    ///
    /// ``` self: QtC.QAccessibleEditableTextInterface, offset: i32, text: []const u8 ```
    pub fn InsertText(self: ?*anyopaque, offset: i32, text: []const u8) void {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        qtc.QAccessibleEditableTextInterface_InsertText(@ptrCast(self), @intCast(offset), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleeditabletextinterface.html#replaceText)
    ///
    /// ``` self: QtC.QAccessibleEditableTextInterface, startOffset: i32, endOffset: i32, text: []const u8 ```
    pub fn ReplaceText(self: ?*anyopaque, startOffset: i32, endOffset: i32, text: []const u8) void {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        qtc.QAccessibleEditableTextInterface_ReplaceText(@ptrCast(self), @intCast(startOffset), @intCast(endOffset), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleeditabletextinterface.html#operator=)
    ///
    /// ``` self: QtC.QAccessibleEditableTextInterface, param1: QtC.QAccessibleEditableTextInterface ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAccessibleEditableTextInterface_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleeditabletextinterface.html#dtor.QAccessibleEditableTextInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QAccessibleEditableTextInterface ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleEditableTextInterface_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qaccessiblevalueinterface.html
pub const qaccessiblevalueinterface = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblevalueinterface.html#currentValue)
    ///
    /// ``` self: QtC.QAccessibleValueInterface ```
    pub fn CurrentValue(self: ?*anyopaque) QtC.QVariant {
        return qtc.QAccessibleValueInterface_CurrentValue(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblevalueinterface.html#setCurrentValue)
    ///
    /// ``` self: QtC.QAccessibleValueInterface, value: QtC.QVariant ```
    pub fn SetCurrentValue(self: ?*anyopaque, value: ?*anyopaque) void {
        qtc.QAccessibleValueInterface_SetCurrentValue(@ptrCast(self), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblevalueinterface.html#maximumValue)
    ///
    /// ``` self: QtC.QAccessibleValueInterface ```
    pub fn MaximumValue(self: ?*anyopaque) QtC.QVariant {
        return qtc.QAccessibleValueInterface_MaximumValue(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblevalueinterface.html#minimumValue)
    ///
    /// ``` self: QtC.QAccessibleValueInterface ```
    pub fn MinimumValue(self: ?*anyopaque) QtC.QVariant {
        return qtc.QAccessibleValueInterface_MinimumValue(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblevalueinterface.html#minimumStepSize)
    ///
    /// ``` self: QtC.QAccessibleValueInterface ```
    pub fn MinimumStepSize(self: ?*anyopaque) QtC.QVariant {
        return qtc.QAccessibleValueInterface_MinimumStepSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblevalueinterface.html#operator=)
    ///
    /// ``` self: QtC.QAccessibleValueInterface, param1: QtC.QAccessibleValueInterface ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAccessibleValueInterface_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblevalueinterface.html#dtor.QAccessibleValueInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QAccessibleValueInterface ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleValueInterface_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qaccessibletablecellinterface.html
pub const qaccessibletablecellinterface = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#isSelected)
    ///
    /// ``` self: QtC.QAccessibleTableCellInterface ```
    pub fn IsSelected(self: ?*anyopaque) bool {
        return qtc.QAccessibleTableCellInterface_IsSelected(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#columnHeaderCells)
    ///
    /// ``` self: QtC.QAccessibleTableCellInterface, allocator: std.mem.Allocator ```
    pub fn ColumnHeaderCells(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAccessibleInterface {
        const _arr: qtc.struct_libqt_list = qtc.QAccessibleTableCellInterface_ColumnHeaderCells(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAccessibleInterface, _arr.len) catch @panic("qaccessibletablecellinterface.ColumnHeaderCells: Memory allocation failed");
        const _data: [*]QtC.QAccessibleInterface = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#rowHeaderCells)
    ///
    /// ``` self: QtC.QAccessibleTableCellInterface, allocator: std.mem.Allocator ```
    pub fn RowHeaderCells(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAccessibleInterface {
        const _arr: qtc.struct_libqt_list = qtc.QAccessibleTableCellInterface_RowHeaderCells(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAccessibleInterface, _arr.len) catch @panic("qaccessibletablecellinterface.RowHeaderCells: Memory allocation failed");
        const _data: [*]QtC.QAccessibleInterface = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#columnIndex)
    ///
    /// ``` self: QtC.QAccessibleTableCellInterface ```
    pub fn ColumnIndex(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTableCellInterface_ColumnIndex(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#rowIndex)
    ///
    /// ``` self: QtC.QAccessibleTableCellInterface ```
    pub fn RowIndex(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTableCellInterface_RowIndex(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#columnExtent)
    ///
    /// ``` self: QtC.QAccessibleTableCellInterface ```
    pub fn ColumnExtent(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTableCellInterface_ColumnExtent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#rowExtent)
    ///
    /// ``` self: QtC.QAccessibleTableCellInterface ```
    pub fn RowExtent(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTableCellInterface_RowExtent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#table)
    ///
    /// ``` self: QtC.QAccessibleTableCellInterface ```
    pub fn Table(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleTableCellInterface_Table(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#operator=)
    ///
    /// ``` self: QtC.QAccessibleTableCellInterface, param1: QtC.QAccessibleTableCellInterface ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAccessibleTableCellInterface_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#dtor.QAccessibleTableCellInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QAccessibleTableCellInterface ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleTableCellInterface_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qaccessibletableinterface.html
pub const qaccessibletableinterface = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletableinterface.html#caption)
    ///
    /// ``` self: QtC.QAccessibleTableInterface ```
    pub fn Caption(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleTableInterface_Caption(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletableinterface.html#summary)
    ///
    /// ``` self: QtC.QAccessibleTableInterface ```
    pub fn Summary(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleTableInterface_Summary(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletableinterface.html#cellAt)
    ///
    /// ``` self: QtC.QAccessibleTableInterface, row: i32, column: i32 ```
    pub fn CellAt(self: ?*anyopaque, row: i32, column: i32) QtC.QAccessibleInterface {
        return qtc.QAccessibleTableInterface_CellAt(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectedCellCount)
    ///
    /// ``` self: QtC.QAccessibleTableInterface ```
    pub fn SelectedCellCount(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTableInterface_SelectedCellCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectedCells)
    ///
    /// ``` self: QtC.QAccessibleTableInterface, allocator: std.mem.Allocator ```
    pub fn SelectedCells(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAccessibleInterface {
        const _arr: qtc.struct_libqt_list = qtc.QAccessibleTableInterface_SelectedCells(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAccessibleInterface, _arr.len) catch @panic("qaccessibletableinterface.SelectedCells: Memory allocation failed");
        const _data: [*]QtC.QAccessibleInterface = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletableinterface.html#columnDescription)
    ///
    /// ``` self: QtC.QAccessibleTableInterface, column: i32, allocator: std.mem.Allocator ```
    pub fn ColumnDescription(self: ?*anyopaque, column: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleTableInterface_ColumnDescription(@ptrCast(self), @intCast(column));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletableinterface.ColumnDescription: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletableinterface.html#rowDescription)
    ///
    /// ``` self: QtC.QAccessibleTableInterface, row: i32, allocator: std.mem.Allocator ```
    pub fn RowDescription(self: ?*anyopaque, row: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleTableInterface_RowDescription(@ptrCast(self), @intCast(row));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletableinterface.RowDescription: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectedColumnCount)
    ///
    /// ``` self: QtC.QAccessibleTableInterface ```
    pub fn SelectedColumnCount(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTableInterface_SelectedColumnCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectedRowCount)
    ///
    /// ``` self: QtC.QAccessibleTableInterface ```
    pub fn SelectedRowCount(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTableInterface_SelectedRowCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletableinterface.html#columnCount)
    ///
    /// ``` self: QtC.QAccessibleTableInterface ```
    pub fn ColumnCount(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTableInterface_ColumnCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletableinterface.html#rowCount)
    ///
    /// ``` self: QtC.QAccessibleTableInterface ```
    pub fn RowCount(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTableInterface_RowCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectedColumns)
    ///
    /// ``` self: QtC.QAccessibleTableInterface, allocator: std.mem.Allocator ```
    pub fn SelectedColumns(self: ?*anyopaque, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.struct_libqt_list = qtc.QAccessibleTableInterface_SelectedColumns(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qaccessibletableinterface.SelectedColumns: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectedRows)
    ///
    /// ``` self: QtC.QAccessibleTableInterface, allocator: std.mem.Allocator ```
    pub fn SelectedRows(self: ?*anyopaque, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.struct_libqt_list = qtc.QAccessibleTableInterface_SelectedRows(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qaccessibletableinterface.SelectedRows: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletableinterface.html#isColumnSelected)
    ///
    /// ``` self: QtC.QAccessibleTableInterface, column: i32 ```
    pub fn IsColumnSelected(self: ?*anyopaque, column: i32) bool {
        return qtc.QAccessibleTableInterface_IsColumnSelected(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletableinterface.html#isRowSelected)
    ///
    /// ``` self: QtC.QAccessibleTableInterface, row: i32 ```
    pub fn IsRowSelected(self: ?*anyopaque, row: i32) bool {
        return qtc.QAccessibleTableInterface_IsRowSelected(@ptrCast(self), @intCast(row));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectRow)
    ///
    /// ``` self: QtC.QAccessibleTableInterface, row: i32 ```
    pub fn SelectRow(self: ?*anyopaque, row: i32) bool {
        return qtc.QAccessibleTableInterface_SelectRow(@ptrCast(self), @intCast(row));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectColumn)
    ///
    /// ``` self: QtC.QAccessibleTableInterface, column: i32 ```
    pub fn SelectColumn(self: ?*anyopaque, column: i32) bool {
        return qtc.QAccessibleTableInterface_SelectColumn(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletableinterface.html#unselectRow)
    ///
    /// ``` self: QtC.QAccessibleTableInterface, row: i32 ```
    pub fn UnselectRow(self: ?*anyopaque, row: i32) bool {
        return qtc.QAccessibleTableInterface_UnselectRow(@ptrCast(self), @intCast(row));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletableinterface.html#unselectColumn)
    ///
    /// ``` self: QtC.QAccessibleTableInterface, column: i32 ```
    pub fn UnselectColumn(self: ?*anyopaque, column: i32) bool {
        return qtc.QAccessibleTableInterface_UnselectColumn(@ptrCast(self), @intCast(column));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletableinterface.html#modelChange)
    ///
    /// ``` self: QtC.QAccessibleTableInterface, event: QtC.QAccessibleTableModelChangeEvent ```
    pub fn ModelChange(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAccessibleTableInterface_ModelChange(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletableinterface.html#dtor.QAccessibleTableInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QAccessibleTableInterface ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleTableInterface_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qaccessibleactioninterface.html
pub const qaccessibleactioninterface = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` sourceText: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(sourceText: []const u8, allocator: std.mem.Allocator) []const u8 {
        const sourceText_Cstring = @constCast(sourceText.ptr);
        const _str = qtc.QAccessibleActionInterface_Tr(sourceText_Cstring);
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.Tr: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#actionNames)
    ///
    /// ``` self: QtC.QAccessibleActionInterface, allocator: std.mem.Allocator ```
    pub fn ActionNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.struct_libqt_list = qtc.QAccessibleActionInterface_ActionNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                qtc.libqt_string_free(@ptrCast(&_str[_i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qaccessibleactioninterface.ActionNames: Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qaccessibleactioninterface.ActionNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#localizedActionName)
    ///
    /// ``` self: QtC.QAccessibleActionInterface, name: []const u8, allocator: std.mem.Allocator ```
    pub fn LocalizedActionName(self: ?*anyopaque, name: []const u8, allocator: std.mem.Allocator) []const u8 {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = @constCast(name.ptr),
        };
        const _str = qtc.QAccessibleActionInterface_LocalizedActionName(@ptrCast(self), name_str);
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.LocalizedActionName: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#localizedActionDescription)
    ///
    /// ``` self: QtC.QAccessibleActionInterface, name: []const u8, allocator: std.mem.Allocator ```
    pub fn LocalizedActionDescription(self: ?*anyopaque, name: []const u8, allocator: std.mem.Allocator) []const u8 {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = @constCast(name.ptr),
        };
        const _str = qtc.QAccessibleActionInterface_LocalizedActionDescription(@ptrCast(self), name_str);
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.LocalizedActionDescription: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#doAction)
    ///
    /// ``` self: QtC.QAccessibleActionInterface, actionName: []const u8 ```
    pub fn DoAction(self: ?*anyopaque, actionName: []const u8) void {
        const actionName_str = qtc.struct_libqt_string{
            .len = actionName.len,
            .data = @constCast(actionName.ptr),
        };
        qtc.QAccessibleActionInterface_DoAction(@ptrCast(self), actionName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#keyBindingsForAction)
    ///
    /// ``` self: QtC.QAccessibleActionInterface, actionName: []const u8, allocator: std.mem.Allocator ```
    pub fn KeyBindingsForAction(self: ?*anyopaque, actionName: []const u8, allocator: std.mem.Allocator) [][]const u8 {
        const actionName_str = qtc.struct_libqt_string{
            .len = actionName.len,
            .data = @constCast(actionName.ptr),
        };
        const _arr: qtc.struct_libqt_list = qtc.QAccessibleActionInterface_KeyBindingsForAction(@ptrCast(self), actionName_str);
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                qtc.libqt_string_free(@ptrCast(&_str[_i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qaccessibleactioninterface.KeyBindingsForAction: Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qaccessibleactioninterface.KeyBindingsForAction: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#pressAction)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn PressAction(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleActionInterface_PressAction();
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.PressAction: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#increaseAction)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn IncreaseAction(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleActionInterface_IncreaseAction();
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.IncreaseAction: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#decreaseAction)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn DecreaseAction(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleActionInterface_DecreaseAction();
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.DecreaseAction: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#showMenuAction)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn ShowMenuAction(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleActionInterface_ShowMenuAction();
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.ShowMenuAction: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#setFocusAction)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn SetFocusAction(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleActionInterface_SetFocusAction();
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.SetFocusAction: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#toggleAction)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn ToggleAction(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleActionInterface_ToggleAction();
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.ToggleAction: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#scrollLeftAction)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn ScrollLeftAction(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleActionInterface_ScrollLeftAction();
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.ScrollLeftAction: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#scrollRightAction)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn ScrollRightAction(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleActionInterface_ScrollRightAction();
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.ScrollRightAction: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#scrollUpAction)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn ScrollUpAction(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleActionInterface_ScrollUpAction();
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.ScrollUpAction: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#scrollDownAction)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn ScrollDownAction(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleActionInterface_ScrollDownAction();
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.ScrollDownAction: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#nextPageAction)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn NextPageAction(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleActionInterface_NextPageAction();
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.NextPageAction: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#previousPageAction)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn PreviousPageAction(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleActionInterface_PreviousPageAction();
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.PreviousPageAction: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#operator=)
    ///
    /// ``` self: QtC.QAccessibleActionInterface, param1: QtC.QAccessibleActionInterface ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAccessibleActionInterface_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` sourceText: []const u8, disambiguation: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(sourceText: []const u8, disambiguation: []const u8, allocator: std.mem.Allocator) []const u8 {
        const sourceText_Cstring = @constCast(sourceText.ptr);
        const disambiguation_Cstring = @constCast(disambiguation.ptr);
        const _str = qtc.QAccessibleActionInterface_Tr2(sourceText_Cstring, disambiguation_Cstring);
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.Tr2: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` sourceText: []const u8, disambiguation: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(sourceText: []const u8, disambiguation: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const sourceText_Cstring = @constCast(sourceText.ptr);
        const disambiguation_Cstring = @constCast(disambiguation.ptr);
        const _str = qtc.QAccessibleActionInterface_Tr3(sourceText_Cstring, disambiguation_Cstring, @intCast(n));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.Tr3: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#dtor.QAccessibleActionInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QAccessibleActionInterface ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleActionInterface_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qaccessibleimageinterface.html
pub const qaccessibleimageinterface = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleimageinterface.html#imageDescription)
    ///
    /// ``` self: QtC.QAccessibleImageInterface, allocator: std.mem.Allocator ```
    pub fn ImageDescription(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleImageInterface_ImageDescription(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleimageinterface.ImageDescription: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleimageinterface.html#imageSize)
    ///
    /// ``` self: QtC.QAccessibleImageInterface ```
    pub fn ImageSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QAccessibleImageInterface_ImageSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleimageinterface.html#imagePosition)
    ///
    /// ``` self: QtC.QAccessibleImageInterface ```
    pub fn ImagePosition(self: ?*anyopaque) QtC.QPoint {
        return qtc.QAccessibleImageInterface_ImagePosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleimageinterface.html#operator=)
    ///
    /// ``` self: QtC.QAccessibleImageInterface, param1: QtC.QAccessibleImageInterface ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAccessibleImageInterface_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleimageinterface.html#dtor.QAccessibleImageInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QAccessibleImageInterface ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleImageInterface_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html
pub const qaccessiblehyperlinkinterface = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html#anchor)
    ///
    /// ``` self: QtC.QAccessibleHyperlinkInterface, allocator: std.mem.Allocator ```
    pub fn Anchor(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleHyperlinkInterface_Anchor(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblehyperlinkinterface.Anchor: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html#anchorTarget)
    ///
    /// ``` self: QtC.QAccessibleHyperlinkInterface, allocator: std.mem.Allocator ```
    pub fn AnchorTarget(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleHyperlinkInterface_AnchorTarget(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblehyperlinkinterface.AnchorTarget: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html#startIndex)
    ///
    /// ``` self: QtC.QAccessibleHyperlinkInterface ```
    pub fn StartIndex(self: ?*anyopaque) i32 {
        return qtc.QAccessibleHyperlinkInterface_StartIndex(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html#endIndex)
    ///
    /// ``` self: QtC.QAccessibleHyperlinkInterface ```
    pub fn EndIndex(self: ?*anyopaque) i32 {
        return qtc.QAccessibleHyperlinkInterface_EndIndex(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html#isValid)
    ///
    /// ``` self: QtC.QAccessibleHyperlinkInterface ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QAccessibleHyperlinkInterface_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html#operator=)
    ///
    /// ``` self: QtC.QAccessibleHyperlinkInterface, param1: QtC.QAccessibleHyperlinkInterface ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAccessibleHyperlinkInterface_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html#dtor.QAccessibleHyperlinkInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QAccessibleHyperlinkInterface ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleHyperlinkInterface_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qaccessibleevent.html
pub const qaccessibleevent = struct {
    /// New constructs a new QAccessibleEvent object.
    ///
    /// ``` obj: QtC.QObject, typ: qaccessible_base_enums.Event ```
    pub fn New(obj: ?*anyopaque, typ: i64) QtC.QAccessibleEvent {
        return qtc.QAccessibleEvent_new(@ptrCast(obj), @intCast(typ));
    }

    /// New2 constructs a new QAccessibleEvent object.
    ///
    /// ``` iface: QtC.QAccessibleInterface, typ: qaccessible_base_enums.Event ```
    pub fn New2(iface: ?*anyopaque, typ: i64) QtC.QAccessibleEvent {
        return qtc.QAccessibleEvent_new2(@ptrCast(iface), @intCast(typ));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
    ///
    /// ``` self: QtC.QAccessibleEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QAccessibleEvent_Type(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
    ///
    /// ``` self: QtC.QAccessibleEvent ```
    pub fn Object(self: ?*anyopaque) QtC.QObject {
        return qtc.QAccessibleEvent_Object(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
    ///
    /// ``` self: QtC.QAccessibleEvent ```
    pub fn UniqueId(self: ?*anyopaque) u32 {
        return qtc.QAccessibleEvent_UniqueId(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#setChild)
    ///
    /// ``` self: QtC.QAccessibleEvent, chld: i32 ```
    pub fn SetChild(self: ?*anyopaque, chld: i32) void {
        qtc.QAccessibleEvent_SetChild(@ptrCast(self), @intCast(chld));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
    ///
    /// ``` self: QtC.QAccessibleEvent ```
    pub fn Child(self: ?*anyopaque) i32 {
        return qtc.QAccessibleEvent_Child(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// ``` self: QtC.QAccessibleEvent ```
    pub fn AccessibleInterface(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleEvent_AccessibleInterface(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAccessibleEvent, slot: fn () callconv(.c) QtC.QAccessibleInterface ```
    pub fn OnAccessibleInterface(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleEvent_OnAccessibleInterface(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAccessibleEvent ```
    pub fn QBaseAccessibleInterface(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleEvent_QBaseAccessibleInterface(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#dtor.QAccessibleEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QAccessibleEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qaccessiblestatechangeevent.html
pub const qaccessiblestatechangeevent = struct {
    /// New constructs a new QAccessibleStateChangeEvent object.
    ///
    /// ``` obj: QtC.QObject, state: QtC.QAccessible__State ```
    pub fn New(obj: ?*anyopaque, state: QtC.QAccessible__State) QtC.QAccessibleStateChangeEvent {
        return qtc.QAccessibleStateChangeEvent_new(@ptrCast(obj), @ptrCast(state));
    }

    /// New2 constructs a new QAccessibleStateChangeEvent object.
    ///
    /// ``` iface: QtC.QAccessibleInterface, state: QtC.QAccessible__State ```
    pub fn New2(iface: ?*anyopaque, state: QtC.QAccessible__State) QtC.QAccessibleStateChangeEvent {
        return qtc.QAccessibleStateChangeEvent_new2(@ptrCast(iface), @ptrCast(state));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblestatechangeevent.html#changedStates)
    ///
    /// ``` self: QtC.QAccessibleStateChangeEvent ```
    pub fn ChangedStates(self: ?*anyopaque) QtC.QAccessible__State {
        return qtc.QAccessibleStateChangeEvent_ChangedStates(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
    ///
    /// ``` self: QtC.QAccessibleStateChangeEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QAccessibleEvent_Type(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
    ///
    /// ``` self: QtC.QAccessibleStateChangeEvent ```
    pub fn Object(self: ?*anyopaque) QtC.QObject {
        return qtc.QAccessibleEvent_Object(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
    ///
    /// ``` self: QtC.QAccessibleStateChangeEvent ```
    pub fn UniqueId(self: ?*anyopaque) u32 {
        return qtc.QAccessibleEvent_UniqueId(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#setChild)
    ///
    /// ``` self: QtC.QAccessibleStateChangeEvent, chld: i32 ```
    pub fn SetChild(self: ?*anyopaque, chld: i32) void {
        qtc.QAccessibleEvent_SetChild(@ptrCast(self), @intCast(chld));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
    ///
    /// ``` self: QtC.QAccessibleStateChangeEvent ```
    pub fn Child(self: ?*anyopaque) i32 {
        return qtc.QAccessibleEvent_Child(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleStateChangeEvent ```
    pub fn AccessibleInterface(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleStateChangeEvent_AccessibleInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleStateChangeEvent ```
    pub fn QBaseAccessibleInterface(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleStateChangeEvent_QBaseAccessibleInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleStateChangeEvent, slot: fn () callconv(.c) QtC.QAccessibleInterface ```
    pub fn OnAccessibleInterface(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleStateChangeEvent_OnAccessibleInterface(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblestatechangeevent.html#dtor.QAccessibleStateChangeEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QAccessibleStateChangeEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleStateChangeEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qaccessibletextcursorevent.html
pub const qaccessibletextcursorevent = struct {
    /// New constructs a new QAccessibleTextCursorEvent object.
    ///
    /// ``` obj: QtC.QObject, cursorPos: i32 ```
    pub fn New(obj: ?*anyopaque, cursorPos: i32) QtC.QAccessibleTextCursorEvent {
        return qtc.QAccessibleTextCursorEvent_new(@ptrCast(obj), @intCast(cursorPos));
    }

    /// New2 constructs a new QAccessibleTextCursorEvent object.
    ///
    /// ``` iface: QtC.QAccessibleInterface, cursorPos: i32 ```
    pub fn New2(iface: ?*anyopaque, cursorPos: i32) QtC.QAccessibleTextCursorEvent {
        return qtc.QAccessibleTextCursorEvent_new2(@ptrCast(iface), @intCast(cursorPos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#setCursorPosition)
    ///
    /// ``` self: QtC.QAccessibleTextCursorEvent, position: i32 ```
    pub fn SetCursorPosition(self: ?*anyopaque, position: i32) void {
        qtc.QAccessibleTextCursorEvent_SetCursorPosition(@ptrCast(self), @intCast(position));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#cursorPosition)
    ///
    /// ``` self: QtC.QAccessibleTextCursorEvent ```
    pub fn CursorPosition(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTextCursorEvent_CursorPosition(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
    ///
    /// ``` self: QtC.QAccessibleTextCursorEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QAccessibleEvent_Type(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
    ///
    /// ``` self: QtC.QAccessibleTextCursorEvent ```
    pub fn Object(self: ?*anyopaque) QtC.QObject {
        return qtc.QAccessibleEvent_Object(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
    ///
    /// ``` self: QtC.QAccessibleTextCursorEvent ```
    pub fn UniqueId(self: ?*anyopaque) u32 {
        return qtc.QAccessibleEvent_UniqueId(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#setChild)
    ///
    /// ``` self: QtC.QAccessibleTextCursorEvent, chld: i32 ```
    pub fn SetChild(self: ?*anyopaque, chld: i32) void {
        qtc.QAccessibleEvent_SetChild(@ptrCast(self), @intCast(chld));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
    ///
    /// ``` self: QtC.QAccessibleTextCursorEvent ```
    pub fn Child(self: ?*anyopaque) i32 {
        return qtc.QAccessibleEvent_Child(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleTextCursorEvent ```
    pub fn AccessibleInterface(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleTextCursorEvent_AccessibleInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleTextCursorEvent ```
    pub fn QBaseAccessibleInterface(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleTextCursorEvent_QBaseAccessibleInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleTextCursorEvent, slot: fn () callconv(.c) QtC.QAccessibleInterface ```
    pub fn OnAccessibleInterface(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleTextCursorEvent_OnAccessibleInterface(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#dtor.QAccessibleTextCursorEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QAccessibleTextCursorEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleTextCursorEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qaccessibletextselectionevent.html
pub const qaccessibletextselectionevent = struct {
    /// New constructs a new QAccessibleTextSelectionEvent object.
    ///
    /// ``` obj: QtC.QObject, start: i32, end: i32 ```
    pub fn New(obj: ?*anyopaque, start: i32, end: i32) QtC.QAccessibleTextSelectionEvent {
        return qtc.QAccessibleTextSelectionEvent_new(@ptrCast(obj), @intCast(start), @intCast(end));
    }

    /// New2 constructs a new QAccessibleTextSelectionEvent object.
    ///
    /// ``` iface: QtC.QAccessibleInterface, start: i32, end: i32 ```
    pub fn New2(iface: ?*anyopaque, start: i32, end: i32) QtC.QAccessibleTextSelectionEvent {
        return qtc.QAccessibleTextSelectionEvent_new2(@ptrCast(iface), @intCast(start), @intCast(end));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextselectionevent.html#setSelection)
    ///
    /// ``` self: QtC.QAccessibleTextSelectionEvent, start: i32, end: i32 ```
    pub fn SetSelection(self: ?*anyopaque, start: i32, end: i32) void {
        qtc.QAccessibleTextSelectionEvent_SetSelection(@ptrCast(self), @intCast(start), @intCast(end));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextselectionevent.html#selectionStart)
    ///
    /// ``` self: QtC.QAccessibleTextSelectionEvent ```
    pub fn SelectionStart(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTextSelectionEvent_SelectionStart(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextselectionevent.html#selectionEnd)
    ///
    /// ``` self: QtC.QAccessibleTextSelectionEvent ```
    pub fn SelectionEnd(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTextSelectionEvent_SelectionEnd(@ptrCast(self));
    }

    /// Inherited from QAccessibleTextCursorEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#setCursorPosition)
    ///
    /// ``` self: QtC.QAccessibleTextSelectionEvent, position: i32 ```
    pub fn SetCursorPosition(self: ?*anyopaque, position: i32) void {
        qtc.QAccessibleTextCursorEvent_SetCursorPosition(@ptrCast(self), @intCast(position));
    }

    /// Inherited from QAccessibleTextCursorEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#cursorPosition)
    ///
    /// ``` self: QtC.QAccessibleTextSelectionEvent ```
    pub fn CursorPosition(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTextCursorEvent_CursorPosition(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
    ///
    /// ``` self: QtC.QAccessibleTextSelectionEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QAccessibleEvent_Type(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
    ///
    /// ``` self: QtC.QAccessibleTextSelectionEvent ```
    pub fn Object(self: ?*anyopaque) QtC.QObject {
        return qtc.QAccessibleEvent_Object(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
    ///
    /// ``` self: QtC.QAccessibleTextSelectionEvent ```
    pub fn UniqueId(self: ?*anyopaque) u32 {
        return qtc.QAccessibleEvent_UniqueId(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#setChild)
    ///
    /// ``` self: QtC.QAccessibleTextSelectionEvent, chld: i32 ```
    pub fn SetChild(self: ?*anyopaque, chld: i32) void {
        qtc.QAccessibleEvent_SetChild(@ptrCast(self), @intCast(chld));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
    ///
    /// ``` self: QtC.QAccessibleTextSelectionEvent ```
    pub fn Child(self: ?*anyopaque) i32 {
        return qtc.QAccessibleEvent_Child(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleTextSelectionEvent ```
    pub fn AccessibleInterface(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleTextSelectionEvent_AccessibleInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleTextSelectionEvent ```
    pub fn QBaseAccessibleInterface(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleTextSelectionEvent_QBaseAccessibleInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleTextSelectionEvent, slot: fn () callconv(.c) QtC.QAccessibleInterface ```
    pub fn OnAccessibleInterface(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleTextSelectionEvent_OnAccessibleInterface(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextselectionevent.html#dtor.QAccessibleTextSelectionEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QAccessibleTextSelectionEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleTextSelectionEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qaccessibletextinsertevent.html
pub const qaccessibletextinsertevent = struct {
    /// New constructs a new QAccessibleTextInsertEvent object.
    ///
    /// ``` obj: QtC.QObject, position: i32, text: []const u8 ```
    pub fn New(obj: ?*anyopaque, position: i32, text: []const u8) QtC.QAccessibleTextInsertEvent {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };

        return qtc.QAccessibleTextInsertEvent_new(@ptrCast(obj), @intCast(position), text_str);
    }

    /// New2 constructs a new QAccessibleTextInsertEvent object.
    ///
    /// ``` iface: QtC.QAccessibleInterface, position: i32, text: []const u8 ```
    pub fn New2(iface: ?*anyopaque, position: i32, text: []const u8) QtC.QAccessibleTextInsertEvent {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };

        return qtc.QAccessibleTextInsertEvent_new2(@ptrCast(iface), @intCast(position), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextinsertevent.html#textInserted)
    ///
    /// ``` self: QtC.QAccessibleTextInsertEvent, allocator: std.mem.Allocator ```
    pub fn TextInserted(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleTextInsertEvent_TextInserted(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletextinsertevent.TextInserted: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextinsertevent.html#changePosition)
    ///
    /// ``` self: QtC.QAccessibleTextInsertEvent ```
    pub fn ChangePosition(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTextInsertEvent_ChangePosition(@ptrCast(self));
    }

    /// Inherited from QAccessibleTextCursorEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#setCursorPosition)
    ///
    /// ``` self: QtC.QAccessibleTextInsertEvent, position: i32 ```
    pub fn SetCursorPosition(self: ?*anyopaque, position: i32) void {
        qtc.QAccessibleTextCursorEvent_SetCursorPosition(@ptrCast(self), @intCast(position));
    }

    /// Inherited from QAccessibleTextCursorEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#cursorPosition)
    ///
    /// ``` self: QtC.QAccessibleTextInsertEvent ```
    pub fn CursorPosition(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTextCursorEvent_CursorPosition(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
    ///
    /// ``` self: QtC.QAccessibleTextInsertEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QAccessibleEvent_Type(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
    ///
    /// ``` self: QtC.QAccessibleTextInsertEvent ```
    pub fn Object(self: ?*anyopaque) QtC.QObject {
        return qtc.QAccessibleEvent_Object(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
    ///
    /// ``` self: QtC.QAccessibleTextInsertEvent ```
    pub fn UniqueId(self: ?*anyopaque) u32 {
        return qtc.QAccessibleEvent_UniqueId(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#setChild)
    ///
    /// ``` self: QtC.QAccessibleTextInsertEvent, chld: i32 ```
    pub fn SetChild(self: ?*anyopaque, chld: i32) void {
        qtc.QAccessibleEvent_SetChild(@ptrCast(self), @intCast(chld));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
    ///
    /// ``` self: QtC.QAccessibleTextInsertEvent ```
    pub fn Child(self: ?*anyopaque) i32 {
        return qtc.QAccessibleEvent_Child(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleTextInsertEvent ```
    pub fn AccessibleInterface(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleTextInsertEvent_AccessibleInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleTextInsertEvent ```
    pub fn QBaseAccessibleInterface(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleTextInsertEvent_QBaseAccessibleInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleTextInsertEvent, slot: fn () callconv(.c) QtC.QAccessibleInterface ```
    pub fn OnAccessibleInterface(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleTextInsertEvent_OnAccessibleInterface(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextinsertevent.html#dtor.QAccessibleTextInsertEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QAccessibleTextInsertEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleTextInsertEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qaccessibletextremoveevent.html
pub const qaccessibletextremoveevent = struct {
    /// New constructs a new QAccessibleTextRemoveEvent object.
    ///
    /// ``` obj: QtC.QObject, position: i32, text: []const u8 ```
    pub fn New(obj: ?*anyopaque, position: i32, text: []const u8) QtC.QAccessibleTextRemoveEvent {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };

        return qtc.QAccessibleTextRemoveEvent_new(@ptrCast(obj), @intCast(position), text_str);
    }

    /// New2 constructs a new QAccessibleTextRemoveEvent object.
    ///
    /// ``` iface: QtC.QAccessibleInterface, position: i32, text: []const u8 ```
    pub fn New2(iface: ?*anyopaque, position: i32, text: []const u8) QtC.QAccessibleTextRemoveEvent {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };

        return qtc.QAccessibleTextRemoveEvent_new2(@ptrCast(iface), @intCast(position), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextremoveevent.html#textRemoved)
    ///
    /// ``` self: QtC.QAccessibleTextRemoveEvent, allocator: std.mem.Allocator ```
    pub fn TextRemoved(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleTextRemoveEvent_TextRemoved(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletextremoveevent.TextRemoved: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextremoveevent.html#changePosition)
    ///
    /// ``` self: QtC.QAccessibleTextRemoveEvent ```
    pub fn ChangePosition(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTextRemoveEvent_ChangePosition(@ptrCast(self));
    }

    /// Inherited from QAccessibleTextCursorEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#setCursorPosition)
    ///
    /// ``` self: QtC.QAccessibleTextRemoveEvent, position: i32 ```
    pub fn SetCursorPosition(self: ?*anyopaque, position: i32) void {
        qtc.QAccessibleTextCursorEvent_SetCursorPosition(@ptrCast(self), @intCast(position));
    }

    /// Inherited from QAccessibleTextCursorEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#cursorPosition)
    ///
    /// ``` self: QtC.QAccessibleTextRemoveEvent ```
    pub fn CursorPosition(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTextCursorEvent_CursorPosition(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
    ///
    /// ``` self: QtC.QAccessibleTextRemoveEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QAccessibleEvent_Type(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
    ///
    /// ``` self: QtC.QAccessibleTextRemoveEvent ```
    pub fn Object(self: ?*anyopaque) QtC.QObject {
        return qtc.QAccessibleEvent_Object(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
    ///
    /// ``` self: QtC.QAccessibleTextRemoveEvent ```
    pub fn UniqueId(self: ?*anyopaque) u32 {
        return qtc.QAccessibleEvent_UniqueId(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#setChild)
    ///
    /// ``` self: QtC.QAccessibleTextRemoveEvent, chld: i32 ```
    pub fn SetChild(self: ?*anyopaque, chld: i32) void {
        qtc.QAccessibleEvent_SetChild(@ptrCast(self), @intCast(chld));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
    ///
    /// ``` self: QtC.QAccessibleTextRemoveEvent ```
    pub fn Child(self: ?*anyopaque) i32 {
        return qtc.QAccessibleEvent_Child(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleTextRemoveEvent ```
    pub fn AccessibleInterface(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleTextRemoveEvent_AccessibleInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleTextRemoveEvent ```
    pub fn QBaseAccessibleInterface(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleTextRemoveEvent_QBaseAccessibleInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleTextRemoveEvent, slot: fn () callconv(.c) QtC.QAccessibleInterface ```
    pub fn OnAccessibleInterface(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleTextRemoveEvent_OnAccessibleInterface(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextremoveevent.html#dtor.QAccessibleTextRemoveEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QAccessibleTextRemoveEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleTextRemoveEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qaccessibletextupdateevent.html
pub const qaccessibletextupdateevent = struct {
    /// New constructs a new QAccessibleTextUpdateEvent object.
    ///
    /// ``` obj: QtC.QObject, position: i32, oldText: []const u8, text: []const u8 ```
    pub fn New(obj: ?*anyopaque, position: i32, oldText: []const u8, text: []const u8) QtC.QAccessibleTextUpdateEvent {
        const oldText_str = qtc.struct_libqt_string{
            .len = oldText.len,
            .data = @constCast(oldText.ptr),
        };
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };

        return qtc.QAccessibleTextUpdateEvent_new(@ptrCast(obj), @intCast(position), oldText_str, text_str);
    }

    /// New2 constructs a new QAccessibleTextUpdateEvent object.
    ///
    /// ``` iface: QtC.QAccessibleInterface, position: i32, oldText: []const u8, text: []const u8 ```
    pub fn New2(iface: ?*anyopaque, position: i32, oldText: []const u8, text: []const u8) QtC.QAccessibleTextUpdateEvent {
        const oldText_str = qtc.struct_libqt_string{
            .len = oldText.len,
            .data = @constCast(oldText.ptr),
        };
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };

        return qtc.QAccessibleTextUpdateEvent_new2(@ptrCast(iface), @intCast(position), oldText_str, text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextupdateevent.html#textRemoved)
    ///
    /// ``` self: QtC.QAccessibleTextUpdateEvent, allocator: std.mem.Allocator ```
    pub fn TextRemoved(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleTextUpdateEvent_TextRemoved(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletextupdateevent.TextRemoved: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextupdateevent.html#textInserted)
    ///
    /// ``` self: QtC.QAccessibleTextUpdateEvent, allocator: std.mem.Allocator ```
    pub fn TextInserted(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleTextUpdateEvent_TextInserted(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletextupdateevent.TextInserted: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextupdateevent.html#changePosition)
    ///
    /// ``` self: QtC.QAccessibleTextUpdateEvent ```
    pub fn ChangePosition(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTextUpdateEvent_ChangePosition(@ptrCast(self));
    }

    /// Inherited from QAccessibleTextCursorEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#setCursorPosition)
    ///
    /// ``` self: QtC.QAccessibleTextUpdateEvent, position: i32 ```
    pub fn SetCursorPosition(self: ?*anyopaque, position: i32) void {
        qtc.QAccessibleTextCursorEvent_SetCursorPosition(@ptrCast(self), @intCast(position));
    }

    /// Inherited from QAccessibleTextCursorEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#cursorPosition)
    ///
    /// ``` self: QtC.QAccessibleTextUpdateEvent ```
    pub fn CursorPosition(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTextCursorEvent_CursorPosition(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
    ///
    /// ``` self: QtC.QAccessibleTextUpdateEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QAccessibleEvent_Type(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
    ///
    /// ``` self: QtC.QAccessibleTextUpdateEvent ```
    pub fn Object(self: ?*anyopaque) QtC.QObject {
        return qtc.QAccessibleEvent_Object(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
    ///
    /// ``` self: QtC.QAccessibleTextUpdateEvent ```
    pub fn UniqueId(self: ?*anyopaque) u32 {
        return qtc.QAccessibleEvent_UniqueId(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#setChild)
    ///
    /// ``` self: QtC.QAccessibleTextUpdateEvent, chld: i32 ```
    pub fn SetChild(self: ?*anyopaque, chld: i32) void {
        qtc.QAccessibleEvent_SetChild(@ptrCast(self), @intCast(chld));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
    ///
    /// ``` self: QtC.QAccessibleTextUpdateEvent ```
    pub fn Child(self: ?*anyopaque) i32 {
        return qtc.QAccessibleEvent_Child(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleTextUpdateEvent ```
    pub fn AccessibleInterface(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleTextUpdateEvent_AccessibleInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleTextUpdateEvent ```
    pub fn QBaseAccessibleInterface(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleTextUpdateEvent_QBaseAccessibleInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleTextUpdateEvent, slot: fn () callconv(.c) QtC.QAccessibleInterface ```
    pub fn OnAccessibleInterface(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleTextUpdateEvent_OnAccessibleInterface(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletextupdateevent.html#dtor.QAccessibleTextUpdateEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QAccessibleTextUpdateEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleTextUpdateEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qaccessiblevaluechangeevent.html
pub const qaccessiblevaluechangeevent = struct {
    /// New constructs a new QAccessibleValueChangeEvent object.
    ///
    /// ``` obj: QtC.QObject, val: QtC.QVariant ```
    pub fn New(obj: ?*anyopaque, val: ?*anyopaque) QtC.QAccessibleValueChangeEvent {
        return qtc.QAccessibleValueChangeEvent_new(@ptrCast(obj), @ptrCast(val));
    }

    /// New2 constructs a new QAccessibleValueChangeEvent object.
    ///
    /// ``` iface: QtC.QAccessibleInterface, val: QtC.QVariant ```
    pub fn New2(iface: ?*anyopaque, val: ?*anyopaque) QtC.QAccessibleValueChangeEvent {
        return qtc.QAccessibleValueChangeEvent_new2(@ptrCast(iface), @ptrCast(val));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblevaluechangeevent.html#setValue)
    ///
    /// ``` self: QtC.QAccessibleValueChangeEvent, val: QtC.QVariant ```
    pub fn SetValue(self: ?*anyopaque, val: ?*anyopaque) void {
        qtc.QAccessibleValueChangeEvent_SetValue(@ptrCast(self), @ptrCast(val));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblevaluechangeevent.html#value)
    ///
    /// ``` self: QtC.QAccessibleValueChangeEvent ```
    pub fn Value(self: ?*anyopaque) QtC.QVariant {
        return qtc.QAccessibleValueChangeEvent_Value(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
    ///
    /// ``` self: QtC.QAccessibleValueChangeEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QAccessibleEvent_Type(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
    ///
    /// ``` self: QtC.QAccessibleValueChangeEvent ```
    pub fn Object(self: ?*anyopaque) QtC.QObject {
        return qtc.QAccessibleEvent_Object(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
    ///
    /// ``` self: QtC.QAccessibleValueChangeEvent ```
    pub fn UniqueId(self: ?*anyopaque) u32 {
        return qtc.QAccessibleEvent_UniqueId(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#setChild)
    ///
    /// ``` self: QtC.QAccessibleValueChangeEvent, chld: i32 ```
    pub fn SetChild(self: ?*anyopaque, chld: i32) void {
        qtc.QAccessibleEvent_SetChild(@ptrCast(self), @intCast(chld));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
    ///
    /// ``` self: QtC.QAccessibleValueChangeEvent ```
    pub fn Child(self: ?*anyopaque) i32 {
        return qtc.QAccessibleEvent_Child(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleValueChangeEvent ```
    pub fn AccessibleInterface(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleValueChangeEvent_AccessibleInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleValueChangeEvent ```
    pub fn QBaseAccessibleInterface(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleValueChangeEvent_QBaseAccessibleInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleValueChangeEvent, slot: fn () callconv(.c) QtC.QAccessibleInterface ```
    pub fn OnAccessibleInterface(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleValueChangeEvent_OnAccessibleInterface(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessiblevaluechangeevent.html#dtor.QAccessibleValueChangeEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QAccessibleValueChangeEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleValueChangeEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html
pub const qaccessibletablemodelchangeevent = struct {
    /// New constructs a new QAccessibleTableModelChangeEvent object.
    ///
    /// ``` obj: QtC.QObject, changeType: qaccessible_enums.ModelChangeType ```
    pub fn New(obj: ?*anyopaque, changeType: i64) QtC.QAccessibleTableModelChangeEvent {
        return qtc.QAccessibleTableModelChangeEvent_new(@ptrCast(obj), @intCast(changeType));
    }

    /// New2 constructs a new QAccessibleTableModelChangeEvent object.
    ///
    /// ``` iface: QtC.QAccessibleInterface, changeType: qaccessible_enums.ModelChangeType ```
    pub fn New2(iface: ?*anyopaque, changeType: i64) QtC.QAccessibleTableModelChangeEvent {
        return qtc.QAccessibleTableModelChangeEvent_new2(@ptrCast(iface), @intCast(changeType));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#setModelChangeType)
    ///
    /// ``` self: QtC.QAccessibleTableModelChangeEvent, changeType: qaccessible_enums.ModelChangeType ```
    pub fn SetModelChangeType(self: ?*anyopaque, changeType: i64) void {
        qtc.QAccessibleTableModelChangeEvent_SetModelChangeType(@ptrCast(self), @intCast(changeType));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#modelChangeType)
    ///
    /// ``` self: QtC.QAccessibleTableModelChangeEvent ```
    pub fn ModelChangeType(self: ?*anyopaque) i64 {
        return qtc.QAccessibleTableModelChangeEvent_ModelChangeType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#setFirstRow)
    ///
    /// ``` self: QtC.QAccessibleTableModelChangeEvent, row: i32 ```
    pub fn SetFirstRow(self: ?*anyopaque, row: i32) void {
        qtc.QAccessibleTableModelChangeEvent_SetFirstRow(@ptrCast(self), @intCast(row));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#setFirstColumn)
    ///
    /// ``` self: QtC.QAccessibleTableModelChangeEvent, col: i32 ```
    pub fn SetFirstColumn(self: ?*anyopaque, col: i32) void {
        qtc.QAccessibleTableModelChangeEvent_SetFirstColumn(@ptrCast(self), @intCast(col));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#setLastRow)
    ///
    /// ``` self: QtC.QAccessibleTableModelChangeEvent, row: i32 ```
    pub fn SetLastRow(self: ?*anyopaque, row: i32) void {
        qtc.QAccessibleTableModelChangeEvent_SetLastRow(@ptrCast(self), @intCast(row));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#setLastColumn)
    ///
    /// ``` self: QtC.QAccessibleTableModelChangeEvent, col: i32 ```
    pub fn SetLastColumn(self: ?*anyopaque, col: i32) void {
        qtc.QAccessibleTableModelChangeEvent_SetLastColumn(@ptrCast(self), @intCast(col));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#firstRow)
    ///
    /// ``` self: QtC.QAccessibleTableModelChangeEvent ```
    pub fn FirstRow(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTableModelChangeEvent_FirstRow(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#firstColumn)
    ///
    /// ``` self: QtC.QAccessibleTableModelChangeEvent ```
    pub fn FirstColumn(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTableModelChangeEvent_FirstColumn(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#lastRow)
    ///
    /// ``` self: QtC.QAccessibleTableModelChangeEvent ```
    pub fn LastRow(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTableModelChangeEvent_LastRow(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#lastColumn)
    ///
    /// ``` self: QtC.QAccessibleTableModelChangeEvent ```
    pub fn LastColumn(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTableModelChangeEvent_LastColumn(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
    ///
    /// ``` self: QtC.QAccessibleTableModelChangeEvent ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QAccessibleEvent_Type(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
    ///
    /// ``` self: QtC.QAccessibleTableModelChangeEvent ```
    pub fn Object(self: ?*anyopaque) QtC.QObject {
        return qtc.QAccessibleEvent_Object(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
    ///
    /// ``` self: QtC.QAccessibleTableModelChangeEvent ```
    pub fn UniqueId(self: ?*anyopaque) u32 {
        return qtc.QAccessibleEvent_UniqueId(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#setChild)
    ///
    /// ``` self: QtC.QAccessibleTableModelChangeEvent, chld: i32 ```
    pub fn SetChild(self: ?*anyopaque, chld: i32) void {
        qtc.QAccessibleEvent_SetChild(@ptrCast(self), @intCast(chld));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
    ///
    /// ``` self: QtC.QAccessibleTableModelChangeEvent ```
    pub fn Child(self: ?*anyopaque) i32 {
        return qtc.QAccessibleEvent_Child(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleTableModelChangeEvent ```
    pub fn AccessibleInterface(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleTableModelChangeEvent_AccessibleInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleTableModelChangeEvent ```
    pub fn QBaseAccessibleInterface(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleTableModelChangeEvent_QBaseAccessibleInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleTableModelChangeEvent, slot: fn () callconv(.c) QtC.QAccessibleInterface ```
    pub fn OnAccessibleInterface(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleTableModelChangeEvent_OnAccessibleInterface(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#dtor.QAccessibleTableModelChangeEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QAccessibleTableModelChangeEvent ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleTableModelChangeEvent_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qaccessible.html#types
pub const enums = struct {
    pub const ModelChangeType = enum {
        pub const ModelReset: i32 = 0;
        pub const DataChanged: i32 = 1;
        pub const RowsInserted: i32 = 2;
        pub const ColumnsInserted: i32 = 3;
        pub const RowsRemoved: i32 = 4;
        pub const ColumnsRemoved: i32 = 5;
    };
};
