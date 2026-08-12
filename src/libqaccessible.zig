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

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    pub fn isValid(self: QAccessibleInterface) bool {
        return qtc.QAccessibleInterface_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `object` instead
    ///
    pub const Object = object;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#object)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    pub fn object(self: QAccessibleInterface) QObject {
        return .{ .ptr = qtc.QAccessibleInterface_Object(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `window` instead
    ///
    pub const Window = window;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#window)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    pub fn window(self: QAccessibleInterface) QWindow {
        return .{ .ptr = qtc.QAccessibleInterface_Window(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `relations` instead
    ///
    pub const Relations = relations;

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
    pub fn relations(self: QAccessibleInterface, allocator: std.mem.Allocator, match: i32) []Struct_QAccessibleInterface_i32 {
        const _arr: qtc.libqt_list = qtc.QAccessibleInterface_Relations(@ptrCast(self.ptr), @bitCast(match));
        const _data_val: [*]Struct_QAccessibleInterface_i32 = @ptrCast(@alignCast(_arr.data));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Struct_QAccessibleInterface_i32, _arr.len) catch @panic("QAccessibleInterface.relations: Memory allocation failed");
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `focusChild` instead
    ///
    pub const FocusChild = focusChild;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#focusChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    pub fn focusChild(self: QAccessibleInterface) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleInterface_FocusChild(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `childAt` instead
    ///
    pub const ChildAt = childAt;

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
    pub fn childAt(self: QAccessibleInterface, x: i32, y: i32) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleInterface_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    pub fn parent(self: QAccessibleInterface) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleInterface_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `child` instead
    ///
    pub const Child = child;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#child)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    /// ` index: i32 `
    ///
    pub fn child(self: QAccessibleInterface, index: i32) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleInterface_Child(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `childCount` instead
    ///
    pub const ChildCount = childCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#childCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    pub fn childCount(self: QAccessibleInterface) i32 {
        return qtc.QAccessibleInterface_ChildCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `indexOfChild` instead
    ///
    pub const IndexOfChild = indexOfChild;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#indexOfChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    /// ` param1: QAccessibleInterface `
    ///
    pub fn indexOfChild(self: QAccessibleInterface, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QAccessibleInterface;
        return qtc.QAccessibleInterface_IndexOfChild(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

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
    pub fn text(self: QAccessibleInterface, allocator: std.mem.Allocator, t: i32) []const u8 {
        var _str = qtc.QAccessibleInterface_Text(@ptrCast(self.ptr), @bitCast(t));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleInterface.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setText` instead
    ///
    pub const SetText = setText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    /// ` t: qaccessible_base_enums.Text `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn setText(self: QAccessibleInterface, t: i32, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QAccessibleInterface_SetText(@ptrCast(self.ptr), @bitCast(t), text_str);
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    pub fn rect(self: QAccessibleInterface) QRect {
        return .{ .ptr = qtc.QAccessibleInterface_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `role` instead
    ///
    pub const Role = role;

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
    pub fn role(self: QAccessibleInterface) i32 {
        return qtc.QAccessibleInterface_Role(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    pub fn state(self: QAccessibleInterface) QAccessible__State {
        return .{ .ptr = qtc.QAccessibleInterface_State(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `foregroundColor` instead
    ///
    pub const ForegroundColor = foregroundColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#foregroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    pub fn foregroundColor(self: QAccessibleInterface) QColor {
        return .{ .ptr = qtc.QAccessibleInterface_ForegroundColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `backgroundColor` instead
    ///
    pub const BackgroundColor = backgroundColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#backgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    pub fn backgroundColor(self: QAccessibleInterface) QColor {
        return .{ .ptr = qtc.QAccessibleInterface_BackgroundColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `textInterface` instead
    ///
    pub const TextInterface = textInterface;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#textInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    pub fn textInterface(self: QAccessibleInterface) QAccessibleTextInterface {
        return .{ .ptr = qtc.QAccessibleInterface_TextInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `editableTextInterface` instead
    ///
    pub const EditableTextInterface = editableTextInterface;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#editableTextInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    pub fn editableTextInterface(self: QAccessibleInterface) QAccessibleEditableTextInterface {
        return .{ .ptr = qtc.QAccessibleInterface_EditableTextInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `valueInterface` instead
    ///
    pub const ValueInterface = valueInterface;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#valueInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    pub fn valueInterface(self: QAccessibleInterface) QAccessibleValueInterface {
        return .{ .ptr = qtc.QAccessibleInterface_ValueInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `actionInterface` instead
    ///
    pub const ActionInterface = actionInterface;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#actionInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    pub fn actionInterface(self: QAccessibleInterface) QAccessibleActionInterface {
        return .{ .ptr = qtc.QAccessibleInterface_ActionInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `imageInterface` instead
    ///
    pub const ImageInterface = imageInterface;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#imageInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    pub fn imageInterface(self: QAccessibleInterface) QAccessibleImageInterface {
        return .{ .ptr = qtc.QAccessibleInterface_ImageInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `tableInterface` instead
    ///
    pub const TableInterface = tableInterface;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    pub fn tableInterface(self: QAccessibleInterface) QAccessibleTableInterface {
        return .{ .ptr = qtc.QAccessibleInterface_TableInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `tableCellInterface` instead
    ///
    pub const TableCellInterface = tableCellInterface;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableCellInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    pub fn tableCellInterface(self: QAccessibleInterface) QAccessibleTableCellInterface {
        return .{ .ptr = qtc.QAccessibleInterface_TableCellInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `hyperlinkInterface` instead
    ///
    pub const HyperlinkInterface = hyperlinkInterface;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#hyperlinkInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    pub fn hyperlinkInterface(self: QAccessibleInterface) QAccessibleHyperlinkInterface {
        return .{ .ptr = qtc.QAccessibleInterface_HyperlinkInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `selectionInterface` instead
    ///
    pub const SelectionInterface = selectionInterface;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#selectionInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    pub fn selectionInterface(self: QAccessibleInterface) QAccessibleSelectionInterface {
        return .{ .ptr = qtc.QAccessibleInterface_SelectionInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `attributesInterface` instead
    ///
    pub const AttributesInterface = attributesInterface;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#attributesInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    pub fn attributesInterface(self: QAccessibleInterface) QAccessibleAttributesInterface {
        return .{ .ptr = qtc.QAccessibleInterface_AttributesInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `virtualHook` instead
    ///
    pub const VirtualHook = virtualHook;

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
    pub fn virtualHook(self: QAccessibleInterface, id: i32, data: ?*anyopaque) void {
        qtc.QAccessibleInterface_VirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `interfaceCast` instead
    ///
    pub const InterfaceCast = interfaceCast;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#interface_cast)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleInterface `
    ///
    /// ` param1: qaccessible_base_enums.InterfaceType `
    ///
    pub fn interfaceCast(self: QAccessibleInterface, param1: i32) ?*anyopaque {
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

    /// ### DEPRECATED: Use `selection` instead
    ///
    pub const Selection = selection;

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
    pub fn selection(self: QAccessibleTextInterface, selectionIndex: i32, startOffset: *i32, endOffset: *i32) void {
        qtc.QAccessibleTextInterface_Selection(@ptrCast(self.ptr), @bitCast(selectionIndex), @ptrCast(startOffset), @ptrCast(endOffset));
    }

    /// ### DEPRECATED: Use `selectionCount` instead
    ///
    pub const SelectionCount = selectionCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#selectionCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextInterface `
    ///
    pub fn selectionCount(self: QAccessibleTextInterface) i32 {
        return qtc.QAccessibleTextInterface_SelectionCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `addSelection` instead
    ///
    pub const AddSelection = addSelection;

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
    pub fn addSelection(self: QAccessibleTextInterface, startOffset: i32, endOffset: i32) void {
        qtc.QAccessibleTextInterface_AddSelection(@ptrCast(self.ptr), @bitCast(startOffset), @bitCast(endOffset));
    }

    /// ### DEPRECATED: Use `removeSelection` instead
    ///
    pub const RemoveSelection = removeSelection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#removeSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextInterface `
    ///
    /// ` selectionIndex: i32 `
    ///
    pub fn removeSelection(self: QAccessibleTextInterface, selectionIndex: i32) void {
        qtc.QAccessibleTextInterface_RemoveSelection(@ptrCast(self.ptr), @bitCast(selectionIndex));
    }

    /// ### DEPRECATED: Use `setSelection` instead
    ///
    pub const SetSelection = setSelection;

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
    pub fn setSelection(self: QAccessibleTextInterface, selectionIndex: i32, startOffset: i32, endOffset: i32) void {
        qtc.QAccessibleTextInterface_SetSelection(@ptrCast(self.ptr), @bitCast(selectionIndex), @bitCast(startOffset), @bitCast(endOffset));
    }

    /// ### DEPRECATED: Use `cursorPosition` instead
    ///
    pub const CursorPosition = cursorPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#cursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextInterface `
    ///
    pub fn cursorPosition(self: QAccessibleTextInterface) i32 {
        return qtc.QAccessibleTextInterface_CursorPosition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCursorPosition` instead
    ///
    pub const SetCursorPosition = setCursorPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#setCursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextInterface `
    ///
    /// ` position: i32 `
    ///
    pub fn setCursorPosition(self: QAccessibleTextInterface, position: i32) void {
        qtc.QAccessibleTextInterface_SetCursorPosition(@ptrCast(self.ptr), @bitCast(position));
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

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
    pub fn text(self: QAccessibleTextInterface, allocator: std.mem.Allocator, startOffset: i32, endOffset: i32) []const u8 {
        var _str = qtc.QAccessibleTextInterface_Text(@ptrCast(self.ptr), @bitCast(startOffset), @bitCast(endOffset));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleTextInterface.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `textBeforeOffset` instead
    ///
    pub const TextBeforeOffset = textBeforeOffset;

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
    pub fn textBeforeOffset(self: QAccessibleTextInterface, allocator: std.mem.Allocator, offset: i32, boundaryType: i32, startOffset: *i32, endOffset: *i32) []const u8 {
        var _str = qtc.QAccessibleTextInterface_TextBeforeOffset(@ptrCast(self.ptr), @bitCast(offset), @bitCast(boundaryType), @ptrCast(startOffset), @ptrCast(endOffset));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleTextInterface.textBeforeOffset: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `textAfterOffset` instead
    ///
    pub const TextAfterOffset = textAfterOffset;

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
    pub fn textAfterOffset(self: QAccessibleTextInterface, allocator: std.mem.Allocator, offset: i32, boundaryType: i32, startOffset: *i32, endOffset: *i32) []const u8 {
        var _str = qtc.QAccessibleTextInterface_TextAfterOffset(@ptrCast(self.ptr), @bitCast(offset), @bitCast(boundaryType), @ptrCast(startOffset), @ptrCast(endOffset));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleTextInterface.textAfterOffset: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `textAtOffset` instead
    ///
    pub const TextAtOffset = textAtOffset;

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
    pub fn textAtOffset(self: QAccessibleTextInterface, allocator: std.mem.Allocator, offset: i32, boundaryType: i32, startOffset: *i32, endOffset: *i32) []const u8 {
        var _str = qtc.QAccessibleTextInterface_TextAtOffset(@ptrCast(self.ptr), @bitCast(offset), @bitCast(boundaryType), @ptrCast(startOffset), @ptrCast(endOffset));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleTextInterface.textAtOffset: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `characterCount` instead
    ///
    pub const CharacterCount = characterCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#characterCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextInterface `
    ///
    pub fn characterCount(self: QAccessibleTextInterface) i32 {
        return qtc.QAccessibleTextInterface_CharacterCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `characterRect` instead
    ///
    pub const CharacterRect = characterRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#characterRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextInterface `
    ///
    /// ` offset: i32 `
    ///
    pub fn characterRect(self: QAccessibleTextInterface, offset: i32) QRect {
        return .{ .ptr = qtc.QAccessibleTextInterface_CharacterRect(@ptrCast(self.ptr), @bitCast(offset)) };
    }

    /// ### DEPRECATED: Use `offsetAtPoint` instead
    ///
    pub const OffsetAtPoint = offsetAtPoint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#offsetAtPoint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextInterface `
    ///
    /// ` point: QPoint `
    ///
    pub fn offsetAtPoint(self: QAccessibleTextInterface, point: anytype) i32 {
        comptime _ = @TypeOf(point)._is_QPoint;
        return qtc.QAccessibleTextInterface_OffsetAtPoint(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `scrollToSubstring` instead
    ///
    pub const ScrollToSubstring = scrollToSubstring;

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
    pub fn scrollToSubstring(self: QAccessibleTextInterface, startIndex: i32, endIndex: i32) void {
        qtc.QAccessibleTextInterface_ScrollToSubstring(@ptrCast(self.ptr), @bitCast(startIndex), @bitCast(endIndex));
    }

    /// ### DEPRECATED: Use `attributes` instead
    ///
    pub const Attributes = attributes;

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
    pub fn attributes(self: QAccessibleTextInterface, allocator: std.mem.Allocator, offset: i32, startOffset: *i32, endOffset: *i32) []const u8 {
        var _str = qtc.QAccessibleTextInterface_Attributes(@ptrCast(self.ptr), @bitCast(offset), @ptrCast(startOffset), @ptrCast(endOffset));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleTextInterface.attributes: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextInterface `
    ///
    /// ` param1: QAccessibleTextInterface `
    ///
    pub fn operatorAssign(self: QAccessibleTextInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QAccessibleTextInterface;
        qtc.QAccessibleTextInterface_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinterface.html#dtor.QAccessibleTextInterface)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAccessibleTextInterface `
    ///
    pub fn delete(self: QAccessibleTextInterface) void {
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

    /// ### DEPRECATED: Use `deleteText` instead
    ///
    pub const DeleteText = deleteText;

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
    pub fn deleteText(self: QAccessibleEditableTextInterface, startOffset: i32, endOffset: i32) void {
        qtc.QAccessibleEditableTextInterface_DeleteText(@ptrCast(self.ptr), @bitCast(startOffset), @bitCast(endOffset));
    }

    /// ### DEPRECATED: Use `insertText` instead
    ///
    pub const InsertText = insertText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleeditabletextinterface.html#insertText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleEditableTextInterface `
    ///
    /// ` offset: i32 `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn insertText(self: QAccessibleEditableTextInterface, offset: i32, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QAccessibleEditableTextInterface_InsertText(@ptrCast(self.ptr), @bitCast(offset), text_str);
    }

    /// ### DEPRECATED: Use `replaceText` instead
    ///
    pub const ReplaceText = replaceText;

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
    /// ` _text: []const u8 `
    ///
    pub fn replaceText(self: QAccessibleEditableTextInterface, startOffset: i32, endOffset: i32, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QAccessibleEditableTextInterface_ReplaceText(@ptrCast(self.ptr), @bitCast(startOffset), @bitCast(endOffset), text_str);
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleeditabletextinterface.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleEditableTextInterface `
    ///
    /// ` param1: QAccessibleEditableTextInterface `
    ///
    pub fn operatorAssign(self: QAccessibleEditableTextInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QAccessibleEditableTextInterface;
        qtc.QAccessibleEditableTextInterface_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleeditabletextinterface.html#dtor.QAccessibleEditableTextInterface)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAccessibleEditableTextInterface `
    ///
    pub fn delete(self: QAccessibleEditableTextInterface) void {
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

    /// ### DEPRECATED: Use `currentValue` instead
    ///
    pub const CurrentValue = currentValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevalueinterface.html#currentValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleValueInterface `
    ///
    pub fn currentValue(self: QAccessibleValueInterface) QVariant {
        return .{ .ptr = qtc.QAccessibleValueInterface_CurrentValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCurrentValue` instead
    ///
    pub const SetCurrentValue = setCurrentValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevalueinterface.html#setCurrentValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleValueInterface `
    ///
    /// ` value: QVariant `
    ///
    pub fn setCurrentValue(self: QAccessibleValueInterface, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QAccessibleValueInterface_SetCurrentValue(@ptrCast(self.ptr), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `maximumValue` instead
    ///
    pub const MaximumValue = maximumValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevalueinterface.html#maximumValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleValueInterface `
    ///
    pub fn maximumValue(self: QAccessibleValueInterface) QVariant {
        return .{ .ptr = qtc.QAccessibleValueInterface_MaximumValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `minimumValue` instead
    ///
    pub const MinimumValue = minimumValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevalueinterface.html#minimumValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleValueInterface `
    ///
    pub fn minimumValue(self: QAccessibleValueInterface) QVariant {
        return .{ .ptr = qtc.QAccessibleValueInterface_MinimumValue(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `minimumStepSize` instead
    ///
    pub const MinimumStepSize = minimumStepSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevalueinterface.html#minimumStepSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleValueInterface `
    ///
    pub fn minimumStepSize(self: QAccessibleValueInterface) QVariant {
        return .{ .ptr = qtc.QAccessibleValueInterface_MinimumStepSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevalueinterface.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleValueInterface `
    ///
    /// ` param1: QAccessibleValueInterface `
    ///
    pub fn operatorAssign(self: QAccessibleValueInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QAccessibleValueInterface;
        qtc.QAccessibleValueInterface_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevalueinterface.html#dtor.QAccessibleValueInterface)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAccessibleValueInterface `
    ///
    pub fn delete(self: QAccessibleValueInterface) void {
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

    /// ### DEPRECATED: Use `isSelected` instead
    ///
    pub const IsSelected = isSelected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#isSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableCellInterface `
    ///
    pub fn isSelected(self: QAccessibleTableCellInterface) bool {
        return qtc.QAccessibleTableCellInterface_IsSelected(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `columnHeaderCells` instead
    ///
    pub const ColumnHeaderCells = columnHeaderCells;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#columnHeaderCells)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableCellInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn columnHeaderCells(self: QAccessibleTableCellInterface, allocator: std.mem.Allocator) []QAccessibleInterface {
        const _arr: qtc.libqt_list = qtc.QAccessibleTableCellInterface_ColumnHeaderCells(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAccessibleInterface, _arr.len) catch @panic("QAccessibleTableCellInterface.columnHeaderCells: Memory allocation failed");
        const _data_val: [*]QtC.QAccessibleInterface = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `rowHeaderCells` instead
    ///
    pub const RowHeaderCells = rowHeaderCells;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#rowHeaderCells)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableCellInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn rowHeaderCells(self: QAccessibleTableCellInterface, allocator: std.mem.Allocator) []QAccessibleInterface {
        const _arr: qtc.libqt_list = qtc.QAccessibleTableCellInterface_RowHeaderCells(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAccessibleInterface, _arr.len) catch @panic("QAccessibleTableCellInterface.rowHeaderCells: Memory allocation failed");
        const _data_val: [*]QtC.QAccessibleInterface = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `columnIndex` instead
    ///
    pub const ColumnIndex = columnIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#columnIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableCellInterface `
    ///
    pub fn columnIndex(self: QAccessibleTableCellInterface) i32 {
        return qtc.QAccessibleTableCellInterface_ColumnIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `rowIndex` instead
    ///
    pub const RowIndex = rowIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#rowIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableCellInterface `
    ///
    pub fn rowIndex(self: QAccessibleTableCellInterface) i32 {
        return qtc.QAccessibleTableCellInterface_RowIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `columnExtent` instead
    ///
    pub const ColumnExtent = columnExtent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#columnExtent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableCellInterface `
    ///
    pub fn columnExtent(self: QAccessibleTableCellInterface) i32 {
        return qtc.QAccessibleTableCellInterface_ColumnExtent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `rowExtent` instead
    ///
    pub const RowExtent = rowExtent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#rowExtent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableCellInterface `
    ///
    pub fn rowExtent(self: QAccessibleTableCellInterface) i32 {
        return qtc.QAccessibleTableCellInterface_RowExtent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `table` instead
    ///
    pub const Table = table;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#table)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableCellInterface `
    ///
    pub fn table(self: QAccessibleTableCellInterface) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleTableCellInterface_Table(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableCellInterface `
    ///
    /// ` param1: QAccessibleTableCellInterface `
    ///
    pub fn operatorAssign(self: QAccessibleTableCellInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QAccessibleTableCellInterface;
        qtc.QAccessibleTableCellInterface_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablecellinterface.html#dtor.QAccessibleTableCellInterface)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAccessibleTableCellInterface `
    ///
    pub fn delete(self: QAccessibleTableCellInterface) void {
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

    /// ### DEPRECATED: Use `caption` instead
    ///
    pub const Caption = caption;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#caption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableInterface `
    ///
    pub fn caption(self: QAccessibleTableInterface) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleTableInterface_Caption(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `summary` instead
    ///
    pub const Summary = summary;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#summary)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableInterface `
    ///
    pub fn summary(self: QAccessibleTableInterface) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleTableInterface_Summary(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `cellAt` instead
    ///
    pub const CellAt = cellAt;

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
    pub fn cellAt(self: QAccessibleTableInterface, row: i32, column: i32) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleTableInterface_CellAt(@ptrCast(self.ptr), @bitCast(row), @bitCast(column)) };
    }

    /// ### DEPRECATED: Use `selectedCellCount` instead
    ///
    pub const SelectedCellCount = selectedCellCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectedCellCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableInterface `
    ///
    pub fn selectedCellCount(self: QAccessibleTableInterface) i32 {
        return qtc.QAccessibleTableInterface_SelectedCellCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `selectedCells` instead
    ///
    pub const SelectedCells = selectedCells;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectedCells)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn selectedCells(self: QAccessibleTableInterface, allocator: std.mem.Allocator) []QAccessibleInterface {
        const _arr: qtc.libqt_list = qtc.QAccessibleTableInterface_SelectedCells(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAccessibleInterface, _arr.len) catch @panic("QAccessibleTableInterface.selectedCells: Memory allocation failed");
        const _data_val: [*]QtC.QAccessibleInterface = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `columnDescription` instead
    ///
    pub const ColumnDescription = columnDescription;

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
    pub fn columnDescription(self: QAccessibleTableInterface, allocator: std.mem.Allocator, column: i32) []const u8 {
        var _str = qtc.QAccessibleTableInterface_ColumnDescription(@ptrCast(self.ptr), @bitCast(column));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleTableInterface.columnDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `rowDescription` instead
    ///
    pub const RowDescription = rowDescription;

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
    pub fn rowDescription(self: QAccessibleTableInterface, allocator: std.mem.Allocator, row: i32) []const u8 {
        var _str = qtc.QAccessibleTableInterface_RowDescription(@ptrCast(self.ptr), @bitCast(row));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleTableInterface.rowDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `selectedColumnCount` instead
    ///
    pub const SelectedColumnCount = selectedColumnCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectedColumnCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableInterface `
    ///
    pub fn selectedColumnCount(self: QAccessibleTableInterface) i32 {
        return qtc.QAccessibleTableInterface_SelectedColumnCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `selectedRowCount` instead
    ///
    pub const SelectedRowCount = selectedRowCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectedRowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableInterface `
    ///
    pub fn selectedRowCount(self: QAccessibleTableInterface) i32 {
        return qtc.QAccessibleTableInterface_SelectedRowCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `columnCount` instead
    ///
    pub const ColumnCount = columnCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#columnCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableInterface `
    ///
    pub fn columnCount(self: QAccessibleTableInterface) i32 {
        return qtc.QAccessibleTableInterface_ColumnCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `rowCount` instead
    ///
    pub const RowCount = rowCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#rowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableInterface `
    ///
    pub fn rowCount(self: QAccessibleTableInterface) i32 {
        return qtc.QAccessibleTableInterface_RowCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `selectedColumns` instead
    ///
    pub const SelectedColumns = selectedColumns;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectedColumns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn selectedColumns(self: QAccessibleTableInterface, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QAccessibleTableInterface_SelectedColumns(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("QAccessibleTableInterface.selectedColumns: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `selectedRows` instead
    ///
    pub const SelectedRows = selectedRows;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectedRows)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn selectedRows(self: QAccessibleTableInterface, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QAccessibleTableInterface_SelectedRows(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("QAccessibleTableInterface.selectedRows: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isColumnSelected` instead
    ///
    pub const IsColumnSelected = isColumnSelected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#isColumnSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableInterface `
    ///
    /// ` column: i32 `
    ///
    pub fn isColumnSelected(self: QAccessibleTableInterface, column: i32) bool {
        return qtc.QAccessibleTableInterface_IsColumnSelected(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `isRowSelected` instead
    ///
    pub const IsRowSelected = isRowSelected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#isRowSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableInterface `
    ///
    /// ` row: i32 `
    ///
    pub fn isRowSelected(self: QAccessibleTableInterface, row: i32) bool {
        return qtc.QAccessibleTableInterface_IsRowSelected(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### DEPRECATED: Use `selectRow` instead
    ///
    pub const SelectRow = selectRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableInterface `
    ///
    /// ` row: i32 `
    ///
    pub fn selectRow(self: QAccessibleTableInterface, row: i32) bool {
        return qtc.QAccessibleTableInterface_SelectRow(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### DEPRECATED: Use `selectColumn` instead
    ///
    pub const SelectColumn = selectColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#selectColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableInterface `
    ///
    /// ` column: i32 `
    ///
    pub fn selectColumn(self: QAccessibleTableInterface, column: i32) bool {
        return qtc.QAccessibleTableInterface_SelectColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `unselectRow` instead
    ///
    pub const UnselectRow = unselectRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#unselectRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableInterface `
    ///
    /// ` row: i32 `
    ///
    pub fn unselectRow(self: QAccessibleTableInterface, row: i32) bool {
        return qtc.QAccessibleTableInterface_UnselectRow(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### DEPRECATED: Use `unselectColumn` instead
    ///
    pub const UnselectColumn = unselectColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#unselectColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableInterface `
    ///
    /// ` column: i32 `
    ///
    pub fn unselectColumn(self: QAccessibleTableInterface, column: i32) bool {
        return qtc.QAccessibleTableInterface_UnselectColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `modelChange` instead
    ///
    pub const ModelChange = modelChange;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#modelChange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableInterface `
    ///
    /// ` event: QAccessibleTableModelChangeEvent `
    ///
    pub fn modelChange(self: QAccessibleTableInterface, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QAccessibleTableModelChangeEvent;
        qtc.QAccessibleTableInterface_ModelChange(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletableinterface.html#dtor.QAccessibleTableInterface)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAccessibleTableInterface `
    ///
    pub fn delete(self: QAccessibleTableInterface) void {
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

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` sourceText: [:0]const u8 `
    ///
    pub fn tr(allocator: std.mem.Allocator, sourceText: [:0]const u8) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        var _str = qtc.QObject_Tr(sourceText_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleActionInterface.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `actionNames` instead
    ///
    pub const ActionNames = actionNames;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#actionNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleActionInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn actionNames(self: QAccessibleActionInterface, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QAccessibleActionInterface_ActionNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QAccessibleActionInterface.actionNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QAccessibleActionInterface.actionNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `localizedActionName` instead
    ///
    pub const LocalizedActionName = localizedActionName;

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
    pub fn localizedActionName(self: QAccessibleActionInterface, allocator: std.mem.Allocator, name: []const u8) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.QAccessibleActionInterface_LocalizedActionName(@ptrCast(self.ptr), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleActionInterface.localizedActionName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `localizedActionDescription` instead
    ///
    pub const LocalizedActionDescription = localizedActionDescription;

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
    pub fn localizedActionDescription(self: QAccessibleActionInterface, allocator: std.mem.Allocator, name: []const u8) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.QAccessibleActionInterface_LocalizedActionDescription(@ptrCast(self.ptr), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleActionInterface.localizedActionDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `doAction` instead
    ///
    pub const DoAction = doAction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#doAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleActionInterface `
    ///
    /// ` actionName: []const u8 `
    ///
    pub fn doAction(self: QAccessibleActionInterface, actionName: []const u8) void {
        const actionName_str = qtc.libqt_string{
            .len = actionName.len,
            .data = actionName.ptr,
        };
        qtc.QAccessibleActionInterface_DoAction(@ptrCast(self.ptr), actionName_str);
    }

    /// ### DEPRECATED: Use `keyBindingsForAction` instead
    ///
    pub const KeyBindingsForAction = keyBindingsForAction;

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
    pub fn keyBindingsForAction(self: QAccessibleActionInterface, allocator: std.mem.Allocator, actionName: []const u8) []const []const u8 {
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
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QAccessibleActionInterface.keyBindingsForAction: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QAccessibleActionInterface.keyBindingsForAction: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `pressAction` instead
    ///
    pub const PressAction = pressAction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#pressAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn pressAction(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleActionInterface_PressAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleActionInterface.pressAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `increaseAction` instead
    ///
    pub const IncreaseAction = increaseAction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#increaseAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn increaseAction(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleActionInterface_IncreaseAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleActionInterface.increaseAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `decreaseAction` instead
    ///
    pub const DecreaseAction = decreaseAction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#decreaseAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn decreaseAction(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleActionInterface_DecreaseAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleActionInterface.decreaseAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `showMenuAction` instead
    ///
    pub const ShowMenuAction = showMenuAction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#showMenuAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn showMenuAction(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleActionInterface_ShowMenuAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleActionInterface.showMenuAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setFocusAction` instead
    ///
    pub const SetFocusAction = setFocusAction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#setFocusAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn setFocusAction(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleActionInterface_SetFocusAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleActionInterface.setFocusAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toggleAction` instead
    ///
    pub const ToggleAction = toggleAction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#toggleAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toggleAction(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleActionInterface_ToggleAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleActionInterface.toggleAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `scrollLeftAction` instead
    ///
    pub const ScrollLeftAction = scrollLeftAction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#scrollLeftAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn scrollLeftAction(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleActionInterface_ScrollLeftAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleActionInterface.scrollLeftAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `scrollRightAction` instead
    ///
    pub const ScrollRightAction = scrollRightAction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#scrollRightAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn scrollRightAction(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleActionInterface_ScrollRightAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleActionInterface.scrollRightAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `scrollUpAction` instead
    ///
    pub const ScrollUpAction = scrollUpAction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#scrollUpAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn scrollUpAction(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleActionInterface_ScrollUpAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleActionInterface.scrollUpAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `scrollDownAction` instead
    ///
    pub const ScrollDownAction = scrollDownAction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#scrollDownAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn scrollDownAction(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleActionInterface_ScrollDownAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleActionInterface.scrollDownAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `nextPageAction` instead
    ///
    pub const NextPageAction = nextPageAction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#nextPageAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn nextPageAction(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleActionInterface_NextPageAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleActionInterface.nextPageAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `previousPageAction` instead
    ///
    pub const PreviousPageAction = previousPageAction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#previousPageAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn previousPageAction(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleActionInterface_PreviousPageAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleActionInterface.previousPageAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleActionInterface `
    ///
    /// ` param1: QAccessibleActionInterface `
    ///
    pub fn operatorAssign(self: QAccessibleActionInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QAccessibleActionInterface;
        qtc.QAccessibleActionInterface_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` sourceText: [:0]const u8 `
    ///
    /// ` disambiguation: [:0]const u8 `
    ///
    pub fn tr2(allocator: std.mem.Allocator, sourceText: [:0]const u8, disambiguation: [:0]const u8) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        var _str = qtc.QObject_Tr2(sourceText_Cstring, disambiguation_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleActionInterface.tr2: Memory allocation failed");
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
    /// ` sourceText: [:0]const u8 `
    ///
    /// ` disambiguation: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn tr3(allocator: std.mem.Allocator, sourceText: [:0]const u8, disambiguation: [:0]const u8, n: i32) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        var _str = qtc.QObject_Tr3(sourceText_Cstring, disambiguation_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleActionInterface.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#dtor.QAccessibleActionInterface)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAccessibleActionInterface `
    ///
    pub fn delete(self: QAccessibleActionInterface) void {
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

    /// ### DEPRECATED: Use `imageDescription` instead
    ///
    pub const ImageDescription = imageDescription;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleimageinterface.html#imageDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleImageInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn imageDescription(self: QAccessibleImageInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleImageInterface_ImageDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleImageInterface.imageDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `imageSize` instead
    ///
    pub const ImageSize = imageSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleimageinterface.html#imageSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleImageInterface `
    ///
    pub fn imageSize(self: QAccessibleImageInterface) QSize {
        return .{ .ptr = qtc.QAccessibleImageInterface_ImageSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `imagePosition` instead
    ///
    pub const ImagePosition = imagePosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleimageinterface.html#imagePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleImageInterface `
    ///
    pub fn imagePosition(self: QAccessibleImageInterface) QPoint {
        return .{ .ptr = qtc.QAccessibleImageInterface_ImagePosition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleimageinterface.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleImageInterface `
    ///
    /// ` param1: QAccessibleImageInterface `
    ///
    pub fn operatorAssign(self: QAccessibleImageInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QAccessibleImageInterface;
        qtc.QAccessibleImageInterface_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleimageinterface.html#dtor.QAccessibleImageInterface)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAccessibleImageInterface `
    ///
    pub fn delete(self: QAccessibleImageInterface) void {
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

    /// ### DEPRECATED: Use `anchor` instead
    ///
    pub const Anchor = anchor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html#anchor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleHyperlinkInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn anchor(self: QAccessibleHyperlinkInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleHyperlinkInterface_Anchor(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleHyperlinkInterface.anchor: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `anchorTarget` instead
    ///
    pub const AnchorTarget = anchorTarget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html#anchorTarget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleHyperlinkInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn anchorTarget(self: QAccessibleHyperlinkInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleHyperlinkInterface_AnchorTarget(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleHyperlinkInterface.anchorTarget: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `startIndex` instead
    ///
    pub const StartIndex = startIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html#startIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleHyperlinkInterface `
    ///
    pub fn startIndex(self: QAccessibleHyperlinkInterface) i32 {
        return qtc.QAccessibleHyperlinkInterface_StartIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `endIndex` instead
    ///
    pub const EndIndex = endIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html#endIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleHyperlinkInterface `
    ///
    pub fn endIndex(self: QAccessibleHyperlinkInterface) i32 {
        return qtc.QAccessibleHyperlinkInterface_EndIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleHyperlinkInterface `
    ///
    pub fn isValid(self: QAccessibleHyperlinkInterface) bool {
        return qtc.QAccessibleHyperlinkInterface_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleHyperlinkInterface `
    ///
    /// ` param1: QAccessibleHyperlinkInterface `
    ///
    pub fn operatorAssign(self: QAccessibleHyperlinkInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QAccessibleHyperlinkInterface;
        qtc.QAccessibleHyperlinkInterface_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblehyperlinkinterface.html#dtor.QAccessibleHyperlinkInterface)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAccessibleHyperlinkInterface `
    ///
    pub fn delete(self: QAccessibleHyperlinkInterface) void {
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

    /// ### DEPRECATED: Use `selectedItemCount` instead
    ///
    pub const SelectedItemCount = selectedItemCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html#selectedItemCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleSelectionInterface `
    ///
    pub fn selectedItemCount(self: QAccessibleSelectionInterface) i32 {
        return qtc.QAccessibleSelectionInterface_SelectedItemCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `selectedItems` instead
    ///
    pub const SelectedItems = selectedItems;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html#selectedItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleSelectionInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn selectedItems(self: QAccessibleSelectionInterface, allocator: std.mem.Allocator) []QAccessibleInterface {
        const _arr: qtc.libqt_list = qtc.QAccessibleSelectionInterface_SelectedItems(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAccessibleInterface, _arr.len) catch @panic("QAccessibleSelectionInterface.selectedItems: Memory allocation failed");
        const _data_val: [*]QtC.QAccessibleInterface = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `selectedItem` instead
    ///
    pub const SelectedItem = selectedItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html#selectedItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleSelectionInterface `
    ///
    /// ` selectionIndex: i32 `
    ///
    pub fn selectedItem(self: QAccessibleSelectionInterface, selectionIndex: i32) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleSelectionInterface_SelectedItem(@ptrCast(self.ptr), @bitCast(selectionIndex)) };
    }

    /// ### DEPRECATED: Use `isSelected` instead
    ///
    pub const IsSelected = isSelected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html#isSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleSelectionInterface `
    ///
    /// ` childItem: QAccessibleInterface `
    ///
    pub fn isSelected(self: QAccessibleSelectionInterface, childItem: anytype) bool {
        comptime _ = @TypeOf(childItem)._is_QAccessibleInterface;
        return qtc.QAccessibleSelectionInterface_IsSelected(@ptrCast(self.ptr), @ptrCast(childItem.ptr));
    }

    /// ### DEPRECATED: Use `select` instead
    ///
    pub const Select = select;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html#select)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleSelectionInterface `
    ///
    /// ` childItem: QAccessibleInterface `
    ///
    pub fn select(self: QAccessibleSelectionInterface, childItem: anytype) bool {
        comptime _ = @TypeOf(childItem)._is_QAccessibleInterface;
        return qtc.QAccessibleSelectionInterface_Select(@ptrCast(self.ptr), @ptrCast(childItem.ptr));
    }

    /// ### DEPRECATED: Use `unselect` instead
    ///
    pub const Unselect = unselect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html#unselect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleSelectionInterface `
    ///
    /// ` childItem: QAccessibleInterface `
    ///
    pub fn unselect(self: QAccessibleSelectionInterface, childItem: anytype) bool {
        comptime _ = @TypeOf(childItem)._is_QAccessibleInterface;
        return qtc.QAccessibleSelectionInterface_Unselect(@ptrCast(self.ptr), @ptrCast(childItem.ptr));
    }

    /// ### DEPRECATED: Use `selectAll` instead
    ///
    pub const SelectAll = selectAll;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html#selectAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleSelectionInterface `
    ///
    pub fn selectAll(self: QAccessibleSelectionInterface) bool {
        return qtc.QAccessibleSelectionInterface_SelectAll(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleSelectionInterface `
    ///
    pub fn clear(self: QAccessibleSelectionInterface) bool {
        return qtc.QAccessibleSelectionInterface_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleSelectionInterface `
    ///
    /// ` param1: QAccessibleSelectionInterface `
    ///
    pub fn operatorAssign(self: QAccessibleSelectionInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QAccessibleSelectionInterface;
        qtc.QAccessibleSelectionInterface_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleselectioninterface.html#dtor.QAccessibleSelectionInterface)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAccessibleSelectionInterface `
    ///
    pub fn delete(self: QAccessibleSelectionInterface) void {
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

    /// ### DEPRECATED: Use `attributeKeys` instead
    ///
    pub const AttributeKeys = attributeKeys;

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
    pub fn attributeKeys(self: QAccessibleAttributesInterface, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QAccessibleAttributesInterface_AttributeKeys(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("QAccessibleAttributesInterface.attributeKeys: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `attributeValue` instead
    ///
    pub const AttributeValue = attributeValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleattributesinterface.html#attributeValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleAttributesInterface `
    ///
    /// ` key: qaccessible_base_enums.Attribute `
    ///
    pub fn attributeValue(self: QAccessibleAttributesInterface, key: i32) QVariant {
        return .{ .ptr = qtc.QAccessibleAttributesInterface_AttributeValue(@ptrCast(self.ptr), @bitCast(key)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleattributesinterface.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleAttributesInterface `
    ///
    /// ` param1: QAccessibleAttributesInterface `
    ///
    pub fn operatorAssign(self: QAccessibleAttributesInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QAccessibleAttributesInterface;
        qtc.QAccessibleAttributesInterface_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleattributesinterface.html#dtor.QAccessibleAttributesInterface)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAccessibleAttributesInterface `
    ///
    pub fn delete(self: QAccessibleAttributesInterface) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QAccessibleEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` typ: qaccessible_base_enums.Event `
    ///
    pub fn new(obj: anytype, typ: i32) QAccessibleEvent {
        comptime _ = @TypeOf(obj)._is_QObject;
        return .{ .ptr = qtc.QAccessibleEvent_new(@ptrCast(obj.ptr), @bitCast(typ)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QAccessibleEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` iface: QAccessibleInterface `
    ///
    /// ` typ: qaccessible_base_enums.Event `
    ///
    pub fn new2(iface: anytype, typ: i32) QAccessibleEvent {
        comptime _ = @TypeOf(iface)._is_QAccessibleInterface;
        return .{ .ptr = qtc.QAccessibleEvent_new2(@ptrCast(iface.ptr), @bitCast(typ)) };
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QAccessibleEvent) i32 {
        return qtc.QAccessibleEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `object` instead
    ///
    pub const Object = object;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleEvent `
    ///
    pub fn object(self: QAccessibleEvent) QObject {
        return .{ .ptr = qtc.QAccessibleEvent_Object(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `uniqueId` instead
    ///
    pub const UniqueId = uniqueId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleEvent `
    ///
    pub fn uniqueId(self: QAccessibleEvent) u32 {
        return qtc.QAccessibleEvent_UniqueId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setChild` instead
    ///
    pub const SetChild = setChild;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#setChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleEvent `
    ///
    /// ` chld: i32 `
    ///
    pub fn setChild(self: QAccessibleEvent, chld: i32) void {
        qtc.QAccessibleEvent_SetChild(@ptrCast(self.ptr), @bitCast(chld));
    }

    /// ### DEPRECATED: Use `child` instead
    ///
    pub const Child = child;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleEvent `
    ///
    pub fn child(self: QAccessibleEvent) i32 {
        return qtc.QAccessibleEvent_Child(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accessibleInterface` instead
    ///
    pub const AccessibleInterface = accessibleInterface;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleEvent `
    ///
    pub fn accessibleInterface(self: QAccessibleEvent) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleEvent_AccessibleInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onAccessibleInterface` instead
    ///
    pub const OnAccessibleInterface = onAccessibleInterface;

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
    pub fn onAccessibleInterface(self: QAccessibleEvent, callback: *const fn () callconv(.c) QAccessibleInterface) void {
        qtc.QAccessibleEvent_OnAccessibleInterface(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superAccessibleInterface` instead
    ///
    pub const SuperAccessibleInterface = superAccessibleInterface;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#accessibleInterface)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleEvent `
    ///
    pub fn superAccessibleInterface(self: QAccessibleEvent) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleEvent_SuperAccessibleInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#dtor.QAccessibleEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAccessibleEvent `
    ///
    pub fn delete(self: QAccessibleEvent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QAccessibleStateChangeEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` _state: QAccessible__State `
    ///
    pub fn new(obj: anytype, _state: anytype) QAccessibleStateChangeEvent {
        comptime _ = @TypeOf(obj)._is_QObject;
        comptime _ = @TypeOf(_state)._is_QAccessible__State;
        return .{ .ptr = qtc.QAccessibleStateChangeEvent_new(@ptrCast(obj.ptr), @ptrCast(_state.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QAccessibleStateChangeEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` iface: QAccessibleInterface `
    ///
    /// ` _state: QAccessible__State `
    ///
    pub fn new2(iface: anytype, _state: anytype) QAccessibleStateChangeEvent {
        comptime _ = @TypeOf(iface)._is_QAccessibleInterface;
        comptime _ = @TypeOf(_state)._is_QAccessible__State;
        return .{ .ptr = qtc.QAccessibleStateChangeEvent_new2(@ptrCast(iface.ptr), @ptrCast(_state.ptr)) };
    }

    /// ### DEPRECATED: Use `changedStates` instead
    ///
    pub const ChangedStates = changedStates;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblestatechangeevent.html#changedStates)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleStateChangeEvent `
    ///
    pub fn changedStates(self: QAccessibleStateChangeEvent) QAccessible__State {
        return .{ .ptr = qtc.QAccessibleStateChangeEvent_ChangedStates(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QAccessibleStateChangeEvent) i32 {
        return qtc.QAccessibleEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `object` instead
    ///
    pub const Object = object;

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleStateChangeEvent `
    ///
    pub fn object(self: QAccessibleStateChangeEvent) QObject {
        return .{ .ptr = qtc.QAccessibleEvent_Object(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `uniqueId` instead
    ///
    pub const UniqueId = uniqueId;

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleStateChangeEvent `
    ///
    pub fn uniqueId(self: QAccessibleStateChangeEvent) u32 {
        return qtc.QAccessibleEvent_UniqueId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setChild` instead
    ///
    pub const SetChild = setChild;

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
    pub fn setChild(self: QAccessibleStateChangeEvent, chld: i32) void {
        qtc.QAccessibleEvent_SetChild(@ptrCast(self.ptr), @bitCast(chld));
    }

    /// ### DEPRECATED: Use `child` instead
    ///
    pub const Child = child;

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleStateChangeEvent `
    ///
    pub fn child(self: QAccessibleStateChangeEvent) i32 {
        return qtc.QAccessibleEvent_Child(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accessibleInterface` instead
    ///
    pub const AccessibleInterface = accessibleInterface;

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
    pub fn accessibleInterface(self: QAccessibleStateChangeEvent) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleStateChangeEvent_AccessibleInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superAccessibleInterface` instead
    ///
    pub const SuperAccessibleInterface = superAccessibleInterface;

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
    pub fn superAccessibleInterface(self: QAccessibleStateChangeEvent) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleStateChangeEvent_SuperAccessibleInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onAccessibleInterface` instead
    ///
    pub const OnAccessibleInterface = onAccessibleInterface;

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
    pub fn onAccessibleInterface(self: QAccessibleStateChangeEvent, callback: *const fn () callconv(.c) QAccessibleInterface) void {
        qtc.QAccessibleStateChangeEvent_OnAccessibleInterface(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblestatechangeevent.html#dtor.QAccessibleStateChangeEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAccessibleStateChangeEvent `
    ///
    pub fn delete(self: QAccessibleStateChangeEvent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QAccessibleTextCursorEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` cursorPos: i32 `
    ///
    pub fn new(obj: anytype, cursorPos: i32) QAccessibleTextCursorEvent {
        comptime _ = @TypeOf(obj)._is_QObject;
        return .{ .ptr = qtc.QAccessibleTextCursorEvent_new(@ptrCast(obj.ptr), @bitCast(cursorPos)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QAccessibleTextCursorEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` iface: QAccessibleInterface `
    ///
    /// ` cursorPos: i32 `
    ///
    pub fn new2(iface: anytype, cursorPos: i32) QAccessibleTextCursorEvent {
        comptime _ = @TypeOf(iface)._is_QAccessibleInterface;
        return .{ .ptr = qtc.QAccessibleTextCursorEvent_new2(@ptrCast(iface.ptr), @bitCast(cursorPos)) };
    }

    /// ### DEPRECATED: Use `setCursorPosition` instead
    ///
    pub const SetCursorPosition = setCursorPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#setCursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextCursorEvent `
    ///
    /// ` position: i32 `
    ///
    pub fn setCursorPosition(self: QAccessibleTextCursorEvent, position: i32) void {
        qtc.QAccessibleTextCursorEvent_SetCursorPosition(@ptrCast(self.ptr), @bitCast(position));
    }

    /// ### DEPRECATED: Use `cursorPosition` instead
    ///
    pub const CursorPosition = cursorPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#cursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextCursorEvent `
    ///
    pub fn cursorPosition(self: QAccessibleTextCursorEvent) i32 {
        return qtc.QAccessibleTextCursorEvent_CursorPosition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QAccessibleTextCursorEvent) i32 {
        return qtc.QAccessibleEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `object` instead
    ///
    pub const Object = object;

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextCursorEvent `
    ///
    pub fn object(self: QAccessibleTextCursorEvent) QObject {
        return .{ .ptr = qtc.QAccessibleEvent_Object(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `uniqueId` instead
    ///
    pub const UniqueId = uniqueId;

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextCursorEvent `
    ///
    pub fn uniqueId(self: QAccessibleTextCursorEvent) u32 {
        return qtc.QAccessibleEvent_UniqueId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setChild` instead
    ///
    pub const SetChild = setChild;

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
    pub fn setChild(self: QAccessibleTextCursorEvent, chld: i32) void {
        qtc.QAccessibleEvent_SetChild(@ptrCast(self.ptr), @bitCast(chld));
    }

    /// ### DEPRECATED: Use `child` instead
    ///
    pub const Child = child;

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextCursorEvent `
    ///
    pub fn child(self: QAccessibleTextCursorEvent) i32 {
        return qtc.QAccessibleEvent_Child(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accessibleInterface` instead
    ///
    pub const AccessibleInterface = accessibleInterface;

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
    pub fn accessibleInterface(self: QAccessibleTextCursorEvent) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleTextCursorEvent_AccessibleInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superAccessibleInterface` instead
    ///
    pub const SuperAccessibleInterface = superAccessibleInterface;

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
    pub fn superAccessibleInterface(self: QAccessibleTextCursorEvent) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleTextCursorEvent_SuperAccessibleInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onAccessibleInterface` instead
    ///
    pub const OnAccessibleInterface = onAccessibleInterface;

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
    pub fn onAccessibleInterface(self: QAccessibleTextCursorEvent, callback: *const fn () callconv(.c) QAccessibleInterface) void {
        qtc.QAccessibleTextCursorEvent_OnAccessibleInterface(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#dtor.QAccessibleTextCursorEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAccessibleTextCursorEvent `
    ///
    pub fn delete(self: QAccessibleTextCursorEvent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QAccessibleTextSelectionEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn new(obj: anytype, start: i32, end: i32) QAccessibleTextSelectionEvent {
        comptime _ = @TypeOf(obj)._is_QObject;
        return .{ .ptr = qtc.QAccessibleTextSelectionEvent_new(@ptrCast(obj.ptr), @bitCast(start), @bitCast(end)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QAccessibleTextSelectionEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` iface: QAccessibleInterface `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn new2(iface: anytype, start: i32, end: i32) QAccessibleTextSelectionEvent {
        comptime _ = @TypeOf(iface)._is_QAccessibleInterface;
        return .{ .ptr = qtc.QAccessibleTextSelectionEvent_new2(@ptrCast(iface.ptr), @bitCast(start), @bitCast(end)) };
    }

    /// ### DEPRECATED: Use `setSelection` instead
    ///
    pub const SetSelection = setSelection;

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
    pub fn setSelection(self: QAccessibleTextSelectionEvent, start: i32, end: i32) void {
        qtc.QAccessibleTextSelectionEvent_SetSelection(@ptrCast(self.ptr), @bitCast(start), @bitCast(end));
    }

    /// ### DEPRECATED: Use `selectionStart` instead
    ///
    pub const SelectionStart = selectionStart;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextselectionevent.html#selectionStart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextSelectionEvent `
    ///
    pub fn selectionStart(self: QAccessibleTextSelectionEvent) i32 {
        return qtc.QAccessibleTextSelectionEvent_SelectionStart(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `selectionEnd` instead
    ///
    pub const SelectionEnd = selectionEnd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextselectionevent.html#selectionEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextSelectionEvent `
    ///
    pub fn selectionEnd(self: QAccessibleTextSelectionEvent) i32 {
        return qtc.QAccessibleTextSelectionEvent_SelectionEnd(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCursorPosition` instead
    ///
    pub const SetCursorPosition = setCursorPosition;

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
    pub fn setCursorPosition(self: QAccessibleTextSelectionEvent, position: i32) void {
        qtc.QAccessibleTextCursorEvent_SetCursorPosition(@ptrCast(self.ptr), @bitCast(position));
    }

    /// ### DEPRECATED: Use `cursorPosition` instead
    ///
    pub const CursorPosition = cursorPosition;

    /// Inherited from QAccessibleTextCursorEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#cursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextSelectionEvent `
    ///
    pub fn cursorPosition(self: QAccessibleTextSelectionEvent) i32 {
        return qtc.QAccessibleTextCursorEvent_CursorPosition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QAccessibleTextSelectionEvent) i32 {
        return qtc.QAccessibleEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `object` instead
    ///
    pub const Object = object;

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextSelectionEvent `
    ///
    pub fn object(self: QAccessibleTextSelectionEvent) QObject {
        return .{ .ptr = qtc.QAccessibleEvent_Object(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `uniqueId` instead
    ///
    pub const UniqueId = uniqueId;

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextSelectionEvent `
    ///
    pub fn uniqueId(self: QAccessibleTextSelectionEvent) u32 {
        return qtc.QAccessibleEvent_UniqueId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setChild` instead
    ///
    pub const SetChild = setChild;

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
    pub fn setChild(self: QAccessibleTextSelectionEvent, chld: i32) void {
        qtc.QAccessibleEvent_SetChild(@ptrCast(self.ptr), @bitCast(chld));
    }

    /// ### DEPRECATED: Use `child` instead
    ///
    pub const Child = child;

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextSelectionEvent `
    ///
    pub fn child(self: QAccessibleTextSelectionEvent) i32 {
        return qtc.QAccessibleEvent_Child(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accessibleInterface` instead
    ///
    pub const AccessibleInterface = accessibleInterface;

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
    pub fn accessibleInterface(self: QAccessibleTextSelectionEvent) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleTextSelectionEvent_AccessibleInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superAccessibleInterface` instead
    ///
    pub const SuperAccessibleInterface = superAccessibleInterface;

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
    pub fn superAccessibleInterface(self: QAccessibleTextSelectionEvent) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleTextSelectionEvent_SuperAccessibleInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onAccessibleInterface` instead
    ///
    pub const OnAccessibleInterface = onAccessibleInterface;

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
    pub fn onAccessibleInterface(self: QAccessibleTextSelectionEvent, callback: *const fn () callconv(.c) QAccessibleInterface) void {
        qtc.QAccessibleTextSelectionEvent_OnAccessibleInterface(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextselectionevent.html#dtor.QAccessibleTextSelectionEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAccessibleTextSelectionEvent `
    ///
    pub fn delete(self: QAccessibleTextSelectionEvent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QAccessibleTextInsertEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` position: i32 `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn new(obj: anytype, position: i32, _text: []const u8) QAccessibleTextInsertEvent {
        comptime _ = @TypeOf(obj)._is_QObject;
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return .{ .ptr = qtc.QAccessibleTextInsertEvent_new(@ptrCast(obj.ptr), @bitCast(position), text_str) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QAccessibleTextInsertEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` iface: QAccessibleInterface `
    ///
    /// ` position: i32 `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn new2(iface: anytype, position: i32, _text: []const u8) QAccessibleTextInsertEvent {
        comptime _ = @TypeOf(iface)._is_QAccessibleInterface;
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return .{ .ptr = qtc.QAccessibleTextInsertEvent_new2(@ptrCast(iface.ptr), @bitCast(position), text_str) };
    }

    /// ### DEPRECATED: Use `textInserted` instead
    ///
    pub const TextInserted = textInserted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinsertevent.html#textInserted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextInsertEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn textInserted(self: QAccessibleTextInsertEvent, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleTextInsertEvent_TextInserted(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleTextInsertEvent.textInserted: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `changePosition` instead
    ///
    pub const ChangePosition = changePosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinsertevent.html#changePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextInsertEvent `
    ///
    pub fn changePosition(self: QAccessibleTextInsertEvent) i32 {
        return qtc.QAccessibleTextInsertEvent_ChangePosition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCursorPosition` instead
    ///
    pub const SetCursorPosition = setCursorPosition;

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
    pub fn setCursorPosition(self: QAccessibleTextInsertEvent, position: i32) void {
        qtc.QAccessibleTextCursorEvent_SetCursorPosition(@ptrCast(self.ptr), @bitCast(position));
    }

    /// ### DEPRECATED: Use `cursorPosition` instead
    ///
    pub const CursorPosition = cursorPosition;

    /// Inherited from QAccessibleTextCursorEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#cursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextInsertEvent `
    ///
    pub fn cursorPosition(self: QAccessibleTextInsertEvent) i32 {
        return qtc.QAccessibleTextCursorEvent_CursorPosition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QAccessibleTextInsertEvent) i32 {
        return qtc.QAccessibleEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `object` instead
    ///
    pub const Object = object;

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextInsertEvent `
    ///
    pub fn object(self: QAccessibleTextInsertEvent) QObject {
        return .{ .ptr = qtc.QAccessibleEvent_Object(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `uniqueId` instead
    ///
    pub const UniqueId = uniqueId;

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextInsertEvent `
    ///
    pub fn uniqueId(self: QAccessibleTextInsertEvent) u32 {
        return qtc.QAccessibleEvent_UniqueId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setChild` instead
    ///
    pub const SetChild = setChild;

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
    pub fn setChild(self: QAccessibleTextInsertEvent, chld: i32) void {
        qtc.QAccessibleEvent_SetChild(@ptrCast(self.ptr), @bitCast(chld));
    }

    /// ### DEPRECATED: Use `child` instead
    ///
    pub const Child = child;

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextInsertEvent `
    ///
    pub fn child(self: QAccessibleTextInsertEvent) i32 {
        return qtc.QAccessibleEvent_Child(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accessibleInterface` instead
    ///
    pub const AccessibleInterface = accessibleInterface;

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
    pub fn accessibleInterface(self: QAccessibleTextInsertEvent) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleTextInsertEvent_AccessibleInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superAccessibleInterface` instead
    ///
    pub const SuperAccessibleInterface = superAccessibleInterface;

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
    pub fn superAccessibleInterface(self: QAccessibleTextInsertEvent) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleTextInsertEvent_SuperAccessibleInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onAccessibleInterface` instead
    ///
    pub const OnAccessibleInterface = onAccessibleInterface;

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
    pub fn onAccessibleInterface(self: QAccessibleTextInsertEvent, callback: *const fn () callconv(.c) QAccessibleInterface) void {
        qtc.QAccessibleTextInsertEvent_OnAccessibleInterface(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextinsertevent.html#dtor.QAccessibleTextInsertEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAccessibleTextInsertEvent `
    ///
    pub fn delete(self: QAccessibleTextInsertEvent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QAccessibleTextRemoveEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` position: i32 `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn new(obj: anytype, position: i32, _text: []const u8) QAccessibleTextRemoveEvent {
        comptime _ = @TypeOf(obj)._is_QObject;
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return .{ .ptr = qtc.QAccessibleTextRemoveEvent_new(@ptrCast(obj.ptr), @bitCast(position), text_str) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QAccessibleTextRemoveEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` iface: QAccessibleInterface `
    ///
    /// ` position: i32 `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn new2(iface: anytype, position: i32, _text: []const u8) QAccessibleTextRemoveEvent {
        comptime _ = @TypeOf(iface)._is_QAccessibleInterface;
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return .{ .ptr = qtc.QAccessibleTextRemoveEvent_new2(@ptrCast(iface.ptr), @bitCast(position), text_str) };
    }

    /// ### DEPRECATED: Use `textRemoved` instead
    ///
    pub const TextRemoved = textRemoved;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextremoveevent.html#textRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextRemoveEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn textRemoved(self: QAccessibleTextRemoveEvent, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleTextRemoveEvent_TextRemoved(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleTextRemoveEvent.textRemoved: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `changePosition` instead
    ///
    pub const ChangePosition = changePosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextremoveevent.html#changePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextRemoveEvent `
    ///
    pub fn changePosition(self: QAccessibleTextRemoveEvent) i32 {
        return qtc.QAccessibleTextRemoveEvent_ChangePosition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCursorPosition` instead
    ///
    pub const SetCursorPosition = setCursorPosition;

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
    pub fn setCursorPosition(self: QAccessibleTextRemoveEvent, position: i32) void {
        qtc.QAccessibleTextCursorEvent_SetCursorPosition(@ptrCast(self.ptr), @bitCast(position));
    }

    /// ### DEPRECATED: Use `cursorPosition` instead
    ///
    pub const CursorPosition = cursorPosition;

    /// Inherited from QAccessibleTextCursorEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#cursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextRemoveEvent `
    ///
    pub fn cursorPosition(self: QAccessibleTextRemoveEvent) i32 {
        return qtc.QAccessibleTextCursorEvent_CursorPosition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QAccessibleTextRemoveEvent) i32 {
        return qtc.QAccessibleEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `object` instead
    ///
    pub const Object = object;

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextRemoveEvent `
    ///
    pub fn object(self: QAccessibleTextRemoveEvent) QObject {
        return .{ .ptr = qtc.QAccessibleEvent_Object(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `uniqueId` instead
    ///
    pub const UniqueId = uniqueId;

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextRemoveEvent `
    ///
    pub fn uniqueId(self: QAccessibleTextRemoveEvent) u32 {
        return qtc.QAccessibleEvent_UniqueId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setChild` instead
    ///
    pub const SetChild = setChild;

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
    pub fn setChild(self: QAccessibleTextRemoveEvent, chld: i32) void {
        qtc.QAccessibleEvent_SetChild(@ptrCast(self.ptr), @bitCast(chld));
    }

    /// ### DEPRECATED: Use `child` instead
    ///
    pub const Child = child;

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextRemoveEvent `
    ///
    pub fn child(self: QAccessibleTextRemoveEvent) i32 {
        return qtc.QAccessibleEvent_Child(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accessibleInterface` instead
    ///
    pub const AccessibleInterface = accessibleInterface;

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
    pub fn accessibleInterface(self: QAccessibleTextRemoveEvent) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleTextRemoveEvent_AccessibleInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superAccessibleInterface` instead
    ///
    pub const SuperAccessibleInterface = superAccessibleInterface;

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
    pub fn superAccessibleInterface(self: QAccessibleTextRemoveEvent) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleTextRemoveEvent_SuperAccessibleInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onAccessibleInterface` instead
    ///
    pub const OnAccessibleInterface = onAccessibleInterface;

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
    pub fn onAccessibleInterface(self: QAccessibleTextRemoveEvent, callback: *const fn () callconv(.c) QAccessibleInterface) void {
        qtc.QAccessibleTextRemoveEvent_OnAccessibleInterface(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextremoveevent.html#dtor.QAccessibleTextRemoveEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAccessibleTextRemoveEvent `
    ///
    pub fn delete(self: QAccessibleTextRemoveEvent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QAccessibleTextUpdateEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` position: i32 `
    ///
    /// ` oldText: []const u8 `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn new(obj: anytype, position: i32, oldText: []const u8, _text: []const u8) QAccessibleTextUpdateEvent {
        comptime _ = @TypeOf(obj)._is_QObject;
        const oldText_str = qtc.libqt_string{
            .len = oldText.len,
            .data = oldText.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return .{ .ptr = qtc.QAccessibleTextUpdateEvent_new(@ptrCast(obj.ptr), @bitCast(position), oldText_str, text_str) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QAccessibleTextUpdateEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` iface: QAccessibleInterface `
    ///
    /// ` position: i32 `
    ///
    /// ` oldText: []const u8 `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn new2(iface: anytype, position: i32, oldText: []const u8, _text: []const u8) QAccessibleTextUpdateEvent {
        comptime _ = @TypeOf(iface)._is_QAccessibleInterface;
        const oldText_str = qtc.libqt_string{
            .len = oldText.len,
            .data = oldText.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return .{ .ptr = qtc.QAccessibleTextUpdateEvent_new2(@ptrCast(iface.ptr), @bitCast(position), oldText_str, text_str) };
    }

    /// ### DEPRECATED: Use `textRemoved` instead
    ///
    pub const TextRemoved = textRemoved;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextupdateevent.html#textRemoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextUpdateEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn textRemoved(self: QAccessibleTextUpdateEvent, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleTextUpdateEvent_TextRemoved(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleTextUpdateEvent.textRemoved: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `textInserted` instead
    ///
    pub const TextInserted = textInserted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextupdateevent.html#textInserted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextUpdateEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn textInserted(self: QAccessibleTextUpdateEvent, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleTextUpdateEvent_TextInserted(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleTextUpdateEvent.textInserted: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `changePosition` instead
    ///
    pub const ChangePosition = changePosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextupdateevent.html#changePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextUpdateEvent `
    ///
    pub fn changePosition(self: QAccessibleTextUpdateEvent) i32 {
        return qtc.QAccessibleTextUpdateEvent_ChangePosition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCursorPosition` instead
    ///
    pub const SetCursorPosition = setCursorPosition;

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
    pub fn setCursorPosition(self: QAccessibleTextUpdateEvent, position: i32) void {
        qtc.QAccessibleTextCursorEvent_SetCursorPosition(@ptrCast(self.ptr), @bitCast(position));
    }

    /// ### DEPRECATED: Use `cursorPosition` instead
    ///
    pub const CursorPosition = cursorPosition;

    /// Inherited from QAccessibleTextCursorEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextcursorevent.html#cursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextUpdateEvent `
    ///
    pub fn cursorPosition(self: QAccessibleTextUpdateEvent) i32 {
        return qtc.QAccessibleTextCursorEvent_CursorPosition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QAccessibleTextUpdateEvent) i32 {
        return qtc.QAccessibleEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `object` instead
    ///
    pub const Object = object;

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextUpdateEvent `
    ///
    pub fn object(self: QAccessibleTextUpdateEvent) QObject {
        return .{ .ptr = qtc.QAccessibleEvent_Object(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `uniqueId` instead
    ///
    pub const UniqueId = uniqueId;

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextUpdateEvent `
    ///
    pub fn uniqueId(self: QAccessibleTextUpdateEvent) u32 {
        return qtc.QAccessibleEvent_UniqueId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setChild` instead
    ///
    pub const SetChild = setChild;

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
    pub fn setChild(self: QAccessibleTextUpdateEvent, chld: i32) void {
        qtc.QAccessibleEvent_SetChild(@ptrCast(self.ptr), @bitCast(chld));
    }

    /// ### DEPRECATED: Use `child` instead
    ///
    pub const Child = child;

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTextUpdateEvent `
    ///
    pub fn child(self: QAccessibleTextUpdateEvent) i32 {
        return qtc.QAccessibleEvent_Child(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accessibleInterface` instead
    ///
    pub const AccessibleInterface = accessibleInterface;

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
    pub fn accessibleInterface(self: QAccessibleTextUpdateEvent) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleTextUpdateEvent_AccessibleInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superAccessibleInterface` instead
    ///
    pub const SuperAccessibleInterface = superAccessibleInterface;

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
    pub fn superAccessibleInterface(self: QAccessibleTextUpdateEvent) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleTextUpdateEvent_SuperAccessibleInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onAccessibleInterface` instead
    ///
    pub const OnAccessibleInterface = onAccessibleInterface;

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
    pub fn onAccessibleInterface(self: QAccessibleTextUpdateEvent, callback: *const fn () callconv(.c) QAccessibleInterface) void {
        qtc.QAccessibleTextUpdateEvent_OnAccessibleInterface(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletextupdateevent.html#dtor.QAccessibleTextUpdateEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAccessibleTextUpdateEvent `
    ///
    pub fn delete(self: QAccessibleTextUpdateEvent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QAccessibleValueChangeEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` val: QVariant `
    ///
    pub fn new(obj: anytype, val: anytype) QAccessibleValueChangeEvent {
        comptime _ = @TypeOf(obj)._is_QObject;
        comptime _ = @TypeOf(val)._is_QVariant;
        return .{ .ptr = qtc.QAccessibleValueChangeEvent_new(@ptrCast(obj.ptr), @ptrCast(val.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QAccessibleValueChangeEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` iface: QAccessibleInterface `
    ///
    /// ` val: QVariant `
    ///
    pub fn new2(iface: anytype, val: anytype) QAccessibleValueChangeEvent {
        comptime _ = @TypeOf(iface)._is_QAccessibleInterface;
        comptime _ = @TypeOf(val)._is_QVariant;
        return .{ .ptr = qtc.QAccessibleValueChangeEvent_new2(@ptrCast(iface.ptr), @ptrCast(val.ptr)) };
    }

    /// ### DEPRECATED: Use `setValue` instead
    ///
    pub const SetValue = setValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevaluechangeevent.html#setValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleValueChangeEvent `
    ///
    /// ` val: QVariant `
    ///
    pub fn setValue(self: QAccessibleValueChangeEvent, val: anytype) void {
        comptime _ = @TypeOf(val)._is_QVariant;
        qtc.QAccessibleValueChangeEvent_SetValue(@ptrCast(self.ptr), @ptrCast(val.ptr));
    }

    /// ### DEPRECATED: Use `value` instead
    ///
    pub const Value = value;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevaluechangeevent.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleValueChangeEvent `
    ///
    pub fn value(self: QAccessibleValueChangeEvent) QVariant {
        return .{ .ptr = qtc.QAccessibleValueChangeEvent_Value(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QAccessibleValueChangeEvent) i32 {
        return qtc.QAccessibleEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `object` instead
    ///
    pub const Object = object;

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleValueChangeEvent `
    ///
    pub fn object(self: QAccessibleValueChangeEvent) QObject {
        return .{ .ptr = qtc.QAccessibleEvent_Object(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `uniqueId` instead
    ///
    pub const UniqueId = uniqueId;

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleValueChangeEvent `
    ///
    pub fn uniqueId(self: QAccessibleValueChangeEvent) u32 {
        return qtc.QAccessibleEvent_UniqueId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setChild` instead
    ///
    pub const SetChild = setChild;

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
    pub fn setChild(self: QAccessibleValueChangeEvent, chld: i32) void {
        qtc.QAccessibleEvent_SetChild(@ptrCast(self.ptr), @bitCast(chld));
    }

    /// ### DEPRECATED: Use `child` instead
    ///
    pub const Child = child;

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleValueChangeEvent `
    ///
    pub fn child(self: QAccessibleValueChangeEvent) i32 {
        return qtc.QAccessibleEvent_Child(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accessibleInterface` instead
    ///
    pub const AccessibleInterface = accessibleInterface;

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
    pub fn accessibleInterface(self: QAccessibleValueChangeEvent) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleValueChangeEvent_AccessibleInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superAccessibleInterface` instead
    ///
    pub const SuperAccessibleInterface = superAccessibleInterface;

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
    pub fn superAccessibleInterface(self: QAccessibleValueChangeEvent) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleValueChangeEvent_SuperAccessibleInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onAccessibleInterface` instead
    ///
    pub const OnAccessibleInterface = onAccessibleInterface;

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
    pub fn onAccessibleInterface(self: QAccessibleValueChangeEvent, callback: *const fn () callconv(.c) QAccessibleInterface) void {
        qtc.QAccessibleValueChangeEvent_OnAccessibleInterface(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblevaluechangeevent.html#dtor.QAccessibleValueChangeEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAccessibleValueChangeEvent `
    ///
    pub fn delete(self: QAccessibleValueChangeEvent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QAccessibleTableModelChangeEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` obj: QObject `
    ///
    /// ` changeType: qaccessible_enums.ModelChangeType `
    ///
    pub fn new(obj: anytype, changeType: i32) QAccessibleTableModelChangeEvent {
        comptime _ = @TypeOf(obj)._is_QObject;
        return .{ .ptr = qtc.QAccessibleTableModelChangeEvent_new(@ptrCast(obj.ptr), @bitCast(changeType)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QAccessibleTableModelChangeEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` iface: QAccessibleInterface `
    ///
    /// ` changeType: qaccessible_enums.ModelChangeType `
    ///
    pub fn new2(iface: anytype, changeType: i32) QAccessibleTableModelChangeEvent {
        comptime _ = @TypeOf(iface)._is_QAccessibleInterface;
        return .{ .ptr = qtc.QAccessibleTableModelChangeEvent_new2(@ptrCast(iface.ptr), @bitCast(changeType)) };
    }

    /// ### DEPRECATED: Use `setModelChangeType` instead
    ///
    pub const SetModelChangeType = setModelChangeType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#setModelChangeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableModelChangeEvent `
    ///
    /// ` changeType: qaccessible_enums.ModelChangeType `
    ///
    pub fn setModelChangeType(self: QAccessibleTableModelChangeEvent, changeType: i32) void {
        qtc.QAccessibleTableModelChangeEvent_SetModelChangeType(@ptrCast(self.ptr), @bitCast(changeType));
    }

    /// ### DEPRECATED: Use `modelChangeType` instead
    ///
    pub const ModelChangeType = modelChangeType;

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
    pub fn modelChangeType(self: QAccessibleTableModelChangeEvent) i32 {
        return qtc.QAccessibleTableModelChangeEvent_ModelChangeType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFirstRow` instead
    ///
    pub const SetFirstRow = setFirstRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#setFirstRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableModelChangeEvent `
    ///
    /// ` row: i32 `
    ///
    pub fn setFirstRow(self: QAccessibleTableModelChangeEvent, row: i32) void {
        qtc.QAccessibleTableModelChangeEvent_SetFirstRow(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### DEPRECATED: Use `setFirstColumn` instead
    ///
    pub const SetFirstColumn = setFirstColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#setFirstColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableModelChangeEvent `
    ///
    /// ` col: i32 `
    ///
    pub fn setFirstColumn(self: QAccessibleTableModelChangeEvent, col: i32) void {
        qtc.QAccessibleTableModelChangeEvent_SetFirstColumn(@ptrCast(self.ptr), @bitCast(col));
    }

    /// ### DEPRECATED: Use `setLastRow` instead
    ///
    pub const SetLastRow = setLastRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#setLastRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableModelChangeEvent `
    ///
    /// ` row: i32 `
    ///
    pub fn setLastRow(self: QAccessibleTableModelChangeEvent, row: i32) void {
        qtc.QAccessibleTableModelChangeEvent_SetLastRow(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### DEPRECATED: Use `setLastColumn` instead
    ///
    pub const SetLastColumn = setLastColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#setLastColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableModelChangeEvent `
    ///
    /// ` col: i32 `
    ///
    pub fn setLastColumn(self: QAccessibleTableModelChangeEvent, col: i32) void {
        qtc.QAccessibleTableModelChangeEvent_SetLastColumn(@ptrCast(self.ptr), @bitCast(col));
    }

    /// ### DEPRECATED: Use `firstRow` instead
    ///
    pub const FirstRow = firstRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#firstRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableModelChangeEvent `
    ///
    pub fn firstRow(self: QAccessibleTableModelChangeEvent) i32 {
        return qtc.QAccessibleTableModelChangeEvent_FirstRow(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `firstColumn` instead
    ///
    pub const FirstColumn = firstColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#firstColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableModelChangeEvent `
    ///
    pub fn firstColumn(self: QAccessibleTableModelChangeEvent) i32 {
        return qtc.QAccessibleTableModelChangeEvent_FirstColumn(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lastRow` instead
    ///
    pub const LastRow = lastRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#lastRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableModelChangeEvent `
    ///
    pub fn lastRow(self: QAccessibleTableModelChangeEvent) i32 {
        return qtc.QAccessibleTableModelChangeEvent_LastRow(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lastColumn` instead
    ///
    pub const LastColumn = lastColumn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#lastColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableModelChangeEvent `
    ///
    pub fn lastColumn(self: QAccessibleTableModelChangeEvent) i32 {
        return qtc.QAccessibleTableModelChangeEvent_LastColumn(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QAccessibleTableModelChangeEvent) i32 {
        return qtc.QAccessibleEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `object` instead
    ///
    pub const Object = object;

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableModelChangeEvent `
    ///
    pub fn object(self: QAccessibleTableModelChangeEvent) QObject {
        return .{ .ptr = qtc.QAccessibleEvent_Object(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `uniqueId` instead
    ///
    pub const UniqueId = uniqueId;

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableModelChangeEvent `
    ///
    pub fn uniqueId(self: QAccessibleTableModelChangeEvent) u32 {
        return qtc.QAccessibleEvent_UniqueId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setChild` instead
    ///
    pub const SetChild = setChild;

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
    pub fn setChild(self: QAccessibleTableModelChangeEvent, chld: i32) void {
        qtc.QAccessibleEvent_SetChild(@ptrCast(self.ptr), @bitCast(chld));
    }

    /// ### DEPRECATED: Use `child` instead
    ///
    pub const Child = child;

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleTableModelChangeEvent `
    ///
    pub fn child(self: QAccessibleTableModelChangeEvent) i32 {
        return qtc.QAccessibleEvent_Child(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accessibleInterface` instead
    ///
    pub const AccessibleInterface = accessibleInterface;

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
    pub fn accessibleInterface(self: QAccessibleTableModelChangeEvent) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleTableModelChangeEvent_AccessibleInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superAccessibleInterface` instead
    ///
    pub const SuperAccessibleInterface = superAccessibleInterface;

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
    pub fn superAccessibleInterface(self: QAccessibleTableModelChangeEvent) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleTableModelChangeEvent_SuperAccessibleInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onAccessibleInterface` instead
    ///
    pub const OnAccessibleInterface = onAccessibleInterface;

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
    pub fn onAccessibleInterface(self: QAccessibleTableModelChangeEvent, callback: *const fn () callconv(.c) QAccessibleInterface) void {
        qtc.QAccessibleTableModelChangeEvent_OnAccessibleInterface(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibletablemodelchangeevent.html#dtor.QAccessibleTableModelChangeEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAccessibleTableModelChangeEvent `
    ///
    pub fn delete(self: QAccessibleTableModelChangeEvent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QAccessibleAnnouncementEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _object: QObject `
    ///
    /// ` _message: []const u8 `
    ///
    pub fn new(_object: anytype, _message: []const u8) QAccessibleAnnouncementEvent {
        comptime _ = @TypeOf(_object)._is_QObject;
        const message_str = qtc.libqt_string{
            .len = _message.len,
            .data = _message.ptr,
        };
        return .{ .ptr = qtc.QAccessibleAnnouncementEvent_new(@ptrCast(_object.ptr), message_str) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QAccessibleAnnouncementEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` iface: QAccessibleInterface `
    ///
    /// ` _message: []const u8 `
    ///
    pub fn new2(iface: anytype, _message: []const u8) QAccessibleAnnouncementEvent {
        comptime _ = @TypeOf(iface)._is_QAccessibleInterface;
        const message_str = qtc.libqt_string{
            .len = _message.len,
            .data = _message.ptr,
        };
        return .{ .ptr = qtc.QAccessibleAnnouncementEvent_new2(@ptrCast(iface.ptr), message_str) };
    }

    /// ### DEPRECATED: Use `message` instead
    ///
    pub const Message = message;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleannouncementevent.html#message)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleAnnouncementEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn message(self: QAccessibleAnnouncementEvent, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleAnnouncementEvent_Message(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleAnnouncementEvent.message: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `politeness` instead
    ///
    pub const Politeness = politeness;

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
    pub fn politeness(self: QAccessibleAnnouncementEvent) i32 {
        return qtc.QAccessibleAnnouncementEvent_Politeness(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPoliteness` instead
    ///
    pub const SetPoliteness = setPoliteness;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleannouncementevent.html#setPoliteness)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleAnnouncementEvent `
    ///
    /// ` _politeness: qaccessible_base_enums.AnnouncementPoliteness `
    ///
    pub fn setPoliteness(self: QAccessibleAnnouncementEvent, _politeness: i32) void {
        qtc.QAccessibleAnnouncementEvent_SetPoliteness(@ptrCast(self.ptr), @bitCast(_politeness));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QAccessibleAnnouncementEvent) i32 {
        return qtc.QAccessibleEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `object` instead
    ///
    pub const Object = object;

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#object)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleAnnouncementEvent `
    ///
    pub fn object(self: QAccessibleAnnouncementEvent) QObject {
        return .{ .ptr = qtc.QAccessibleEvent_Object(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `uniqueId` instead
    ///
    pub const UniqueId = uniqueId;

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#uniqueId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleAnnouncementEvent `
    ///
    pub fn uniqueId(self: QAccessibleAnnouncementEvent) u32 {
        return qtc.QAccessibleEvent_UniqueId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setChild` instead
    ///
    pub const SetChild = setChild;

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
    pub fn setChild(self: QAccessibleAnnouncementEvent, chld: i32) void {
        qtc.QAccessibleEvent_SetChild(@ptrCast(self.ptr), @bitCast(chld));
    }

    /// ### DEPRECATED: Use `child` instead
    ///
    pub const Child = child;

    /// Inherited from QAccessibleEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleevent.html#child)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleAnnouncementEvent `
    ///
    pub fn child(self: QAccessibleAnnouncementEvent) i32 {
        return qtc.QAccessibleEvent_Child(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accessibleInterface` instead
    ///
    pub const AccessibleInterface = accessibleInterface;

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
    pub fn accessibleInterface(self: QAccessibleAnnouncementEvent) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleAnnouncementEvent_AccessibleInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superAccessibleInterface` instead
    ///
    pub const SuperAccessibleInterface = superAccessibleInterface;

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
    pub fn superAccessibleInterface(self: QAccessibleAnnouncementEvent) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleAnnouncementEvent_SuperAccessibleInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onAccessibleInterface` instead
    ///
    pub const OnAccessibleInterface = onAccessibleInterface;

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
    pub fn onAccessibleInterface(self: QAccessibleAnnouncementEvent, callback: *const fn () callconv(.c) QAccessibleInterface) void {
        qtc.QAccessibleAnnouncementEvent_OnAccessibleInterface(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleannouncementevent.html#dtor.QAccessibleAnnouncementEvent)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAccessibleAnnouncementEvent `
    ///
    pub fn delete(self: QAccessibleAnnouncementEvent) void {
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
