const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qaccessible_base_enums = @import("libqaccessible_base.zig").enums;
const qaccessible_enums = enums;
const std = @import("std");
const struct_qtcqaccessibleinterface_i32 = extern struct { first: QtC.QAccessibleInterface, second: i32 };

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html)
pub const qaccessibleinterface = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleInterface `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QAccessibleInterface_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#object)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleInterface `
    ///
    pub fn Object(self: ?*anyopaque) QtC.QObject {
        return qtc.QAccessibleInterface_Object(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#window)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleInterface `
    ///
    pub fn Window(self: ?*anyopaque) QtC.QWindow {
        return qtc.QAccessibleInterface_Window(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#relations)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleInterface `
    ///
    /// ` match: flag of qaccessible_base_enums.RelationFlag `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Relations(self: ?*anyopaque, match: i32, allocator: std.mem.Allocator) []struct_qtcqaccessibleinterface_i32 {
        const _arr: qtc.libqt_list = qtc.QAccessibleInterface_Relations(@ptrCast(self), @intCast(match));
        defer {
            const _pair: [*]qtc.libqt_pair = @ptrCast(@alignCast(_arr.data));
            for (0.._arr.len) |i| {
                qtc.libqt_free(_pair[i].first);
                qtc.libqt_free(_pair[i].second);
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(struct_qtcqaccessibleinterface_i32, _arr.len) catch @panic("qaccessibleinterface.Relations: Memory allocation failed");
        const _data: [*]struct_qtcqaccessibleinterface_i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#focusChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleInterface `
    ///
    pub fn FocusChild(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleInterface_FocusChild(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleInterface `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ChildAt(self: ?*anyopaque, x: i32, y: i32) QtC.QAccessibleInterface {
        return qtc.QAccessibleInterface_ChildAt(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleInterface `
    ///
    pub fn Parent(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleInterface_Parent(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#child)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleInterface `
    ///
    /// ` index: i32 `
    ///
    pub fn Child(self: ?*anyopaque, index: i32) QtC.QAccessibleInterface {
        return qtc.QAccessibleInterface_Child(@ptrCast(self), @intCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#childCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleInterface `
    ///
    pub fn ChildCount(self: ?*anyopaque) i32 {
        return qtc.QAccessibleInterface_ChildCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#indexOfChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleInterface `
    ///
    /// ` param1: QtC.QAccessibleInterface `
    ///
    pub fn IndexOfChild(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QAccessibleInterface_IndexOfChild(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleInterface `
    ///
    /// ` t: qaccessible_base_enums.Text `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: ?*anyopaque, t: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleInterface_Text(@ptrCast(self), @intCast(t));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleinterface.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleInterface `
    ///
    /// ` t: qaccessible_base_enums.Text `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: ?*anyopaque, t: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QAccessibleInterface_SetText(@ptrCast(self), @intCast(t), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleInterface `
    ///
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QAccessibleInterface_Rect(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#role)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleInterface `
    ///
    /// ## Returns:
    ///
    /// ` qaccessible_base_enums.Role `
    ///
    pub fn Role(self: ?*anyopaque) i32 {
        return qtc.QAccessibleInterface_Role(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleInterface `
    ///
    pub fn State(self: ?*anyopaque) QtC.QAccessible__State {
        return qtc.QAccessibleInterface_State(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#foregroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleInterface `
    ///
    pub fn ForegroundColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QAccessibleInterface_ForegroundColor(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#backgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleInterface `
    ///
    pub fn BackgroundColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QAccessibleInterface_BackgroundColor(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#textInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleInterface `
    ///
    pub fn TextInterface(self: ?*anyopaque) QtC.QAccessibleTextInterface {
        return qtc.QAccessibleInterface_TextInterface(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#editableTextInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleInterface `
    ///
    pub fn EditableTextInterface(self: ?*anyopaque) QtC.QAccessibleEditableTextInterface {
        return qtc.QAccessibleInterface_EditableTextInterface(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#valueInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleInterface `
    ///
    pub fn ValueInterface(self: ?*anyopaque) QtC.QAccessibleValueInterface {
        return qtc.QAccessibleInterface_ValueInterface(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#actionInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleInterface `
    ///
    pub fn ActionInterface(self: ?*anyopaque) QtC.QAccessibleActionInterface {
        return qtc.QAccessibleInterface_ActionInterface(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#imageInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleInterface `
    ///
    pub fn ImageInterface(self: ?*anyopaque) QtC.QAccessibleImageInterface {
        return qtc.QAccessibleInterface_ImageInterface(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleInterface `
    ///
    pub fn TableInterface(self: ?*anyopaque) QtC.QAccessibleTableInterface {
        return qtc.QAccessibleInterface_TableInterface(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableCellInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleInterface `
    ///
    pub fn TableCellInterface(self: ?*anyopaque) QtC.QAccessibleTableCellInterface {
        return qtc.QAccessibleInterface_TableCellInterface(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#hyperlinkInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleInterface `
    ///
    pub fn HyperlinkInterface(self: ?*anyopaque) QtC.QAccessibleHyperlinkInterface {
        return qtc.QAccessibleInterface_HyperlinkInterface(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#selectionInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleInterface `
    ///
    pub fn SelectionInterface(self: ?*anyopaque) QtC.QAccessibleSelectionInterface {
        return qtc.QAccessibleInterface_SelectionInterface(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#attributesInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleInterface `
    ///
    pub fn AttributesInterface(self: ?*anyopaque) QtC.QAccessibleAttributesInterface {
        return qtc.QAccessibleInterface_AttributesInterface(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#virtual_hook)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleInterface `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn VirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.QAccessibleInterface_VirtualHook(@ptrCast(self), @intCast(id), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#interface_cast)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleInterface `
    ///
    /// ` param1: qaccessible_base_enums.InterfaceType `
    ///
    pub fn InterfaceCast(self: ?*anyopaque, param1: i32) ?*anyopaque {
        return qtc.QAccessibleInterface_InterfaceCast(@ptrCast(self), @intCast(param1));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html)
pub const qaccessibletextinterface = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#selection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextInterface `
    ///
    /// ` selectionIndex: i32 `
    ///
    /// ` startOffset: *i32 `
    ///
    /// ` endOffset: *i32 `
    ///
    pub fn Selection(self: ?*anyopaque, selectionIndex: i32, startOffset: *i32, endOffset: *i32) void {
        qtc.QAccessibleTextInterface_Selection(@ptrCast(self), @intCast(selectionIndex), @ptrCast(startOffset), @ptrCast(endOffset));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#selectionCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextInterface `
    ///
    pub fn SelectionCount(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTextInterface_SelectionCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#addSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextInterface `
    ///
    /// ` startOffset: i32 `
    ///
    /// ` endOffset: i32 `
    ///
    pub fn AddSelection(self: ?*anyopaque, startOffset: i32, endOffset: i32) void {
        qtc.QAccessibleTextInterface_AddSelection(@ptrCast(self), @intCast(startOffset), @intCast(endOffset));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#removeSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextInterface `
    ///
    /// ` selectionIndex: i32 `
    ///
    pub fn RemoveSelection(self: ?*anyopaque, selectionIndex: i32) void {
        qtc.QAccessibleTextInterface_RemoveSelection(@ptrCast(self), @intCast(selectionIndex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#setSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextInterface `
    ///
    /// ` selectionIndex: i32 `
    ///
    /// ` startOffset: i32 `
    ///
    /// ` endOffset: i32 `
    ///
    pub fn SetSelection(self: ?*anyopaque, selectionIndex: i32, startOffset: i32, endOffset: i32) void {
        qtc.QAccessibleTextInterface_SetSelection(@ptrCast(self), @intCast(selectionIndex), @intCast(startOffset), @intCast(endOffset));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#cursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextInterface `
    ///
    pub fn CursorPosition(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTextInterface_CursorPosition(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#setCursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextInterface `
    ///
    /// ` position: i32 `
    ///
    pub fn SetCursorPosition(self: ?*anyopaque, position: i32) void {
        qtc.QAccessibleTextInterface_SetCursorPosition(@ptrCast(self), @intCast(position));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextInterface `
    ///
    /// ` startOffset: i32 `
    ///
    /// ` endOffset: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: ?*anyopaque, startOffset: i32, endOffset: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleTextInterface_Text(@ptrCast(self), @intCast(startOffset), @intCast(endOffset));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletextinterface.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#textBeforeOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextInterface `
    ///
    /// ` offset: i32 `
    ///
    /// ` boundaryType: qaccessible_base_enums.TextBoundaryType `
    ///
    /// ` startOffset: *i32 `
    ///
    /// ` endOffset: *i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TextBeforeOffset(self: ?*anyopaque, offset: i32, boundaryType: i32, startOffset: *i32, endOffset: *i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleTextInterface_TextBeforeOffset(@ptrCast(self), @intCast(offset), @intCast(boundaryType), @ptrCast(startOffset), @ptrCast(endOffset));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletextinterface.TextBeforeOffset: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#textAfterOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextInterface `
    ///
    /// ` offset: i32 `
    ///
    /// ` boundaryType: qaccessible_base_enums.TextBoundaryType `
    ///
    /// ` startOffset: *i32 `
    ///
    /// ` endOffset: *i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TextAfterOffset(self: ?*anyopaque, offset: i32, boundaryType: i32, startOffset: *i32, endOffset: *i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleTextInterface_TextAfterOffset(@ptrCast(self), @intCast(offset), @intCast(boundaryType), @ptrCast(startOffset), @ptrCast(endOffset));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletextinterface.TextAfterOffset: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#textAtOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextInterface `
    ///
    /// ` offset: i32 `
    ///
    /// ` boundaryType: qaccessible_base_enums.TextBoundaryType `
    ///
    /// ` startOffset: *i32 `
    ///
    /// ` endOffset: *i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TextAtOffset(self: ?*anyopaque, offset: i32, boundaryType: i32, startOffset: *i32, endOffset: *i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleTextInterface_TextAtOffset(@ptrCast(self), @intCast(offset), @intCast(boundaryType), @ptrCast(startOffset), @ptrCast(endOffset));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletextinterface.TextAtOffset: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#characterCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextInterface `
    ///
    pub fn CharacterCount(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTextInterface_CharacterCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#characterRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextInterface `
    ///
    /// ` offset: i32 `
    ///
    pub fn CharacterRect(self: ?*anyopaque, offset: i32) QtC.QRect {
        return qtc.QAccessibleTextInterface_CharacterRect(@ptrCast(self), @intCast(offset));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#offsetAtPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextInterface `
    ///
    /// ` point: QtC.QPoint `
    ///
    pub fn OffsetAtPoint(self: ?*anyopaque, point: ?*anyopaque) i32 {
        return qtc.QAccessibleTextInterface_OffsetAtPoint(@ptrCast(self), @ptrCast(point));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#scrollToSubstring)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextInterface `
    ///
    /// ` startIndex: i32 `
    ///
    /// ` endIndex: i32 `
    ///
    pub fn ScrollToSubstring(self: ?*anyopaque, startIndex: i32, endIndex: i32) void {
        qtc.QAccessibleTextInterface_ScrollToSubstring(@ptrCast(self), @intCast(startIndex), @intCast(endIndex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextInterface `
    ///
    /// ` offset: i32 `
    ///
    /// ` startOffset: *i32 `
    ///
    /// ` endOffset: *i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Attributes(self: ?*anyopaque, offset: i32, startOffset: *i32, endOffset: *i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleTextInterface_Attributes(@ptrCast(self), @intCast(offset), @ptrCast(startOffset), @ptrCast(endOffset));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletextinterface.Attributes: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextInterface `
    ///
    /// ` param1: QtC.QAccessibleTextInterface `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAccessibleTextInterface_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#dtor.QAccessibleTextInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QAccessibleTextInterface `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleTextInterface_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleeditabletextinterface.html)
pub const qaccessibleeditabletextinterface = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleeditabletextinterface.html#deleteText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleEditableTextInterface `
    ///
    /// ` startOffset: i32 `
    ///
    /// ` endOffset: i32 `
    ///
    pub fn DeleteText(self: ?*anyopaque, startOffset: i32, endOffset: i32) void {
        qtc.QAccessibleEditableTextInterface_DeleteText(@ptrCast(self), @intCast(startOffset), @intCast(endOffset));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleeditabletextinterface.html#insertText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleEditableTextInterface `
    ///
    /// ` offset: i32 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn InsertText(self: ?*anyopaque, offset: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QAccessibleEditableTextInterface_InsertText(@ptrCast(self), @intCast(offset), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleeditabletextinterface.html#replaceText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleEditableTextInterface `
    ///
    /// ` startOffset: i32 `
    ///
    /// ` endOffset: i32 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn ReplaceText(self: ?*anyopaque, startOffset: i32, endOffset: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QAccessibleEditableTextInterface_ReplaceText(@ptrCast(self), @intCast(startOffset), @intCast(endOffset), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleeditabletextinterface.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleEditableTextInterface `
    ///
    /// ` param1: QtC.QAccessibleEditableTextInterface `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAccessibleEditableTextInterface_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleeditabletextinterface.html#dtor.QAccessibleEditableTextInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QAccessibleEditableTextInterface `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleEditableTextInterface_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevalueinterface.html)
pub const qaccessiblevalueinterface = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevalueinterface.html#currentValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleValueInterface `
    ///
    pub fn CurrentValue(self: ?*anyopaque) QtC.QVariant {
        return qtc.QAccessibleValueInterface_CurrentValue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevalueinterface.html#setCurrentValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleValueInterface `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetCurrentValue(self: ?*anyopaque, value: ?*anyopaque) void {
        qtc.QAccessibleValueInterface_SetCurrentValue(@ptrCast(self), @ptrCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevalueinterface.html#maximumValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleValueInterface `
    ///
    pub fn MaximumValue(self: ?*anyopaque) QtC.QVariant {
        return qtc.QAccessibleValueInterface_MaximumValue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevalueinterface.html#minimumValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleValueInterface `
    ///
    pub fn MinimumValue(self: ?*anyopaque) QtC.QVariant {
        return qtc.QAccessibleValueInterface_MinimumValue(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevalueinterface.html#minimumStepSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleValueInterface `
    ///
    pub fn MinimumStepSize(self: ?*anyopaque) QtC.QVariant {
        return qtc.QAccessibleValueInterface_MinimumStepSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevalueinterface.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleValueInterface `
    ///
    /// ` param1: QtC.QAccessibleValueInterface `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAccessibleValueInterface_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevalueinterface.html#dtor.QAccessibleValueInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QAccessibleValueInterface `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleValueInterface_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html)
pub const qaccessibletablecellinterface = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#isSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTableCellInterface `
    ///
    pub fn IsSelected(self: ?*anyopaque) bool {
        return qtc.QAccessibleTableCellInterface_IsSelected(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#columnHeaderCells)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTableCellInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ColumnHeaderCells(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAccessibleInterface {
        const _arr: qtc.libqt_list = qtc.QAccessibleTableCellInterface_ColumnHeaderCells(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAccessibleInterface, _arr.len) catch @panic("qaccessibletablecellinterface.ColumnHeaderCells: Memory allocation failed");
        const _data: [*]QtC.QAccessibleInterface = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#rowHeaderCells)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTableCellInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn RowHeaderCells(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAccessibleInterface {
        const _arr: qtc.libqt_list = qtc.QAccessibleTableCellInterface_RowHeaderCells(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAccessibleInterface, _arr.len) catch @panic("qaccessibletablecellinterface.RowHeaderCells: Memory allocation failed");
        const _data: [*]QtC.QAccessibleInterface = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#columnIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTableCellInterface `
    ///
    pub fn ColumnIndex(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTableCellInterface_ColumnIndex(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#rowIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTableCellInterface `
    ///
    pub fn RowIndex(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTableCellInterface_RowIndex(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#columnExtent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTableCellInterface `
    ///
    pub fn ColumnExtent(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTableCellInterface_ColumnExtent(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#rowExtent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTableCellInterface `
    ///
    pub fn RowExtent(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTableCellInterface_RowExtent(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#table)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTableCellInterface `
    ///
    pub fn Table(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleTableCellInterface_Table(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTableCellInterface `
    ///
    /// ` param1: QtC.QAccessibleTableCellInterface `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAccessibleTableCellInterface_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#dtor.QAccessibleTableCellInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QAccessibleTableCellInterface `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleTableCellInterface_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html)
pub const qaccessibletableinterface = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#caption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTableInterface `
    ///
    pub fn Caption(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleTableInterface_Caption(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#summary)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTableInterface `
    ///
    pub fn Summary(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleTableInterface_Summary(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#cellAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTableInterface `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn CellAt(self: ?*anyopaque, row: i32, column: i32) QtC.QAccessibleInterface {
        return qtc.QAccessibleTableInterface_CellAt(@ptrCast(self), @intCast(row), @intCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectedCellCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTableInterface `
    ///
    pub fn SelectedCellCount(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTableInterface_SelectedCellCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectedCells)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTableInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectedCells(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAccessibleInterface {
        const _arr: qtc.libqt_list = qtc.QAccessibleTableInterface_SelectedCells(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAccessibleInterface, _arr.len) catch @panic("qaccessibletableinterface.SelectedCells: Memory allocation failed");
        const _data: [*]QtC.QAccessibleInterface = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#columnDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTableInterface `
    ///
    /// ` column: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ColumnDescription(self: ?*anyopaque, column: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleTableInterface_ColumnDescription(@ptrCast(self), @intCast(column));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletableinterface.ColumnDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#rowDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTableInterface `
    ///
    /// ` row: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn RowDescription(self: ?*anyopaque, row: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleTableInterface_RowDescription(@ptrCast(self), @intCast(row));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletableinterface.RowDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectedColumnCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTableInterface `
    ///
    pub fn SelectedColumnCount(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTableInterface_SelectedColumnCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectedRowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTableInterface `
    ///
    pub fn SelectedRowCount(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTableInterface_SelectedRowCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#columnCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTableInterface `
    ///
    pub fn ColumnCount(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTableInterface_ColumnCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#rowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTableInterface `
    ///
    pub fn RowCount(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTableInterface_RowCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectedColumns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTableInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectedColumns(self: ?*anyopaque, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QAccessibleTableInterface_SelectedColumns(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qaccessibletableinterface.SelectedColumns: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectedRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTableInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectedRows(self: ?*anyopaque, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QAccessibleTableInterface_SelectedRows(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qaccessibletableinterface.SelectedRows: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#isColumnSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTableInterface `
    ///
    /// ` column: i32 `
    ///
    pub fn IsColumnSelected(self: ?*anyopaque, column: i32) bool {
        return qtc.QAccessibleTableInterface_IsColumnSelected(@ptrCast(self), @intCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#isRowSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTableInterface `
    ///
    /// ` row: i32 `
    ///
    pub fn IsRowSelected(self: ?*anyopaque, row: i32) bool {
        return qtc.QAccessibleTableInterface_IsRowSelected(@ptrCast(self), @intCast(row));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTableInterface `
    ///
    /// ` row: i32 `
    ///
    pub fn SelectRow(self: ?*anyopaque, row: i32) bool {
        return qtc.QAccessibleTableInterface_SelectRow(@ptrCast(self), @intCast(row));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTableInterface `
    ///
    /// ` column: i32 `
    ///
    pub fn SelectColumn(self: ?*anyopaque, column: i32) bool {
        return qtc.QAccessibleTableInterface_SelectColumn(@ptrCast(self), @intCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#unselectRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTableInterface `
    ///
    /// ` row: i32 `
    ///
    pub fn UnselectRow(self: ?*anyopaque, row: i32) bool {
        return qtc.QAccessibleTableInterface_UnselectRow(@ptrCast(self), @intCast(row));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#unselectColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTableInterface `
    ///
    /// ` column: i32 `
    ///
    pub fn UnselectColumn(self: ?*anyopaque, column: i32) bool {
        return qtc.QAccessibleTableInterface_UnselectColumn(@ptrCast(self), @intCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#modelChange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTableInterface `
    ///
    /// ` event: QtC.QAccessibleTableModelChangeEvent `
    ///
    pub fn ModelChange(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAccessibleTableInterface_ModelChange(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#dtor.QAccessibleTableInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QAccessibleTableInterface `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleTableInterface_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html)
pub const qaccessibleactioninterface = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` sourceText: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr(sourceText: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        var _str = qtc.QObject_Tr(sourceText_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#actionNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleActionInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ActionNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.QAccessibleActionInterface_ActionNames(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qaccessibleactioninterface.ActionNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qaccessibleactioninterface.ActionNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#localizedActionName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleActionInterface `
    ///
    /// ` name: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocalizedActionName(self: ?*anyopaque, name: []const u8, allocator: std.mem.Allocator) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.QAccessibleActionInterface_LocalizedActionName(@ptrCast(self), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.LocalizedActionName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#localizedActionDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleActionInterface `
    ///
    /// ` name: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocalizedActionDescription(self: ?*anyopaque, name: []const u8, allocator: std.mem.Allocator) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.QAccessibleActionInterface_LocalizedActionDescription(@ptrCast(self), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.LocalizedActionDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#doAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleActionInterface `
    ///
    /// ` actionName: []const u8 `
    ///
    pub fn DoAction(self: ?*anyopaque, actionName: []const u8) void {
        const actionName_str = qtc.libqt_string{
            .len = actionName.len,
            .data = actionName.ptr,
        };
        qtc.QAccessibleActionInterface_DoAction(@ptrCast(self), actionName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#keyBindingsForAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleActionInterface `
    ///
    /// ` actionName: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn KeyBindingsForAction(self: ?*anyopaque, actionName: []const u8, allocator: std.mem.Allocator) [][]const u8 {
        const actionName_str = qtc.libqt_string{
            .len = actionName.len,
            .data = actionName.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QAccessibleActionInterface_KeyBindingsForAction(@ptrCast(self), actionName_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qaccessibleactioninterface.KeyBindingsForAction: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qaccessibleactioninterface.KeyBindingsForAction: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#pressAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PressAction(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleActionInterface_PressAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.PressAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#increaseAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn IncreaseAction(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleActionInterface_IncreaseAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.IncreaseAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#decreaseAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DecreaseAction(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleActionInterface_DecreaseAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.DecreaseAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#showMenuAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ShowMenuAction(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleActionInterface_ShowMenuAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.ShowMenuAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#setFocusAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SetFocusAction(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleActionInterface_SetFocusAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.SetFocusAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#toggleAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToggleAction(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleActionInterface_ToggleAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.ToggleAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#scrollLeftAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ScrollLeftAction(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleActionInterface_ScrollLeftAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.ScrollLeftAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#scrollRightAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ScrollRightAction(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleActionInterface_ScrollRightAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.ScrollRightAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#scrollUpAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ScrollUpAction(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleActionInterface_ScrollUpAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.ScrollUpAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#scrollDownAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ScrollDownAction(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleActionInterface_ScrollDownAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.ScrollDownAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#nextPageAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NextPageAction(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleActionInterface_NextPageAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.NextPageAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#previousPageAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PreviousPageAction(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleActionInterface_PreviousPageAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.PreviousPageAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleActionInterface `
    ///
    /// ` param1: QtC.QAccessibleActionInterface `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAccessibleActionInterface_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` sourceText: [:0]const u8 `
    ///
    /// ` disambiguation: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(sourceText: [:0]const u8, disambiguation: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        var _str = qtc.QObject_Tr2(sourceText_Cstring, disambiguation_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` sourceText: [:0]const u8 `
    ///
    /// ` disambiguation: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr3(sourceText: [:0]const u8, disambiguation: [:0]const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        var _str = qtc.QObject_Tr3(sourceText_Cstring, disambiguation_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#dtor.QAccessibleActionInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QAccessibleActionInterface `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleActionInterface_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleimageinterface.html)
pub const qaccessibleimageinterface = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleimageinterface.html#imageDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleImageInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ImageDescription(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleImageInterface_ImageDescription(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleimageinterface.ImageDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleimageinterface.html#imageSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleImageInterface `
    ///
    pub fn ImageSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QAccessibleImageInterface_ImageSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleimageinterface.html#imagePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleImageInterface `
    ///
    pub fn ImagePosition(self: ?*anyopaque) QtC.QPoint {
        return qtc.QAccessibleImageInterface_ImagePosition(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleimageinterface.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleImageInterface `
    ///
    /// ` param1: QtC.QAccessibleImageInterface `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAccessibleImageInterface_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleimageinterface.html#dtor.QAccessibleImageInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QAccessibleImageInterface `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleImageInterface_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html)
pub const qaccessiblehyperlinkinterface = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html#anchor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleHyperlinkInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Anchor(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleHyperlinkInterface_Anchor(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblehyperlinkinterface.Anchor: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html#anchorTarget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleHyperlinkInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AnchorTarget(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleHyperlinkInterface_AnchorTarget(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblehyperlinkinterface.AnchorTarget: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html#startIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleHyperlinkInterface `
    ///
    pub fn StartIndex(self: ?*anyopaque) i32 {
        return qtc.QAccessibleHyperlinkInterface_StartIndex(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html#endIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleHyperlinkInterface `
    ///
    pub fn EndIndex(self: ?*anyopaque) i32 {
        return qtc.QAccessibleHyperlinkInterface_EndIndex(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleHyperlinkInterface `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QAccessibleHyperlinkInterface_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleHyperlinkInterface `
    ///
    /// ` param1: QtC.QAccessibleHyperlinkInterface `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAccessibleHyperlinkInterface_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html#dtor.QAccessibleHyperlinkInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QAccessibleHyperlinkInterface `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleHyperlinkInterface_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html)
pub const qaccessibleselectioninterface = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html#selectedItemCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleSelectionInterface `
    ///
    pub fn SelectedItemCount(self: ?*anyopaque) i32 {
        return qtc.QAccessibleSelectionInterface_SelectedItemCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html#selectedItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleSelectionInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectedItems(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAccessibleInterface {
        const _arr: qtc.libqt_list = qtc.QAccessibleSelectionInterface_SelectedItems(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAccessibleInterface, _arr.len) catch @panic("qaccessibleselectioninterface.SelectedItems: Memory allocation failed");
        const _data: [*]QtC.QAccessibleInterface = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html#selectedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleSelectionInterface `
    ///
    /// ` selectionIndex: i32 `
    ///
    pub fn SelectedItem(self: ?*anyopaque, selectionIndex: i32) QtC.QAccessibleInterface {
        return qtc.QAccessibleSelectionInterface_SelectedItem(@ptrCast(self), @intCast(selectionIndex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html#isSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleSelectionInterface `
    ///
    /// ` childItem: QtC.QAccessibleInterface `
    ///
    pub fn IsSelected(self: ?*anyopaque, childItem: ?*anyopaque) bool {
        return qtc.QAccessibleSelectionInterface_IsSelected(@ptrCast(self), @ptrCast(childItem));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html#select)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleSelectionInterface `
    ///
    /// ` childItem: QtC.QAccessibleInterface `
    ///
    pub fn Select(self: ?*anyopaque, childItem: ?*anyopaque) bool {
        return qtc.QAccessibleSelectionInterface_Select(@ptrCast(self), @ptrCast(childItem));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html#unselect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleSelectionInterface `
    ///
    /// ` childItem: QtC.QAccessibleInterface `
    ///
    pub fn Unselect(self: ?*anyopaque, childItem: ?*anyopaque) bool {
        return qtc.QAccessibleSelectionInterface_Unselect(@ptrCast(self), @ptrCast(childItem));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html#selectAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleSelectionInterface `
    ///
    pub fn SelectAll(self: ?*anyopaque) bool {
        return qtc.QAccessibleSelectionInterface_SelectAll(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleSelectionInterface `
    ///
    pub fn Clear(self: ?*anyopaque) bool {
        return qtc.QAccessibleSelectionInterface_Clear(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleSelectionInterface `
    ///
    /// ` param1: QtC.QAccessibleSelectionInterface `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAccessibleSelectionInterface_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html#dtor.QAccessibleSelectionInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QAccessibleSelectionInterface `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleSelectionInterface_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleattributesinterface.html)
pub const qaccessibleattributesinterface = struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleattributesinterface.html#attributeKeys)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleAttributesInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` []qaccessible_base_enums.Attribute `
    ///
    pub fn AttributeKeys(self: ?*anyopaque, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QAccessibleAttributesInterface_AttributeKeys(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qaccessibleattributesinterface.AttributeKeys: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleattributesinterface.html#attributeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleAttributesInterface `
    ///
    /// ` key: qaccessible_base_enums.Attribute `
    ///
    pub fn AttributeValue(self: ?*anyopaque, key: i32) QtC.QVariant {
        return qtc.QAccessibleAttributesInterface_AttributeValue(@ptrCast(self), @intCast(key));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleattributesinterface.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleAttributesInterface `
    ///
    /// ` param1: QtC.QAccessibleAttributesInterface `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAccessibleAttributesInterface_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleattributesinterface.html#dtor.QAccessibleAttributesInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QAccessibleAttributesInterface `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleAttributesInterface_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html)
pub const qaccessibleevent = struct {
    /// New constructs a new QAccessibleEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QtC.QObject `
    ///
    /// ` typ: qaccessible_base_enums.Event `
    ///
    pub fn New(obj: ?*anyopaque, typ: i32) QtC.QAccessibleEvent {
        return qtc.QAccessibleEvent_new(@ptrCast(obj), @intCast(typ));
    }

    /// New2 constructs a new QAccessibleEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` iface: QtC.QAccessibleInterface `
    ///
    /// ` typ: qaccessible_base_enums.Event `
    ///
    pub fn New2(iface: ?*anyopaque, typ: i32) QtC.QAccessibleEvent {
        return qtc.QAccessibleEvent_new2(@ptrCast(iface), @intCast(typ));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleEvent `
    ///
    /// ## Returns:
    ///
    /// ` qaccessible_base_enums.Event `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QAccessibleEvent_Type(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleEvent `
    ///
    pub fn Object(self: ?*anyopaque) QtC.QObject {
        return qtc.QAccessibleEvent_Object(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleEvent `
    ///
    pub fn UniqueId(self: ?*anyopaque) u32 {
        return qtc.QAccessibleEvent_UniqueId(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#setChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleEvent `
    ///
    /// ` chld: i32 `
    ///
    pub fn SetChild(self: ?*anyopaque, chld: i32) void {
        qtc.QAccessibleEvent_SetChild(@ptrCast(self), @intCast(chld));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleEvent `
    ///
    pub fn Child(self: ?*anyopaque) i32 {
        return qtc.QAccessibleEvent_Child(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleEvent `
    ///
    pub fn AccessibleInterface(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleEvent_AccessibleInterface(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAccessibleEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QAccessibleInterface `
    ///
    pub fn OnAccessibleInterface(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleEvent_OnAccessibleInterface(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleEvent `
    ///
    pub fn QBaseAccessibleInterface(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleEvent_QBaseAccessibleInterface(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#dtor.QAccessibleEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QAccessibleEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblestatechangeevent.html)
pub const qaccessiblestatechangeevent = struct {
    /// New constructs a new QAccessibleStateChangeEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QtC.QObject `
    ///
    /// ` state: QtC.QAccessible__State `
    ///
    pub fn New(obj: ?*anyopaque, state: QtC.QAccessible__State) QtC.QAccessibleStateChangeEvent {
        return qtc.QAccessibleStateChangeEvent_new(@ptrCast(obj), @ptrCast(state));
    }

    /// New2 constructs a new QAccessibleStateChangeEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` iface: QtC.QAccessibleInterface `
    ///
    /// ` state: QtC.QAccessible__State `
    ///
    pub fn New2(iface: ?*anyopaque, state: QtC.QAccessible__State) QtC.QAccessibleStateChangeEvent {
        return qtc.QAccessibleStateChangeEvent_new2(@ptrCast(iface), @ptrCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblestatechangeevent.html#changedStates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleStateChangeEvent `
    ///
    pub fn ChangedStates(self: ?*anyopaque) QtC.QAccessible__State {
        return qtc.QAccessibleStateChangeEvent_ChangedStates(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleStateChangeEvent `
    ///
    /// ## Returns:
    ///
    /// ` qaccessible_base_enums.Event `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QAccessibleEvent_Type(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleStateChangeEvent `
    ///
    pub fn Object(self: ?*anyopaque) QtC.QObject {
        return qtc.QAccessibleEvent_Object(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleStateChangeEvent `
    ///
    pub fn UniqueId(self: ?*anyopaque) u32 {
        return qtc.QAccessibleEvent_UniqueId(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#setChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleStateChangeEvent `
    ///
    /// ` chld: i32 `
    ///
    pub fn SetChild(self: ?*anyopaque, chld: i32) void {
        qtc.QAccessibleEvent_SetChild(@ptrCast(self), @intCast(chld));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleStateChangeEvent `
    ///
    pub fn Child(self: ?*anyopaque) i32 {
        return qtc.QAccessibleEvent_Child(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleStateChangeEvent `
    ///
    pub fn AccessibleInterface(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleStateChangeEvent_AccessibleInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleStateChangeEvent `
    ///
    pub fn QBaseAccessibleInterface(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleStateChangeEvent_QBaseAccessibleInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAccessibleStateChangeEvent`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QAccessibleInterface `
    ///
    pub fn OnAccessibleInterface(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleStateChangeEvent_OnAccessibleInterface(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblestatechangeevent.html#dtor.QAccessibleStateChangeEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QAccessibleStateChangeEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleStateChangeEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html)
pub const qaccessibletextcursorevent = struct {
    /// New constructs a new QAccessibleTextCursorEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QtC.QObject `
    ///
    /// ` cursorPos: i32 `
    ///
    pub fn New(obj: ?*anyopaque, cursorPos: i32) QtC.QAccessibleTextCursorEvent {
        return qtc.QAccessibleTextCursorEvent_new(@ptrCast(obj), @intCast(cursorPos));
    }

    /// New2 constructs a new QAccessibleTextCursorEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` iface: QtC.QAccessibleInterface `
    ///
    /// ` cursorPos: i32 `
    ///
    pub fn New2(iface: ?*anyopaque, cursorPos: i32) QtC.QAccessibleTextCursorEvent {
        return qtc.QAccessibleTextCursorEvent_new2(@ptrCast(iface), @intCast(cursorPos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#setCursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextCursorEvent `
    ///
    /// ` position: i32 `
    ///
    pub fn SetCursorPosition(self: ?*anyopaque, position: i32) void {
        qtc.QAccessibleTextCursorEvent_SetCursorPosition(@ptrCast(self), @intCast(position));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#cursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextCursorEvent `
    ///
    pub fn CursorPosition(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTextCursorEvent_CursorPosition(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextCursorEvent `
    ///
    /// ## Returns:
    ///
    /// ` qaccessible_base_enums.Event `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QAccessibleEvent_Type(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextCursorEvent `
    ///
    pub fn Object(self: ?*anyopaque) QtC.QObject {
        return qtc.QAccessibleEvent_Object(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextCursorEvent `
    ///
    pub fn UniqueId(self: ?*anyopaque) u32 {
        return qtc.QAccessibleEvent_UniqueId(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#setChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextCursorEvent `
    ///
    /// ` chld: i32 `
    ///
    pub fn SetChild(self: ?*anyopaque, chld: i32) void {
        qtc.QAccessibleEvent_SetChild(@ptrCast(self), @intCast(chld));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextCursorEvent `
    ///
    pub fn Child(self: ?*anyopaque) i32 {
        return qtc.QAccessibleEvent_Child(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextCursorEvent `
    ///
    pub fn AccessibleInterface(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleTextCursorEvent_AccessibleInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextCursorEvent `
    ///
    pub fn QBaseAccessibleInterface(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleTextCursorEvent_QBaseAccessibleInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAccessibleTextCursorEvent`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QAccessibleInterface `
    ///
    pub fn OnAccessibleInterface(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleTextCursorEvent_OnAccessibleInterface(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#dtor.QAccessibleTextCursorEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QAccessibleTextCursorEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleTextCursorEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextselectionevent.html)
pub const qaccessibletextselectionevent = struct {
    /// New constructs a new QAccessibleTextSelectionEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QtC.QObject `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn New(obj: ?*anyopaque, start: i32, end: i32) QtC.QAccessibleTextSelectionEvent {
        return qtc.QAccessibleTextSelectionEvent_new(@ptrCast(obj), @intCast(start), @intCast(end));
    }

    /// New2 constructs a new QAccessibleTextSelectionEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` iface: QtC.QAccessibleInterface `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn New2(iface: ?*anyopaque, start: i32, end: i32) QtC.QAccessibleTextSelectionEvent {
        return qtc.QAccessibleTextSelectionEvent_new2(@ptrCast(iface), @intCast(start), @intCast(end));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextselectionevent.html#setSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextSelectionEvent `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn SetSelection(self: ?*anyopaque, start: i32, end: i32) void {
        qtc.QAccessibleTextSelectionEvent_SetSelection(@ptrCast(self), @intCast(start), @intCast(end));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextselectionevent.html#selectionStart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextSelectionEvent `
    ///
    pub fn SelectionStart(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTextSelectionEvent_SelectionStart(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextselectionevent.html#selectionEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextSelectionEvent `
    ///
    pub fn SelectionEnd(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTextSelectionEvent_SelectionEnd(@ptrCast(self));
    }

    /// Inherited from QAccessibleTextCursorEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#setCursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextSelectionEvent `
    ///
    /// ` position: i32 `
    ///
    pub fn SetCursorPosition(self: ?*anyopaque, position: i32) void {
        qtc.QAccessibleTextCursorEvent_SetCursorPosition(@ptrCast(self), @intCast(position));
    }

    /// Inherited from QAccessibleTextCursorEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#cursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextSelectionEvent `
    ///
    pub fn CursorPosition(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTextCursorEvent_CursorPosition(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextSelectionEvent `
    ///
    /// ## Returns:
    ///
    /// ` qaccessible_base_enums.Event `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QAccessibleEvent_Type(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextSelectionEvent `
    ///
    pub fn Object(self: ?*anyopaque) QtC.QObject {
        return qtc.QAccessibleEvent_Object(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextSelectionEvent `
    ///
    pub fn UniqueId(self: ?*anyopaque) u32 {
        return qtc.QAccessibleEvent_UniqueId(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#setChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextSelectionEvent `
    ///
    /// ` chld: i32 `
    ///
    pub fn SetChild(self: ?*anyopaque, chld: i32) void {
        qtc.QAccessibleEvent_SetChild(@ptrCast(self), @intCast(chld));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextSelectionEvent `
    ///
    pub fn Child(self: ?*anyopaque) i32 {
        return qtc.QAccessibleEvent_Child(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextSelectionEvent `
    ///
    pub fn AccessibleInterface(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleTextSelectionEvent_AccessibleInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextSelectionEvent `
    ///
    pub fn QBaseAccessibleInterface(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleTextSelectionEvent_QBaseAccessibleInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAccessibleTextSelectionEvent`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QAccessibleInterface `
    ///
    pub fn OnAccessibleInterface(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleTextSelectionEvent_OnAccessibleInterface(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextselectionevent.html#dtor.QAccessibleTextSelectionEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QAccessibleTextSelectionEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleTextSelectionEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinsertevent.html)
pub const qaccessibletextinsertevent = struct {
    /// New constructs a new QAccessibleTextInsertEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QtC.QObject `
    ///
    /// ` position: i32 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn New(obj: ?*anyopaque, position: i32, text: []const u8) QtC.QAccessibleTextInsertEvent {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.QAccessibleTextInsertEvent_new(@ptrCast(obj), @intCast(position), text_str);
    }

    /// New2 constructs a new QAccessibleTextInsertEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` iface: QtC.QAccessibleInterface `
    ///
    /// ` position: i32 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn New2(iface: ?*anyopaque, position: i32, text: []const u8) QtC.QAccessibleTextInsertEvent {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.QAccessibleTextInsertEvent_new2(@ptrCast(iface), @intCast(position), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinsertevent.html#textInserted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextInsertEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TextInserted(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleTextInsertEvent_TextInserted(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletextinsertevent.TextInserted: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinsertevent.html#changePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextInsertEvent `
    ///
    pub fn ChangePosition(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTextInsertEvent_ChangePosition(@ptrCast(self));
    }

    /// Inherited from QAccessibleTextCursorEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#setCursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextInsertEvent `
    ///
    /// ` position: i32 `
    ///
    pub fn SetCursorPosition(self: ?*anyopaque, position: i32) void {
        qtc.QAccessibleTextCursorEvent_SetCursorPosition(@ptrCast(self), @intCast(position));
    }

    /// Inherited from QAccessibleTextCursorEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#cursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextInsertEvent `
    ///
    pub fn CursorPosition(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTextCursorEvent_CursorPosition(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextInsertEvent `
    ///
    /// ## Returns:
    ///
    /// ` qaccessible_base_enums.Event `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QAccessibleEvent_Type(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextInsertEvent `
    ///
    pub fn Object(self: ?*anyopaque) QtC.QObject {
        return qtc.QAccessibleEvent_Object(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextInsertEvent `
    ///
    pub fn UniqueId(self: ?*anyopaque) u32 {
        return qtc.QAccessibleEvent_UniqueId(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#setChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextInsertEvent `
    ///
    /// ` chld: i32 `
    ///
    pub fn SetChild(self: ?*anyopaque, chld: i32) void {
        qtc.QAccessibleEvent_SetChild(@ptrCast(self), @intCast(chld));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextInsertEvent `
    ///
    pub fn Child(self: ?*anyopaque) i32 {
        return qtc.QAccessibleEvent_Child(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextInsertEvent `
    ///
    pub fn AccessibleInterface(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleTextInsertEvent_AccessibleInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextInsertEvent `
    ///
    pub fn QBaseAccessibleInterface(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleTextInsertEvent_QBaseAccessibleInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAccessibleTextInsertEvent`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QAccessibleInterface `
    ///
    pub fn OnAccessibleInterface(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleTextInsertEvent_OnAccessibleInterface(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinsertevent.html#dtor.QAccessibleTextInsertEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QAccessibleTextInsertEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleTextInsertEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextremoveevent.html)
pub const qaccessibletextremoveevent = struct {
    /// New constructs a new QAccessibleTextRemoveEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QtC.QObject `
    ///
    /// ` position: i32 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn New(obj: ?*anyopaque, position: i32, text: []const u8) QtC.QAccessibleTextRemoveEvent {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.QAccessibleTextRemoveEvent_new(@ptrCast(obj), @intCast(position), text_str);
    }

    /// New2 constructs a new QAccessibleTextRemoveEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` iface: QtC.QAccessibleInterface `
    ///
    /// ` position: i32 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn New2(iface: ?*anyopaque, position: i32, text: []const u8) QtC.QAccessibleTextRemoveEvent {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.QAccessibleTextRemoveEvent_new2(@ptrCast(iface), @intCast(position), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextremoveevent.html#textRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextRemoveEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TextRemoved(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleTextRemoveEvent_TextRemoved(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletextremoveevent.TextRemoved: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextremoveevent.html#changePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextRemoveEvent `
    ///
    pub fn ChangePosition(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTextRemoveEvent_ChangePosition(@ptrCast(self));
    }

    /// Inherited from QAccessibleTextCursorEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#setCursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextRemoveEvent `
    ///
    /// ` position: i32 `
    ///
    pub fn SetCursorPosition(self: ?*anyopaque, position: i32) void {
        qtc.QAccessibleTextCursorEvent_SetCursorPosition(@ptrCast(self), @intCast(position));
    }

    /// Inherited from QAccessibleTextCursorEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#cursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextRemoveEvent `
    ///
    pub fn CursorPosition(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTextCursorEvent_CursorPosition(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextRemoveEvent `
    ///
    /// ## Returns:
    ///
    /// ` qaccessible_base_enums.Event `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QAccessibleEvent_Type(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextRemoveEvent `
    ///
    pub fn Object(self: ?*anyopaque) QtC.QObject {
        return qtc.QAccessibleEvent_Object(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextRemoveEvent `
    ///
    pub fn UniqueId(self: ?*anyopaque) u32 {
        return qtc.QAccessibleEvent_UniqueId(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#setChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextRemoveEvent `
    ///
    /// ` chld: i32 `
    ///
    pub fn SetChild(self: ?*anyopaque, chld: i32) void {
        qtc.QAccessibleEvent_SetChild(@ptrCast(self), @intCast(chld));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextRemoveEvent `
    ///
    pub fn Child(self: ?*anyopaque) i32 {
        return qtc.QAccessibleEvent_Child(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextRemoveEvent `
    ///
    pub fn AccessibleInterface(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleTextRemoveEvent_AccessibleInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextRemoveEvent `
    ///
    pub fn QBaseAccessibleInterface(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleTextRemoveEvent_QBaseAccessibleInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAccessibleTextRemoveEvent`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QAccessibleInterface `
    ///
    pub fn OnAccessibleInterface(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleTextRemoveEvent_OnAccessibleInterface(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextremoveevent.html#dtor.QAccessibleTextRemoveEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QAccessibleTextRemoveEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleTextRemoveEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextupdateevent.html)
pub const qaccessibletextupdateevent = struct {
    /// New constructs a new QAccessibleTextUpdateEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QtC.QObject `
    ///
    /// ` position: i32 `
    ///
    /// ` oldText: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn New(obj: ?*anyopaque, position: i32, oldText: []const u8, text: []const u8) QtC.QAccessibleTextUpdateEvent {
        const oldText_str = qtc.libqt_string{
            .len = oldText.len,
            .data = oldText.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.QAccessibleTextUpdateEvent_new(@ptrCast(obj), @intCast(position), oldText_str, text_str);
    }

    /// New2 constructs a new QAccessibleTextUpdateEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` iface: QtC.QAccessibleInterface `
    ///
    /// ` position: i32 `
    ///
    /// ` oldText: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn New2(iface: ?*anyopaque, position: i32, oldText: []const u8, text: []const u8) QtC.QAccessibleTextUpdateEvent {
        const oldText_str = qtc.libqt_string{
            .len = oldText.len,
            .data = oldText.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };

        return qtc.QAccessibleTextUpdateEvent_new2(@ptrCast(iface), @intCast(position), oldText_str, text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextupdateevent.html#textRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextUpdateEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TextRemoved(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleTextUpdateEvent_TextRemoved(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletextupdateevent.TextRemoved: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextupdateevent.html#textInserted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextUpdateEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TextInserted(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleTextUpdateEvent_TextInserted(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletextupdateevent.TextInserted: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextupdateevent.html#changePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextUpdateEvent `
    ///
    pub fn ChangePosition(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTextUpdateEvent_ChangePosition(@ptrCast(self));
    }

    /// Inherited from QAccessibleTextCursorEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#setCursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextUpdateEvent `
    ///
    /// ` position: i32 `
    ///
    pub fn SetCursorPosition(self: ?*anyopaque, position: i32) void {
        qtc.QAccessibleTextCursorEvent_SetCursorPosition(@ptrCast(self), @intCast(position));
    }

    /// Inherited from QAccessibleTextCursorEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#cursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextUpdateEvent `
    ///
    pub fn CursorPosition(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTextCursorEvent_CursorPosition(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextUpdateEvent `
    ///
    /// ## Returns:
    ///
    /// ` qaccessible_base_enums.Event `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QAccessibleEvent_Type(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextUpdateEvent `
    ///
    pub fn Object(self: ?*anyopaque) QtC.QObject {
        return qtc.QAccessibleEvent_Object(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextUpdateEvent `
    ///
    pub fn UniqueId(self: ?*anyopaque) u32 {
        return qtc.QAccessibleEvent_UniqueId(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#setChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextUpdateEvent `
    ///
    /// ` chld: i32 `
    ///
    pub fn SetChild(self: ?*anyopaque, chld: i32) void {
        qtc.QAccessibleEvent_SetChild(@ptrCast(self), @intCast(chld));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextUpdateEvent `
    ///
    pub fn Child(self: ?*anyopaque) i32 {
        return qtc.QAccessibleEvent_Child(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextUpdateEvent `
    ///
    pub fn AccessibleInterface(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleTextUpdateEvent_AccessibleInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTextUpdateEvent `
    ///
    pub fn QBaseAccessibleInterface(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleTextUpdateEvent_QBaseAccessibleInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAccessibleTextUpdateEvent`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QAccessibleInterface `
    ///
    pub fn OnAccessibleInterface(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleTextUpdateEvent_OnAccessibleInterface(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextupdateevent.html#dtor.QAccessibleTextUpdateEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QAccessibleTextUpdateEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleTextUpdateEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevaluechangeevent.html)
pub const qaccessiblevaluechangeevent = struct {
    /// New constructs a new QAccessibleValueChangeEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QtC.QObject `
    ///
    /// ` val: QtC.QVariant `
    ///
    pub fn New(obj: ?*anyopaque, val: ?*anyopaque) QtC.QAccessibleValueChangeEvent {
        return qtc.QAccessibleValueChangeEvent_new(@ptrCast(obj), @ptrCast(val));
    }

    /// New2 constructs a new QAccessibleValueChangeEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` iface: QtC.QAccessibleInterface `
    ///
    /// ` val: QtC.QVariant `
    ///
    pub fn New2(iface: ?*anyopaque, val: ?*anyopaque) QtC.QAccessibleValueChangeEvent {
        return qtc.QAccessibleValueChangeEvent_new2(@ptrCast(iface), @ptrCast(val));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevaluechangeevent.html#setValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleValueChangeEvent `
    ///
    /// ` val: QtC.QVariant `
    ///
    pub fn SetValue(self: ?*anyopaque, val: ?*anyopaque) void {
        qtc.QAccessibleValueChangeEvent_SetValue(@ptrCast(self), @ptrCast(val));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevaluechangeevent.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleValueChangeEvent `
    ///
    pub fn Value(self: ?*anyopaque) QtC.QVariant {
        return qtc.QAccessibleValueChangeEvent_Value(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleValueChangeEvent `
    ///
    /// ## Returns:
    ///
    /// ` qaccessible_base_enums.Event `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QAccessibleEvent_Type(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleValueChangeEvent `
    ///
    pub fn Object(self: ?*anyopaque) QtC.QObject {
        return qtc.QAccessibleEvent_Object(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleValueChangeEvent `
    ///
    pub fn UniqueId(self: ?*anyopaque) u32 {
        return qtc.QAccessibleEvent_UniqueId(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#setChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleValueChangeEvent `
    ///
    /// ` chld: i32 `
    ///
    pub fn SetChild(self: ?*anyopaque, chld: i32) void {
        qtc.QAccessibleEvent_SetChild(@ptrCast(self), @intCast(chld));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleValueChangeEvent `
    ///
    pub fn Child(self: ?*anyopaque) i32 {
        return qtc.QAccessibleEvent_Child(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleValueChangeEvent `
    ///
    pub fn AccessibleInterface(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleValueChangeEvent_AccessibleInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleValueChangeEvent `
    ///
    pub fn QBaseAccessibleInterface(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleValueChangeEvent_QBaseAccessibleInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAccessibleValueChangeEvent`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QAccessibleInterface `
    ///
    pub fn OnAccessibleInterface(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleValueChangeEvent_OnAccessibleInterface(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevaluechangeevent.html#dtor.QAccessibleValueChangeEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QAccessibleValueChangeEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleValueChangeEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html)
pub const qaccessibletablemodelchangeevent = struct {
    /// New constructs a new QAccessibleTableModelChangeEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QtC.QObject `
    ///
    /// ` changeType: qaccessible_enums.ModelChangeType `
    ///
    pub fn New(obj: ?*anyopaque, changeType: i32) QtC.QAccessibleTableModelChangeEvent {
        return qtc.QAccessibleTableModelChangeEvent_new(@ptrCast(obj), @intCast(changeType));
    }

    /// New2 constructs a new QAccessibleTableModelChangeEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` iface: QtC.QAccessibleInterface `
    ///
    /// ` changeType: qaccessible_enums.ModelChangeType `
    ///
    pub fn New2(iface: ?*anyopaque, changeType: i32) QtC.QAccessibleTableModelChangeEvent {
        return qtc.QAccessibleTableModelChangeEvent_new2(@ptrCast(iface), @intCast(changeType));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#setModelChangeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTableModelChangeEvent `
    ///
    /// ` changeType: qaccessible_enums.ModelChangeType `
    ///
    pub fn SetModelChangeType(self: ?*anyopaque, changeType: i32) void {
        qtc.QAccessibleTableModelChangeEvent_SetModelChangeType(@ptrCast(self), @intCast(changeType));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#modelChangeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTableModelChangeEvent `
    ///
    /// ## Returns:
    ///
    /// ` qaccessible_enums.ModelChangeType `
    ///
    pub fn ModelChangeType(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTableModelChangeEvent_ModelChangeType(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#setFirstRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTableModelChangeEvent `
    ///
    /// ` row: i32 `
    ///
    pub fn SetFirstRow(self: ?*anyopaque, row: i32) void {
        qtc.QAccessibleTableModelChangeEvent_SetFirstRow(@ptrCast(self), @intCast(row));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#setFirstColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTableModelChangeEvent `
    ///
    /// ` col: i32 `
    ///
    pub fn SetFirstColumn(self: ?*anyopaque, col: i32) void {
        qtc.QAccessibleTableModelChangeEvent_SetFirstColumn(@ptrCast(self), @intCast(col));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#setLastRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTableModelChangeEvent `
    ///
    /// ` row: i32 `
    ///
    pub fn SetLastRow(self: ?*anyopaque, row: i32) void {
        qtc.QAccessibleTableModelChangeEvent_SetLastRow(@ptrCast(self), @intCast(row));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#setLastColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTableModelChangeEvent `
    ///
    /// ` col: i32 `
    ///
    pub fn SetLastColumn(self: ?*anyopaque, col: i32) void {
        qtc.QAccessibleTableModelChangeEvent_SetLastColumn(@ptrCast(self), @intCast(col));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#firstRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTableModelChangeEvent `
    ///
    pub fn FirstRow(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTableModelChangeEvent_FirstRow(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#firstColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTableModelChangeEvent `
    ///
    pub fn FirstColumn(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTableModelChangeEvent_FirstColumn(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#lastRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTableModelChangeEvent `
    ///
    pub fn LastRow(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTableModelChangeEvent_LastRow(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#lastColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTableModelChangeEvent `
    ///
    pub fn LastColumn(self: ?*anyopaque) i32 {
        return qtc.QAccessibleTableModelChangeEvent_LastColumn(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTableModelChangeEvent `
    ///
    /// ## Returns:
    ///
    /// ` qaccessible_base_enums.Event `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QAccessibleEvent_Type(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTableModelChangeEvent `
    ///
    pub fn Object(self: ?*anyopaque) QtC.QObject {
        return qtc.QAccessibleEvent_Object(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTableModelChangeEvent `
    ///
    pub fn UniqueId(self: ?*anyopaque) u32 {
        return qtc.QAccessibleEvent_UniqueId(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#setChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTableModelChangeEvent `
    ///
    /// ` chld: i32 `
    ///
    pub fn SetChild(self: ?*anyopaque, chld: i32) void {
        qtc.QAccessibleEvent_SetChild(@ptrCast(self), @intCast(chld));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTableModelChangeEvent `
    ///
    pub fn Child(self: ?*anyopaque) i32 {
        return qtc.QAccessibleEvent_Child(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTableModelChangeEvent `
    ///
    pub fn AccessibleInterface(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleTableModelChangeEvent_AccessibleInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleTableModelChangeEvent `
    ///
    pub fn QBaseAccessibleInterface(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleTableModelChangeEvent_QBaseAccessibleInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAccessibleTableModelChangeEvent`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QAccessibleInterface `
    ///
    pub fn OnAccessibleInterface(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleTableModelChangeEvent_OnAccessibleInterface(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#dtor.QAccessibleTableModelChangeEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QAccessibleTableModelChangeEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleTableModelChangeEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleannouncementevent.html)
pub const qaccessibleannouncementevent = struct {
    /// New constructs a new QAccessibleAnnouncementEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` object: QtC.QObject `
    ///
    /// ` message: []const u8 `
    ///
    pub fn New(object: ?*anyopaque, message: []const u8) QtC.QAccessibleAnnouncementEvent {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };

        return qtc.QAccessibleAnnouncementEvent_new(@ptrCast(object), message_str);
    }

    /// New2 constructs a new QAccessibleAnnouncementEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` iface: QtC.QAccessibleInterface `
    ///
    /// ` message: []const u8 `
    ///
    pub fn New2(iface: ?*anyopaque, message: []const u8) QtC.QAccessibleAnnouncementEvent {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };

        return qtc.QAccessibleAnnouncementEvent_new2(@ptrCast(iface), message_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleannouncementevent.html#message)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleAnnouncementEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Message(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleAnnouncementEvent_Message(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleannouncementevent.Message: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleannouncementevent.html#politeness)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleAnnouncementEvent `
    ///
    /// ## Returns:
    ///
    /// ` qaccessible_base_enums.AnnouncementPoliteness `
    ///
    pub fn Politeness(self: ?*anyopaque) i32 {
        return qtc.QAccessibleAnnouncementEvent_Politeness(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleannouncementevent.html#setPoliteness)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleAnnouncementEvent `
    ///
    /// ` politeness: qaccessible_base_enums.AnnouncementPoliteness `
    ///
    pub fn SetPoliteness(self: ?*anyopaque, politeness: i32) void {
        qtc.QAccessibleAnnouncementEvent_SetPoliteness(@ptrCast(self), @intCast(politeness));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleAnnouncementEvent `
    ///
    /// ## Returns:
    ///
    /// ` qaccessible_base_enums.Event `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QAccessibleEvent_Type(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleAnnouncementEvent `
    ///
    pub fn Object(self: ?*anyopaque) QtC.QObject {
        return qtc.QAccessibleEvent_Object(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleAnnouncementEvent `
    ///
    pub fn UniqueId(self: ?*anyopaque) u32 {
        return qtc.QAccessibleEvent_UniqueId(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#setChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleAnnouncementEvent `
    ///
    /// ` chld: i32 `
    ///
    pub fn SetChild(self: ?*anyopaque, chld: i32) void {
        qtc.QAccessibleEvent_SetChild(@ptrCast(self), @intCast(chld));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleAnnouncementEvent `
    ///
    pub fn Child(self: ?*anyopaque) i32 {
        return qtc.QAccessibleEvent_Child(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleAnnouncementEvent `
    ///
    pub fn AccessibleInterface(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleAnnouncementEvent_AccessibleInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleAnnouncementEvent `
    ///
    pub fn QBaseAccessibleInterface(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleAnnouncementEvent_QBaseAccessibleInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAccessibleAnnouncementEvent`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QAccessibleInterface `
    ///
    pub fn OnAccessibleInterface(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleAnnouncementEvent_OnAccessibleInterface(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleannouncementevent.html#dtor.QAccessibleAnnouncementEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QAccessibleAnnouncementEvent `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleAnnouncementEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html#public-types)
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
