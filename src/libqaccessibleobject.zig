const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qaccessible_base_enums = @import("libqaccessible_base.zig").enums;
const std = @import("std");
pub const struct_qtcqaccessibleinterface_i32 = struct { first: QtC.QAccessibleInterface, second: i32 };
pub const struct_qtcqaccessibleinterface_i64 = struct { first: QtC.QAccessibleInterface, second: i64 };

/// https://doc.qt.io/qt-6/qaccessibleobject.html
pub const qaccessibleobject = struct {
    /// New constructs a new QAccessibleObject object.
    ///
    /// ``` object: QtC.QObject ```
    pub fn New(object: ?*anyopaque) QtC.QAccessibleObject {
        return qtc.QAccessibleObject_new(@ptrCast(object));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#isValid)
    ///
    /// ``` self: QtC.QAccessibleObject ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QAccessibleObject_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#isValid)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAccessibleObject, slot: fn () callconv(.c) bool ```
    pub fn OnIsValid(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QAccessibleObject_OnIsValid(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#isValid)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAccessibleObject ```
    pub fn QBaseIsValid(self: ?*anyopaque) bool {
        return qtc.QAccessibleObject_QBaseIsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
    ///
    /// ``` self: QtC.QAccessibleObject ```
    pub fn Object(self: ?*anyopaque) QtC.QObject {
        return qtc.QAccessibleObject_Object(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAccessibleObject, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnObject(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QAccessibleObject_OnObject(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAccessibleObject ```
    pub fn QBaseObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QAccessibleObject_QBaseObject(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#rect)
    ///
    /// ``` self: QtC.QAccessibleObject ```
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QAccessibleObject_Rect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#rect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAccessibleObject, slot: fn () callconv(.c) QtC.QRect ```
    pub fn OnRect(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QRect) void {
        qtc.QAccessibleObject_OnRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#rect)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAccessibleObject ```
    pub fn QBaseRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QAccessibleObject_QBaseRect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#setText)
    ///
    /// ``` self: QtC.QAccessibleObject, t: qaccessible_base_enums.Text, text: []const u8 ```
    pub fn SetText(self: ?*anyopaque, t: i64, text: []const u8) void {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QAccessibleObject_SetText(@ptrCast(self), @intCast(t), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#setText)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAccessibleObject, slot: fn (self: QtC.QAccessibleObject, t: qaccessible_base_enums.Text, text: []const u8) callconv(.c) void ```
    pub fn OnSetText(self: ?*anyopaque, slot: fn (?*anyopaque, i64, []const u8) callconv(.c) void) void {
        qtc.QAccessibleObject_OnSetText(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#setText)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAccessibleObject, t: qaccessible_base_enums.Text, text: []const u8 ```
    pub fn QBaseSetText(self: ?*anyopaque, t: i64, text: []const u8) void {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QAccessibleObject_QBaseSetText(@ptrCast(self), @intCast(t), text_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#childAt)
    ///
    /// ``` self: QtC.QAccessibleObject, x: i32, y: i32 ```
    pub fn ChildAt(self: ?*anyopaque, x: i32, y: i32) QtC.QAccessibleInterface {
        return qtc.QAccessibleObject_ChildAt(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#childAt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAccessibleObject, slot: fn (self: QtC.QAccessibleObject, x: i32, y: i32) callconv(.c) QtC.QAccessibleInterface ```
    pub fn OnChildAt(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleObject_OnChildAt(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#childAt)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAccessibleObject, x: i32, y: i32 ```
    pub fn QBaseChildAt(self: ?*anyopaque, x: i32, y: i32) QtC.QAccessibleInterface {
        return qtc.QAccessibleObject_QBaseChildAt(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#textInterface)
    ///
    /// ``` self: QtC.QAccessibleObject ```
    pub fn TextInterface(self: ?*anyopaque) QtC.QAccessibleTextInterface {
        return qtc.QAccessibleInterface_TextInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#editableTextInterface)
    ///
    /// ``` self: QtC.QAccessibleObject ```
    pub fn EditableTextInterface(self: ?*anyopaque) QtC.QAccessibleEditableTextInterface {
        return qtc.QAccessibleInterface_EditableTextInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#valueInterface)
    ///
    /// ``` self: QtC.QAccessibleObject ```
    pub fn ValueInterface(self: ?*anyopaque) QtC.QAccessibleValueInterface {
        return qtc.QAccessibleInterface_ValueInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#actionInterface)
    ///
    /// ``` self: QtC.QAccessibleObject ```
    pub fn ActionInterface(self: ?*anyopaque) QtC.QAccessibleActionInterface {
        return qtc.QAccessibleInterface_ActionInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#imageInterface)
    ///
    /// ``` self: QtC.QAccessibleObject ```
    pub fn ImageInterface(self: ?*anyopaque) QtC.QAccessibleImageInterface {
        return qtc.QAccessibleInterface_ImageInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableInterface)
    ///
    /// ``` self: QtC.QAccessibleObject ```
    pub fn TableInterface(self: ?*anyopaque) QtC.QAccessibleTableInterface {
        return qtc.QAccessibleInterface_TableInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableCellInterface)
    ///
    /// ``` self: QtC.QAccessibleObject ```
    pub fn TableCellInterface(self: ?*anyopaque) QtC.QAccessibleTableCellInterface {
        return qtc.QAccessibleInterface_TableCellInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#hyperlinkInterface)
    ///
    /// ``` self: QtC.QAccessibleObject ```
    pub fn HyperlinkInterface(self: ?*anyopaque) QtC.QAccessibleHyperlinkInterface {
        return qtc.QAccessibleInterface_HyperlinkInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#window)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleObject ```
    pub fn Window(self: ?*anyopaque) QtC.QWindow {
        return qtc.QAccessibleObject_Window(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#window)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleObject ```
    pub fn QBaseWindow(self: ?*anyopaque) QtC.QWindow {
        return qtc.QAccessibleObject_QBaseWindow(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#window)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleObject, slot: fn () callconv(.c) QtC.QWindow ```
    pub fn OnWindow(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QWindow) void {
        qtc.QAccessibleObject_OnWindow(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#relations)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleObject, match: i32, allocator: std.mem.Allocator ```
    pub fn Relations(self: ?*anyopaque, match: i64, allocator: std.mem.Allocator) []struct_qtcqaccessibleinterface_i64 {
        const _arr: qtc.struct_libqt_list = qtc.QAccessibleObject_Relations(@ptrCast(self), @intCast(match));
        defer {
            const _pair: [*]qtc.struct_libqt_pair = @ptrCast(@alignCast(_arr.data));
            for (0.._arr.len) |i| {
                qtc.libqt_free(_pair[i].first);
                qtc.libqt_free(_pair[i].second);
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(struct_qtcqaccessibleinterface_i32, _arr.len) catch @panic("qaccessibleobject.Relations: Memory allocation failed");
        const _data: [*]struct_qtcqaccessibleinterface_i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#relations)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleObject, match: i32, allocator: std.mem.Allocator ```
    pub fn QBaseRelations(self: ?*anyopaque, match: i64, allocator: std.mem.Allocator) []struct_qtcqaccessibleinterface_i64 {
        const _arr: qtc.struct_libqt_list = qtc.QAccessibleObject_QBaseRelations(@ptrCast(self), @intCast(match));
        defer {
            const _pair: [*]qtc.struct_libqt_pair = @ptrCast(@alignCast(_arr.data));
            for (0.._arr.len) |i| {
                qtc.libqt_free(_pair[i].first);
                qtc.libqt_free(_pair[i].second);
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(struct_qtcqaccessibleinterface_i32, _arr.len) catch @panic("qaccessibleobject.Relations: Memory allocation failed");
        const _data: [*]struct_qtcqaccessibleinterface_i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#relations)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleObject, slot: fn (self: QtC.QAccessibleObject, match: i32) callconv(.c) []struct_qtcqaccessibleinterface_i64 ```
    pub fn OnRelations(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) []struct_qtcqaccessibleinterface_i64) void {
        qtc.QAccessibleObject_OnRelations(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#focusChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleObject ```
    pub fn FocusChild(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleObject_FocusChild(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#focusChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleObject ```
    pub fn QBaseFocusChild(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleObject_QBaseFocusChild(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#focusChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleObject, slot: fn () callconv(.c) QtC.QAccessibleInterface ```
    pub fn OnFocusChild(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleObject_OnFocusChild(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#parent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleObject ```
    pub fn Parent(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleObject_Parent(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#parent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleObject ```
    pub fn QBaseParent(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleObject_QBaseParent(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#parent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleObject, slot: fn () callconv(.c) QtC.QAccessibleInterface ```
    pub fn OnParent(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleObject_OnParent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#child)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleObject, index: i32 ```
    pub fn Child(self: ?*anyopaque, index: i32) QtC.QAccessibleInterface {
        return qtc.QAccessibleObject_Child(@ptrCast(self), @intCast(index));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#child)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleObject, index: i32 ```
    pub fn QBaseChild(self: ?*anyopaque, index: i32) QtC.QAccessibleInterface {
        return qtc.QAccessibleObject_QBaseChild(@ptrCast(self), @intCast(index));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#child)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleObject, slot: fn (self: QtC.QAccessibleObject, index: i32) callconv(.c) QtC.QAccessibleInterface ```
    pub fn OnChild(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleObject_OnChild(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#childCount)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleObject ```
    pub fn ChildCount(self: ?*anyopaque) i32 {
        return qtc.QAccessibleObject_ChildCount(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#childCount)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleObject ```
    pub fn QBaseChildCount(self: ?*anyopaque) i32 {
        return qtc.QAccessibleObject_QBaseChildCount(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#childCount)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleObject, slot: fn () callconv(.c) i32 ```
    pub fn OnChildCount(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QAccessibleObject_OnChildCount(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#indexOfChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleObject, param1: QtC.QAccessibleInterface ```
    pub fn IndexOfChild(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QAccessibleObject_IndexOfChild(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#indexOfChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleObject, param1: QtC.QAccessibleInterface ```
    pub fn QBaseIndexOfChild(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QAccessibleObject_QBaseIndexOfChild(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#indexOfChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleObject, slot: fn (self: QtC.QAccessibleObject, param1: QtC.QAccessibleInterface) callconv(.c) i32 ```
    pub fn OnIndexOfChild(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QAccessibleObject_OnIndexOfChild(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#text)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleObject, t: qaccessible_base_enums.Text, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, t: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleObject_Text(@ptrCast(self), @intCast(t));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleobject.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#text)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleObject, t: qaccessible_base_enums.Text, allocator: std.mem.Allocator ```
    pub fn QBaseText(self: ?*anyopaque, t: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleObject_QBaseText(@ptrCast(self), @intCast(t));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleobject.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#text)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleObject, slot: fn (self: QtC.QAccessibleObject, t: qaccessible_base_enums.Text) callconv(.c) []const u8 ```
    pub fn OnText(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) []const u8) void {
        qtc.QAccessibleObject_OnText(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#role)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleObject ```
    pub fn Role(self: ?*anyopaque) i64 {
        return qtc.QAccessibleObject_Role(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#role)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleObject ```
    pub fn QBaseRole(self: ?*anyopaque) i64 {
        return qtc.QAccessibleObject_QBaseRole(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#role)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleObject, slot: fn () callconv(.c) i64 ```
    pub fn OnRole(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.QAccessibleObject_OnRole(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#state)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleObject ```
    pub fn State(self: ?*anyopaque) QtC.QAccessible__State {
        return qtc.QAccessibleObject_State(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#state)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleObject ```
    pub fn QBaseState(self: ?*anyopaque) QtC.QAccessible__State {
        return qtc.QAccessibleObject_QBaseState(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#state)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleObject, slot: fn () callconv(.c) QtC.QAccessible__State ```
    pub fn OnState(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QAccessible__State) void {
        qtc.QAccessibleObject_OnState(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#foregroundColor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleObject ```
    pub fn ForegroundColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QAccessibleObject_ForegroundColor(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#foregroundColor)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleObject ```
    pub fn QBaseForegroundColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QAccessibleObject_QBaseForegroundColor(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#foregroundColor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleObject, slot: fn () callconv(.c) QtC.QColor ```
    pub fn OnForegroundColor(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QColor) void {
        qtc.QAccessibleObject_OnForegroundColor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#backgroundColor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleObject ```
    pub fn BackgroundColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QAccessibleObject_BackgroundColor(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#backgroundColor)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleObject ```
    pub fn QBaseBackgroundColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QAccessibleObject_QBaseBackgroundColor(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#backgroundColor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleObject, slot: fn () callconv(.c) QtC.QColor ```
    pub fn OnBackgroundColor(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QColor) void {
        qtc.QAccessibleObject_OnBackgroundColor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#virtual_hook)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleObject, id: i32, data: ?*anyopaque ```
    pub fn VirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.QAccessibleObject_VirtualHook(@ptrCast(self), @intCast(id), data);
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#virtual_hook)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleObject, id: i32, data: ?*anyopaque ```
    pub fn QBaseVirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.QAccessibleObject_QBaseVirtualHook(@ptrCast(self), @intCast(id), data);
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#virtual_hook)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleObject, slot: fn (self: QtC.QAccessibleObject, id: i32, data: ?*anyopaque) callconv(.c) void ```
    pub fn OnVirtualHook(self: ?*anyopaque, slot: fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QAccessibleObject_OnVirtualHook(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#interface_cast)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleObject, param1: qaccessible_base_enums.InterfaceType ```
    pub fn InterfaceCast(self: ?*anyopaque, param1: i64) ?*anyopaque {
        return qtc.QAccessibleObject_InterfaceCast(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#interface_cast)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleObject, param1: qaccessible_base_enums.InterfaceType ```
    pub fn QBaseInterfaceCast(self: ?*anyopaque, param1: i64) ?*anyopaque {
        return qtc.QAccessibleObject_QBaseInterfaceCast(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#interface_cast)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleObject, slot: fn (self: QtC.QAccessibleObject, param1: qaccessible_base_enums.InterfaceType) callconv(.c) ?*anyopaque ```
    pub fn OnInterfaceCast(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) ?*anyopaque) void {
        qtc.QAccessibleObject_OnInterfaceCast(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }
};

/// https://doc.qt.io/qt-6/qaccessibleapplication.html
pub const qaccessibleapplication = struct {
    /// New constructs a new QAccessibleApplication object.
    ///
    ///
    pub fn New() QtC.QAccessibleApplication {
        return qtc.QAccessibleApplication_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#window)
    ///
    /// ``` self: QtC.QAccessibleApplication ```
    pub fn Window(self: ?*anyopaque) QtC.QWindow {
        return qtc.QAccessibleApplication_Window(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#window)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAccessibleApplication, slot: fn () callconv(.c) QtC.QWindow ```
    pub fn OnWindow(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QWindow) void {
        qtc.QAccessibleApplication_OnWindow(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#window)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAccessibleApplication ```
    pub fn QBaseWindow(self: ?*anyopaque) QtC.QWindow {
        return qtc.QAccessibleApplication_QBaseWindow(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#childCount)
    ///
    /// ``` self: QtC.QAccessibleApplication ```
    pub fn ChildCount(self: ?*anyopaque) i32 {
        return qtc.QAccessibleApplication_ChildCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#childCount)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAccessibleApplication, slot: fn () callconv(.c) i32 ```
    pub fn OnChildCount(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QAccessibleApplication_OnChildCount(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#childCount)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAccessibleApplication ```
    pub fn QBaseChildCount(self: ?*anyopaque) i32 {
        return qtc.QAccessibleApplication_QBaseChildCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#indexOfChild)
    ///
    /// ``` self: QtC.QAccessibleApplication, param1: QtC.QAccessibleInterface ```
    pub fn IndexOfChild(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QAccessibleApplication_IndexOfChild(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#indexOfChild)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAccessibleApplication, slot: fn (self: QtC.QAccessibleApplication, param1: QtC.QAccessibleInterface) callconv(.c) i32 ```
    pub fn OnIndexOfChild(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QAccessibleApplication_OnIndexOfChild(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#indexOfChild)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAccessibleApplication, param1: QtC.QAccessibleInterface ```
    pub fn QBaseIndexOfChild(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QAccessibleApplication_QBaseIndexOfChild(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#focusChild)
    ///
    /// ``` self: QtC.QAccessibleApplication ```
    pub fn FocusChild(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleApplication_FocusChild(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#focusChild)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAccessibleApplication, slot: fn () callconv(.c) QtC.QAccessibleInterface ```
    pub fn OnFocusChild(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleApplication_OnFocusChild(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#focusChild)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAccessibleApplication ```
    pub fn QBaseFocusChild(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleApplication_QBaseFocusChild(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#parent)
    ///
    /// ``` self: QtC.QAccessibleApplication ```
    pub fn Parent(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleApplication_Parent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#parent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAccessibleApplication, slot: fn () callconv(.c) QtC.QAccessibleInterface ```
    pub fn OnParent(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleApplication_OnParent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#parent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAccessibleApplication ```
    pub fn QBaseParent(self: ?*anyopaque) QtC.QAccessibleInterface {
        return qtc.QAccessibleApplication_QBaseParent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#child)
    ///
    /// ``` self: QtC.QAccessibleApplication, index: i32 ```
    pub fn Child(self: ?*anyopaque, index: i32) QtC.QAccessibleInterface {
        return qtc.QAccessibleApplication_Child(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#child)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAccessibleApplication, slot: fn (self: QtC.QAccessibleApplication, index: i32) callconv(.c) QtC.QAccessibleInterface ```
    pub fn OnChild(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleApplication_OnChild(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#child)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAccessibleApplication, index: i32 ```
    pub fn QBaseChild(self: ?*anyopaque, index: i32) QtC.QAccessibleInterface {
        return qtc.QAccessibleApplication_QBaseChild(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#text)
    ///
    /// ``` self: QtC.QAccessibleApplication, t: qaccessible_base_enums.Text, allocator: std.mem.Allocator ```
    pub fn Text(self: ?*anyopaque, t: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleApplication_Text(@ptrCast(self), @intCast(t));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleapplication.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#text)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAccessibleApplication, slot: fn (self: QtC.QAccessibleApplication, t: qaccessible_base_enums.Text) callconv(.c) []const u8 ```
    pub fn OnText(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) []const u8) void {
        qtc.QAccessibleApplication_OnText(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#text)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAccessibleApplication, t: qaccessible_base_enums.Text, allocator: std.mem.Allocator ```
    pub fn QBaseText(self: ?*anyopaque, t: i64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleApplication_QBaseText(@ptrCast(self), @intCast(t));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessibleapplication.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#role)
    ///
    /// ``` self: QtC.QAccessibleApplication ```
    pub fn Role(self: ?*anyopaque) i64 {
        return qtc.QAccessibleApplication_Role(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#role)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAccessibleApplication, slot: fn () callconv(.c) i64 ```
    pub fn OnRole(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.QAccessibleApplication_OnRole(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#role)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAccessibleApplication ```
    pub fn QBaseRole(self: ?*anyopaque) i64 {
        return qtc.QAccessibleApplication_QBaseRole(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#state)
    ///
    /// ``` self: QtC.QAccessibleApplication ```
    pub fn State(self: ?*anyopaque) QtC.QAccessible__State {
        return qtc.QAccessibleApplication_State(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#state)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QAccessibleApplication, slot: fn () callconv(.c) QtC.QAccessible__State ```
    pub fn OnState(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QAccessible__State) void {
        qtc.QAccessibleApplication_OnState(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#state)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QAccessibleApplication ```
    pub fn QBaseState(self: ?*anyopaque) QtC.QAccessible__State {
        return qtc.QAccessibleApplication_QBaseState(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#textInterface)
    ///
    /// ``` self: QtC.QAccessibleApplication ```
    pub fn TextInterface(self: ?*anyopaque) QtC.QAccessibleTextInterface {
        return qtc.QAccessibleInterface_TextInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#editableTextInterface)
    ///
    /// ``` self: QtC.QAccessibleApplication ```
    pub fn EditableTextInterface(self: ?*anyopaque) QtC.QAccessibleEditableTextInterface {
        return qtc.QAccessibleInterface_EditableTextInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#valueInterface)
    ///
    /// ``` self: QtC.QAccessibleApplication ```
    pub fn ValueInterface(self: ?*anyopaque) QtC.QAccessibleValueInterface {
        return qtc.QAccessibleInterface_ValueInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#actionInterface)
    ///
    /// ``` self: QtC.QAccessibleApplication ```
    pub fn ActionInterface(self: ?*anyopaque) QtC.QAccessibleActionInterface {
        return qtc.QAccessibleInterface_ActionInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#imageInterface)
    ///
    /// ``` self: QtC.QAccessibleApplication ```
    pub fn ImageInterface(self: ?*anyopaque) QtC.QAccessibleImageInterface {
        return qtc.QAccessibleInterface_ImageInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableInterface)
    ///
    /// ``` self: QtC.QAccessibleApplication ```
    pub fn TableInterface(self: ?*anyopaque) QtC.QAccessibleTableInterface {
        return qtc.QAccessibleInterface_TableInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableCellInterface)
    ///
    /// ``` self: QtC.QAccessibleApplication ```
    pub fn TableCellInterface(self: ?*anyopaque) QtC.QAccessibleTableCellInterface {
        return qtc.QAccessibleInterface_TableCellInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#hyperlinkInterface)
    ///
    /// ``` self: QtC.QAccessibleApplication ```
    pub fn HyperlinkInterface(self: ?*anyopaque) QtC.QAccessibleHyperlinkInterface {
        return qtc.QAccessibleInterface_HyperlinkInterface(@ptrCast(self));
    }

    /// Inherited from QAccessibleObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#isValid)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleApplication ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QAccessibleApplication_IsValid(@ptrCast(self));
    }

    /// Inherited from QAccessibleObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#isValid)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleApplication ```
    pub fn QBaseIsValid(self: ?*anyopaque) bool {
        return qtc.QAccessibleApplication_QBaseIsValid(@ptrCast(self));
    }

    /// Inherited from QAccessibleObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#isValid)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleApplication, slot: fn () callconv(.c) bool ```
    pub fn OnIsValid(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QAccessibleApplication_OnIsValid(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAccessibleObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleApplication ```
    pub fn Object(self: ?*anyopaque) QtC.QObject {
        return qtc.QAccessibleApplication_Object(@ptrCast(self));
    }

    /// Inherited from QAccessibleObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleApplication ```
    pub fn QBaseObject(self: ?*anyopaque) QtC.QObject {
        return qtc.QAccessibleApplication_QBaseObject(@ptrCast(self));
    }

    /// Inherited from QAccessibleObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#object)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleApplication, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnObject(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QAccessibleApplication_OnObject(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAccessibleObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#rect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleApplication ```
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QAccessibleApplication_Rect(@ptrCast(self));
    }

    /// Inherited from QAccessibleObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#rect)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleApplication ```
    pub fn QBaseRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QAccessibleApplication_QBaseRect(@ptrCast(self));
    }

    /// Inherited from QAccessibleObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#rect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleApplication, slot: fn () callconv(.c) QtC.QRect ```
    pub fn OnRect(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QRect) void {
        qtc.QAccessibleApplication_OnRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAccessibleObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#setText)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleApplication, t: qaccessible_base_enums.Text, text: []const u8 ```
    pub fn SetText(self: ?*anyopaque, t: i64, text: []const u8) void {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QAccessibleApplication_SetText(@ptrCast(self), @intCast(t), text_str);
    }

    /// Inherited from QAccessibleObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#setText)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleApplication, t: qaccessible_base_enums.Text, text: []const u8 ```
    pub fn QBaseSetText(self: ?*anyopaque, t: i64, text: []const u8) void {
        const text_str = qtc.struct_libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QAccessibleApplication_QBaseSetText(@ptrCast(self), @intCast(t), text_str);
    }

    /// Inherited from QAccessibleObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#setText)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleApplication, slot: fn (self: QtC.QAccessibleApplication, t: qaccessible_base_enums.Text, text: []const u8) callconv(.c) void ```
    pub fn OnSetText(self: ?*anyopaque, slot: fn (?*anyopaque, i64, []const u8) callconv(.c) void) void {
        qtc.QAccessibleApplication_OnSetText(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAccessibleObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#childAt)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleApplication, x: i32, y: i32 ```
    pub fn ChildAt(self: ?*anyopaque, x: i32, y: i32) QtC.QAccessibleInterface {
        return qtc.QAccessibleApplication_ChildAt(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// Inherited from QAccessibleObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#childAt)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleApplication, x: i32, y: i32 ```
    pub fn QBaseChildAt(self: ?*anyopaque, x: i32, y: i32) QtC.QAccessibleInterface {
        return qtc.QAccessibleApplication_QBaseChildAt(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// Inherited from QAccessibleObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleobject.html#childAt)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleApplication, slot: fn (self: QtC.QAccessibleApplication, x: i32, y: i32) callconv(.c) QtC.QAccessibleInterface ```
    pub fn OnChildAt(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) QtC.QAccessibleInterface) void {
        qtc.QAccessibleApplication_OnChildAt(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#relations)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleApplication, match: i32, allocator: std.mem.Allocator ```
    pub fn Relations(self: ?*anyopaque, match: i64, allocator: std.mem.Allocator) []struct_qtcqaccessibleinterface_i64 {
        const _arr: qtc.struct_libqt_list = qtc.QAccessibleApplication_Relations(@ptrCast(self), @intCast(match));
        defer {
            const _pair: [*]qtc.struct_libqt_pair = @ptrCast(@alignCast(_arr.data));
            for (0.._arr.len) |i| {
                qtc.libqt_free(_pair[i].first);
                qtc.libqt_free(_pair[i].second);
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(struct_qtcqaccessibleinterface_i32, _arr.len) catch @panic("qaccessibleapplication.Relations: Memory allocation failed");
        const _data: [*]struct_qtcqaccessibleinterface_i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#relations)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleApplication, match: i32, allocator: std.mem.Allocator ```
    pub fn QBaseRelations(self: ?*anyopaque, match: i64, allocator: std.mem.Allocator) []struct_qtcqaccessibleinterface_i64 {
        const _arr: qtc.struct_libqt_list = qtc.QAccessibleApplication_QBaseRelations(@ptrCast(self), @intCast(match));
        defer {
            const _pair: [*]qtc.struct_libqt_pair = @ptrCast(@alignCast(_arr.data));
            for (0.._arr.len) |i| {
                qtc.libqt_free(_pair[i].first);
                qtc.libqt_free(_pair[i].second);
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc(struct_qtcqaccessibleinterface_i32, _arr.len) catch @panic("qaccessibleapplication.Relations: Memory allocation failed");
        const _data: [*]struct_qtcqaccessibleinterface_i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#relations)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleApplication, slot: fn (self: QtC.QAccessibleApplication, match: i32) callconv(.c) []struct_qtcqaccessibleinterface_i64 ```
    pub fn OnRelations(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) []struct_qtcqaccessibleinterface_i64) void {
        qtc.QAccessibleApplication_OnRelations(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#foregroundColor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleApplication ```
    pub fn ForegroundColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QAccessibleApplication_ForegroundColor(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#foregroundColor)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleApplication ```
    pub fn QBaseForegroundColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QAccessibleApplication_QBaseForegroundColor(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#foregroundColor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleApplication, slot: fn () callconv(.c) QtC.QColor ```
    pub fn OnForegroundColor(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QColor) void {
        qtc.QAccessibleApplication_OnForegroundColor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#backgroundColor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleApplication ```
    pub fn BackgroundColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QAccessibleApplication_BackgroundColor(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#backgroundColor)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleApplication ```
    pub fn QBaseBackgroundColor(self: ?*anyopaque) QtC.QColor {
        return qtc.QAccessibleApplication_QBaseBackgroundColor(@ptrCast(self));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#backgroundColor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleApplication, slot: fn () callconv(.c) QtC.QColor ```
    pub fn OnBackgroundColor(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QColor) void {
        qtc.QAccessibleApplication_OnBackgroundColor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#virtual_hook)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleApplication, id: i32, data: ?*anyopaque ```
    pub fn VirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.QAccessibleApplication_VirtualHook(@ptrCast(self), @intCast(id), data);
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#virtual_hook)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleApplication, id: i32, data: ?*anyopaque ```
    pub fn QBaseVirtualHook(self: ?*anyopaque, id: i32, data: ?*anyopaque) void {
        qtc.QAccessibleApplication_QBaseVirtualHook(@ptrCast(self), @intCast(id), data);
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#virtual_hook)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleApplication, slot: fn (self: QtC.QAccessibleApplication, id: i32, data: ?*anyopaque) callconv(.c) void ```
    pub fn OnVirtualHook(self: ?*anyopaque, slot: fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QAccessibleApplication_OnVirtualHook(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#interface_cast)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleApplication, param1: qaccessible_base_enums.InterfaceType ```
    pub fn InterfaceCast(self: ?*anyopaque, param1: i64) ?*anyopaque {
        return qtc.QAccessibleApplication_InterfaceCast(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#interface_cast)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleApplication, param1: qaccessible_base_enums.InterfaceType ```
    pub fn QBaseInterfaceCast(self: ?*anyopaque, param1: i64) ?*anyopaque {
        return qtc.QAccessibleApplication_QBaseInterfaceCast(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QAccessibleInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleinterface.html#interface_cast)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QAccessibleApplication, slot: fn (self: QtC.QAccessibleApplication, param1: qaccessible_base_enums.InterfaceType) callconv(.c) ?*anyopaque ```
    pub fn OnInterfaceCast(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) ?*anyopaque) void {
        qtc.QAccessibleApplication_OnInterfaceCast(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qaccessibleapplication.html#dtor.QAccessibleApplication)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QAccessibleApplication ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleApplication_Delete(@ptrCast(self));
    }
};
