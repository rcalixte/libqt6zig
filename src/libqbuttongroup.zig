const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAbstractButton = @import("libqt6").QAbstractButton;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbuttongroup.html)
pub const QButtonGroup = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuttongroup.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QButtonGroup,

    pub const _is_QButtonGroup = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QButtonGroup object in C++ memory
    ///
    pub fn new() QButtonGroup {
        return .{ .ptr = qtc.QButtonGroup_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QButtonGroup object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QButtonGroup {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QButtonGroup_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    pub fn metaObject(self: QButtonGroup) QMetaObject {
        return .{ .ptr = qtc.QButtonGroup_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QButtonGroup, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QButtonGroup_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    pub fn superMetaObject(self: QButtonGroup) QMetaObject {
        return .{ .ptr = qtc.QButtonGroup_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QButtonGroup, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QButtonGroup_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` callback: *const fn (self: QButtonGroup, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QButtonGroup, callback: *const fn (QButtonGroup, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QButtonGroup_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QButtonGroup, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QButtonGroup_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QButtonGroup, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QButtonGroup_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` callback: *const fn (self: QButtonGroup, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QButtonGroup, callback: *const fn (QButtonGroup, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QButtonGroup_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QButtonGroup, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QButtonGroup_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QButtonGroup.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setExclusive` instead
    ///
    pub const SetExclusive = setExclusive;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuttongroup.html#setExclusive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` _exclusive: bool `
    ///
    pub fn setExclusive(self: QButtonGroup, _exclusive: bool) void {
        qtc.QButtonGroup_SetExclusive(@ptrCast(self.ptr), _exclusive);
    }

    /// ### DEPRECATED: Use `exclusive` instead
    ///
    pub const Exclusive = exclusive;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuttongroup.html#exclusive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    pub fn exclusive(self: QButtonGroup) bool {
        return qtc.QButtonGroup_Exclusive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `addButton` instead
    ///
    pub const AddButton = addButton;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuttongroup.html#addButton)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` param1: QAbstractButton `
    ///
    pub fn addButton(self: QButtonGroup, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QAbstractButton;
        qtc.QButtonGroup_AddButton(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `removeButton` instead
    ///
    pub const RemoveButton = removeButton;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuttongroup.html#removeButton)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` param1: QAbstractButton `
    ///
    pub fn removeButton(self: QButtonGroup, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QAbstractButton;
        qtc.QButtonGroup_RemoveButton(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `buttons` instead
    ///
    pub const Buttons = buttons;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuttongroup.html#buttons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn buttons(self: QButtonGroup, allocator: std.mem.Allocator) []QAbstractButton {
        const _arr: qtc.libqt_list = qtc.QButtonGroup_Buttons(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAbstractButton, _arr.len) catch @panic("QButtonGroup.buttons: Memory allocation failed");
        const _data_val: [*]QtC.QAbstractButton = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `checkedButton` instead
    ///
    pub const CheckedButton = checkedButton;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuttongroup.html#checkedButton)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    pub fn checkedButton(self: QButtonGroup) QAbstractButton {
        return .{ .ptr = qtc.QButtonGroup_CheckedButton(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `button` instead
    ///
    pub const Button = button;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuttongroup.html#button)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` _id: i32 `
    ///
    pub fn button(self: QButtonGroup, _id: i32) QAbstractButton {
        return .{ .ptr = qtc.QButtonGroup_Button(@ptrCast(self.ptr), @bitCast(_id)) };
    }

    /// ### DEPRECATED: Use `setId` instead
    ///
    pub const SetId = setId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuttongroup.html#setId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` _button: QAbstractButton `
    ///
    /// ` _id: i32 `
    ///
    pub fn setId(self: QButtonGroup, _button: anytype, _id: i32) void {
        comptime _ = @TypeOf(_button)._is_QAbstractButton;
        qtc.QButtonGroup_SetId(@ptrCast(self.ptr), @ptrCast(_button.ptr), @bitCast(_id));
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuttongroup.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` _button: QAbstractButton `
    ///
    pub fn id(self: QButtonGroup, _button: anytype) i32 {
        comptime _ = @TypeOf(_button)._is_QAbstractButton;
        return qtc.QButtonGroup_Id(@ptrCast(self.ptr), @ptrCast(_button.ptr));
    }

    /// ### DEPRECATED: Use `checkedId` instead
    ///
    pub const CheckedId = checkedId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuttongroup.html#checkedId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    pub fn checkedId(self: QButtonGroup) i32 {
        return qtc.QButtonGroup_CheckedId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `buttonClicked` instead
    ///
    pub const ButtonClicked = buttonClicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuttongroup.html#buttonClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` param1: QAbstractButton `
    ///
    pub fn buttonClicked(self: QButtonGroup, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QAbstractButton;
        qtc.QButtonGroup_ButtonClicked(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onButtonClicked` instead
    ///
    pub const OnButtonClicked = onButtonClicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuttongroup.html#buttonClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` callback: *const fn (self: QButtonGroup, param1: QAbstractButton) callconv(.c) void `
    ///
    pub fn onButtonClicked(self: QButtonGroup, callback: *const fn (QButtonGroup, QAbstractButton) callconv(.c) void) void {
        qtc.QButtonGroup_Connect_ButtonClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `buttonPressed` instead
    ///
    pub const ButtonPressed = buttonPressed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuttongroup.html#buttonPressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` param1: QAbstractButton `
    ///
    pub fn buttonPressed(self: QButtonGroup, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QAbstractButton;
        qtc.QButtonGroup_ButtonPressed(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onButtonPressed` instead
    ///
    pub const OnButtonPressed = onButtonPressed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuttongroup.html#buttonPressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` callback: *const fn (self: QButtonGroup, param1: QAbstractButton) callconv(.c) void `
    ///
    pub fn onButtonPressed(self: QButtonGroup, callback: *const fn (QButtonGroup, QAbstractButton) callconv(.c) void) void {
        qtc.QButtonGroup_Connect_ButtonPressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `buttonReleased` instead
    ///
    pub const ButtonReleased = buttonReleased;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuttongroup.html#buttonReleased)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` param1: QAbstractButton `
    ///
    pub fn buttonReleased(self: QButtonGroup, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QAbstractButton;
        qtc.QButtonGroup_ButtonReleased(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onButtonReleased` instead
    ///
    pub const OnButtonReleased = onButtonReleased;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuttongroup.html#buttonReleased)
    ///
    /// ## Parameters:
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` callback: *const fn (self: QButtonGroup, param1: QAbstractButton) callconv(.c) void `
    ///
    pub fn onButtonReleased(self: QButtonGroup, callback: *const fn (QButtonGroup, QAbstractButton) callconv(.c) void) void {
        qtc.QButtonGroup_Connect_ButtonReleased(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `buttonToggled` instead
    ///
    pub const ButtonToggled = buttonToggled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuttongroup.html#buttonToggled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` param1: QAbstractButton `
    ///
    /// ` param2: bool `
    ///
    pub fn buttonToggled(self: QButtonGroup, param1: anytype, param2: bool) void {
        comptime _ = @TypeOf(param1)._is_QAbstractButton;
        qtc.QButtonGroup_ButtonToggled(@ptrCast(self.ptr), @ptrCast(param1.ptr), param2);
    }

    /// ### DEPRECATED: Use `onButtonToggled` instead
    ///
    pub const OnButtonToggled = onButtonToggled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuttongroup.html#buttonToggled)
    ///
    /// ## Parameters:
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` callback: *const fn (self: QButtonGroup, param1: QAbstractButton, param2: bool) callconv(.c) void `
    ///
    pub fn onButtonToggled(self: QButtonGroup, callback: *const fn (QButtonGroup, QAbstractButton, bool) callconv(.c) void) void {
        qtc.QButtonGroup_Connect_ButtonToggled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `idClicked` instead
    ///
    pub const IdClicked = idClicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuttongroup.html#idClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` param1: i32 `
    ///
    pub fn idClicked(self: QButtonGroup, param1: i32) void {
        qtc.QButtonGroup_IdClicked(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onIdClicked` instead
    ///
    pub const OnIdClicked = onIdClicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuttongroup.html#idClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` callback: *const fn (self: QButtonGroup, param1: i32) callconv(.c) void `
    ///
    pub fn onIdClicked(self: QButtonGroup, callback: *const fn (QButtonGroup, i32) callconv(.c) void) void {
        qtc.QButtonGroup_Connect_IdClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `idPressed` instead
    ///
    pub const IdPressed = idPressed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuttongroup.html#idPressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` param1: i32 `
    ///
    pub fn idPressed(self: QButtonGroup, param1: i32) void {
        qtc.QButtonGroup_IdPressed(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onIdPressed` instead
    ///
    pub const OnIdPressed = onIdPressed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuttongroup.html#idPressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` callback: *const fn (self: QButtonGroup, param1: i32) callconv(.c) void `
    ///
    pub fn onIdPressed(self: QButtonGroup, callback: *const fn (QButtonGroup, i32) callconv(.c) void) void {
        qtc.QButtonGroup_Connect_IdPressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `idReleased` instead
    ///
    pub const IdReleased = idReleased;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuttongroup.html#idReleased)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` param1: i32 `
    ///
    pub fn idReleased(self: QButtonGroup, param1: i32) void {
        qtc.QButtonGroup_IdReleased(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onIdReleased` instead
    ///
    pub const OnIdReleased = onIdReleased;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuttongroup.html#idReleased)
    ///
    /// ## Parameters:
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` callback: *const fn (self: QButtonGroup, param1: i32) callconv(.c) void `
    ///
    pub fn onIdReleased(self: QButtonGroup, callback: *const fn (QButtonGroup, i32) callconv(.c) void) void {
        qtc.QButtonGroup_Connect_IdReleased(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `idToggled` instead
    ///
    pub const IdToggled = idToggled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuttongroup.html#idToggled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` param1: i32 `
    ///
    /// ` param2: bool `
    ///
    pub fn idToggled(self: QButtonGroup, param1: i32, param2: bool) void {
        qtc.QButtonGroup_IdToggled(@ptrCast(self.ptr), @bitCast(param1), param2);
    }

    /// ### DEPRECATED: Use `onIdToggled` instead
    ///
    pub const OnIdToggled = onIdToggled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuttongroup.html#idToggled)
    ///
    /// ## Parameters:
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` callback: *const fn (self: QButtonGroup, param1: i32, param2: bool) callconv(.c) void `
    ///
    pub fn onIdToggled(self: QButtonGroup, callback: *const fn (QButtonGroup, i32, bool) callconv(.c) void) void {
        qtc.QButtonGroup_Connect_IdToggled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    pub fn tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QButtonGroup.tr2: Memory allocation failed");
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
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QButtonGroup.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `addButton2` instead
    ///
    pub const AddButton2 = addButton2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuttongroup.html#addButton)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` param1: QAbstractButton `
    ///
    /// ` _id: i32 `
    ///
    pub fn addButton2(self: QButtonGroup, param1: anytype, _id: i32) void {
        comptime _ = @TypeOf(param1)._is_QAbstractButton;
        qtc.QButtonGroup_AddButton2(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(_id));
    }

    /// ### DEPRECATED: Use `objectName` instead
    ///
    pub const ObjectName = objectName;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QButtonGroup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QButtonGroup.objectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setObjectName` instead
    ///
    pub const SetObjectName = setObjectName;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QButtonGroup, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `isWidgetType` instead
    ///
    pub const IsWidgetType = isWidgetType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    pub fn isWidgetType(self: QButtonGroup) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWindowType` instead
    ///
    pub const IsWindowType = isWindowType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    pub fn isWindowType(self: QButtonGroup) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isQuickItemType` instead
    ///
    pub const IsQuickItemType = isQuickItemType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    pub fn isQuickItemType(self: QButtonGroup) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `signalsBlocked` instead
    ///
    pub const SignalsBlocked = signalsBlocked;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    pub fn signalsBlocked(self: QButtonGroup) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blockSignals` instead
    ///
    pub const BlockSignals = blockSignals;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QButtonGroup, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `thread` instead
    ///
    pub const Thread = thread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    pub fn thread(self: QButtonGroup) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `moveToThread` instead
    ///
    pub const MoveToThread = moveToThread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QButtonGroup, _thread: anytype) bool {
        comptime _ = @TypeOf(_thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(_thread.ptr));
    }

    /// ### DEPRECATED: Use `startTimer` instead
    ///
    pub const StartTimer = startTimer;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QButtonGroup, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// ### DEPRECATED: Use `startTimer2` instead
    ///
    pub const StartTimer2 = startTimer2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QButtonGroup, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// ### DEPRECATED: Use `killTimer` instead
    ///
    pub const KillTimer = killTimer;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` _id: i32 `
    ///
    pub fn killTimer(self: QButtonGroup, _id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(_id));
    }

    /// ### DEPRECATED: Use `killTimer2` instead
    ///
    pub const KillTimer2 = killTimer2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` _id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QButtonGroup, _id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(_id));
    }

    /// ### DEPRECATED: Use `children` instead
    ///
    pub const Children = children;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QButtonGroup, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QButtonGroup.children: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setParent` instead
    ///
    pub const SetParent = setParent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QButtonGroup, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `installEventFilter` instead
    ///
    pub const InstallEventFilter = installEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QButtonGroup, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// ### DEPRECATED: Use `removeEventFilter` instead
    ///
    pub const RemoveEventFilter = removeEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QButtonGroup, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// ### DEPRECATED: Use `connect` instead
    ///
    pub const Connect = connect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// ### DEPRECATED: Use `connect2` instead
    ///
    pub const Connect2 = connect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn connect2(_sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// ### DEPRECATED: Use `connect3` instead
    ///
    pub const Connect3 = connect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QButtonGroup, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// ### DEPRECATED: Use `disconnect` instead
    ///
    pub const Disconnect = disconnect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect2` instead
    ///
    pub const Disconnect2 = disconnect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn disconnect2(_sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// ### DEPRECATED: Use `disconnect3` instead
    ///
    pub const Disconnect3 = disconnect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    pub fn disconnect3(self: QButtonGroup) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `disconnect4` instead
    ///
    pub const Disconnect4 = disconnect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QButtonGroup, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect5` instead
    ///
    pub const Disconnect5 = disconnect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectTree` instead
    ///
    pub const DumpObjectTree = dumpObjectTree;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    pub fn dumpObjectTree(self: QButtonGroup) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectInfo` instead
    ///
    pub const DumpObjectInfo = dumpObjectInfo;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    pub fn dumpObjectInfo(self: QButtonGroup) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QButtonGroup, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QButtonGroup, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// ### DEPRECATED: Use `dynamicPropertyNames` instead
    ///
    pub const DynamicPropertyNames = dynamicPropertyNames;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QButtonGroup, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QButtonGroup.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QButtonGroup.dynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `bindingStorage` instead
    ///
    pub const BindingStorage = bindingStorage;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    pub fn bindingStorage(self: QButtonGroup) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `bindingStorage2` instead
    ///
    pub const BindingStorage2 = bindingStorage2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    pub fn bindingStorage2(self: QButtonGroup) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `destroyed` instead
    ///
    pub const Destroyed = destroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    pub fn destroyed(self: QButtonGroup) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed` instead
    ///
    pub const OnDestroyed = onDestroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` callback: *const fn (self: QButtonGroup) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QButtonGroup, callback: *const fn (QButtonGroup) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    pub fn parent(self: QButtonGroup) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `inherits` instead
    ///
    pub const Inherits = inherits;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QButtonGroup, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// ### DEPRECATED: Use `deleteLater` instead
    ///
    pub const DeleteLater = deleteLater;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    pub fn deleteLater(self: QButtonGroup) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startTimer22` instead
    ///
    pub const StartTimer22 = startTimer22;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QButtonGroup, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `startTimer23` instead
    ///
    pub const StartTimer23 = startTimer23;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QButtonGroup, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `connect5` instead
    ///
    pub const Connect5 = connect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn connect5(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// ### DEPRECATED: Use `connect52` instead
    ///
    pub const Connect52 = connect52;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect52(_sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `connect4` instead
    ///
    pub const Connect4 = connect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QButtonGroup, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `disconnect1` instead
    ///
    pub const Disconnect1 = disconnect1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QButtonGroup, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect22` instead
    ///
    pub const Disconnect22 = disconnect22;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QButtonGroup, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect32` instead
    ///
    pub const Disconnect32 = disconnect32;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QButtonGroup, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect23` instead
    ///
    pub const Disconnect23 = disconnect23;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QButtonGroup, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `destroyed1` instead
    ///
    pub const Destroyed1 = destroyed1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QButtonGroup, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed1` instead
    ///
    pub const OnDestroyed1 = onDestroyed1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` callback: *const fn (self: QButtonGroup, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QButtonGroup, callback: *const fn (QButtonGroup, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QButtonGroup, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QButtonGroup_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QButtonGroup, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QButtonGroup_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QButtonGroup`
    ///
    /// ` callback: *const fn (self: QButtonGroup, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QButtonGroup, callback: *const fn (QButtonGroup, QEvent) callconv(.c) bool) void {
        qtc.QButtonGroup_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QButtonGroup, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QButtonGroup_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QButtonGroup, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QButtonGroup_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QButtonGroup`
    ///
    /// ` callback: *const fn (self: QButtonGroup, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QButtonGroup, callback: *const fn (QButtonGroup, QObject, QEvent) callconv(.c) bool) void {
        qtc.QButtonGroup_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QButtonGroup, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QButtonGroup_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QButtonGroup, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QButtonGroup_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QButtonGroup`
    ///
    /// ` callback: *const fn (self: QButtonGroup, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QButtonGroup, callback: *const fn (QButtonGroup, QTimerEvent) callconv(.c) void) void {
        qtc.QButtonGroup_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childEvent` instead
    ///
    pub const ChildEvent = childEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QButtonGroup, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QButtonGroup_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superChildEvent` instead
    ///
    pub const SuperChildEvent = superChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QButtonGroup, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QButtonGroup_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onChildEvent` instead
    ///
    pub const OnChildEvent = onChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QButtonGroup`
    ///
    /// ` callback: *const fn (self: QButtonGroup, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QButtonGroup, callback: *const fn (QButtonGroup, QChildEvent) callconv(.c) void) void {
        qtc.QButtonGroup_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customEvent` instead
    ///
    pub const CustomEvent = customEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QButtonGroup, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QButtonGroup_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superCustomEvent` instead
    ///
    pub const SuperCustomEvent = superCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QButtonGroup, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QButtonGroup_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onCustomEvent` instead
    ///
    pub const OnCustomEvent = onCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QButtonGroup`
    ///
    /// ` callback: *const fn (self: QButtonGroup, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QButtonGroup, callback: *const fn (QButtonGroup, QEvent) callconv(.c) void) void {
        qtc.QButtonGroup_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `connectNotify` instead
    ///
    pub const ConnectNotify = connectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QButtonGroup, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QButtonGroup_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superConnectNotify` instead
    ///
    pub const SuperConnectNotify = superConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QButtonGroup, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QButtonGroup_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onConnectNotify` instead
    ///
    pub const OnConnectNotify = onConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QButtonGroup`
    ///
    /// ` callback: *const fn (self: QButtonGroup, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QButtonGroup, callback: *const fn (QButtonGroup, QMetaMethod) callconv(.c) void) void {
        qtc.QButtonGroup_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `disconnectNotify` instead
    ///
    pub const DisconnectNotify = disconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QButtonGroup, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QButtonGroup_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superDisconnectNotify` instead
    ///
    pub const SuperDisconnectNotify = superDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QButtonGroup, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QButtonGroup_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnectNotify` instead
    ///
    pub const OnDisconnectNotify = onDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QButtonGroup`
    ///
    /// ` callback: *const fn (self: QButtonGroup, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QButtonGroup, callback: *const fn (QButtonGroup, QMetaMethod) callconv(.c) void) void {
        qtc.QButtonGroup_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sender` instead
    ///
    pub const Sender = sender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    pub fn sender(self: QButtonGroup) QObject {
        return .{ .ptr = qtc.QButtonGroup_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSender` instead
    ///
    pub const SuperSender = superSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    pub fn superSender(self: QButtonGroup) QObject {
        return .{ .ptr = qtc.QButtonGroup_SuperSender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSender` instead
    ///
    pub const OnSender = onSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QButtonGroup`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QButtonGroup, callback: *const fn () callconv(.c) QObject) void {
        qtc.QButtonGroup_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `senderSignalIndex` instead
    ///
    pub const SenderSignalIndex = senderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    pub fn senderSignalIndex(self: QButtonGroup) i32 {
        return qtc.QButtonGroup_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSenderSignalIndex` instead
    ///
    pub const SuperSenderSignalIndex = superSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    pub fn superSenderSignalIndex(self: QButtonGroup) i32 {
        return qtc.QButtonGroup_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSenderSignalIndex` instead
    ///
    pub const OnSenderSignalIndex = onSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QButtonGroup`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QButtonGroup, callback: *const fn () callconv(.c) i32) void {
        qtc.QButtonGroup_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `receivers` instead
    ///
    pub const Receivers = receivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QButtonGroup, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QButtonGroup_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `superReceivers` instead
    ///
    pub const SuperReceivers = superReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QButtonGroup, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QButtonGroup_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `onReceivers` instead
    ///
    pub const OnReceivers = onReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QButtonGroup`
    ///
    /// ` callback: *const fn (self: QButtonGroup, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QButtonGroup, callback: *const fn (QButtonGroup, [*:0]const u8) callconv(.c) i32) void {
        qtc.QButtonGroup_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isSignalConnected` instead
    ///
    pub const IsSignalConnected = isSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QButtonGroup, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QButtonGroup_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superIsSignalConnected` instead
    ///
    pub const SuperIsSignalConnected = superIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QButtonGroup, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QButtonGroup_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onIsSignalConnected` instead
    ///
    pub const OnIsSignalConnected = onIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QButtonGroup`
    ///
    /// ` callback: *const fn (self: QButtonGroup, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QButtonGroup, callback: *const fn (QButtonGroup, QMetaMethod) callconv(.c) bool) void {
        qtc.QButtonGroup_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onObjectNameChanged` instead
    ///
    pub const OnObjectNameChanged = onObjectNameChanged;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QButtonGroup `
    ///
    /// ` callback: *const fn (self: QButtonGroup, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QButtonGroup, callback: *const fn (QButtonGroup, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbuttongroup.html#dtor.QButtonGroup)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QButtonGroup `
    ///
    pub fn delete(self: QButtonGroup) void {
        qtc.QButtonGroup_Delete(@ptrCast(self.ptr));
    }
};
