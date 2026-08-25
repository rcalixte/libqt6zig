const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QLayout = @import("libqt6").QLayout;
const QLayoutItem = @import("libqt6").QLayoutItem;
const QMargins = @import("libqt6").QMargins;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QRect = @import("libqt6").QRect;
const QSize = @import("libqt6").QSize;
const QSpacerItem = @import("libqt6").QSpacerItem;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const QWidget = @import("libqt6").QWidget;
const qboxlayout_enums = enums;
const qlayout_enums = @import("libqlayout.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qsizepolicy_enums = @import("libqsizepolicy.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html)
pub const QBoxLayout = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QBoxLayout,

    pub const _is_QBoxLayout = {};
    pub const _is_QLayout = {};
    pub const _is_QObject = {};
    pub const _is_QLayoutItem = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QBoxLayout object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qboxlayout_enums.Direction `
    ///
    pub fn new(param1: i32) QBoxLayout {
        return .{ .ptr = qtc.QBoxLayout_new(@bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QBoxLayout object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qboxlayout_enums.Direction `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn new2(param1: i32, _parent: anytype) QBoxLayout {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.QBoxLayout_new2(@bitCast(param1), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn metaObject(self: QBoxLayout) QMetaObject {
        return .{ .ptr = qtc.QBoxLayout_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QBoxLayout `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QBoxLayout, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QBoxLayout_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBoxLayout `
    ///
    pub fn superMetaObject(self: QBoxLayout) QMetaObject {
        return .{ .ptr = qtc.QBoxLayout_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QBoxLayout, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QBoxLayout_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` callback: *const fn (self: QBoxLayout, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QBoxLayout, callback: *const fn (QBoxLayout, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QBoxLayout_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QBoxLayout, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QBoxLayout_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QBoxLayout, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QBoxLayout_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` callback: *const fn (self: QBoxLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QBoxLayout, callback: *const fn (QBoxLayout, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QBoxLayout_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QBoxLayout, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QBoxLayout_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBoxLayout.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `direction` instead
    ///
    pub const Direction = direction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#direction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ## Returns:
    ///
    /// ` qboxlayout_enums.Direction `
    ///
    pub fn direction(self: QBoxLayout) i32 {
        return qtc.QBoxLayout_Direction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDirection` instead
    ///
    pub const SetDirection = setDirection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` _direction: qboxlayout_enums.Direction `
    ///
    pub fn setDirection(self: QBoxLayout, _direction: i32) void {
        qtc.QBoxLayout_SetDirection(@ptrCast(self.ptr), @bitCast(_direction));
    }

    /// ### DEPRECATED: Use `addSpacing` instead
    ///
    pub const AddSpacing = addSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` size: i32 `
    ///
    pub fn addSpacing(self: QBoxLayout, size: i32) void {
        qtc.QBoxLayout_AddSpacing(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `addStretch` instead
    ///
    pub const AddStretch = addStretch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn addStretch(self: QBoxLayout) void {
        qtc.QBoxLayout_AddStretch(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `addSpacerItem` instead
    ///
    pub const AddSpacerItem = addSpacerItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addSpacerItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` _spacerItem: QSpacerItem `
    ///
    pub fn addSpacerItem(self: QBoxLayout, _spacerItem: anytype) void {
        comptime _ = @TypeOf(_spacerItem)._is_QSpacerItem;
        qtc.QBoxLayout_AddSpacerItem(@ptrCast(self.ptr), @ptrCast(_spacerItem.ptr));
    }

    /// ### DEPRECATED: Use `addWidget` instead
    ///
    pub const AddWidget = addWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` param1: QWidget `
    ///
    pub fn addWidget(self: QBoxLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QBoxLayout_AddWidget(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `addLayout` instead
    ///
    pub const AddLayout = addLayout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` _layout: QLayout `
    ///
    pub fn addLayout(self: QBoxLayout, _layout: anytype) void {
        comptime _ = @TypeOf(_layout)._is_QLayout;
        qtc.QBoxLayout_AddLayout(@ptrCast(self.ptr), @ptrCast(_layout.ptr));
    }

    /// ### DEPRECATED: Use `addStrut` instead
    ///
    pub const AddStrut = addStrut;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addStrut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn addStrut(self: QBoxLayout, param1: i32) void {
        qtc.QBoxLayout_AddStrut(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `addItem` instead
    ///
    pub const AddItem = addItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` param1: QLayoutItem `
    ///
    pub fn addItem(self: QBoxLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QLayoutItem;
        qtc.QBoxLayout_AddItem(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onAddItem` instead
    ///
    pub const OnAddItem = onAddItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addItem)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` callback: *const fn (self: QBoxLayout, param1: QLayoutItem) callconv(.c) void `
    ///
    pub fn onAddItem(self: QBoxLayout, callback: *const fn (QBoxLayout, QLayoutItem) callconv(.c) void) void {
        qtc.QBoxLayout_OnAddItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superAddItem` instead
    ///
    pub const SuperAddItem = superAddItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addItem)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` param1: QLayoutItem `
    ///
    pub fn superAddItem(self: QBoxLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QLayoutItem;
        qtc.QBoxLayout_SuperAddItem(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `insertSpacing` instead
    ///
    pub const InsertSpacing = insertSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` index: i32 `
    ///
    /// ` size: i32 `
    ///
    pub fn insertSpacing(self: QBoxLayout, index: i32, size: i32) void {
        qtc.QBoxLayout_InsertSpacing(@ptrCast(self.ptr), @bitCast(index), @bitCast(size));
    }

    /// ### DEPRECATED: Use `insertStretch` instead
    ///
    pub const InsertStretch = insertStretch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn insertStretch(self: QBoxLayout, index: i32) void {
        qtc.QBoxLayout_InsertStretch(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `insertSpacerItem` instead
    ///
    pub const InsertSpacerItem = insertSpacerItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertSpacerItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` index: i32 `
    ///
    /// ` _spacerItem: QSpacerItem `
    ///
    pub fn insertSpacerItem(self: QBoxLayout, index: i32, _spacerItem: anytype) void {
        comptime _ = @TypeOf(_spacerItem)._is_QSpacerItem;
        qtc.QBoxLayout_InsertSpacerItem(@ptrCast(self.ptr), @bitCast(index), @ptrCast(_spacerItem.ptr));
    }

    /// ### DEPRECATED: Use `insertWidget` instead
    ///
    pub const InsertWidget = insertWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` index: i32 `
    ///
    /// ` _widget: QWidget `
    ///
    pub fn insertWidget(self: QBoxLayout, index: i32, _widget: anytype) void {
        comptime _ = @TypeOf(_widget)._is_QWidget;
        qtc.QBoxLayout_InsertWidget(@ptrCast(self.ptr), @bitCast(index), @ptrCast(_widget.ptr));
    }

    /// ### DEPRECATED: Use `insertLayout` instead
    ///
    pub const InsertLayout = insertLayout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` index: i32 `
    ///
    /// ` _layout: QLayout `
    ///
    pub fn insertLayout(self: QBoxLayout, index: i32, _layout: anytype) void {
        comptime _ = @TypeOf(_layout)._is_QLayout;
        qtc.QBoxLayout_InsertLayout(@ptrCast(self.ptr), @bitCast(index), @ptrCast(_layout.ptr));
    }

    /// ### DEPRECATED: Use `insertItem` instead
    ///
    pub const InsertItem = insertItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` index: i32 `
    ///
    /// ` param2: QLayoutItem `
    ///
    pub fn insertItem(self: QBoxLayout, index: i32, param2: anytype) void {
        comptime _ = @TypeOf(param2)._is_QLayoutItem;
        qtc.QBoxLayout_InsertItem(@ptrCast(self.ptr), @bitCast(index), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `spacing` instead
    ///
    pub const Spacing = spacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#spacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn spacing(self: QBoxLayout) i32 {
        return qtc.QBoxLayout_Spacing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSpacing` instead
    ///
    pub const OnSpacing = onSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#spacing)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSpacing(self: QBoxLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QBoxLayout_OnSpacing(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSpacing` instead
    ///
    pub const SuperSpacing = superSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#spacing)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn superSpacing(self: QBoxLayout) i32 {
        return qtc.QBoxLayout_SuperSpacing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSpacing` instead
    ///
    pub const SetSpacing = setSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` _spacing: i32 `
    ///
    pub fn setSpacing(self: QBoxLayout, _spacing: i32) void {
        qtc.QBoxLayout_SetSpacing(@ptrCast(self.ptr), @bitCast(_spacing));
    }

    /// ### DEPRECATED: Use `onSetSpacing` instead
    ///
    pub const OnSetSpacing = onSetSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setSpacing)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` callback: *const fn (self: QBoxLayout, spacing: i32) callconv(.c) void `
    ///
    pub fn onSetSpacing(self: QBoxLayout, callback: *const fn (QBoxLayout, i32) callconv(.c) void) void {
        qtc.QBoxLayout_OnSetSpacing(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetSpacing` instead
    ///
    pub const SuperSetSpacing = superSetSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setSpacing)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` _spacing: i32 `
    ///
    pub fn superSetSpacing(self: QBoxLayout, _spacing: i32) void {
        qtc.QBoxLayout_SuperSetSpacing(@ptrCast(self.ptr), @bitCast(_spacing));
    }

    /// ### DEPRECATED: Use `setStretchFactor` instead
    ///
    pub const SetStretchFactor = setStretchFactor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setStretchFactor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` w: QWidget `
    ///
    /// ` _stretch: i32 `
    ///
    pub fn setStretchFactor(self: QBoxLayout, w: anytype, _stretch: i32) bool {
        comptime _ = @TypeOf(w)._is_QWidget;
        return qtc.QBoxLayout_SetStretchFactor(@ptrCast(self.ptr), @ptrCast(w.ptr), @bitCast(_stretch));
    }

    /// ### DEPRECATED: Use `setStretchFactor2` instead
    ///
    pub const SetStretchFactor2 = setStretchFactor2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setStretchFactor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` l: QLayout `
    ///
    /// ` _stretch: i32 `
    ///
    pub fn setStretchFactor2(self: QBoxLayout, l: anytype, _stretch: i32) bool {
        comptime _ = @TypeOf(l)._is_QLayout;
        return qtc.QBoxLayout_SetStretchFactor2(@ptrCast(self.ptr), @ptrCast(l.ptr), @bitCast(_stretch));
    }

    /// ### DEPRECATED: Use `setStretch` instead
    ///
    pub const SetStretch = setStretch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` index: i32 `
    ///
    /// ` _stretch: i32 `
    ///
    pub fn setStretch(self: QBoxLayout, index: i32, _stretch: i32) void {
        qtc.QBoxLayout_SetStretch(@ptrCast(self.ptr), @bitCast(index), @bitCast(_stretch));
    }

    /// ### DEPRECATED: Use `stretch` instead
    ///
    pub const Stretch = stretch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#stretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn stretch(self: QBoxLayout, index: i32) i32 {
        return qtc.QBoxLayout_Stretch(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `sizeHint` instead
    ///
    pub const SizeHint = sizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn sizeHint(self: QBoxLayout) QSize {
        return .{ .ptr = qtc.QBoxLayout_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSizeHint` instead
    ///
    pub const OnSizeHint = onSizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#sizeHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSizeHint(self: QBoxLayout, callback: *const fn () callconv(.c) QSize) void {
        qtc.QBoxLayout_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSizeHint` instead
    ///
    pub const SuperSizeHint = superSizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#sizeHint)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn superSizeHint(self: QBoxLayout) QSize {
        return .{ .ptr = qtc.QBoxLayout_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `minimumSize` instead
    ///
    pub const MinimumSize = minimumSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn minimumSize(self: QBoxLayout) QSize {
        return .{ .ptr = qtc.QBoxLayout_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMinimumSize` instead
    ///
    pub const OnMinimumSize = onMinimumSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#minimumSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMinimumSize(self: QBoxLayout, callback: *const fn () callconv(.c) QSize) void {
        qtc.QBoxLayout_OnMinimumSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMinimumSize` instead
    ///
    pub const SuperMinimumSize = superMinimumSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#minimumSize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn superMinimumSize(self: QBoxLayout) QSize {
        return .{ .ptr = qtc.QBoxLayout_SuperMinimumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `maximumSize` instead
    ///
    pub const MaximumSize = maximumSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn maximumSize(self: QBoxLayout) QSize {
        return .{ .ptr = qtc.QBoxLayout_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMaximumSize` instead
    ///
    pub const OnMaximumSize = onMaximumSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#maximumSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMaximumSize(self: QBoxLayout, callback: *const fn () callconv(.c) QSize) void {
        qtc.QBoxLayout_OnMaximumSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMaximumSize` instead
    ///
    pub const SuperMaximumSize = superMaximumSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#maximumSize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn superMaximumSize(self: QBoxLayout) QSize {
        return .{ .ptr = qtc.QBoxLayout_SuperMaximumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `hasHeightForWidth` instead
    ///
    pub const HasHeightForWidth = hasHeightForWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#hasHeightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn hasHeightForWidth(self: QBoxLayout) bool {
        return qtc.QBoxLayout_HasHeightForWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHasHeightForWidth` instead
    ///
    pub const OnHasHeightForWidth = onHasHeightForWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#hasHeightForWidth)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onHasHeightForWidth(self: QBoxLayout, callback: *const fn () callconv(.c) bool) void {
        qtc.QBoxLayout_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHasHeightForWidth` instead
    ///
    pub const SuperHasHeightForWidth = superHasHeightForWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#hasHeightForWidth)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn superHasHeightForWidth(self: QBoxLayout) bool {
        return qtc.QBoxLayout_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `heightForWidth` instead
    ///
    pub const HeightForWidth = heightForWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#heightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn heightForWidth(self: QBoxLayout, param1: i32) i32 {
        return qtc.QBoxLayout_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onHeightForWidth` instead
    ///
    pub const OnHeightForWidth = onHeightForWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#heightForWidth)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` callback: *const fn (self: QBoxLayout, param1: i32) callconv(.c) i32 `
    ///
    pub fn onHeightForWidth(self: QBoxLayout, callback: *const fn (QBoxLayout, i32) callconv(.c) i32) void {
        qtc.QBoxLayout_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHeightForWidth` instead
    ///
    pub const SuperHeightForWidth = superHeightForWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#heightForWidth)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn superHeightForWidth(self: QBoxLayout, param1: i32) i32 {
        return qtc.QBoxLayout_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `minimumHeightForWidth` instead
    ///
    pub const MinimumHeightForWidth = minimumHeightForWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#minimumHeightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn minimumHeightForWidth(self: QBoxLayout, param1: i32) i32 {
        return qtc.QBoxLayout_MinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onMinimumHeightForWidth` instead
    ///
    pub const OnMinimumHeightForWidth = onMinimumHeightForWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#minimumHeightForWidth)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` callback: *const fn (self: QBoxLayout, param1: i32) callconv(.c) i32 `
    ///
    pub fn onMinimumHeightForWidth(self: QBoxLayout, callback: *const fn (QBoxLayout, i32) callconv(.c) i32) void {
        qtc.QBoxLayout_OnMinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMinimumHeightForWidth` instead
    ///
    pub const SuperMinimumHeightForWidth = superMinimumHeightForWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#minimumHeightForWidth)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn superMinimumHeightForWidth(self: QBoxLayout, param1: i32) i32 {
        return qtc.QBoxLayout_SuperMinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `expandingDirections` instead
    ///
    pub const ExpandingDirections = expandingDirections;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#expandingDirections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.Orientation `
    ///
    pub fn expandingDirections(self: QBoxLayout) i32 {
        return qtc.QBoxLayout_ExpandingDirections(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onExpandingDirections` instead
    ///
    pub const OnExpandingDirections = onExpandingDirections;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#expandingDirections)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onExpandingDirections(self: QBoxLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QBoxLayout_OnExpandingDirections(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superExpandingDirections` instead
    ///
    pub const SuperExpandingDirections = superExpandingDirections;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#expandingDirections)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.Orientation `
    ///
    pub fn superExpandingDirections(self: QBoxLayout) i32 {
        return qtc.QBoxLayout_SuperExpandingDirections(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `invalidate` instead
    ///
    pub const Invalidate = invalidate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#invalidate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn invalidate(self: QBoxLayout) void {
        qtc.QBoxLayout_Invalidate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onInvalidate` instead
    ///
    pub const OnInvalidate = onInvalidate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#invalidate)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onInvalidate(self: QBoxLayout, callback: *const fn () callconv(.c) void) void {
        qtc.QBoxLayout_OnInvalidate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInvalidate` instead
    ///
    pub const SuperInvalidate = superInvalidate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#invalidate)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn superInvalidate(self: QBoxLayout) void {
        qtc.QBoxLayout_SuperInvalidate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `itemAt` instead
    ///
    pub const ItemAt = itemAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#itemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn itemAt(self: QBoxLayout, param1: i32) QLayoutItem {
        return .{ .ptr = qtc.QBoxLayout_ItemAt(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `onItemAt` instead
    ///
    pub const OnItemAt = onItemAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#itemAt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` callback: *const fn (self: QBoxLayout, param1: i32) callconv(.c) QLayoutItem `
    ///
    pub fn onItemAt(self: QBoxLayout, callback: *const fn (QBoxLayout, i32) callconv(.c) QLayoutItem) void {
        qtc.QBoxLayout_OnItemAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superItemAt` instead
    ///
    pub const SuperItemAt = superItemAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#itemAt)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn superItemAt(self: QBoxLayout, param1: i32) QLayoutItem {
        return .{ .ptr = qtc.QBoxLayout_SuperItemAt(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `takeAt` instead
    ///
    pub const TakeAt = takeAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#takeAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn takeAt(self: QBoxLayout, param1: i32) QLayoutItem {
        return .{ .ptr = qtc.QBoxLayout_TakeAt(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `onTakeAt` instead
    ///
    pub const OnTakeAt = onTakeAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#takeAt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` callback: *const fn (self: QBoxLayout, param1: i32) callconv(.c) QLayoutItem `
    ///
    pub fn onTakeAt(self: QBoxLayout, callback: *const fn (QBoxLayout, i32) callconv(.c) QLayoutItem) void {
        qtc.QBoxLayout_OnTakeAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superTakeAt` instead
    ///
    pub const SuperTakeAt = superTakeAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#takeAt)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn superTakeAt(self: QBoxLayout, param1: i32) QLayoutItem {
        return .{ .ptr = qtc.QBoxLayout_SuperTakeAt(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `count` instead
    ///
    pub const Count = count;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn count(self: QBoxLayout) i32 {
        return qtc.QBoxLayout_Count(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCount` instead
    ///
    pub const OnCount = onCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#count)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onCount(self: QBoxLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QBoxLayout_OnCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCount` instead
    ///
    pub const SuperCount = superCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#count)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn superCount(self: QBoxLayout) i32 {
        return qtc.QBoxLayout_SuperCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setGeometry` instead
    ///
    pub const SetGeometry = setGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` _geometry: QRect `
    ///
    pub fn setGeometry(self: QBoxLayout, _geometry: anytype) void {
        comptime _ = @TypeOf(_geometry)._is_QRect;
        qtc.QBoxLayout_SetGeometry(@ptrCast(self.ptr), @ptrCast(_geometry.ptr));
    }

    /// ### DEPRECATED: Use `onSetGeometry` instead
    ///
    pub const OnSetGeometry = onSetGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setGeometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` callback: *const fn (self: QBoxLayout, geometry: QRect) callconv(.c) void `
    ///
    pub fn onSetGeometry(self: QBoxLayout, callback: *const fn (QBoxLayout, QRect) callconv(.c) void) void {
        qtc.QBoxLayout_OnSetGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetGeometry` instead
    ///
    pub const SuperSetGeometry = superSetGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setGeometry)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` _geometry: QRect `
    ///
    pub fn superSetGeometry(self: QBoxLayout, _geometry: anytype) void {
        comptime _ = @TypeOf(_geometry)._is_QRect;
        qtc.QBoxLayout_SuperSetGeometry(@ptrCast(self.ptr), @ptrCast(_geometry.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBoxLayout.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBoxLayout.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `addStretch1` instead
    ///
    pub const AddStretch1 = addStretch1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` _stretch: i32 `
    ///
    pub fn addStretch1(self: QBoxLayout, _stretch: i32) void {
        qtc.QBoxLayout_AddStretch1(@ptrCast(self.ptr), @bitCast(_stretch));
    }

    /// ### DEPRECATED: Use `addWidget2` instead
    ///
    pub const AddWidget2 = addWidget2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` param1: QWidget `
    ///
    /// ` _stretch: i32 `
    ///
    pub fn addWidget2(self: QBoxLayout, param1: anytype, _stretch: i32) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QBoxLayout_AddWidget2(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(_stretch));
    }

    /// ### DEPRECATED: Use `addWidget3` instead
    ///
    pub const AddWidget3 = addWidget3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` param1: QWidget `
    ///
    /// ` _stretch: i32 `
    ///
    /// ` _alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn addWidget3(self: QBoxLayout, param1: anytype, _stretch: i32, _alignment: i32) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QBoxLayout_AddWidget3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(_stretch), @bitCast(_alignment));
    }

    /// ### DEPRECATED: Use `addLayout2` instead
    ///
    pub const AddLayout2 = addLayout2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` _layout: QLayout `
    ///
    /// ` _stretch: i32 `
    ///
    pub fn addLayout2(self: QBoxLayout, _layout: anytype, _stretch: i32) void {
        comptime _ = @TypeOf(_layout)._is_QLayout;
        qtc.QBoxLayout_AddLayout2(@ptrCast(self.ptr), @ptrCast(_layout.ptr), @bitCast(_stretch));
    }

    /// ### DEPRECATED: Use `insertStretch2` instead
    ///
    pub const InsertStretch2 = insertStretch2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` index: i32 `
    ///
    /// ` _stretch: i32 `
    ///
    pub fn insertStretch2(self: QBoxLayout, index: i32, _stretch: i32) void {
        qtc.QBoxLayout_InsertStretch2(@ptrCast(self.ptr), @bitCast(index), @bitCast(_stretch));
    }

    /// ### DEPRECATED: Use `insertWidget3` instead
    ///
    pub const InsertWidget3 = insertWidget3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` index: i32 `
    ///
    /// ` _widget: QWidget `
    ///
    /// ` _stretch: i32 `
    ///
    pub fn insertWidget3(self: QBoxLayout, index: i32, _widget: anytype, _stretch: i32) void {
        comptime _ = @TypeOf(_widget)._is_QWidget;
        qtc.QBoxLayout_InsertWidget3(@ptrCast(self.ptr), @bitCast(index), @ptrCast(_widget.ptr), @bitCast(_stretch));
    }

    /// ### DEPRECATED: Use `insertWidget4` instead
    ///
    pub const InsertWidget4 = insertWidget4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` index: i32 `
    ///
    /// ` _widget: QWidget `
    ///
    /// ` _stretch: i32 `
    ///
    /// ` _alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn insertWidget4(self: QBoxLayout, index: i32, _widget: anytype, _stretch: i32, _alignment: i32) void {
        comptime _ = @TypeOf(_widget)._is_QWidget;
        qtc.QBoxLayout_InsertWidget4(@ptrCast(self.ptr), @bitCast(index), @ptrCast(_widget.ptr), @bitCast(_stretch), @bitCast(_alignment));
    }

    /// ### DEPRECATED: Use `insertLayout3` instead
    ///
    pub const InsertLayout3 = insertLayout3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` index: i32 `
    ///
    /// ` _layout: QLayout `
    ///
    /// ` _stretch: i32 `
    ///
    pub fn insertLayout3(self: QBoxLayout, index: i32, _layout: anytype, _stretch: i32) void {
        comptime _ = @TypeOf(_layout)._is_QLayout;
        qtc.QBoxLayout_InsertLayout3(@ptrCast(self.ptr), @bitCast(index), @ptrCast(_layout.ptr), @bitCast(_stretch));
    }

    /// Inherited from QLayout
    ///
    /// Upcasts to a QLayoutItem object
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn asQLayoutItem(self: QBoxLayout) QLayoutItem {
        return .{ .ptr = qtc.QLayout_AsQLayoutItem(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayout
    ///
    /// Downcasts to a QBoxLayout object
    ///
    /// ## Parameter(s):
    ///
    /// ` _qlayoutitem: QLayoutItem `
    ///
    pub fn fromQLayoutItem(_qlayoutitem: anytype) QBoxLayout {
        comptime _ = @TypeOf(_qlayoutitem)._is_QLayoutItem;
        return .{ .ptr = @ptrCast(qtc.QLayout_FromQLayoutItem(@ptrCast(_qlayoutitem.ptr))) };
    }

    /// ### DEPRECATED: Use `setContentsMargins` instead
    ///
    pub const SetContentsMargins = setContentsMargins;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn setContentsMargins(self: QBoxLayout, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QLayout_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// ### DEPRECATED: Use `setContentsMargins2` instead
    ///
    pub const SetContentsMargins2 = setContentsMargins2;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` margins: QMargins `
    ///
    pub fn setContentsMargins2(self: QBoxLayout, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QLayout_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// ### DEPRECATED: Use `unsetContentsMargins` instead
    ///
    pub const UnsetContentsMargins = unsetContentsMargins;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#unsetContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn unsetContentsMargins(self: QBoxLayout) void {
        qtc.QLayout_UnsetContentsMargins(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `getContentsMargins` instead
    ///
    pub const GetContentsMargins = getContentsMargins;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#getContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` left: *i32 `
    ///
    /// ` top: *i32 `
    ///
    /// ` right: *i32 `
    ///
    /// ` bottom: *i32 `
    ///
    pub fn getContentsMargins(self: QBoxLayout, left: *i32, top: *i32, right: *i32, bottom: *i32) void {
        qtc.QLayout_GetContentsMargins(@ptrCast(self.ptr), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// ### DEPRECATED: Use `contentsMargins` instead
    ///
    pub const ContentsMargins = contentsMargins;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn contentsMargins(self: QBoxLayout) QMargins {
        return .{ .ptr = qtc.QLayout_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `contentsRect` instead
    ///
    pub const ContentsRect = contentsRect;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn contentsRect(self: QBoxLayout) QRect {
        return .{ .ptr = qtc.QLayout_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAlignment` instead
    ///
    pub const SetAlignment = setAlignment;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` w: QWidget `
    ///
    /// ` _alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn setAlignment(self: QBoxLayout, w: anytype, _alignment: i32) bool {
        comptime _ = @TypeOf(w)._is_QWidget;
        return qtc.QLayout_SetAlignment(@ptrCast(self.ptr), @ptrCast(w.ptr), @bitCast(_alignment));
    }

    /// ### DEPRECATED: Use `setAlignment2` instead
    ///
    pub const SetAlignment2 = setAlignment2;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` l: QLayout `
    ///
    /// ` _alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn setAlignment2(self: QBoxLayout, l: anytype, _alignment: i32) bool {
        comptime _ = @TypeOf(l)._is_QLayout;
        return qtc.QLayout_SetAlignment2(@ptrCast(self.ptr), @ptrCast(l.ptr), @bitCast(_alignment));
    }

    /// ### DEPRECATED: Use `setSizeConstraint` instead
    ///
    pub const SetSizeConstraint = setSizeConstraint;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setSizeConstraint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` _sizeConstraint: qlayout_enums.SizeConstraint `
    ///
    pub fn setSizeConstraint(self: QBoxLayout, _sizeConstraint: i32) void {
        qtc.QLayout_SetSizeConstraint(@ptrCast(self.ptr), @bitCast(_sizeConstraint));
    }

    /// ### DEPRECATED: Use `sizeConstraint` instead
    ///
    pub const SizeConstraint = sizeConstraint;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#sizeConstraint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ## Returns:
    ///
    /// ` qlayout_enums.SizeConstraint `
    ///
    pub fn sizeConstraint(self: QBoxLayout) i32 {
        return qtc.QLayout_SizeConstraint(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMenuBar` instead
    ///
    pub const SetMenuBar = setMenuBar;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setMenuBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` w: QWidget `
    ///
    pub fn setMenuBar(self: QBoxLayout, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QLayout_SetMenuBar(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `menuBar` instead
    ///
    pub const MenuBar = menuBar;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#menuBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn menuBar(self: QBoxLayout) QWidget {
        return .{ .ptr = qtc.QLayout_MenuBar(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `parentWidget` instead
    ///
    pub const ParentWidget = parentWidget;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#parentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn parentWidget(self: QBoxLayout) QWidget {
        return .{ .ptr = qtc.QLayout_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `activate` instead
    ///
    pub const Activate = activate;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#activate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn activate(self: QBoxLayout) bool {
        return qtc.QLayout_Activate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `update` instead
    ///
    pub const Update = update;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn update(self: QBoxLayout) void {
        qtc.QLayout_Update(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `removeWidget` instead
    ///
    pub const RemoveWidget = removeWidget;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#removeWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` w: QWidget `
    ///
    pub fn removeWidget(self: QBoxLayout, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QLayout_RemoveWidget(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `removeItem` instead
    ///
    pub const RemoveItem = removeItem;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#removeItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` param1: QLayoutItem `
    ///
    pub fn removeItem(self: QBoxLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QLayoutItem;
        qtc.QLayout_RemoveItem(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `indexOf2` instead
    ///
    pub const IndexOf2 = indexOf2;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` param1: QLayoutItem `
    ///
    pub fn indexOf2(self: QBoxLayout, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QLayoutItem;
        return qtc.QLayout_IndexOf2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onIndexOf2` instead
    ///
    pub const OnIndexOf2 = onIndexOf2;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` callback: *const fn (self: QBoxLayout, param1: QLayoutItem) callconv(.c) i32 `
    ///
    pub fn onIndexOf2(self: QBoxLayout, callback: *const fn (QBoxLayout, QLayoutItem) callconv(.c) i32) void {
        qtc.QLayout_OnIndexOf2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIndexOf2` instead
    ///
    pub const SuperIndexOf2 = superIndexOf2;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` param1: QLayoutItem `
    ///
    pub fn superIndexOf2(self: QBoxLayout, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QLayoutItem;
        return qtc.QLayout_SuperIndexOf2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `totalMinimumHeightForWidth` instead
    ///
    pub const TotalMinimumHeightForWidth = totalMinimumHeightForWidth;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalMinimumHeightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` w: i32 `
    ///
    pub fn totalMinimumHeightForWidth(self: QBoxLayout, w: i32) i32 {
        return qtc.QLayout_TotalMinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// ### DEPRECATED: Use `totalHeightForWidth` instead
    ///
    pub const TotalHeightForWidth = totalHeightForWidth;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalHeightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` w: i32 `
    ///
    pub fn totalHeightForWidth(self: QBoxLayout, w: i32) i32 {
        return qtc.QLayout_TotalHeightForWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// ### DEPRECATED: Use `totalMinimumSize` instead
    ///
    pub const TotalMinimumSize = totalMinimumSize;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn totalMinimumSize(self: QBoxLayout) QSize {
        return .{ .ptr = qtc.QLayout_TotalMinimumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `totalMaximumSize` instead
    ///
    pub const TotalMaximumSize = totalMaximumSize;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn totalMaximumSize(self: QBoxLayout) QSize {
        return .{ .ptr = qtc.QLayout_TotalMaximumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `totalSizeHint` instead
    ///
    pub const TotalSizeHint = totalSizeHint;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalSizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn totalSizeHint(self: QBoxLayout) QSize {
        return .{ .ptr = qtc.QLayout_TotalSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setEnabled` instead
    ///
    pub const SetEnabled = setEnabled;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` enabled: bool `
    ///
    pub fn setEnabled(self: QBoxLayout, enabled: bool) void {
        qtc.QLayout_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `isEnabled` instead
    ///
    pub const IsEnabled = isEnabled;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn isEnabled(self: QBoxLayout) bool {
        return qtc.QLayout_IsEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `closestAcceptableSize` instead
    ///
    pub const ClosestAcceptableSize = closestAcceptableSize;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#closestAcceptableSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` w: QWidget `
    ///
    /// ` s: QSize `
    ///
    pub fn closestAcceptableSize(w: anytype, s: anytype) QSize {
        comptime _ = @TypeOf(w)._is_QWidget;
        comptime _ = @TypeOf(s)._is_QSize;
        return .{ .ptr = qtc.QLayout_ClosestAcceptableSize(@ptrCast(w.ptr), @ptrCast(s.ptr)) };
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
    /// ` self: QBoxLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QBoxLayout, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBoxLayout.objectName: Memory allocation failed");
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
    /// ` self: QBoxLayout `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QBoxLayout, name: []const u8) void {
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
    /// ` self: QBoxLayout `
    ///
    pub fn isWidgetType(self: QBoxLayout) bool {
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
    /// ` self: QBoxLayout `
    ///
    pub fn isWindowType(self: QBoxLayout) bool {
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
    /// ` self: QBoxLayout `
    ///
    pub fn isQuickItemType(self: QBoxLayout) bool {
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
    /// ` self: QBoxLayout `
    ///
    pub fn signalsBlocked(self: QBoxLayout) bool {
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
    /// ` self: QBoxLayout `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QBoxLayout, b: bool) bool {
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
    /// ` self: QBoxLayout `
    ///
    pub fn thread(self: QBoxLayout) QThread {
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
    /// ` self: QBoxLayout `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QBoxLayout, _thread: anytype) bool {
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
    /// ` self: QBoxLayout `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QBoxLayout, interval: i32) i32 {
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
    /// ` self: QBoxLayout `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QBoxLayout, time: i64) i32 {
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
    /// ` self: QBoxLayout `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QBoxLayout, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
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
    /// ` self: QBoxLayout `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QBoxLayout, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
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
    /// ` self: QBoxLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QBoxLayout, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QBoxLayout.children: Memory allocation failed");
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
    /// ` self: QBoxLayout `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QBoxLayout, _parent: anytype) void {
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
    /// ` self: QBoxLayout `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QBoxLayout, filterObj: anytype) void {
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
    /// ` self: QBoxLayout `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QBoxLayout, obj: anytype) void {
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
    /// ` self: QBoxLayout `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QBoxLayout, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QBoxLayout `
    ///
    pub fn disconnect3(self: QBoxLayout) bool {
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
    /// ` self: QBoxLayout `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QBoxLayout, receiver: anytype) bool {
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
    /// ` self: QBoxLayout `
    ///
    pub fn dumpObjectTree(self: QBoxLayout) void {
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
    /// ` self: QBoxLayout `
    ///
    pub fn dumpObjectInfo(self: QBoxLayout) void {
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
    /// ` self: QBoxLayout `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QBoxLayout, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QBoxLayout `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QBoxLayout, name: [:0]const u8) QVariant {
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
    /// ` self: QBoxLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QBoxLayout, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QBoxLayout.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QBoxLayout.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QBoxLayout `
    ///
    pub fn bindingStorage(self: QBoxLayout) QBindingStorage {
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
    /// ` self: QBoxLayout `
    ///
    pub fn bindingStorage2(self: QBoxLayout) QBindingStorage {
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
    /// ` self: QBoxLayout `
    ///
    pub fn destroyed(self: QBoxLayout) void {
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
    /// ` self: QBoxLayout `
    ///
    /// ` callback: *const fn (self: QBoxLayout) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QBoxLayout, callback: *const fn (QBoxLayout) callconv(.c) void) void {
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
    /// ` self: QBoxLayout `
    ///
    pub fn parent(self: QBoxLayout) QObject {
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
    /// ` self: QBoxLayout `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QBoxLayout, classname: [:0]const u8) bool {
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
    /// ` self: QBoxLayout `
    ///
    pub fn deleteLater(self: QBoxLayout) void {
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
    /// ` self: QBoxLayout `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QBoxLayout, interval: i32, timerType: i32) i32 {
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
    /// ` self: QBoxLayout `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QBoxLayout, time: i64, timerType: i32) i32 {
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
    /// ` self: QBoxLayout `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QBoxLayout, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QBoxLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QBoxLayout, signal: [:0]const u8) bool {
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
    /// ` self: QBoxLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QBoxLayout, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QBoxLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QBoxLayout, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QBoxLayout `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QBoxLayout, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QBoxLayout `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QBoxLayout, param1: anytype) void {
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
    /// ` self: QBoxLayout `
    ///
    /// ` callback: *const fn (self: QBoxLayout, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QBoxLayout, callback: *const fn (QBoxLayout, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `alignment` instead
    ///
    pub const Alignment = alignment;

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn alignment(self: QBoxLayout) i32 {
        return qtc.QLayoutItem_Alignment(@ptrCast(self.asQLayoutItem().ptr));
    }

    /// ### DEPRECATED: Use `geometry` instead
    ///
    pub const Geometry = geometry;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#geometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn geometry(self: QBoxLayout) QRect {
        return .{ .ptr = qtc.QBoxLayout_Geometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superGeometry` instead
    ///
    pub const SuperGeometry = superGeometry;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#geometry)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn superGeometry(self: QBoxLayout) QRect {
        return .{ .ptr = qtc.QBoxLayout_SuperGeometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onGeometry` instead
    ///
    pub const OnGeometry = onGeometry;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#geometry)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxLayout`
    ///
    /// ` callback: *const fn () callconv(.c) QRect `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onGeometry(self: QBoxLayout, callback: *const fn () callconv(.c) QRect) void {
        qtc.QBoxLayout_OnGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `indexOf` instead
    ///
    pub const IndexOf = indexOf;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` param1: QWidget `
    ///
    pub fn indexOf(self: QBoxLayout, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QBoxLayout_IndexOf(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superIndexOf` instead
    ///
    pub const SuperIndexOf = superIndexOf;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` param1: QWidget `
    ///
    pub fn superIndexOf(self: QBoxLayout, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QBoxLayout_SuperIndexOf(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onIndexOf` instead
    ///
    pub const OnIndexOf = onIndexOf;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxLayout`
    ///
    /// ` callback: *const fn (self: QBoxLayout, param1: QWidget) callconv(.c) i32 `
    ///
    pub fn onIndexOf(self: QBoxLayout, callback: *const fn (QBoxLayout, QWidget) callconv(.c) i32) void {
        qtc.QBoxLayout_OnIndexOf(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn isEmpty(self: QBoxLayout) bool {
        return qtc.QBoxLayout_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superIsEmpty` instead
    ///
    pub const SuperIsEmpty = superIsEmpty;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn superIsEmpty(self: QBoxLayout) bool {
        return qtc.QBoxLayout_SuperIsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsEmpty` instead
    ///
    pub const OnIsEmpty = onIsEmpty;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxLayout`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsEmpty(self: QBoxLayout, callback: *const fn () callconv(.c) bool) void {
        qtc.QBoxLayout_OnIsEmpty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `controlTypes` instead
    ///
    pub const ControlTypes = controlTypes;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsizepolicy_enums.ControlType `
    ///
    pub fn controlTypes(self: QBoxLayout) i32 {
        return qtc.QBoxLayout_ControlTypes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superControlTypes` instead
    ///
    pub const SuperControlTypes = superControlTypes;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsizepolicy_enums.ControlType `
    ///
    pub fn superControlTypes(self: QBoxLayout) i32 {
        return qtc.QBoxLayout_SuperControlTypes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onControlTypes` instead
    ///
    pub const OnControlTypes = onControlTypes;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxLayout`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onControlTypes(self: QBoxLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QBoxLayout_OnControlTypes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `replaceWidget` instead
    ///
    pub const ReplaceWidget = replaceWidget;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` from: QWidget `
    ///
    /// ` to: QWidget `
    ///
    /// ` options: flag of qnamespace_enums.FindChildOption `
    ///
    pub fn replaceWidget(self: QBoxLayout, from: anytype, to: anytype, options: i32) QLayoutItem {
        comptime _ = @TypeOf(from)._is_QWidget;
        comptime _ = @TypeOf(to)._is_QWidget;
        return .{ .ptr = qtc.QBoxLayout_ReplaceWidget(@ptrCast(self.ptr), @ptrCast(from.ptr), @ptrCast(to.ptr), @bitCast(options)) };
    }

    /// ### DEPRECATED: Use `superReplaceWidget` instead
    ///
    pub const SuperReplaceWidget = superReplaceWidget;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` from: QWidget `
    ///
    /// ` to: QWidget `
    ///
    /// ` options: flag of qnamespace_enums.FindChildOption `
    ///
    pub fn superReplaceWidget(self: QBoxLayout, from: anytype, to: anytype, options: i32) QLayoutItem {
        comptime _ = @TypeOf(from)._is_QWidget;
        comptime _ = @TypeOf(to)._is_QWidget;
        return .{ .ptr = qtc.QBoxLayout_SuperReplaceWidget(@ptrCast(self.ptr), @ptrCast(from.ptr), @ptrCast(to.ptr), @bitCast(options)) };
    }

    /// ### DEPRECATED: Use `onReplaceWidget` instead
    ///
    pub const OnReplaceWidget = onReplaceWidget;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxLayout`
    ///
    /// ` callback: *const fn (self: QBoxLayout, from: QWidget, to: QWidget, options: flag of qnamespace_enums.FindChildOption) callconv(.c) QLayoutItem `
    ///
    pub fn onReplaceWidget(self: QBoxLayout, callback: *const fn (QBoxLayout, QWidget, QWidget, i32) callconv(.c) QLayoutItem) void {
        qtc.QBoxLayout_OnReplaceWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `layout` instead
    ///
    pub const Layout = layout;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#layout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn layout(self: QBoxLayout) QLayout {
        return .{ .ptr = qtc.QBoxLayout_Layout(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superLayout` instead
    ///
    pub const SuperLayout = superLayout;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#layout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn superLayout(self: QBoxLayout) QLayout {
        return .{ .ptr = qtc.QBoxLayout_SuperLayout(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onLayout` instead
    ///
    pub const OnLayout = onLayout;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#layout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxLayout`
    ///
    /// ` callback: *const fn () callconv(.c) QLayout `
    ///
    pub fn onLayout(self: QBoxLayout, callback: *const fn () callconv(.c) QLayout) void {
        qtc.QBoxLayout_OnLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childEvent` instead
    ///
    pub const ChildEvent = childEvent;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` e: QChildEvent `
    ///
    pub fn childEvent(self: QBoxLayout, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QChildEvent;
        qtc.QBoxLayout_ChildEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superChildEvent` instead
    ///
    pub const SuperChildEvent = superChildEvent;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` e: QChildEvent `
    ///
    pub fn superChildEvent(self: QBoxLayout, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QChildEvent;
        qtc.QBoxLayout_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onChildEvent` instead
    ///
    pub const OnChildEvent = onChildEvent;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxLayout`
    ///
    /// ` callback: *const fn (self: QBoxLayout, e: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QBoxLayout, callback: *const fn (QBoxLayout, QChildEvent) callconv(.c) void) void {
        qtc.QBoxLayout_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBoxLayout `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QBoxLayout, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QBoxLayout_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBoxLayout `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QBoxLayout, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QBoxLayout_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBoxLayout`
    ///
    /// ` callback: *const fn (self: QBoxLayout, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QBoxLayout, callback: *const fn (QBoxLayout, QEvent) callconv(.c) bool) void {
        qtc.QBoxLayout_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBoxLayout `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QBoxLayout, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QBoxLayout_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBoxLayout `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QBoxLayout, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QBoxLayout_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBoxLayout`
    ///
    /// ` callback: *const fn (self: QBoxLayout, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QBoxLayout, callback: *const fn (QBoxLayout, QObject, QEvent) callconv(.c) bool) void {
        qtc.QBoxLayout_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBoxLayout `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QBoxLayout, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QBoxLayout_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBoxLayout `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QBoxLayout, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QBoxLayout_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBoxLayout`
    ///
    /// ` callback: *const fn (self: QBoxLayout, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QBoxLayout, callback: *const fn (QBoxLayout, QTimerEvent) callconv(.c) void) void {
        qtc.QBoxLayout_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBoxLayout `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QBoxLayout, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QBoxLayout_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBoxLayout `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QBoxLayout, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QBoxLayout_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBoxLayout`
    ///
    /// ` callback: *const fn (self: QBoxLayout, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QBoxLayout, callback: *const fn (QBoxLayout, QEvent) callconv(.c) void) void {
        qtc.QBoxLayout_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBoxLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QBoxLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBoxLayout_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBoxLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QBoxLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBoxLayout_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBoxLayout`
    ///
    /// ` callback: *const fn (self: QBoxLayout, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QBoxLayout, callback: *const fn (QBoxLayout, QMetaMethod) callconv(.c) void) void {
        qtc.QBoxLayout_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBoxLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QBoxLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBoxLayout_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBoxLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QBoxLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBoxLayout_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBoxLayout`
    ///
    /// ` callback: *const fn (self: QBoxLayout, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QBoxLayout, callback: *const fn (QBoxLayout, QMetaMethod) callconv(.c) void) void {
        qtc.QBoxLayout_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `widget` instead
    ///
    pub const Widget = widget;

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn widget(self: QBoxLayout) QWidget {
        return .{ .ptr = qtc.QBoxLayout_Widget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superWidget` instead
    ///
    pub const SuperWidget = superWidget;

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn superWidget(self: QBoxLayout) QWidget {
        return .{ .ptr = qtc.QBoxLayout_SuperWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onWidget` instead
    ///
    pub const OnWidget = onWidget;

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxLayout`
    ///
    /// ` callback: *const fn () callconv(.c) QWidget `
    ///
    pub fn onWidget(self: QBoxLayout, callback: *const fn () callconv(.c) QWidget) void {
        qtc.QBoxLayout_OnWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `spacerItem` instead
    ///
    pub const SpacerItem = spacerItem;

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn spacerItem(self: QBoxLayout) QSpacerItem {
        return .{ .ptr = qtc.QBoxLayout_SpacerItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSpacerItem` instead
    ///
    pub const SuperSpacerItem = superSpacerItem;

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn superSpacerItem(self: QBoxLayout) QSpacerItem {
        return .{ .ptr = qtc.QBoxLayout_SuperSpacerItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSpacerItem` instead
    ///
    pub const OnSpacerItem = onSpacerItem;

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxLayout`
    ///
    /// ` callback: *const fn () callconv(.c) QSpacerItem `
    ///
    pub fn onSpacerItem(self: QBoxLayout, callback: *const fn () callconv(.c) QSpacerItem) void {
        qtc.QBoxLayout_OnSpacerItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `widgetEvent` instead
    ///
    pub const WidgetEvent = widgetEvent;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` param1: QEvent `
    ///
    pub fn widgetEvent(self: QBoxLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.QBoxLayout_WidgetEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superWidgetEvent` instead
    ///
    pub const SuperWidgetEvent = superWidgetEvent;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` param1: QEvent `
    ///
    pub fn superWidgetEvent(self: QBoxLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.QBoxLayout_SuperWidgetEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onWidgetEvent` instead
    ///
    pub const OnWidgetEvent = onWidgetEvent;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxLayout`
    ///
    /// ` callback: *const fn (self: QBoxLayout, param1: QEvent) callconv(.c) void `
    ///
    pub fn onWidgetEvent(self: QBoxLayout, callback: *const fn (QBoxLayout, QEvent) callconv(.c) void) void {
        qtc.QBoxLayout_OnWidgetEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `addChildLayout` instead
    ///
    pub const AddChildLayout = addChildLayout;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` l: QLayout `
    ///
    pub fn addChildLayout(self: QBoxLayout, l: anytype) void {
        comptime _ = @TypeOf(l)._is_QLayout;
        qtc.QBoxLayout_AddChildLayout(@ptrCast(self.ptr), @ptrCast(l.ptr));
    }

    /// ### DEPRECATED: Use `superAddChildLayout` instead
    ///
    pub const SuperAddChildLayout = superAddChildLayout;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` l: QLayout `
    ///
    pub fn superAddChildLayout(self: QBoxLayout, l: anytype) void {
        comptime _ = @TypeOf(l)._is_QLayout;
        qtc.QBoxLayout_SuperAddChildLayout(@ptrCast(self.ptr), @ptrCast(l.ptr));
    }

    /// ### DEPRECATED: Use `onAddChildLayout` instead
    ///
    pub const OnAddChildLayout = onAddChildLayout;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxLayout`
    ///
    /// ` callback: *const fn (self: QBoxLayout, l: QLayout) callconv(.c) void `
    ///
    pub fn onAddChildLayout(self: QBoxLayout, callback: *const fn (QBoxLayout, QLayout) callconv(.c) void) void {
        qtc.QBoxLayout_OnAddChildLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `addChildWidget` instead
    ///
    pub const AddChildWidget = addChildWidget;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` w: QWidget `
    ///
    pub fn addChildWidget(self: QBoxLayout, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QBoxLayout_AddChildWidget(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `superAddChildWidget` instead
    ///
    pub const SuperAddChildWidget = superAddChildWidget;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` w: QWidget `
    ///
    pub fn superAddChildWidget(self: QBoxLayout, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QBoxLayout_SuperAddChildWidget(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `onAddChildWidget` instead
    ///
    pub const OnAddChildWidget = onAddChildWidget;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxLayout`
    ///
    /// ` callback: *const fn (self: QBoxLayout, w: QWidget) callconv(.c) void `
    ///
    pub fn onAddChildWidget(self: QBoxLayout, callback: *const fn (QBoxLayout, QWidget) callconv(.c) void) void {
        qtc.QBoxLayout_OnAddChildWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `adoptLayout` instead
    ///
    pub const AdoptLayout = adoptLayout;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` _layout: QLayout `
    ///
    pub fn adoptLayout(self: QBoxLayout, _layout: anytype) bool {
        comptime _ = @TypeOf(_layout)._is_QLayout;
        return qtc.QBoxLayout_AdoptLayout(@ptrCast(self.ptr), @ptrCast(_layout.ptr));
    }

    /// ### DEPRECATED: Use `superAdoptLayout` instead
    ///
    pub const SuperAdoptLayout = superAdoptLayout;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` _layout: QLayout `
    ///
    pub fn superAdoptLayout(self: QBoxLayout, _layout: anytype) bool {
        comptime _ = @TypeOf(_layout)._is_QLayout;
        return qtc.QBoxLayout_SuperAdoptLayout(@ptrCast(self.ptr), @ptrCast(_layout.ptr));
    }

    /// ### DEPRECATED: Use `onAdoptLayout` instead
    ///
    pub const OnAdoptLayout = onAdoptLayout;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxLayout`
    ///
    /// ` callback: *const fn (self: QBoxLayout, layout: QLayout) callconv(.c) bool `
    ///
    pub fn onAdoptLayout(self: QBoxLayout, callback: *const fn (QBoxLayout, QLayout) callconv(.c) bool) void {
        qtc.QBoxLayout_OnAdoptLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `alignmentRect` instead
    ///
    pub const AlignmentRect = alignmentRect;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` param1: QRect `
    ///
    pub fn alignmentRect(self: QBoxLayout, param1: anytype) QRect {
        comptime _ = @TypeOf(param1)._is_QRect;
        return .{ .ptr = qtc.QBoxLayout_AlignmentRect(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `superAlignmentRect` instead
    ///
    pub const SuperAlignmentRect = superAlignmentRect;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` param1: QRect `
    ///
    pub fn superAlignmentRect(self: QBoxLayout, param1: anytype) QRect {
        comptime _ = @TypeOf(param1)._is_QRect;
        return .{ .ptr = qtc.QBoxLayout_SuperAlignmentRect(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `onAlignmentRect` instead
    ///
    pub const OnAlignmentRect = onAlignmentRect;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxLayout`
    ///
    /// ` callback: *const fn (self: QBoxLayout, param1: QRect) callconv(.c) QRect `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onAlignmentRect(self: QBoxLayout, callback: *const fn (QBoxLayout, QRect) callconv(.c) QRect) void {
        qtc.QBoxLayout_OnAlignmentRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBoxLayout `
    ///
    pub fn sender(self: QBoxLayout) QObject {
        return .{ .ptr = qtc.QBoxLayout_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QBoxLayout `
    ///
    pub fn superSender(self: QBoxLayout) QObject {
        return .{ .ptr = qtc.QBoxLayout_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QBoxLayout`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QBoxLayout, callback: *const fn () callconv(.c) QObject) void {
        qtc.QBoxLayout_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBoxLayout `
    ///
    pub fn senderSignalIndex(self: QBoxLayout) i32 {
        return qtc.QBoxLayout_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QBoxLayout `
    ///
    pub fn superSenderSignalIndex(self: QBoxLayout) i32 {
        return qtc.QBoxLayout_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QBoxLayout`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QBoxLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QBoxLayout_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBoxLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QBoxLayout, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QBoxLayout_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QBoxLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QBoxLayout, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QBoxLayout_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QBoxLayout`
    ///
    /// ` callback: *const fn (self: QBoxLayout, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QBoxLayout, callback: *const fn (QBoxLayout, [*:0]const u8) callconv(.c) i32) void {
        qtc.QBoxLayout_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBoxLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QBoxLayout, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QBoxLayout_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBoxLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QBoxLayout, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QBoxLayout_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBoxLayout`
    ///
    /// ` callback: *const fn (self: QBoxLayout, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QBoxLayout, callback: *const fn (QBoxLayout, QMetaMethod) callconv(.c) bool) void {
        qtc.QBoxLayout_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBoxLayout `
    ///
    /// ` callback: *const fn (self: QBoxLayout, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QBoxLayout, callback: *const fn (QBoxLayout, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#dtor.QBoxLayout)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn delete(self: QBoxLayout) void {
        qtc.QBoxLayout_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxlayout.html)
pub const QHBoxLayout = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxlayout.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QHBoxLayout,

    pub const _is_QHBoxLayout = {};
    pub const _is_QBoxLayout = {};
    pub const _is_QLayout = {};
    pub const _is_QObject = {};
    pub const _is_QLayoutItem = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QHBoxLayout object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QWidget `
    ///
    pub fn new(_parent: anytype) QHBoxLayout {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.QHBoxLayout_new(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QHBoxLayout object in C++ memory
    ///
    pub fn new2() QHBoxLayout {
        return .{ .ptr = qtc.QHBoxLayout_new2() };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn metaObject(self: QHBoxLayout) QMetaObject {
        return .{ .ptr = qtc.QHBoxLayout_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QHBoxLayout `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QHBoxLayout, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QHBoxLayout_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHBoxLayout `
    ///
    pub fn superMetaObject(self: QHBoxLayout) QMetaObject {
        return .{ .ptr = qtc.QHBoxLayout_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QHBoxLayout, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QHBoxLayout_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` callback: *const fn (self: QHBoxLayout, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QHBoxLayout, callback: *const fn (QHBoxLayout, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QHBoxLayout_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QHBoxLayout, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QHBoxLayout_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QHBoxLayout, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QHBoxLayout_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` callback: *const fn (self: QHBoxLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QHBoxLayout, callback: *const fn (QHBoxLayout, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QHBoxLayout_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QHBoxLayout, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QHBoxLayout_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QHBoxLayout.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QHBoxLayout.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QHBoxLayout.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `direction` instead
    ///
    pub const Direction = direction;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#direction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ## Returns:
    ///
    /// ` qboxlayout_enums.Direction `
    ///
    pub fn direction(self: QHBoxLayout) i32 {
        return qtc.QBoxLayout_Direction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDirection` instead
    ///
    pub const SetDirection = setDirection;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` _direction: qboxlayout_enums.Direction `
    ///
    pub fn setDirection(self: QHBoxLayout, _direction: i32) void {
        qtc.QBoxLayout_SetDirection(@ptrCast(self.ptr), @bitCast(_direction));
    }

    /// ### DEPRECATED: Use `addSpacing` instead
    ///
    pub const AddSpacing = addSpacing;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` size: i32 `
    ///
    pub fn addSpacing(self: QHBoxLayout, size: i32) void {
        qtc.QBoxLayout_AddSpacing(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `addStretch` instead
    ///
    pub const AddStretch = addStretch;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn addStretch(self: QHBoxLayout) void {
        qtc.QBoxLayout_AddStretch(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `addSpacerItem` instead
    ///
    pub const AddSpacerItem = addSpacerItem;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addSpacerItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` _spacerItem: QSpacerItem `
    ///
    pub fn addSpacerItem(self: QHBoxLayout, _spacerItem: anytype) void {
        comptime _ = @TypeOf(_spacerItem)._is_QSpacerItem;
        qtc.QBoxLayout_AddSpacerItem(@ptrCast(self.ptr), @ptrCast(_spacerItem.ptr));
    }

    /// ### DEPRECATED: Use `addWidget` instead
    ///
    pub const AddWidget = addWidget;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` param1: QWidget `
    ///
    pub fn addWidget(self: QHBoxLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QBoxLayout_AddWidget(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `addLayout` instead
    ///
    pub const AddLayout = addLayout;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` _layout: QLayout `
    ///
    pub fn addLayout(self: QHBoxLayout, _layout: anytype) void {
        comptime _ = @TypeOf(_layout)._is_QLayout;
        qtc.QBoxLayout_AddLayout(@ptrCast(self.ptr), @ptrCast(_layout.ptr));
    }

    /// ### DEPRECATED: Use `addStrut` instead
    ///
    pub const AddStrut = addStrut;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addStrut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn addStrut(self: QHBoxLayout, param1: i32) void {
        qtc.QBoxLayout_AddStrut(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `insertSpacing` instead
    ///
    pub const InsertSpacing = insertSpacing;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` index: i32 `
    ///
    /// ` size: i32 `
    ///
    pub fn insertSpacing(self: QHBoxLayout, index: i32, size: i32) void {
        qtc.QBoxLayout_InsertSpacing(@ptrCast(self.ptr), @bitCast(index), @bitCast(size));
    }

    /// ### DEPRECATED: Use `insertStretch` instead
    ///
    pub const InsertStretch = insertStretch;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn insertStretch(self: QHBoxLayout, index: i32) void {
        qtc.QBoxLayout_InsertStretch(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `insertSpacerItem` instead
    ///
    pub const InsertSpacerItem = insertSpacerItem;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertSpacerItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` index: i32 `
    ///
    /// ` _spacerItem: QSpacerItem `
    ///
    pub fn insertSpacerItem(self: QHBoxLayout, index: i32, _spacerItem: anytype) void {
        comptime _ = @TypeOf(_spacerItem)._is_QSpacerItem;
        qtc.QBoxLayout_InsertSpacerItem(@ptrCast(self.ptr), @bitCast(index), @ptrCast(_spacerItem.ptr));
    }

    /// ### DEPRECATED: Use `insertWidget` instead
    ///
    pub const InsertWidget = insertWidget;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` index: i32 `
    ///
    /// ` _widget: QWidget `
    ///
    pub fn insertWidget(self: QHBoxLayout, index: i32, _widget: anytype) void {
        comptime _ = @TypeOf(_widget)._is_QWidget;
        qtc.QBoxLayout_InsertWidget(@ptrCast(self.ptr), @bitCast(index), @ptrCast(_widget.ptr));
    }

    /// ### DEPRECATED: Use `insertLayout` instead
    ///
    pub const InsertLayout = insertLayout;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` index: i32 `
    ///
    /// ` _layout: QLayout `
    ///
    pub fn insertLayout(self: QHBoxLayout, index: i32, _layout: anytype) void {
        comptime _ = @TypeOf(_layout)._is_QLayout;
        qtc.QBoxLayout_InsertLayout(@ptrCast(self.ptr), @bitCast(index), @ptrCast(_layout.ptr));
    }

    /// ### DEPRECATED: Use `insertItem` instead
    ///
    pub const InsertItem = insertItem;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` index: i32 `
    ///
    /// ` param2: QLayoutItem `
    ///
    pub fn insertItem(self: QHBoxLayout, index: i32, param2: anytype) void {
        comptime _ = @TypeOf(param2)._is_QLayoutItem;
        qtc.QBoxLayout_InsertItem(@ptrCast(self.ptr), @bitCast(index), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `setStretchFactor` instead
    ///
    pub const SetStretchFactor = setStretchFactor;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setStretchFactor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` w: QWidget `
    ///
    /// ` _stretch: i32 `
    ///
    pub fn setStretchFactor(self: QHBoxLayout, w: anytype, _stretch: i32) bool {
        comptime _ = @TypeOf(w)._is_QWidget;
        return qtc.QBoxLayout_SetStretchFactor(@ptrCast(self.ptr), @ptrCast(w.ptr), @bitCast(_stretch));
    }

    /// ### DEPRECATED: Use `setStretchFactor2` instead
    ///
    pub const SetStretchFactor2 = setStretchFactor2;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setStretchFactor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` l: QLayout `
    ///
    /// ` _stretch: i32 `
    ///
    pub fn setStretchFactor2(self: QHBoxLayout, l: anytype, _stretch: i32) bool {
        comptime _ = @TypeOf(l)._is_QLayout;
        return qtc.QBoxLayout_SetStretchFactor2(@ptrCast(self.ptr), @ptrCast(l.ptr), @bitCast(_stretch));
    }

    /// ### DEPRECATED: Use `setStretch` instead
    ///
    pub const SetStretch = setStretch;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` index: i32 `
    ///
    /// ` _stretch: i32 `
    ///
    pub fn setStretch(self: QHBoxLayout, index: i32, _stretch: i32) void {
        qtc.QBoxLayout_SetStretch(@ptrCast(self.ptr), @bitCast(index), @bitCast(_stretch));
    }

    /// ### DEPRECATED: Use `stretch` instead
    ///
    pub const Stretch = stretch;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#stretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn stretch(self: QHBoxLayout, index: i32) i32 {
        return qtc.QBoxLayout_Stretch(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `addStretch1` instead
    ///
    pub const AddStretch1 = addStretch1;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` _stretch: i32 `
    ///
    pub fn addStretch1(self: QHBoxLayout, _stretch: i32) void {
        qtc.QBoxLayout_AddStretch1(@ptrCast(self.ptr), @bitCast(_stretch));
    }

    /// ### DEPRECATED: Use `addWidget2` instead
    ///
    pub const AddWidget2 = addWidget2;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` param1: QWidget `
    ///
    /// ` _stretch: i32 `
    ///
    pub fn addWidget2(self: QHBoxLayout, param1: anytype, _stretch: i32) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QBoxLayout_AddWidget2(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(_stretch));
    }

    /// ### DEPRECATED: Use `addWidget3` instead
    ///
    pub const AddWidget3 = addWidget3;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` param1: QWidget `
    ///
    /// ` _stretch: i32 `
    ///
    /// ` _alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn addWidget3(self: QHBoxLayout, param1: anytype, _stretch: i32, _alignment: i32) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QBoxLayout_AddWidget3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(_stretch), @bitCast(_alignment));
    }

    /// ### DEPRECATED: Use `addLayout2` instead
    ///
    pub const AddLayout2 = addLayout2;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` _layout: QLayout `
    ///
    /// ` _stretch: i32 `
    ///
    pub fn addLayout2(self: QHBoxLayout, _layout: anytype, _stretch: i32) void {
        comptime _ = @TypeOf(_layout)._is_QLayout;
        qtc.QBoxLayout_AddLayout2(@ptrCast(self.ptr), @ptrCast(_layout.ptr), @bitCast(_stretch));
    }

    /// ### DEPRECATED: Use `insertStretch2` instead
    ///
    pub const InsertStretch2 = insertStretch2;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` index: i32 `
    ///
    /// ` _stretch: i32 `
    ///
    pub fn insertStretch2(self: QHBoxLayout, index: i32, _stretch: i32) void {
        qtc.QBoxLayout_InsertStretch2(@ptrCast(self.ptr), @bitCast(index), @bitCast(_stretch));
    }

    /// ### DEPRECATED: Use `insertWidget3` instead
    ///
    pub const InsertWidget3 = insertWidget3;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` index: i32 `
    ///
    /// ` _widget: QWidget `
    ///
    /// ` _stretch: i32 `
    ///
    pub fn insertWidget3(self: QHBoxLayout, index: i32, _widget: anytype, _stretch: i32) void {
        comptime _ = @TypeOf(_widget)._is_QWidget;
        qtc.QBoxLayout_InsertWidget3(@ptrCast(self.ptr), @bitCast(index), @ptrCast(_widget.ptr), @bitCast(_stretch));
    }

    /// ### DEPRECATED: Use `insertWidget4` instead
    ///
    pub const InsertWidget4 = insertWidget4;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` index: i32 `
    ///
    /// ` _widget: QWidget `
    ///
    /// ` _stretch: i32 `
    ///
    /// ` _alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn insertWidget4(self: QHBoxLayout, index: i32, _widget: anytype, _stretch: i32, _alignment: i32) void {
        comptime _ = @TypeOf(_widget)._is_QWidget;
        qtc.QBoxLayout_InsertWidget4(@ptrCast(self.ptr), @bitCast(index), @ptrCast(_widget.ptr), @bitCast(_stretch), @bitCast(_alignment));
    }

    /// ### DEPRECATED: Use `insertLayout3` instead
    ///
    pub const InsertLayout3 = insertLayout3;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` index: i32 `
    ///
    /// ` _layout: QLayout `
    ///
    /// ` _stretch: i32 `
    ///
    pub fn insertLayout3(self: QHBoxLayout, index: i32, _layout: anytype, _stretch: i32) void {
        comptime _ = @TypeOf(_layout)._is_QLayout;
        qtc.QBoxLayout_InsertLayout3(@ptrCast(self.ptr), @bitCast(index), @ptrCast(_layout.ptr), @bitCast(_stretch));
    }

    /// Inherited from QLayout
    ///
    /// Upcasts to a QLayoutItem object
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn asQLayoutItem(self: QHBoxLayout) QLayoutItem {
        return .{ .ptr = qtc.QLayout_AsQLayoutItem(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayout
    ///
    /// Downcasts to a QHBoxLayout object
    ///
    /// ## Parameter(s):
    ///
    /// ` _qlayoutitem: QLayoutItem `
    ///
    pub fn fromQLayoutItem(_qlayoutitem: anytype) QHBoxLayout {
        comptime _ = @TypeOf(_qlayoutitem)._is_QLayoutItem;
        return .{ .ptr = @ptrCast(qtc.QLayout_FromQLayoutItem(@ptrCast(_qlayoutitem.ptr))) };
    }

    /// ### DEPRECATED: Use `setContentsMargins` instead
    ///
    pub const SetContentsMargins = setContentsMargins;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn setContentsMargins(self: QHBoxLayout, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QLayout_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// ### DEPRECATED: Use `setContentsMargins2` instead
    ///
    pub const SetContentsMargins2 = setContentsMargins2;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` margins: QMargins `
    ///
    pub fn setContentsMargins2(self: QHBoxLayout, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QLayout_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// ### DEPRECATED: Use `unsetContentsMargins` instead
    ///
    pub const UnsetContentsMargins = unsetContentsMargins;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#unsetContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn unsetContentsMargins(self: QHBoxLayout) void {
        qtc.QLayout_UnsetContentsMargins(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `getContentsMargins` instead
    ///
    pub const GetContentsMargins = getContentsMargins;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#getContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` left: *i32 `
    ///
    /// ` top: *i32 `
    ///
    /// ` right: *i32 `
    ///
    /// ` bottom: *i32 `
    ///
    pub fn getContentsMargins(self: QHBoxLayout, left: *i32, top: *i32, right: *i32, bottom: *i32) void {
        qtc.QLayout_GetContentsMargins(@ptrCast(self.ptr), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// ### DEPRECATED: Use `contentsMargins` instead
    ///
    pub const ContentsMargins = contentsMargins;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn contentsMargins(self: QHBoxLayout) QMargins {
        return .{ .ptr = qtc.QLayout_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `contentsRect` instead
    ///
    pub const ContentsRect = contentsRect;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn contentsRect(self: QHBoxLayout) QRect {
        return .{ .ptr = qtc.QLayout_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAlignment` instead
    ///
    pub const SetAlignment = setAlignment;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` w: QWidget `
    ///
    /// ` _alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn setAlignment(self: QHBoxLayout, w: anytype, _alignment: i32) bool {
        comptime _ = @TypeOf(w)._is_QWidget;
        return qtc.QLayout_SetAlignment(@ptrCast(self.ptr), @ptrCast(w.ptr), @bitCast(_alignment));
    }

    /// ### DEPRECATED: Use `setAlignment2` instead
    ///
    pub const SetAlignment2 = setAlignment2;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` l: QLayout `
    ///
    /// ` _alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn setAlignment2(self: QHBoxLayout, l: anytype, _alignment: i32) bool {
        comptime _ = @TypeOf(l)._is_QLayout;
        return qtc.QLayout_SetAlignment2(@ptrCast(self.ptr), @ptrCast(l.ptr), @bitCast(_alignment));
    }

    /// ### DEPRECATED: Use `setSizeConstraint` instead
    ///
    pub const SetSizeConstraint = setSizeConstraint;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setSizeConstraint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` _sizeConstraint: qlayout_enums.SizeConstraint `
    ///
    pub fn setSizeConstraint(self: QHBoxLayout, _sizeConstraint: i32) void {
        qtc.QLayout_SetSizeConstraint(@ptrCast(self.ptr), @bitCast(_sizeConstraint));
    }

    /// ### DEPRECATED: Use `sizeConstraint` instead
    ///
    pub const SizeConstraint = sizeConstraint;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#sizeConstraint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ## Returns:
    ///
    /// ` qlayout_enums.SizeConstraint `
    ///
    pub fn sizeConstraint(self: QHBoxLayout) i32 {
        return qtc.QLayout_SizeConstraint(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMenuBar` instead
    ///
    pub const SetMenuBar = setMenuBar;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setMenuBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` w: QWidget `
    ///
    pub fn setMenuBar(self: QHBoxLayout, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QLayout_SetMenuBar(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `menuBar` instead
    ///
    pub const MenuBar = menuBar;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#menuBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn menuBar(self: QHBoxLayout) QWidget {
        return .{ .ptr = qtc.QLayout_MenuBar(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `parentWidget` instead
    ///
    pub const ParentWidget = parentWidget;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#parentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn parentWidget(self: QHBoxLayout) QWidget {
        return .{ .ptr = qtc.QLayout_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `activate` instead
    ///
    pub const Activate = activate;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#activate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn activate(self: QHBoxLayout) bool {
        return qtc.QLayout_Activate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `update` instead
    ///
    pub const Update = update;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn update(self: QHBoxLayout) void {
        qtc.QLayout_Update(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `removeWidget` instead
    ///
    pub const RemoveWidget = removeWidget;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#removeWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` w: QWidget `
    ///
    pub fn removeWidget(self: QHBoxLayout, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QLayout_RemoveWidget(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `removeItem` instead
    ///
    pub const RemoveItem = removeItem;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#removeItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` param1: QLayoutItem `
    ///
    pub fn removeItem(self: QHBoxLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QLayoutItem;
        qtc.QLayout_RemoveItem(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `indexOf2` instead
    ///
    pub const IndexOf2 = indexOf2;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` param1: QLayoutItem `
    ///
    pub fn indexOf2(self: QHBoxLayout, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QLayoutItem;
        return qtc.QLayout_IndexOf2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onIndexOf2` instead
    ///
    pub const OnIndexOf2 = onIndexOf2;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` callback: *const fn (self: QHBoxLayout, param1: QLayoutItem) callconv(.c) i32 `
    ///
    pub fn onIndexOf2(self: QHBoxLayout, callback: *const fn (QHBoxLayout, QLayoutItem) callconv(.c) i32) void {
        qtc.QLayout_OnIndexOf2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIndexOf2` instead
    ///
    pub const SuperIndexOf2 = superIndexOf2;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` param1: QLayoutItem `
    ///
    pub fn superIndexOf2(self: QHBoxLayout, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QLayoutItem;
        return qtc.QLayout_SuperIndexOf2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `totalMinimumHeightForWidth` instead
    ///
    pub const TotalMinimumHeightForWidth = totalMinimumHeightForWidth;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalMinimumHeightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` w: i32 `
    ///
    pub fn totalMinimumHeightForWidth(self: QHBoxLayout, w: i32) i32 {
        return qtc.QLayout_TotalMinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// ### DEPRECATED: Use `totalHeightForWidth` instead
    ///
    pub const TotalHeightForWidth = totalHeightForWidth;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalHeightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` w: i32 `
    ///
    pub fn totalHeightForWidth(self: QHBoxLayout, w: i32) i32 {
        return qtc.QLayout_TotalHeightForWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// ### DEPRECATED: Use `totalMinimumSize` instead
    ///
    pub const TotalMinimumSize = totalMinimumSize;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn totalMinimumSize(self: QHBoxLayout) QSize {
        return .{ .ptr = qtc.QLayout_TotalMinimumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `totalMaximumSize` instead
    ///
    pub const TotalMaximumSize = totalMaximumSize;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn totalMaximumSize(self: QHBoxLayout) QSize {
        return .{ .ptr = qtc.QLayout_TotalMaximumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `totalSizeHint` instead
    ///
    pub const TotalSizeHint = totalSizeHint;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalSizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn totalSizeHint(self: QHBoxLayout) QSize {
        return .{ .ptr = qtc.QLayout_TotalSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setEnabled` instead
    ///
    pub const SetEnabled = setEnabled;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` enabled: bool `
    ///
    pub fn setEnabled(self: QHBoxLayout, enabled: bool) void {
        qtc.QLayout_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `isEnabled` instead
    ///
    pub const IsEnabled = isEnabled;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn isEnabled(self: QHBoxLayout) bool {
        return qtc.QLayout_IsEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `closestAcceptableSize` instead
    ///
    pub const ClosestAcceptableSize = closestAcceptableSize;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#closestAcceptableSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` w: QWidget `
    ///
    /// ` s: QSize `
    ///
    pub fn closestAcceptableSize(w: anytype, s: anytype) QSize {
        comptime _ = @TypeOf(w)._is_QWidget;
        comptime _ = @TypeOf(s)._is_QSize;
        return .{ .ptr = qtc.QLayout_ClosestAcceptableSize(@ptrCast(w.ptr), @ptrCast(s.ptr)) };
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
    /// ` self: QHBoxLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QHBoxLayout, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QHBoxLayout.objectName: Memory allocation failed");
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
    /// ` self: QHBoxLayout `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QHBoxLayout, name: []const u8) void {
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
    /// ` self: QHBoxLayout `
    ///
    pub fn isWidgetType(self: QHBoxLayout) bool {
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
    /// ` self: QHBoxLayout `
    ///
    pub fn isWindowType(self: QHBoxLayout) bool {
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
    /// ` self: QHBoxLayout `
    ///
    pub fn isQuickItemType(self: QHBoxLayout) bool {
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
    /// ` self: QHBoxLayout `
    ///
    pub fn signalsBlocked(self: QHBoxLayout) bool {
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
    /// ` self: QHBoxLayout `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QHBoxLayout, b: bool) bool {
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
    /// ` self: QHBoxLayout `
    ///
    pub fn thread(self: QHBoxLayout) QThread {
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
    /// ` self: QHBoxLayout `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QHBoxLayout, _thread: anytype) bool {
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
    /// ` self: QHBoxLayout `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QHBoxLayout, interval: i32) i32 {
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
    /// ` self: QHBoxLayout `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QHBoxLayout, time: i64) i32 {
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
    /// ` self: QHBoxLayout `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QHBoxLayout, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
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
    /// ` self: QHBoxLayout `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QHBoxLayout, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
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
    /// ` self: QHBoxLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QHBoxLayout, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QHBoxLayout.children: Memory allocation failed");
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
    /// ` self: QHBoxLayout `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QHBoxLayout, _parent: anytype) void {
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
    /// ` self: QHBoxLayout `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QHBoxLayout, filterObj: anytype) void {
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
    /// ` self: QHBoxLayout `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QHBoxLayout, obj: anytype) void {
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
    /// ` self: QHBoxLayout `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QHBoxLayout, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QHBoxLayout `
    ///
    pub fn disconnect3(self: QHBoxLayout) bool {
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
    /// ` self: QHBoxLayout `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QHBoxLayout, receiver: anytype) bool {
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
    /// ` self: QHBoxLayout `
    ///
    pub fn dumpObjectTree(self: QHBoxLayout) void {
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
    /// ` self: QHBoxLayout `
    ///
    pub fn dumpObjectInfo(self: QHBoxLayout) void {
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
    /// ` self: QHBoxLayout `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QHBoxLayout, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QHBoxLayout `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QHBoxLayout, name: [:0]const u8) QVariant {
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
    /// ` self: QHBoxLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QHBoxLayout, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QHBoxLayout.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QHBoxLayout.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QHBoxLayout `
    ///
    pub fn bindingStorage(self: QHBoxLayout) QBindingStorage {
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
    /// ` self: QHBoxLayout `
    ///
    pub fn bindingStorage2(self: QHBoxLayout) QBindingStorage {
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
    /// ` self: QHBoxLayout `
    ///
    pub fn destroyed(self: QHBoxLayout) void {
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
    /// ` self: QHBoxLayout `
    ///
    /// ` callback: *const fn (self: QHBoxLayout) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QHBoxLayout, callback: *const fn (QHBoxLayout) callconv(.c) void) void {
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
    /// ` self: QHBoxLayout `
    ///
    pub fn parent(self: QHBoxLayout) QObject {
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
    /// ` self: QHBoxLayout `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QHBoxLayout, classname: [:0]const u8) bool {
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
    /// ` self: QHBoxLayout `
    ///
    pub fn deleteLater(self: QHBoxLayout) void {
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
    /// ` self: QHBoxLayout `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QHBoxLayout, interval: i32, timerType: i32) i32 {
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
    /// ` self: QHBoxLayout `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QHBoxLayout, time: i64, timerType: i32) i32 {
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
    /// ` self: QHBoxLayout `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QHBoxLayout, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QHBoxLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QHBoxLayout, signal: [:0]const u8) bool {
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
    /// ` self: QHBoxLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QHBoxLayout, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QHBoxLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QHBoxLayout, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QHBoxLayout `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QHBoxLayout, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QHBoxLayout `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QHBoxLayout, param1: anytype) void {
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
    /// ` self: QHBoxLayout `
    ///
    /// ` callback: *const fn (self: QHBoxLayout, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QHBoxLayout, callback: *const fn (QHBoxLayout, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `alignment` instead
    ///
    pub const Alignment = alignment;

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn alignment(self: QHBoxLayout) i32 {
        return qtc.QLayoutItem_Alignment(@ptrCast(self.asQLayoutItem().ptr));
    }

    /// ### DEPRECATED: Use `addItem` instead
    ///
    pub const AddItem = addItem;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` param1: QLayoutItem `
    ///
    pub fn addItem(self: QHBoxLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QLayoutItem;
        qtc.QHBoxLayout_AddItem(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superAddItem` instead
    ///
    pub const SuperAddItem = superAddItem;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addItem)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` param1: QLayoutItem `
    ///
    pub fn superAddItem(self: QHBoxLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QLayoutItem;
        qtc.QHBoxLayout_SuperAddItem(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onAddItem` instead
    ///
    pub const OnAddItem = onAddItem;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxLayout`
    ///
    /// ` callback: *const fn (self: QHBoxLayout, param1: QLayoutItem) callconv(.c) void `
    ///
    pub fn onAddItem(self: QHBoxLayout, callback: *const fn (QHBoxLayout, QLayoutItem) callconv(.c) void) void {
        qtc.QHBoxLayout_OnAddItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `spacing` instead
    ///
    pub const Spacing = spacing;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#spacing)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn spacing(self: QHBoxLayout) i32 {
        return qtc.QHBoxLayout_Spacing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSpacing` instead
    ///
    pub const SuperSpacing = superSpacing;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#spacing)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn superSpacing(self: QHBoxLayout) i32 {
        return qtc.QHBoxLayout_SuperSpacing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSpacing` instead
    ///
    pub const OnSpacing = onSpacing;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#spacing)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxLayout`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSpacing(self: QHBoxLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QHBoxLayout_OnSpacing(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setSpacing` instead
    ///
    pub const SetSpacing = setSpacing;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setSpacing)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` _spacing: i32 `
    ///
    pub fn setSpacing(self: QHBoxLayout, _spacing: i32) void {
        qtc.QHBoxLayout_SetSpacing(@ptrCast(self.ptr), @bitCast(_spacing));
    }

    /// ### DEPRECATED: Use `superSetSpacing` instead
    ///
    pub const SuperSetSpacing = superSetSpacing;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setSpacing)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` _spacing: i32 `
    ///
    pub fn superSetSpacing(self: QHBoxLayout, _spacing: i32) void {
        qtc.QHBoxLayout_SuperSetSpacing(@ptrCast(self.ptr), @bitCast(_spacing));
    }

    /// ### DEPRECATED: Use `onSetSpacing` instead
    ///
    pub const OnSetSpacing = onSetSpacing;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setSpacing)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxLayout`
    ///
    /// ` callback: *const fn (self: QHBoxLayout, spacing: i32) callconv(.c) void `
    ///
    pub fn onSetSpacing(self: QHBoxLayout, callback: *const fn (QHBoxLayout, i32) callconv(.c) void) void {
        qtc.QHBoxLayout_OnSetSpacing(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sizeHint` instead
    ///
    pub const SizeHint = sizeHint;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn sizeHint(self: QHBoxLayout) QSize {
        return .{ .ptr = qtc.QHBoxLayout_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSizeHint` instead
    ///
    pub const SuperSizeHint = superSizeHint;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#sizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn superSizeHint(self: QHBoxLayout) QSize {
        return .{ .ptr = qtc.QHBoxLayout_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSizeHint` instead
    ///
    pub const OnSizeHint = onSizeHint;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxLayout`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSizeHint(self: QHBoxLayout, callback: *const fn () callconv(.c) QSize) void {
        qtc.QHBoxLayout_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `minimumSize` instead
    ///
    pub const MinimumSize = minimumSize;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#minimumSize)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn minimumSize(self: QHBoxLayout) QSize {
        return .{ .ptr = qtc.QHBoxLayout_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superMinimumSize` instead
    ///
    pub const SuperMinimumSize = superMinimumSize;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#minimumSize)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn superMinimumSize(self: QHBoxLayout) QSize {
        return .{ .ptr = qtc.QHBoxLayout_SuperMinimumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMinimumSize` instead
    ///
    pub const OnMinimumSize = onMinimumSize;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#minimumSize)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxLayout`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMinimumSize(self: QHBoxLayout, callback: *const fn () callconv(.c) QSize) void {
        qtc.QHBoxLayout_OnMinimumSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `maximumSize` instead
    ///
    pub const MaximumSize = maximumSize;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#maximumSize)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn maximumSize(self: QHBoxLayout) QSize {
        return .{ .ptr = qtc.QHBoxLayout_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superMaximumSize` instead
    ///
    pub const SuperMaximumSize = superMaximumSize;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#maximumSize)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn superMaximumSize(self: QHBoxLayout) QSize {
        return .{ .ptr = qtc.QHBoxLayout_SuperMaximumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMaximumSize` instead
    ///
    pub const OnMaximumSize = onMaximumSize;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#maximumSize)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxLayout`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMaximumSize(self: QHBoxLayout, callback: *const fn () callconv(.c) QSize) void {
        qtc.QHBoxLayout_OnMaximumSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hasHeightForWidth` instead
    ///
    pub const HasHeightForWidth = hasHeightForWidth;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn hasHeightForWidth(self: QHBoxLayout) bool {
        return qtc.QHBoxLayout_HasHeightForWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superHasHeightForWidth` instead
    ///
    pub const SuperHasHeightForWidth = superHasHeightForWidth;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn superHasHeightForWidth(self: QHBoxLayout) bool {
        return qtc.QHBoxLayout_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHasHeightForWidth` instead
    ///
    pub const OnHasHeightForWidth = onHasHeightForWidth;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxLayout`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onHasHeightForWidth(self: QHBoxLayout, callback: *const fn () callconv(.c) bool) void {
        qtc.QHBoxLayout_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `heightForWidth` instead
    ///
    pub const HeightForWidth = heightForWidth;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn heightForWidth(self: QHBoxLayout, param1: i32) i32 {
        return qtc.QHBoxLayout_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `superHeightForWidth` instead
    ///
    pub const SuperHeightForWidth = superHeightForWidth;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#heightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn superHeightForWidth(self: QHBoxLayout, param1: i32) i32 {
        return qtc.QHBoxLayout_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onHeightForWidth` instead
    ///
    pub const OnHeightForWidth = onHeightForWidth;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxLayout`
    ///
    /// ` callback: *const fn (self: QHBoxLayout, param1: i32) callconv(.c) i32 `
    ///
    pub fn onHeightForWidth(self: QHBoxLayout, callback: *const fn (QHBoxLayout, i32) callconv(.c) i32) void {
        qtc.QHBoxLayout_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `minimumHeightForWidth` instead
    ///
    pub const MinimumHeightForWidth = minimumHeightForWidth;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#minimumHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn minimumHeightForWidth(self: QHBoxLayout, param1: i32) i32 {
        return qtc.QHBoxLayout_MinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `superMinimumHeightForWidth` instead
    ///
    pub const SuperMinimumHeightForWidth = superMinimumHeightForWidth;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#minimumHeightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn superMinimumHeightForWidth(self: QHBoxLayout, param1: i32) i32 {
        return qtc.QHBoxLayout_SuperMinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onMinimumHeightForWidth` instead
    ///
    pub const OnMinimumHeightForWidth = onMinimumHeightForWidth;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#minimumHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxLayout`
    ///
    /// ` callback: *const fn (self: QHBoxLayout, param1: i32) callconv(.c) i32 `
    ///
    pub fn onMinimumHeightForWidth(self: QHBoxLayout, callback: *const fn (QHBoxLayout, i32) callconv(.c) i32) void {
        qtc.QHBoxLayout_OnMinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `expandingDirections` instead
    ///
    pub const ExpandingDirections = expandingDirections;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#expandingDirections)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.Orientation `
    ///
    pub fn expandingDirections(self: QHBoxLayout) i32 {
        return qtc.QHBoxLayout_ExpandingDirections(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superExpandingDirections` instead
    ///
    pub const SuperExpandingDirections = superExpandingDirections;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#expandingDirections)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.Orientation `
    ///
    pub fn superExpandingDirections(self: QHBoxLayout) i32 {
        return qtc.QHBoxLayout_SuperExpandingDirections(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onExpandingDirections` instead
    ///
    pub const OnExpandingDirections = onExpandingDirections;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#expandingDirections)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxLayout`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onExpandingDirections(self: QHBoxLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QHBoxLayout_OnExpandingDirections(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `invalidate` instead
    ///
    pub const Invalidate = invalidate;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#invalidate)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn invalidate(self: QHBoxLayout) void {
        qtc.QHBoxLayout_Invalidate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superInvalidate` instead
    ///
    pub const SuperInvalidate = superInvalidate;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#invalidate)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn superInvalidate(self: QHBoxLayout) void {
        qtc.QHBoxLayout_SuperInvalidate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onInvalidate` instead
    ///
    pub const OnInvalidate = onInvalidate;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#invalidate)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxLayout`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onInvalidate(self: QHBoxLayout, callback: *const fn () callconv(.c) void) void {
        qtc.QHBoxLayout_OnInvalidate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemAt` instead
    ///
    pub const ItemAt = itemAt;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#itemAt)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn itemAt(self: QHBoxLayout, param1: i32) QLayoutItem {
        return .{ .ptr = qtc.QHBoxLayout_ItemAt(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `superItemAt` instead
    ///
    pub const SuperItemAt = superItemAt;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#itemAt)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn superItemAt(self: QHBoxLayout, param1: i32) QLayoutItem {
        return .{ .ptr = qtc.QHBoxLayout_SuperItemAt(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `onItemAt` instead
    ///
    pub const OnItemAt = onItemAt;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#itemAt)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxLayout`
    ///
    /// ` callback: *const fn (self: QHBoxLayout, param1: i32) callconv(.c) QLayoutItem `
    ///
    pub fn onItemAt(self: QHBoxLayout, callback: *const fn (QHBoxLayout, i32) callconv(.c) QLayoutItem) void {
        qtc.QHBoxLayout_OnItemAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `takeAt` instead
    ///
    pub const TakeAt = takeAt;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#takeAt)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn takeAt(self: QHBoxLayout, param1: i32) QLayoutItem {
        return .{ .ptr = qtc.QHBoxLayout_TakeAt(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `superTakeAt` instead
    ///
    pub const SuperTakeAt = superTakeAt;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#takeAt)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn superTakeAt(self: QHBoxLayout, param1: i32) QLayoutItem {
        return .{ .ptr = qtc.QHBoxLayout_SuperTakeAt(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `onTakeAt` instead
    ///
    pub const OnTakeAt = onTakeAt;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#takeAt)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxLayout`
    ///
    /// ` callback: *const fn (self: QHBoxLayout, param1: i32) callconv(.c) QLayoutItem `
    ///
    pub fn onTakeAt(self: QHBoxLayout, callback: *const fn (QHBoxLayout, i32) callconv(.c) QLayoutItem) void {
        qtc.QHBoxLayout_OnTakeAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `count` instead
    ///
    pub const Count = count;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#count)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn count(self: QHBoxLayout) i32 {
        return qtc.QHBoxLayout_Count(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superCount` instead
    ///
    pub const SuperCount = superCount;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#count)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn superCount(self: QHBoxLayout) i32 {
        return qtc.QHBoxLayout_SuperCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCount` instead
    ///
    pub const OnCount = onCount;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#count)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxLayout`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onCount(self: QHBoxLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QHBoxLayout_OnCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setGeometry` instead
    ///
    pub const SetGeometry = setGeometry;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setGeometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` _geometry: QRect `
    ///
    pub fn setGeometry(self: QHBoxLayout, _geometry: anytype) void {
        comptime _ = @TypeOf(_geometry)._is_QRect;
        qtc.QHBoxLayout_SetGeometry(@ptrCast(self.ptr), @ptrCast(_geometry.ptr));
    }

    /// ### DEPRECATED: Use `superSetGeometry` instead
    ///
    pub const SuperSetGeometry = superSetGeometry;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setGeometry)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` _geometry: QRect `
    ///
    pub fn superSetGeometry(self: QHBoxLayout, _geometry: anytype) void {
        comptime _ = @TypeOf(_geometry)._is_QRect;
        qtc.QHBoxLayout_SuperSetGeometry(@ptrCast(self.ptr), @ptrCast(_geometry.ptr));
    }

    /// ### DEPRECATED: Use `onSetGeometry` instead
    ///
    pub const OnSetGeometry = onSetGeometry;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setGeometry)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxLayout`
    ///
    /// ` callback: *const fn (self: QHBoxLayout, geometry: QRect) callconv(.c) void `
    ///
    pub fn onSetGeometry(self: QHBoxLayout, callback: *const fn (QHBoxLayout, QRect) callconv(.c) void) void {
        qtc.QHBoxLayout_OnSetGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `geometry` instead
    ///
    pub const Geometry = geometry;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#geometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn geometry(self: QHBoxLayout) QRect {
        return .{ .ptr = qtc.QHBoxLayout_Geometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superGeometry` instead
    ///
    pub const SuperGeometry = superGeometry;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#geometry)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn superGeometry(self: QHBoxLayout) QRect {
        return .{ .ptr = qtc.QHBoxLayout_SuperGeometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onGeometry` instead
    ///
    pub const OnGeometry = onGeometry;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#geometry)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxLayout`
    ///
    /// ` callback: *const fn () callconv(.c) QRect `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onGeometry(self: QHBoxLayout, callback: *const fn () callconv(.c) QRect) void {
        qtc.QHBoxLayout_OnGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `indexOf` instead
    ///
    pub const IndexOf = indexOf;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` param1: QWidget `
    ///
    pub fn indexOf(self: QHBoxLayout, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QHBoxLayout_IndexOf(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superIndexOf` instead
    ///
    pub const SuperIndexOf = superIndexOf;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` param1: QWidget `
    ///
    pub fn superIndexOf(self: QHBoxLayout, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QHBoxLayout_SuperIndexOf(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onIndexOf` instead
    ///
    pub const OnIndexOf = onIndexOf;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxLayout`
    ///
    /// ` callback: *const fn (self: QHBoxLayout, param1: QWidget) callconv(.c) i32 `
    ///
    pub fn onIndexOf(self: QHBoxLayout, callback: *const fn (QHBoxLayout, QWidget) callconv(.c) i32) void {
        qtc.QHBoxLayout_OnIndexOf(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn isEmpty(self: QHBoxLayout) bool {
        return qtc.QHBoxLayout_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superIsEmpty` instead
    ///
    pub const SuperIsEmpty = superIsEmpty;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn superIsEmpty(self: QHBoxLayout) bool {
        return qtc.QHBoxLayout_SuperIsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsEmpty` instead
    ///
    pub const OnIsEmpty = onIsEmpty;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxLayout`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsEmpty(self: QHBoxLayout, callback: *const fn () callconv(.c) bool) void {
        qtc.QHBoxLayout_OnIsEmpty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `controlTypes` instead
    ///
    pub const ControlTypes = controlTypes;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsizepolicy_enums.ControlType `
    ///
    pub fn controlTypes(self: QHBoxLayout) i32 {
        return qtc.QHBoxLayout_ControlTypes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superControlTypes` instead
    ///
    pub const SuperControlTypes = superControlTypes;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsizepolicy_enums.ControlType `
    ///
    pub fn superControlTypes(self: QHBoxLayout) i32 {
        return qtc.QHBoxLayout_SuperControlTypes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onControlTypes` instead
    ///
    pub const OnControlTypes = onControlTypes;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxLayout`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onControlTypes(self: QHBoxLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QHBoxLayout_OnControlTypes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `replaceWidget` instead
    ///
    pub const ReplaceWidget = replaceWidget;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` from: QWidget `
    ///
    /// ` to: QWidget `
    ///
    /// ` options: flag of qnamespace_enums.FindChildOption `
    ///
    pub fn replaceWidget(self: QHBoxLayout, from: anytype, to: anytype, options: i32) QLayoutItem {
        comptime _ = @TypeOf(from)._is_QWidget;
        comptime _ = @TypeOf(to)._is_QWidget;
        return .{ .ptr = qtc.QHBoxLayout_ReplaceWidget(@ptrCast(self.ptr), @ptrCast(from.ptr), @ptrCast(to.ptr), @bitCast(options)) };
    }

    /// ### DEPRECATED: Use `superReplaceWidget` instead
    ///
    pub const SuperReplaceWidget = superReplaceWidget;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` from: QWidget `
    ///
    /// ` to: QWidget `
    ///
    /// ` options: flag of qnamespace_enums.FindChildOption `
    ///
    pub fn superReplaceWidget(self: QHBoxLayout, from: anytype, to: anytype, options: i32) QLayoutItem {
        comptime _ = @TypeOf(from)._is_QWidget;
        comptime _ = @TypeOf(to)._is_QWidget;
        return .{ .ptr = qtc.QHBoxLayout_SuperReplaceWidget(@ptrCast(self.ptr), @ptrCast(from.ptr), @ptrCast(to.ptr), @bitCast(options)) };
    }

    /// ### DEPRECATED: Use `onReplaceWidget` instead
    ///
    pub const OnReplaceWidget = onReplaceWidget;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxLayout`
    ///
    /// ` callback: *const fn (self: QHBoxLayout, from: QWidget, to: QWidget, options: flag of qnamespace_enums.FindChildOption) callconv(.c) QLayoutItem `
    ///
    pub fn onReplaceWidget(self: QHBoxLayout, callback: *const fn (QHBoxLayout, QWidget, QWidget, i32) callconv(.c) QLayoutItem) void {
        qtc.QHBoxLayout_OnReplaceWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `layout` instead
    ///
    pub const Layout = layout;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#layout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn layout(self: QHBoxLayout) QLayout {
        return .{ .ptr = qtc.QHBoxLayout_Layout(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superLayout` instead
    ///
    pub const SuperLayout = superLayout;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#layout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn superLayout(self: QHBoxLayout) QLayout {
        return .{ .ptr = qtc.QHBoxLayout_SuperLayout(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onLayout` instead
    ///
    pub const OnLayout = onLayout;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#layout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxLayout`
    ///
    /// ` callback: *const fn () callconv(.c) QLayout `
    ///
    pub fn onLayout(self: QHBoxLayout, callback: *const fn () callconv(.c) QLayout) void {
        qtc.QHBoxLayout_OnLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childEvent` instead
    ///
    pub const ChildEvent = childEvent;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` e: QChildEvent `
    ///
    pub fn childEvent(self: QHBoxLayout, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QChildEvent;
        qtc.QHBoxLayout_ChildEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superChildEvent` instead
    ///
    pub const SuperChildEvent = superChildEvent;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` e: QChildEvent `
    ///
    pub fn superChildEvent(self: QHBoxLayout, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QChildEvent;
        qtc.QHBoxLayout_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onChildEvent` instead
    ///
    pub const OnChildEvent = onChildEvent;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxLayout`
    ///
    /// ` callback: *const fn (self: QHBoxLayout, e: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QHBoxLayout, callback: *const fn (QHBoxLayout, QChildEvent) callconv(.c) void) void {
        qtc.QHBoxLayout_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHBoxLayout `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QHBoxLayout, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QHBoxLayout_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHBoxLayout `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QHBoxLayout, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QHBoxLayout_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHBoxLayout`
    ///
    /// ` callback: *const fn (self: QHBoxLayout, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QHBoxLayout, callback: *const fn (QHBoxLayout, QEvent) callconv(.c) bool) void {
        qtc.QHBoxLayout_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHBoxLayout `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QHBoxLayout, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QHBoxLayout_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHBoxLayout `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QHBoxLayout, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QHBoxLayout_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHBoxLayout`
    ///
    /// ` callback: *const fn (self: QHBoxLayout, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QHBoxLayout, callback: *const fn (QHBoxLayout, QObject, QEvent) callconv(.c) bool) void {
        qtc.QHBoxLayout_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHBoxLayout `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QHBoxLayout, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QHBoxLayout_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHBoxLayout `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QHBoxLayout, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QHBoxLayout_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHBoxLayout`
    ///
    /// ` callback: *const fn (self: QHBoxLayout, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QHBoxLayout, callback: *const fn (QHBoxLayout, QTimerEvent) callconv(.c) void) void {
        qtc.QHBoxLayout_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHBoxLayout `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QHBoxLayout, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QHBoxLayout_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHBoxLayout `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QHBoxLayout, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QHBoxLayout_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QHBoxLayout`
    ///
    /// ` callback: *const fn (self: QHBoxLayout, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QHBoxLayout, callback: *const fn (QHBoxLayout, QEvent) callconv(.c) void) void {
        qtc.QHBoxLayout_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHBoxLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QHBoxLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QHBoxLayout_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QHBoxLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QHBoxLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QHBoxLayout_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QHBoxLayout`
    ///
    /// ` callback: *const fn (self: QHBoxLayout, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QHBoxLayout, callback: *const fn (QHBoxLayout, QMetaMethod) callconv(.c) void) void {
        qtc.QHBoxLayout_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHBoxLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QHBoxLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QHBoxLayout_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QHBoxLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QHBoxLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QHBoxLayout_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QHBoxLayout`
    ///
    /// ` callback: *const fn (self: QHBoxLayout, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QHBoxLayout, callback: *const fn (QHBoxLayout, QMetaMethod) callconv(.c) void) void {
        qtc.QHBoxLayout_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `widget` instead
    ///
    pub const Widget = widget;

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn widget(self: QHBoxLayout) QWidget {
        return .{ .ptr = qtc.QHBoxLayout_Widget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superWidget` instead
    ///
    pub const SuperWidget = superWidget;

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn superWidget(self: QHBoxLayout) QWidget {
        return .{ .ptr = qtc.QHBoxLayout_SuperWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onWidget` instead
    ///
    pub const OnWidget = onWidget;

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxLayout`
    ///
    /// ` callback: *const fn () callconv(.c) QWidget `
    ///
    pub fn onWidget(self: QHBoxLayout, callback: *const fn () callconv(.c) QWidget) void {
        qtc.QHBoxLayout_OnWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `spacerItem` instead
    ///
    pub const SpacerItem = spacerItem;

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn spacerItem(self: QHBoxLayout) QSpacerItem {
        return .{ .ptr = qtc.QHBoxLayout_SpacerItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSpacerItem` instead
    ///
    pub const SuperSpacerItem = superSpacerItem;

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn superSpacerItem(self: QHBoxLayout) QSpacerItem {
        return .{ .ptr = qtc.QHBoxLayout_SuperSpacerItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSpacerItem` instead
    ///
    pub const OnSpacerItem = onSpacerItem;

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxLayout`
    ///
    /// ` callback: *const fn () callconv(.c) QSpacerItem `
    ///
    pub fn onSpacerItem(self: QHBoxLayout, callback: *const fn () callconv(.c) QSpacerItem) void {
        qtc.QHBoxLayout_OnSpacerItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `widgetEvent` instead
    ///
    pub const WidgetEvent = widgetEvent;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` param1: QEvent `
    ///
    pub fn widgetEvent(self: QHBoxLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.QHBoxLayout_WidgetEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superWidgetEvent` instead
    ///
    pub const SuperWidgetEvent = superWidgetEvent;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` param1: QEvent `
    ///
    pub fn superWidgetEvent(self: QHBoxLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.QHBoxLayout_SuperWidgetEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onWidgetEvent` instead
    ///
    pub const OnWidgetEvent = onWidgetEvent;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxLayout`
    ///
    /// ` callback: *const fn (self: QHBoxLayout, param1: QEvent) callconv(.c) void `
    ///
    pub fn onWidgetEvent(self: QHBoxLayout, callback: *const fn (QHBoxLayout, QEvent) callconv(.c) void) void {
        qtc.QHBoxLayout_OnWidgetEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `addChildLayout` instead
    ///
    pub const AddChildLayout = addChildLayout;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` l: QLayout `
    ///
    pub fn addChildLayout(self: QHBoxLayout, l: anytype) void {
        comptime _ = @TypeOf(l)._is_QLayout;
        qtc.QHBoxLayout_AddChildLayout(@ptrCast(self.ptr), @ptrCast(l.ptr));
    }

    /// ### DEPRECATED: Use `superAddChildLayout` instead
    ///
    pub const SuperAddChildLayout = superAddChildLayout;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` l: QLayout `
    ///
    pub fn superAddChildLayout(self: QHBoxLayout, l: anytype) void {
        comptime _ = @TypeOf(l)._is_QLayout;
        qtc.QHBoxLayout_SuperAddChildLayout(@ptrCast(self.ptr), @ptrCast(l.ptr));
    }

    /// ### DEPRECATED: Use `onAddChildLayout` instead
    ///
    pub const OnAddChildLayout = onAddChildLayout;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxLayout`
    ///
    /// ` callback: *const fn (self: QHBoxLayout, l: QLayout) callconv(.c) void `
    ///
    pub fn onAddChildLayout(self: QHBoxLayout, callback: *const fn (QHBoxLayout, QLayout) callconv(.c) void) void {
        qtc.QHBoxLayout_OnAddChildLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `addChildWidget` instead
    ///
    pub const AddChildWidget = addChildWidget;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` w: QWidget `
    ///
    pub fn addChildWidget(self: QHBoxLayout, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QHBoxLayout_AddChildWidget(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `superAddChildWidget` instead
    ///
    pub const SuperAddChildWidget = superAddChildWidget;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` w: QWidget `
    ///
    pub fn superAddChildWidget(self: QHBoxLayout, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QHBoxLayout_SuperAddChildWidget(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `onAddChildWidget` instead
    ///
    pub const OnAddChildWidget = onAddChildWidget;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxLayout`
    ///
    /// ` callback: *const fn (self: QHBoxLayout, w: QWidget) callconv(.c) void `
    ///
    pub fn onAddChildWidget(self: QHBoxLayout, callback: *const fn (QHBoxLayout, QWidget) callconv(.c) void) void {
        qtc.QHBoxLayout_OnAddChildWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `adoptLayout` instead
    ///
    pub const AdoptLayout = adoptLayout;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` _layout: QLayout `
    ///
    pub fn adoptLayout(self: QHBoxLayout, _layout: anytype) bool {
        comptime _ = @TypeOf(_layout)._is_QLayout;
        return qtc.QHBoxLayout_AdoptLayout(@ptrCast(self.ptr), @ptrCast(_layout.ptr));
    }

    /// ### DEPRECATED: Use `superAdoptLayout` instead
    ///
    pub const SuperAdoptLayout = superAdoptLayout;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` _layout: QLayout `
    ///
    pub fn superAdoptLayout(self: QHBoxLayout, _layout: anytype) bool {
        comptime _ = @TypeOf(_layout)._is_QLayout;
        return qtc.QHBoxLayout_SuperAdoptLayout(@ptrCast(self.ptr), @ptrCast(_layout.ptr));
    }

    /// ### DEPRECATED: Use `onAdoptLayout` instead
    ///
    pub const OnAdoptLayout = onAdoptLayout;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxLayout`
    ///
    /// ` callback: *const fn (self: QHBoxLayout, layout: QLayout) callconv(.c) bool `
    ///
    pub fn onAdoptLayout(self: QHBoxLayout, callback: *const fn (QHBoxLayout, QLayout) callconv(.c) bool) void {
        qtc.QHBoxLayout_OnAdoptLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `alignmentRect` instead
    ///
    pub const AlignmentRect = alignmentRect;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` param1: QRect `
    ///
    pub fn alignmentRect(self: QHBoxLayout, param1: anytype) QRect {
        comptime _ = @TypeOf(param1)._is_QRect;
        return .{ .ptr = qtc.QHBoxLayout_AlignmentRect(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `superAlignmentRect` instead
    ///
    pub const SuperAlignmentRect = superAlignmentRect;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` param1: QRect `
    ///
    pub fn superAlignmentRect(self: QHBoxLayout, param1: anytype) QRect {
        comptime _ = @TypeOf(param1)._is_QRect;
        return .{ .ptr = qtc.QHBoxLayout_SuperAlignmentRect(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `onAlignmentRect` instead
    ///
    pub const OnAlignmentRect = onAlignmentRect;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxLayout`
    ///
    /// ` callback: *const fn (self: QHBoxLayout, param1: QRect) callconv(.c) QRect `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onAlignmentRect(self: QHBoxLayout, callback: *const fn (QHBoxLayout, QRect) callconv(.c) QRect) void {
        qtc.QHBoxLayout_OnAlignmentRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHBoxLayout `
    ///
    pub fn sender(self: QHBoxLayout) QObject {
        return .{ .ptr = qtc.QHBoxLayout_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QHBoxLayout `
    ///
    pub fn superSender(self: QHBoxLayout) QObject {
        return .{ .ptr = qtc.QHBoxLayout_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QHBoxLayout`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QHBoxLayout, callback: *const fn () callconv(.c) QObject) void {
        qtc.QHBoxLayout_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHBoxLayout `
    ///
    pub fn senderSignalIndex(self: QHBoxLayout) i32 {
        return qtc.QHBoxLayout_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QHBoxLayout `
    ///
    pub fn superSenderSignalIndex(self: QHBoxLayout) i32 {
        return qtc.QHBoxLayout_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QHBoxLayout`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QHBoxLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QHBoxLayout_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHBoxLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QHBoxLayout, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QHBoxLayout_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QHBoxLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QHBoxLayout, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QHBoxLayout_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QHBoxLayout`
    ///
    /// ` callback: *const fn (self: QHBoxLayout, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QHBoxLayout, callback: *const fn (QHBoxLayout, [*:0]const u8) callconv(.c) i32) void {
        qtc.QHBoxLayout_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHBoxLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QHBoxLayout, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QHBoxLayout_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QHBoxLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QHBoxLayout, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QHBoxLayout_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QHBoxLayout`
    ///
    /// ` callback: *const fn (self: QHBoxLayout, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QHBoxLayout, callback: *const fn (QHBoxLayout, QMetaMethod) callconv(.c) bool) void {
        qtc.QHBoxLayout_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QHBoxLayout `
    ///
    /// ` callback: *const fn (self: QHBoxLayout, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QHBoxLayout, callback: *const fn (QHBoxLayout, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxlayout.html#dtor.QHBoxLayout)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn delete(self: QHBoxLayout) void {
        qtc.QHBoxLayout_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxlayout.html)
pub const QVBoxLayout = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxlayout.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QVBoxLayout,

    pub const _is_QVBoxLayout = {};
    pub const _is_QBoxLayout = {};
    pub const _is_QLayout = {};
    pub const _is_QObject = {};
    pub const _is_QLayoutItem = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QVBoxLayout object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QWidget `
    ///
    pub fn new(_parent: anytype) QVBoxLayout {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.QVBoxLayout_new(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QVBoxLayout object in C++ memory
    ///
    pub fn new2() QVBoxLayout {
        return .{ .ptr = qtc.QVBoxLayout_new2() };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn metaObject(self: QVBoxLayout) QMetaObject {
        return .{ .ptr = qtc.QVBoxLayout_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QVBoxLayout `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QVBoxLayout, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QVBoxLayout_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVBoxLayout `
    ///
    pub fn superMetaObject(self: QVBoxLayout) QMetaObject {
        return .{ .ptr = qtc.QVBoxLayout_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QVBoxLayout, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QVBoxLayout_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` callback: *const fn (self: QVBoxLayout, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QVBoxLayout, callback: *const fn (QVBoxLayout, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QVBoxLayout_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QVBoxLayout, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QVBoxLayout_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QVBoxLayout, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QVBoxLayout_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` callback: *const fn (self: QVBoxLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QVBoxLayout, callback: *const fn (QVBoxLayout, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QVBoxLayout_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QVBoxLayout, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QVBoxLayout_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVBoxLayout.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVBoxLayout.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVBoxLayout.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `direction` instead
    ///
    pub const Direction = direction;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#direction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ## Returns:
    ///
    /// ` qboxlayout_enums.Direction `
    ///
    pub fn direction(self: QVBoxLayout) i32 {
        return qtc.QBoxLayout_Direction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDirection` instead
    ///
    pub const SetDirection = setDirection;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` _direction: qboxlayout_enums.Direction `
    ///
    pub fn setDirection(self: QVBoxLayout, _direction: i32) void {
        qtc.QBoxLayout_SetDirection(@ptrCast(self.ptr), @bitCast(_direction));
    }

    /// ### DEPRECATED: Use `addSpacing` instead
    ///
    pub const AddSpacing = addSpacing;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` size: i32 `
    ///
    pub fn addSpacing(self: QVBoxLayout, size: i32) void {
        qtc.QBoxLayout_AddSpacing(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `addStretch` instead
    ///
    pub const AddStretch = addStretch;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn addStretch(self: QVBoxLayout) void {
        qtc.QBoxLayout_AddStretch(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `addSpacerItem` instead
    ///
    pub const AddSpacerItem = addSpacerItem;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addSpacerItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` _spacerItem: QSpacerItem `
    ///
    pub fn addSpacerItem(self: QVBoxLayout, _spacerItem: anytype) void {
        comptime _ = @TypeOf(_spacerItem)._is_QSpacerItem;
        qtc.QBoxLayout_AddSpacerItem(@ptrCast(self.ptr), @ptrCast(_spacerItem.ptr));
    }

    /// ### DEPRECATED: Use `addWidget` instead
    ///
    pub const AddWidget = addWidget;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` param1: QWidget `
    ///
    pub fn addWidget(self: QVBoxLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QBoxLayout_AddWidget(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `addLayout` instead
    ///
    pub const AddLayout = addLayout;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` _layout: QLayout `
    ///
    pub fn addLayout(self: QVBoxLayout, _layout: anytype) void {
        comptime _ = @TypeOf(_layout)._is_QLayout;
        qtc.QBoxLayout_AddLayout(@ptrCast(self.ptr), @ptrCast(_layout.ptr));
    }

    /// ### DEPRECATED: Use `addStrut` instead
    ///
    pub const AddStrut = addStrut;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addStrut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn addStrut(self: QVBoxLayout, param1: i32) void {
        qtc.QBoxLayout_AddStrut(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `insertSpacing` instead
    ///
    pub const InsertSpacing = insertSpacing;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` index: i32 `
    ///
    /// ` size: i32 `
    ///
    pub fn insertSpacing(self: QVBoxLayout, index: i32, size: i32) void {
        qtc.QBoxLayout_InsertSpacing(@ptrCast(self.ptr), @bitCast(index), @bitCast(size));
    }

    /// ### DEPRECATED: Use `insertStretch` instead
    ///
    pub const InsertStretch = insertStretch;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn insertStretch(self: QVBoxLayout, index: i32) void {
        qtc.QBoxLayout_InsertStretch(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `insertSpacerItem` instead
    ///
    pub const InsertSpacerItem = insertSpacerItem;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertSpacerItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` index: i32 `
    ///
    /// ` _spacerItem: QSpacerItem `
    ///
    pub fn insertSpacerItem(self: QVBoxLayout, index: i32, _spacerItem: anytype) void {
        comptime _ = @TypeOf(_spacerItem)._is_QSpacerItem;
        qtc.QBoxLayout_InsertSpacerItem(@ptrCast(self.ptr), @bitCast(index), @ptrCast(_spacerItem.ptr));
    }

    /// ### DEPRECATED: Use `insertWidget` instead
    ///
    pub const InsertWidget = insertWidget;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` index: i32 `
    ///
    /// ` _widget: QWidget `
    ///
    pub fn insertWidget(self: QVBoxLayout, index: i32, _widget: anytype) void {
        comptime _ = @TypeOf(_widget)._is_QWidget;
        qtc.QBoxLayout_InsertWidget(@ptrCast(self.ptr), @bitCast(index), @ptrCast(_widget.ptr));
    }

    /// ### DEPRECATED: Use `insertLayout` instead
    ///
    pub const InsertLayout = insertLayout;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` index: i32 `
    ///
    /// ` _layout: QLayout `
    ///
    pub fn insertLayout(self: QVBoxLayout, index: i32, _layout: anytype) void {
        comptime _ = @TypeOf(_layout)._is_QLayout;
        qtc.QBoxLayout_InsertLayout(@ptrCast(self.ptr), @bitCast(index), @ptrCast(_layout.ptr));
    }

    /// ### DEPRECATED: Use `insertItem` instead
    ///
    pub const InsertItem = insertItem;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` index: i32 `
    ///
    /// ` param2: QLayoutItem `
    ///
    pub fn insertItem(self: QVBoxLayout, index: i32, param2: anytype) void {
        comptime _ = @TypeOf(param2)._is_QLayoutItem;
        qtc.QBoxLayout_InsertItem(@ptrCast(self.ptr), @bitCast(index), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `setStretchFactor` instead
    ///
    pub const SetStretchFactor = setStretchFactor;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setStretchFactor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` w: QWidget `
    ///
    /// ` _stretch: i32 `
    ///
    pub fn setStretchFactor(self: QVBoxLayout, w: anytype, _stretch: i32) bool {
        comptime _ = @TypeOf(w)._is_QWidget;
        return qtc.QBoxLayout_SetStretchFactor(@ptrCast(self.ptr), @ptrCast(w.ptr), @bitCast(_stretch));
    }

    /// ### DEPRECATED: Use `setStretchFactor2` instead
    ///
    pub const SetStretchFactor2 = setStretchFactor2;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setStretchFactor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` l: QLayout `
    ///
    /// ` _stretch: i32 `
    ///
    pub fn setStretchFactor2(self: QVBoxLayout, l: anytype, _stretch: i32) bool {
        comptime _ = @TypeOf(l)._is_QLayout;
        return qtc.QBoxLayout_SetStretchFactor2(@ptrCast(self.ptr), @ptrCast(l.ptr), @bitCast(_stretch));
    }

    /// ### DEPRECATED: Use `setStretch` instead
    ///
    pub const SetStretch = setStretch;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` index: i32 `
    ///
    /// ` _stretch: i32 `
    ///
    pub fn setStretch(self: QVBoxLayout, index: i32, _stretch: i32) void {
        qtc.QBoxLayout_SetStretch(@ptrCast(self.ptr), @bitCast(index), @bitCast(_stretch));
    }

    /// ### DEPRECATED: Use `stretch` instead
    ///
    pub const Stretch = stretch;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#stretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn stretch(self: QVBoxLayout, index: i32) i32 {
        return qtc.QBoxLayout_Stretch(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `addStretch1` instead
    ///
    pub const AddStretch1 = addStretch1;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` _stretch: i32 `
    ///
    pub fn addStretch1(self: QVBoxLayout, _stretch: i32) void {
        qtc.QBoxLayout_AddStretch1(@ptrCast(self.ptr), @bitCast(_stretch));
    }

    /// ### DEPRECATED: Use `addWidget2` instead
    ///
    pub const AddWidget2 = addWidget2;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` param1: QWidget `
    ///
    /// ` _stretch: i32 `
    ///
    pub fn addWidget2(self: QVBoxLayout, param1: anytype, _stretch: i32) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QBoxLayout_AddWidget2(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(_stretch));
    }

    /// ### DEPRECATED: Use `addWidget3` instead
    ///
    pub const AddWidget3 = addWidget3;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` param1: QWidget `
    ///
    /// ` _stretch: i32 `
    ///
    /// ` _alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn addWidget3(self: QVBoxLayout, param1: anytype, _stretch: i32, _alignment: i32) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QBoxLayout_AddWidget3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(_stretch), @bitCast(_alignment));
    }

    /// ### DEPRECATED: Use `addLayout2` instead
    ///
    pub const AddLayout2 = addLayout2;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` _layout: QLayout `
    ///
    /// ` _stretch: i32 `
    ///
    pub fn addLayout2(self: QVBoxLayout, _layout: anytype, _stretch: i32) void {
        comptime _ = @TypeOf(_layout)._is_QLayout;
        qtc.QBoxLayout_AddLayout2(@ptrCast(self.ptr), @ptrCast(_layout.ptr), @bitCast(_stretch));
    }

    /// ### DEPRECATED: Use `insertStretch2` instead
    ///
    pub const InsertStretch2 = insertStretch2;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` index: i32 `
    ///
    /// ` _stretch: i32 `
    ///
    pub fn insertStretch2(self: QVBoxLayout, index: i32, _stretch: i32) void {
        qtc.QBoxLayout_InsertStretch2(@ptrCast(self.ptr), @bitCast(index), @bitCast(_stretch));
    }

    /// ### DEPRECATED: Use `insertWidget3` instead
    ///
    pub const InsertWidget3 = insertWidget3;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` index: i32 `
    ///
    /// ` _widget: QWidget `
    ///
    /// ` _stretch: i32 `
    ///
    pub fn insertWidget3(self: QVBoxLayout, index: i32, _widget: anytype, _stretch: i32) void {
        comptime _ = @TypeOf(_widget)._is_QWidget;
        qtc.QBoxLayout_InsertWidget3(@ptrCast(self.ptr), @bitCast(index), @ptrCast(_widget.ptr), @bitCast(_stretch));
    }

    /// ### DEPRECATED: Use `insertWidget4` instead
    ///
    pub const InsertWidget4 = insertWidget4;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` index: i32 `
    ///
    /// ` _widget: QWidget `
    ///
    /// ` _stretch: i32 `
    ///
    /// ` _alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn insertWidget4(self: QVBoxLayout, index: i32, _widget: anytype, _stretch: i32, _alignment: i32) void {
        comptime _ = @TypeOf(_widget)._is_QWidget;
        qtc.QBoxLayout_InsertWidget4(@ptrCast(self.ptr), @bitCast(index), @ptrCast(_widget.ptr), @bitCast(_stretch), @bitCast(_alignment));
    }

    /// ### DEPRECATED: Use `insertLayout3` instead
    ///
    pub const InsertLayout3 = insertLayout3;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` index: i32 `
    ///
    /// ` _layout: QLayout `
    ///
    /// ` _stretch: i32 `
    ///
    pub fn insertLayout3(self: QVBoxLayout, index: i32, _layout: anytype, _stretch: i32) void {
        comptime _ = @TypeOf(_layout)._is_QLayout;
        qtc.QBoxLayout_InsertLayout3(@ptrCast(self.ptr), @bitCast(index), @ptrCast(_layout.ptr), @bitCast(_stretch));
    }

    /// Inherited from QLayout
    ///
    /// Upcasts to a QLayoutItem object
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn asQLayoutItem(self: QVBoxLayout) QLayoutItem {
        return .{ .ptr = qtc.QLayout_AsQLayoutItem(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayout
    ///
    /// Downcasts to a QVBoxLayout object
    ///
    /// ## Parameter(s):
    ///
    /// ` _qlayoutitem: QLayoutItem `
    ///
    pub fn fromQLayoutItem(_qlayoutitem: anytype) QVBoxLayout {
        comptime _ = @TypeOf(_qlayoutitem)._is_QLayoutItem;
        return .{ .ptr = @ptrCast(qtc.QLayout_FromQLayoutItem(@ptrCast(_qlayoutitem.ptr))) };
    }

    /// ### DEPRECATED: Use `setContentsMargins` instead
    ///
    pub const SetContentsMargins = setContentsMargins;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn setContentsMargins(self: QVBoxLayout, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QLayout_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// ### DEPRECATED: Use `setContentsMargins2` instead
    ///
    pub const SetContentsMargins2 = setContentsMargins2;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` margins: QMargins `
    ///
    pub fn setContentsMargins2(self: QVBoxLayout, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QLayout_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// ### DEPRECATED: Use `unsetContentsMargins` instead
    ///
    pub const UnsetContentsMargins = unsetContentsMargins;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#unsetContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn unsetContentsMargins(self: QVBoxLayout) void {
        qtc.QLayout_UnsetContentsMargins(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `getContentsMargins` instead
    ///
    pub const GetContentsMargins = getContentsMargins;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#getContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` left: *i32 `
    ///
    /// ` top: *i32 `
    ///
    /// ` right: *i32 `
    ///
    /// ` bottom: *i32 `
    ///
    pub fn getContentsMargins(self: QVBoxLayout, left: *i32, top: *i32, right: *i32, bottom: *i32) void {
        qtc.QLayout_GetContentsMargins(@ptrCast(self.ptr), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// ### DEPRECATED: Use `contentsMargins` instead
    ///
    pub const ContentsMargins = contentsMargins;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn contentsMargins(self: QVBoxLayout) QMargins {
        return .{ .ptr = qtc.QLayout_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `contentsRect` instead
    ///
    pub const ContentsRect = contentsRect;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn contentsRect(self: QVBoxLayout) QRect {
        return .{ .ptr = qtc.QLayout_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAlignment` instead
    ///
    pub const SetAlignment = setAlignment;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` w: QWidget `
    ///
    /// ` _alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn setAlignment(self: QVBoxLayout, w: anytype, _alignment: i32) bool {
        comptime _ = @TypeOf(w)._is_QWidget;
        return qtc.QLayout_SetAlignment(@ptrCast(self.ptr), @ptrCast(w.ptr), @bitCast(_alignment));
    }

    /// ### DEPRECATED: Use `setAlignment2` instead
    ///
    pub const SetAlignment2 = setAlignment2;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` l: QLayout `
    ///
    /// ` _alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn setAlignment2(self: QVBoxLayout, l: anytype, _alignment: i32) bool {
        comptime _ = @TypeOf(l)._is_QLayout;
        return qtc.QLayout_SetAlignment2(@ptrCast(self.ptr), @ptrCast(l.ptr), @bitCast(_alignment));
    }

    /// ### DEPRECATED: Use `setSizeConstraint` instead
    ///
    pub const SetSizeConstraint = setSizeConstraint;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setSizeConstraint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` _sizeConstraint: qlayout_enums.SizeConstraint `
    ///
    pub fn setSizeConstraint(self: QVBoxLayout, _sizeConstraint: i32) void {
        qtc.QLayout_SetSizeConstraint(@ptrCast(self.ptr), @bitCast(_sizeConstraint));
    }

    /// ### DEPRECATED: Use `sizeConstraint` instead
    ///
    pub const SizeConstraint = sizeConstraint;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#sizeConstraint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ## Returns:
    ///
    /// ` qlayout_enums.SizeConstraint `
    ///
    pub fn sizeConstraint(self: QVBoxLayout) i32 {
        return qtc.QLayout_SizeConstraint(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMenuBar` instead
    ///
    pub const SetMenuBar = setMenuBar;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setMenuBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` w: QWidget `
    ///
    pub fn setMenuBar(self: QVBoxLayout, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QLayout_SetMenuBar(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `menuBar` instead
    ///
    pub const MenuBar = menuBar;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#menuBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn menuBar(self: QVBoxLayout) QWidget {
        return .{ .ptr = qtc.QLayout_MenuBar(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `parentWidget` instead
    ///
    pub const ParentWidget = parentWidget;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#parentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn parentWidget(self: QVBoxLayout) QWidget {
        return .{ .ptr = qtc.QLayout_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `activate` instead
    ///
    pub const Activate = activate;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#activate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn activate(self: QVBoxLayout) bool {
        return qtc.QLayout_Activate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `update` instead
    ///
    pub const Update = update;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn update(self: QVBoxLayout) void {
        qtc.QLayout_Update(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `removeWidget` instead
    ///
    pub const RemoveWidget = removeWidget;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#removeWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` w: QWidget `
    ///
    pub fn removeWidget(self: QVBoxLayout, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QLayout_RemoveWidget(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `removeItem` instead
    ///
    pub const RemoveItem = removeItem;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#removeItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` param1: QLayoutItem `
    ///
    pub fn removeItem(self: QVBoxLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QLayoutItem;
        qtc.QLayout_RemoveItem(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `indexOf2` instead
    ///
    pub const IndexOf2 = indexOf2;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` param1: QLayoutItem `
    ///
    pub fn indexOf2(self: QVBoxLayout, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QLayoutItem;
        return qtc.QLayout_IndexOf2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onIndexOf2` instead
    ///
    pub const OnIndexOf2 = onIndexOf2;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` callback: *const fn (self: QVBoxLayout, param1: QLayoutItem) callconv(.c) i32 `
    ///
    pub fn onIndexOf2(self: QVBoxLayout, callback: *const fn (QVBoxLayout, QLayoutItem) callconv(.c) i32) void {
        qtc.QLayout_OnIndexOf2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIndexOf2` instead
    ///
    pub const SuperIndexOf2 = superIndexOf2;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` param1: QLayoutItem `
    ///
    pub fn superIndexOf2(self: QVBoxLayout, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QLayoutItem;
        return qtc.QLayout_SuperIndexOf2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `totalMinimumHeightForWidth` instead
    ///
    pub const TotalMinimumHeightForWidth = totalMinimumHeightForWidth;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalMinimumHeightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` w: i32 `
    ///
    pub fn totalMinimumHeightForWidth(self: QVBoxLayout, w: i32) i32 {
        return qtc.QLayout_TotalMinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// ### DEPRECATED: Use `totalHeightForWidth` instead
    ///
    pub const TotalHeightForWidth = totalHeightForWidth;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalHeightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` w: i32 `
    ///
    pub fn totalHeightForWidth(self: QVBoxLayout, w: i32) i32 {
        return qtc.QLayout_TotalHeightForWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// ### DEPRECATED: Use `totalMinimumSize` instead
    ///
    pub const TotalMinimumSize = totalMinimumSize;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn totalMinimumSize(self: QVBoxLayout) QSize {
        return .{ .ptr = qtc.QLayout_TotalMinimumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `totalMaximumSize` instead
    ///
    pub const TotalMaximumSize = totalMaximumSize;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn totalMaximumSize(self: QVBoxLayout) QSize {
        return .{ .ptr = qtc.QLayout_TotalMaximumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `totalSizeHint` instead
    ///
    pub const TotalSizeHint = totalSizeHint;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalSizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn totalSizeHint(self: QVBoxLayout) QSize {
        return .{ .ptr = qtc.QLayout_TotalSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setEnabled` instead
    ///
    pub const SetEnabled = setEnabled;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` enabled: bool `
    ///
    pub fn setEnabled(self: QVBoxLayout, enabled: bool) void {
        qtc.QLayout_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `isEnabled` instead
    ///
    pub const IsEnabled = isEnabled;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn isEnabled(self: QVBoxLayout) bool {
        return qtc.QLayout_IsEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `closestAcceptableSize` instead
    ///
    pub const ClosestAcceptableSize = closestAcceptableSize;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#closestAcceptableSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` w: QWidget `
    ///
    /// ` s: QSize `
    ///
    pub fn closestAcceptableSize(w: anytype, s: anytype) QSize {
        comptime _ = @TypeOf(w)._is_QWidget;
        comptime _ = @TypeOf(s)._is_QSize;
        return .{ .ptr = qtc.QLayout_ClosestAcceptableSize(@ptrCast(w.ptr), @ptrCast(s.ptr)) };
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
    /// ` self: QVBoxLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QVBoxLayout, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QVBoxLayout.objectName: Memory allocation failed");
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
    /// ` self: QVBoxLayout `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QVBoxLayout, name: []const u8) void {
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
    /// ` self: QVBoxLayout `
    ///
    pub fn isWidgetType(self: QVBoxLayout) bool {
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
    /// ` self: QVBoxLayout `
    ///
    pub fn isWindowType(self: QVBoxLayout) bool {
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
    /// ` self: QVBoxLayout `
    ///
    pub fn isQuickItemType(self: QVBoxLayout) bool {
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
    /// ` self: QVBoxLayout `
    ///
    pub fn signalsBlocked(self: QVBoxLayout) bool {
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
    /// ` self: QVBoxLayout `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QVBoxLayout, b: bool) bool {
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
    /// ` self: QVBoxLayout `
    ///
    pub fn thread(self: QVBoxLayout) QThread {
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
    /// ` self: QVBoxLayout `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QVBoxLayout, _thread: anytype) bool {
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
    /// ` self: QVBoxLayout `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QVBoxLayout, interval: i32) i32 {
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
    /// ` self: QVBoxLayout `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QVBoxLayout, time: i64) i32 {
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
    /// ` self: QVBoxLayout `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QVBoxLayout, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
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
    /// ` self: QVBoxLayout `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QVBoxLayout, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
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
    /// ` self: QVBoxLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QVBoxLayout, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QVBoxLayout.children: Memory allocation failed");
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
    /// ` self: QVBoxLayout `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QVBoxLayout, _parent: anytype) void {
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
    /// ` self: QVBoxLayout `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QVBoxLayout, filterObj: anytype) void {
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
    /// ` self: QVBoxLayout `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QVBoxLayout, obj: anytype) void {
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
    /// ` self: QVBoxLayout `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QVBoxLayout, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QVBoxLayout `
    ///
    pub fn disconnect3(self: QVBoxLayout) bool {
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
    /// ` self: QVBoxLayout `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QVBoxLayout, receiver: anytype) bool {
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
    /// ` self: QVBoxLayout `
    ///
    pub fn dumpObjectTree(self: QVBoxLayout) void {
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
    /// ` self: QVBoxLayout `
    ///
    pub fn dumpObjectInfo(self: QVBoxLayout) void {
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
    /// ` self: QVBoxLayout `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QVBoxLayout, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QVBoxLayout `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QVBoxLayout, name: [:0]const u8) QVariant {
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
    /// ` self: QVBoxLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QVBoxLayout, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QVBoxLayout.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QVBoxLayout.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QVBoxLayout `
    ///
    pub fn bindingStorage(self: QVBoxLayout) QBindingStorage {
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
    /// ` self: QVBoxLayout `
    ///
    pub fn bindingStorage2(self: QVBoxLayout) QBindingStorage {
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
    /// ` self: QVBoxLayout `
    ///
    pub fn destroyed(self: QVBoxLayout) void {
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
    /// ` self: QVBoxLayout `
    ///
    /// ` callback: *const fn (self: QVBoxLayout) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QVBoxLayout, callback: *const fn (QVBoxLayout) callconv(.c) void) void {
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
    /// ` self: QVBoxLayout `
    ///
    pub fn parent(self: QVBoxLayout) QObject {
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
    /// ` self: QVBoxLayout `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QVBoxLayout, classname: [:0]const u8) bool {
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
    /// ` self: QVBoxLayout `
    ///
    pub fn deleteLater(self: QVBoxLayout) void {
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
    /// ` self: QVBoxLayout `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QVBoxLayout, interval: i32, timerType: i32) i32 {
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
    /// ` self: QVBoxLayout `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QVBoxLayout, time: i64, timerType: i32) i32 {
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
    /// ` self: QVBoxLayout `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QVBoxLayout, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QVBoxLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QVBoxLayout, signal: [:0]const u8) bool {
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
    /// ` self: QVBoxLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QVBoxLayout, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QVBoxLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QVBoxLayout, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QVBoxLayout `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QVBoxLayout, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QVBoxLayout `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QVBoxLayout, param1: anytype) void {
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
    /// ` self: QVBoxLayout `
    ///
    /// ` callback: *const fn (self: QVBoxLayout, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QVBoxLayout, callback: *const fn (QVBoxLayout, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `alignment` instead
    ///
    pub const Alignment = alignment;

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn alignment(self: QVBoxLayout) i32 {
        return qtc.QLayoutItem_Alignment(@ptrCast(self.asQLayoutItem().ptr));
    }

    /// ### DEPRECATED: Use `addItem` instead
    ///
    pub const AddItem = addItem;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` param1: QLayoutItem `
    ///
    pub fn addItem(self: QVBoxLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QLayoutItem;
        qtc.QVBoxLayout_AddItem(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superAddItem` instead
    ///
    pub const SuperAddItem = superAddItem;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addItem)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` param1: QLayoutItem `
    ///
    pub fn superAddItem(self: QVBoxLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QLayoutItem;
        qtc.QVBoxLayout_SuperAddItem(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onAddItem` instead
    ///
    pub const OnAddItem = onAddItem;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxLayout`
    ///
    /// ` callback: *const fn (self: QVBoxLayout, param1: QLayoutItem) callconv(.c) void `
    ///
    pub fn onAddItem(self: QVBoxLayout, callback: *const fn (QVBoxLayout, QLayoutItem) callconv(.c) void) void {
        qtc.QVBoxLayout_OnAddItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `spacing` instead
    ///
    pub const Spacing = spacing;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#spacing)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn spacing(self: QVBoxLayout) i32 {
        return qtc.QVBoxLayout_Spacing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSpacing` instead
    ///
    pub const SuperSpacing = superSpacing;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#spacing)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn superSpacing(self: QVBoxLayout) i32 {
        return qtc.QVBoxLayout_SuperSpacing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSpacing` instead
    ///
    pub const OnSpacing = onSpacing;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#spacing)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxLayout`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSpacing(self: QVBoxLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QVBoxLayout_OnSpacing(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setSpacing` instead
    ///
    pub const SetSpacing = setSpacing;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setSpacing)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` _spacing: i32 `
    ///
    pub fn setSpacing(self: QVBoxLayout, _spacing: i32) void {
        qtc.QVBoxLayout_SetSpacing(@ptrCast(self.ptr), @bitCast(_spacing));
    }

    /// ### DEPRECATED: Use `superSetSpacing` instead
    ///
    pub const SuperSetSpacing = superSetSpacing;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setSpacing)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` _spacing: i32 `
    ///
    pub fn superSetSpacing(self: QVBoxLayout, _spacing: i32) void {
        qtc.QVBoxLayout_SuperSetSpacing(@ptrCast(self.ptr), @bitCast(_spacing));
    }

    /// ### DEPRECATED: Use `onSetSpacing` instead
    ///
    pub const OnSetSpacing = onSetSpacing;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setSpacing)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxLayout`
    ///
    /// ` callback: *const fn (self: QVBoxLayout, spacing: i32) callconv(.c) void `
    ///
    pub fn onSetSpacing(self: QVBoxLayout, callback: *const fn (QVBoxLayout, i32) callconv(.c) void) void {
        qtc.QVBoxLayout_OnSetSpacing(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sizeHint` instead
    ///
    pub const SizeHint = sizeHint;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn sizeHint(self: QVBoxLayout) QSize {
        return .{ .ptr = qtc.QVBoxLayout_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSizeHint` instead
    ///
    pub const SuperSizeHint = superSizeHint;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#sizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn superSizeHint(self: QVBoxLayout) QSize {
        return .{ .ptr = qtc.QVBoxLayout_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSizeHint` instead
    ///
    pub const OnSizeHint = onSizeHint;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxLayout`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSizeHint(self: QVBoxLayout, callback: *const fn () callconv(.c) QSize) void {
        qtc.QVBoxLayout_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `minimumSize` instead
    ///
    pub const MinimumSize = minimumSize;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#minimumSize)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn minimumSize(self: QVBoxLayout) QSize {
        return .{ .ptr = qtc.QVBoxLayout_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superMinimumSize` instead
    ///
    pub const SuperMinimumSize = superMinimumSize;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#minimumSize)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn superMinimumSize(self: QVBoxLayout) QSize {
        return .{ .ptr = qtc.QVBoxLayout_SuperMinimumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMinimumSize` instead
    ///
    pub const OnMinimumSize = onMinimumSize;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#minimumSize)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxLayout`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMinimumSize(self: QVBoxLayout, callback: *const fn () callconv(.c) QSize) void {
        qtc.QVBoxLayout_OnMinimumSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `maximumSize` instead
    ///
    pub const MaximumSize = maximumSize;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#maximumSize)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn maximumSize(self: QVBoxLayout) QSize {
        return .{ .ptr = qtc.QVBoxLayout_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superMaximumSize` instead
    ///
    pub const SuperMaximumSize = superMaximumSize;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#maximumSize)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn superMaximumSize(self: QVBoxLayout) QSize {
        return .{ .ptr = qtc.QVBoxLayout_SuperMaximumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMaximumSize` instead
    ///
    pub const OnMaximumSize = onMaximumSize;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#maximumSize)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxLayout`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMaximumSize(self: QVBoxLayout, callback: *const fn () callconv(.c) QSize) void {
        qtc.QVBoxLayout_OnMaximumSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hasHeightForWidth` instead
    ///
    pub const HasHeightForWidth = hasHeightForWidth;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn hasHeightForWidth(self: QVBoxLayout) bool {
        return qtc.QVBoxLayout_HasHeightForWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superHasHeightForWidth` instead
    ///
    pub const SuperHasHeightForWidth = superHasHeightForWidth;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn superHasHeightForWidth(self: QVBoxLayout) bool {
        return qtc.QVBoxLayout_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHasHeightForWidth` instead
    ///
    pub const OnHasHeightForWidth = onHasHeightForWidth;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxLayout`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onHasHeightForWidth(self: QVBoxLayout, callback: *const fn () callconv(.c) bool) void {
        qtc.QVBoxLayout_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `heightForWidth` instead
    ///
    pub const HeightForWidth = heightForWidth;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn heightForWidth(self: QVBoxLayout, param1: i32) i32 {
        return qtc.QVBoxLayout_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `superHeightForWidth` instead
    ///
    pub const SuperHeightForWidth = superHeightForWidth;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#heightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn superHeightForWidth(self: QVBoxLayout, param1: i32) i32 {
        return qtc.QVBoxLayout_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onHeightForWidth` instead
    ///
    pub const OnHeightForWidth = onHeightForWidth;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxLayout`
    ///
    /// ` callback: *const fn (self: QVBoxLayout, param1: i32) callconv(.c) i32 `
    ///
    pub fn onHeightForWidth(self: QVBoxLayout, callback: *const fn (QVBoxLayout, i32) callconv(.c) i32) void {
        qtc.QVBoxLayout_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `minimumHeightForWidth` instead
    ///
    pub const MinimumHeightForWidth = minimumHeightForWidth;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#minimumHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn minimumHeightForWidth(self: QVBoxLayout, param1: i32) i32 {
        return qtc.QVBoxLayout_MinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `superMinimumHeightForWidth` instead
    ///
    pub const SuperMinimumHeightForWidth = superMinimumHeightForWidth;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#minimumHeightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn superMinimumHeightForWidth(self: QVBoxLayout, param1: i32) i32 {
        return qtc.QVBoxLayout_SuperMinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onMinimumHeightForWidth` instead
    ///
    pub const OnMinimumHeightForWidth = onMinimumHeightForWidth;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#minimumHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxLayout`
    ///
    /// ` callback: *const fn (self: QVBoxLayout, param1: i32) callconv(.c) i32 `
    ///
    pub fn onMinimumHeightForWidth(self: QVBoxLayout, callback: *const fn (QVBoxLayout, i32) callconv(.c) i32) void {
        qtc.QVBoxLayout_OnMinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `expandingDirections` instead
    ///
    pub const ExpandingDirections = expandingDirections;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#expandingDirections)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.Orientation `
    ///
    pub fn expandingDirections(self: QVBoxLayout) i32 {
        return qtc.QVBoxLayout_ExpandingDirections(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superExpandingDirections` instead
    ///
    pub const SuperExpandingDirections = superExpandingDirections;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#expandingDirections)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.Orientation `
    ///
    pub fn superExpandingDirections(self: QVBoxLayout) i32 {
        return qtc.QVBoxLayout_SuperExpandingDirections(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onExpandingDirections` instead
    ///
    pub const OnExpandingDirections = onExpandingDirections;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#expandingDirections)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxLayout`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onExpandingDirections(self: QVBoxLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QVBoxLayout_OnExpandingDirections(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `invalidate` instead
    ///
    pub const Invalidate = invalidate;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#invalidate)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn invalidate(self: QVBoxLayout) void {
        qtc.QVBoxLayout_Invalidate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superInvalidate` instead
    ///
    pub const SuperInvalidate = superInvalidate;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#invalidate)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn superInvalidate(self: QVBoxLayout) void {
        qtc.QVBoxLayout_SuperInvalidate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onInvalidate` instead
    ///
    pub const OnInvalidate = onInvalidate;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#invalidate)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxLayout`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onInvalidate(self: QVBoxLayout, callback: *const fn () callconv(.c) void) void {
        qtc.QVBoxLayout_OnInvalidate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemAt` instead
    ///
    pub const ItemAt = itemAt;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#itemAt)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn itemAt(self: QVBoxLayout, param1: i32) QLayoutItem {
        return .{ .ptr = qtc.QVBoxLayout_ItemAt(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `superItemAt` instead
    ///
    pub const SuperItemAt = superItemAt;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#itemAt)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn superItemAt(self: QVBoxLayout, param1: i32) QLayoutItem {
        return .{ .ptr = qtc.QVBoxLayout_SuperItemAt(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `onItemAt` instead
    ///
    pub const OnItemAt = onItemAt;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#itemAt)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxLayout`
    ///
    /// ` callback: *const fn (self: QVBoxLayout, param1: i32) callconv(.c) QLayoutItem `
    ///
    pub fn onItemAt(self: QVBoxLayout, callback: *const fn (QVBoxLayout, i32) callconv(.c) QLayoutItem) void {
        qtc.QVBoxLayout_OnItemAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `takeAt` instead
    ///
    pub const TakeAt = takeAt;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#takeAt)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn takeAt(self: QVBoxLayout, param1: i32) QLayoutItem {
        return .{ .ptr = qtc.QVBoxLayout_TakeAt(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `superTakeAt` instead
    ///
    pub const SuperTakeAt = superTakeAt;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#takeAt)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn superTakeAt(self: QVBoxLayout, param1: i32) QLayoutItem {
        return .{ .ptr = qtc.QVBoxLayout_SuperTakeAt(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `onTakeAt` instead
    ///
    pub const OnTakeAt = onTakeAt;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#takeAt)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxLayout`
    ///
    /// ` callback: *const fn (self: QVBoxLayout, param1: i32) callconv(.c) QLayoutItem `
    ///
    pub fn onTakeAt(self: QVBoxLayout, callback: *const fn (QVBoxLayout, i32) callconv(.c) QLayoutItem) void {
        qtc.QVBoxLayout_OnTakeAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `count` instead
    ///
    pub const Count = count;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#count)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn count(self: QVBoxLayout) i32 {
        return qtc.QVBoxLayout_Count(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superCount` instead
    ///
    pub const SuperCount = superCount;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#count)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn superCount(self: QVBoxLayout) i32 {
        return qtc.QVBoxLayout_SuperCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCount` instead
    ///
    pub const OnCount = onCount;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#count)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxLayout`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onCount(self: QVBoxLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QVBoxLayout_OnCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setGeometry` instead
    ///
    pub const SetGeometry = setGeometry;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setGeometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` _geometry: QRect `
    ///
    pub fn setGeometry(self: QVBoxLayout, _geometry: anytype) void {
        comptime _ = @TypeOf(_geometry)._is_QRect;
        qtc.QVBoxLayout_SetGeometry(@ptrCast(self.ptr), @ptrCast(_geometry.ptr));
    }

    /// ### DEPRECATED: Use `superSetGeometry` instead
    ///
    pub const SuperSetGeometry = superSetGeometry;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setGeometry)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` _geometry: QRect `
    ///
    pub fn superSetGeometry(self: QVBoxLayout, _geometry: anytype) void {
        comptime _ = @TypeOf(_geometry)._is_QRect;
        qtc.QVBoxLayout_SuperSetGeometry(@ptrCast(self.ptr), @ptrCast(_geometry.ptr));
    }

    /// ### DEPRECATED: Use `onSetGeometry` instead
    ///
    pub const OnSetGeometry = onSetGeometry;

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setGeometry)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxLayout`
    ///
    /// ` callback: *const fn (self: QVBoxLayout, geometry: QRect) callconv(.c) void `
    ///
    pub fn onSetGeometry(self: QVBoxLayout, callback: *const fn (QVBoxLayout, QRect) callconv(.c) void) void {
        qtc.QVBoxLayout_OnSetGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `geometry` instead
    ///
    pub const Geometry = geometry;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#geometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn geometry(self: QVBoxLayout) QRect {
        return .{ .ptr = qtc.QVBoxLayout_Geometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superGeometry` instead
    ///
    pub const SuperGeometry = superGeometry;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#geometry)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn superGeometry(self: QVBoxLayout) QRect {
        return .{ .ptr = qtc.QVBoxLayout_SuperGeometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onGeometry` instead
    ///
    pub const OnGeometry = onGeometry;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#geometry)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxLayout`
    ///
    /// ` callback: *const fn () callconv(.c) QRect `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onGeometry(self: QVBoxLayout, callback: *const fn () callconv(.c) QRect) void {
        qtc.QVBoxLayout_OnGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `indexOf` instead
    ///
    pub const IndexOf = indexOf;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` param1: QWidget `
    ///
    pub fn indexOf(self: QVBoxLayout, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QVBoxLayout_IndexOf(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superIndexOf` instead
    ///
    pub const SuperIndexOf = superIndexOf;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` param1: QWidget `
    ///
    pub fn superIndexOf(self: QVBoxLayout, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QVBoxLayout_SuperIndexOf(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onIndexOf` instead
    ///
    pub const OnIndexOf = onIndexOf;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxLayout`
    ///
    /// ` callback: *const fn (self: QVBoxLayout, param1: QWidget) callconv(.c) i32 `
    ///
    pub fn onIndexOf(self: QVBoxLayout, callback: *const fn (QVBoxLayout, QWidget) callconv(.c) i32) void {
        qtc.QVBoxLayout_OnIndexOf(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isEmpty` instead
    ///
    pub const IsEmpty = isEmpty;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn isEmpty(self: QVBoxLayout) bool {
        return qtc.QVBoxLayout_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superIsEmpty` instead
    ///
    pub const SuperIsEmpty = superIsEmpty;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn superIsEmpty(self: QVBoxLayout) bool {
        return qtc.QVBoxLayout_SuperIsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsEmpty` instead
    ///
    pub const OnIsEmpty = onIsEmpty;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxLayout`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsEmpty(self: QVBoxLayout, callback: *const fn () callconv(.c) bool) void {
        qtc.QVBoxLayout_OnIsEmpty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `controlTypes` instead
    ///
    pub const ControlTypes = controlTypes;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsizepolicy_enums.ControlType `
    ///
    pub fn controlTypes(self: QVBoxLayout) i32 {
        return qtc.QVBoxLayout_ControlTypes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superControlTypes` instead
    ///
    pub const SuperControlTypes = superControlTypes;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ## Returns:
    ///
    /// ` flag of qsizepolicy_enums.ControlType `
    ///
    pub fn superControlTypes(self: QVBoxLayout) i32 {
        return qtc.QVBoxLayout_SuperControlTypes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onControlTypes` instead
    ///
    pub const OnControlTypes = onControlTypes;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxLayout`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onControlTypes(self: QVBoxLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QVBoxLayout_OnControlTypes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `replaceWidget` instead
    ///
    pub const ReplaceWidget = replaceWidget;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` from: QWidget `
    ///
    /// ` to: QWidget `
    ///
    /// ` options: flag of qnamespace_enums.FindChildOption `
    ///
    pub fn replaceWidget(self: QVBoxLayout, from: anytype, to: anytype, options: i32) QLayoutItem {
        comptime _ = @TypeOf(from)._is_QWidget;
        comptime _ = @TypeOf(to)._is_QWidget;
        return .{ .ptr = qtc.QVBoxLayout_ReplaceWidget(@ptrCast(self.ptr), @ptrCast(from.ptr), @ptrCast(to.ptr), @bitCast(options)) };
    }

    /// ### DEPRECATED: Use `superReplaceWidget` instead
    ///
    pub const SuperReplaceWidget = superReplaceWidget;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` from: QWidget `
    ///
    /// ` to: QWidget `
    ///
    /// ` options: flag of qnamespace_enums.FindChildOption `
    ///
    pub fn superReplaceWidget(self: QVBoxLayout, from: anytype, to: anytype, options: i32) QLayoutItem {
        comptime _ = @TypeOf(from)._is_QWidget;
        comptime _ = @TypeOf(to)._is_QWidget;
        return .{ .ptr = qtc.QVBoxLayout_SuperReplaceWidget(@ptrCast(self.ptr), @ptrCast(from.ptr), @ptrCast(to.ptr), @bitCast(options)) };
    }

    /// ### DEPRECATED: Use `onReplaceWidget` instead
    ///
    pub const OnReplaceWidget = onReplaceWidget;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxLayout`
    ///
    /// ` callback: *const fn (self: QVBoxLayout, from: QWidget, to: QWidget, options: flag of qnamespace_enums.FindChildOption) callconv(.c) QLayoutItem `
    ///
    pub fn onReplaceWidget(self: QVBoxLayout, callback: *const fn (QVBoxLayout, QWidget, QWidget, i32) callconv(.c) QLayoutItem) void {
        qtc.QVBoxLayout_OnReplaceWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `layout` instead
    ///
    pub const Layout = layout;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#layout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn layout(self: QVBoxLayout) QLayout {
        return .{ .ptr = qtc.QVBoxLayout_Layout(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superLayout` instead
    ///
    pub const SuperLayout = superLayout;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#layout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn superLayout(self: QVBoxLayout) QLayout {
        return .{ .ptr = qtc.QVBoxLayout_SuperLayout(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onLayout` instead
    ///
    pub const OnLayout = onLayout;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#layout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxLayout`
    ///
    /// ` callback: *const fn () callconv(.c) QLayout `
    ///
    pub fn onLayout(self: QVBoxLayout, callback: *const fn () callconv(.c) QLayout) void {
        qtc.QVBoxLayout_OnLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childEvent` instead
    ///
    pub const ChildEvent = childEvent;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` e: QChildEvent `
    ///
    pub fn childEvent(self: QVBoxLayout, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QChildEvent;
        qtc.QVBoxLayout_ChildEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superChildEvent` instead
    ///
    pub const SuperChildEvent = superChildEvent;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` e: QChildEvent `
    ///
    pub fn superChildEvent(self: QVBoxLayout, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QChildEvent;
        qtc.QVBoxLayout_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onChildEvent` instead
    ///
    pub const OnChildEvent = onChildEvent;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxLayout`
    ///
    /// ` callback: *const fn (self: QVBoxLayout, e: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QVBoxLayout, callback: *const fn (QVBoxLayout, QChildEvent) callconv(.c) void) void {
        qtc.QVBoxLayout_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVBoxLayout `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QVBoxLayout, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QVBoxLayout_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVBoxLayout `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QVBoxLayout, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QVBoxLayout_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVBoxLayout`
    ///
    /// ` callback: *const fn (self: QVBoxLayout, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QVBoxLayout, callback: *const fn (QVBoxLayout, QEvent) callconv(.c) bool) void {
        qtc.QVBoxLayout_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVBoxLayout `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QVBoxLayout, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QVBoxLayout_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVBoxLayout `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QVBoxLayout, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QVBoxLayout_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVBoxLayout`
    ///
    /// ` callback: *const fn (self: QVBoxLayout, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QVBoxLayout, callback: *const fn (QVBoxLayout, QObject, QEvent) callconv(.c) bool) void {
        qtc.QVBoxLayout_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVBoxLayout `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QVBoxLayout, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QVBoxLayout_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVBoxLayout `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QVBoxLayout, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QVBoxLayout_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVBoxLayout`
    ///
    /// ` callback: *const fn (self: QVBoxLayout, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QVBoxLayout, callback: *const fn (QVBoxLayout, QTimerEvent) callconv(.c) void) void {
        qtc.QVBoxLayout_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVBoxLayout `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QVBoxLayout, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QVBoxLayout_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVBoxLayout `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QVBoxLayout, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QVBoxLayout_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QVBoxLayout`
    ///
    /// ` callback: *const fn (self: QVBoxLayout, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QVBoxLayout, callback: *const fn (QVBoxLayout, QEvent) callconv(.c) void) void {
        qtc.QVBoxLayout_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVBoxLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QVBoxLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVBoxLayout_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVBoxLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QVBoxLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVBoxLayout_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVBoxLayout`
    ///
    /// ` callback: *const fn (self: QVBoxLayout, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QVBoxLayout, callback: *const fn (QVBoxLayout, QMetaMethod) callconv(.c) void) void {
        qtc.QVBoxLayout_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVBoxLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QVBoxLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVBoxLayout_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVBoxLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QVBoxLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVBoxLayout_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVBoxLayout`
    ///
    /// ` callback: *const fn (self: QVBoxLayout, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QVBoxLayout, callback: *const fn (QVBoxLayout, QMetaMethod) callconv(.c) void) void {
        qtc.QVBoxLayout_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `widget` instead
    ///
    pub const Widget = widget;

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn widget(self: QVBoxLayout) QWidget {
        return .{ .ptr = qtc.QVBoxLayout_Widget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superWidget` instead
    ///
    pub const SuperWidget = superWidget;

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn superWidget(self: QVBoxLayout) QWidget {
        return .{ .ptr = qtc.QVBoxLayout_SuperWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onWidget` instead
    ///
    pub const OnWidget = onWidget;

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxLayout`
    ///
    /// ` callback: *const fn () callconv(.c) QWidget `
    ///
    pub fn onWidget(self: QVBoxLayout, callback: *const fn () callconv(.c) QWidget) void {
        qtc.QVBoxLayout_OnWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `spacerItem` instead
    ///
    pub const SpacerItem = spacerItem;

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn spacerItem(self: QVBoxLayout) QSpacerItem {
        return .{ .ptr = qtc.QVBoxLayout_SpacerItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSpacerItem` instead
    ///
    pub const SuperSpacerItem = superSpacerItem;

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn superSpacerItem(self: QVBoxLayout) QSpacerItem {
        return .{ .ptr = qtc.QVBoxLayout_SuperSpacerItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSpacerItem` instead
    ///
    pub const OnSpacerItem = onSpacerItem;

    /// Inherited from QLayoutItem
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxLayout`
    ///
    /// ` callback: *const fn () callconv(.c) QSpacerItem `
    ///
    pub fn onSpacerItem(self: QVBoxLayout, callback: *const fn () callconv(.c) QSpacerItem) void {
        qtc.QVBoxLayout_OnSpacerItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `widgetEvent` instead
    ///
    pub const WidgetEvent = widgetEvent;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` param1: QEvent `
    ///
    pub fn widgetEvent(self: QVBoxLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.QVBoxLayout_WidgetEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superWidgetEvent` instead
    ///
    pub const SuperWidgetEvent = superWidgetEvent;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` param1: QEvent `
    ///
    pub fn superWidgetEvent(self: QVBoxLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.QVBoxLayout_SuperWidgetEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onWidgetEvent` instead
    ///
    pub const OnWidgetEvent = onWidgetEvent;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxLayout`
    ///
    /// ` callback: *const fn (self: QVBoxLayout, param1: QEvent) callconv(.c) void `
    ///
    pub fn onWidgetEvent(self: QVBoxLayout, callback: *const fn (QVBoxLayout, QEvent) callconv(.c) void) void {
        qtc.QVBoxLayout_OnWidgetEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `addChildLayout` instead
    ///
    pub const AddChildLayout = addChildLayout;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` l: QLayout `
    ///
    pub fn addChildLayout(self: QVBoxLayout, l: anytype) void {
        comptime _ = @TypeOf(l)._is_QLayout;
        qtc.QVBoxLayout_AddChildLayout(@ptrCast(self.ptr), @ptrCast(l.ptr));
    }

    /// ### DEPRECATED: Use `superAddChildLayout` instead
    ///
    pub const SuperAddChildLayout = superAddChildLayout;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` l: QLayout `
    ///
    pub fn superAddChildLayout(self: QVBoxLayout, l: anytype) void {
        comptime _ = @TypeOf(l)._is_QLayout;
        qtc.QVBoxLayout_SuperAddChildLayout(@ptrCast(self.ptr), @ptrCast(l.ptr));
    }

    /// ### DEPRECATED: Use `onAddChildLayout` instead
    ///
    pub const OnAddChildLayout = onAddChildLayout;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxLayout`
    ///
    /// ` callback: *const fn (self: QVBoxLayout, l: QLayout) callconv(.c) void `
    ///
    pub fn onAddChildLayout(self: QVBoxLayout, callback: *const fn (QVBoxLayout, QLayout) callconv(.c) void) void {
        qtc.QVBoxLayout_OnAddChildLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `addChildWidget` instead
    ///
    pub const AddChildWidget = addChildWidget;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` w: QWidget `
    ///
    pub fn addChildWidget(self: QVBoxLayout, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QVBoxLayout_AddChildWidget(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `superAddChildWidget` instead
    ///
    pub const SuperAddChildWidget = superAddChildWidget;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` w: QWidget `
    ///
    pub fn superAddChildWidget(self: QVBoxLayout, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QVBoxLayout_SuperAddChildWidget(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `onAddChildWidget` instead
    ///
    pub const OnAddChildWidget = onAddChildWidget;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxLayout`
    ///
    /// ` callback: *const fn (self: QVBoxLayout, w: QWidget) callconv(.c) void `
    ///
    pub fn onAddChildWidget(self: QVBoxLayout, callback: *const fn (QVBoxLayout, QWidget) callconv(.c) void) void {
        qtc.QVBoxLayout_OnAddChildWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `adoptLayout` instead
    ///
    pub const AdoptLayout = adoptLayout;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` _layout: QLayout `
    ///
    pub fn adoptLayout(self: QVBoxLayout, _layout: anytype) bool {
        comptime _ = @TypeOf(_layout)._is_QLayout;
        return qtc.QVBoxLayout_AdoptLayout(@ptrCast(self.ptr), @ptrCast(_layout.ptr));
    }

    /// ### DEPRECATED: Use `superAdoptLayout` instead
    ///
    pub const SuperAdoptLayout = superAdoptLayout;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` _layout: QLayout `
    ///
    pub fn superAdoptLayout(self: QVBoxLayout, _layout: anytype) bool {
        comptime _ = @TypeOf(_layout)._is_QLayout;
        return qtc.QVBoxLayout_SuperAdoptLayout(@ptrCast(self.ptr), @ptrCast(_layout.ptr));
    }

    /// ### DEPRECATED: Use `onAdoptLayout` instead
    ///
    pub const OnAdoptLayout = onAdoptLayout;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxLayout`
    ///
    /// ` callback: *const fn (self: QVBoxLayout, layout: QLayout) callconv(.c) bool `
    ///
    pub fn onAdoptLayout(self: QVBoxLayout, callback: *const fn (QVBoxLayout, QLayout) callconv(.c) bool) void {
        qtc.QVBoxLayout_OnAdoptLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `alignmentRect` instead
    ///
    pub const AlignmentRect = alignmentRect;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` param1: QRect `
    ///
    pub fn alignmentRect(self: QVBoxLayout, param1: anytype) QRect {
        comptime _ = @TypeOf(param1)._is_QRect;
        return .{ .ptr = qtc.QVBoxLayout_AlignmentRect(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `superAlignmentRect` instead
    ///
    pub const SuperAlignmentRect = superAlignmentRect;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` param1: QRect `
    ///
    pub fn superAlignmentRect(self: QVBoxLayout, param1: anytype) QRect {
        comptime _ = @TypeOf(param1)._is_QRect;
        return .{ .ptr = qtc.QVBoxLayout_SuperAlignmentRect(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `onAlignmentRect` instead
    ///
    pub const OnAlignmentRect = onAlignmentRect;

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxLayout`
    ///
    /// ` callback: *const fn (self: QVBoxLayout, param1: QRect) callconv(.c) QRect `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onAlignmentRect(self: QVBoxLayout, callback: *const fn (QVBoxLayout, QRect) callconv(.c) QRect) void {
        qtc.QVBoxLayout_OnAlignmentRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVBoxLayout `
    ///
    pub fn sender(self: QVBoxLayout) QObject {
        return .{ .ptr = qtc.QVBoxLayout_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QVBoxLayout `
    ///
    pub fn superSender(self: QVBoxLayout) QObject {
        return .{ .ptr = qtc.QVBoxLayout_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QVBoxLayout`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QVBoxLayout, callback: *const fn () callconv(.c) QObject) void {
        qtc.QVBoxLayout_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVBoxLayout `
    ///
    pub fn senderSignalIndex(self: QVBoxLayout) i32 {
        return qtc.QVBoxLayout_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QVBoxLayout `
    ///
    pub fn superSenderSignalIndex(self: QVBoxLayout) i32 {
        return qtc.QVBoxLayout_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QVBoxLayout`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QVBoxLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QVBoxLayout_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVBoxLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QVBoxLayout, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QVBoxLayout_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QVBoxLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QVBoxLayout, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QVBoxLayout_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QVBoxLayout`
    ///
    /// ` callback: *const fn (self: QVBoxLayout, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QVBoxLayout, callback: *const fn (QVBoxLayout, [*:0]const u8) callconv(.c) i32) void {
        qtc.QVBoxLayout_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVBoxLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QVBoxLayout, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QVBoxLayout_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVBoxLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QVBoxLayout, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QVBoxLayout_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QVBoxLayout`
    ///
    /// ` callback: *const fn (self: QVBoxLayout, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QVBoxLayout, callback: *const fn (QVBoxLayout, QMetaMethod) callconv(.c) bool) void {
        qtc.QVBoxLayout_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QVBoxLayout `
    ///
    /// ` callback: *const fn (self: QVBoxLayout, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QVBoxLayout, callback: *const fn (QVBoxLayout, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxlayout.html#dtor.QVBoxLayout)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn delete(self: QVBoxLayout) void {
        qtc.QVBoxLayout_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#public-types)
pub const enums = struct {
    pub const Direction = enum {
        pub const LeftToRight: i32 = 0;
        pub const RightToLeft: i32 = 1;
        pub const TopToBottom: i32 = 2;
        pub const BottomToTop: i32 = 3;
        pub const Down: i32 = 2;
        pub const Up: i32 = 3;
    };
};
