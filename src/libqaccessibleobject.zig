const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qaccessible_base_enums = @import("libqaccessible_base.zig").enums;
const std = @import("std");
const struct_qtcqaccessibleinterface_i32 = extern struct { first: QtC.QAccessibleInterface, second: i32 };

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html)
pub const qaccessibleobject = struct {
    /// New constructs a new QAccessibleObject object.
    ///
    /// ## Parameter(s):
    ///
    /// ` object: QtC.QObject `
    ///
    pub fn New(object: ?*anyopaque) QtC.QAccessibleObject {
        return qtc.QAccessibleObject_new(@ptrCast(object));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QAccessibleObject_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#isValid)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsValid(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QAccessibleObject_OnIsValid(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsValid` instead
    ///
    pub const QBaseIsValid = SuperIsValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#isValid)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    pub fn SuperIsValid(self: ?*anyopaque) bool {
        return qtc.QAccessibleObject_SuperIsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    pub fn Object(self: ?*anyopaque) QtC.QObject {
        return qtc.QAccessibleObject_Object(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QAccessibleObject_OnObject(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperObject` instead
    ///
    pub const QBaseObject = SuperObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    pub fn SuperObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QAccessibleObject_SuperObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QAccessibleObject_Rect(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#rect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QRect `
    ///
    pub fn OnRect(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QRect) void {
        qtc.QAccessibleObject_OnRect(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRect` instead
    ///
    pub const QBaseRect = SuperRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#rect)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    pub fn SuperRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QAccessibleObject_SuperRect(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleObject `
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
        qtc.QAccessibleObject_SetText(@ptrCast(self), @bitCast(t), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#setText)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    /// ` callback: *const fn (self: QtC.QAccessibleObject, t: qaccessible_base_enums.Text, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetText(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QAccessibleObject_OnSetText(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetText` instead
    ///
    pub const QBaseSetText = SuperSetText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#setText)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    /// ` t: qaccessible_base_enums.Text `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SuperSetText(self: ?*anyopaque, t: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QAccessibleObject_SuperSetText(@ptrCast(self), @bitCast(t), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ChildAt(self: ?*anyopaque, x: i32, y: i32) QtC.QAccessibleInterface {
        return qtc.QAccessibleObject_ChildAt(@ptrCast(self), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#childAt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    /// ` callback: *const fn (self: QtC.QAccessibleObject, x: i32, y: i32) callconv(.c) QtC.QAccessibleInterface `
    ///
    pub fn OnChildAt(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleObject_OnChildAt(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperChildAt` instead
    ///
    pub const QBaseChildAt = SuperChildAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#childAt)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn SuperChildAt(self: ?*anyopaque, x: i32, y: i32) QtC.QAccessibleInterface {
        return qtc.QAccessibleObject_SuperChildAt(@ptrCast(self), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#textInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    pub fn TextInterface(self: ?*anyopaque) QtC.QAccessibleTextInterface {
        return qtc.QAccessibleInterface_TextInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#editableTextInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    pub fn EditableTextInterface(self: ?*anyopaque) QtC.QAccessibleEditableTextInterface {
        return qtc.QAccessibleInterface_EditableTextInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#valueInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    pub fn ValueInterface(self: ?*anyopaque) QtC.QAccessibleValueInterface {
        return qtc.QAccessibleInterface_ValueInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#actionInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    pub fn ActionInterface(self: ?*anyopaque) QtC.QAccessibleActionInterface {
        return qtc.QAccessibleInterface_ActionInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#imageInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    pub fn ImageInterface(self: ?*anyopaque) QtC.QAccessibleImageInterface {
        return qtc.QAccessibleInterface_ImageInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    pub fn TableInterface(self: ?*anyopaque) QtC.QAccessibleTableInterface {
        return qtc.QAccessibleInterface_TableInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableCellInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    pub fn TableCellInterface(self: ?*anyopaque) QtC.QAccessibleTableCellInterface {
        return qtc.QAccessibleInterface_TableCellInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#hyperlinkInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    pub fn HyperlinkInterface(self: ?*anyopaque) QtC.QAccessibleHyperlinkInterface {
        return qtc.QAccessibleInterface_HyperlinkInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#selectionInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    pub fn SelectionInterface(self: ?*anyopaque) QtC.QAccessibleSelectionInterface {
        return qtc.QAccessibleInterface_SelectionInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#attributesInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    pub fn AttributesInterface(self: ?*anyopaque) QtC.QAccessibleAttributesInterface {
        return qtc.QAccessibleInterface_AttributesInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#window)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    pub fn Window(self: ?*anyopaque) QtC.QWindow {
        return qtc.QAccessibleObject_Window(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperWindow` instead
    ///
    pub const QBaseWindow = SuperWindow;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#window)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    pub fn SuperWindow(self: ?*anyopaque) QtC.QWindow {
        return qtc.QAccessibleObject_SuperWindow(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#window)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAccessibleObject`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QWindow `
    ///
    pub fn OnWindow(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QWindow) void {
        qtc.QAccessibleObject_OnWindow(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#relations)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    /// ` match: flag of qaccessible_base_enums.RelationFlag `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Relations(self: ?*anyopaque, match: i32, allocator: std.mem.Allocator) []struct_qtcqaccessibleinterface_i32 {
        const _arr: qtc.libqt_list = qtc.QAccessibleObject_Relations(@ptrCast(self), @bitCast(match));
        const _data: [*]struct_qtcqaccessibleinterface_i32 = @ptrCast(@alignCast(_arr.data));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(struct_qtcqaccessibleinterface_i32, _arr.len) catch @panic("qaccessibleobject.Relations: Memory allocation failed");
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperRelations` instead
    ///
    pub const QBaseRelations = SuperRelations;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#relations)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    /// ` match: flag of qaccessible_base_enums.RelationFlag `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperRelations(self: ?*anyopaque, match: i32, allocator: std.mem.Allocator) []struct_qtcqaccessibleinterface_i32 {
        const _arr: qtc.libqt_list = qtc.QAccessibleObject_SuperRelations(@ptrCast(self), @bitCast(match));
        const _data: [*]struct_qtcqaccessibleinterface_i32 = @ptrCast(@alignCast(_arr.data));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(struct_qtcqaccessibleinterface_i32, _arr.len) catch @panic("qaccessibleobject.Relations: Memory allocation failed");
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#relations)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAccessibleObject`
    ///
    /// ` callback: *const fn (self: QtC.QAccessibleObject, match: flag of qaccessible_base_enums.RelationFlag) callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []struct_qtcqaccessibleinterface_i32 `
    ///
    pub fn OnRelations(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) qtc.libqt_list) void {
        qtc.QAccessibleObject_OnRelations(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#focusChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    pub fn FocusChild(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleObject_FocusChild(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperFocusChild` instead
    ///
    pub const QBaseFocusChild = SuperFocusChild;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#focusChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    pub fn SuperFocusChild(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleObject_SuperFocusChild(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#focusChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAccessibleObject`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QAccessibleInterface `
    ///
    pub fn OnFocusChild(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleObject_OnFocusChild(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#parent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    pub fn Parent(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleObject_Parent(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperParent` instead
    ///
    pub const QBaseParent = SuperParent;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#parent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    pub fn SuperParent(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleObject_SuperParent(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#parent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAccessibleObject`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QAccessibleInterface `
    ///
    pub fn OnParent(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleObject_OnParent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#child)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    /// ` index: i32 `
    ///
    pub fn Child(self: ?*anyopaque, index: i32) QtC.QAccessibleInterface {
        return qtc.QAccessibleObject_Child(@ptrCast(self), @bitCast(index));
    }

    /// ### DEPRECATED: Use `SuperChild` instead
    ///
    pub const QBaseChild = SuperChild;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#child)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperChild(self: ?*anyopaque, index: i32) QtC.QAccessibleInterface {
        return qtc.QAccessibleObject_SuperChild(@ptrCast(self), @bitCast(index));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#child)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAccessibleObject`
    ///
    /// ` callback: *const fn (self: QtC.QAccessibleObject, index: i32) callconv(.c) QtC.QAccessibleInterface `
    ///
    pub fn OnChild(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleObject_OnChild(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#childCount)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    pub fn ChildCount(self: ?*anyopaque) i32 {
        return qtc.QAccessibleObject_ChildCount(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperChildCount` instead
    ///
    pub const QBaseChildCount = SuperChildCount;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#childCount)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    pub fn SuperChildCount(self: ?*anyopaque) i32 {
        return qtc.QAccessibleObject_SuperChildCount(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#childCount)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAccessibleObject`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnChildCount(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QAccessibleObject_OnChildCount(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#indexOfChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    /// ` param1: QtC.QAccessibleInterface `
    ///
    pub fn IndexOfChild(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QAccessibleObject_IndexOfChild(@ptrCast(self), @ptrCast(param1));
    }

    /// ### DEPRECATED: Use `SuperIndexOfChild` instead
    ///
    pub const QBaseIndexOfChild = SuperIndexOfChild;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#indexOfChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    /// ` param1: QtC.QAccessibleInterface `
    ///
    pub fn SuperIndexOfChild(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QAccessibleObject_SuperIndexOfChild(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#indexOfChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAccessibleObject`
    ///
    /// ` callback: *const fn (self: QtC.QAccessibleObject, param1: QtC.QAccessibleInterface) callconv(.c) i32 `
    ///
    pub fn OnIndexOfChild(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QAccessibleObject_OnIndexOfChild(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#text)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    /// ` t: qaccessible_base_enums.Text `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: ?*anyopaque, t: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleObject_Text(@ptrCast(self), @bitCast(t));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleobject.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperText` instead
    ///
    pub const QBaseText = SuperText;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#text)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    /// ` t: qaccessible_base_enums.Text `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperText(self: ?*anyopaque, t: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleObject_SuperText(@ptrCast(self), @bitCast(t));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleobject.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#text)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAccessibleObject`
    ///
    /// ` callback: *const fn (self: QtC.QAccessibleObject, t: qaccessible_base_enums.Text) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnText(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) [*:0]const u8) void {
        qtc.QAccessibleObject_OnText(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#role)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    /// ## Returns:
    ///
    /// ` qaccessible_base_enums.Role `
    ///
    pub fn Role(self: ?*anyopaque) i32 {
        return qtc.QAccessibleObject_Role(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperRole` instead
    ///
    pub const QBaseRole = SuperRole;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#role)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    /// ## Returns:
    ///
    /// ` qaccessible_base_enums.Role `
    ///
    pub fn SuperRole(self: ?*anyopaque) i32 {
        return qtc.QAccessibleObject_SuperRole(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#role)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAccessibleObject`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnRole(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QAccessibleObject_OnRole(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#state)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    pub fn State(self: ?*anyopaque) QtC.QAccessible__State {
        return qtc.QAccessibleObject_State(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperState` instead
    ///
    pub const QBaseState = SuperState;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#state)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    pub fn SuperState(self: ?*anyopaque) QtC.QAccessible__State {
        return qtc.QAccessibleObject_SuperState(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#state)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAccessibleObject`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QAccessible__State `
    ///
    pub fn OnState(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QAccessible__State) void {
        qtc.QAccessibleObject_OnState(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#foregroundColor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    pub fn ForegroundColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QAccessibleObject_ForegroundColor(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperForegroundColor` instead
    ///
    pub const QBaseForegroundColor = SuperForegroundColor;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#foregroundColor)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    pub fn SuperForegroundColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QAccessibleObject_SuperForegroundColor(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#foregroundColor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAccessibleObject`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QColor `
    ///
    pub fn OnForegroundColor(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QColor) void {
        qtc.QAccessibleObject_OnForegroundColor(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#backgroundColor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    pub fn BackgroundColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QAccessibleObject_BackgroundColor(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperBackgroundColor` instead
    ///
    pub const QBaseBackgroundColor = SuperBackgroundColor;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#backgroundColor)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    pub fn SuperBackgroundColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QAccessibleObject_SuperBackgroundColor(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#backgroundColor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAccessibleObject`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QColor `
    ///
    pub fn OnBackgroundColor(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QColor) void {
        qtc.QAccessibleObject_OnBackgroundColor(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#virtual_hook)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn VirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.QAccessibleObject_VirtualHook(@ptrCast(self), @bitCast(id), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `SuperVirtualHook` instead
    ///
    pub const QBaseVirtualHook = SuperVirtualHook;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#virtual_hook)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn SuperVirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.QAccessibleObject_SuperVirtualHook(@ptrCast(self), @bitCast(id), @ptrCast(data));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#virtual_hook)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAccessibleObject`
    ///
    /// ` callback: *const fn (self: QtC.QAccessibleObject, id: i32, data: ?*anyopaque) callconv(.c) void `
    ///
    pub fn OnVirtualHook(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QAccessibleObject_OnVirtualHook(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#interface_cast)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    /// ` param1: qaccessible_base_enums.InterfaceType `
    ///
    pub fn InterfaceCast(self: ?*anyopaque, param1: i32) ?*anyopaque {
        return qtc.QAccessibleObject_InterfaceCast(@ptrCast(self), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `SuperInterfaceCast` instead
    ///
    pub const QBaseInterfaceCast = SuperInterfaceCast;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#interface_cast)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleObject `
    ///
    /// ` param1: qaccessible_base_enums.InterfaceType `
    ///
    pub fn SuperInterfaceCast(self: ?*anyopaque, param1: i32) ?*anyopaque {
        return qtc.QAccessibleObject_SuperInterfaceCast(@ptrCast(self), @bitCast(param1));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#interface_cast)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAccessibleObject`
    ///
    /// ` callback: *const fn (self: QtC.QAccessibleObject, param1: qaccessible_base_enums.InterfaceType) callconv(.c) ?*anyopaque `
    ///
    pub fn OnInterfaceCast(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) ?*anyopaque) void {
        qtc.QAccessibleObject_OnInterfaceCast(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html)
pub const qaccessibleapplication = struct {
    /// New constructs a new QAccessibleApplication object.
    ///
    pub fn New() QtC.QAccessibleApplication {
        return qtc.QAccessibleApplication_new();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#window)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    pub fn Window(self: ?*anyopaque) QtC.QWindow {
        return qtc.QAccessibleApplication_Window(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#window)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QWindow `
    ///
    pub fn OnWindow(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QWindow) void {
        qtc.QAccessibleApplication_OnWindow(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWindow` instead
    ///
    pub const QBaseWindow = SuperWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#window)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    pub fn SuperWindow(self: ?*anyopaque) QtC.QWindow {
        return qtc.QAccessibleApplication_SuperWindow(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#childCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    pub fn ChildCount(self: ?*anyopaque) i32 {
        return qtc.QAccessibleApplication_ChildCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#childCount)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnChildCount(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QAccessibleApplication_OnChildCount(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperChildCount` instead
    ///
    pub const QBaseChildCount = SuperChildCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#childCount)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    pub fn SuperChildCount(self: ?*anyopaque) i32 {
        return qtc.QAccessibleApplication_SuperChildCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#indexOfChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    /// ` param1: QtC.QAccessibleInterface `
    ///
    pub fn IndexOfChild(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QAccessibleApplication_IndexOfChild(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#indexOfChild)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    /// ` callback: *const fn (self: QtC.QAccessibleApplication, param1: QtC.QAccessibleInterface) callconv(.c) i32 `
    ///
    pub fn OnIndexOfChild(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QAccessibleApplication_OnIndexOfChild(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIndexOfChild` instead
    ///
    pub const QBaseIndexOfChild = SuperIndexOfChild;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#indexOfChild)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    /// ` param1: QtC.QAccessibleInterface `
    ///
    pub fn SuperIndexOfChild(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QAccessibleApplication_SuperIndexOfChild(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#focusChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    pub fn FocusChild(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleApplication_FocusChild(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#focusChild)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QAccessibleInterface `
    ///
    pub fn OnFocusChild(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleApplication_OnFocusChild(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFocusChild` instead
    ///
    pub const QBaseFocusChild = SuperFocusChild;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#focusChild)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    pub fn SuperFocusChild(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleApplication_SuperFocusChild(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    pub fn Parent(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleApplication_Parent(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#parent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QAccessibleInterface `
    ///
    pub fn OnParent(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleApplication_OnParent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperParent` instead
    ///
    pub const QBaseParent = SuperParent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#parent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    pub fn SuperParent(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleApplication_SuperParent(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#child)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    /// ` index: i32 `
    ///
    pub fn Child(self: ?*anyopaque, index: i32) QtC.QAccessibleInterface {
        return qtc.QAccessibleApplication_Child(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#child)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    /// ` callback: *const fn (self: QtC.QAccessibleApplication, index: i32) callconv(.c) QtC.QAccessibleInterface `
    ///
    pub fn OnChild(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleApplication_OnChild(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperChild` instead
    ///
    pub const QBaseChild = SuperChild;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#child)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperChild(self: ?*anyopaque, index: i32) QtC.QAccessibleInterface {
        return qtc.QAccessibleApplication_SuperChild(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    /// ` t: qaccessible_base_enums.Text `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: ?*anyopaque, t: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleApplication_Text(@ptrCast(self), @bitCast(t));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleapplication.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#text)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    /// ` callback: *const fn (self: QtC.QAccessibleApplication, t: qaccessible_base_enums.Text) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnText(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) [*:0]const u8) void {
        qtc.QAccessibleApplication_OnText(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperText` instead
    ///
    pub const QBaseText = SuperText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#text)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    /// ` t: qaccessible_base_enums.Text `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperText(self: ?*anyopaque, t: i32, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleApplication_SuperText(@ptrCast(self), @bitCast(t));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleapplication.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#role)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    /// ## Returns:
    ///
    /// ` qaccessible_base_enums.Role `
    ///
    pub fn Role(self: ?*anyopaque) i32 {
        return qtc.QAccessibleApplication_Role(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#role)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnRole(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QAccessibleApplication_OnRole(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRole` instead
    ///
    pub const QBaseRole = SuperRole;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#role)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    /// ## Returns:
    ///
    /// ` qaccessible_base_enums.Role `
    ///
    pub fn SuperRole(self: ?*anyopaque) i32 {
        return qtc.QAccessibleApplication_SuperRole(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    pub fn State(self: ?*anyopaque) QtC.QAccessible__State {
        return qtc.QAccessibleApplication_State(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#state)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QAccessible__State `
    ///
    pub fn OnState(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QAccessible__State) void {
        qtc.QAccessibleApplication_OnState(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperState` instead
    ///
    pub const QBaseState = SuperState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#state)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    pub fn SuperState(self: ?*anyopaque) QtC.QAccessible__State {
        return qtc.QAccessibleApplication_SuperState(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#textInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    pub fn TextInterface(self: ?*anyopaque) QtC.QAccessibleTextInterface {
        return qtc.QAccessibleInterface_TextInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#editableTextInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    pub fn EditableTextInterface(self: ?*anyopaque) QtC.QAccessibleEditableTextInterface {
        return qtc.QAccessibleInterface_EditableTextInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#valueInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    pub fn ValueInterface(self: ?*anyopaque) QtC.QAccessibleValueInterface {
        return qtc.QAccessibleInterface_ValueInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#actionInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    pub fn ActionInterface(self: ?*anyopaque) QtC.QAccessibleActionInterface {
        return qtc.QAccessibleInterface_ActionInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#imageInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    pub fn ImageInterface(self: ?*anyopaque) QtC.QAccessibleImageInterface {
        return qtc.QAccessibleInterface_ImageInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    pub fn TableInterface(self: ?*anyopaque) QtC.QAccessibleTableInterface {
        return qtc.QAccessibleInterface_TableInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableCellInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    pub fn TableCellInterface(self: ?*anyopaque) QtC.QAccessibleTableCellInterface {
        return qtc.QAccessibleInterface_TableCellInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#hyperlinkInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    pub fn HyperlinkInterface(self: ?*anyopaque) QtC.QAccessibleHyperlinkInterface {
        return qtc.QAccessibleInterface_HyperlinkInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#selectionInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    pub fn SelectionInterface(self: ?*anyopaque) QtC.QAccessibleSelectionInterface {
        return qtc.QAccessibleInterface_SelectionInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#attributesInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    pub fn AttributesInterface(self: ?*anyopaque) QtC.QAccessibleAttributesInterface {
        return qtc.QAccessibleInterface_AttributesInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#isValid)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QAccessibleApplication_IsValid(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperIsValid` instead
    ///
    pub const QBaseIsValid = SuperIsValid;

    /// Inherited from QAccessibleObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#isValid)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    pub fn SuperIsValid(self: ?*anyopaque) bool {
        return qtc.QAccessibleApplication_SuperIsValid(@ptrCast(self));
    }

    /// Inherited from QAccessibleObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#isValid)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAccessibleApplication`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsValid(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QAccessibleApplication_OnIsValid(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAccessibleObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    pub fn Object(self: ?*anyopaque) QtC.QObject {
        return qtc.QAccessibleApplication_Object(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperObject` instead
    ///
    pub const QBaseObject = SuperObject;

    /// Inherited from QAccessibleObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    pub fn SuperObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QAccessibleApplication_SuperObject(@ptrCast(self));
    }

    /// Inherited from QAccessibleObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAccessibleApplication`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QAccessibleApplication_OnObject(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAccessibleObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#rect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QAccessibleApplication_Rect(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperRect` instead
    ///
    pub const QBaseRect = SuperRect;

    /// Inherited from QAccessibleObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#rect)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    pub fn SuperRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QAccessibleApplication_SuperRect(@ptrCast(self));
    }

    /// Inherited from QAccessibleObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#rect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAccessibleApplication`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QRect `
    ///
    pub fn OnRect(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QRect) void {
        qtc.QAccessibleApplication_OnRect(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAccessibleObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#setText)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleApplication `
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
        qtc.QAccessibleApplication_SetText(@ptrCast(self), @bitCast(t), text_str);
    }

    /// ### DEPRECATED: Use `SuperSetText` instead
    ///
    pub const QBaseSetText = SuperSetText;

    /// Inherited from QAccessibleObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#setText)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    /// ` t: qaccessible_base_enums.Text `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SuperSetText(self: ?*anyopaque, t: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QAccessibleApplication_SuperSetText(@ptrCast(self), @bitCast(t), text_str);
    }

    /// Inherited from QAccessibleObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#setText)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAccessibleApplication`
    ///
    /// ` callback: *const fn (self: QtC.QAccessibleApplication, t: qaccessible_base_enums.Text, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetText(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QAccessibleApplication_OnSetText(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAccessibleObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#childAt)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ChildAt(self: ?*anyopaque, x: i32, y: i32) QtC.QAccessibleInterface {
        return qtc.QAccessibleApplication_ChildAt(@ptrCast(self), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `SuperChildAt` instead
    ///
    pub const QBaseChildAt = SuperChildAt;

    /// Inherited from QAccessibleObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#childAt)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn SuperChildAt(self: ?*anyopaque, x: i32, y: i32) QtC.QAccessibleInterface {
        return qtc.QAccessibleApplication_SuperChildAt(@ptrCast(self), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QAccessibleObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#childAt)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAccessibleApplication`
    ///
    /// ` callback: *const fn (self: QtC.QAccessibleApplication, x: i32, y: i32) callconv(.c) QtC.QAccessibleInterface `
    ///
    pub fn OnChildAt(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleApplication_OnChildAt(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#relations)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    /// ` match: flag of qaccessible_base_enums.RelationFlag `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Relations(self: ?*anyopaque, match: i32, allocator: std.mem.Allocator) []struct_qtcqaccessibleinterface_i32 {
        const _arr: qtc.libqt_list = qtc.QAccessibleApplication_Relations(@ptrCast(self), @bitCast(match));
        const _data: [*]struct_qtcqaccessibleinterface_i32 = @ptrCast(@alignCast(_arr.data));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(struct_qtcqaccessibleinterface_i32, _arr.len) catch @panic("qaccessibleapplication.Relations: Memory allocation failed");
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperRelations` instead
    ///
    pub const QBaseRelations = SuperRelations;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#relations)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    /// ` match: flag of qaccessible_base_enums.RelationFlag `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperRelations(self: ?*anyopaque, match: i32, allocator: std.mem.Allocator) []struct_qtcqaccessibleinterface_i32 {
        const _arr: qtc.libqt_list = qtc.QAccessibleApplication_SuperRelations(@ptrCast(self), @bitCast(match));
        const _data: [*]struct_qtcqaccessibleinterface_i32 = @ptrCast(@alignCast(_arr.data));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(struct_qtcqaccessibleinterface_i32, _arr.len) catch @panic("qaccessibleapplication.Relations: Memory allocation failed");
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#relations)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAccessibleApplication`
    ///
    /// ` callback: *const fn (self: QtC.QAccessibleApplication, match: flag of qaccessible_base_enums.RelationFlag) callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []struct_qtcqaccessibleinterface_i32 `
    ///
    pub fn OnRelations(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) qtc.libqt_list) void {
        qtc.QAccessibleApplication_OnRelations(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#foregroundColor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    pub fn ForegroundColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QAccessibleApplication_ForegroundColor(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperForegroundColor` instead
    ///
    pub const QBaseForegroundColor = SuperForegroundColor;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#foregroundColor)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    pub fn SuperForegroundColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QAccessibleApplication_SuperForegroundColor(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#foregroundColor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAccessibleApplication`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QColor `
    ///
    pub fn OnForegroundColor(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QColor) void {
        qtc.QAccessibleApplication_OnForegroundColor(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#backgroundColor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    pub fn BackgroundColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QAccessibleApplication_BackgroundColor(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperBackgroundColor` instead
    ///
    pub const QBaseBackgroundColor = SuperBackgroundColor;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#backgroundColor)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    pub fn SuperBackgroundColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QAccessibleApplication_SuperBackgroundColor(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#backgroundColor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAccessibleApplication`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QColor `
    ///
    pub fn OnBackgroundColor(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QColor) void {
        qtc.QAccessibleApplication_OnBackgroundColor(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#virtual_hook)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn VirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.QAccessibleApplication_VirtualHook(@ptrCast(self), @bitCast(id), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `SuperVirtualHook` instead
    ///
    pub const QBaseVirtualHook = SuperVirtualHook;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#virtual_hook)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn SuperVirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.QAccessibleApplication_SuperVirtualHook(@ptrCast(self), @bitCast(id), @ptrCast(data));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#virtual_hook)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAccessibleApplication`
    ///
    /// ` callback: *const fn (self: QtC.QAccessibleApplication, id: i32, data: ?*anyopaque) callconv(.c) void `
    ///
    pub fn OnVirtualHook(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QAccessibleApplication_OnVirtualHook(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#interface_cast)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    /// ` param1: qaccessible_base_enums.InterfaceType `
    ///
    pub fn InterfaceCast(self: ?*anyopaque, param1: i32) ?*anyopaque {
        return qtc.QAccessibleApplication_InterfaceCast(@ptrCast(self), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `SuperInterfaceCast` instead
    ///
    pub const QBaseInterfaceCast = SuperInterfaceCast;

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#interface_cast)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    /// ` param1: qaccessible_base_enums.InterfaceType `
    ///
    pub fn SuperInterfaceCast(self: ?*anyopaque, param1: i32) ?*anyopaque {
        return qtc.QAccessibleApplication_SuperInterfaceCast(@ptrCast(self), @bitCast(param1));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#interface_cast)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QAccessibleApplication`
    ///
    /// ` callback: *const fn (self: QtC.QAccessibleApplication, param1: qaccessible_base_enums.InterfaceType) callconv(.c) ?*anyopaque `
    ///
    pub fn OnInterfaceCast(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) ?*anyopaque) void {
        qtc.QAccessibleApplication_OnInterfaceCast(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }
    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#dtor.QAccessibleApplication)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QAccessibleApplication `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QAccessibleApplication_Delete(@ptrCast(self));
    }
};
