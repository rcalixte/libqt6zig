const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAccessibleActionInterface = @import("libqt6").QAccessibleActionInterface;
const QAccessibleAttributesInterface = @import("libqt6").QAccessibleAttributesInterface;
const QAccessibleEditableTextInterface = @import("libqt6").QAccessibleEditableTextInterface;
const QAccessibleHyperlinkInterface = @import("libqt6").QAccessibleHyperlinkInterface;
const QAccessibleImageInterface = @import("libqt6").QAccessibleImageInterface;
const QAccessibleInterface = @import("libqt6").QAccessibleInterface;
const QAccessibleSelectionInterface = @import("libqt6").QAccessibleSelectionInterface;
const QAccessibleTableCellInterface = @import("libqt6").QAccessibleTableCellInterface;
const QAccessibleTableInterface = @import("libqt6").QAccessibleTableInterface;
const QAccessibleTextInterface = @import("libqt6").QAccessibleTextInterface;
const QAccessibleValueInterface = @import("libqt6").QAccessibleValueInterface;
const QAccessible__State = @import("libqt6").QAccessible__State;
const QColor = @import("libqt6").QColor;
const QObject = @import("libqt6").QObject;
const QRect = @import("libqt6").QRect;
const QWindow = @import("libqt6").QWindow;
const qaccessible_base_enums = @import("libqaccessible_base.zig").enums;
const std = @import("std");
const Struct_QAccessibleInterface_i32 = extern struct { first: QAccessibleInterface, second: i32 };

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html)
pub const QAccessibleObject = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAccessibleObject,

    pub const _is_QAccessibleObject = {};
    pub const _is_QAccessibleInterface = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QAccessibleObject object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _object: QObject `
    ///
    pub fn new(_object: anytype) QAccessibleObject {
        comptime _ = @TypeOf(_object)._is_QObject;
        return .{ .ptr = qtc.QAccessibleObject_new(@ptrCast(_object.ptr)) };
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    pub fn isValid(self: QAccessibleObject) bool {
        return qtc.QAccessibleObject_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsValid` instead
    ///
    pub const OnIsValid = onIsValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#isValid)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleObject `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsValid(self: QAccessibleObject, callback: *const fn () callconv(.c) bool) void {
        qtc.QAccessibleObject_OnIsValid(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsValid` instead
    ///
    pub const SuperIsValid = superIsValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#isValid)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    pub fn superIsValid(self: QAccessibleObject) bool {
        return qtc.QAccessibleObject_SuperIsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `object` instead
    ///
    pub const Object = object;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    pub fn object(self: QAccessibleObject) QObject {
        return .{ .ptr = qtc.QAccessibleObject_Object(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onObject` instead
    ///
    pub const OnObject = onObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleObject `
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onObject(self: QAccessibleObject, callback: *const fn () callconv(.c) QObject) void {
        qtc.QAccessibleObject_OnObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superObject` instead
    ///
    pub const SuperObject = superObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    pub fn superObject(self: QAccessibleObject) QObject {
        return .{ .ptr = qtc.QAccessibleObject_SuperObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    pub fn rect(self: QAccessibleObject) QRect {
        return .{ .ptr = qtc.QAccessibleObject_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onRect` instead
    ///
    pub const OnRect = onRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#rect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleObject `
    ///
    /// ` callback: *const fn () callconv(.c) QRect `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onRect(self: QAccessibleObject, callback: *const fn () callconv(.c) QRect) void {
        qtc.QAccessibleObject_OnRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRect` instead
    ///
    pub const SuperRect = superRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#rect)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    pub fn superRect(self: QAccessibleObject) QRect {
        return .{ .ptr = qtc.QAccessibleObject_SuperRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setText` instead
    ///
    pub const SetText = setText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    /// ` t: qaccessible_base_enums.Text `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn setText(self: QAccessibleObject, t: i32, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QAccessibleObject_SetText(@ptrCast(self.ptr), @bitCast(t), text_str);
    }

    /// ### DEPRECATED: Use `onSetText` instead
    ///
    pub const OnSetText = onSetText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#setText)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleObject `
    ///
    /// ` callback: *const fn (self: QAccessibleObject, t: qaccessible_base_enums.Text, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetText(self: QAccessibleObject, callback: *const fn (QAccessibleObject, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QAccessibleObject_OnSetText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetText` instead
    ///
    pub const SuperSetText = superSetText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#setText)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    /// ` t: qaccessible_base_enums.Text `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn superSetText(self: QAccessibleObject, t: i32, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QAccessibleObject_SuperSetText(@ptrCast(self.ptr), @bitCast(t), text_str);
    }

    /// ### DEPRECATED: Use `childAt` instead
    ///
    pub const ChildAt = childAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn childAt(self: QAccessibleObject, x: i32, y: i32) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleObject_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// ### DEPRECATED: Use `onChildAt` instead
    ///
    pub const OnChildAt = onChildAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#childAt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleObject `
    ///
    /// ` callback: *const fn (self: QAccessibleObject, x: i32, y: i32) callconv(.c) QAccessibleInterface `
    ///
    pub fn onChildAt(self: QAccessibleObject, callback: *const fn (QAccessibleObject, i32, i32) callconv(.c) QAccessibleInterface) void {
        qtc.QAccessibleObject_OnChildAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superChildAt` instead
    ///
    pub const SuperChildAt = superChildAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#childAt)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn superChildAt(self: QAccessibleObject, x: i32, y: i32) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleObject_SuperChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// ### DEPRECATED: Use `textInterface` instead
    ///
    pub const TextInterface = textInterface;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#textInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    pub fn textInterface(self: QAccessibleObject) QAccessibleTextInterface {
        return .{ .ptr = qtc.QAccessibleInterface_TextInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `editableTextInterface` instead
    ///
    pub const EditableTextInterface = editableTextInterface;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#editableTextInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    pub fn editableTextInterface(self: QAccessibleObject) QAccessibleEditableTextInterface {
        return .{ .ptr = qtc.QAccessibleInterface_EditableTextInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `valueInterface` instead
    ///
    pub const ValueInterface = valueInterface;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#valueInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    pub fn valueInterface(self: QAccessibleObject) QAccessibleValueInterface {
        return .{ .ptr = qtc.QAccessibleInterface_ValueInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `actionInterface` instead
    ///
    pub const ActionInterface = actionInterface;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#actionInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    pub fn actionInterface(self: QAccessibleObject) QAccessibleActionInterface {
        return .{ .ptr = qtc.QAccessibleInterface_ActionInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `imageInterface` instead
    ///
    pub const ImageInterface = imageInterface;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#imageInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    pub fn imageInterface(self: QAccessibleObject) QAccessibleImageInterface {
        return .{ .ptr = qtc.QAccessibleInterface_ImageInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `tableInterface` instead
    ///
    pub const TableInterface = tableInterface;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    pub fn tableInterface(self: QAccessibleObject) QAccessibleTableInterface {
        return .{ .ptr = qtc.QAccessibleInterface_TableInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `tableCellInterface` instead
    ///
    pub const TableCellInterface = tableCellInterface;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableCellInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    pub fn tableCellInterface(self: QAccessibleObject) QAccessibleTableCellInterface {
        return .{ .ptr = qtc.QAccessibleInterface_TableCellInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `hyperlinkInterface` instead
    ///
    pub const HyperlinkInterface = hyperlinkInterface;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#hyperlinkInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    pub fn hyperlinkInterface(self: QAccessibleObject) QAccessibleHyperlinkInterface {
        return .{ .ptr = qtc.QAccessibleInterface_HyperlinkInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `selectionInterface` instead
    ///
    pub const SelectionInterface = selectionInterface;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#selectionInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    pub fn selectionInterface(self: QAccessibleObject) QAccessibleSelectionInterface {
        return .{ .ptr = qtc.QAccessibleInterface_SelectionInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `attributesInterface` instead
    ///
    pub const AttributesInterface = attributesInterface;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#attributesInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    pub fn attributesInterface(self: QAccessibleObject) QAccessibleAttributesInterface {
        return .{ .ptr = qtc.QAccessibleInterface_AttributesInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `window` instead
    ///
    pub const Window = window;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#window)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    pub fn window(self: QAccessibleObject) QWindow {
        return .{ .ptr = qtc.QAccessibleObject_Window(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superWindow` instead
    ///
    pub const SuperWindow = superWindow;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#window)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    pub fn superWindow(self: QAccessibleObject) QWindow {
        return .{ .ptr = qtc.QAccessibleObject_SuperWindow(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onWindow` instead
    ///
    pub const OnWindow = onWindow;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#window)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleObject`
    ///
    /// ` callback: *const fn () callconv(.c) QWindow `
    ///
    pub fn onWindow(self: QAccessibleObject, callback: *const fn () callconv(.c) QWindow) void {
        qtc.QAccessibleObject_OnWindow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `relations` instead
    ///
    pub const Relations = relations;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#relations)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` match: flag of qaccessible_base_enums.RelationFlag `
    ///
    pub fn relations(self: QAccessibleObject, allocator: std.mem.Allocator, match: i32) []Struct_QAccessibleInterface_i32 {
        const _arr: qtc.libqt_list = qtc.QAccessibleObject_Relations(@ptrCast(self.ptr), @bitCast(match));
        const _data_val: [*]Struct_QAccessibleInterface_i32 = @ptrCast(@alignCast(_arr.data));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Struct_QAccessibleInterface_i32, _arr.len) catch @panic("QAccessibleObject.relations: Memory allocation failed");
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `superRelations` instead
    ///
    pub const SuperRelations = superRelations;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#relations)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` match: flag of qaccessible_base_enums.RelationFlag `
    ///
    pub fn superRelations(self: QAccessibleObject, allocator: std.mem.Allocator, match: i32) []Struct_QAccessibleInterface_i32 {
        const _arr: qtc.libqt_list = qtc.QAccessibleObject_SuperRelations(@ptrCast(self.ptr), @bitCast(match));
        const _data_val: [*]Struct_QAccessibleInterface_i32 = @ptrCast(@alignCast(_arr.data));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Struct_QAccessibleInterface_i32, _arr.len) catch @panic("QAccessibleObject.relations: Memory allocation failed");
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onRelations` instead
    ///
    pub const OnRelations = onRelations;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#relations)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleObject`
    ///
    /// ` callback: *const fn (self: QAccessibleObject, match: flag of qaccessible_base_enums.RelationFlag) callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []Struct_QAccessibleInterface_i32 `
    ///
    pub fn onRelations(self: QAccessibleObject, callback: *const fn (QAccessibleObject, i32) callconv(.c) qtc.libqt_list) void {
        qtc.QAccessibleObject_OnRelations(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusChild` instead
    ///
    pub const FocusChild = focusChild;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#focusChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    pub fn focusChild(self: QAccessibleObject) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleObject_FocusChild(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superFocusChild` instead
    ///
    pub const SuperFocusChild = superFocusChild;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#focusChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    pub fn superFocusChild(self: QAccessibleObject) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleObject_SuperFocusChild(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onFocusChild` instead
    ///
    pub const OnFocusChild = onFocusChild;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#focusChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleObject`
    ///
    /// ` callback: *const fn () callconv(.c) QAccessibleInterface `
    ///
    pub fn onFocusChild(self: QAccessibleObject, callback: *const fn () callconv(.c) QAccessibleInterface) void {
        qtc.QAccessibleObject_OnFocusChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#parent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    pub fn parent(self: QAccessibleObject) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleObject_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superParent` instead
    ///
    pub const SuperParent = superParent;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#parent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    pub fn superParent(self: QAccessibleObject) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleObject_SuperParent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onParent` instead
    ///
    pub const OnParent = onParent;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#parent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleObject`
    ///
    /// ` callback: *const fn () callconv(.c) QAccessibleInterface `
    ///
    pub fn onParent(self: QAccessibleObject, callback: *const fn () callconv(.c) QAccessibleInterface) void {
        qtc.QAccessibleObject_OnParent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `child` instead
    ///
    pub const Child = child;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#child)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    /// ` index: i32 `
    ///
    pub fn child(self: QAccessibleObject, index: i32) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleObject_Child(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `superChild` instead
    ///
    pub const SuperChild = superChild;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#child)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    /// ` index: i32 `
    ///
    pub fn superChild(self: QAccessibleObject, index: i32) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleObject_SuperChild(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `onChild` instead
    ///
    pub const OnChild = onChild;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#child)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleObject`
    ///
    /// ` callback: *const fn (self: QAccessibleObject, index: i32) callconv(.c) QAccessibleInterface `
    ///
    pub fn onChild(self: QAccessibleObject, callback: *const fn (QAccessibleObject, i32) callconv(.c) QAccessibleInterface) void {
        qtc.QAccessibleObject_OnChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childCount` instead
    ///
    pub const ChildCount = childCount;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#childCount)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    pub fn childCount(self: QAccessibleObject) i32 {
        return qtc.QAccessibleObject_ChildCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superChildCount` instead
    ///
    pub const SuperChildCount = superChildCount;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#childCount)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    pub fn superChildCount(self: QAccessibleObject) i32 {
        return qtc.QAccessibleObject_SuperChildCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onChildCount` instead
    ///
    pub const OnChildCount = onChildCount;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#childCount)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleObject`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onChildCount(self: QAccessibleObject, callback: *const fn () callconv(.c) i32) void {
        qtc.QAccessibleObject_OnChildCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `indexOfChild` instead
    ///
    pub const IndexOfChild = indexOfChild;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#indexOfChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    /// ` param1: QAccessibleInterface `
    ///
    pub fn indexOfChild(self: QAccessibleObject, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QAccessibleInterface;
        return qtc.QAccessibleObject_IndexOfChild(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superIndexOfChild` instead
    ///
    pub const SuperIndexOfChild = superIndexOfChild;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#indexOfChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    /// ` param1: QAccessibleInterface `
    ///
    pub fn superIndexOfChild(self: QAccessibleObject, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QAccessibleInterface;
        return qtc.QAccessibleObject_SuperIndexOfChild(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onIndexOfChild` instead
    ///
    pub const OnIndexOfChild = onIndexOfChild;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#indexOfChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleObject`
    ///
    /// ` callback: *const fn (self: QAccessibleObject, param1: QAccessibleInterface) callconv(.c) i32 `
    ///
    pub fn onIndexOfChild(self: QAccessibleObject, callback: *const fn (QAccessibleObject, QAccessibleInterface) callconv(.c) i32) void {
        qtc.QAccessibleObject_OnIndexOfChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#text)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` t: qaccessible_base_enums.Text `
    ///
    pub fn text(self: QAccessibleObject, allocator: std.mem.Allocator, t: i32) []const u8 {
        var _str = qtc.QAccessibleObject_Text(@ptrCast(self.ptr), @bitCast(t));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleObject.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `superText` instead
    ///
    pub const SuperText = superText;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#text)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` t: qaccessible_base_enums.Text `
    ///
    pub fn superText(self: QAccessibleObject, allocator: std.mem.Allocator, t: i32) []const u8 {
        var _str = qtc.QAccessibleObject_SuperText(@ptrCast(self.ptr), @bitCast(t));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleObject.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onText` instead
    ///
    pub const OnText = onText;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#text)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleObject`
    ///
    /// ` callback: *const fn (self: QAccessibleObject, t: qaccessible_base_enums.Text) callconv(.c) [*:0]const u8 `
    ///
    pub fn onText(self: QAccessibleObject, callback: *const fn (QAccessibleObject, i32) callconv(.c) [*:0]const u8) void {
        qtc.QAccessibleObject_OnText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `role` instead
    ///
    pub const Role = role;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#role)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    /// ## Returns:
    ///
    /// ` qaccessible_base_enums.Role `
    ///
    pub fn role(self: QAccessibleObject) i32 {
        return qtc.QAccessibleObject_Role(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superRole` instead
    ///
    pub const SuperRole = superRole;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#role)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    /// ## Returns:
    ///
    /// ` qaccessible_base_enums.Role `
    ///
    pub fn superRole(self: QAccessibleObject) i32 {
        return qtc.QAccessibleObject_SuperRole(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRole` instead
    ///
    pub const OnRole = onRole;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#role)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleObject`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onRole(self: QAccessibleObject, callback: *const fn () callconv(.c) i32) void {
        qtc.QAccessibleObject_OnRole(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#state)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    pub fn state(self: QAccessibleObject) QAccessible__State {
        return .{ .ptr = qtc.QAccessibleObject_State(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superState` instead
    ///
    pub const SuperState = superState;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#state)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    pub fn superState(self: QAccessibleObject) QAccessible__State {
        return .{ .ptr = qtc.QAccessibleObject_SuperState(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onState` instead
    ///
    pub const OnState = onState;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#state)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleObject`
    ///
    /// ` callback: *const fn () callconv(.c) QAccessible__State `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onState(self: QAccessibleObject, callback: *const fn () callconv(.c) QAccessible__State) void {
        qtc.QAccessibleObject_OnState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `foregroundColor` instead
    ///
    pub const ForegroundColor = foregroundColor;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#foregroundColor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    pub fn foregroundColor(self: QAccessibleObject) QColor {
        return .{ .ptr = qtc.QAccessibleObject_ForegroundColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superForegroundColor` instead
    ///
    pub const SuperForegroundColor = superForegroundColor;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#foregroundColor)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    pub fn superForegroundColor(self: QAccessibleObject) QColor {
        return .{ .ptr = qtc.QAccessibleObject_SuperForegroundColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onForegroundColor` instead
    ///
    pub const OnForegroundColor = onForegroundColor;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#foregroundColor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleObject`
    ///
    /// ` callback: *const fn () callconv(.c) QColor `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onForegroundColor(self: QAccessibleObject, callback: *const fn () callconv(.c) QColor) void {
        qtc.QAccessibleObject_OnForegroundColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `backgroundColor` instead
    ///
    pub const BackgroundColor = backgroundColor;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#backgroundColor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    pub fn backgroundColor(self: QAccessibleObject) QColor {
        return .{ .ptr = qtc.QAccessibleObject_BackgroundColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superBackgroundColor` instead
    ///
    pub const SuperBackgroundColor = superBackgroundColor;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#backgroundColor)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    pub fn superBackgroundColor(self: QAccessibleObject) QColor {
        return .{ .ptr = qtc.QAccessibleObject_SuperBackgroundColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onBackgroundColor` instead
    ///
    pub const OnBackgroundColor = onBackgroundColor;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#backgroundColor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleObject`
    ///
    /// ` callback: *const fn () callconv(.c) QColor `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onBackgroundColor(self: QAccessibleObject, callback: *const fn () callconv(.c) QColor) void {
        qtc.QAccessibleObject_OnBackgroundColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `virtualHook` instead
    ///
    pub const VirtualHook = virtualHook;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#virtual_hook)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn virtualHook(self: QAccessibleObject, id: i32, data: ?*anyopaque) void {
        qtc.QAccessibleObject_VirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `superVirtualHook` instead
    ///
    pub const SuperVirtualHook = superVirtualHook;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#virtual_hook)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn superVirtualHook(self: QAccessibleObject, id: i32, data: ?*anyopaque) void {
        qtc.QAccessibleObject_SuperVirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `onVirtualHook` instead
    ///
    pub const OnVirtualHook = onVirtualHook;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#virtual_hook)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleObject`
    ///
    /// ` callback: *const fn (self: QAccessibleObject, id: i32, data: ?*anyopaque) callconv(.c) void `
    ///
    pub fn onVirtualHook(self: QAccessibleObject, callback: *const fn (QAccessibleObject, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QAccessibleObject_OnVirtualHook(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `interfaceCast` instead
    ///
    pub const InterfaceCast = interfaceCast;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#interface_cast)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    /// ` param1: qaccessible_base_enums.InterfaceType `
    ///
    pub fn interfaceCast(self: QAccessibleObject, param1: i32) ?*anyopaque {
        return qtc.QAccessibleObject_InterfaceCast(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `superInterfaceCast` instead
    ///
    pub const SuperInterfaceCast = superInterfaceCast;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#interface_cast)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    /// ` param1: qaccessible_base_enums.InterfaceType `
    ///
    pub fn superInterfaceCast(self: QAccessibleObject, param1: i32) ?*anyopaque {
        return qtc.QAccessibleObject_SuperInterfaceCast(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onInterfaceCast` instead
    ///
    pub const OnInterfaceCast = onInterfaceCast;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#interface_cast)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleObject`
    ///
    /// ` callback: *const fn (self: QAccessibleObject, param1: qaccessible_base_enums.InterfaceType) callconv(.c) ?*anyopaque `
    ///
    pub fn onInterfaceCast(self: QAccessibleObject, callback: *const fn (QAccessibleObject, i32) callconv(.c) ?*anyopaque) void {
        qtc.QAccessibleObject_OnInterfaceCast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html)
pub const QAccessibleApplication = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAccessibleApplication,

    pub const _is_QAccessibleApplication = {};
    pub const _is_QAccessibleObject = {};
    pub const _is_QAccessibleInterface = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QAccessibleApplication object in C++ memory
    ///
    pub fn new() QAccessibleApplication {
        return .{ .ptr = qtc.QAccessibleApplication_new() };
    }

    /// ### DEPRECATED: Use `window` instead
    ///
    pub const Window = window;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#window)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    pub fn window(self: QAccessibleApplication) QWindow {
        return .{ .ptr = qtc.QAccessibleApplication_Window(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onWindow` instead
    ///
    pub const OnWindow = onWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#window)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleApplication `
    ///
    /// ` callback: *const fn () callconv(.c) QWindow `
    ///
    pub fn onWindow(self: QAccessibleApplication, callback: *const fn () callconv(.c) QWindow) void {
        qtc.QAccessibleApplication_OnWindow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWindow` instead
    ///
    pub const SuperWindow = superWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#window)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    pub fn superWindow(self: QAccessibleApplication) QWindow {
        return .{ .ptr = qtc.QAccessibleApplication_SuperWindow(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `childCount` instead
    ///
    pub const ChildCount = childCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#childCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    pub fn childCount(self: QAccessibleApplication) i32 {
        return qtc.QAccessibleApplication_ChildCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onChildCount` instead
    ///
    pub const OnChildCount = onChildCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#childCount)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleApplication `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onChildCount(self: QAccessibleApplication, callback: *const fn () callconv(.c) i32) void {
        qtc.QAccessibleApplication_OnChildCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superChildCount` instead
    ///
    pub const SuperChildCount = superChildCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#childCount)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    pub fn superChildCount(self: QAccessibleApplication) i32 {
        return qtc.QAccessibleApplication_SuperChildCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `indexOfChild` instead
    ///
    pub const IndexOfChild = indexOfChild;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#indexOfChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    /// ` param1: QAccessibleInterface `
    ///
    pub fn indexOfChild(self: QAccessibleApplication, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QAccessibleInterface;
        return qtc.QAccessibleApplication_IndexOfChild(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onIndexOfChild` instead
    ///
    pub const OnIndexOfChild = onIndexOfChild;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#indexOfChild)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleApplication `
    ///
    /// ` callback: *const fn (self: QAccessibleApplication, param1: QAccessibleInterface) callconv(.c) i32 `
    ///
    pub fn onIndexOfChild(self: QAccessibleApplication, callback: *const fn (QAccessibleApplication, QAccessibleInterface) callconv(.c) i32) void {
        qtc.QAccessibleApplication_OnIndexOfChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIndexOfChild` instead
    ///
    pub const SuperIndexOfChild = superIndexOfChild;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#indexOfChild)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    /// ` param1: QAccessibleInterface `
    ///
    pub fn superIndexOfChild(self: QAccessibleApplication, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QAccessibleInterface;
        return qtc.QAccessibleApplication_SuperIndexOfChild(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `focusChild` instead
    ///
    pub const FocusChild = focusChild;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#focusChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    pub fn focusChild(self: QAccessibleApplication) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleApplication_FocusChild(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onFocusChild` instead
    ///
    pub const OnFocusChild = onFocusChild;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#focusChild)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleApplication `
    ///
    /// ` callback: *const fn () callconv(.c) QAccessibleInterface `
    ///
    pub fn onFocusChild(self: QAccessibleApplication, callback: *const fn () callconv(.c) QAccessibleInterface) void {
        qtc.QAccessibleApplication_OnFocusChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFocusChild` instead
    ///
    pub const SuperFocusChild = superFocusChild;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#focusChild)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    pub fn superFocusChild(self: QAccessibleApplication) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleApplication_SuperFocusChild(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    pub fn parent(self: QAccessibleApplication) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleApplication_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onParent` instead
    ///
    pub const OnParent = onParent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#parent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleApplication `
    ///
    /// ` callback: *const fn () callconv(.c) QAccessibleInterface `
    ///
    pub fn onParent(self: QAccessibleApplication, callback: *const fn () callconv(.c) QAccessibleInterface) void {
        qtc.QAccessibleApplication_OnParent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superParent` instead
    ///
    pub const SuperParent = superParent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#parent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    pub fn superParent(self: QAccessibleApplication) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleApplication_SuperParent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `child` instead
    ///
    pub const Child = child;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#child)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    /// ` index: i32 `
    ///
    pub fn child(self: QAccessibleApplication, index: i32) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleApplication_Child(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `onChild` instead
    ///
    pub const OnChild = onChild;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#child)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleApplication `
    ///
    /// ` callback: *const fn (self: QAccessibleApplication, index: i32) callconv(.c) QAccessibleInterface `
    ///
    pub fn onChild(self: QAccessibleApplication, callback: *const fn (QAccessibleApplication, i32) callconv(.c) QAccessibleInterface) void {
        qtc.QAccessibleApplication_OnChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superChild` instead
    ///
    pub const SuperChild = superChild;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#child)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    /// ` index: i32 `
    ///
    pub fn superChild(self: QAccessibleApplication, index: i32) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleApplication_SuperChild(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` t: qaccessible_base_enums.Text `
    ///
    pub fn text(self: QAccessibleApplication, allocator: std.mem.Allocator, t: i32) []const u8 {
        var _str = qtc.QAccessibleApplication_Text(@ptrCast(self.ptr), @bitCast(t));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleApplication.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onText` instead
    ///
    pub const OnText = onText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#text)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleApplication `
    ///
    /// ` callback: *const fn (self: QAccessibleApplication, t: qaccessible_base_enums.Text) callconv(.c) [*:0]const u8 `
    ///
    pub fn onText(self: QAccessibleApplication, callback: *const fn (QAccessibleApplication, i32) callconv(.c) [*:0]const u8) void {
        qtc.QAccessibleApplication_OnText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superText` instead
    ///
    pub const SuperText = superText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#text)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` t: qaccessible_base_enums.Text `
    ///
    pub fn superText(self: QAccessibleApplication, allocator: std.mem.Allocator, t: i32) []const u8 {
        var _str = qtc.QAccessibleApplication_SuperText(@ptrCast(self.ptr), @bitCast(t));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleApplication.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `role` instead
    ///
    pub const Role = role;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#role)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    /// ## Returns:
    ///
    /// ` qaccessible_base_enums.Role `
    ///
    pub fn role(self: QAccessibleApplication) i32 {
        return qtc.QAccessibleApplication_Role(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRole` instead
    ///
    pub const OnRole = onRole;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#role)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleApplication `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onRole(self: QAccessibleApplication, callback: *const fn () callconv(.c) i32) void {
        qtc.QAccessibleApplication_OnRole(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRole` instead
    ///
    pub const SuperRole = superRole;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#role)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    /// ## Returns:
    ///
    /// ` qaccessible_base_enums.Role `
    ///
    pub fn superRole(self: QAccessibleApplication) i32 {
        return qtc.QAccessibleApplication_SuperRole(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    pub fn state(self: QAccessibleApplication) QAccessible__State {
        return .{ .ptr = qtc.QAccessibleApplication_State(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onState` instead
    ///
    pub const OnState = onState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#state)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleApplication `
    ///
    /// ` callback: *const fn () callconv(.c) QAccessible__State `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onState(self: QAccessibleApplication, callback: *const fn () callconv(.c) QAccessible__State) void {
        qtc.QAccessibleApplication_OnState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superState` instead
    ///
    pub const SuperState = superState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#state)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    pub fn superState(self: QAccessibleApplication) QAccessible__State {
        return .{ .ptr = qtc.QAccessibleApplication_SuperState(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `textInterface` instead
    ///
    pub const TextInterface = textInterface;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#textInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    pub fn textInterface(self: QAccessibleApplication) QAccessibleTextInterface {
        return .{ .ptr = qtc.QAccessibleInterface_TextInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `editableTextInterface` instead
    ///
    pub const EditableTextInterface = editableTextInterface;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#editableTextInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    pub fn editableTextInterface(self: QAccessibleApplication) QAccessibleEditableTextInterface {
        return .{ .ptr = qtc.QAccessibleInterface_EditableTextInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `valueInterface` instead
    ///
    pub const ValueInterface = valueInterface;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#valueInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    pub fn valueInterface(self: QAccessibleApplication) QAccessibleValueInterface {
        return .{ .ptr = qtc.QAccessibleInterface_ValueInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `actionInterface` instead
    ///
    pub const ActionInterface = actionInterface;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#actionInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    pub fn actionInterface(self: QAccessibleApplication) QAccessibleActionInterface {
        return .{ .ptr = qtc.QAccessibleInterface_ActionInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `imageInterface` instead
    ///
    pub const ImageInterface = imageInterface;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#imageInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    pub fn imageInterface(self: QAccessibleApplication) QAccessibleImageInterface {
        return .{ .ptr = qtc.QAccessibleInterface_ImageInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `tableInterface` instead
    ///
    pub const TableInterface = tableInterface;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    pub fn tableInterface(self: QAccessibleApplication) QAccessibleTableInterface {
        return .{ .ptr = qtc.QAccessibleInterface_TableInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `tableCellInterface` instead
    ///
    pub const TableCellInterface = tableCellInterface;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableCellInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    pub fn tableCellInterface(self: QAccessibleApplication) QAccessibleTableCellInterface {
        return .{ .ptr = qtc.QAccessibleInterface_TableCellInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `hyperlinkInterface` instead
    ///
    pub const HyperlinkInterface = hyperlinkInterface;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#hyperlinkInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    pub fn hyperlinkInterface(self: QAccessibleApplication) QAccessibleHyperlinkInterface {
        return .{ .ptr = qtc.QAccessibleInterface_HyperlinkInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `selectionInterface` instead
    ///
    pub const SelectionInterface = selectionInterface;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#selectionInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    pub fn selectionInterface(self: QAccessibleApplication) QAccessibleSelectionInterface {
        return .{ .ptr = qtc.QAccessibleInterface_SelectionInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `attributesInterface` instead
    ///
    pub const AttributesInterface = attributesInterface;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#attributesInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    pub fn attributesInterface(self: QAccessibleApplication) QAccessibleAttributesInterface {
        return .{ .ptr = qtc.QAccessibleInterface_AttributesInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// Inherited from QAccessibleObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#isValid)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    pub fn isValid(self: QAccessibleApplication) bool {
        return qtc.QAccessibleApplication_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superIsValid` instead
    ///
    pub const SuperIsValid = superIsValid;

    /// Inherited from QAccessibleObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#isValid)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    pub fn superIsValid(self: QAccessibleApplication) bool {
        return qtc.QAccessibleApplication_SuperIsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsValid` instead
    ///
    pub const OnIsValid = onIsValid;

    /// Inherited from QAccessibleObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#isValid)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleApplication`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsValid(self: QAccessibleApplication, callback: *const fn () callconv(.c) bool) void {
        qtc.QAccessibleApplication_OnIsValid(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `object` instead
    ///
    pub const Object = object;

    /// Inherited from QAccessibleObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    pub fn object(self: QAccessibleApplication) QObject {
        return .{ .ptr = qtc.QAccessibleApplication_Object(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superObject` instead
    ///
    pub const SuperObject = superObject;

    /// Inherited from QAccessibleObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    pub fn superObject(self: QAccessibleApplication) QObject {
        return .{ .ptr = qtc.QAccessibleApplication_SuperObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onObject` instead
    ///
    pub const OnObject = onObject;

    /// Inherited from QAccessibleObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleApplication`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onObject(self: QAccessibleApplication, callback: *const fn () callconv(.c) QObject) void {
        qtc.QAccessibleApplication_OnObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// Inherited from QAccessibleObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#rect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    pub fn rect(self: QAccessibleApplication) QRect {
        return .{ .ptr = qtc.QAccessibleApplication_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superRect` instead
    ///
    pub const SuperRect = superRect;

    /// Inherited from QAccessibleObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#rect)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    pub fn superRect(self: QAccessibleApplication) QRect {
        return .{ .ptr = qtc.QAccessibleApplication_SuperRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onRect` instead
    ///
    pub const OnRect = onRect;

    /// Inherited from QAccessibleObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#rect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleApplication`
    ///
    /// ` callback: *const fn () callconv(.c) QRect `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onRect(self: QAccessibleApplication, callback: *const fn () callconv(.c) QRect) void {
        qtc.QAccessibleApplication_OnRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setText` instead
    ///
    pub const SetText = setText;

    /// Inherited from QAccessibleObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#setText)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    /// ` t: qaccessible_base_enums.Text `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn setText(self: QAccessibleApplication, t: i32, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QAccessibleApplication_SetText(@ptrCast(self.ptr), @bitCast(t), text_str);
    }

    /// ### DEPRECATED: Use `superSetText` instead
    ///
    pub const SuperSetText = superSetText;

    /// Inherited from QAccessibleObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#setText)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    /// ` t: qaccessible_base_enums.Text `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn superSetText(self: QAccessibleApplication, t: i32, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QAccessibleApplication_SuperSetText(@ptrCast(self.ptr), @bitCast(t), text_str);
    }

    /// ### DEPRECATED: Use `onSetText` instead
    ///
    pub const OnSetText = onSetText;

    /// Inherited from QAccessibleObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#setText)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleApplication`
    ///
    /// ` callback: *const fn (self: QAccessibleApplication, t: qaccessible_base_enums.Text, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetText(self: QAccessibleApplication, callback: *const fn (QAccessibleApplication, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QAccessibleApplication_OnSetText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childAt` instead
    ///
    pub const ChildAt = childAt;

    /// Inherited from QAccessibleObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#childAt)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn childAt(self: QAccessibleApplication, x: i32, y: i32) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleApplication_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// ### DEPRECATED: Use `superChildAt` instead
    ///
    pub const SuperChildAt = superChildAt;

    /// Inherited from QAccessibleObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#childAt)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn superChildAt(self: QAccessibleApplication, x: i32, y: i32) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleApplication_SuperChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// ### DEPRECATED: Use `onChildAt` instead
    ///
    pub const OnChildAt = onChildAt;

    /// Inherited from QAccessibleObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#childAt)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleApplication`
    ///
    /// ` callback: *const fn (self: QAccessibleApplication, x: i32, y: i32) callconv(.c) QAccessibleInterface `
    ///
    pub fn onChildAt(self: QAccessibleApplication, callback: *const fn (QAccessibleApplication, i32, i32) callconv(.c) QAccessibleInterface) void {
        qtc.QAccessibleApplication_OnChildAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `relations` instead
    ///
    pub const Relations = relations;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#relations)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` match: flag of qaccessible_base_enums.RelationFlag `
    ///
    pub fn relations(self: QAccessibleApplication, allocator: std.mem.Allocator, match: i32) []Struct_QAccessibleInterface_i32 {
        const _arr: qtc.libqt_list = qtc.QAccessibleApplication_Relations(@ptrCast(self.ptr), @bitCast(match));
        const _data_val: [*]Struct_QAccessibleInterface_i32 = @ptrCast(@alignCast(_arr.data));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Struct_QAccessibleInterface_i32, _arr.len) catch @panic("QAccessibleApplication.relations: Memory allocation failed");
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `superRelations` instead
    ///
    pub const SuperRelations = superRelations;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#relations)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` match: flag of qaccessible_base_enums.RelationFlag `
    ///
    pub fn superRelations(self: QAccessibleApplication, allocator: std.mem.Allocator, match: i32) []Struct_QAccessibleInterface_i32 {
        const _arr: qtc.libqt_list = qtc.QAccessibleApplication_SuperRelations(@ptrCast(self.ptr), @bitCast(match));
        const _data_val: [*]Struct_QAccessibleInterface_i32 = @ptrCast(@alignCast(_arr.data));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Struct_QAccessibleInterface_i32, _arr.len) catch @panic("QAccessibleApplication.relations: Memory allocation failed");
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onRelations` instead
    ///
    pub const OnRelations = onRelations;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#relations)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleApplication`
    ///
    /// ` callback: *const fn (self: QAccessibleApplication, match: flag of qaccessible_base_enums.RelationFlag) callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []Struct_QAccessibleInterface_i32 `
    ///
    pub fn onRelations(self: QAccessibleApplication, callback: *const fn (QAccessibleApplication, i32) callconv(.c) qtc.libqt_list) void {
        qtc.QAccessibleApplication_OnRelations(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `foregroundColor` instead
    ///
    pub const ForegroundColor = foregroundColor;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#foregroundColor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    pub fn foregroundColor(self: QAccessibleApplication) QColor {
        return .{ .ptr = qtc.QAccessibleApplication_ForegroundColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superForegroundColor` instead
    ///
    pub const SuperForegroundColor = superForegroundColor;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#foregroundColor)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    pub fn superForegroundColor(self: QAccessibleApplication) QColor {
        return .{ .ptr = qtc.QAccessibleApplication_SuperForegroundColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onForegroundColor` instead
    ///
    pub const OnForegroundColor = onForegroundColor;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#foregroundColor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleApplication`
    ///
    /// ` callback: *const fn () callconv(.c) QColor `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onForegroundColor(self: QAccessibleApplication, callback: *const fn () callconv(.c) QColor) void {
        qtc.QAccessibleApplication_OnForegroundColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `backgroundColor` instead
    ///
    pub const BackgroundColor = backgroundColor;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#backgroundColor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    pub fn backgroundColor(self: QAccessibleApplication) QColor {
        return .{ .ptr = qtc.QAccessibleApplication_BackgroundColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superBackgroundColor` instead
    ///
    pub const SuperBackgroundColor = superBackgroundColor;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#backgroundColor)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    pub fn superBackgroundColor(self: QAccessibleApplication) QColor {
        return .{ .ptr = qtc.QAccessibleApplication_SuperBackgroundColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onBackgroundColor` instead
    ///
    pub const OnBackgroundColor = onBackgroundColor;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#backgroundColor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleApplication`
    ///
    /// ` callback: *const fn () callconv(.c) QColor `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onBackgroundColor(self: QAccessibleApplication, callback: *const fn () callconv(.c) QColor) void {
        qtc.QAccessibleApplication_OnBackgroundColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `virtualHook` instead
    ///
    pub const VirtualHook = virtualHook;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#virtual_hook)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn virtualHook(self: QAccessibleApplication, id: i32, data: ?*anyopaque) void {
        qtc.QAccessibleApplication_VirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `superVirtualHook` instead
    ///
    pub const SuperVirtualHook = superVirtualHook;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#virtual_hook)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn superVirtualHook(self: QAccessibleApplication, id: i32, data: ?*anyopaque) void {
        qtc.QAccessibleApplication_SuperVirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `onVirtualHook` instead
    ///
    pub const OnVirtualHook = onVirtualHook;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#virtual_hook)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleApplication`
    ///
    /// ` callback: *const fn (self: QAccessibleApplication, id: i32, data: ?*anyopaque) callconv(.c) void `
    ///
    pub fn onVirtualHook(self: QAccessibleApplication, callback: *const fn (QAccessibleApplication, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QAccessibleApplication_OnVirtualHook(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `interfaceCast` instead
    ///
    pub const InterfaceCast = interfaceCast;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#interface_cast)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    /// ` param1: qaccessible_base_enums.InterfaceType `
    ///
    pub fn interfaceCast(self: QAccessibleApplication, param1: i32) ?*anyopaque {
        return qtc.QAccessibleApplication_InterfaceCast(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `superInterfaceCast` instead
    ///
    pub const SuperInterfaceCast = superInterfaceCast;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#interface_cast)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    /// ` param1: qaccessible_base_enums.InterfaceType `
    ///
    pub fn superInterfaceCast(self: QAccessibleApplication, param1: i32) ?*anyopaque {
        return qtc.QAccessibleApplication_SuperInterfaceCast(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onInterfaceCast` instead
    ///
    pub const OnInterfaceCast = onInterfaceCast;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#interface_cast)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleApplication`
    ///
    /// ` callback: *const fn (self: QAccessibleApplication, param1: qaccessible_base_enums.InterfaceType) callconv(.c) ?*anyopaque `
    ///
    pub fn onInterfaceCast(self: QAccessibleApplication, callback: *const fn (QAccessibleApplication, i32) callconv(.c) ?*anyopaque) void {
        qtc.QAccessibleApplication_OnInterfaceCast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#dtor.QAccessibleApplication)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAccessibleApplication `
    ///
    pub fn delete(self: QAccessibleApplication) void {
        qtc.QAccessibleApplication_Delete(@ptrCast(self.ptr));
    }
};
