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

    /// New constructs a new QAccessibleWidget object.
    ///
    /// ## Parameter(s):
    ///
    /// ` o: QWidget `
    ///
    pub fn New(o: anytype) QAccessibleWidget {
        comptime _ = @TypeOf(o)._is_QWidget;
        return .{ .ptr = qtc.QAccessibleWidget_new(@ptrCast(o.ptr)) };
    }

    /// New2 constructs a new QAccessibleWidget object.
    ///
    /// ## Parameter(s):
    ///
    /// ` o: QWidget `
    ///
    /// ` r: qaccessible_base_enums.Role `
    ///
    pub fn New2(o: anytype, r: i32) QAccessibleWidget {
        comptime _ = @TypeOf(o)._is_QWidget;
        return .{ .ptr = qtc.QAccessibleWidget_new2(@ptrCast(o.ptr), @bitCast(r)) };
    }

    /// New3 constructs a new QAccessibleWidget object.
    ///
    /// ## Parameter(s):
    ///
    /// ` o: QWidget `
    ///
    /// ` r: qaccessible_base_enums.Role `
    ///
    /// ` name: []const u8 `
    ///
    pub fn New3(o: anytype, r: i32, name: []const u8) QAccessibleWidget {
        comptime _ = @TypeOf(o)._is_QWidget;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QAccessibleWidget_new3(@ptrCast(o.ptr), @bitCast(r), name_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn IsValid(self: QAccessibleWidget) bool {
        return qtc.QAccessibleWidget_IsValid(@ptrCast(self.ptr));
    }

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
    pub fn OnIsValid(self: QAccessibleWidget, callback: *const fn () callconv(.c) bool) void {
        qtc.QAccessibleWidget_OnIsValid(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsValid` instead
    ///
    pub const QBaseIsValid = SuperIsValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#isValid)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn SuperIsValid(self: QAccessibleWidget) bool {
        return qtc.QAccessibleWidget_SuperIsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#window)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn Window(self: QAccessibleWidget) QWindow {
        return .{ .ptr = qtc.QAccessibleWidget_Window(@ptrCast(self.ptr)) };
    }

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
    pub fn OnWindow(self: QAccessibleWidget, callback: *const fn () callconv(.c) QWindow) void {
        qtc.QAccessibleWidget_OnWindow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWindow` instead
    ///
    pub const QBaseWindow = SuperWindow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#window)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn SuperWindow(self: QAccessibleWidget) QWindow {
        return .{ .ptr = qtc.QAccessibleWidget_SuperWindow(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#childCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn ChildCount(self: QAccessibleWidget) i32 {
        return qtc.QAccessibleWidget_ChildCount(@ptrCast(self.ptr));
    }

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
    pub fn OnChildCount(self: QAccessibleWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QAccessibleWidget_OnChildCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperChildCount` instead
    ///
    pub const QBaseChildCount = SuperChildCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#childCount)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn SuperChildCount(self: QAccessibleWidget) i32 {
        return qtc.QAccessibleWidget_SuperChildCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#indexOfChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` child: QAccessibleInterface `
    ///
    pub fn IndexOfChild(self: QAccessibleWidget, child: anytype) i32 {
        comptime _ = @TypeOf(child)._is_QAccessibleInterface;
        return qtc.QAccessibleWidget_IndexOfChild(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

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
    pub fn OnIndexOfChild(self: QAccessibleWidget, callback: *const fn (QAccessibleWidget, QAccessibleInterface) callconv(.c) i32) void {
        qtc.QAccessibleWidget_OnIndexOfChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIndexOfChild` instead
    ///
    pub const QBaseIndexOfChild = SuperIndexOfChild;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#indexOfChild)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` child: QAccessibleInterface `
    ///
    pub fn SuperIndexOfChild(self: QAccessibleWidget, child: anytype) i32 {
        comptime _ = @TypeOf(child)._is_QAccessibleInterface;
        return qtc.QAccessibleWidget_SuperIndexOfChild(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

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
    pub fn Relations(self: QAccessibleWidget, allocator: std.mem.Allocator, match: i32) []Struct_QAccessibleInterface_i32 {
        const _arr: qtc.libqt_list = qtc.QAccessibleWidget_Relations(@ptrCast(self.ptr), @bitCast(match));
        const _data: [*]Struct_QAccessibleInterface_i32 = @ptrCast(@alignCast(_arr.data));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Struct_QAccessibleInterface_i32, _arr.len) catch @panic("qaccessiblewidget.Relations: Memory allocation failed");
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

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
    pub fn OnRelations(self: QAccessibleWidget, callback: *const fn (QAccessibleWidget, i32) callconv(.c) qtc.libqt_list) void {
        qtc.QAccessibleWidget_OnRelations(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRelations` instead
    ///
    pub const QBaseRelations = SuperRelations;

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
    pub fn SuperRelations(self: QAccessibleWidget, allocator: std.mem.Allocator, match: i32) []Struct_QAccessibleInterface_i32 {
        const _arr: qtc.libqt_list = qtc.QAccessibleWidget_SuperRelations(@ptrCast(self.ptr), @bitCast(match));
        const _data: [*]Struct_QAccessibleInterface_i32 = @ptrCast(@alignCast(_arr.data));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Struct_QAccessibleInterface_i32, _arr.len) catch @panic("qaccessiblewidget.Relations: Memory allocation failed");
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#focusChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn FocusChild(self: QAccessibleWidget) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleWidget_FocusChild(@ptrCast(self.ptr)) };
    }

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
    pub fn OnFocusChild(self: QAccessibleWidget, callback: *const fn () callconv(.c) QAccessibleInterface) void {
        qtc.QAccessibleWidget_OnFocusChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFocusChild` instead
    ///
    pub const QBaseFocusChild = SuperFocusChild;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#focusChild)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn SuperFocusChild(self: QAccessibleWidget) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleWidget_SuperFocusChild(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn Rect(self: QAccessibleWidget) QRect {
        return .{ .ptr = qtc.QAccessibleWidget_Rect(@ptrCast(self.ptr)) };
    }

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
    pub fn OnRect(self: QAccessibleWidget, callback: *const fn () callconv(.c) QRect) void {
        qtc.QAccessibleWidget_OnRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRect` instead
    ///
    pub const QBaseRect = SuperRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#rect)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn SuperRect(self: QAccessibleWidget) QRect {
        return .{ .ptr = qtc.QAccessibleWidget_SuperRect(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn Parent(self: QAccessibleWidget) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleWidget_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn OnParent(self: QAccessibleWidget, callback: *const fn () callconv(.c) QAccessibleInterface) void {
        qtc.QAccessibleWidget_OnParent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperParent` instead
    ///
    pub const QBaseParent = SuperParent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#parent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn SuperParent(self: QAccessibleWidget) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleWidget_SuperParent(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#child)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` index: i32 `
    ///
    pub fn Child(self: QAccessibleWidget, index: i32) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleWidget_Child(@ptrCast(self.ptr), @bitCast(index)) };
    }

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
    pub fn OnChild(self: QAccessibleWidget, callback: *const fn (QAccessibleWidget, i32) callconv(.c) QAccessibleInterface) void {
        qtc.QAccessibleWidget_OnChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperChild` instead
    ///
    pub const QBaseChild = SuperChild;

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
    pub fn SuperChild(self: QAccessibleWidget, index: i32) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleWidget_SuperChild(@ptrCast(self.ptr), @bitCast(index)) };
    }

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
    pub fn Text(self: QAccessibleWidget, allocator: std.mem.Allocator, t: i32) []const u8 {
        var _str = qtc.QAccessibleWidget_Text(@ptrCast(self.ptr), @bitCast(t));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblewidget.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#text)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` callback: *const fn (self: QAccessibleWidget, t: qaccessible_base_enums.Text) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnText(self: QAccessibleWidget, callback: *const fn (QAccessibleWidget, i32) callconv(.c) [*:0]const u8) void {
        qtc.QAccessibleWidget_OnText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperText` instead
    ///
    pub const QBaseText = SuperText;

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
    pub fn SuperText(self: QAccessibleWidget, allocator: std.mem.Allocator, t: i32) []const u8 {
        var _str = qtc.QAccessibleWidget_SuperText(@ptrCast(self.ptr), @bitCast(t));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblewidget.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn Role(self: QAccessibleWidget) i32 {
        return qtc.QAccessibleWidget_Role(@ptrCast(self.ptr));
    }

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
    pub fn OnRole(self: QAccessibleWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QAccessibleWidget_OnRole(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRole` instead
    ///
    pub const QBaseRole = SuperRole;

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
    pub fn SuperRole(self: QAccessibleWidget) i32 {
        return qtc.QAccessibleWidget_SuperRole(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn State(self: QAccessibleWidget) QAccessible__State {
        return .{ .ptr = qtc.QAccessibleWidget_State(@ptrCast(self.ptr)) };
    }

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
    pub fn OnState(self: QAccessibleWidget, callback: *const fn () callconv(.c) QAccessible__State) void {
        qtc.QAccessibleWidget_OnState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperState` instead
    ///
    pub const QBaseState = SuperState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#state)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn SuperState(self: QAccessibleWidget) QAccessible__State {
        return .{ .ptr = qtc.QAccessibleWidget_SuperState(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#foregroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn ForegroundColor(self: QAccessibleWidget) QColor {
        return .{ .ptr = qtc.QAccessibleWidget_ForegroundColor(@ptrCast(self.ptr)) };
    }

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
    pub fn OnForegroundColor(self: QAccessibleWidget, callback: *const fn () callconv(.c) QColor) void {
        qtc.QAccessibleWidget_OnForegroundColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperForegroundColor` instead
    ///
    pub const QBaseForegroundColor = SuperForegroundColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#foregroundColor)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn SuperForegroundColor(self: QAccessibleWidget) QColor {
        return .{ .ptr = qtc.QAccessibleWidget_SuperForegroundColor(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#backgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn BackgroundColor(self: QAccessibleWidget) QColor {
        return .{ .ptr = qtc.QAccessibleWidget_BackgroundColor(@ptrCast(self.ptr)) };
    }

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
    pub fn OnBackgroundColor(self: QAccessibleWidget, callback: *const fn () callconv(.c) QColor) void {
        qtc.QAccessibleWidget_OnBackgroundColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperBackgroundColor` instead
    ///
    pub const QBaseBackgroundColor = SuperBackgroundColor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#backgroundColor)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn SuperBackgroundColor(self: QAccessibleWidget) QColor {
        return .{ .ptr = qtc.QAccessibleWidget_SuperBackgroundColor(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#interface_cast)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` t: qaccessible_base_enums.InterfaceType `
    ///
    pub fn InterfaceCast(self: QAccessibleWidget, t: i32) ?*anyopaque {
        return qtc.QAccessibleWidget_InterfaceCast(@ptrCast(self.ptr), @bitCast(t));
    }

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
    pub fn OnInterfaceCast(self: QAccessibleWidget, callback: *const fn (QAccessibleWidget, i32) callconv(.c) ?*anyopaque) void {
        qtc.QAccessibleWidget_OnInterfaceCast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInterfaceCast` instead
    ///
    pub const QBaseInterfaceCast = SuperInterfaceCast;

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
    pub fn SuperInterfaceCast(self: QAccessibleWidget, t: i32) ?*anyopaque {
        return qtc.QAccessibleWidget_SuperInterfaceCast(@ptrCast(self.ptr), @bitCast(t));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#actionNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ActionNames(self: QAccessibleWidget, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QAccessibleWidget_ActionNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    pub fn OnActionNames(self: QAccessibleWidget, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.QAccessibleWidget_OnActionNames(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperActionNames` instead
    ///
    pub const QBaseActionNames = SuperActionNames;

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
    pub fn SuperActionNames(self: QAccessibleWidget, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QAccessibleWidget_SuperActionNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#doAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` actionName: []const u8 `
    ///
    pub fn DoAction(self: QAccessibleWidget, actionName: []const u8) void {
        const actionName_str = qtc.libqt_string{
            .len = actionName.len,
            .data = actionName.ptr,
        };
        qtc.QAccessibleWidget_DoAction(@ptrCast(self.ptr), actionName_str);
    }

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
    pub fn OnDoAction(self: QAccessibleWidget, callback: *const fn (QAccessibleWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QAccessibleWidget_OnDoAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDoAction` instead
    ///
    pub const QBaseDoAction = SuperDoAction;

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
    pub fn SuperDoAction(self: QAccessibleWidget, actionName: []const u8) void {
        const actionName_str = qtc.libqt_string{
            .len = actionName.len,
            .data = actionName.ptr,
        };
        qtc.QAccessibleWidget_SuperDoAction(@ptrCast(self.ptr), actionName_str);
    }

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
    pub fn KeyBindingsForAction(self: QAccessibleWidget, allocator: std.mem.Allocator, actionName: []const u8) []const []const u8 {
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
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qaccessiblewidget.KeyBindingsForAction: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qaccessiblewidget.KeyBindingsForAction: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

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
    pub fn OnKeyBindingsForAction(self: QAccessibleWidget, callback: *const fn (QAccessibleWidget, [*:0]const u8) callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.QAccessibleWidget_OnKeyBindingsForAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperKeyBindingsForAction` instead
    ///
    pub const QBaseKeyBindingsForAction = SuperKeyBindingsForAction;

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
    pub fn SuperKeyBindingsForAction(self: QAccessibleWidget, allocator: std.mem.Allocator, actionName: []const u8) []const []const u8 {
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
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qaccessiblewidget.KeyBindingsForAction: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qaccessiblewidget.KeyBindingsForAction: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#widget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn Widget(self: QAccessibleWidget) QWidget {
        return .{ .ptr = qtc.QAccessibleWidget_Widget(@ptrCast(self.ptr)) };
    }

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
    pub fn OnWidget(self: QAccessibleWidget, callback: *const fn () callconv(.c) QWidget) void {
        qtc.QAccessibleWidget_OnWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWidget` instead
    ///
    pub const QBaseWidget = SuperWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#widget)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn SuperWidget(self: QAccessibleWidget) QWidget {
        return .{ .ptr = qtc.QAccessibleWidget_SuperWidget(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#parentObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn ParentObject(self: QAccessibleWidget) QObject {
        return .{ .ptr = qtc.QAccessibleWidget_ParentObject(@ptrCast(self.ptr)) };
    }

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
    pub fn OnParentObject(self: QAccessibleWidget, callback: *const fn () callconv(.c) QObject) void {
        qtc.QAccessibleWidget_OnParentObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperParentObject` instead
    ///
    pub const QBaseParentObject = SuperParentObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#parentObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn SuperParentObject(self: QAccessibleWidget) QObject {
        return .{ .ptr = qtc.QAccessibleWidget_SuperParentObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessiblewidget.html#addControllingSignal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    /// ` signal: []const u8 `
    ///
    pub fn AddControllingSignal(self: QAccessibleWidget, signal: []const u8) void {
        const signal_str = qtc.libqt_string{
            .len = signal.len,
            .data = signal.ptr,
        };
        qtc.QAccessibleWidget_AddControllingSignal(@ptrCast(self.ptr), signal_str);
    }

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
    pub fn OnAddControllingSignal(self: QAccessibleWidget, callback: *const fn (QAccessibleWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QAccessibleWidget_OnAddControllingSignal(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAddControllingSignal` instead
    ///
    pub const QBaseAddControllingSignal = SuperAddControllingSignal;

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
    pub fn SuperAddControllingSignal(self: QAccessibleWidget, signal: []const u8) void {
        const signal_str = qtc.libqt_string{
            .len = signal.len,
            .data = signal.ptr,
        };
        qtc.QAccessibleWidget_SuperAddControllingSignal(@ptrCast(self.ptr), signal_str);
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#textInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn TextInterface(self: QAccessibleWidget) QAccessibleTextInterface {
        return .{ .ptr = qtc.QAccessibleInterface_TextInterface(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#editableTextInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn EditableTextInterface(self: QAccessibleWidget) QAccessibleEditableTextInterface {
        return .{ .ptr = qtc.QAccessibleInterface_EditableTextInterface(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#valueInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn ValueInterface(self: QAccessibleWidget) QAccessibleValueInterface {
        return .{ .ptr = qtc.QAccessibleInterface_ValueInterface(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#actionInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn ActionInterface(self: QAccessibleWidget) QAccessibleActionInterface {
        return .{ .ptr = qtc.QAccessibleInterface_ActionInterface(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#imageInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn ImageInterface(self: QAccessibleWidget) QAccessibleImageInterface {
        return .{ .ptr = qtc.QAccessibleInterface_ImageInterface(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn TableInterface(self: QAccessibleWidget) QAccessibleTableInterface {
        return .{ .ptr = qtc.QAccessibleInterface_TableInterface(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#tableCellInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn TableCellInterface(self: QAccessibleWidget) QAccessibleTableCellInterface {
        return .{ .ptr = qtc.QAccessibleInterface_TableCellInterface(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#hyperlinkInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn HyperlinkInterface(self: QAccessibleWidget) QAccessibleHyperlinkInterface {
        return .{ .ptr = qtc.QAccessibleInterface_HyperlinkInterface(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#selectionInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn SelectionInterface(self: QAccessibleWidget) QAccessibleSelectionInterface {
        return .{ .ptr = qtc.QAccessibleInterface_SelectionInterface(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAccessibleInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleinterface.html#attributesInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAccessibleWidget `
    ///
    pub fn AttributesInterface(self: QAccessibleWidget) QAccessibleAttributesInterface {
        return .{ .ptr = qtc.QAccessibleInterface_AttributesInterface(@ptrCast(self.ptr)) };
    }

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
    pub fn Tr(allocator: std.mem.Allocator, sourceText: [:0]const u8) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        var _str = qtc.QObject_Tr(sourceText_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblewidget.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAccessibleActionInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#pressAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PressAction(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleActionInterface_PressAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblewidget.PressAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAccessibleActionInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#increaseAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn IncreaseAction(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleActionInterface_IncreaseAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblewidget.IncreaseAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAccessibleActionInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#decreaseAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DecreaseAction(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleActionInterface_DecreaseAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblewidget.DecreaseAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAccessibleActionInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#showMenuAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ShowMenuAction(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleActionInterface_ShowMenuAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblewidget.ShowMenuAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAccessibleActionInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#setFocusAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SetFocusAction(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleActionInterface_SetFocusAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblewidget.SetFocusAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAccessibleActionInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#toggleAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToggleAction(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleActionInterface_ToggleAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblewidget.ToggleAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAccessibleActionInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#scrollLeftAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ScrollLeftAction(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleActionInterface_ScrollLeftAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblewidget.ScrollLeftAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAccessibleActionInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#scrollRightAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ScrollRightAction(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleActionInterface_ScrollRightAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblewidget.ScrollRightAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAccessibleActionInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#scrollUpAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ScrollUpAction(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleActionInterface_ScrollUpAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblewidget.ScrollUpAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAccessibleActionInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#scrollDownAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ScrollDownAction(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleActionInterface_ScrollDownAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblewidget.ScrollDownAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAccessibleActionInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#nextPageAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn NextPageAction(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleActionInterface_NextPageAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblewidget.NextPageAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAccessibleActionInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#previousPageAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PreviousPageAction(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAccessibleActionInterface_PreviousPageAction();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblewidget.PreviousPageAction: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn Tr2(allocator: std.mem.Allocator, sourceText: [:0]const u8, disambiguation: [:0]const u8) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        var _str = qtc.QObject_Tr2(sourceText_Cstring, disambiguation_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblewidget.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn Tr3(allocator: std.mem.Allocator, sourceText: [:0]const u8, disambiguation: [:0]const u8, n: i32) []const u8 {
        const sourceText_Cstring = sourceText.ptr;
        const disambiguation_Cstring = disambiguation.ptr;
        var _str = qtc.QObject_Tr3(sourceText_Cstring, disambiguation_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblewidget.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn Object(self: QAccessibleWidget) QObject {
        return .{ .ptr = qtc.QAccessibleWidget_Object(@ptrCast(self.ptr)) };
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
    /// ` self: QAccessibleWidget `
    ///
    pub fn SuperObject(self: QAccessibleWidget) QObject {
        return .{ .ptr = qtc.QAccessibleWidget_SuperObject(@ptrCast(self.ptr)) };
    }

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
    pub fn OnObject(self: QAccessibleWidget, callback: *const fn () callconv(.c) QObject) void {
        qtc.QAccessibleWidget_OnObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: QAccessibleWidget, t: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QAccessibleWidget_SetText(@ptrCast(self.ptr), @bitCast(t), text_str);
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
    /// ` self: QAccessibleWidget `
    ///
    /// ` t: qaccessible_base_enums.Text `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SuperSetText(self: QAccessibleWidget, t: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QAccessibleWidget_SuperSetText(@ptrCast(self.ptr), @bitCast(t), text_str);
    }

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
    pub fn OnSetText(self: QAccessibleWidget, callback: *const fn (QAccessibleWidget, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QAccessibleWidget_OnSetText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ChildAt(self: QAccessibleWidget, x: i32, y: i32) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleWidget_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
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
    /// ` self: QAccessibleWidget `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn SuperChildAt(self: QAccessibleWidget, x: i32, y: i32) QAccessibleInterface {
        return .{ .ptr = qtc.QAccessibleWidget_SuperChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

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
    pub fn OnChildAt(self: QAccessibleWidget, callback: *const fn (QAccessibleWidget, i32, i32) callconv(.c) QAccessibleInterface) void {
        qtc.QAccessibleWidget_OnChildAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn VirtualHook(self: QAccessibleWidget, id: i32, data: ?*anyopaque) void {
        qtc.QAccessibleWidget_VirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
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
    /// ` self: QAccessibleWidget `
    ///
    /// ` id: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn SuperVirtualHook(self: QAccessibleWidget, id: i32, data: ?*anyopaque) void {
        qtc.QAccessibleWidget_SuperVirtualHook(@ptrCast(self.ptr), @bitCast(id), @ptrCast(data));
    }

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
    pub fn OnVirtualHook(self: QAccessibleWidget, callback: *const fn (QAccessibleWidget, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QAccessibleWidget_OnVirtualHook(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn LocalizedActionName(self: QAccessibleWidget, allocator: std.mem.Allocator, name: []const u8) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.QAccessibleWidget_LocalizedActionName(@ptrCast(self.ptr), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblewidget.LocalizedActionName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperLocalizedActionName` instead
    ///
    pub const QBaseLocalizedActionName = SuperLocalizedActionName;

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
    pub fn SuperLocalizedActionName(self: QAccessibleWidget, allocator: std.mem.Allocator, name: []const u8) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.QAccessibleWidget_SuperLocalizedActionName(@ptrCast(self.ptr), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblewidget.LocalizedActionName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAccessibleActionInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#localizedActionName)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleWidget`
    ///
    /// ` callback: *const fn (self: QAccessibleWidget, name: [*:0]const u8) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnLocalizedActionName(self: QAccessibleWidget, callback: *const fn (QAccessibleWidget, [*:0]const u8) callconv(.c) [*:0]const u8) void {
        qtc.QAccessibleWidget_OnLocalizedActionName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn LocalizedActionDescription(self: QAccessibleWidget, allocator: std.mem.Allocator, name: []const u8) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.QAccessibleWidget_LocalizedActionDescription(@ptrCast(self.ptr), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblewidget.LocalizedActionDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperLocalizedActionDescription` instead
    ///
    pub const QBaseLocalizedActionDescription = SuperLocalizedActionDescription;

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
    pub fn SuperLocalizedActionDescription(self: QAccessibleWidget, allocator: std.mem.Allocator, name: []const u8) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.QAccessibleWidget_SuperLocalizedActionDescription(@ptrCast(self.ptr), name_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblewidget.LocalizedActionDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAccessibleActionInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qaccessibleactioninterface.html#localizedActionDescription)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QAccessibleWidget`
    ///
    /// ` callback: *const fn (self: QAccessibleWidget, name: [*:0]const u8) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnLocalizedActionDescription(self: QAccessibleWidget, callback: *const fn (QAccessibleWidget, [*:0]const u8) callconv(.c) [*:0]const u8) void {
        qtc.QAccessibleWidget_OnLocalizedActionDescription(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }
};
