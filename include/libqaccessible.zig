const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAccessible__State = @import("libqt6").QAccessible__State;
const QColor = @import("libqt6").QColor;
const QObject = @import("libqt6").QObject;
const QPoint = @import("libqt6").QPoint;
const QRect = @import("libqt6").QRect;
const QSize = @import("libqt6").QSize;
const QVariant = @import("libqt6").QVariant;
const QWindow = @import("libqt6").QWindow;
const qaccessible_base_enums = @import("libqaccessible_base.zig").enums;
const qaccessible_enums = enums;
const std = @import("std");
const Struct_QAccessibleInterface_i32 = extern struct { first: QAccessibleInterface, second: i32 };

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html)
pub const QAccessibleInterface = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAccessibleInterface,

    pub const _is_QAccessibleInterface = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    pub fn IsValid(self: QAccessibleInterface) bool {
        return qtc.QAccessibleInterface_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#object)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    pub fn Object(self: QAccessibleInterface) QObject {
        return .{ .ptr = qtc.QAccessibleInterface_Object(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#window)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    pub fn Window(self: QAccessibleInterface) QWindow {
        return .{ .ptr = qtc.QAccessibleInterface_Window(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#relations)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` match: flag of qaccessible_base_enums.RelationFlag `
    ///
    pub fn Relations(self: QAccessibleInterface, allocator: std.mem.Allocator, match: i32) []Struct_QAccessibleInterface_i32 {
        const _arr: qtc.libqt_list = qtc.QAccessibleInterface_Relations(@ptrCast(self.ptr), @bitCast(match));
        const _data: [*]Struct_QAccessibleInterface_i32 = @ptrCast(@alignCast(_arr.data));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Struct_QAccessibleInterface_i32, _arr.len) catch @panic("qaccessibleinterface.Relations: Memory allocation failed");
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#focusChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    pub fn FocusChild(self: QAccessibleInterface) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleInterface_FocusChild(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ChildAt(self: QAccessibleInterface, x: i32, y: i32) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleInterface_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    pub fn Parent(self: QAccessibleInterface) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleInterface_Parent(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#child)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    /// ` index: i32 `
    ///
    pub fn Child(self: QAccessibleInterface, index: i32) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleInterface_Child(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#childCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    pub fn ChildCount(self: QAccessibleInterface) i32 {
        return qtc.QAccessibleInterface_ChildCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#indexOfChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    /// ` param1: QAccessibleInterface `
    ///
    pub fn IndexOfChild(self: QAccessibleInterface, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QAccessibleInterface;
        return qtc.QAccessibleInterface_IndexOfChild(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` t: qaccessible_base_enums.Text `
    ///
    pub fn Text(self: QAccessibleInterface, allocator: std.mem.Allocator, t: i32) []const u8 {
        var _str = qtc.QAccessibleInterface_Text(@ptrCast(self.ptr), @bitCast(t));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleinterface.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    /// ` t: qaccessible_base_enums.Text `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: QAccessibleInterface, t: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QAccessibleInterface_SetText(@ptrCast(self.ptr), @bitCast(t), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    pub fn Rect(self: QAccessibleInterface) QRect {
        return .{ .ptr = qtc.QAccessibleInterface_Rect(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#role)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    /// ## Returns:
    ///
    /// ` qaccessible_base_enums.Role `
    ///
    pub fn Role(self: QAccessibleInterface) i32 {
        return qtc.QAccessibleInterface_Role(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    pub fn State(self: QAccessibleInterface) QAccessible__State {
        return .{ .ptr = qtc.QAccessibleInterface_State(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#foregroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    pub fn ForegroundColor(self: QAccessibleInterface) QColor {
        return .{ .ptr = qtc.QAccessibleInterface_ForegroundColor(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#backgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    pub fn BackgroundColor(self: QAccessibleInterface) QColor {
        return .{ .ptr = qtc.QAccessibleInterface_BackgroundColor(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#textInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    pub fn TextInterface(self: QAccessibleInterface) QAccessibleTextInterface {
        return .{ .ptr = qtc.QAccessibleInterface_TextInterface(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#editableTextInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    pub fn EditableTextInterface(self: QAccessibleInterface) QAccessibleEditableTextInterface {
        return .{ .ptr = qtc.QAccessibleInterface_EditableTextInterface(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#valueInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    pub fn ValueInterface(self: QAccessibleInterface) QAccessibleValueInterface {
        return .{ .ptr = qtc.QAccessibleInterface_ValueInterface(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#actionInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    pub fn ActionInterface(self: QAccessibleInterface) QAccessibleActionInterface {
        return .{ .ptr = qtc.QAccessibleInterface_ActionInterface(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#imageInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    pub fn ImageInterface(self: QAccessibleInterface) QAccessibleImageInterface {
        return .{ .ptr = qtc.QAccessibleInterface_ImageInterface(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    pub fn TableInterface(self: QAccessibleInterface) QAccessibleTableInterface {
        return .{ .ptr = qtc.QAccessibleInterface_TableInterface(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableCellInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    pub fn TableCellInterface(self: QAccessibleInterface) QAccessibleTableCellInterface {
        return .{ .ptr = qtc.QAccessibleInterface_TableCellInterface(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#hyperlinkInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    pub fn HyperlinkInterface(self: QAccessibleInterface) QAccessibleHyperlinkInterface {
        return .{ .ptr = qtc.QAccessibleInterface_HyperlinkInterface(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#selectionInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    pub fn SelectionInterface(self: QAccessibleInterface) QAccessibleSelectionInterface {
        return .{ .ptr = qtc.QAccessibleInterface_SelectionInterface(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#attributesInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    pub fn AttributesInterface(self: QAccessibleInterface) QAccessibleAttributesInterface {
        return .{ .ptr = qtc.QAccessibleInterface_AttributesInterface(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#virtual_hook)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn VirtualHook(self: QAccessibleInterface, id: i32, data: ?*anyopaque) void {
        qtc.QAccessibleInterface_VirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#interface_cast)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    /// ` param1: qaccessible_base_enums.InterfaceType `
    ///
    pub fn InterfaceCast(self: QAccessibleInterface, param1: i32) ?*anyopaque {
        return qtc.QAccessibleInterface_InterfaceCast(@ptrCast(self.ptr), @bitCast(param1));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html)
pub const QAccessibleTextInterface = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAccessibleTextInterface,

    pub const _is_QAccessibleTextInterface = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#selection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextInterface `
    ///
    /// ` selectionIndex: i32 `
    ///
    /// ` startOffset: *i32 `
    ///
    /// ` endOffset: *i32 `
    ///
    pub fn Selection(self: QAccessibleTextInterface, selectionIndex: i32, startOffset: *i32, endOffset: *i32) void {
        qtc.QAccessibleTextInterface_Selection(@ptrCast(self.ptr), @bitCast(selectionIndex), @ptrCast(startOffset), @ptrCast(endOffset));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#selectionCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextInterface `
    ///
    pub fn SelectionCount(self: QAccessibleTextInterface) i32 {
        return qtc.QAccessibleTextInterface_SelectionCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#addSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextInterface `
    ///
    /// ` startOffset: i32 `
    ///
    /// ` endOffset: i32 `
    ///
    pub fn AddSelection(self: QAccessibleTextInterface, startOffset: i32, endOffset: i32) void {
        qtc.QAccessibleTextInterface_AddSelection(@ptrCast(self.ptr), @bitCast(startOffset), @bitCast(endOffset));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#removeSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextInterface `
    ///
    /// ` selectionIndex: i32 `
    ///
    pub fn RemoveSelection(self: QAccessibleTextInterface, selectionIndex: i32) void {
        qtc.QAccessibleTextInterface_RemoveSelection(@ptrCast(self.ptr), @bitCast(selectionIndex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#setSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextInterface `
    ///
    /// ` selectionIndex: i32 `
    ///
    /// ` startOffset: i32 `
    ///
    /// ` endOffset: i32 `
    ///
    pub fn SetSelection(self: QAccessibleTextInterface, selectionIndex: i32, startOffset: i32, endOffset: i32) void {
        qtc.QAccessibleTextInterface_SetSelection(@ptrCast(self.ptr), @bitCast(selectionIndex), @bitCast(startOffset), @bitCast(endOffset));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#cursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextInterface `
    ///
    pub fn CursorPosition(self: QAccessibleTextInterface) i32 {
        return qtc.QAccessibleTextInterface_CursorPosition(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#setCursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextInterface `
    ///
    /// ` position: i32 `
    ///
    pub fn SetCursorPosition(self: QAccessibleTextInterface, position: i32) void {
        qtc.QAccessibleTextInterface_SetCursorPosition(@ptrCast(self.ptr), @bitCast(position));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` startOffset: i32 `
    ///
    /// ` endOffset: i32 `
    ///
    pub fn Text(self: QAccessibleTextInterface, allocator: std.mem.Allocator, startOffset: i32, endOffset: i32) []const u8 {
        var _str = qtc.QAccessibleTextInterface_Text(@ptrCast(self.ptr), @bitCast(startOffset), @bitCast(endOffset));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletextinterface.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#textBeforeOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` offset: i32 `
    ///
    /// ` boundaryType: qaccessible_base_enums.TextBoundaryType `
    ///
    /// ` startOffset: *i32 `
    ///
    /// ` endOffset: *i32 `
    ///
    pub fn TextBeforeOffset(self: QAccessibleTextInterface, allocator: std.mem.Allocator, offset: i32, boundaryType: i32, startOffset: *i32, endOffset: *i32) []const u8 {
        var _str = qtc.QAccessibleTextInterface_TextBeforeOffset(@ptrCast(self.ptr), @bitCast(offset), @bitCast(boundaryType), @ptrCast(startOffset), @ptrCast(endOffset));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletextinterface.TextBeforeOffset: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#textAfterOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` offset: i32 `
    ///
    /// ` boundaryType: qaccessible_base_enums.TextBoundaryType `
    ///
    /// ` startOffset: *i32 `
    ///
    /// ` endOffset: *i32 `
    ///
    pub fn TextAfterOffset(self: QAccessibleTextInterface, allocator: std.mem.Allocator, offset: i32, boundaryType: i32, startOffset: *i32, endOffset: *i32) []const u8 {
        var _str = qtc.QAccessibleTextInterface_TextAfterOffset(@ptrCast(self.ptr), @bitCast(offset), @bitCast(boundaryType), @ptrCast(startOffset), @ptrCast(endOffset));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletextinterface.TextAfterOffset: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#textAtOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` offset: i32 `
    ///
    /// ` boundaryType: qaccessible_base_enums.TextBoundaryType `
    ///
    /// ` startOffset: *i32 `
    ///
    /// ` endOffset: *i32 `
    ///
    pub fn TextAtOffset(self: QAccessibleTextInterface, allocator: std.mem.Allocator, offset: i32, boundaryType: i32, startOffset: *i32, endOffset: *i32) []const u8 {
        var _str = qtc.QAccessibleTextInterface_TextAtOffset(@ptrCast(self.ptr), @bitCast(offset), @bitCast(boundaryType), @ptrCast(startOffset), @ptrCast(endOffset));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletextinterface.TextAtOffset: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#characterCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextInterface `
    ///
    pub fn CharacterCount(self: QAccessibleTextInterface) i32 {
        return qtc.QAccessibleTextInterface_CharacterCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#characterRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextInterface `
    ///
    /// ` offset: i32 `
    ///
    pub fn CharacterRect(self: QAccessibleTextInterface, offset: i32) QRect {
        return .{ .ptr = qtc.QAccessibleTextInterface_CharacterRect(@ptrCast(self.ptr), @bitCast(offset)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#offsetAtPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextInterface `
    ///
    /// ` point: QPoint `
    ///
    pub fn OffsetAtPoint(self: QAccessibleTextInterface, point: anytype) i32 {
        comptime _ = @TypeOf(point)._is_QPoint;
        return qtc.QAccessibleTextInterface_OffsetAtPoint(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#scrollToSubstring)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextInterface `
    ///
    /// ` startIndex: i32 `
    ///
    /// ` endIndex: i32 `
    ///
    pub fn ScrollToSubstring(self: QAccessibleTextInterface, startIndex: i32, endIndex: i32) void {
        qtc.QAccessibleTextInterface_ScrollToSubstring(@ptrCast(self.ptr), @bitCast(startIndex), @bitCast(endIndex));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` offset: i32 `
    ///
    /// ` startOffset: *i32 `
    ///
    /// ` endOffset: *i32 `
    ///
    pub fn Attributes(self: QAccessibleTextInterface, allocator: std.mem.Allocator, offset: i32, startOffset: *i32, endOffset: *i32) []const u8 {
        var _str = qtc.QAccessibleTextInterface_Attributes(@ptrCast(self.ptr), @bitCast(offset), @ptrCast(startOffset), @ptrCast(endOffset));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletextinterface.Attributes: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextInterface `
    ///
    /// ` param1: QAccessibleTextInterface `
    ///
    pub fn OperatorAssign(self: QAccessibleTextInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QAccessibleTextInterface;
        qtc.QAccessibleTextInterface_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#dtor.QAccessibleTextInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QAccessibleTextInterface `
    ///
    pub fn Delete(self: QAccessibleTextInterface) void {
        qtc.QAccessibleTextInterface_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleeditabletextinterface.html)
pub const QAccessibleEditableTextInterface = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleeditabletextinterface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAccessibleEditableTextInterface,

    pub const _is_QAccessibleEditableTextInterface = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleeditabletextinterface.html#deleteText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleEditableTextInterface `
    ///
    /// ` startOffset: i32 `
    ///
    /// ` endOffset: i32 `
    ///
    pub fn DeleteText(self: QAccessibleEditableTextInterface, startOffset: i32, endOffset: i32) void {
        qtc.QAccessibleEditableTextInterface_DeleteText(@ptrCast(self.ptr), @bitCast(startOffset), @bitCast(endOffset));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleeditabletextinterface.html#insertText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleEditableTextInterface `
    ///
    /// ` offset: i32 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn InsertText(self: QAccessibleEditableTextInterface, offset: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QAccessibleEditableTextInterface_InsertText(@ptrCast(self.ptr), @bitCast(offset), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleeditabletextinterface.html#replaceText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleEditableTextInterface `
    ///
    /// ` startOffset: i32 `
    ///
    /// ` endOffset: i32 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn ReplaceText(self: QAccessibleEditableTextInterface, startOffset: i32, endOffset: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QAccessibleEditableTextInterface_ReplaceText(@ptrCast(self.ptr), @bitCast(startOffset), @bitCast(endOffset), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleeditabletextinterface.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleEditableTextInterface `
    ///
    /// ` param1: QAccessibleEditableTextInterface `
    ///
    pub fn OperatorAssign(self: QAccessibleEditableTextInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QAccessibleEditableTextInterface;
        qtc.QAccessibleEditableTextInterface_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleeditabletextinterface.html#dtor.QAccessibleEditableTextInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QAccessibleEditableTextInterface `
    ///
    pub fn Delete(self: QAccessibleEditableTextInterface) void {
        qtc.QAccessibleEditableTextInterface_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevalueinterface.html)
pub const QAccessibleValueInterface = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevalueinterface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAccessibleValueInterface,

    pub const _is_QAccessibleValueInterface = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevalueinterface.html#currentValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleValueInterface `
    ///
    pub fn CurrentValue(self: QAccessibleValueInterface) QVariant {
        return .{ .ptr = qtc.QAccessibleValueInterface_CurrentValue(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevalueinterface.html#setCurrentValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleValueInterface `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetCurrentValue(self: QAccessibleValueInterface, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QAccessibleValueInterface_SetCurrentValue(@ptrCast(self.ptr), @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevalueinterface.html#maximumValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleValueInterface `
    ///
    pub fn MaximumValue(self: QAccessibleValueInterface) QVariant {
        return .{ .ptr = qtc.QAccessibleValueInterface_MaximumValue(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevalueinterface.html#minimumValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleValueInterface `
    ///
    pub fn MinimumValue(self: QAccessibleValueInterface) QVariant {
        return .{ .ptr = qtc.QAccessibleValueInterface_MinimumValue(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevalueinterface.html#minimumStepSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleValueInterface `
    ///
    pub fn MinimumStepSize(self: QAccessibleValueInterface) QVariant {
        return .{ .ptr = qtc.QAccessibleValueInterface_MinimumStepSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevalueinterface.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleValueInterface `
    ///
    /// ` param1: QAccessibleValueInterface `
    ///
    pub fn OperatorAssign(self: QAccessibleValueInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QAccessibleValueInterface;
        qtc.QAccessibleValueInterface_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevalueinterface.html#dtor.QAccessibleValueInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QAccessibleValueInterface `
    ///
    pub fn Delete(self: QAccessibleValueInterface) void {
        qtc.QAccessibleValueInterface_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html)
pub const QAccessibleTableCellInterface = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAccessibleTableCellInterface,

    pub const _is_QAccessibleTableCellInterface = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#isSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableCellInterface `
    ///
    pub fn IsSelected(self: QAccessibleTableCellInterface) bool {
        return qtc.QAccessibleTableCellInterface_IsSelected(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#columnHeaderCells)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableCellInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ColumnHeaderCells(self: QAccessibleTableCellInterface, allocator: std.mem.Allocator) []QAccessibleInterface {
        const _arr: qtc.libqt_list = qtc.QAccessibleTableCellInterface_ColumnHeaderCells(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAccessibleInterface, _arr.len) catch @panic("qaccessibletablecellinterface.ColumnHeaderCells: Memory allocation failed");
        const _data: [*]QtC.QAccessibleInterface = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#rowHeaderCells)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableCellInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn RowHeaderCells(self: QAccessibleTableCellInterface, allocator: std.mem.Allocator) []QAccessibleInterface {
        const _arr: qtc.libqt_list = qtc.QAccessibleTableCellInterface_RowHeaderCells(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAccessibleInterface, _arr.len) catch @panic("qaccessibletablecellinterface.RowHeaderCells: Memory allocation failed");
        const _data: [*]QtC.QAccessibleInterface = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#columnIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableCellInterface `
    ///
    pub fn ColumnIndex(self: QAccessibleTableCellInterface) i32 {
        return qtc.QAccessibleTableCellInterface_ColumnIndex(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#rowIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableCellInterface `
    ///
    pub fn RowIndex(self: QAccessibleTableCellInterface) i32 {
        return qtc.QAccessibleTableCellInterface_RowIndex(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#columnExtent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableCellInterface `
    ///
    pub fn ColumnExtent(self: QAccessibleTableCellInterface) i32 {
        return qtc.QAccessibleTableCellInterface_ColumnExtent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#rowExtent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableCellInterface `
    ///
    pub fn RowExtent(self: QAccessibleTableCellInterface) i32 {
        return qtc.QAccessibleTableCellInterface_RowExtent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#table)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableCellInterface `
    ///
    pub fn Table(self: QAccessibleTableCellInterface) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleTableCellInterface_Table(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableCellInterface `
    ///
    /// ` param1: QAccessibleTableCellInterface `
    ///
    pub fn OperatorAssign(self: QAccessibleTableCellInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QAccessibleTableCellInterface;
        qtc.QAccessibleTableCellInterface_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#dtor.QAccessibleTableCellInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QAccessibleTableCellInterface `
    ///
    pub fn Delete(self: QAccessibleTableCellInterface) void {
        qtc.QAccessibleTableCellInterface_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html)
pub const QAccessibleTableInterface = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAccessibleTableInterface,

    pub const _is_QAccessibleTableInterface = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#caption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableInterface `
    ///
    pub fn Caption(self: QAccessibleTableInterface) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleTableInterface_Caption(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#summary)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableInterface `
    ///
    pub fn Summary(self: QAccessibleTableInterface) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleTableInterface_Summary(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#cellAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableInterface `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn CellAt(self: QAccessibleTableInterface, row: i32, column: i32) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleTableInterface_CellAt(@ptrCast(self.ptr), @bitCast(row), @bitCast(column)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectedCellCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableInterface `
    ///
    pub fn SelectedCellCount(self: QAccessibleTableInterface) i32 {
        return qtc.QAccessibleTableInterface_SelectedCellCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectedCells)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectedCells(self: QAccessibleTableInterface, allocator: std.mem.Allocator) []QAccessibleInterface {
        const _arr: qtc.libqt_list = qtc.QAccessibleTableInterface_SelectedCells(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAccessibleInterface, _arr.len) catch @panic("qaccessibletableinterface.SelectedCells: Memory allocation failed");
        const _data: [*]QtC.QAccessibleInterface = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#columnDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` column: i32 `
    ///
    pub fn ColumnDescription(self: QAccessibleTableInterface, allocator: std.mem.Allocator, column: i32) []const u8 {
        var _str = qtc.QAccessibleTableInterface_ColumnDescription(@ptrCast(self.ptr), @bitCast(column));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletableinterface.ColumnDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#rowDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` row: i32 `
    ///
    pub fn RowDescription(self: QAccessibleTableInterface, allocator: std.mem.Allocator, row: i32) []const u8 {
        var _str = qtc.QAccessibleTableInterface_RowDescription(@ptrCast(self.ptr), @bitCast(row));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletableinterface.RowDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectedColumnCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableInterface `
    ///
    pub fn SelectedColumnCount(self: QAccessibleTableInterface) i32 {
        return qtc.QAccessibleTableInterface_SelectedColumnCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectedRowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableInterface `
    ///
    pub fn SelectedRowCount(self: QAccessibleTableInterface) i32 {
        return qtc.QAccessibleTableInterface_SelectedRowCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#columnCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableInterface `
    ///
    pub fn ColumnCount(self: QAccessibleTableInterface) i32 {
        return qtc.QAccessibleTableInterface_ColumnCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#rowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableInterface `
    ///
    pub fn RowCount(self: QAccessibleTableInterface) i32 {
        return qtc.QAccessibleTableInterface_RowCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectedColumns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectedColumns(self: QAccessibleTableInterface, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QAccessibleTableInterface_SelectedColumns(@ptrCast(self.ptr));
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
    /// ` self: QAccessibleTableInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectedRows(self: QAccessibleTableInterface, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QAccessibleTableInterface_SelectedRows(@ptrCast(self.ptr));
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
    /// ` self: QAccessibleTableInterface `
    ///
    /// ` column: i32 `
    ///
    pub fn IsColumnSelected(self: QAccessibleTableInterface, column: i32) bool {
        return qtc.QAccessibleTableInterface_IsColumnSelected(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#isRowSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableInterface `
    ///
    /// ` row: i32 `
    ///
    pub fn IsRowSelected(self: QAccessibleTableInterface, row: i32) bool {
        return qtc.QAccessibleTableInterface_IsRowSelected(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableInterface `
    ///
    /// ` row: i32 `
    ///
    pub fn SelectRow(self: QAccessibleTableInterface, row: i32) bool {
        return qtc.QAccessibleTableInterface_SelectRow(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableInterface `
    ///
    /// ` column: i32 `
    ///
    pub fn SelectColumn(self: QAccessibleTableInterface, column: i32) bool {
        return qtc.QAccessibleTableInterface_SelectColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#unselectRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableInterface `
    ///
    /// ` row: i32 `
    ///
    pub fn UnselectRow(self: QAccessibleTableInterface, row: i32) bool {
        return qtc.QAccessibleTableInterface_UnselectRow(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#unselectColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableInterface `
    ///
    /// ` column: i32 `
    ///
    pub fn UnselectColumn(self: QAccessibleTableInterface, column: i32) bool {
        return qtc.QAccessibleTableInterface_UnselectColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#modelChange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableInterface `
    ///
    /// ` event: QAccessibleTableModelChangeEvent `
    ///
    pub fn ModelChange(self: QAccessibleTableInterface, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QAccessibleTableModelChangeEvent;
        qtc.QAccessibleTableInterface_ModelChange(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#dtor.QAccessibleTableInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QAccessibleTableInterface `
    ///
    pub fn Delete(self: QAccessibleTableInterface) void {
        qtc.QAccessibleTableInterface_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html)
pub const QAccessibleActionInterface = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAccessibleActionInterface,

    pub const _is_QAccessibleActionInterface = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` sourceText: [:0]const u8 `
    ///
    pub fn Tr(allocator: std.mem.Allocator, sourceText: [:0]const u8) []const u8 {
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
    /// ` self: QAccessibleActionInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ActionNames(self: QAccessibleActionInterface, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QAccessibleActionInterface_ActionNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ` self: QAccessibleActionInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    pub fn LocalizedActionName(self: QAccessibleActionInterface, allocator: std.mem.Allocator, name: []const u8) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.QAccessibleActionInterface_LocalizedActionName(@ptrCast(self.ptr), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.LocalizedActionName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#localizedActionDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleActionInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    pub fn LocalizedActionDescription(self: QAccessibleActionInterface, allocator: std.mem.Allocator, name: []const u8) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.QAccessibleActionInterface_LocalizedActionDescription(@ptrCast(self.ptr), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.LocalizedActionDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#doAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleActionInterface `
    ///
    /// ` actionName: []const u8 `
    ///
    pub fn DoAction(self: QAccessibleActionInterface, actionName: []const u8) void {
        const actionName_str = qtc.libqt_string{
            .len = actionName.len,
            .data = actionName.ptr,
        };
        qtc.QAccessibleActionInterface_DoAction(@ptrCast(self.ptr), actionName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#keyBindingsForAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleActionInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` actionName: []const u8 `
    ///
    pub fn KeyBindingsForAction(self: QAccessibleActionInterface, allocator: std.mem.Allocator, actionName: []const u8) []const []const u8 {
        const actionName_str = qtc.libqt_string{
            .len = actionName.len,
            .data = actionName.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QAccessibleActionInterface_KeyBindingsForAction(@ptrCast(self.ptr), actionName_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ` self: QAccessibleActionInterface `
    ///
    /// ` param1: QAccessibleActionInterface `
    ///
    pub fn OperatorAssign(self: QAccessibleActionInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QAccessibleActionInterface;
        qtc.QAccessibleActionInterface_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` sourceText: [:0]const u8 `
    ///
    /// ` disambiguation: [:0]const u8 `
    ///
    pub fn Tr2(allocator: std.mem.Allocator, sourceText: [:0]const u8, disambiguation: [:0]const u8) []const u8 {
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
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` sourceText: [:0]const u8 `
    ///
    /// ` disambiguation: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn Tr3(allocator: std.mem.Allocator, sourceText: [:0]const u8, disambiguation: [:0]const u8, n: i32) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        var _str = qtc.QObject_Tr3(sourceText_Cstring, disambiguation_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleactioninterface.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#dtor.QAccessibleActionInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QAccessibleActionInterface `
    ///
    pub fn Delete(self: QAccessibleActionInterface) void {
        qtc.QAccessibleActionInterface_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleimageinterface.html)
pub const QAccessibleImageInterface = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleimageinterface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAccessibleImageInterface,

    pub const _is_QAccessibleImageInterface = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleimageinterface.html#imageDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleImageInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ImageDescription(self: QAccessibleImageInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleImageInterface_ImageDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleimageinterface.ImageDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleimageinterface.html#imageSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleImageInterface `
    ///
    pub fn ImageSize(self: QAccessibleImageInterface) QSize {
        return .{ .ptr = qtc.QAccessibleImageInterface_ImageSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleimageinterface.html#imagePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleImageInterface `
    ///
    pub fn ImagePosition(self: QAccessibleImageInterface) QPoint {
        return .{ .ptr = qtc.QAccessibleImageInterface_ImagePosition(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleimageinterface.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleImageInterface `
    ///
    /// ` param1: QAccessibleImageInterface `
    ///
    pub fn OperatorAssign(self: QAccessibleImageInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QAccessibleImageInterface;
        qtc.QAccessibleImageInterface_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleimageinterface.html#dtor.QAccessibleImageInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QAccessibleImageInterface `
    ///
    pub fn Delete(self: QAccessibleImageInterface) void {
        qtc.QAccessibleImageInterface_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html)
pub const QAccessibleHyperlinkInterface = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAccessibleHyperlinkInterface,

    pub const _is_QAccessibleHyperlinkInterface = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html#anchor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleHyperlinkInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Anchor(self: QAccessibleHyperlinkInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleHyperlinkInterface_Anchor(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblehyperlinkinterface.Anchor: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html#anchorTarget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleHyperlinkInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AnchorTarget(self: QAccessibleHyperlinkInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleHyperlinkInterface_AnchorTarget(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblehyperlinkinterface.AnchorTarget: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html#startIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleHyperlinkInterface `
    ///
    pub fn StartIndex(self: QAccessibleHyperlinkInterface) i32 {
        return qtc.QAccessibleHyperlinkInterface_StartIndex(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html#endIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleHyperlinkInterface `
    ///
    pub fn EndIndex(self: QAccessibleHyperlinkInterface) i32 {
        return qtc.QAccessibleHyperlinkInterface_EndIndex(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleHyperlinkInterface `
    ///
    pub fn IsValid(self: QAccessibleHyperlinkInterface) bool {
        return qtc.QAccessibleHyperlinkInterface_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleHyperlinkInterface `
    ///
    /// ` param1: QAccessibleHyperlinkInterface `
    ///
    pub fn OperatorAssign(self: QAccessibleHyperlinkInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QAccessibleHyperlinkInterface;
        qtc.QAccessibleHyperlinkInterface_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html#dtor.QAccessibleHyperlinkInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QAccessibleHyperlinkInterface `
    ///
    pub fn Delete(self: QAccessibleHyperlinkInterface) void {
        qtc.QAccessibleHyperlinkInterface_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html)
pub const QAccessibleSelectionInterface = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAccessibleSelectionInterface,

    pub const _is_QAccessibleSelectionInterface = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html#selectedItemCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleSelectionInterface `
    ///
    pub fn SelectedItemCount(self: QAccessibleSelectionInterface) i32 {
        return qtc.QAccessibleSelectionInterface_SelectedItemCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html#selectedItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleSelectionInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectedItems(self: QAccessibleSelectionInterface, allocator: std.mem.Allocator) []QAccessibleInterface {
        const _arr: qtc.libqt_list = qtc.QAccessibleSelectionInterface_SelectedItems(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAccessibleInterface, _arr.len) catch @panic("qaccessibleselectioninterface.SelectedItems: Memory allocation failed");
        const _data: [*]QtC.QAccessibleInterface = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html#selectedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleSelectionInterface `
    ///
    /// ` selectionIndex: i32 `
    ///
    pub fn SelectedItem(self: QAccessibleSelectionInterface, selectionIndex: i32) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleSelectionInterface_SelectedItem(@ptrCast(self.ptr), @bitCast(selectionIndex)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html#isSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleSelectionInterface `
    ///
    /// ` childItem: QAccessibleInterface `
    ///
    pub fn IsSelected(self: QAccessibleSelectionInterface, childItem: anytype) bool {
        comptime _ = @TypeOf(childItem)._is_QAccessibleInterface;
        return qtc.QAccessibleSelectionInterface_IsSelected(@ptrCast(self.ptr), @ptrCast(childItem.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html#select)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleSelectionInterface `
    ///
    /// ` childItem: QAccessibleInterface `
    ///
    pub fn Select(self: QAccessibleSelectionInterface, childItem: anytype) bool {
        comptime _ = @TypeOf(childItem)._is_QAccessibleInterface;
        return qtc.QAccessibleSelectionInterface_Select(@ptrCast(self.ptr), @ptrCast(childItem.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html#unselect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleSelectionInterface `
    ///
    /// ` childItem: QAccessibleInterface `
    ///
    pub fn Unselect(self: QAccessibleSelectionInterface, childItem: anytype) bool {
        comptime _ = @TypeOf(childItem)._is_QAccessibleInterface;
        return qtc.QAccessibleSelectionInterface_Unselect(@ptrCast(self.ptr), @ptrCast(childItem.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html#selectAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleSelectionInterface `
    ///
    pub fn SelectAll(self: QAccessibleSelectionInterface) bool {
        return qtc.QAccessibleSelectionInterface_SelectAll(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleSelectionInterface `
    ///
    pub fn Clear(self: QAccessibleSelectionInterface) bool {
        return qtc.QAccessibleSelectionInterface_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleSelectionInterface `
    ///
    /// ` param1: QAccessibleSelectionInterface `
    ///
    pub fn OperatorAssign(self: QAccessibleSelectionInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QAccessibleSelectionInterface;
        qtc.QAccessibleSelectionInterface_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html#dtor.QAccessibleSelectionInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QAccessibleSelectionInterface `
    ///
    pub fn Delete(self: QAccessibleSelectionInterface) void {
        qtc.QAccessibleSelectionInterface_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleattributesinterface.html)
pub const QAccessibleAttributesInterface = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleattributesinterface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAccessibleAttributesInterface,

    pub const _is_QAccessibleAttributesInterface = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleattributesinterface.html#attributeKeys)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleAttributesInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` []qaccessible_base_enums.Attribute `
    ///
    pub fn AttributeKeys(self: QAccessibleAttributesInterface, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QAccessibleAttributesInterface_AttributeKeys(@ptrCast(self.ptr));
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
    /// ` self: QAccessibleAttributesInterface `
    ///
    /// ` key: qaccessible_base_enums.Attribute `
    ///
    pub fn AttributeValue(self: QAccessibleAttributesInterface, key: i32) QVariant {
        return .{ .ptr = qtc.QAccessibleAttributesInterface_AttributeValue(@ptrCast(self.ptr), @bitCast(key)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleattributesinterface.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleAttributesInterface `
    ///
    /// ` param1: QAccessibleAttributesInterface `
    ///
    pub fn OperatorAssign(self: QAccessibleAttributesInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QAccessibleAttributesInterface;
        qtc.QAccessibleAttributesInterface_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleattributesinterface.html#dtor.QAccessibleAttributesInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QAccessibleAttributesInterface `
    ///
    pub fn Delete(self: QAccessibleAttributesInterface) void {
        qtc.QAccessibleAttributesInterface_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html)
pub const QAccessibleEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAccessibleEvent,

    pub const _is_QAccessibleEvent = {};

    /// New constructs a new QAccessibleEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` typ: qaccessible_base_enums.Event `
    ///
    pub fn New(obj: anytype, typ: i32) QAccessibleEvent {
        comptime _ = @TypeOf(obj)._is_QObject;
        return .{ .ptr = qtc.QAccessibleEvent_new(@ptrCast(obj.ptr), @bitCast(typ)) };
    }

    /// New2 constructs a new QAccessibleEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` iface: QAccessibleInterface `
    ///
    /// ` typ: qaccessible_base_enums.Event `
    ///
    pub fn New2(iface: anytype, typ: i32) QAccessibleEvent {
        comptime _ = @TypeOf(iface)._is_QAccessibleInterface;
        return .{ .ptr = qtc.QAccessibleEvent_new2(@ptrCast(iface.ptr), @bitCast(typ)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleEvent `
    ///
    /// ## Returns:
    ///
    /// ` qaccessible_base_enums.Event `
    ///
    pub fn Type(self: QAccessibleEvent) i32 {
        return qtc.QAccessibleEvent_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleEvent `
    ///
    pub fn Object(self: QAccessibleEvent) QObject {
        return .{ .ptr = qtc.QAccessibleEvent_Object(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleEvent `
    ///
    pub fn UniqueId(self: QAccessibleEvent) u32 {
        return qtc.QAccessibleEvent_UniqueId(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#setChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleEvent `
    ///
    /// ` chld: i32 `
    ///
    pub fn SetChild(self: QAccessibleEvent, chld: i32) void {
        qtc.QAccessibleEvent_SetChild(@ptrCast(self.ptr), @bitCast(chld));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleEvent `
    ///
    pub fn Child(self: QAccessibleEvent) i32 {
        return qtc.QAccessibleEvent_Child(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleEvent `
    ///
    pub fn AccessibleInterface(self: QAccessibleEvent) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleEvent_AccessibleInterface(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleEvent `
    ///
    /// ` callback: *const fn () callconv(.c) QAccessibleInterface `
    ///
    pub fn OnAccessibleInterface(self: QAccessibleEvent, callback: *const fn () callconv(.c) QAccessibleInterface) void {
        qtc.QAccessibleEvent_OnAccessibleInterface(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAccessibleInterface` instead
    ///
    pub const QBaseAccessibleInterface = SuperAccessibleInterface;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleEvent `
    ///
    pub fn SuperAccessibleInterface(self: QAccessibleEvent) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleEvent_SuperAccessibleInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#dtor.QAccessibleEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QAccessibleEvent `
    ///
    pub fn Delete(self: QAccessibleEvent) void {
        qtc.QAccessibleEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblestatechangeevent.html)
pub const QAccessibleStateChangeEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblestatechangeevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAccessibleStateChangeEvent,

    pub const _is_QAccessibleStateChangeEvent = {};
    pub const _is_QAccessibleEvent = {};

    /// New constructs a new QAccessibleStateChangeEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` state: QAccessible__State `
    ///
    pub fn New(obj: anytype, state: anytype) QAccessibleStateChangeEvent {
        comptime _ = @TypeOf(obj)._is_QObject;
        comptime _ = @TypeOf(state)._is_QAccessible__State;
        return .{ .ptr = qtc.QAccessibleStateChangeEvent_new(@ptrCast(obj.ptr), @ptrCast(state.ptr)) };
    }

    /// New2 constructs a new QAccessibleStateChangeEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` iface: QAccessibleInterface `
    ///
    /// ` state: QAccessible__State `
    ///
    pub fn New2(iface: anytype, state: anytype) QAccessibleStateChangeEvent {
        comptime _ = @TypeOf(iface)._is_QAccessibleInterface;
        comptime _ = @TypeOf(state)._is_QAccessible__State;
        return .{ .ptr = qtc.QAccessibleStateChangeEvent_new2(@ptrCast(iface.ptr), @ptrCast(state.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblestatechangeevent.html#changedStates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleStateChangeEvent `
    ///
    pub fn ChangedStates(self: QAccessibleStateChangeEvent) QAccessible__State {
        return .{ .ptr = qtc.QAccessibleStateChangeEvent_ChangedStates(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleStateChangeEvent `
    ///
    /// ## Returns:
    ///
    /// ` qaccessible_base_enums.Event `
    ///
    pub fn Type(self: QAccessibleStateChangeEvent) i32 {
        return qtc.QAccessibleEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleStateChangeEvent `
    ///
    pub fn Object(self: QAccessibleStateChangeEvent) QObject {
        return .{ .ptr = qtc.QAccessibleEvent_Object(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleStateChangeEvent `
    ///
    pub fn UniqueId(self: QAccessibleStateChangeEvent) u32 {
        return qtc.QAccessibleEvent_UniqueId(@ptrCast(self.ptr));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#setChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleStateChangeEvent `
    ///
    /// ` chld: i32 `
    ///
    pub fn SetChild(self: QAccessibleStateChangeEvent, chld: i32) void {
        qtc.QAccessibleEvent_SetChild(@ptrCast(self.ptr), @bitCast(chld));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleStateChangeEvent `
    ///
    pub fn Child(self: QAccessibleStateChangeEvent) i32 {
        return qtc.QAccessibleEvent_Child(@ptrCast(self.ptr));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleStateChangeEvent `
    ///
    pub fn AccessibleInterface(self: QAccessibleStateChangeEvent) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleStateChangeEvent_AccessibleInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperAccessibleInterface` instead
    ///
    pub const QBaseAccessibleInterface = SuperAccessibleInterface;

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleStateChangeEvent `
    ///
    pub fn SuperAccessibleInterface(self: QAccessibleStateChangeEvent) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleStateChangeEvent_SuperAccessibleInterface(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleStateChangeEvent`
    ///
    /// ` callback: *const fn () callconv(.c) QAccessibleInterface `
    ///
    pub fn OnAccessibleInterface(self: QAccessibleStateChangeEvent, callback: *const fn () callconv(.c) QAccessibleInterface) void {
        qtc.QAccessibleStateChangeEvent_OnAccessibleInterface(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblestatechangeevent.html#dtor.QAccessibleStateChangeEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QAccessibleStateChangeEvent `
    ///
    pub fn Delete(self: QAccessibleStateChangeEvent) void {
        qtc.QAccessibleStateChangeEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html)
pub const QAccessibleTextCursorEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAccessibleTextCursorEvent,

    pub const _is_QAccessibleTextCursorEvent = {};
    pub const _is_QAccessibleEvent = {};

    /// New constructs a new QAccessibleTextCursorEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` cursorPos: i32 `
    ///
    pub fn New(obj: anytype, cursorPos: i32) QAccessibleTextCursorEvent {
        comptime _ = @TypeOf(obj)._is_QObject;
        return .{ .ptr = qtc.QAccessibleTextCursorEvent_new(@ptrCast(obj.ptr), @bitCast(cursorPos)) };
    }

    /// New2 constructs a new QAccessibleTextCursorEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` iface: QAccessibleInterface `
    ///
    /// ` cursorPos: i32 `
    ///
    pub fn New2(iface: anytype, cursorPos: i32) QAccessibleTextCursorEvent {
        comptime _ = @TypeOf(iface)._is_QAccessibleInterface;
        return .{ .ptr = qtc.QAccessibleTextCursorEvent_new2(@ptrCast(iface.ptr), @bitCast(cursorPos)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#setCursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextCursorEvent `
    ///
    /// ` position: i32 `
    ///
    pub fn SetCursorPosition(self: QAccessibleTextCursorEvent, position: i32) void {
        qtc.QAccessibleTextCursorEvent_SetCursorPosition(@ptrCast(self.ptr), @bitCast(position));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#cursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextCursorEvent `
    ///
    pub fn CursorPosition(self: QAccessibleTextCursorEvent) i32 {
        return qtc.QAccessibleTextCursorEvent_CursorPosition(@ptrCast(self.ptr));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextCursorEvent `
    ///
    /// ## Returns:
    ///
    /// ` qaccessible_base_enums.Event `
    ///
    pub fn Type(self: QAccessibleTextCursorEvent) i32 {
        return qtc.QAccessibleEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextCursorEvent `
    ///
    pub fn Object(self: QAccessibleTextCursorEvent) QObject {
        return .{ .ptr = qtc.QAccessibleEvent_Object(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextCursorEvent `
    ///
    pub fn UniqueId(self: QAccessibleTextCursorEvent) u32 {
        return qtc.QAccessibleEvent_UniqueId(@ptrCast(self.ptr));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#setChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextCursorEvent `
    ///
    /// ` chld: i32 `
    ///
    pub fn SetChild(self: QAccessibleTextCursorEvent, chld: i32) void {
        qtc.QAccessibleEvent_SetChild(@ptrCast(self.ptr), @bitCast(chld));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextCursorEvent `
    ///
    pub fn Child(self: QAccessibleTextCursorEvent) i32 {
        return qtc.QAccessibleEvent_Child(@ptrCast(self.ptr));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextCursorEvent `
    ///
    pub fn AccessibleInterface(self: QAccessibleTextCursorEvent) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleTextCursorEvent_AccessibleInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperAccessibleInterface` instead
    ///
    pub const QBaseAccessibleInterface = SuperAccessibleInterface;

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextCursorEvent `
    ///
    pub fn SuperAccessibleInterface(self: QAccessibleTextCursorEvent) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleTextCursorEvent_SuperAccessibleInterface(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleTextCursorEvent`
    ///
    /// ` callback: *const fn () callconv(.c) QAccessibleInterface `
    ///
    pub fn OnAccessibleInterface(self: QAccessibleTextCursorEvent, callback: *const fn () callconv(.c) QAccessibleInterface) void {
        qtc.QAccessibleTextCursorEvent_OnAccessibleInterface(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#dtor.QAccessibleTextCursorEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QAccessibleTextCursorEvent `
    ///
    pub fn Delete(self: QAccessibleTextCursorEvent) void {
        qtc.QAccessibleTextCursorEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextselectionevent.html)
pub const QAccessibleTextSelectionEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextselectionevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAccessibleTextSelectionEvent,

    pub const _is_QAccessibleTextSelectionEvent = {};
    pub const _is_QAccessibleTextCursorEvent = {};
    pub const _is_QAccessibleEvent = {};

    /// New constructs a new QAccessibleTextSelectionEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn New(obj: anytype, start: i32, end: i32) QAccessibleTextSelectionEvent {
        comptime _ = @TypeOf(obj)._is_QObject;
        return .{ .ptr = qtc.QAccessibleTextSelectionEvent_new(@ptrCast(obj.ptr), @bitCast(start), @bitCast(end)) };
    }

    /// New2 constructs a new QAccessibleTextSelectionEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` iface: QAccessibleInterface `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn New2(iface: anytype, start: i32, end: i32) QAccessibleTextSelectionEvent {
        comptime _ = @TypeOf(iface)._is_QAccessibleInterface;
        return .{ .ptr = qtc.QAccessibleTextSelectionEvent_new2(@ptrCast(iface.ptr), @bitCast(start), @bitCast(end)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextselectionevent.html#setSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextSelectionEvent `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn SetSelection(self: QAccessibleTextSelectionEvent, start: i32, end: i32) void {
        qtc.QAccessibleTextSelectionEvent_SetSelection(@ptrCast(self.ptr), @bitCast(start), @bitCast(end));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextselectionevent.html#selectionStart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextSelectionEvent `
    ///
    pub fn SelectionStart(self: QAccessibleTextSelectionEvent) i32 {
        return qtc.QAccessibleTextSelectionEvent_SelectionStart(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextselectionevent.html#selectionEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextSelectionEvent `
    ///
    pub fn SelectionEnd(self: QAccessibleTextSelectionEvent) i32 {
        return qtc.QAccessibleTextSelectionEvent_SelectionEnd(@ptrCast(self.ptr));
    }

    /// Inherited from QAccessibleTextCursorEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#setCursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextSelectionEvent `
    ///
    /// ` position: i32 `
    ///
    pub fn SetCursorPosition(self: QAccessibleTextSelectionEvent, position: i32) void {
        qtc.QAccessibleTextCursorEvent_SetCursorPosition(@ptrCast(self.ptr), @bitCast(position));
    }

    /// Inherited from QAccessibleTextCursorEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#cursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextSelectionEvent `
    ///
    pub fn CursorPosition(self: QAccessibleTextSelectionEvent) i32 {
        return qtc.QAccessibleTextCursorEvent_CursorPosition(@ptrCast(self.ptr));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextSelectionEvent `
    ///
    /// ## Returns:
    ///
    /// ` qaccessible_base_enums.Event `
    ///
    pub fn Type(self: QAccessibleTextSelectionEvent) i32 {
        return qtc.QAccessibleEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextSelectionEvent `
    ///
    pub fn Object(self: QAccessibleTextSelectionEvent) QObject {
        return .{ .ptr = qtc.QAccessibleEvent_Object(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextSelectionEvent `
    ///
    pub fn UniqueId(self: QAccessibleTextSelectionEvent) u32 {
        return qtc.QAccessibleEvent_UniqueId(@ptrCast(self.ptr));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#setChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextSelectionEvent `
    ///
    /// ` chld: i32 `
    ///
    pub fn SetChild(self: QAccessibleTextSelectionEvent, chld: i32) void {
        qtc.QAccessibleEvent_SetChild(@ptrCast(self.ptr), @bitCast(chld));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextSelectionEvent `
    ///
    pub fn Child(self: QAccessibleTextSelectionEvent) i32 {
        return qtc.QAccessibleEvent_Child(@ptrCast(self.ptr));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextSelectionEvent `
    ///
    pub fn AccessibleInterface(self: QAccessibleTextSelectionEvent) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleTextSelectionEvent_AccessibleInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperAccessibleInterface` instead
    ///
    pub const QBaseAccessibleInterface = SuperAccessibleInterface;

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextSelectionEvent `
    ///
    pub fn SuperAccessibleInterface(self: QAccessibleTextSelectionEvent) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleTextSelectionEvent_SuperAccessibleInterface(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleTextSelectionEvent`
    ///
    /// ` callback: *const fn () callconv(.c) QAccessibleInterface `
    ///
    pub fn OnAccessibleInterface(self: QAccessibleTextSelectionEvent, callback: *const fn () callconv(.c) QAccessibleInterface) void {
        qtc.QAccessibleTextSelectionEvent_OnAccessibleInterface(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextselectionevent.html#dtor.QAccessibleTextSelectionEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QAccessibleTextSelectionEvent `
    ///
    pub fn Delete(self: QAccessibleTextSelectionEvent) void {
        qtc.QAccessibleTextSelectionEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinsertevent.html)
pub const QAccessibleTextInsertEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinsertevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAccessibleTextInsertEvent,

    pub const _is_QAccessibleTextInsertEvent = {};
    pub const _is_QAccessibleTextCursorEvent = {};
    pub const _is_QAccessibleEvent = {};

    /// New constructs a new QAccessibleTextInsertEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` position: i32 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn New(obj: anytype, position: i32, text: []const u8) QAccessibleTextInsertEvent {
        comptime _ = @TypeOf(obj)._is_QObject;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QAccessibleTextInsertEvent_new(@ptrCast(obj.ptr), @bitCast(position), text_str) };
    }

    /// New2 constructs a new QAccessibleTextInsertEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` iface: QAccessibleInterface `
    ///
    /// ` position: i32 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn New2(iface: anytype, position: i32, text: []const u8) QAccessibleTextInsertEvent {
        comptime _ = @TypeOf(iface)._is_QAccessibleInterface;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QAccessibleTextInsertEvent_new2(@ptrCast(iface.ptr), @bitCast(position), text_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinsertevent.html#textInserted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextInsertEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TextInserted(self: QAccessibleTextInsertEvent, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleTextInsertEvent_TextInserted(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletextinsertevent.TextInserted: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinsertevent.html#changePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextInsertEvent `
    ///
    pub fn ChangePosition(self: QAccessibleTextInsertEvent) i32 {
        return qtc.QAccessibleTextInsertEvent_ChangePosition(@ptrCast(self.ptr));
    }

    /// Inherited from QAccessibleTextCursorEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#setCursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextInsertEvent `
    ///
    /// ` position: i32 `
    ///
    pub fn SetCursorPosition(self: QAccessibleTextInsertEvent, position: i32) void {
        qtc.QAccessibleTextCursorEvent_SetCursorPosition(@ptrCast(self.ptr), @bitCast(position));
    }

    /// Inherited from QAccessibleTextCursorEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#cursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextInsertEvent `
    ///
    pub fn CursorPosition(self: QAccessibleTextInsertEvent) i32 {
        return qtc.QAccessibleTextCursorEvent_CursorPosition(@ptrCast(self.ptr));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextInsertEvent `
    ///
    /// ## Returns:
    ///
    /// ` qaccessible_base_enums.Event `
    ///
    pub fn Type(self: QAccessibleTextInsertEvent) i32 {
        return qtc.QAccessibleEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextInsertEvent `
    ///
    pub fn Object(self: QAccessibleTextInsertEvent) QObject {
        return .{ .ptr = qtc.QAccessibleEvent_Object(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextInsertEvent `
    ///
    pub fn UniqueId(self: QAccessibleTextInsertEvent) u32 {
        return qtc.QAccessibleEvent_UniqueId(@ptrCast(self.ptr));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#setChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextInsertEvent `
    ///
    /// ` chld: i32 `
    ///
    pub fn SetChild(self: QAccessibleTextInsertEvent, chld: i32) void {
        qtc.QAccessibleEvent_SetChild(@ptrCast(self.ptr), @bitCast(chld));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextInsertEvent `
    ///
    pub fn Child(self: QAccessibleTextInsertEvent) i32 {
        return qtc.QAccessibleEvent_Child(@ptrCast(self.ptr));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextInsertEvent `
    ///
    pub fn AccessibleInterface(self: QAccessibleTextInsertEvent) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleTextInsertEvent_AccessibleInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperAccessibleInterface` instead
    ///
    pub const QBaseAccessibleInterface = SuperAccessibleInterface;

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextInsertEvent `
    ///
    pub fn SuperAccessibleInterface(self: QAccessibleTextInsertEvent) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleTextInsertEvent_SuperAccessibleInterface(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleTextInsertEvent`
    ///
    /// ` callback: *const fn () callconv(.c) QAccessibleInterface `
    ///
    pub fn OnAccessibleInterface(self: QAccessibleTextInsertEvent, callback: *const fn () callconv(.c) QAccessibleInterface) void {
        qtc.QAccessibleTextInsertEvent_OnAccessibleInterface(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinsertevent.html#dtor.QAccessibleTextInsertEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QAccessibleTextInsertEvent `
    ///
    pub fn Delete(self: QAccessibleTextInsertEvent) void {
        qtc.QAccessibleTextInsertEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextremoveevent.html)
pub const QAccessibleTextRemoveEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextremoveevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAccessibleTextRemoveEvent,

    pub const _is_QAccessibleTextRemoveEvent = {};
    pub const _is_QAccessibleTextCursorEvent = {};
    pub const _is_QAccessibleEvent = {};

    /// New constructs a new QAccessibleTextRemoveEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` position: i32 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn New(obj: anytype, position: i32, text: []const u8) QAccessibleTextRemoveEvent {
        comptime _ = @TypeOf(obj)._is_QObject;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QAccessibleTextRemoveEvent_new(@ptrCast(obj.ptr), @bitCast(position), text_str) };
    }

    /// New2 constructs a new QAccessibleTextRemoveEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` iface: QAccessibleInterface `
    ///
    /// ` position: i32 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn New2(iface: anytype, position: i32, text: []const u8) QAccessibleTextRemoveEvent {
        comptime _ = @TypeOf(iface)._is_QAccessibleInterface;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QAccessibleTextRemoveEvent_new2(@ptrCast(iface.ptr), @bitCast(position), text_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextremoveevent.html#textRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextRemoveEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TextRemoved(self: QAccessibleTextRemoveEvent, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleTextRemoveEvent_TextRemoved(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletextremoveevent.TextRemoved: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextremoveevent.html#changePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextRemoveEvent `
    ///
    pub fn ChangePosition(self: QAccessibleTextRemoveEvent) i32 {
        return qtc.QAccessibleTextRemoveEvent_ChangePosition(@ptrCast(self.ptr));
    }

    /// Inherited from QAccessibleTextCursorEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#setCursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextRemoveEvent `
    ///
    /// ` position: i32 `
    ///
    pub fn SetCursorPosition(self: QAccessibleTextRemoveEvent, position: i32) void {
        qtc.QAccessibleTextCursorEvent_SetCursorPosition(@ptrCast(self.ptr), @bitCast(position));
    }

    /// Inherited from QAccessibleTextCursorEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#cursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextRemoveEvent `
    ///
    pub fn CursorPosition(self: QAccessibleTextRemoveEvent) i32 {
        return qtc.QAccessibleTextCursorEvent_CursorPosition(@ptrCast(self.ptr));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextRemoveEvent `
    ///
    /// ## Returns:
    ///
    /// ` qaccessible_base_enums.Event `
    ///
    pub fn Type(self: QAccessibleTextRemoveEvent) i32 {
        return qtc.QAccessibleEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextRemoveEvent `
    ///
    pub fn Object(self: QAccessibleTextRemoveEvent) QObject {
        return .{ .ptr = qtc.QAccessibleEvent_Object(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextRemoveEvent `
    ///
    pub fn UniqueId(self: QAccessibleTextRemoveEvent) u32 {
        return qtc.QAccessibleEvent_UniqueId(@ptrCast(self.ptr));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#setChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextRemoveEvent `
    ///
    /// ` chld: i32 `
    ///
    pub fn SetChild(self: QAccessibleTextRemoveEvent, chld: i32) void {
        qtc.QAccessibleEvent_SetChild(@ptrCast(self.ptr), @bitCast(chld));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextRemoveEvent `
    ///
    pub fn Child(self: QAccessibleTextRemoveEvent) i32 {
        return qtc.QAccessibleEvent_Child(@ptrCast(self.ptr));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextRemoveEvent `
    ///
    pub fn AccessibleInterface(self: QAccessibleTextRemoveEvent) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleTextRemoveEvent_AccessibleInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperAccessibleInterface` instead
    ///
    pub const QBaseAccessibleInterface = SuperAccessibleInterface;

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextRemoveEvent `
    ///
    pub fn SuperAccessibleInterface(self: QAccessibleTextRemoveEvent) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleTextRemoveEvent_SuperAccessibleInterface(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleTextRemoveEvent`
    ///
    /// ` callback: *const fn () callconv(.c) QAccessibleInterface `
    ///
    pub fn OnAccessibleInterface(self: QAccessibleTextRemoveEvent, callback: *const fn () callconv(.c) QAccessibleInterface) void {
        qtc.QAccessibleTextRemoveEvent_OnAccessibleInterface(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextremoveevent.html#dtor.QAccessibleTextRemoveEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QAccessibleTextRemoveEvent `
    ///
    pub fn Delete(self: QAccessibleTextRemoveEvent) void {
        qtc.QAccessibleTextRemoveEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextupdateevent.html)
pub const QAccessibleTextUpdateEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextupdateevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAccessibleTextUpdateEvent,

    pub const _is_QAccessibleTextUpdateEvent = {};
    pub const _is_QAccessibleTextCursorEvent = {};
    pub const _is_QAccessibleEvent = {};

    /// New constructs a new QAccessibleTextUpdateEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` position: i32 `
    ///
    /// ` oldText: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn New(obj: anytype, position: i32, oldText: []const u8, text: []const u8) QAccessibleTextUpdateEvent {
        comptime _ = @TypeOf(obj)._is_QObject;
        const oldText_str = qtc.libqt_string{
            .len = oldText.len,
            .data = oldText.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QAccessibleTextUpdateEvent_new(@ptrCast(obj.ptr), @bitCast(position), oldText_str, text_str) };
    }

    /// New2 constructs a new QAccessibleTextUpdateEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` iface: QAccessibleInterface `
    ///
    /// ` position: i32 `
    ///
    /// ` oldText: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn New2(iface: anytype, position: i32, oldText: []const u8, text: []const u8) QAccessibleTextUpdateEvent {
        comptime _ = @TypeOf(iface)._is_QAccessibleInterface;
        const oldText_str = qtc.libqt_string{
            .len = oldText.len,
            .data = oldText.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QAccessibleTextUpdateEvent_new2(@ptrCast(iface.ptr), @bitCast(position), oldText_str, text_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextupdateevent.html#textRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextUpdateEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TextRemoved(self: QAccessibleTextUpdateEvent, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleTextUpdateEvent_TextRemoved(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletextupdateevent.TextRemoved: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextupdateevent.html#textInserted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextUpdateEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TextInserted(self: QAccessibleTextUpdateEvent, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleTextUpdateEvent_TextInserted(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibletextupdateevent.TextInserted: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextupdateevent.html#changePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextUpdateEvent `
    ///
    pub fn ChangePosition(self: QAccessibleTextUpdateEvent) i32 {
        return qtc.QAccessibleTextUpdateEvent_ChangePosition(@ptrCast(self.ptr));
    }

    /// Inherited from QAccessibleTextCursorEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#setCursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextUpdateEvent `
    ///
    /// ` position: i32 `
    ///
    pub fn SetCursorPosition(self: QAccessibleTextUpdateEvent, position: i32) void {
        qtc.QAccessibleTextCursorEvent_SetCursorPosition(@ptrCast(self.ptr), @bitCast(position));
    }

    /// Inherited from QAccessibleTextCursorEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#cursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextUpdateEvent `
    ///
    pub fn CursorPosition(self: QAccessibleTextUpdateEvent) i32 {
        return qtc.QAccessibleTextCursorEvent_CursorPosition(@ptrCast(self.ptr));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextUpdateEvent `
    ///
    /// ## Returns:
    ///
    /// ` qaccessible_base_enums.Event `
    ///
    pub fn Type(self: QAccessibleTextUpdateEvent) i32 {
        return qtc.QAccessibleEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextUpdateEvent `
    ///
    pub fn Object(self: QAccessibleTextUpdateEvent) QObject {
        return .{ .ptr = qtc.QAccessibleEvent_Object(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextUpdateEvent `
    ///
    pub fn UniqueId(self: QAccessibleTextUpdateEvent) u32 {
        return qtc.QAccessibleEvent_UniqueId(@ptrCast(self.ptr));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#setChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextUpdateEvent `
    ///
    /// ` chld: i32 `
    ///
    pub fn SetChild(self: QAccessibleTextUpdateEvent, chld: i32) void {
        qtc.QAccessibleEvent_SetChild(@ptrCast(self.ptr), @bitCast(chld));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextUpdateEvent `
    ///
    pub fn Child(self: QAccessibleTextUpdateEvent) i32 {
        return qtc.QAccessibleEvent_Child(@ptrCast(self.ptr));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextUpdateEvent `
    ///
    pub fn AccessibleInterface(self: QAccessibleTextUpdateEvent) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleTextUpdateEvent_AccessibleInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperAccessibleInterface` instead
    ///
    pub const QBaseAccessibleInterface = SuperAccessibleInterface;

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextUpdateEvent `
    ///
    pub fn SuperAccessibleInterface(self: QAccessibleTextUpdateEvent) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleTextUpdateEvent_SuperAccessibleInterface(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleTextUpdateEvent`
    ///
    /// ` callback: *const fn () callconv(.c) QAccessibleInterface `
    ///
    pub fn OnAccessibleInterface(self: QAccessibleTextUpdateEvent, callback: *const fn () callconv(.c) QAccessibleInterface) void {
        qtc.QAccessibleTextUpdateEvent_OnAccessibleInterface(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextupdateevent.html#dtor.QAccessibleTextUpdateEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QAccessibleTextUpdateEvent `
    ///
    pub fn Delete(self: QAccessibleTextUpdateEvent) void {
        qtc.QAccessibleTextUpdateEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevaluechangeevent.html)
pub const QAccessibleValueChangeEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevaluechangeevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAccessibleValueChangeEvent,

    pub const _is_QAccessibleValueChangeEvent = {};
    pub const _is_QAccessibleEvent = {};

    /// New constructs a new QAccessibleValueChangeEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` val: QVariant `
    ///
    pub fn New(obj: anytype, val: anytype) QAccessibleValueChangeEvent {
        comptime _ = @TypeOf(obj)._is_QObject;
        comptime _ = @TypeOf(val)._is_QVariant;
        return .{ .ptr = qtc.QAccessibleValueChangeEvent_new(@ptrCast(obj.ptr), @ptrCast(val.ptr)) };
    }

    /// New2 constructs a new QAccessibleValueChangeEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` iface: QAccessibleInterface `
    ///
    /// ` val: QVariant `
    ///
    pub fn New2(iface: anytype, val: anytype) QAccessibleValueChangeEvent {
        comptime _ = @TypeOf(iface)._is_QAccessibleInterface;
        comptime _ = @TypeOf(val)._is_QVariant;
        return .{ .ptr = qtc.QAccessibleValueChangeEvent_new2(@ptrCast(iface.ptr), @ptrCast(val.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevaluechangeevent.html#setValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleValueChangeEvent `
    ///
    /// ` val: QVariant `
    ///
    pub fn SetValue(self: QAccessibleValueChangeEvent, val: anytype) void {
        comptime _ = @TypeOf(val)._is_QVariant;
        qtc.QAccessibleValueChangeEvent_SetValue(@ptrCast(self.ptr), @ptrCast(val.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevaluechangeevent.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleValueChangeEvent `
    ///
    pub fn Value(self: QAccessibleValueChangeEvent) QVariant {
        return .{ .ptr = qtc.QAccessibleValueChangeEvent_Value(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleValueChangeEvent `
    ///
    /// ## Returns:
    ///
    /// ` qaccessible_base_enums.Event `
    ///
    pub fn Type(self: QAccessibleValueChangeEvent) i32 {
        return qtc.QAccessibleEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleValueChangeEvent `
    ///
    pub fn Object(self: QAccessibleValueChangeEvent) QObject {
        return .{ .ptr = qtc.QAccessibleEvent_Object(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleValueChangeEvent `
    ///
    pub fn UniqueId(self: QAccessibleValueChangeEvent) u32 {
        return qtc.QAccessibleEvent_UniqueId(@ptrCast(self.ptr));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#setChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleValueChangeEvent `
    ///
    /// ` chld: i32 `
    ///
    pub fn SetChild(self: QAccessibleValueChangeEvent, chld: i32) void {
        qtc.QAccessibleEvent_SetChild(@ptrCast(self.ptr), @bitCast(chld));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleValueChangeEvent `
    ///
    pub fn Child(self: QAccessibleValueChangeEvent) i32 {
        return qtc.QAccessibleEvent_Child(@ptrCast(self.ptr));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleValueChangeEvent `
    ///
    pub fn AccessibleInterface(self: QAccessibleValueChangeEvent) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleValueChangeEvent_AccessibleInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperAccessibleInterface` instead
    ///
    pub const QBaseAccessibleInterface = SuperAccessibleInterface;

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleValueChangeEvent `
    ///
    pub fn SuperAccessibleInterface(self: QAccessibleValueChangeEvent) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleValueChangeEvent_SuperAccessibleInterface(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleValueChangeEvent`
    ///
    /// ` callback: *const fn () callconv(.c) QAccessibleInterface `
    ///
    pub fn OnAccessibleInterface(self: QAccessibleValueChangeEvent, callback: *const fn () callconv(.c) QAccessibleInterface) void {
        qtc.QAccessibleValueChangeEvent_OnAccessibleInterface(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevaluechangeevent.html#dtor.QAccessibleValueChangeEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QAccessibleValueChangeEvent `
    ///
    pub fn Delete(self: QAccessibleValueChangeEvent) void {
        qtc.QAccessibleValueChangeEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html)
pub const QAccessibleTableModelChangeEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAccessibleTableModelChangeEvent,

    pub const _is_QAccessibleTableModelChangeEvent = {};
    pub const _is_QAccessibleEvent = {};

    /// New constructs a new QAccessibleTableModelChangeEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` changeType: qaccessible_enums.ModelChangeType `
    ///
    pub fn New(obj: anytype, changeType: i32) QAccessibleTableModelChangeEvent {
        comptime _ = @TypeOf(obj)._is_QObject;
        return .{ .ptr = qtc.QAccessibleTableModelChangeEvent_new(@ptrCast(obj.ptr), @bitCast(changeType)) };
    }

    /// New2 constructs a new QAccessibleTableModelChangeEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` iface: QAccessibleInterface `
    ///
    /// ` changeType: qaccessible_enums.ModelChangeType `
    ///
    pub fn New2(iface: anytype, changeType: i32) QAccessibleTableModelChangeEvent {
        comptime _ = @TypeOf(iface)._is_QAccessibleInterface;
        return .{ .ptr = qtc.QAccessibleTableModelChangeEvent_new2(@ptrCast(iface.ptr), @bitCast(changeType)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#setModelChangeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableModelChangeEvent `
    ///
    /// ` changeType: qaccessible_enums.ModelChangeType `
    ///
    pub fn SetModelChangeType(self: QAccessibleTableModelChangeEvent, changeType: i32) void {
        qtc.QAccessibleTableModelChangeEvent_SetModelChangeType(@ptrCast(self.ptr), @bitCast(changeType));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#modelChangeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableModelChangeEvent `
    ///
    /// ## Returns:
    ///
    /// ` qaccessible_enums.ModelChangeType `
    ///
    pub fn ModelChangeType(self: QAccessibleTableModelChangeEvent) i32 {
        return qtc.QAccessibleTableModelChangeEvent_ModelChangeType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#setFirstRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableModelChangeEvent `
    ///
    /// ` row: i32 `
    ///
    pub fn SetFirstRow(self: QAccessibleTableModelChangeEvent, row: i32) void {
        qtc.QAccessibleTableModelChangeEvent_SetFirstRow(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#setFirstColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableModelChangeEvent `
    ///
    /// ` col: i32 `
    ///
    pub fn SetFirstColumn(self: QAccessibleTableModelChangeEvent, col: i32) void {
        qtc.QAccessibleTableModelChangeEvent_SetFirstColumn(@ptrCast(self.ptr), @bitCast(col));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#setLastRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableModelChangeEvent `
    ///
    /// ` row: i32 `
    ///
    pub fn SetLastRow(self: QAccessibleTableModelChangeEvent, row: i32) void {
        qtc.QAccessibleTableModelChangeEvent_SetLastRow(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#setLastColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableModelChangeEvent `
    ///
    /// ` col: i32 `
    ///
    pub fn SetLastColumn(self: QAccessibleTableModelChangeEvent, col: i32) void {
        qtc.QAccessibleTableModelChangeEvent_SetLastColumn(@ptrCast(self.ptr), @bitCast(col));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#firstRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableModelChangeEvent `
    ///
    pub fn FirstRow(self: QAccessibleTableModelChangeEvent) i32 {
        return qtc.QAccessibleTableModelChangeEvent_FirstRow(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#firstColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableModelChangeEvent `
    ///
    pub fn FirstColumn(self: QAccessibleTableModelChangeEvent) i32 {
        return qtc.QAccessibleTableModelChangeEvent_FirstColumn(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#lastRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableModelChangeEvent `
    ///
    pub fn LastRow(self: QAccessibleTableModelChangeEvent) i32 {
        return qtc.QAccessibleTableModelChangeEvent_LastRow(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#lastColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableModelChangeEvent `
    ///
    pub fn LastColumn(self: QAccessibleTableModelChangeEvent) i32 {
        return qtc.QAccessibleTableModelChangeEvent_LastColumn(@ptrCast(self.ptr));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableModelChangeEvent `
    ///
    /// ## Returns:
    ///
    /// ` qaccessible_base_enums.Event `
    ///
    pub fn Type(self: QAccessibleTableModelChangeEvent) i32 {
        return qtc.QAccessibleEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableModelChangeEvent `
    ///
    pub fn Object(self: QAccessibleTableModelChangeEvent) QObject {
        return .{ .ptr = qtc.QAccessibleEvent_Object(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableModelChangeEvent `
    ///
    pub fn UniqueId(self: QAccessibleTableModelChangeEvent) u32 {
        return qtc.QAccessibleEvent_UniqueId(@ptrCast(self.ptr));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#setChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableModelChangeEvent `
    ///
    /// ` chld: i32 `
    ///
    pub fn SetChild(self: QAccessibleTableModelChangeEvent, chld: i32) void {
        qtc.QAccessibleEvent_SetChild(@ptrCast(self.ptr), @bitCast(chld));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableModelChangeEvent `
    ///
    pub fn Child(self: QAccessibleTableModelChangeEvent) i32 {
        return qtc.QAccessibleEvent_Child(@ptrCast(self.ptr));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableModelChangeEvent `
    ///
    pub fn AccessibleInterface(self: QAccessibleTableModelChangeEvent) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleTableModelChangeEvent_AccessibleInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperAccessibleInterface` instead
    ///
    pub const QBaseAccessibleInterface = SuperAccessibleInterface;

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableModelChangeEvent `
    ///
    pub fn SuperAccessibleInterface(self: QAccessibleTableModelChangeEvent) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleTableModelChangeEvent_SuperAccessibleInterface(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleTableModelChangeEvent`
    ///
    /// ` callback: *const fn () callconv(.c) QAccessibleInterface `
    ///
    pub fn OnAccessibleInterface(self: QAccessibleTableModelChangeEvent, callback: *const fn () callconv(.c) QAccessibleInterface) void {
        qtc.QAccessibleTableModelChangeEvent_OnAccessibleInterface(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#dtor.QAccessibleTableModelChangeEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QAccessibleTableModelChangeEvent `
    ///
    pub fn Delete(self: QAccessibleTableModelChangeEvent) void {
        qtc.QAccessibleTableModelChangeEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleannouncementevent.html)
pub const QAccessibleAnnouncementEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleannouncementevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAccessibleAnnouncementEvent,

    pub const _is_QAccessibleAnnouncementEvent = {};
    pub const _is_QAccessibleEvent = {};

    /// New constructs a new QAccessibleAnnouncementEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` object: QObject `
    ///
    /// ` message: []const u8 `
    ///
    pub fn New(object: anytype, message: []const u8) QAccessibleAnnouncementEvent {
        comptime _ = @TypeOf(object)._is_QObject;
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        return .{ .ptr = qtc.QAccessibleAnnouncementEvent_new(@ptrCast(object.ptr), message_str) };
    }

    /// New2 constructs a new QAccessibleAnnouncementEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` iface: QAccessibleInterface `
    ///
    /// ` message: []const u8 `
    ///
    pub fn New2(iface: anytype, message: []const u8) QAccessibleAnnouncementEvent {
        comptime _ = @TypeOf(iface)._is_QAccessibleInterface;
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        return .{ .ptr = qtc.QAccessibleAnnouncementEvent_new2(@ptrCast(iface.ptr), message_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleannouncementevent.html#message)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleAnnouncementEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Message(self: QAccessibleAnnouncementEvent, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleAnnouncementEvent_Message(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleannouncementevent.Message: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleannouncementevent.html#politeness)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleAnnouncementEvent `
    ///
    /// ## Returns:
    ///
    /// ` qaccessible_base_enums.AnnouncementPoliteness `
    ///
    pub fn Politeness(self: QAccessibleAnnouncementEvent) i32 {
        return qtc.QAccessibleAnnouncementEvent_Politeness(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleannouncementevent.html#setPoliteness)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleAnnouncementEvent `
    ///
    /// ` politeness: qaccessible_base_enums.AnnouncementPoliteness `
    ///
    pub fn SetPoliteness(self: QAccessibleAnnouncementEvent, politeness: i32) void {
        qtc.QAccessibleAnnouncementEvent_SetPoliteness(@ptrCast(self.ptr), @bitCast(politeness));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleAnnouncementEvent `
    ///
    /// ## Returns:
    ///
    /// ` qaccessible_base_enums.Event `
    ///
    pub fn Type(self: QAccessibleAnnouncementEvent) i32 {
        return qtc.QAccessibleEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleAnnouncementEvent `
    ///
    pub fn Object(self: QAccessibleAnnouncementEvent) QObject {
        return .{ .ptr = qtc.QAccessibleEvent_Object(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleAnnouncementEvent `
    ///
    pub fn UniqueId(self: QAccessibleAnnouncementEvent) u32 {
        return qtc.QAccessibleEvent_UniqueId(@ptrCast(self.ptr));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#setChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleAnnouncementEvent `
    ///
    /// ` chld: i32 `
    ///
    pub fn SetChild(self: QAccessibleAnnouncementEvent, chld: i32) void {
        qtc.QAccessibleEvent_SetChild(@ptrCast(self.ptr), @bitCast(chld));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleAnnouncementEvent `
    ///
    pub fn Child(self: QAccessibleAnnouncementEvent) i32 {
        return qtc.QAccessibleEvent_Child(@ptrCast(self.ptr));
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleAnnouncementEvent `
    ///
    pub fn AccessibleInterface(self: QAccessibleAnnouncementEvent) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleAnnouncementEvent_AccessibleInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperAccessibleInterface` instead
    ///
    pub const QBaseAccessibleInterface = SuperAccessibleInterface;

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleAnnouncementEvent `
    ///
    pub fn SuperAccessibleInterface(self: QAccessibleAnnouncementEvent) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleAnnouncementEvent_SuperAccessibleInterface(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleAnnouncementEvent`
    ///
    /// ` callback: *const fn () callconv(.c) QAccessibleInterface `
    ///
    pub fn OnAccessibleInterface(self: QAccessibleAnnouncementEvent, callback: *const fn () callconv(.c) QAccessibleInterface) void {
        qtc.QAccessibleAnnouncementEvent_OnAccessibleInterface(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleannouncementevent.html#dtor.QAccessibleAnnouncementEvent)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QAccessibleAnnouncementEvent `
    ///
    pub fn Delete(self: QAccessibleAnnouncementEvent) void {
        qtc.QAccessibleAnnouncementEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html#public-types)
pub const enums = struct {
    pub const ModelChangeType = enum(i32) {
        pub const ModelReset: i32 = 0;
        pub const DataChanged: i32 = 1;
        pub const RowsInserted: i32 = 2;
        pub const ColumnsInserted: i32 = 3;
        pub const RowsRemoved: i32 = 4;
        pub const ColumnsRemoved: i32 = 5;
    };
};
