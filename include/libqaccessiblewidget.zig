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
const QWidget = @import("libqt6").QWidget;
const QWindow = @import("libqt6").QWindow;
const qaccessible_base_enums = @import("libqaccessible_base.zig").enums;
const std = @import("std");
const Struct_QAccessibleInterface_i32 = extern struct { first: QAccessibleInterface, second: i32 };

/// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html)
pub const QAccessibleWidget = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAccessibleWidget,

    pub const _is_QAccessibleWidget = {};
    pub const _is_QAccessibleObject = {};
    pub const _is_QAccessibleInterface = {};
    pub const _is_QAccessibleActionInterface = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QAccessibleWidget object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` o: QWidget `
    ///
    pub fn new(o: anytype) QAccessibleWidget {
        comptime _ = @TypeOf(o)._is_QWidget;
        return .{ .ptr = qtc.QAccessibleWidget_new(@ptrCast(o.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QAccessibleWidget object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` o: QWidget `
    ///
    /// ` r: qaccessible_base_enums.Role `
    ///
    pub fn new2(o: anytype, r: i32) QAccessibleWidget {
        comptime _ = @TypeOf(o)._is_QWidget;
        return .{ .ptr = qtc.QAccessibleWidget_new2(@ptrCast(o.ptr), @bitCast(r)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QAccessibleWidget object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` o: QWidget `
    ///
    /// ` r: qaccessible_base_enums.Role `
    ///
    /// ` name: []const u8 `
    ///
    pub fn new3(o: anytype, r: i32, name: []const u8) QAccessibleWidget {
        comptime _ = @TypeOf(o)._is_QWidget;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QAccessibleWidget_new3(@ptrCast(o.ptr), @bitCast(r), name_str) };
    }

    /// Upcasts to a QAccessibleActionInterface object
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn asQAccessibleActionInterface(self: QAccessibleWidget) QAccessibleActionInterface {
        return .{ .ptr = qtc.QAccessibleWidget_AsQAccessibleActionInterface(@ptrCast(self.ptr)) };
    }

    /// Downcasts to a QAccessibleWidget object
    ///
    /// ## Parameter(s):
    ///
    /// ` _qaccessibleactioninterface: QAccessibleActionInterface `
    ///
    pub fn fromQAccessibleActionInterface(_qaccessibleactioninterface: anytype) QAccessibleWidget {
        comptime _ = @TypeOf(_qaccessibleactioninterface)._is_QAccessibleActionInterface;
        return .{ .ptr = @ptrCast(qtc.QAccessibleWidget_FromQAccessibleActionInterface(@ptrCast(_qaccessibleactioninterface.ptr))) };
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn isValid(self: QAccessibleWidget) bool {
        return qtc.QAccessibleWidget_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsValid` instead
    ///
    pub const OnIsValid = onIsValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#isValid)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsValid(self: QAccessibleWidget, callback: *const fn () callconv(.c) bool) void {
        qtc.QAccessibleWidget_OnIsValid(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsValid` instead
    ///
    pub const SuperIsValid = superIsValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#isValid)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn superIsValid(self: QAccessibleWidget) bool {
        return qtc.QAccessibleWidget_SuperIsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `window` instead
    ///
    pub const Window = window;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#window)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn window(self: QAccessibleWidget) QWindow {
        return .{ .ptr = qtc.QAccessibleWidget_Window(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onWindow` instead
    ///
    pub const OnWindow = onWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#window)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` callback: *const fn () callconv(.c) QWindow `
    ///
    pub fn onWindow(self: QAccessibleWidget, callback: *const fn () callconv(.c) QWindow) void {
        qtc.QAccessibleWidget_OnWindow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWindow` instead
    ///
    pub const SuperWindow = superWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#window)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn superWindow(self: QAccessibleWidget) QWindow {
        return .{ .ptr = qtc.QAccessibleWidget_SuperWindow(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `childCount` instead
    ///
    pub const ChildCount = childCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#childCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn childCount(self: QAccessibleWidget) i32 {
        return qtc.QAccessibleWidget_ChildCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onChildCount` instead
    ///
    pub const OnChildCount = onChildCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#childCount)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onChildCount(self: QAccessibleWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QAccessibleWidget_OnChildCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superChildCount` instead
    ///
    pub const SuperChildCount = superChildCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#childCount)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn superChildCount(self: QAccessibleWidget) i32 {
        return qtc.QAccessibleWidget_SuperChildCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `indexOfChild` instead
    ///
    pub const IndexOfChild = indexOfChild;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#indexOfChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` _child: QAccessibleInterface `
    ///
    pub fn indexOfChild(self: QAccessibleWidget, _child: anytype) i32 {
        comptime _ = @TypeOf(_child)._is_QAccessibleInterface;
        return qtc.QAccessibleWidget_IndexOfChild(@ptrCast(self.ptr), @ptrCast(_child.ptr));
    }

    /// ### DEPRECATED: Use `onIndexOfChild` instead
    ///
    pub const OnIndexOfChild = onIndexOfChild;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#indexOfChild)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` callback: *const fn (self: QAccessibleWidget, child: QAccessibleInterface) callconv(.c) i32 `
    ///
    pub fn onIndexOfChild(self: QAccessibleWidget, callback: *const fn (QAccessibleWidget, QAccessibleInterface) callconv(.c) i32) void {
        qtc.QAccessibleWidget_OnIndexOfChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIndexOfChild` instead
    ///
    pub const SuperIndexOfChild = superIndexOfChild;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#indexOfChild)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` _child: QAccessibleInterface `
    ///
    pub fn superIndexOfChild(self: QAccessibleWidget, _child: anytype) i32 {
        comptime _ = @TypeOf(_child)._is_QAccessibleInterface;
        return qtc.QAccessibleWidget_SuperIndexOfChild(@ptrCast(self.ptr), @ptrCast(_child.ptr));
    }

    /// ### DEPRECATED: Use `relations` instead
    ///
    pub const Relations = relations;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#relations)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` match: flag of qaccessible_base_enums.RelationFlag `
    ///
    pub fn relations(self: QAccessibleWidget, allocator: std.mem.Allocator, match: i32) []Struct_QAccessibleInterface_i32 {
        const _arr: qtc.libqt_list = qtc.QAccessibleWidget_Relations(@ptrCast(self.ptr), @bitCast(match));
        const _data_val: [*]Struct_QAccessibleInterface_i32 = @ptrCast(@alignCast(_arr.data));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Struct_QAccessibleInterface_i32, _arr.len) catch @panic("QAccessibleWidget.relations: Memory allocation failed");
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onRelations` instead
    ///
    pub const OnRelations = onRelations;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#relations)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` callback: *const fn (self: QAccessibleWidget, match: flag of qaccessible_base_enums.RelationFlag) callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []Struct_QAccessibleInterface_i32 `
    ///
    pub fn onRelations(self: QAccessibleWidget, callback: *const fn (QAccessibleWidget, i32) callconv(.c) qtc.libqt_list) void {
        qtc.QAccessibleWidget_OnRelations(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRelations` instead
    ///
    pub const SuperRelations = superRelations;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#relations)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` match: flag of qaccessible_base_enums.RelationFlag `
    ///
    pub fn superRelations(self: QAccessibleWidget, allocator: std.mem.Allocator, match: i32) []Struct_QAccessibleInterface_i32 {
        const _arr: qtc.libqt_list = qtc.QAccessibleWidget_SuperRelations(@ptrCast(self.ptr), @bitCast(match));
        const _data_val: [*]Struct_QAccessibleInterface_i32 = @ptrCast(@alignCast(_arr.data));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Struct_QAccessibleInterface_i32, _arr.len) catch @panic("QAccessibleWidget.relations: Memory allocation failed");
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `focusChild` instead
    ///
    pub const FocusChild = focusChild;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#focusChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn focusChild(self: QAccessibleWidget) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleWidget_FocusChild(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onFocusChild` instead
    ///
    pub const OnFocusChild = onFocusChild;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#focusChild)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` callback: *const fn () callconv(.c) QAccessibleInterface `
    ///
    pub fn onFocusChild(self: QAccessibleWidget, callback: *const fn () callconv(.c) QAccessibleInterface) void {
        qtc.QAccessibleWidget_OnFocusChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFocusChild` instead
    ///
    pub const SuperFocusChild = superFocusChild;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#focusChild)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn superFocusChild(self: QAccessibleWidget) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleWidget_SuperFocusChild(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn rect(self: QAccessibleWidget) QRect {
        return .{ .ptr = qtc.QAccessibleWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onRect` instead
    ///
    pub const OnRect = onRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#rect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` callback: *const fn () callconv(.c) QRect `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onRect(self: QAccessibleWidget, callback: *const fn () callconv(.c) QRect) void {
        qtc.QAccessibleWidget_OnRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRect` instead
    ///
    pub const SuperRect = superRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#rect)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn superRect(self: QAccessibleWidget) QRect {
        return .{ .ptr = qtc.QAccessibleWidget_SuperRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn parent(self: QAccessibleWidget) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleWidget_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onParent` instead
    ///
    pub const OnParent = onParent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#parent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` callback: *const fn () callconv(.c) QAccessibleInterface `
    ///
    pub fn onParent(self: QAccessibleWidget, callback: *const fn () callconv(.c) QAccessibleInterface) void {
        qtc.QAccessibleWidget_OnParent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superParent` instead
    ///
    pub const SuperParent = superParent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#parent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn superParent(self: QAccessibleWidget) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleWidget_SuperParent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `child` instead
    ///
    pub const Child = child;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#child)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` index: i32 `
    ///
    pub fn child(self: QAccessibleWidget, index: i32) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleWidget_Child(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `onChild` instead
    ///
    pub const OnChild = onChild;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#child)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` callback: *const fn (self: QAccessibleWidget, index: i32) callconv(.c) QAccessibleInterface `
    ///
    pub fn onChild(self: QAccessibleWidget, callback: *const fn (QAccessibleWidget, i32) callconv(.c) QAccessibleInterface) void {
        qtc.QAccessibleWidget_OnChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superChild` instead
    ///
    pub const SuperChild = superChild;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#child)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` index: i32 `
    ///
    pub fn superChild(self: QAccessibleWidget, index: i32) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleWidget_SuperChild(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` t: qaccessible_base_enums.Text `
    ///
    pub fn text(self: QAccessibleWidget, allocator: std.mem.Allocator, t: i32) []const u8 {
        var _str = qtc.QAccessibleWidget_Text(@ptrCast(self.ptr), @bitCast(t));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleWidget.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onText` instead
    ///
    pub const OnText = onText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#text)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` callback: *const fn (self: QAccessibleWidget, t: qaccessible_base_enums.Text) callconv(.c) [*:0]const u8 `
    ///
    pub fn onText(self: QAccessibleWidget, callback: *const fn (QAccessibleWidget, i32) callconv(.c) [*:0]const u8) void {
        qtc.QAccessibleWidget_OnText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superText` instead
    ///
    pub const SuperText = superText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#text)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` t: qaccessible_base_enums.Text `
    ///
    pub fn superText(self: QAccessibleWidget, allocator: std.mem.Allocator, t: i32) []const u8 {
        var _str = qtc.QAccessibleWidget_SuperText(@ptrCast(self.ptr), @bitCast(t));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleWidget.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `role` instead
    ///
    pub const Role = role;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#role)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ## Returns:
    ///
    /// ` qaccessible_base_enums.Role `
    ///
    pub fn role(self: QAccessibleWidget) i32 {
        return qtc.QAccessibleWidget_Role(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRole` instead
    ///
    pub const OnRole = onRole;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#role)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onRole(self: QAccessibleWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QAccessibleWidget_OnRole(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRole` instead
    ///
    pub const SuperRole = superRole;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#role)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ## Returns:
    ///
    /// ` qaccessible_base_enums.Role `
    ///
    pub fn superRole(self: QAccessibleWidget) i32 {
        return qtc.QAccessibleWidget_SuperRole(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn state(self: QAccessibleWidget) QAccessible__State {
        return .{ .ptr = qtc.QAccessibleWidget_State(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onState` instead
    ///
    pub const OnState = onState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#state)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` callback: *const fn () callconv(.c) QAccessible__State `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onState(self: QAccessibleWidget, callback: *const fn () callconv(.c) QAccessible__State) void {
        qtc.QAccessibleWidget_OnState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superState` instead
    ///
    pub const SuperState = superState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#state)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn superState(self: QAccessibleWidget) QAccessible__State {
        return .{ .ptr = qtc.QAccessibleWidget_SuperState(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `foregroundColor` instead
    ///
    pub const ForegroundColor = foregroundColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#foregroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn foregroundColor(self: QAccessibleWidget) QColor {
        return .{ .ptr = qtc.QAccessibleWidget_ForegroundColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onForegroundColor` instead
    ///
    pub const OnForegroundColor = onForegroundColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#foregroundColor)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` callback: *const fn () callconv(.c) QColor `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onForegroundColor(self: QAccessibleWidget, callback: *const fn () callconv(.c) QColor) void {
        qtc.QAccessibleWidget_OnForegroundColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superForegroundColor` instead
    ///
    pub const SuperForegroundColor = superForegroundColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#foregroundColor)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn superForegroundColor(self: QAccessibleWidget) QColor {
        return .{ .ptr = qtc.QAccessibleWidget_SuperForegroundColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `backgroundColor` instead
    ///
    pub const BackgroundColor = backgroundColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#backgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn backgroundColor(self: QAccessibleWidget) QColor {
        return .{ .ptr = qtc.QAccessibleWidget_BackgroundColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onBackgroundColor` instead
    ///
    pub const OnBackgroundColor = onBackgroundColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#backgroundColor)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` callback: *const fn () callconv(.c) QColor `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onBackgroundColor(self: QAccessibleWidget, callback: *const fn () callconv(.c) QColor) void {
        qtc.QAccessibleWidget_OnBackgroundColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superBackgroundColor` instead
    ///
    pub const SuperBackgroundColor = superBackgroundColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#backgroundColor)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn superBackgroundColor(self: QAccessibleWidget) QColor {
        return .{ .ptr = qtc.QAccessibleWidget_SuperBackgroundColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `interfaceCast` instead
    ///
    pub const InterfaceCast = interfaceCast;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#interface_cast)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` t: qaccessible_base_enums.InterfaceType `
    ///
    pub fn interfaceCast(self: QAccessibleWidget, t: i32) ?*anyopaque {
        return qtc.QAccessibleWidget_InterfaceCast(@ptrCast(self.ptr), @bitCast(t));
    }

    /// ### DEPRECATED: Use `onInterfaceCast` instead
    ///
    pub const OnInterfaceCast = onInterfaceCast;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#interface_cast)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` callback: *const fn (self: QAccessibleWidget, t: qaccessible_base_enums.InterfaceType) callconv(.c) ?*anyopaque `
    ///
    pub fn onInterfaceCast(self: QAccessibleWidget, callback: *const fn (QAccessibleWidget, i32) callconv(.c) ?*anyopaque) void {
        qtc.QAccessibleWidget_OnInterfaceCast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInterfaceCast` instead
    ///
    pub const SuperInterfaceCast = superInterfaceCast;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#interface_cast)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` t: qaccessible_base_enums.InterfaceType `
    ///
    pub fn superInterfaceCast(self: QAccessibleWidget, t: i32) ?*anyopaque {
        return qtc.QAccessibleWidget_SuperInterfaceCast(@ptrCast(self.ptr), @bitCast(t));
    }

    /// ### DEPRECATED: Use `actionNames` instead
    ///
    pub const ActionNames = actionNames;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#actionNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn actionNames(self: QAccessibleWidget, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QAccessibleWidget_ActionNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QAccessibleWidget.actionNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QAccessibleWidget.actionNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `onActionNames` instead
    ///
    pub const OnActionNames = onActionNames;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#actionNames)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8 `
    ///
    pub fn onActionNames(self: QAccessibleWidget, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.QAccessibleWidget_OnActionNames(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superActionNames` instead
    ///
    pub const SuperActionNames = superActionNames;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#actionNames)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superActionNames(self: QAccessibleWidget, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QAccessibleWidget_SuperActionNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QAccessibleWidget.actionNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QAccessibleWidget.actionNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `doAction` instead
    ///
    pub const DoAction = doAction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#doAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` actionName: []const u8 `
    ///
    pub fn doAction(self: QAccessibleWidget, actionName: []const u8) void {
        const actionName_str = qtc.libqt_string{
            .len = actionName.len,
            .data = actionName.ptr,
        };
        qtc.QAccessibleWidget_DoAction(@ptrCast(self.ptr), actionName_str);
    }

    /// ### DEPRECATED: Use `onDoAction` instead
    ///
    pub const OnDoAction = onDoAction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#doAction)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` callback: *const fn (self: QAccessibleWidget, actionName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onDoAction(self: QAccessibleWidget, callback: *const fn (QAccessibleWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QAccessibleWidget_OnDoAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDoAction` instead
    ///
    pub const SuperDoAction = superDoAction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#doAction)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` actionName: []const u8 `
    ///
    pub fn superDoAction(self: QAccessibleWidget, actionName: []const u8) void {
        const actionName_str = qtc.libqt_string{
            .len = actionName.len,
            .data = actionName.ptr,
        };
        qtc.QAccessibleWidget_SuperDoAction(@ptrCast(self.ptr), actionName_str);
    }

    /// ### DEPRECATED: Use `keyBindingsForAction` instead
    ///
    pub const KeyBindingsForAction = keyBindingsForAction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#keyBindingsForAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` actionName: []const u8 `
    ///
    pub fn keyBindingsForAction(self: QAccessibleWidget, allocator: std.mem.Allocator, actionName: []const u8) []const []const u8 {
        const actionName_str = qtc.libqt_string{
            .len = actionName.len,
            .data = actionName.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QAccessibleWidget_KeyBindingsForAction(@ptrCast(self.ptr), actionName_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QAccessibleWidget.keyBindingsForAction: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QAccessibleWidget.keyBindingsForAction: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `onKeyBindingsForAction` instead
    ///
    pub const OnKeyBindingsForAction = onKeyBindingsForAction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#keyBindingsForAction)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` callback: *const fn (self: QAccessibleWidget, actionName: [*:0]const u8) callconv(.c) ?[*:null]?[*:0]const u8 `
    ///
    pub fn onKeyBindingsForAction(self: QAccessibleWidget, callback: *const fn (QAccessibleWidget, [*:0]const u8) callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.QAccessibleWidget_OnKeyBindingsForAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superKeyBindingsForAction` instead
    ///
    pub const SuperKeyBindingsForAction = superKeyBindingsForAction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#keyBindingsForAction)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` actionName: []const u8 `
    ///
    pub fn superKeyBindingsForAction(self: QAccessibleWidget, allocator: std.mem.Allocator, actionName: []const u8) []const []const u8 {
        const actionName_str = qtc.libqt_string{
            .len = actionName.len,
            .data = actionName.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QAccessibleWidget_SuperKeyBindingsForAction(@ptrCast(self.ptr), actionName_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QAccessibleWidget.keyBindingsForAction: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QAccessibleWidget.keyBindingsForAction: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `widget` instead
    ///
    pub const Widget = widget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn widget(self: QAccessibleWidget) QWidget {
        return .{ .ptr = qtc.QAccessibleWidget_Widget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onWidget` instead
    ///
    pub const OnWidget = onWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#widget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` callback: *const fn () callconv(.c) QWidget `
    ///
    pub fn onWidget(self: QAccessibleWidget, callback: *const fn () callconv(.c) QWidget) void {
        qtc.QAccessibleWidget_OnWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWidget` instead
    ///
    pub const SuperWidget = superWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#widget)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn superWidget(self: QAccessibleWidget) QWidget {
        return .{ .ptr = qtc.QAccessibleWidget_SuperWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `parentObject` instead
    ///
    pub const ParentObject = parentObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#parentObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn parentObject(self: QAccessibleWidget) QObject {
        return .{ .ptr = qtc.QAccessibleWidget_ParentObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onParentObject` instead
    ///
    pub const OnParentObject = onParentObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#parentObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onParentObject(self: QAccessibleWidget, callback: *const fn () callconv(.c) QObject) void {
        qtc.QAccessibleWidget_OnParentObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superParentObject` instead
    ///
    pub const SuperParentObject = superParentObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#parentObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn superParentObject(self: QAccessibleWidget) QObject {
        return .{ .ptr = qtc.QAccessibleWidget_SuperParentObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `addControllingSignal` instead
    ///
    pub const AddControllingSignal = addControllingSignal;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#addControllingSignal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` signal: []const u8 `
    ///
    pub fn addControllingSignal(self: QAccessibleWidget, signal: []const u8) void {
        const signal_str = qtc.libqt_string{
            .len = signal.len,
            .data = signal.ptr,
        };
        qtc.QAccessibleWidget_AddControllingSignal(@ptrCast(self.ptr), signal_str);
    }

    /// ### DEPRECATED: Use `onAddControllingSignal` instead
    ///
    pub const OnAddControllingSignal = onAddControllingSignal;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#addControllingSignal)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` callback: *const fn (self: QAccessibleWidget, signal: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onAddControllingSignal(self: QAccessibleWidget, callback: *const fn (QAccessibleWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QAccessibleWidget_OnAddControllingSignal(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superAddControllingSignal` instead
    ///
    pub const SuperAddControllingSignal = superAddControllingSignal;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#addControllingSignal)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` signal: []const u8 `
    ///
    pub fn superAddControllingSignal(self: QAccessibleWidget, signal: []const u8) void {
        const signal_str = qtc.libqt_string{
            .len = signal.len,
            .data = signal.ptr,
        };
        qtc.QAccessibleWidget_SuperAddControllingSignal(@ptrCast(self.ptr), signal_str);
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
    /// ` self: QAccessibleWidget `
    ///
    pub fn textInterface(self: QAccessibleWidget) QAccessibleTextInterface {
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
    /// ` self: QAccessibleWidget `
    ///
    pub fn editableTextInterface(self: QAccessibleWidget) QAccessibleEditableTextInterface {
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
    /// ` self: QAccessibleWidget `
    ///
    pub fn valueInterface(self: QAccessibleWidget) QAccessibleValueInterface {
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
    /// ` self: QAccessibleWidget `
    ///
    pub fn actionInterface(self: QAccessibleWidget) QAccessibleActionInterface {
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
    /// ` self: QAccessibleWidget `
    ///
    pub fn imageInterface(self: QAccessibleWidget) QAccessibleImageInterface {
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
    /// ` self: QAccessibleWidget `
    ///
    pub fn tableInterface(self: QAccessibleWidget) QAccessibleTableInterface {
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
    /// ` self: QAccessibleWidget `
    ///
    pub fn tableCellInterface(self: QAccessibleWidget) QAccessibleTableCellInterface {
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
    /// ` self: QAccessibleWidget `
    ///
    pub fn hyperlinkInterface(self: QAccessibleWidget) QAccessibleHyperlinkInterface {
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
    /// ` self: QAccessibleWidget `
    ///
    pub fn selectionInterface(self: QAccessibleWidget) QAccessibleSelectionInterface {
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
    /// ` self: QAccessibleWidget `
    ///
    pub fn attributesInterface(self: QAccessibleWidget) QAccessibleAttributesInterface {
        return .{ .ptr = qtc.QAccessibleInterface_AttributesInterface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// Inherited from QAccessibleActionInterface
    ///
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleWidget.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `pressAction` instead
    ///
    pub const PressAction = pressAction;

    /// Inherited from QAccessibleActionInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#pressAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn pressAction(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleActionInterface_PressAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleWidget.pressAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `increaseAction` instead
    ///
    pub const IncreaseAction = increaseAction;

    /// Inherited from QAccessibleActionInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#increaseAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn increaseAction(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleActionInterface_IncreaseAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleWidget.increaseAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `decreaseAction` instead
    ///
    pub const DecreaseAction = decreaseAction;

    /// Inherited from QAccessibleActionInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#decreaseAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn decreaseAction(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleActionInterface_DecreaseAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleWidget.decreaseAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `showMenuAction` instead
    ///
    pub const ShowMenuAction = showMenuAction;

    /// Inherited from QAccessibleActionInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#showMenuAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn showMenuAction(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleActionInterface_ShowMenuAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleWidget.showMenuAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setFocusAction` instead
    ///
    pub const SetFocusAction = setFocusAction;

    /// Inherited from QAccessibleActionInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#setFocusAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn setFocusAction(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleActionInterface_SetFocusAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleWidget.setFocusAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toggleAction` instead
    ///
    pub const ToggleAction = toggleAction;

    /// Inherited from QAccessibleActionInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#toggleAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toggleAction(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleActionInterface_ToggleAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleWidget.toggleAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `scrollLeftAction` instead
    ///
    pub const ScrollLeftAction = scrollLeftAction;

    /// Inherited from QAccessibleActionInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#scrollLeftAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn scrollLeftAction(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleActionInterface_ScrollLeftAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleWidget.scrollLeftAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `scrollRightAction` instead
    ///
    pub const ScrollRightAction = scrollRightAction;

    /// Inherited from QAccessibleActionInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#scrollRightAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn scrollRightAction(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleActionInterface_ScrollRightAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleWidget.scrollRightAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `scrollUpAction` instead
    ///
    pub const ScrollUpAction = scrollUpAction;

    /// Inherited from QAccessibleActionInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#scrollUpAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn scrollUpAction(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleActionInterface_ScrollUpAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleWidget.scrollUpAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `scrollDownAction` instead
    ///
    pub const ScrollDownAction = scrollDownAction;

    /// Inherited from QAccessibleActionInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#scrollDownAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn scrollDownAction(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleActionInterface_ScrollDownAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleWidget.scrollDownAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `nextPageAction` instead
    ///
    pub const NextPageAction = nextPageAction;

    /// Inherited from QAccessibleActionInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#nextPageAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn nextPageAction(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleActionInterface_NextPageAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleWidget.nextPageAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `previousPageAction` instead
    ///
    pub const PreviousPageAction = previousPageAction;

    /// Inherited from QAccessibleActionInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#previousPageAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn previousPageAction(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleActionInterface_PreviousPageAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleWidget.previousPageAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

    /// Inherited from QAccessibleActionInterface
    ///
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleWidget.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

    /// Inherited from QAccessibleActionInterface
    ///
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleWidget.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
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
    /// ` self: QAccessibleWidget `
    ///
    pub fn object(self: QAccessibleWidget) QObject {
        return .{ .ptr = qtc.QAccessibleWidget_Object(@ptrCast(self.ptr)) };
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
    /// ` self: QAccessibleWidget `
    ///
    pub fn superObject(self: QAccessibleWidget) QObject {
        return .{ .ptr = qtc.QAccessibleWidget_SuperObject(@ptrCast(self.ptr)) };
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
    /// ` self: QAccessibleWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onObject(self: QAccessibleWidget, callback: *const fn () callconv(.c) QObject) void {
        qtc.QAccessibleWidget_OnObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAccessibleWidget `
    ///
    /// ` t: qaccessible_base_enums.Text `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn setText(self: QAccessibleWidget, t: i32, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QAccessibleWidget_SetText(@ptrCast(self.ptr), @bitCast(t), text_str);
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
    /// ` self: QAccessibleWidget `
    ///
    /// ` t: qaccessible_base_enums.Text `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn superSetText(self: QAccessibleWidget, t: i32, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QAccessibleWidget_SuperSetText(@ptrCast(self.ptr), @bitCast(t), text_str);
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
    /// ` self: QAccessibleWidget`
    ///
    /// ` callback: *const fn (self: QAccessibleWidget, t: qaccessible_base_enums.Text, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetText(self: QAccessibleWidget, callback: *const fn (QAccessibleWidget, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QAccessibleWidget_OnSetText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAccessibleWidget `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn childAt(self: QAccessibleWidget, x: i32, y: i32) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleWidget_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
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
    /// ` self: QAccessibleWidget `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn superChildAt(self: QAccessibleWidget, x: i32, y: i32) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleWidget_SuperChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
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
    /// ` self: QAccessibleWidget`
    ///
    /// ` callback: *const fn (self: QAccessibleWidget, x: i32, y: i32) callconv(.c) QAccessibleInterface `
    ///
    pub fn onChildAt(self: QAccessibleWidget, callback: *const fn (QAccessibleWidget, i32, i32) callconv(.c) QAccessibleInterface) void {
        qtc.QAccessibleWidget_OnChildAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAccessibleWidget `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn virtualHook(self: QAccessibleWidget, id: i32, data: ?*anyopaque) void {
        qtc.QAccessibleWidget_VirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
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
    /// ` self: QAccessibleWidget `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn superVirtualHook(self: QAccessibleWidget, id: i32, data: ?*anyopaque) void {
        qtc.QAccessibleWidget_SuperVirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
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
    /// ` self: QAccessibleWidget`
    ///
    /// ` callback: *const fn (self: QAccessibleWidget, id: i32, data: ?*anyopaque) callconv(.c) void `
    ///
    pub fn onVirtualHook(self: QAccessibleWidget, callback: *const fn (QAccessibleWidget, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QAccessibleWidget_OnVirtualHook(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `localizedActionName` instead
    ///
    pub const LocalizedActionName = localizedActionName;

    /// Inherited from QAccessibleActionInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#localizedActionName)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    pub fn localizedActionName(self: QAccessibleWidget, allocator: std.mem.Allocator, name: []const u8) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.QAccessibleWidget_LocalizedActionName(@ptrCast(self.ptr), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleWidget.localizedActionName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `superLocalizedActionName` instead
    ///
    pub const SuperLocalizedActionName = superLocalizedActionName;

    /// Inherited from QAccessibleActionInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#localizedActionName)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    pub fn superLocalizedActionName(self: QAccessibleWidget, allocator: std.mem.Allocator, name: []const u8) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.QAccessibleWidget_SuperLocalizedActionName(@ptrCast(self.ptr), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleWidget.localizedActionName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onLocalizedActionName` instead
    ///
    pub const OnLocalizedActionName = onLocalizedActionName;

    /// Inherited from QAccessibleActionInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#localizedActionName)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleWidget`
    ///
    /// ` callback: *const fn (self: QAccessibleWidget, name: [*:0]const u8) callconv(.c) [*:0]const u8 `
    ///
    pub fn onLocalizedActionName(self: QAccessibleWidget, callback: *const fn (QAccessibleWidget, [*:0]const u8) callconv(.c) [*:0]const u8) void {
        qtc.QAccessibleWidget_OnLocalizedActionName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `localizedActionDescription` instead
    ///
    pub const LocalizedActionDescription = localizedActionDescription;

    /// Inherited from QAccessibleActionInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#localizedActionDescription)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    pub fn localizedActionDescription(self: QAccessibleWidget, allocator: std.mem.Allocator, name: []const u8) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.QAccessibleWidget_LocalizedActionDescription(@ptrCast(self.ptr), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleWidget.localizedActionDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `superLocalizedActionDescription` instead
    ///
    pub const SuperLocalizedActionDescription = superLocalizedActionDescription;

    /// Inherited from QAccessibleActionInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#localizedActionDescription)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    pub fn superLocalizedActionDescription(self: QAccessibleWidget, allocator: std.mem.Allocator, name: []const u8) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.QAccessibleWidget_SuperLocalizedActionDescription(@ptrCast(self.ptr), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAccessibleWidget.localizedActionDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onLocalizedActionDescription` instead
    ///
    pub const OnLocalizedActionDescription = onLocalizedActionDescription;

    /// Inherited from QAccessibleActionInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#localizedActionDescription)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleWidget`
    ///
    /// ` callback: *const fn (self: QAccessibleWidget, name: [*:0]const u8) callconv(.c) [*:0]const u8 `
    ///
    pub fn onLocalizedActionDescription(self: QAccessibleWidget, callback: *const fn (QAccessibleWidget, [*:0]const u8) callconv(.c) [*:0]const u8) void {
        qtc.QAccessibleWidget_OnLocalizedActionDescription(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }
};
