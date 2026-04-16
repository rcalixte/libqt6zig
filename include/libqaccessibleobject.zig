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

    /// New constructs a new QAccessibleObject object.
    ///
    /// ## Parameter(s):
    ///
    /// ` object: QObject `
    ///
    pub fn New(object: anytype) QAccessibleObject {
        comptime _ = @TypeOf(object)._is_QObject;
        return .{ .ptr = qtc.QAccessibleObject_new(@ptrCast(object.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    pub fn IsValid(self: QAccessibleObject) bool {
        return qtc.QAccessibleObject_IsValid(@ptrCast(self.ptr));
    }

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
    pub fn OnIsValid(self: QAccessibleObject, callback: *const fn () callconv(.c) bool) void {
        qtc.QAccessibleObject_OnIsValid(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAccessibleObject `
    ///
    pub fn SuperIsValid(self: QAccessibleObject) bool {
        return qtc.QAccessibleObject_SuperIsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    pub fn Object(self: QAccessibleObject) QObject {
        return .{ .ptr = qtc.QAccessibleObject_Object(@ptrCast(self.ptr)) };
    }

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
    pub fn OnObject(self: QAccessibleObject, callback: *const fn () callconv(.c) QObject) void {
        qtc.QAccessibleObject_OnObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAccessibleObject `
    ///
    pub fn SuperObject(self: QAccessibleObject) QObject {
        return .{ .ptr = qtc.QAccessibleObject_SuperObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    pub fn Rect(self: QAccessibleObject) QRect {
        return .{ .ptr = qtc.QAccessibleObject_Rect(@ptrCast(self.ptr)) };
    }

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
    pub fn OnRect(self: QAccessibleObject, callback: *const fn () callconv(.c) QRect) void {
        qtc.QAccessibleObject_OnRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAccessibleObject `
    ///
    pub fn SuperRect(self: QAccessibleObject) QRect {
        return .{ .ptr = qtc.QAccessibleObject_SuperRect(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleobject.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    /// ` t: qaccessible_base_enums.Text `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: QAccessibleObject, t: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QAccessibleObject_SetText(@ptrCast(self.ptr), @bitCast(t), text_str);
    }

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
    pub fn OnSetText(self: QAccessibleObject, callback: *const fn (QAccessibleObject, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QAccessibleObject_OnSetText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAccessibleObject `
    ///
    /// ` t: qaccessible_base_enums.Text `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SuperSetText(self: QAccessibleObject, t: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QAccessibleObject_SuperSetText(@ptrCast(self.ptr), @bitCast(t), text_str);
    }

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
    pub fn ChildAt(self: QAccessibleObject, x: i32, y: i32) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleObject_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

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
    pub fn OnChildAt(self: QAccessibleObject, callback: *const fn (QAccessibleObject, i32, i32) callconv(.c) QAccessibleInterface) void {
        qtc.QAccessibleObject_OnChildAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAccessibleObject `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn SuperChildAt(self: QAccessibleObject, x: i32, y: i32) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleObject_SuperChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#textInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    pub fn TextInterface(self: QAccessibleObject) QAccessibleTextInterface {
        return .{ .ptr = qtc.QAccessibleInterface_TextInterface(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#editableTextInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    pub fn EditableTextInterface(self: QAccessibleObject) QAccessibleEditableTextInterface {
        return .{ .ptr = qtc.QAccessibleInterface_EditableTextInterface(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#valueInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    pub fn ValueInterface(self: QAccessibleObject) QAccessibleValueInterface {
        return .{ .ptr = qtc.QAccessibleInterface_ValueInterface(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#actionInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    pub fn ActionInterface(self: QAccessibleObject) QAccessibleActionInterface {
        return .{ .ptr = qtc.QAccessibleInterface_ActionInterface(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#imageInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    pub fn ImageInterface(self: QAccessibleObject) QAccessibleImageInterface {
        return .{ .ptr = qtc.QAccessibleInterface_ImageInterface(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    pub fn TableInterface(self: QAccessibleObject) QAccessibleTableInterface {
        return .{ .ptr = qtc.QAccessibleInterface_TableInterface(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableCellInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    pub fn TableCellInterface(self: QAccessibleObject) QAccessibleTableCellInterface {
        return .{ .ptr = qtc.QAccessibleInterface_TableCellInterface(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#hyperlinkInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    pub fn HyperlinkInterface(self: QAccessibleObject) QAccessibleHyperlinkInterface {
        return .{ .ptr = qtc.QAccessibleInterface_HyperlinkInterface(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#selectionInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    pub fn SelectionInterface(self: QAccessibleObject) QAccessibleSelectionInterface {
        return .{ .ptr = qtc.QAccessibleInterface_SelectionInterface(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#attributesInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleObject `
    ///
    pub fn AttributesInterface(self: QAccessibleObject) QAccessibleAttributesInterface {
        return .{ .ptr = qtc.QAccessibleInterface_AttributesInterface(@ptrCast(self.ptr)) };
    }

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
    pub fn Window(self: QAccessibleObject) QWindow {
        return .{ .ptr = qtc.QAccessibleObject_Window(@ptrCast(self.ptr)) };
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
    /// ` self: QAccessibleObject `
    ///
    pub fn SuperWindow(self: QAccessibleObject) QWindow {
        return .{ .ptr = qtc.QAccessibleObject_SuperWindow(@ptrCast(self.ptr)) };
    }

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
    pub fn OnWindow(self: QAccessibleObject, callback: *const fn () callconv(.c) QWindow) void {
        qtc.QAccessibleObject_OnWindow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Relations(self: QAccessibleObject, allocator: std.mem.Allocator, match: i32) []Struct_QAccessibleInterface_i32 {
        const _arr: qtc.libqt_list = qtc.QAccessibleObject_Relations(@ptrCast(self.ptr), @bitCast(match));
        const _data: [*]Struct_QAccessibleInterface_i32 = @ptrCast(@alignCast(_arr.data));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Struct_QAccessibleInterface_i32, _arr.len) catch @panic("qaccessibleobject.Relations: Memory allocation failed");
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
    /// ` self: QAccessibleObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` match: flag of qaccessible_base_enums.RelationFlag `
    ///
    pub fn SuperRelations(self: QAccessibleObject, allocator: std.mem.Allocator, match: i32) []Struct_QAccessibleInterface_i32 {
        const _arr: qtc.libqt_list = qtc.QAccessibleObject_SuperRelations(@ptrCast(self.ptr), @bitCast(match));
        const _data: [*]Struct_QAccessibleInterface_i32 = @ptrCast(@alignCast(_arr.data));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Struct_QAccessibleInterface_i32, _arr.len) catch @panic("qaccessibleobject.Relations: Memory allocation failed");
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

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
    pub fn OnRelations(self: QAccessibleObject, callback: *const fn (QAccessibleObject, i32) callconv(.c) qtc.libqt_list) void {
        qtc.QAccessibleObject_OnRelations(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn FocusChild(self: QAccessibleObject) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleObject_FocusChild(@ptrCast(self.ptr)) };
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
    /// ` self: QAccessibleObject `
    ///
    pub fn SuperFocusChild(self: QAccessibleObject) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleObject_SuperFocusChild(@ptrCast(self.ptr)) };
    }

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
    pub fn OnFocusChild(self: QAccessibleObject, callback: *const fn () callconv(.c) QAccessibleInterface) void {
        qtc.QAccessibleObject_OnFocusChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Parent(self: QAccessibleObject) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleObject_Parent(@ptrCast(self.ptr)) };
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
    /// ` self: QAccessibleObject `
    ///
    pub fn SuperParent(self: QAccessibleObject) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleObject_SuperParent(@ptrCast(self.ptr)) };
    }

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
    pub fn OnParent(self: QAccessibleObject, callback: *const fn () callconv(.c) QAccessibleInterface) void {
        qtc.QAccessibleObject_OnParent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Child(self: QAccessibleObject, index: i32) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleObject_Child(@ptrCast(self.ptr), @bitCast(index)) };
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
    /// ` self: QAccessibleObject `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperChild(self: QAccessibleObject, index: i32) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleObject_SuperChild(@ptrCast(self.ptr), @bitCast(index)) };
    }

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
    pub fn OnChild(self: QAccessibleObject, callback: *const fn (QAccessibleObject, i32) callconv(.c) QAccessibleInterface) void {
        qtc.QAccessibleObject_OnChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ChildCount(self: QAccessibleObject) i32 {
        return qtc.QAccessibleObject_ChildCount(@ptrCast(self.ptr));
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
    /// ` self: QAccessibleObject `
    ///
    pub fn SuperChildCount(self: QAccessibleObject) i32 {
        return qtc.QAccessibleObject_SuperChildCount(@ptrCast(self.ptr));
    }

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
    pub fn OnChildCount(self: QAccessibleObject, callback: *const fn () callconv(.c) i32) void {
        qtc.QAccessibleObject_OnChildCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IndexOfChild(self: QAccessibleObject, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QAccessibleInterface;
        return qtc.QAccessibleObject_IndexOfChild(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QAccessibleObject `
    ///
    /// ` param1: QAccessibleInterface `
    ///
    pub fn SuperIndexOfChild(self: QAccessibleObject, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QAccessibleInterface;
        return qtc.QAccessibleObject_SuperIndexOfChild(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnIndexOfChild(self: QAccessibleObject, callback: *const fn (QAccessibleObject, QAccessibleInterface) callconv(.c) i32) void {
        qtc.QAccessibleObject_OnIndexOfChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Text(self: QAccessibleObject, allocator: std.mem.Allocator, t: i32) []const u8 {
        var _str = qtc.QAccessibleObject_Text(@ptrCast(self.ptr), @bitCast(t));
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
    /// ` self: QAccessibleObject `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` t: qaccessible_base_enums.Text `
    ///
    pub fn SuperText(self: QAccessibleObject, allocator: std.mem.Allocator, t: i32) []const u8 {
        var _str = qtc.QAccessibleObject_SuperText(@ptrCast(self.ptr), @bitCast(t));
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
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleObject`
    ///
    /// ` callback: *const fn (self: QAccessibleObject, t: qaccessible_base_enums.Text) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnText(self: QAccessibleObject, callback: *const fn (QAccessibleObject, i32) callconv(.c) [*:0]const u8) void {
        qtc.QAccessibleObject_OnText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Role(self: QAccessibleObject) i32 {
        return qtc.QAccessibleObject_Role(@ptrCast(self.ptr));
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
    /// ` self: QAccessibleObject `
    ///
    /// ## Returns:
    ///
    /// ` qaccessible_base_enums.Role `
    ///
    pub fn SuperRole(self: QAccessibleObject) i32 {
        return qtc.QAccessibleObject_SuperRole(@ptrCast(self.ptr));
    }

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
    pub fn OnRole(self: QAccessibleObject, callback: *const fn () callconv(.c) i32) void {
        qtc.QAccessibleObject_OnRole(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn State(self: QAccessibleObject) QAccessible__State {
        return .{ .ptr = qtc.QAccessibleObject_State(@ptrCast(self.ptr)) };
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
    /// ` self: QAccessibleObject `
    ///
    pub fn SuperState(self: QAccessibleObject) QAccessible__State {
        return .{ .ptr = qtc.QAccessibleObject_SuperState(@ptrCast(self.ptr)) };
    }

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
    pub fn OnState(self: QAccessibleObject, callback: *const fn () callconv(.c) QAccessible__State) void {
        qtc.QAccessibleObject_OnState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ForegroundColor(self: QAccessibleObject) QColor {
        return .{ .ptr = qtc.QAccessibleObject_ForegroundColor(@ptrCast(self.ptr)) };
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
    /// ` self: QAccessibleObject `
    ///
    pub fn SuperForegroundColor(self: QAccessibleObject) QColor {
        return .{ .ptr = qtc.QAccessibleObject_SuperForegroundColor(@ptrCast(self.ptr)) };
    }

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
    pub fn OnForegroundColor(self: QAccessibleObject, callback: *const fn () callconv(.c) QColor) void {
        qtc.QAccessibleObject_OnForegroundColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn BackgroundColor(self: QAccessibleObject) QColor {
        return .{ .ptr = qtc.QAccessibleObject_BackgroundColor(@ptrCast(self.ptr)) };
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
    /// ` self: QAccessibleObject `
    ///
    pub fn SuperBackgroundColor(self: QAccessibleObject) QColor {
        return .{ .ptr = qtc.QAccessibleObject_SuperBackgroundColor(@ptrCast(self.ptr)) };
    }

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
    pub fn OnBackgroundColor(self: QAccessibleObject, callback: *const fn () callconv(.c) QColor) void {
        qtc.QAccessibleObject_OnBackgroundColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn VirtualHook(self: QAccessibleObject, id: i32, data: ?*anyopaque) void {
        qtc.QAccessibleObject_VirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
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
    /// ` self: QAccessibleObject `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn SuperVirtualHook(self: QAccessibleObject, id: i32, data: ?*anyopaque) void {
        qtc.QAccessibleObject_SuperVirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

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
    pub fn OnVirtualHook(self: QAccessibleObject, callback: *const fn (QAccessibleObject, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QAccessibleObject_OnVirtualHook(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn InterfaceCast(self: QAccessibleObject, param1: i32) ?*anyopaque {
        return qtc.QAccessibleObject_InterfaceCast(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QAccessibleObject `
    ///
    /// ` param1: qaccessible_base_enums.InterfaceType `
    ///
    pub fn SuperInterfaceCast(self: QAccessibleObject, param1: i32) ?*anyopaque {
        return qtc.QAccessibleObject_SuperInterfaceCast(@ptrCast(self.ptr), @bitCast(param1));
    }

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
    pub fn OnInterfaceCast(self: QAccessibleObject, callback: *const fn (QAccessibleObject, i32) callconv(.c) ?*anyopaque) void {
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

    /// New constructs a new QAccessibleApplication object.
    ///
    pub fn New() QAccessibleApplication {
        return .{ .ptr = qtc.QAccessibleApplication_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#window)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    pub fn Window(self: QAccessibleApplication) QWindow {
        return .{ .ptr = qtc.QAccessibleApplication_Window(@ptrCast(self.ptr)) };
    }

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
    pub fn OnWindow(self: QAccessibleApplication, callback: *const fn () callconv(.c) QWindow) void {
        qtc.QAccessibleApplication_OnWindow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAccessibleApplication `
    ///
    pub fn SuperWindow(self: QAccessibleApplication) QWindow {
        return .{ .ptr = qtc.QAccessibleApplication_SuperWindow(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#childCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    pub fn ChildCount(self: QAccessibleApplication) i32 {
        return qtc.QAccessibleApplication_ChildCount(@ptrCast(self.ptr));
    }

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
    pub fn OnChildCount(self: QAccessibleApplication, callback: *const fn () callconv(.c) i32) void {
        qtc.QAccessibleApplication_OnChildCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAccessibleApplication `
    ///
    pub fn SuperChildCount(self: QAccessibleApplication) i32 {
        return qtc.QAccessibleApplication_SuperChildCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#indexOfChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    /// ` param1: QAccessibleInterface `
    ///
    pub fn IndexOfChild(self: QAccessibleApplication, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QAccessibleInterface;
        return qtc.QAccessibleApplication_IndexOfChild(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnIndexOfChild(self: QAccessibleApplication, callback: *const fn (QAccessibleApplication, QAccessibleInterface) callconv(.c) i32) void {
        qtc.QAccessibleApplication_OnIndexOfChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAccessibleApplication `
    ///
    /// ` param1: QAccessibleInterface `
    ///
    pub fn SuperIndexOfChild(self: QAccessibleApplication, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QAccessibleInterface;
        return qtc.QAccessibleApplication_SuperIndexOfChild(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#focusChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    pub fn FocusChild(self: QAccessibleApplication) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleApplication_FocusChild(@ptrCast(self.ptr)) };
    }

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
    pub fn OnFocusChild(self: QAccessibleApplication, callback: *const fn () callconv(.c) QAccessibleInterface) void {
        qtc.QAccessibleApplication_OnFocusChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAccessibleApplication `
    ///
    pub fn SuperFocusChild(self: QAccessibleApplication) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleApplication_SuperFocusChild(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    pub fn Parent(self: QAccessibleApplication) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleApplication_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn OnParent(self: QAccessibleApplication, callback: *const fn () callconv(.c) QAccessibleInterface) void {
        qtc.QAccessibleApplication_OnParent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAccessibleApplication `
    ///
    pub fn SuperParent(self: QAccessibleApplication) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleApplication_SuperParent(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#child)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    /// ` index: i32 `
    ///
    pub fn Child(self: QAccessibleApplication, index: i32) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleApplication_Child(@ptrCast(self.ptr), @bitCast(index)) };
    }

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
    pub fn OnChild(self: QAccessibleApplication, callback: *const fn (QAccessibleApplication, i32) callconv(.c) QAccessibleInterface) void {
        qtc.QAccessibleApplication_OnChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAccessibleApplication `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperChild(self: QAccessibleApplication, index: i32) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleApplication_SuperChild(@ptrCast(self.ptr), @bitCast(index)) };
    }

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
    pub fn Text(self: QAccessibleApplication, allocator: std.mem.Allocator, t: i32) []const u8 {
        var _str = qtc.QAccessibleApplication_Text(@ptrCast(self.ptr), @bitCast(t));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleapplication.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#text)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleApplication `
    ///
    /// ` callback: *const fn (self: QAccessibleApplication, t: qaccessible_base_enums.Text) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnText(self: QAccessibleApplication, callback: *const fn (QAccessibleApplication, i32) callconv(.c) [*:0]const u8) void {
        qtc.QAccessibleApplication_OnText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAccessibleApplication `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` t: qaccessible_base_enums.Text `
    ///
    pub fn SuperText(self: QAccessibleApplication, allocator: std.mem.Allocator, t: i32) []const u8 {
        var _str = qtc.QAccessibleApplication_SuperText(@ptrCast(self.ptr), @bitCast(t));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleapplication.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn Role(self: QAccessibleApplication) i32 {
        return qtc.QAccessibleApplication_Role(@ptrCast(self.ptr));
    }

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
    pub fn OnRole(self: QAccessibleApplication, callback: *const fn () callconv(.c) i32) void {
        qtc.QAccessibleApplication_OnRole(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAccessibleApplication `
    ///
    /// ## Returns:
    ///
    /// ` qaccessible_base_enums.Role `
    ///
    pub fn SuperRole(self: QAccessibleApplication) i32 {
        return qtc.QAccessibleApplication_SuperRole(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleapplication.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    pub fn State(self: QAccessibleApplication) QAccessible__State {
        return .{ .ptr = qtc.QAccessibleApplication_State(@ptrCast(self.ptr)) };
    }

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
    pub fn OnState(self: QAccessibleApplication, callback: *const fn () callconv(.c) QAccessible__State) void {
        qtc.QAccessibleApplication_OnState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAccessibleApplication `
    ///
    pub fn SuperState(self: QAccessibleApplication) QAccessible__State {
        return .{ .ptr = qtc.QAccessibleApplication_SuperState(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#textInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    pub fn TextInterface(self: QAccessibleApplication) QAccessibleTextInterface {
        return .{ .ptr = qtc.QAccessibleInterface_TextInterface(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#editableTextInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    pub fn EditableTextInterface(self: QAccessibleApplication) QAccessibleEditableTextInterface {
        return .{ .ptr = qtc.QAccessibleInterface_EditableTextInterface(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#valueInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    pub fn ValueInterface(self: QAccessibleApplication) QAccessibleValueInterface {
        return .{ .ptr = qtc.QAccessibleInterface_ValueInterface(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#actionInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    pub fn ActionInterface(self: QAccessibleApplication) QAccessibleActionInterface {
        return .{ .ptr = qtc.QAccessibleInterface_ActionInterface(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#imageInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    pub fn ImageInterface(self: QAccessibleApplication) QAccessibleImageInterface {
        return .{ .ptr = qtc.QAccessibleInterface_ImageInterface(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    pub fn TableInterface(self: QAccessibleApplication) QAccessibleTableInterface {
        return .{ .ptr = qtc.QAccessibleInterface_TableInterface(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableCellInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    pub fn TableCellInterface(self: QAccessibleApplication) QAccessibleTableCellInterface {
        return .{ .ptr = qtc.QAccessibleInterface_TableCellInterface(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#hyperlinkInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    pub fn HyperlinkInterface(self: QAccessibleApplication) QAccessibleHyperlinkInterface {
        return .{ .ptr = qtc.QAccessibleInterface_HyperlinkInterface(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#selectionInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    pub fn SelectionInterface(self: QAccessibleApplication) QAccessibleSelectionInterface {
        return .{ .ptr = qtc.QAccessibleInterface_SelectionInterface(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#attributesInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleApplication `
    ///
    pub fn AttributesInterface(self: QAccessibleApplication) QAccessibleAttributesInterface {
        return .{ .ptr = qtc.QAccessibleInterface_AttributesInterface(@ptrCast(self.ptr)) };
    }

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
    pub fn IsValid(self: QAccessibleApplication) bool {
        return qtc.QAccessibleApplication_IsValid(@ptrCast(self.ptr));
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
    /// ` self: QAccessibleApplication `
    ///
    pub fn SuperIsValid(self: QAccessibleApplication) bool {
        return qtc.QAccessibleApplication_SuperIsValid(@ptrCast(self.ptr));
    }

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
    pub fn OnIsValid(self: QAccessibleApplication, callback: *const fn () callconv(.c) bool) void {
        qtc.QAccessibleApplication_OnIsValid(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Object(self: QAccessibleApplication) QObject {
        return .{ .ptr = qtc.QAccessibleApplication_Object(@ptrCast(self.ptr)) };
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
    /// ` self: QAccessibleApplication `
    ///
    pub fn SuperObject(self: QAccessibleApplication) QObject {
        return .{ .ptr = qtc.QAccessibleApplication_SuperObject(@ptrCast(self.ptr)) };
    }

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
    pub fn OnObject(self: QAccessibleApplication, callback: *const fn () callconv(.c) QObject) void {
        qtc.QAccessibleApplication_OnObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Rect(self: QAccessibleApplication) QRect {
        return .{ .ptr = qtc.QAccessibleApplication_Rect(@ptrCast(self.ptr)) };
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
    /// ` self: QAccessibleApplication `
    ///
    pub fn SuperRect(self: QAccessibleApplication) QRect {
        return .{ .ptr = qtc.QAccessibleApplication_SuperRect(@ptrCast(self.ptr)) };
    }

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
    pub fn OnRect(self: QAccessibleApplication, callback: *const fn () callconv(.c) QRect) void {
        qtc.QAccessibleApplication_OnRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: QAccessibleApplication, t: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QAccessibleApplication_SetText(@ptrCast(self.ptr), @bitCast(t), text_str);
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
    /// ` self: QAccessibleApplication `
    ///
    /// ` t: qaccessible_base_enums.Text `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SuperSetText(self: QAccessibleApplication, t: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QAccessibleApplication_SuperSetText(@ptrCast(self.ptr), @bitCast(t), text_str);
    }

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
    pub fn OnSetText(self: QAccessibleApplication, callback: *const fn (QAccessibleApplication, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QAccessibleApplication_OnSetText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ChildAt(self: QAccessibleApplication, x: i32, y: i32) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleApplication_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
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
    /// ` self: QAccessibleApplication `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn SuperChildAt(self: QAccessibleApplication, x: i32, y: i32) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleApplication_SuperChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

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
    pub fn OnChildAt(self: QAccessibleApplication, callback: *const fn (QAccessibleApplication, i32, i32) callconv(.c) QAccessibleInterface) void {
        qtc.QAccessibleApplication_OnChildAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Relations(self: QAccessibleApplication, allocator: std.mem.Allocator, match: i32) []Struct_QAccessibleInterface_i32 {
        const _arr: qtc.libqt_list = qtc.QAccessibleApplication_Relations(@ptrCast(self.ptr), @bitCast(match));
        const _data: [*]Struct_QAccessibleInterface_i32 = @ptrCast(@alignCast(_arr.data));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Struct_QAccessibleInterface_i32, _arr.len) catch @panic("qaccessibleapplication.Relations: Memory allocation failed");
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
    /// ` self: QAccessibleApplication `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` match: flag of qaccessible_base_enums.RelationFlag `
    ///
    pub fn SuperRelations(self: QAccessibleApplication, allocator: std.mem.Allocator, match: i32) []Struct_QAccessibleInterface_i32 {
        const _arr: qtc.libqt_list = qtc.QAccessibleApplication_SuperRelations(@ptrCast(self.ptr), @bitCast(match));
        const _data: [*]Struct_QAccessibleInterface_i32 = @ptrCast(@alignCast(_arr.data));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Struct_QAccessibleInterface_i32, _arr.len) catch @panic("qaccessibleapplication.Relations: Memory allocation failed");
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

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
    pub fn OnRelations(self: QAccessibleApplication, callback: *const fn (QAccessibleApplication, i32) callconv(.c) qtc.libqt_list) void {
        qtc.QAccessibleApplication_OnRelations(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ForegroundColor(self: QAccessibleApplication) QColor {
        return .{ .ptr = qtc.QAccessibleApplication_ForegroundColor(@ptrCast(self.ptr)) };
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
    /// ` self: QAccessibleApplication `
    ///
    pub fn SuperForegroundColor(self: QAccessibleApplication) QColor {
        return .{ .ptr = qtc.QAccessibleApplication_SuperForegroundColor(@ptrCast(self.ptr)) };
    }

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
    pub fn OnForegroundColor(self: QAccessibleApplication, callback: *const fn () callconv(.c) QColor) void {
        qtc.QAccessibleApplication_OnForegroundColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn BackgroundColor(self: QAccessibleApplication) QColor {
        return .{ .ptr = qtc.QAccessibleApplication_BackgroundColor(@ptrCast(self.ptr)) };
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
    /// ` self: QAccessibleApplication `
    ///
    pub fn SuperBackgroundColor(self: QAccessibleApplication) QColor {
        return .{ .ptr = qtc.QAccessibleApplication_SuperBackgroundColor(@ptrCast(self.ptr)) };
    }

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
    pub fn OnBackgroundColor(self: QAccessibleApplication, callback: *const fn () callconv(.c) QColor) void {
        qtc.QAccessibleApplication_OnBackgroundColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn VirtualHook(self: QAccessibleApplication, id: i32, data: ?*anyopaque) void {
        qtc.QAccessibleApplication_VirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
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
    /// ` self: QAccessibleApplication `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn SuperVirtualHook(self: QAccessibleApplication, id: i32, data: ?*anyopaque) void {
        qtc.QAccessibleApplication_SuperVirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

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
    pub fn OnVirtualHook(self: QAccessibleApplication, callback: *const fn (QAccessibleApplication, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QAccessibleApplication_OnVirtualHook(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn InterfaceCast(self: QAccessibleApplication, param1: i32) ?*anyopaque {
        return qtc.QAccessibleApplication_InterfaceCast(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QAccessibleApplication `
    ///
    /// ` param1: qaccessible_base_enums.InterfaceType `
    ///
    pub fn SuperInterfaceCast(self: QAccessibleApplication, param1: i32) ?*anyopaque {
        return qtc.QAccessibleApplication_SuperInterfaceCast(@ptrCast(self.ptr), @bitCast(param1));
    }

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
    pub fn OnInterfaceCast(self: QAccessibleApplication, callback: *const fn (QAccessibleApplication, i32) callconv(.c) ?*anyopaque) void {
        qtc.QAccessibleApplication_OnInterfaceCast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAccessibleApplication `
    ///
    pub fn Delete(self: QAccessibleApplication) void {
        qtc.QAccessibleApplication_Delete(@ptrCast(self.ptr));
    }
};
