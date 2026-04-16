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

    /// New constructs a new QBoxLayout object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qboxlayout_enums.Direction `
    ///
    pub fn New(param1: i32) QBoxLayout {
        return .{ .ptr = qtc.QBoxLayout_new(@bitCast(param1)) };
    }

    /// New2 constructs a new QBoxLayout object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: qboxlayout_enums.Direction `
    ///
    /// ` parent: QWidget `
    ///
    pub fn New2(param1: i32, parent: anytype) QBoxLayout {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QBoxLayout_new2(@bitCast(param1), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn MetaObject(self: QBoxLayout) QMetaObject {
        return .{ .ptr = qtc.QBoxLayout_MetaObject(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMetaObject(self: QBoxLayout, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QBoxLayout_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn SuperMetaObject(self: QBoxLayout) QMetaObject {
        return .{ .ptr = qtc.QBoxLayout_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QBoxLayout, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QBoxLayout_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` callback: *const fn (self: QBoxLayout, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QBoxLayout, callback: *const fn (QBoxLayout, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QBoxLayout_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QBoxLayout, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QBoxLayout_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: QBoxLayout, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QBoxLayout_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` callback: *const fn (self: QBoxLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QBoxLayout, callback: *const fn (QBoxLayout, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QBoxLayout_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

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
    pub fn SuperMetacall(self: QBoxLayout, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QBoxLayout_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn Tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qboxlayout.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn Direction(self: QBoxLayout) i32 {
        return qtc.QBoxLayout_Direction(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` direction: qboxlayout_enums.Direction `
    ///
    pub fn SetDirection(self: QBoxLayout, direction: i32) void {
        qtc.QBoxLayout_SetDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` size: i32 `
    ///
    pub fn AddSpacing(self: QBoxLayout, size: i32) void {
        qtc.QBoxLayout_AddSpacing(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn AddStretch(self: QBoxLayout) void {
        qtc.QBoxLayout_AddStretch(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addSpacerItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` spacerItem: QSpacerItem `
    ///
    pub fn AddSpacerItem(self: QBoxLayout, spacerItem: anytype) void {
        comptime _ = @TypeOf(spacerItem)._is_QSpacerItem;
        qtc.QBoxLayout_AddSpacerItem(@ptrCast(self.ptr), @ptrCast(spacerItem.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` param1: QWidget `
    ///
    pub fn AddWidget(self: QBoxLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QBoxLayout_AddWidget(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` layout: QLayout `
    ///
    pub fn AddLayout(self: QBoxLayout, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QBoxLayout_AddLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addStrut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn AddStrut(self: QBoxLayout, param1: i32) void {
        qtc.QBoxLayout_AddStrut(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` param1: QLayoutItem `
    ///
    pub fn AddItem(self: QBoxLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QLayoutItem;
        qtc.QBoxLayout_AddItem(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnAddItem(self: QBoxLayout, callback: *const fn (QBoxLayout, QLayoutItem) callconv(.c) void) void {
        qtc.QBoxLayout_OnAddItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAddItem` instead
    ///
    pub const QBaseAddItem = SuperAddItem;

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
    pub fn SuperAddItem(self: QBoxLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QLayoutItem;
        qtc.QBoxLayout_SuperAddItem(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn InsertSpacing(self: QBoxLayout, index: i32, size: i32) void {
        qtc.QBoxLayout_InsertSpacing(@ptrCast(self.ptr), @bitCast(index), @bitCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn InsertStretch(self: QBoxLayout, index: i32) void {
        qtc.QBoxLayout_InsertStretch(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertSpacerItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` index: i32 `
    ///
    /// ` spacerItem: QSpacerItem `
    ///
    pub fn InsertSpacerItem(self: QBoxLayout, index: i32, spacerItem: anytype) void {
        comptime _ = @TypeOf(spacerItem)._is_QSpacerItem;
        qtc.QBoxLayout_InsertSpacerItem(@ptrCast(self.ptr), @bitCast(index), @ptrCast(spacerItem.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` index: i32 `
    ///
    /// ` widget: QWidget `
    ///
    pub fn InsertWidget(self: QBoxLayout, index: i32, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QBoxLayout_InsertWidget(@ptrCast(self.ptr), @bitCast(index), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` index: i32 `
    ///
    /// ` layout: QLayout `
    ///
    pub fn InsertLayout(self: QBoxLayout, index: i32, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QBoxLayout_InsertLayout(@ptrCast(self.ptr), @bitCast(index), @ptrCast(layout.ptr));
    }

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
    pub fn InsertItem(self: QBoxLayout, index: i32, param2: anytype) void {
        comptime _ = @TypeOf(param2)._is_QLayoutItem;
        qtc.QBoxLayout_InsertItem(@ptrCast(self.ptr), @bitCast(index), @ptrCast(param2.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#spacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn Spacing(self: QBoxLayout) i32 {
        return qtc.QBoxLayout_Spacing(@ptrCast(self.ptr));
    }

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
    pub fn OnSpacing(self: QBoxLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QBoxLayout_OnSpacing(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSpacing` instead
    ///
    pub const QBaseSpacing = SuperSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#spacing)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn SuperSpacing(self: QBoxLayout) i32 {
        return qtc.QBoxLayout_SuperSpacing(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` spacing: i32 `
    ///
    pub fn SetSpacing(self: QBoxLayout, spacing: i32) void {
        qtc.QBoxLayout_SetSpacing(@ptrCast(self.ptr), @bitCast(spacing));
    }

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
    pub fn OnSetSpacing(self: QBoxLayout, callback: *const fn (QBoxLayout, i32) callconv(.c) void) void {
        qtc.QBoxLayout_OnSetSpacing(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetSpacing` instead
    ///
    pub const QBaseSetSpacing = SuperSetSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setSpacing)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` spacing: i32 `
    ///
    pub fn SuperSetSpacing(self: QBoxLayout, spacing: i32) void {
        qtc.QBoxLayout_SuperSetSpacing(@ptrCast(self.ptr), @bitCast(spacing));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setStretchFactor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` w: QWidget `
    ///
    /// ` stretch: i32 `
    ///
    pub fn SetStretchFactor(self: QBoxLayout, w: anytype, stretch: i32) bool {
        comptime _ = @TypeOf(w)._is_QWidget;
        return qtc.QBoxLayout_SetStretchFactor(@ptrCast(self.ptr), @ptrCast(w.ptr), @bitCast(stretch));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setStretchFactor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` l: QLayout `
    ///
    /// ` stretch: i32 `
    ///
    pub fn SetStretchFactor2(self: QBoxLayout, l: anytype, stretch: i32) bool {
        comptime _ = @TypeOf(l)._is_QLayout;
        return qtc.QBoxLayout_SetStretchFactor2(@ptrCast(self.ptr), @ptrCast(l.ptr), @bitCast(stretch));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` index: i32 `
    ///
    /// ` stretch: i32 `
    ///
    pub fn SetStretch(self: QBoxLayout, index: i32, stretch: i32) void {
        qtc.QBoxLayout_SetStretch(@ptrCast(self.ptr), @bitCast(index), @bitCast(stretch));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#stretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` index: i32 `
    ///
    pub fn Stretch(self: QBoxLayout, index: i32) i32 {
        return qtc.QBoxLayout_Stretch(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn SizeHint(self: QBoxLayout) QSize {
        return .{ .ptr = qtc.QBoxLayout_SizeHint(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSizeHint(self: QBoxLayout, callback: *const fn () callconv(.c) QSize) void {
        qtc.QBoxLayout_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSizeHint` instead
    ///
    pub const QBaseSizeHint = SuperSizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#sizeHint)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn SuperSizeHint(self: QBoxLayout) QSize {
        return .{ .ptr = qtc.QBoxLayout_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn MinimumSize(self: QBoxLayout) QSize {
        return .{ .ptr = qtc.QBoxLayout_MinimumSize(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMinimumSize(self: QBoxLayout, callback: *const fn () callconv(.c) QSize) void {
        qtc.QBoxLayout_OnMinimumSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMinimumSize` instead
    ///
    pub const QBaseMinimumSize = SuperMinimumSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#minimumSize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn SuperMinimumSize(self: QBoxLayout) QSize {
        return .{ .ptr = qtc.QBoxLayout_SuperMinimumSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn MaximumSize(self: QBoxLayout) QSize {
        return .{ .ptr = qtc.QBoxLayout_MaximumSize(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMaximumSize(self: QBoxLayout, callback: *const fn () callconv(.c) QSize) void {
        qtc.QBoxLayout_OnMaximumSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMaximumSize` instead
    ///
    pub const QBaseMaximumSize = SuperMaximumSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#maximumSize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn SuperMaximumSize(self: QBoxLayout) QSize {
        return .{ .ptr = qtc.QBoxLayout_SuperMaximumSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#hasHeightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn HasHeightForWidth(self: QBoxLayout) bool {
        return qtc.QBoxLayout_HasHeightForWidth(@ptrCast(self.ptr));
    }

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
    pub fn OnHasHeightForWidth(self: QBoxLayout, callback: *const fn () callconv(.c) bool) void {
        qtc.QBoxLayout_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperHasHeightForWidth` instead
    ///
    pub const QBaseHasHeightForWidth = SuperHasHeightForWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#hasHeightForWidth)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn SuperHasHeightForWidth(self: QBoxLayout) bool {
        return qtc.QBoxLayout_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#heightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: QBoxLayout, param1: i32) i32 {
        return qtc.QBoxLayout_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

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
    pub fn OnHeightForWidth(self: QBoxLayout, callback: *const fn (QBoxLayout, i32) callconv(.c) i32) void {
        qtc.QBoxLayout_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperHeightForWidth` instead
    ///
    pub const QBaseHeightForWidth = SuperHeightForWidth;

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
    pub fn SuperHeightForWidth(self: QBoxLayout, param1: i32) i32 {
        return qtc.QBoxLayout_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#minimumHeightForWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn MinimumHeightForWidth(self: QBoxLayout, param1: i32) i32 {
        return qtc.QBoxLayout_MinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

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
    pub fn OnMinimumHeightForWidth(self: QBoxLayout, callback: *const fn (QBoxLayout, i32) callconv(.c) i32) void {
        qtc.QBoxLayout_OnMinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMinimumHeightForWidth` instead
    ///
    pub const QBaseMinimumHeightForWidth = SuperMinimumHeightForWidth;

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
    pub fn SuperMinimumHeightForWidth(self: QBoxLayout, param1: i32) i32 {
        return qtc.QBoxLayout_SuperMinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

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
    pub fn ExpandingDirections(self: QBoxLayout) i32 {
        return qtc.QBoxLayout_ExpandingDirections(@ptrCast(self.ptr));
    }

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
    pub fn OnExpandingDirections(self: QBoxLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QBoxLayout_OnExpandingDirections(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperExpandingDirections` instead
    ///
    pub const QBaseExpandingDirections = SuperExpandingDirections;

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
    pub fn SuperExpandingDirections(self: QBoxLayout) i32 {
        return qtc.QBoxLayout_SuperExpandingDirections(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#invalidate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn Invalidate(self: QBoxLayout) void {
        qtc.QBoxLayout_Invalidate(@ptrCast(self.ptr));
    }

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
    pub fn OnInvalidate(self: QBoxLayout, callback: *const fn () callconv(.c) void) void {
        qtc.QBoxLayout_OnInvalidate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInvalidate` instead
    ///
    pub const QBaseInvalidate = SuperInvalidate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#invalidate)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn SuperInvalidate(self: QBoxLayout) void {
        qtc.QBoxLayout_SuperInvalidate(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#itemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn ItemAt(self: QBoxLayout, param1: i32) QLayoutItem {
        return .{ .ptr = qtc.QBoxLayout_ItemAt(@ptrCast(self.ptr), @bitCast(param1)) };
    }

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
    pub fn OnItemAt(self: QBoxLayout, callback: *const fn (QBoxLayout, i32) callconv(.c) QLayoutItem) void {
        qtc.QBoxLayout_OnItemAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperItemAt` instead
    ///
    pub const QBaseItemAt = SuperItemAt;

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
    pub fn SuperItemAt(self: QBoxLayout, param1: i32) QLayoutItem {
        return .{ .ptr = qtc.QBoxLayout_SuperItemAt(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#takeAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` param1: i32 `
    ///
    pub fn TakeAt(self: QBoxLayout, param1: i32) QLayoutItem {
        return .{ .ptr = qtc.QBoxLayout_TakeAt(@ptrCast(self.ptr), @bitCast(param1)) };
    }

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
    pub fn OnTakeAt(self: QBoxLayout, callback: *const fn (QBoxLayout, i32) callconv(.c) QLayoutItem) void {
        qtc.QBoxLayout_OnTakeAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperTakeAt` instead
    ///
    pub const QBaseTakeAt = SuperTakeAt;

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
    pub fn SuperTakeAt(self: QBoxLayout, param1: i32) QLayoutItem {
        return .{ .ptr = qtc.QBoxLayout_SuperTakeAt(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn Count(self: QBoxLayout) i32 {
        return qtc.QBoxLayout_Count(@ptrCast(self.ptr));
    }

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
    pub fn OnCount(self: QBoxLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QBoxLayout_OnCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCount` instead
    ///
    pub const QBaseCount = SuperCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#count)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn SuperCount(self: QBoxLayout) i32 {
        return qtc.QBoxLayout_SuperCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry(self: QBoxLayout, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QBoxLayout_SetGeometry(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

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
    pub fn OnSetGeometry(self: QBoxLayout, callback: *const fn (QBoxLayout, QRect) callconv(.c) void) void {
        qtc.QBoxLayout_OnSetGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetGeometry` instead
    ///
    pub const QBaseSetGeometry = SuperSetGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setGeometry)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SuperSetGeometry(self: QBoxLayout, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QBoxLayout_SuperSetGeometry(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

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
    pub fn Tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qboxlayout.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn Tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qboxlayout.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` stretch: i32 `
    ///
    pub fn AddStretch1(self: QBoxLayout, stretch: i32) void {
        qtc.QBoxLayout_AddStretch1(@ptrCast(self.ptr), @bitCast(stretch));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` param1: QWidget `
    ///
    /// ` stretch: i32 `
    ///
    pub fn AddWidget2(self: QBoxLayout, param1: anytype, stretch: i32) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QBoxLayout_AddWidget2(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(stretch));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` param1: QWidget `
    ///
    /// ` stretch: i32 `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn AddWidget3(self: QBoxLayout, param1: anytype, stretch: i32, alignment: i32) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QBoxLayout_AddWidget3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(stretch), @bitCast(alignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` layout: QLayout `
    ///
    /// ` stretch: i32 `
    ///
    pub fn AddLayout2(self: QBoxLayout, layout: anytype, stretch: i32) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QBoxLayout_AddLayout2(@ptrCast(self.ptr), @ptrCast(layout.ptr), @bitCast(stretch));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` index: i32 `
    ///
    /// ` stretch: i32 `
    ///
    pub fn InsertStretch2(self: QBoxLayout, index: i32, stretch: i32) void {
        qtc.QBoxLayout_InsertStretch2(@ptrCast(self.ptr), @bitCast(index), @bitCast(stretch));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` index: i32 `
    ///
    /// ` widget: QWidget `
    ///
    /// ` stretch: i32 `
    ///
    pub fn InsertWidget3(self: QBoxLayout, index: i32, widget: anytype, stretch: i32) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QBoxLayout_InsertWidget3(@ptrCast(self.ptr), @bitCast(index), @ptrCast(widget.ptr), @bitCast(stretch));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` index: i32 `
    ///
    /// ` widget: QWidget `
    ///
    /// ` stretch: i32 `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn InsertWidget4(self: QBoxLayout, index: i32, widget: anytype, stretch: i32, alignment: i32) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QBoxLayout_InsertWidget4(@ptrCast(self.ptr), @bitCast(index), @ptrCast(widget.ptr), @bitCast(stretch), @bitCast(alignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#insertLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` index: i32 `
    ///
    /// ` layout: QLayout `
    ///
    /// ` stretch: i32 `
    ///
    pub fn InsertLayout3(self: QBoxLayout, index: i32, layout: anytype, stretch: i32) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QBoxLayout_InsertLayout3(@ptrCast(self.ptr), @bitCast(index), @ptrCast(layout.ptr), @bitCast(stretch));
    }

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
    pub fn SetContentsMargins(self: QBoxLayout, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QLayout_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

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
    pub fn SetContentsMargins2(self: QBoxLayout, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QLayout_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#unsetContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn UnsetContentsMargins(self: QBoxLayout) void {
        qtc.QLayout_UnsetContentsMargins(@ptrCast(self.ptr));
    }

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
    pub fn GetContentsMargins(self: QBoxLayout, left: *i32, top: *i32, right: *i32, bottom: *i32) void {
        qtc.QLayout_GetContentsMargins(@ptrCast(self.ptr), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn ContentsMargins(self: QBoxLayout) QMargins {
        return .{ .ptr = qtc.QLayout_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn ContentsRect(self: QBoxLayout) QRect {
        return .{ .ptr = qtc.QLayout_ContentsRect(@ptrCast(self.ptr)) };
    }

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
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetAlignment(self: QBoxLayout, w: anytype, alignment: i32) bool {
        comptime _ = @TypeOf(w)._is_QWidget;
        return qtc.QLayout_SetAlignment(@ptrCast(self.ptr), @ptrCast(w.ptr), @bitCast(alignment));
    }

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
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetAlignment2(self: QBoxLayout, l: anytype, alignment: i32) bool {
        comptime _ = @TypeOf(l)._is_QLayout;
        return qtc.QLayout_SetAlignment2(@ptrCast(self.ptr), @ptrCast(l.ptr), @bitCast(alignment));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setSizeConstraint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` sizeConstraint: qlayout_enums.SizeConstraint `
    ///
    pub fn SetSizeConstraint(self: QBoxLayout, sizeConstraint: i32) void {
        qtc.QLayout_SetSizeConstraint(@ptrCast(self.ptr), @bitCast(sizeConstraint));
    }

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
    pub fn SizeConstraint(self: QBoxLayout) i32 {
        return qtc.QLayout_SizeConstraint(@ptrCast(self.ptr));
    }

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
    pub fn SetMenuBar(self: QBoxLayout, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QLayout_SetMenuBar(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#menuBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn MenuBar(self: QBoxLayout) QWidget {
        return .{ .ptr = qtc.QLayout_MenuBar(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#parentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn ParentWidget(self: QBoxLayout) QWidget {
        return .{ .ptr = qtc.QLayout_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#activate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn Activate(self: QBoxLayout) bool {
        return qtc.QLayout_Activate(@ptrCast(self.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn Update(self: QBoxLayout) void {
        qtc.QLayout_Update(@ptrCast(self.ptr));
    }

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
    pub fn RemoveWidget(self: QBoxLayout, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QLayout_RemoveWidget(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

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
    pub fn RemoveItem(self: QBoxLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QLayoutItem;
        qtc.QLayout_RemoveItem(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn IndexOf2(self: QBoxLayout, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QLayoutItem;
        return qtc.QLayout_IndexOf2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnIndexOf2(self: QBoxLayout, callback: *const fn (QBoxLayout, QLayoutItem) callconv(.c) i32) void {
        qtc.QLayout_OnIndexOf2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIndexOf2` instead
    ///
    pub const QBaseIndexOf2 = SuperIndexOf2;

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
    pub fn SuperIndexOf2(self: QBoxLayout, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QLayoutItem;
        return qtc.QLayout_SuperIndexOf2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn TotalMinimumHeightForWidth(self: QBoxLayout, w: i32) i32 {
        return qtc.QLayout_TotalMinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(w));
    }

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
    pub fn TotalHeightForWidth(self: QBoxLayout, w: i32) i32 {
        return qtc.QLayout_TotalHeightForWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn TotalMinimumSize(self: QBoxLayout) QSize {
        return .{ .ptr = qtc.QLayout_TotalMinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn TotalMaximumSize(self: QBoxLayout) QSize {
        return .{ .ptr = qtc.QLayout_TotalMaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalSizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn TotalSizeHint(self: QBoxLayout) QSize {
        return .{ .ptr = qtc.QLayout_TotalSizeHint(@ptrCast(self.ptr)) };
    }

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
    pub fn SetEnabled(self: QBoxLayout, enabled: bool) void {
        qtc.QLayout_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn IsEnabled(self: QBoxLayout) bool {
        return qtc.QLayout_IsEnabled(@ptrCast(self.ptr));
    }

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
    pub fn ClosestAcceptableSize(w: anytype, s: anytype) QSize {
        comptime _ = @TypeOf(w)._is_QWidget;
        comptime _ = @TypeOf(s)._is_QSize;
        return .{ .ptr = qtc.QLayout_ClosestAcceptableSize(@ptrCast(w.ptr), @ptrCast(s.ptr)) };
    }

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
    pub fn ObjectName(self: QBoxLayout, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qboxlayout.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetObjectName(self: QBoxLayout, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn IsWidgetType(self: QBoxLayout) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn IsWindowType(self: QBoxLayout) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn IsQuickItemType(self: QBoxLayout) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn SignalsBlocked(self: QBoxLayout) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: QBoxLayout, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn Thread(self: QBoxLayout) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QBoxLayout, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: QBoxLayout, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: QBoxLayout, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

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
    pub fn KillTimer(self: QBoxLayout, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn KillTimer2(self: QBoxLayout, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: QBoxLayout, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qboxlayout.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QBoxLayout, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

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
    pub fn InstallEventFilter(self: QBoxLayout, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: QBoxLayout, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn Connect2(sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QBoxLayout, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn Disconnect2(sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn Disconnect3(self: QBoxLayout) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: QBoxLayout, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn DumpObjectTree(self: QBoxLayout) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn DumpObjectInfo(self: QBoxLayout) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

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
    pub fn SetProperty(self: QBoxLayout, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

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
    pub fn Property(self: QBoxLayout, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: QBoxLayout, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qboxlayout.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qboxlayout.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn BindingStorage(self: QBoxLayout) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn BindingStorage2(self: QBoxLayout) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn Destroyed(self: QBoxLayout) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: QBoxLayout, callback: *const fn (QBoxLayout) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn Parent(self: QBoxLayout) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: QBoxLayout, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn DeleteLater(self: QBoxLayout) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: QBoxLayout, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: QBoxLayout, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBoxLayout `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QBoxLayout, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

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
    pub fn Disconnect1(self: QBoxLayout, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: QBoxLayout, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

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
    pub fn Disconnect32(self: QBoxLayout, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

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
    pub fn Disconnect23(self: QBoxLayout, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

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
    pub fn Destroyed1(self: QBoxLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: QBoxLayout, callback: *const fn (QBoxLayout, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Alignment(self: QBoxLayout) i32 {
        return qtc.QLayoutItem_Alignment(@ptrCast(self.ptr));
    }

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
    pub fn Geometry(self: QBoxLayout) QRect {
        return .{ .ptr = qtc.QBoxLayout_Geometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperGeometry` instead
    ///
    pub const QBaseGeometry = SuperGeometry;

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
    pub fn SuperGeometry(self: QBoxLayout) QRect {
        return .{ .ptr = qtc.QBoxLayout_SuperGeometry(@ptrCast(self.ptr)) };
    }

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
    pub fn OnGeometry(self: QBoxLayout, callback: *const fn () callconv(.c) QRect) void {
        qtc.QBoxLayout_OnGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IndexOf(self: QBoxLayout, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QBoxLayout_IndexOf(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperIndexOf` instead
    ///
    pub const QBaseIndexOf = SuperIndexOf;

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
    pub fn SuperIndexOf(self: QBoxLayout, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QBoxLayout_SuperIndexOf(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnIndexOf(self: QBoxLayout, callback: *const fn (QBoxLayout, QWidget) callconv(.c) i32) void {
        qtc.QBoxLayout_OnIndexOf(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsEmpty(self: QBoxLayout) bool {
        return qtc.QBoxLayout_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsEmpty` instead
    ///
    pub const QBaseIsEmpty = SuperIsEmpty;

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
    pub fn SuperIsEmpty(self: QBoxLayout) bool {
        return qtc.QBoxLayout_SuperIsEmpty(@ptrCast(self.ptr));
    }

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
    pub fn OnIsEmpty(self: QBoxLayout, callback: *const fn () callconv(.c) bool) void {
        qtc.QBoxLayout_OnIsEmpty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ControlTypes(self: QBoxLayout) i32 {
        return qtc.QBoxLayout_ControlTypes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperControlTypes` instead
    ///
    pub const QBaseControlTypes = SuperControlTypes;

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
    pub fn SuperControlTypes(self: QBoxLayout) i32 {
        return qtc.QBoxLayout_SuperControlTypes(@ptrCast(self.ptr));
    }

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
    pub fn OnControlTypes(self: QBoxLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QBoxLayout_OnControlTypes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ReplaceWidget(self: QBoxLayout, from: anytype, to: anytype, options: i32) QLayoutItem {
        comptime _ = @TypeOf(from)._is_QWidget;
        comptime _ = @TypeOf(to)._is_QWidget;
        return .{ .ptr = qtc.QBoxLayout_ReplaceWidget(@ptrCast(self.ptr), @ptrCast(from.ptr), @ptrCast(to.ptr), @bitCast(options)) };
    }

    /// ### DEPRECATED: Use `SuperReplaceWidget` instead
    ///
    pub const QBaseReplaceWidget = SuperReplaceWidget;

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
    pub fn SuperReplaceWidget(self: QBoxLayout, from: anytype, to: anytype, options: i32) QLayoutItem {
        comptime _ = @TypeOf(from)._is_QWidget;
        comptime _ = @TypeOf(to)._is_QWidget;
        return .{ .ptr = qtc.QBoxLayout_SuperReplaceWidget(@ptrCast(self.ptr), @ptrCast(from.ptr), @ptrCast(to.ptr), @bitCast(options)) };
    }

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
    pub fn OnReplaceWidget(self: QBoxLayout, callback: *const fn (QBoxLayout, QWidget, QWidget, i32) callconv(.c) QLayoutItem) void {
        qtc.QBoxLayout_OnReplaceWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Layout(self: QBoxLayout) QLayout {
        return .{ .ptr = qtc.QBoxLayout_Layout(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperLayout` instead
    ///
    pub const QBaseLayout = SuperLayout;

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
    pub fn SuperLayout(self: QBoxLayout) QLayout {
        return .{ .ptr = qtc.QBoxLayout_SuperLayout(@ptrCast(self.ptr)) };
    }

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
    pub fn OnLayout(self: QBoxLayout, callback: *const fn () callconv(.c) QLayout) void {
        qtc.QBoxLayout_OnLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ChildEvent(self: QBoxLayout, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QChildEvent;
        qtc.QBoxLayout_ChildEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperChildEvent` instead
    ///
    pub const QBaseChildEvent = SuperChildEvent;

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
    pub fn SuperChildEvent(self: QBoxLayout, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QChildEvent;
        qtc.QBoxLayout_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

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
    pub fn OnChildEvent(self: QBoxLayout, callback: *const fn (QBoxLayout, QChildEvent) callconv(.c) void) void {
        qtc.QBoxLayout_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn Event(self: QBoxLayout, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QBoxLayout_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

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
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QBoxLayout, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QBoxLayout_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEvent(self: QBoxLayout, callback: *const fn (QBoxLayout, QEvent) callconv(.c) bool) void {
        qtc.QBoxLayout_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QBoxLayout, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QBoxLayout_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

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
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QBoxLayout, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QBoxLayout_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEventFilter(self: QBoxLayout, callback: *const fn (QBoxLayout, QObject, QEvent) callconv(.c) bool) void {
        qtc.QBoxLayout_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QBoxLayout, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QBoxLayout_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

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
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QBoxLayout, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QBoxLayout_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnTimerEvent(self: QBoxLayout, callback: *const fn (QBoxLayout, QTimerEvent) callconv(.c) void) void {
        qtc.QBoxLayout_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QBoxLayout, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QBoxLayout_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

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
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QBoxLayout, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QBoxLayout_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnCustomEvent(self: QBoxLayout, callback: *const fn (QBoxLayout, QEvent) callconv(.c) void) void {
        qtc.QBoxLayout_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ConnectNotify(self: QBoxLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBoxLayout_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperConnectNotify` instead
    ///
    pub const QBaseConnectNotify = SuperConnectNotify;

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
    pub fn SuperConnectNotify(self: QBoxLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBoxLayout_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnConnectNotify(self: QBoxLayout, callback: *const fn (QBoxLayout, QMetaMethod) callconv(.c) void) void {
        qtc.QBoxLayout_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DisconnectNotify(self: QBoxLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBoxLayout_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperDisconnectNotify` instead
    ///
    pub const QBaseDisconnectNotify = SuperDisconnectNotify;

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
    pub fn SuperDisconnectNotify(self: QBoxLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBoxLayout_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnDisconnectNotify(self: QBoxLayout, callback: *const fn (QBoxLayout, QMetaMethod) callconv(.c) void) void {
        qtc.QBoxLayout_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Widget(self: QBoxLayout) QWidget {
        return .{ .ptr = qtc.QBoxLayout_Widget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperWidget` instead
    ///
    pub const QBaseWidget = SuperWidget;

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
    pub fn SuperWidget(self: QBoxLayout) QWidget {
        return .{ .ptr = qtc.QBoxLayout_SuperWidget(@ptrCast(self.ptr)) };
    }

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
    pub fn OnWidget(self: QBoxLayout, callback: *const fn () callconv(.c) QWidget) void {
        qtc.QBoxLayout_OnWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SpacerItem(self: QBoxLayout) QSpacerItem {
        return .{ .ptr = qtc.QBoxLayout_SpacerItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSpacerItem` instead
    ///
    pub const QBaseSpacerItem = SuperSpacerItem;

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
    pub fn SuperSpacerItem(self: QBoxLayout) QSpacerItem {
        return .{ .ptr = qtc.QBoxLayout_SuperSpacerItem(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSpacerItem(self: QBoxLayout, callback: *const fn () callconv(.c) QSpacerItem) void {
        qtc.QBoxLayout_OnSpacerItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn WidgetEvent(self: QBoxLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.QBoxLayout_WidgetEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperWidgetEvent` instead
    ///
    pub const QBaseWidgetEvent = SuperWidgetEvent;

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
    pub fn SuperWidgetEvent(self: QBoxLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.QBoxLayout_SuperWidgetEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnWidgetEvent(self: QBoxLayout, callback: *const fn (QBoxLayout, QEvent) callconv(.c) void) void {
        qtc.QBoxLayout_OnWidgetEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn AddChildLayout(self: QBoxLayout, l: anytype) void {
        comptime _ = @TypeOf(l)._is_QLayout;
        qtc.QBoxLayout_AddChildLayout(@ptrCast(self.ptr), @ptrCast(l.ptr));
    }

    /// ### DEPRECATED: Use `SuperAddChildLayout` instead
    ///
    pub const QBaseAddChildLayout = SuperAddChildLayout;

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
    pub fn SuperAddChildLayout(self: QBoxLayout, l: anytype) void {
        comptime _ = @TypeOf(l)._is_QLayout;
        qtc.QBoxLayout_SuperAddChildLayout(@ptrCast(self.ptr), @ptrCast(l.ptr));
    }

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
    pub fn OnAddChildLayout(self: QBoxLayout, callback: *const fn (QBoxLayout, QLayout) callconv(.c) void) void {
        qtc.QBoxLayout_OnAddChildLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn AddChildWidget(self: QBoxLayout, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QBoxLayout_AddChildWidget(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `SuperAddChildWidget` instead
    ///
    pub const QBaseAddChildWidget = SuperAddChildWidget;

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
    pub fn SuperAddChildWidget(self: QBoxLayout, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QBoxLayout_SuperAddChildWidget(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

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
    pub fn OnAddChildWidget(self: QBoxLayout, callback: *const fn (QBoxLayout, QWidget) callconv(.c) void) void {
        qtc.QBoxLayout_OnAddChildWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` layout: QLayout `
    ///
    pub fn AdoptLayout(self: QBoxLayout, layout: anytype) bool {
        comptime _ = @TypeOf(layout)._is_QLayout;
        return qtc.QBoxLayout_AdoptLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// ### DEPRECATED: Use `SuperAdoptLayout` instead
    ///
    pub const QBaseAdoptLayout = SuperAdoptLayout;

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
    /// ` layout: QLayout `
    ///
    pub fn SuperAdoptLayout(self: QBoxLayout, layout: anytype) bool {
        comptime _ = @TypeOf(layout)._is_QLayout;
        return qtc.QBoxLayout_SuperAdoptLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

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
    pub fn OnAdoptLayout(self: QBoxLayout, callback: *const fn (QBoxLayout, QLayout) callconv(.c) bool) void {
        qtc.QBoxLayout_OnAdoptLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn AlignmentRect(self: QBoxLayout, param1: anytype) QRect {
        comptime _ = @TypeOf(param1)._is_QRect;
        return .{ .ptr = qtc.QBoxLayout_AlignmentRect(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperAlignmentRect` instead
    ///
    pub const QBaseAlignmentRect = SuperAlignmentRect;

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
    pub fn SuperAlignmentRect(self: QBoxLayout, param1: anytype) QRect {
        comptime _ = @TypeOf(param1)._is_QRect;
        return .{ .ptr = qtc.QBoxLayout_SuperAlignmentRect(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

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
    pub fn OnAlignmentRect(self: QBoxLayout, callback: *const fn (QBoxLayout, QRect) callconv(.c) QRect) void {
        qtc.QBoxLayout_OnAlignmentRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Sender(self: QBoxLayout) QObject {
        return .{ .ptr = qtc.QBoxLayout_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSender` instead
    ///
    pub const QBaseSender = SuperSender;

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
    pub fn SuperSender(self: QBoxLayout) QObject {
        return .{ .ptr = qtc.QBoxLayout_SuperSender(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSender(self: QBoxLayout, callback: *const fn () callconv(.c) QObject) void {
        qtc.QBoxLayout_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SenderSignalIndex(self: QBoxLayout) i32 {
        return qtc.QBoxLayout_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSenderSignalIndex` instead
    ///
    pub const QBaseSenderSignalIndex = SuperSenderSignalIndex;

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
    pub fn SuperSenderSignalIndex(self: QBoxLayout) i32 {
        return qtc.QBoxLayout_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

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
    pub fn OnSenderSignalIndex(self: QBoxLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QBoxLayout_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Receivers(self: QBoxLayout, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QBoxLayout_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `SuperReceivers` instead
    ///
    pub const QBaseReceivers = SuperReceivers;

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
    pub fn SuperReceivers(self: QBoxLayout, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QBoxLayout_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn OnReceivers(self: QBoxLayout, callback: *const fn (QBoxLayout, [*:0]const u8) callconv(.c) i32) void {
        qtc.QBoxLayout_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsSignalConnected(self: QBoxLayout, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QBoxLayout_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsSignalConnected` instead
    ///
    pub const QBaseIsSignalConnected = SuperIsSignalConnected;

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
    pub fn SuperIsSignalConnected(self: QBoxLayout, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QBoxLayout_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnIsSignalConnected(self: QBoxLayout, callback: *const fn (QBoxLayout, QMetaMethod) callconv(.c) bool) void {
        qtc.QBoxLayout_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnObjectNameChanged(self: QBoxLayout, callback: *const fn (QBoxLayout, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#dtor.QBoxLayout)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QBoxLayout `
    ///
    pub fn Delete(self: QBoxLayout) void {
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

    /// New constructs a new QHBoxLayout object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    pub fn New(parent: anytype) QHBoxLayout {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QHBoxLayout_new(@ptrCast(parent.ptr)) };
    }

    /// New2 constructs a new QHBoxLayout object.
    ///
    pub fn New2() QHBoxLayout {
        return .{ .ptr = qtc.QHBoxLayout_new2() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn MetaObject(self: QHBoxLayout) QMetaObject {
        return .{ .ptr = qtc.QHBoxLayout_MetaObject(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMetaObject(self: QHBoxLayout, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QHBoxLayout_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn SuperMetaObject(self: QHBoxLayout) QMetaObject {
        return .{ .ptr = qtc.QHBoxLayout_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QHBoxLayout, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QHBoxLayout_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` callback: *const fn (self: QHBoxLayout, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QHBoxLayout, callback: *const fn (QHBoxLayout, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QHBoxLayout_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QHBoxLayout, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QHBoxLayout_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: QHBoxLayout, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QHBoxLayout_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` callback: *const fn (self: QHBoxLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QHBoxLayout, callback: *const fn (QHBoxLayout, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QHBoxLayout_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

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
    pub fn SuperMetacall(self: QHBoxLayout, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QHBoxLayout_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn Tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhboxlayout.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn Tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhboxlayout.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn Tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhboxlayout.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn Direction(self: QHBoxLayout) i32 {
        return qtc.QBoxLayout_Direction(@ptrCast(self.ptr));
    }

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` direction: qboxlayout_enums.Direction `
    ///
    pub fn SetDirection(self: QHBoxLayout, direction: i32) void {
        qtc.QBoxLayout_SetDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

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
    pub fn AddSpacing(self: QHBoxLayout, size: i32) void {
        qtc.QBoxLayout_AddSpacing(@ptrCast(self.ptr), @bitCast(size));
    }

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn AddStretch(self: QHBoxLayout) void {
        qtc.QBoxLayout_AddStretch(@ptrCast(self.ptr));
    }

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addSpacerItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` spacerItem: QSpacerItem `
    ///
    pub fn AddSpacerItem(self: QHBoxLayout, spacerItem: anytype) void {
        comptime _ = @TypeOf(spacerItem)._is_QSpacerItem;
        qtc.QBoxLayout_AddSpacerItem(@ptrCast(self.ptr), @ptrCast(spacerItem.ptr));
    }

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
    pub fn AddWidget(self: QHBoxLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QBoxLayout_AddWidget(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` layout: QLayout `
    ///
    pub fn AddLayout(self: QHBoxLayout, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QBoxLayout_AddLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

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
    pub fn AddStrut(self: QHBoxLayout, param1: i32) void {
        qtc.QBoxLayout_AddStrut(@ptrCast(self.ptr), @bitCast(param1));
    }

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
    pub fn InsertSpacing(self: QHBoxLayout, index: i32, size: i32) void {
        qtc.QBoxLayout_InsertSpacing(@ptrCast(self.ptr), @bitCast(index), @bitCast(size));
    }

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
    pub fn InsertStretch(self: QHBoxLayout, index: i32) void {
        qtc.QBoxLayout_InsertStretch(@ptrCast(self.ptr), @bitCast(index));
    }

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
    /// ` spacerItem: QSpacerItem `
    ///
    pub fn InsertSpacerItem(self: QHBoxLayout, index: i32, spacerItem: anytype) void {
        comptime _ = @TypeOf(spacerItem)._is_QSpacerItem;
        qtc.QBoxLayout_InsertSpacerItem(@ptrCast(self.ptr), @bitCast(index), @ptrCast(spacerItem.ptr));
    }

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
    /// ` widget: QWidget `
    ///
    pub fn InsertWidget(self: QHBoxLayout, index: i32, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QBoxLayout_InsertWidget(@ptrCast(self.ptr), @bitCast(index), @ptrCast(widget.ptr));
    }

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
    /// ` layout: QLayout `
    ///
    pub fn InsertLayout(self: QHBoxLayout, index: i32, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QBoxLayout_InsertLayout(@ptrCast(self.ptr), @bitCast(index), @ptrCast(layout.ptr));
    }

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
    pub fn InsertItem(self: QHBoxLayout, index: i32, param2: anytype) void {
        comptime _ = @TypeOf(param2)._is_QLayoutItem;
        qtc.QBoxLayout_InsertItem(@ptrCast(self.ptr), @bitCast(index), @ptrCast(param2.ptr));
    }

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
    /// ` stretch: i32 `
    ///
    pub fn SetStretchFactor(self: QHBoxLayout, w: anytype, stretch: i32) bool {
        comptime _ = @TypeOf(w)._is_QWidget;
        return qtc.QBoxLayout_SetStretchFactor(@ptrCast(self.ptr), @ptrCast(w.ptr), @bitCast(stretch));
    }

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
    /// ` stretch: i32 `
    ///
    pub fn SetStretchFactor2(self: QHBoxLayout, l: anytype, stretch: i32) bool {
        comptime _ = @TypeOf(l)._is_QLayout;
        return qtc.QBoxLayout_SetStretchFactor2(@ptrCast(self.ptr), @ptrCast(l.ptr), @bitCast(stretch));
    }

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
    /// ` stretch: i32 `
    ///
    pub fn SetStretch(self: QHBoxLayout, index: i32, stretch: i32) void {
        qtc.QBoxLayout_SetStretch(@ptrCast(self.ptr), @bitCast(index), @bitCast(stretch));
    }

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
    pub fn Stretch(self: QHBoxLayout, index: i32) i32 {
        return qtc.QBoxLayout_Stretch(@ptrCast(self.ptr), @bitCast(index));
    }

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` stretch: i32 `
    ///
    pub fn AddStretch1(self: QHBoxLayout, stretch: i32) void {
        qtc.QBoxLayout_AddStretch1(@ptrCast(self.ptr), @bitCast(stretch));
    }

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
    /// ` stretch: i32 `
    ///
    pub fn AddWidget2(self: QHBoxLayout, param1: anytype, stretch: i32) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QBoxLayout_AddWidget2(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(stretch));
    }

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
    /// ` stretch: i32 `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn AddWidget3(self: QHBoxLayout, param1: anytype, stretch: i32, alignment: i32) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QBoxLayout_AddWidget3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(stretch), @bitCast(alignment));
    }

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` layout: QLayout `
    ///
    /// ` stretch: i32 `
    ///
    pub fn AddLayout2(self: QHBoxLayout, layout: anytype, stretch: i32) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QBoxLayout_AddLayout2(@ptrCast(self.ptr), @ptrCast(layout.ptr), @bitCast(stretch));
    }

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
    /// ` stretch: i32 `
    ///
    pub fn InsertStretch2(self: QHBoxLayout, index: i32, stretch: i32) void {
        qtc.QBoxLayout_InsertStretch2(@ptrCast(self.ptr), @bitCast(index), @bitCast(stretch));
    }

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
    /// ` widget: QWidget `
    ///
    /// ` stretch: i32 `
    ///
    pub fn InsertWidget3(self: QHBoxLayout, index: i32, widget: anytype, stretch: i32) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QBoxLayout_InsertWidget3(@ptrCast(self.ptr), @bitCast(index), @ptrCast(widget.ptr), @bitCast(stretch));
    }

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
    /// ` widget: QWidget `
    ///
    /// ` stretch: i32 `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn InsertWidget4(self: QHBoxLayout, index: i32, widget: anytype, stretch: i32, alignment: i32) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QBoxLayout_InsertWidget4(@ptrCast(self.ptr), @bitCast(index), @ptrCast(widget.ptr), @bitCast(stretch), @bitCast(alignment));
    }

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
    /// ` layout: QLayout `
    ///
    /// ` stretch: i32 `
    ///
    pub fn InsertLayout3(self: QHBoxLayout, index: i32, layout: anytype, stretch: i32) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QBoxLayout_InsertLayout3(@ptrCast(self.ptr), @bitCast(index), @ptrCast(layout.ptr), @bitCast(stretch));
    }

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
    pub fn SetContentsMargins(self: QHBoxLayout, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QLayout_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

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
    pub fn SetContentsMargins2(self: QHBoxLayout, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QLayout_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#unsetContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn UnsetContentsMargins(self: QHBoxLayout) void {
        qtc.QLayout_UnsetContentsMargins(@ptrCast(self.ptr));
    }

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
    pub fn GetContentsMargins(self: QHBoxLayout, left: *i32, top: *i32, right: *i32, bottom: *i32) void {
        qtc.QLayout_GetContentsMargins(@ptrCast(self.ptr), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn ContentsMargins(self: QHBoxLayout) QMargins {
        return .{ .ptr = qtc.QLayout_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn ContentsRect(self: QHBoxLayout) QRect {
        return .{ .ptr = qtc.QLayout_ContentsRect(@ptrCast(self.ptr)) };
    }

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
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetAlignment(self: QHBoxLayout, w: anytype, alignment: i32) bool {
        comptime _ = @TypeOf(w)._is_QWidget;
        return qtc.QLayout_SetAlignment(@ptrCast(self.ptr), @ptrCast(w.ptr), @bitCast(alignment));
    }

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
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetAlignment2(self: QHBoxLayout, l: anytype, alignment: i32) bool {
        comptime _ = @TypeOf(l)._is_QLayout;
        return qtc.QLayout_SetAlignment2(@ptrCast(self.ptr), @ptrCast(l.ptr), @bitCast(alignment));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setSizeConstraint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` sizeConstraint: qlayout_enums.SizeConstraint `
    ///
    pub fn SetSizeConstraint(self: QHBoxLayout, sizeConstraint: i32) void {
        qtc.QLayout_SetSizeConstraint(@ptrCast(self.ptr), @bitCast(sizeConstraint));
    }

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
    pub fn SizeConstraint(self: QHBoxLayout) i32 {
        return qtc.QLayout_SizeConstraint(@ptrCast(self.ptr));
    }

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
    pub fn SetMenuBar(self: QHBoxLayout, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QLayout_SetMenuBar(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#menuBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn MenuBar(self: QHBoxLayout) QWidget {
        return .{ .ptr = qtc.QLayout_MenuBar(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#parentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn ParentWidget(self: QHBoxLayout) QWidget {
        return .{ .ptr = qtc.QLayout_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#activate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn Activate(self: QHBoxLayout) bool {
        return qtc.QLayout_Activate(@ptrCast(self.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn Update(self: QHBoxLayout) void {
        qtc.QLayout_Update(@ptrCast(self.ptr));
    }

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
    pub fn RemoveWidget(self: QHBoxLayout, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QLayout_RemoveWidget(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

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
    pub fn RemoveItem(self: QHBoxLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QLayoutItem;
        qtc.QLayout_RemoveItem(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn IndexOf2(self: QHBoxLayout, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QLayoutItem;
        return qtc.QLayout_IndexOf2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnIndexOf2(self: QHBoxLayout, callback: *const fn (QHBoxLayout, QLayoutItem) callconv(.c) i32) void {
        qtc.QLayout_OnIndexOf2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIndexOf2` instead
    ///
    pub const QBaseIndexOf2 = SuperIndexOf2;

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
    pub fn SuperIndexOf2(self: QHBoxLayout, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QLayoutItem;
        return qtc.QLayout_SuperIndexOf2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn TotalMinimumHeightForWidth(self: QHBoxLayout, w: i32) i32 {
        return qtc.QLayout_TotalMinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(w));
    }

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
    pub fn TotalHeightForWidth(self: QHBoxLayout, w: i32) i32 {
        return qtc.QLayout_TotalHeightForWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn TotalMinimumSize(self: QHBoxLayout) QSize {
        return .{ .ptr = qtc.QLayout_TotalMinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn TotalMaximumSize(self: QHBoxLayout) QSize {
        return .{ .ptr = qtc.QLayout_TotalMaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalSizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn TotalSizeHint(self: QHBoxLayout) QSize {
        return .{ .ptr = qtc.QLayout_TotalSizeHint(@ptrCast(self.ptr)) };
    }

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
    pub fn SetEnabled(self: QHBoxLayout, enabled: bool) void {
        qtc.QLayout_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn IsEnabled(self: QHBoxLayout) bool {
        return qtc.QLayout_IsEnabled(@ptrCast(self.ptr));
    }

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
    pub fn ClosestAcceptableSize(w: anytype, s: anytype) QSize {
        comptime _ = @TypeOf(w)._is_QWidget;
        comptime _ = @TypeOf(s)._is_QSize;
        return .{ .ptr = qtc.QLayout_ClosestAcceptableSize(@ptrCast(w.ptr), @ptrCast(s.ptr)) };
    }

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
    pub fn ObjectName(self: QHBoxLayout, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhboxlayout.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetObjectName(self: QHBoxLayout, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn IsWidgetType(self: QHBoxLayout) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn IsWindowType(self: QHBoxLayout) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn IsQuickItemType(self: QHBoxLayout) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn SignalsBlocked(self: QHBoxLayout) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: QHBoxLayout, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn Thread(self: QHBoxLayout) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QHBoxLayout, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: QHBoxLayout, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: QHBoxLayout, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

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
    pub fn KillTimer(self: QHBoxLayout, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn KillTimer2(self: QHBoxLayout, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: QHBoxLayout, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qhboxlayout.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QHBoxLayout, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

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
    pub fn InstallEventFilter(self: QHBoxLayout, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: QHBoxLayout, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn Connect2(sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QHBoxLayout, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn Disconnect2(sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn Disconnect3(self: QHBoxLayout) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: QHBoxLayout, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn DumpObjectTree(self: QHBoxLayout) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn DumpObjectInfo(self: QHBoxLayout) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

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
    pub fn SetProperty(self: QHBoxLayout, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

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
    pub fn Property(self: QHBoxLayout, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: QHBoxLayout, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qhboxlayout.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qhboxlayout.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn BindingStorage(self: QHBoxLayout) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn BindingStorage2(self: QHBoxLayout) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn Destroyed(self: QHBoxLayout) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: QHBoxLayout, callback: *const fn (QHBoxLayout) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn Parent(self: QHBoxLayout) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: QHBoxLayout, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn DeleteLater(self: QHBoxLayout) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: QHBoxLayout, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: QHBoxLayout, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QHBoxLayout `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QHBoxLayout, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

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
    pub fn Disconnect1(self: QHBoxLayout, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: QHBoxLayout, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

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
    pub fn Disconnect32(self: QHBoxLayout, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

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
    pub fn Disconnect23(self: QHBoxLayout, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

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
    pub fn Destroyed1(self: QHBoxLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: QHBoxLayout, callback: *const fn (QHBoxLayout, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Alignment(self: QHBoxLayout) i32 {
        return qtc.QLayoutItem_Alignment(@ptrCast(self.ptr));
    }

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
    pub fn AddItem(self: QHBoxLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QLayoutItem;
        qtc.QHBoxLayout_AddItem(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperAddItem` instead
    ///
    pub const QBaseAddItem = SuperAddItem;

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
    pub fn SuperAddItem(self: QHBoxLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QLayoutItem;
        qtc.QHBoxLayout_SuperAddItem(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnAddItem(self: QHBoxLayout, callback: *const fn (QHBoxLayout, QLayoutItem) callconv(.c) void) void {
        qtc.QHBoxLayout_OnAddItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Spacing(self: QHBoxLayout) i32 {
        return qtc.QHBoxLayout_Spacing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSpacing` instead
    ///
    pub const QBaseSpacing = SuperSpacing;

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
    pub fn SuperSpacing(self: QHBoxLayout) i32 {
        return qtc.QHBoxLayout_SuperSpacing(@ptrCast(self.ptr));
    }

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
    pub fn OnSpacing(self: QHBoxLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QHBoxLayout_OnSpacing(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` spacing: i32 `
    ///
    pub fn SetSpacing(self: QHBoxLayout, spacing: i32) void {
        qtc.QHBoxLayout_SetSpacing(@ptrCast(self.ptr), @bitCast(spacing));
    }

    /// ### DEPRECATED: Use `SuperSetSpacing` instead
    ///
    pub const QBaseSetSpacing = SuperSetSpacing;

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
    /// ` spacing: i32 `
    ///
    pub fn SuperSetSpacing(self: QHBoxLayout, spacing: i32) void {
        qtc.QHBoxLayout_SuperSetSpacing(@ptrCast(self.ptr), @bitCast(spacing));
    }

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
    pub fn OnSetSpacing(self: QHBoxLayout, callback: *const fn (QHBoxLayout, i32) callconv(.c) void) void {
        qtc.QHBoxLayout_OnSetSpacing(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SizeHint(self: QHBoxLayout) QSize {
        return .{ .ptr = qtc.QHBoxLayout_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSizeHint` instead
    ///
    pub const QBaseSizeHint = SuperSizeHint;

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
    pub fn SuperSizeHint(self: QHBoxLayout) QSize {
        return .{ .ptr = qtc.QHBoxLayout_SuperSizeHint(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSizeHint(self: QHBoxLayout, callback: *const fn () callconv(.c) QSize) void {
        qtc.QHBoxLayout_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn MinimumSize(self: QHBoxLayout) QSize {
        return .{ .ptr = qtc.QHBoxLayout_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperMinimumSize` instead
    ///
    pub const QBaseMinimumSize = SuperMinimumSize;

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
    pub fn SuperMinimumSize(self: QHBoxLayout) QSize {
        return .{ .ptr = qtc.QHBoxLayout_SuperMinimumSize(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMinimumSize(self: QHBoxLayout, callback: *const fn () callconv(.c) QSize) void {
        qtc.QHBoxLayout_OnMinimumSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn MaximumSize(self: QHBoxLayout) QSize {
        return .{ .ptr = qtc.QHBoxLayout_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperMaximumSize` instead
    ///
    pub const QBaseMaximumSize = SuperMaximumSize;

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
    pub fn SuperMaximumSize(self: QHBoxLayout) QSize {
        return .{ .ptr = qtc.QHBoxLayout_SuperMaximumSize(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMaximumSize(self: QHBoxLayout, callback: *const fn () callconv(.c) QSize) void {
        qtc.QHBoxLayout_OnMaximumSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn HasHeightForWidth(self: QHBoxLayout) bool {
        return qtc.QHBoxLayout_HasHeightForWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperHasHeightForWidth` instead
    ///
    pub const QBaseHasHeightForWidth = SuperHasHeightForWidth;

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
    pub fn SuperHasHeightForWidth(self: QHBoxLayout) bool {
        return qtc.QHBoxLayout_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

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
    pub fn OnHasHeightForWidth(self: QHBoxLayout, callback: *const fn () callconv(.c) bool) void {
        qtc.QHBoxLayout_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn HeightForWidth(self: QHBoxLayout, param1: i32) i32 {
        return qtc.QHBoxLayout_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `SuperHeightForWidth` instead
    ///
    pub const QBaseHeightForWidth = SuperHeightForWidth;

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
    pub fn SuperHeightForWidth(self: QHBoxLayout, param1: i32) i32 {
        return qtc.QHBoxLayout_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

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
    pub fn OnHeightForWidth(self: QHBoxLayout, callback: *const fn (QHBoxLayout, i32) callconv(.c) i32) void {
        qtc.QHBoxLayout_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn MinimumHeightForWidth(self: QHBoxLayout, param1: i32) i32 {
        return qtc.QHBoxLayout_MinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `SuperMinimumHeightForWidth` instead
    ///
    pub const QBaseMinimumHeightForWidth = SuperMinimumHeightForWidth;

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
    pub fn SuperMinimumHeightForWidth(self: QHBoxLayout, param1: i32) i32 {
        return qtc.QHBoxLayout_SuperMinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

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
    pub fn OnMinimumHeightForWidth(self: QHBoxLayout, callback: *const fn (QHBoxLayout, i32) callconv(.c) i32) void {
        qtc.QHBoxLayout_OnMinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ExpandingDirections(self: QHBoxLayout) i32 {
        return qtc.QHBoxLayout_ExpandingDirections(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperExpandingDirections` instead
    ///
    pub const QBaseExpandingDirections = SuperExpandingDirections;

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
    pub fn SuperExpandingDirections(self: QHBoxLayout) i32 {
        return qtc.QHBoxLayout_SuperExpandingDirections(@ptrCast(self.ptr));
    }

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
    pub fn OnExpandingDirections(self: QHBoxLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QHBoxLayout_OnExpandingDirections(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Invalidate(self: QHBoxLayout) void {
        qtc.QHBoxLayout_Invalidate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperInvalidate` instead
    ///
    pub const QBaseInvalidate = SuperInvalidate;

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
    pub fn SuperInvalidate(self: QHBoxLayout) void {
        qtc.QHBoxLayout_SuperInvalidate(@ptrCast(self.ptr));
    }

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
    pub fn OnInvalidate(self: QHBoxLayout, callback: *const fn () callconv(.c) void) void {
        qtc.QHBoxLayout_OnInvalidate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ItemAt(self: QHBoxLayout, param1: i32) QLayoutItem {
        return .{ .ptr = qtc.QHBoxLayout_ItemAt(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `SuperItemAt` instead
    ///
    pub const QBaseItemAt = SuperItemAt;

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
    pub fn SuperItemAt(self: QHBoxLayout, param1: i32) QLayoutItem {
        return .{ .ptr = qtc.QHBoxLayout_SuperItemAt(@ptrCast(self.ptr), @bitCast(param1)) };
    }

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
    pub fn OnItemAt(self: QHBoxLayout, callback: *const fn (QHBoxLayout, i32) callconv(.c) QLayoutItem) void {
        qtc.QHBoxLayout_OnItemAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn TakeAt(self: QHBoxLayout, param1: i32) QLayoutItem {
        return .{ .ptr = qtc.QHBoxLayout_TakeAt(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `SuperTakeAt` instead
    ///
    pub const QBaseTakeAt = SuperTakeAt;

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
    pub fn SuperTakeAt(self: QHBoxLayout, param1: i32) QLayoutItem {
        return .{ .ptr = qtc.QHBoxLayout_SuperTakeAt(@ptrCast(self.ptr), @bitCast(param1)) };
    }

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
    pub fn OnTakeAt(self: QHBoxLayout, callback: *const fn (QHBoxLayout, i32) callconv(.c) QLayoutItem) void {
        qtc.QHBoxLayout_OnTakeAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Count(self: QHBoxLayout) i32 {
        return qtc.QHBoxLayout_Count(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperCount` instead
    ///
    pub const QBaseCount = SuperCount;

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
    pub fn SuperCount(self: QHBoxLayout) i32 {
        return qtc.QHBoxLayout_SuperCount(@ptrCast(self.ptr));
    }

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
    pub fn OnCount(self: QHBoxLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QHBoxLayout_OnCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry(self: QHBoxLayout, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QHBoxLayout_SetGeometry(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetGeometry` instead
    ///
    pub const QBaseSetGeometry = SuperSetGeometry;

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
    /// ` geometry: QRect `
    ///
    pub fn SuperSetGeometry(self: QHBoxLayout, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QHBoxLayout_SuperSetGeometry(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

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
    pub fn OnSetGeometry(self: QHBoxLayout, callback: *const fn (QHBoxLayout, QRect) callconv(.c) void) void {
        qtc.QHBoxLayout_OnSetGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Geometry(self: QHBoxLayout) QRect {
        return .{ .ptr = qtc.QHBoxLayout_Geometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperGeometry` instead
    ///
    pub const QBaseGeometry = SuperGeometry;

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
    pub fn SuperGeometry(self: QHBoxLayout) QRect {
        return .{ .ptr = qtc.QHBoxLayout_SuperGeometry(@ptrCast(self.ptr)) };
    }

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
    pub fn OnGeometry(self: QHBoxLayout, callback: *const fn () callconv(.c) QRect) void {
        qtc.QHBoxLayout_OnGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IndexOf(self: QHBoxLayout, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QHBoxLayout_IndexOf(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperIndexOf` instead
    ///
    pub const QBaseIndexOf = SuperIndexOf;

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
    pub fn SuperIndexOf(self: QHBoxLayout, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QHBoxLayout_SuperIndexOf(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnIndexOf(self: QHBoxLayout, callback: *const fn (QHBoxLayout, QWidget) callconv(.c) i32) void {
        qtc.QHBoxLayout_OnIndexOf(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsEmpty(self: QHBoxLayout) bool {
        return qtc.QHBoxLayout_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsEmpty` instead
    ///
    pub const QBaseIsEmpty = SuperIsEmpty;

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
    pub fn SuperIsEmpty(self: QHBoxLayout) bool {
        return qtc.QHBoxLayout_SuperIsEmpty(@ptrCast(self.ptr));
    }

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
    pub fn OnIsEmpty(self: QHBoxLayout, callback: *const fn () callconv(.c) bool) void {
        qtc.QHBoxLayout_OnIsEmpty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ControlTypes(self: QHBoxLayout) i32 {
        return qtc.QHBoxLayout_ControlTypes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperControlTypes` instead
    ///
    pub const QBaseControlTypes = SuperControlTypes;

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
    pub fn SuperControlTypes(self: QHBoxLayout) i32 {
        return qtc.QHBoxLayout_SuperControlTypes(@ptrCast(self.ptr));
    }

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
    pub fn OnControlTypes(self: QHBoxLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QHBoxLayout_OnControlTypes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ReplaceWidget(self: QHBoxLayout, from: anytype, to: anytype, options: i32) QLayoutItem {
        comptime _ = @TypeOf(from)._is_QWidget;
        comptime _ = @TypeOf(to)._is_QWidget;
        return .{ .ptr = qtc.QHBoxLayout_ReplaceWidget(@ptrCast(self.ptr), @ptrCast(from.ptr), @ptrCast(to.ptr), @bitCast(options)) };
    }

    /// ### DEPRECATED: Use `SuperReplaceWidget` instead
    ///
    pub const QBaseReplaceWidget = SuperReplaceWidget;

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
    pub fn SuperReplaceWidget(self: QHBoxLayout, from: anytype, to: anytype, options: i32) QLayoutItem {
        comptime _ = @TypeOf(from)._is_QWidget;
        comptime _ = @TypeOf(to)._is_QWidget;
        return .{ .ptr = qtc.QHBoxLayout_SuperReplaceWidget(@ptrCast(self.ptr), @ptrCast(from.ptr), @ptrCast(to.ptr), @bitCast(options)) };
    }

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
    pub fn OnReplaceWidget(self: QHBoxLayout, callback: *const fn (QHBoxLayout, QWidget, QWidget, i32) callconv(.c) QLayoutItem) void {
        qtc.QHBoxLayout_OnReplaceWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Layout(self: QHBoxLayout) QLayout {
        return .{ .ptr = qtc.QHBoxLayout_Layout(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperLayout` instead
    ///
    pub const QBaseLayout = SuperLayout;

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
    pub fn SuperLayout(self: QHBoxLayout) QLayout {
        return .{ .ptr = qtc.QHBoxLayout_SuperLayout(@ptrCast(self.ptr)) };
    }

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
    pub fn OnLayout(self: QHBoxLayout, callback: *const fn () callconv(.c) QLayout) void {
        qtc.QHBoxLayout_OnLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ChildEvent(self: QHBoxLayout, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QChildEvent;
        qtc.QHBoxLayout_ChildEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperChildEvent` instead
    ///
    pub const QBaseChildEvent = SuperChildEvent;

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
    pub fn SuperChildEvent(self: QHBoxLayout, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QChildEvent;
        qtc.QHBoxLayout_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

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
    pub fn OnChildEvent(self: QHBoxLayout, callback: *const fn (QHBoxLayout, QChildEvent) callconv(.c) void) void {
        qtc.QHBoxLayout_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn Event(self: QHBoxLayout, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QHBoxLayout_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

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
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QHBoxLayout, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QHBoxLayout_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEvent(self: QHBoxLayout, callback: *const fn (QHBoxLayout, QEvent) callconv(.c) bool) void {
        qtc.QHBoxLayout_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QHBoxLayout, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QHBoxLayout_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

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
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QHBoxLayout, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QHBoxLayout_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEventFilter(self: QHBoxLayout, callback: *const fn (QHBoxLayout, QObject, QEvent) callconv(.c) bool) void {
        qtc.QHBoxLayout_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QHBoxLayout, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QHBoxLayout_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

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
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QHBoxLayout, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QHBoxLayout_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnTimerEvent(self: QHBoxLayout, callback: *const fn (QHBoxLayout, QTimerEvent) callconv(.c) void) void {
        qtc.QHBoxLayout_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QHBoxLayout, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QHBoxLayout_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

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
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QHBoxLayout, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QHBoxLayout_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnCustomEvent(self: QHBoxLayout, callback: *const fn (QHBoxLayout, QEvent) callconv(.c) void) void {
        qtc.QHBoxLayout_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ConnectNotify(self: QHBoxLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QHBoxLayout_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperConnectNotify` instead
    ///
    pub const QBaseConnectNotify = SuperConnectNotify;

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
    pub fn SuperConnectNotify(self: QHBoxLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QHBoxLayout_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnConnectNotify(self: QHBoxLayout, callback: *const fn (QHBoxLayout, QMetaMethod) callconv(.c) void) void {
        qtc.QHBoxLayout_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DisconnectNotify(self: QHBoxLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QHBoxLayout_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperDisconnectNotify` instead
    ///
    pub const QBaseDisconnectNotify = SuperDisconnectNotify;

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
    pub fn SuperDisconnectNotify(self: QHBoxLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QHBoxLayout_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnDisconnectNotify(self: QHBoxLayout, callback: *const fn (QHBoxLayout, QMetaMethod) callconv(.c) void) void {
        qtc.QHBoxLayout_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Widget(self: QHBoxLayout) QWidget {
        return .{ .ptr = qtc.QHBoxLayout_Widget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperWidget` instead
    ///
    pub const QBaseWidget = SuperWidget;

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
    pub fn SuperWidget(self: QHBoxLayout) QWidget {
        return .{ .ptr = qtc.QHBoxLayout_SuperWidget(@ptrCast(self.ptr)) };
    }

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
    pub fn OnWidget(self: QHBoxLayout, callback: *const fn () callconv(.c) QWidget) void {
        qtc.QHBoxLayout_OnWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SpacerItem(self: QHBoxLayout) QSpacerItem {
        return .{ .ptr = qtc.QHBoxLayout_SpacerItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSpacerItem` instead
    ///
    pub const QBaseSpacerItem = SuperSpacerItem;

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
    pub fn SuperSpacerItem(self: QHBoxLayout) QSpacerItem {
        return .{ .ptr = qtc.QHBoxLayout_SuperSpacerItem(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSpacerItem(self: QHBoxLayout, callback: *const fn () callconv(.c) QSpacerItem) void {
        qtc.QHBoxLayout_OnSpacerItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn WidgetEvent(self: QHBoxLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.QHBoxLayout_WidgetEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperWidgetEvent` instead
    ///
    pub const QBaseWidgetEvent = SuperWidgetEvent;

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
    pub fn SuperWidgetEvent(self: QHBoxLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.QHBoxLayout_SuperWidgetEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnWidgetEvent(self: QHBoxLayout, callback: *const fn (QHBoxLayout, QEvent) callconv(.c) void) void {
        qtc.QHBoxLayout_OnWidgetEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn AddChildLayout(self: QHBoxLayout, l: anytype) void {
        comptime _ = @TypeOf(l)._is_QLayout;
        qtc.QHBoxLayout_AddChildLayout(@ptrCast(self.ptr), @ptrCast(l.ptr));
    }

    /// ### DEPRECATED: Use `SuperAddChildLayout` instead
    ///
    pub const QBaseAddChildLayout = SuperAddChildLayout;

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
    pub fn SuperAddChildLayout(self: QHBoxLayout, l: anytype) void {
        comptime _ = @TypeOf(l)._is_QLayout;
        qtc.QHBoxLayout_SuperAddChildLayout(@ptrCast(self.ptr), @ptrCast(l.ptr));
    }

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
    pub fn OnAddChildLayout(self: QHBoxLayout, callback: *const fn (QHBoxLayout, QLayout) callconv(.c) void) void {
        qtc.QHBoxLayout_OnAddChildLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn AddChildWidget(self: QHBoxLayout, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QHBoxLayout_AddChildWidget(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `SuperAddChildWidget` instead
    ///
    pub const QBaseAddChildWidget = SuperAddChildWidget;

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
    pub fn SuperAddChildWidget(self: QHBoxLayout, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QHBoxLayout_SuperAddChildWidget(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

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
    pub fn OnAddChildWidget(self: QHBoxLayout, callback: *const fn (QHBoxLayout, QWidget) callconv(.c) void) void {
        qtc.QHBoxLayout_OnAddChildWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` layout: QLayout `
    ///
    pub fn AdoptLayout(self: QHBoxLayout, layout: anytype) bool {
        comptime _ = @TypeOf(layout)._is_QLayout;
        return qtc.QHBoxLayout_AdoptLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// ### DEPRECATED: Use `SuperAdoptLayout` instead
    ///
    pub const QBaseAdoptLayout = SuperAdoptLayout;

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
    /// ` layout: QLayout `
    ///
    pub fn SuperAdoptLayout(self: QHBoxLayout, layout: anytype) bool {
        comptime _ = @TypeOf(layout)._is_QLayout;
        return qtc.QHBoxLayout_SuperAdoptLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

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
    pub fn OnAdoptLayout(self: QHBoxLayout, callback: *const fn (QHBoxLayout, QLayout) callconv(.c) bool) void {
        qtc.QHBoxLayout_OnAdoptLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn AlignmentRect(self: QHBoxLayout, param1: anytype) QRect {
        comptime _ = @TypeOf(param1)._is_QRect;
        return .{ .ptr = qtc.QHBoxLayout_AlignmentRect(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperAlignmentRect` instead
    ///
    pub const QBaseAlignmentRect = SuperAlignmentRect;

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
    pub fn SuperAlignmentRect(self: QHBoxLayout, param1: anytype) QRect {
        comptime _ = @TypeOf(param1)._is_QRect;
        return .{ .ptr = qtc.QHBoxLayout_SuperAlignmentRect(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

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
    pub fn OnAlignmentRect(self: QHBoxLayout, callback: *const fn (QHBoxLayout, QRect) callconv(.c) QRect) void {
        qtc.QHBoxLayout_OnAlignmentRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Sender(self: QHBoxLayout) QObject {
        return .{ .ptr = qtc.QHBoxLayout_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSender` instead
    ///
    pub const QBaseSender = SuperSender;

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
    pub fn SuperSender(self: QHBoxLayout) QObject {
        return .{ .ptr = qtc.QHBoxLayout_SuperSender(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSender(self: QHBoxLayout, callback: *const fn () callconv(.c) QObject) void {
        qtc.QHBoxLayout_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SenderSignalIndex(self: QHBoxLayout) i32 {
        return qtc.QHBoxLayout_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSenderSignalIndex` instead
    ///
    pub const QBaseSenderSignalIndex = SuperSenderSignalIndex;

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
    pub fn SuperSenderSignalIndex(self: QHBoxLayout) i32 {
        return qtc.QHBoxLayout_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

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
    pub fn OnSenderSignalIndex(self: QHBoxLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QHBoxLayout_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Receivers(self: QHBoxLayout, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QHBoxLayout_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `SuperReceivers` instead
    ///
    pub const QBaseReceivers = SuperReceivers;

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
    pub fn SuperReceivers(self: QHBoxLayout, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QHBoxLayout_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn OnReceivers(self: QHBoxLayout, callback: *const fn (QHBoxLayout, [*:0]const u8) callconv(.c) i32) void {
        qtc.QHBoxLayout_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsSignalConnected(self: QHBoxLayout, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QHBoxLayout_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsSignalConnected` instead
    ///
    pub const QBaseIsSignalConnected = SuperIsSignalConnected;

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
    pub fn SuperIsSignalConnected(self: QHBoxLayout, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QHBoxLayout_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnIsSignalConnected(self: QHBoxLayout, callback: *const fn (QHBoxLayout, QMetaMethod) callconv(.c) bool) void {
        qtc.QHBoxLayout_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnObjectNameChanged(self: QHBoxLayout, callback: *const fn (QHBoxLayout, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qhboxlayout.html#dtor.QHBoxLayout)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QHBoxLayout `
    ///
    pub fn Delete(self: QHBoxLayout) void {
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

    /// New constructs a new QVBoxLayout object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    pub fn New(parent: anytype) QVBoxLayout {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QVBoxLayout_new(@ptrCast(parent.ptr)) };
    }

    /// New2 constructs a new QVBoxLayout object.
    ///
    pub fn New2() QVBoxLayout {
        return .{ .ptr = qtc.QVBoxLayout_new2() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn MetaObject(self: QVBoxLayout) QMetaObject {
        return .{ .ptr = qtc.QVBoxLayout_MetaObject(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMetaObject(self: QVBoxLayout, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QVBoxLayout_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn SuperMetaObject(self: QVBoxLayout) QMetaObject {
        return .{ .ptr = qtc.QVBoxLayout_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QVBoxLayout, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QVBoxLayout_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` callback: *const fn (self: QVBoxLayout, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QVBoxLayout, callback: *const fn (QVBoxLayout, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QVBoxLayout_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QVBoxLayout, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QVBoxLayout_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: QVBoxLayout, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QVBoxLayout_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` callback: *const fn (self: QVBoxLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QVBoxLayout, callback: *const fn (QVBoxLayout, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QVBoxLayout_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

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
    pub fn SuperMetacall(self: QVBoxLayout, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QVBoxLayout_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn Tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvboxlayout.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn Tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvboxlayout.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn Tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvboxlayout.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn Direction(self: QVBoxLayout) i32 {
        return qtc.QBoxLayout_Direction(@ptrCast(self.ptr));
    }

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#setDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` direction: qboxlayout_enums.Direction `
    ///
    pub fn SetDirection(self: QVBoxLayout, direction: i32) void {
        qtc.QBoxLayout_SetDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

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
    pub fn AddSpacing(self: QVBoxLayout, size: i32) void {
        qtc.QBoxLayout_AddSpacing(@ptrCast(self.ptr), @bitCast(size));
    }

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn AddStretch(self: QVBoxLayout) void {
        qtc.QBoxLayout_AddStretch(@ptrCast(self.ptr));
    }

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addSpacerItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` spacerItem: QSpacerItem `
    ///
    pub fn AddSpacerItem(self: QVBoxLayout, spacerItem: anytype) void {
        comptime _ = @TypeOf(spacerItem)._is_QSpacerItem;
        qtc.QBoxLayout_AddSpacerItem(@ptrCast(self.ptr), @ptrCast(spacerItem.ptr));
    }

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
    pub fn AddWidget(self: QVBoxLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QBoxLayout_AddWidget(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` layout: QLayout `
    ///
    pub fn AddLayout(self: QVBoxLayout, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QBoxLayout_AddLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

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
    pub fn AddStrut(self: QVBoxLayout, param1: i32) void {
        qtc.QBoxLayout_AddStrut(@ptrCast(self.ptr), @bitCast(param1));
    }

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
    pub fn InsertSpacing(self: QVBoxLayout, index: i32, size: i32) void {
        qtc.QBoxLayout_InsertSpacing(@ptrCast(self.ptr), @bitCast(index), @bitCast(size));
    }

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
    pub fn InsertStretch(self: QVBoxLayout, index: i32) void {
        qtc.QBoxLayout_InsertStretch(@ptrCast(self.ptr), @bitCast(index));
    }

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
    /// ` spacerItem: QSpacerItem `
    ///
    pub fn InsertSpacerItem(self: QVBoxLayout, index: i32, spacerItem: anytype) void {
        comptime _ = @TypeOf(spacerItem)._is_QSpacerItem;
        qtc.QBoxLayout_InsertSpacerItem(@ptrCast(self.ptr), @bitCast(index), @ptrCast(spacerItem.ptr));
    }

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
    /// ` widget: QWidget `
    ///
    pub fn InsertWidget(self: QVBoxLayout, index: i32, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QBoxLayout_InsertWidget(@ptrCast(self.ptr), @bitCast(index), @ptrCast(widget.ptr));
    }

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
    /// ` layout: QLayout `
    ///
    pub fn InsertLayout(self: QVBoxLayout, index: i32, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QBoxLayout_InsertLayout(@ptrCast(self.ptr), @bitCast(index), @ptrCast(layout.ptr));
    }

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
    pub fn InsertItem(self: QVBoxLayout, index: i32, param2: anytype) void {
        comptime _ = @TypeOf(param2)._is_QLayoutItem;
        qtc.QBoxLayout_InsertItem(@ptrCast(self.ptr), @bitCast(index), @ptrCast(param2.ptr));
    }

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
    /// ` stretch: i32 `
    ///
    pub fn SetStretchFactor(self: QVBoxLayout, w: anytype, stretch: i32) bool {
        comptime _ = @TypeOf(w)._is_QWidget;
        return qtc.QBoxLayout_SetStretchFactor(@ptrCast(self.ptr), @ptrCast(w.ptr), @bitCast(stretch));
    }

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
    /// ` stretch: i32 `
    ///
    pub fn SetStretchFactor2(self: QVBoxLayout, l: anytype, stretch: i32) bool {
        comptime _ = @TypeOf(l)._is_QLayout;
        return qtc.QBoxLayout_SetStretchFactor2(@ptrCast(self.ptr), @ptrCast(l.ptr), @bitCast(stretch));
    }

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
    /// ` stretch: i32 `
    ///
    pub fn SetStretch(self: QVBoxLayout, index: i32, stretch: i32) void {
        qtc.QBoxLayout_SetStretch(@ptrCast(self.ptr), @bitCast(index), @bitCast(stretch));
    }

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
    pub fn Stretch(self: QVBoxLayout, index: i32) i32 {
        return qtc.QBoxLayout_Stretch(@ptrCast(self.ptr), @bitCast(index));
    }

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addStretch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` stretch: i32 `
    ///
    pub fn AddStretch1(self: QVBoxLayout, stretch: i32) void {
        qtc.QBoxLayout_AddStretch1(@ptrCast(self.ptr), @bitCast(stretch));
    }

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
    /// ` stretch: i32 `
    ///
    pub fn AddWidget2(self: QVBoxLayout, param1: anytype, stretch: i32) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QBoxLayout_AddWidget2(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(stretch));
    }

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
    /// ` stretch: i32 `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn AddWidget3(self: QVBoxLayout, param1: anytype, stretch: i32, alignment: i32) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QBoxLayout_AddWidget3(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(stretch), @bitCast(alignment));
    }

    /// Inherited from QBoxLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#addLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` layout: QLayout `
    ///
    /// ` stretch: i32 `
    ///
    pub fn AddLayout2(self: QVBoxLayout, layout: anytype, stretch: i32) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QBoxLayout_AddLayout2(@ptrCast(self.ptr), @ptrCast(layout.ptr), @bitCast(stretch));
    }

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
    /// ` stretch: i32 `
    ///
    pub fn InsertStretch2(self: QVBoxLayout, index: i32, stretch: i32) void {
        qtc.QBoxLayout_InsertStretch2(@ptrCast(self.ptr), @bitCast(index), @bitCast(stretch));
    }

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
    /// ` widget: QWidget `
    ///
    /// ` stretch: i32 `
    ///
    pub fn InsertWidget3(self: QVBoxLayout, index: i32, widget: anytype, stretch: i32) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QBoxLayout_InsertWidget3(@ptrCast(self.ptr), @bitCast(index), @ptrCast(widget.ptr), @bitCast(stretch));
    }

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
    /// ` widget: QWidget `
    ///
    /// ` stretch: i32 `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn InsertWidget4(self: QVBoxLayout, index: i32, widget: anytype, stretch: i32, alignment: i32) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QBoxLayout_InsertWidget4(@ptrCast(self.ptr), @bitCast(index), @ptrCast(widget.ptr), @bitCast(stretch), @bitCast(alignment));
    }

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
    /// ` layout: QLayout `
    ///
    /// ` stretch: i32 `
    ///
    pub fn InsertLayout3(self: QVBoxLayout, index: i32, layout: anytype, stretch: i32) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QBoxLayout_InsertLayout3(@ptrCast(self.ptr), @bitCast(index), @ptrCast(layout.ptr), @bitCast(stretch));
    }

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
    pub fn SetContentsMargins(self: QVBoxLayout, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QLayout_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

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
    pub fn SetContentsMargins2(self: QVBoxLayout, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QLayout_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#unsetContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn UnsetContentsMargins(self: QVBoxLayout) void {
        qtc.QLayout_UnsetContentsMargins(@ptrCast(self.ptr));
    }

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
    pub fn GetContentsMargins(self: QVBoxLayout, left: *i32, top: *i32, right: *i32, bottom: *i32) void {
        qtc.QLayout_GetContentsMargins(@ptrCast(self.ptr), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn ContentsMargins(self: QVBoxLayout) QMargins {
        return .{ .ptr = qtc.QLayout_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn ContentsRect(self: QVBoxLayout) QRect {
        return .{ .ptr = qtc.QLayout_ContentsRect(@ptrCast(self.ptr)) };
    }

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
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetAlignment(self: QVBoxLayout, w: anytype, alignment: i32) bool {
        comptime _ = @TypeOf(w)._is_QWidget;
        return qtc.QLayout_SetAlignment(@ptrCast(self.ptr), @ptrCast(w.ptr), @bitCast(alignment));
    }

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
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetAlignment2(self: QVBoxLayout, l: anytype, alignment: i32) bool {
        comptime _ = @TypeOf(l)._is_QLayout;
        return qtc.QLayout_SetAlignment2(@ptrCast(self.ptr), @ptrCast(l.ptr), @bitCast(alignment));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#setSizeConstraint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` sizeConstraint: qlayout_enums.SizeConstraint `
    ///
    pub fn SetSizeConstraint(self: QVBoxLayout, sizeConstraint: i32) void {
        qtc.QLayout_SetSizeConstraint(@ptrCast(self.ptr), @bitCast(sizeConstraint));
    }

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
    pub fn SizeConstraint(self: QVBoxLayout) i32 {
        return qtc.QLayout_SizeConstraint(@ptrCast(self.ptr));
    }

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
    pub fn SetMenuBar(self: QVBoxLayout, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QLayout_SetMenuBar(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#menuBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn MenuBar(self: QVBoxLayout) QWidget {
        return .{ .ptr = qtc.QLayout_MenuBar(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#parentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn ParentWidget(self: QVBoxLayout) QWidget {
        return .{ .ptr = qtc.QLayout_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#activate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn Activate(self: QVBoxLayout) bool {
        return qtc.QLayout_Activate(@ptrCast(self.ptr));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn Update(self: QVBoxLayout) void {
        qtc.QLayout_Update(@ptrCast(self.ptr));
    }

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
    pub fn RemoveWidget(self: QVBoxLayout, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QLayout_RemoveWidget(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

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
    pub fn RemoveItem(self: QVBoxLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QLayoutItem;
        qtc.QLayout_RemoveItem(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn IndexOf2(self: QVBoxLayout, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QLayoutItem;
        return qtc.QLayout_IndexOf2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnIndexOf2(self: QVBoxLayout, callback: *const fn (QVBoxLayout, QLayoutItem) callconv(.c) i32) void {
        qtc.QLayout_OnIndexOf2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIndexOf2` instead
    ///
    pub const QBaseIndexOf2 = SuperIndexOf2;

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
    pub fn SuperIndexOf2(self: QVBoxLayout, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QLayoutItem;
        return qtc.QLayout_SuperIndexOf2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn TotalMinimumHeightForWidth(self: QVBoxLayout, w: i32) i32 {
        return qtc.QLayout_TotalMinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(w));
    }

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
    pub fn TotalHeightForWidth(self: QVBoxLayout, w: i32) i32 {
        return qtc.QLayout_TotalHeightForWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn TotalMinimumSize(self: QVBoxLayout) QSize {
        return .{ .ptr = qtc.QLayout_TotalMinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn TotalMaximumSize(self: QVBoxLayout) QSize {
        return .{ .ptr = qtc.QLayout_TotalMaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#totalSizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn TotalSizeHint(self: QVBoxLayout) QSize {
        return .{ .ptr = qtc.QLayout_TotalSizeHint(@ptrCast(self.ptr)) };
    }

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
    pub fn SetEnabled(self: QVBoxLayout, enabled: bool) void {
        qtc.QLayout_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlayout.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn IsEnabled(self: QVBoxLayout) bool {
        return qtc.QLayout_IsEnabled(@ptrCast(self.ptr));
    }

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
    pub fn ClosestAcceptableSize(w: anytype, s: anytype) QSize {
        comptime _ = @TypeOf(w)._is_QWidget;
        comptime _ = @TypeOf(s)._is_QSize;
        return .{ .ptr = qtc.QLayout_ClosestAcceptableSize(@ptrCast(w.ptr), @ptrCast(s.ptr)) };
    }

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
    pub fn ObjectName(self: QVBoxLayout, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvboxlayout.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetObjectName(self: QVBoxLayout, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn IsWidgetType(self: QVBoxLayout) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn IsWindowType(self: QVBoxLayout) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn IsQuickItemType(self: QVBoxLayout) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn SignalsBlocked(self: QVBoxLayout) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: QVBoxLayout, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn Thread(self: QVBoxLayout) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QVBoxLayout, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: QVBoxLayout, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: QVBoxLayout, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

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
    pub fn KillTimer(self: QVBoxLayout, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn KillTimer2(self: QVBoxLayout, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: QVBoxLayout, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qvboxlayout.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QVBoxLayout, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

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
    pub fn InstallEventFilter(self: QVBoxLayout, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: QVBoxLayout, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn Connect2(sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QVBoxLayout, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn Disconnect2(sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn Disconnect3(self: QVBoxLayout) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: QVBoxLayout, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn DumpObjectTree(self: QVBoxLayout) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn DumpObjectInfo(self: QVBoxLayout) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

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
    pub fn SetProperty(self: QVBoxLayout, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

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
    pub fn Property(self: QVBoxLayout, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: QVBoxLayout, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qvboxlayout.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qvboxlayout.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn BindingStorage(self: QVBoxLayout) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn BindingStorage2(self: QVBoxLayout) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn Destroyed(self: QVBoxLayout) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: QVBoxLayout, callback: *const fn (QVBoxLayout) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn Parent(self: QVBoxLayout) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: QVBoxLayout, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn DeleteLater(self: QVBoxLayout) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: QVBoxLayout, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: QVBoxLayout, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QVBoxLayout `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QVBoxLayout, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

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
    pub fn Disconnect1(self: QVBoxLayout, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: QVBoxLayout, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

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
    pub fn Disconnect32(self: QVBoxLayout, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

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
    pub fn Disconnect23(self: QVBoxLayout, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

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
    pub fn Destroyed1(self: QVBoxLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: QVBoxLayout, callback: *const fn (QVBoxLayout, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Alignment(self: QVBoxLayout) i32 {
        return qtc.QLayoutItem_Alignment(@ptrCast(self.ptr));
    }

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
    pub fn AddItem(self: QVBoxLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QLayoutItem;
        qtc.QVBoxLayout_AddItem(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperAddItem` instead
    ///
    pub const QBaseAddItem = SuperAddItem;

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
    pub fn SuperAddItem(self: QVBoxLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QLayoutItem;
        qtc.QVBoxLayout_SuperAddItem(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnAddItem(self: QVBoxLayout, callback: *const fn (QVBoxLayout, QLayoutItem) callconv(.c) void) void {
        qtc.QVBoxLayout_OnAddItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Spacing(self: QVBoxLayout) i32 {
        return qtc.QVBoxLayout_Spacing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSpacing` instead
    ///
    pub const QBaseSpacing = SuperSpacing;

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
    pub fn SuperSpacing(self: QVBoxLayout) i32 {
        return qtc.QVBoxLayout_SuperSpacing(@ptrCast(self.ptr));
    }

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
    pub fn OnSpacing(self: QVBoxLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QVBoxLayout_OnSpacing(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` spacing: i32 `
    ///
    pub fn SetSpacing(self: QVBoxLayout, spacing: i32) void {
        qtc.QVBoxLayout_SetSpacing(@ptrCast(self.ptr), @bitCast(spacing));
    }

    /// ### DEPRECATED: Use `SuperSetSpacing` instead
    ///
    pub const QBaseSetSpacing = SuperSetSpacing;

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
    /// ` spacing: i32 `
    ///
    pub fn SuperSetSpacing(self: QVBoxLayout, spacing: i32) void {
        qtc.QVBoxLayout_SuperSetSpacing(@ptrCast(self.ptr), @bitCast(spacing));
    }

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
    pub fn OnSetSpacing(self: QVBoxLayout, callback: *const fn (QVBoxLayout, i32) callconv(.c) void) void {
        qtc.QVBoxLayout_OnSetSpacing(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SizeHint(self: QVBoxLayout) QSize {
        return .{ .ptr = qtc.QVBoxLayout_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSizeHint` instead
    ///
    pub const QBaseSizeHint = SuperSizeHint;

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
    pub fn SuperSizeHint(self: QVBoxLayout) QSize {
        return .{ .ptr = qtc.QVBoxLayout_SuperSizeHint(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSizeHint(self: QVBoxLayout, callback: *const fn () callconv(.c) QSize) void {
        qtc.QVBoxLayout_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn MinimumSize(self: QVBoxLayout) QSize {
        return .{ .ptr = qtc.QVBoxLayout_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperMinimumSize` instead
    ///
    pub const QBaseMinimumSize = SuperMinimumSize;

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
    pub fn SuperMinimumSize(self: QVBoxLayout) QSize {
        return .{ .ptr = qtc.QVBoxLayout_SuperMinimumSize(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMinimumSize(self: QVBoxLayout, callback: *const fn () callconv(.c) QSize) void {
        qtc.QVBoxLayout_OnMinimumSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn MaximumSize(self: QVBoxLayout) QSize {
        return .{ .ptr = qtc.QVBoxLayout_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperMaximumSize` instead
    ///
    pub const QBaseMaximumSize = SuperMaximumSize;

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
    pub fn SuperMaximumSize(self: QVBoxLayout) QSize {
        return .{ .ptr = qtc.QVBoxLayout_SuperMaximumSize(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMaximumSize(self: QVBoxLayout, callback: *const fn () callconv(.c) QSize) void {
        qtc.QVBoxLayout_OnMaximumSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn HasHeightForWidth(self: QVBoxLayout) bool {
        return qtc.QVBoxLayout_HasHeightForWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperHasHeightForWidth` instead
    ///
    pub const QBaseHasHeightForWidth = SuperHasHeightForWidth;

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
    pub fn SuperHasHeightForWidth(self: QVBoxLayout) bool {
        return qtc.QVBoxLayout_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

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
    pub fn OnHasHeightForWidth(self: QVBoxLayout, callback: *const fn () callconv(.c) bool) void {
        qtc.QVBoxLayout_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn HeightForWidth(self: QVBoxLayout, param1: i32) i32 {
        return qtc.QVBoxLayout_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `SuperHeightForWidth` instead
    ///
    pub const QBaseHeightForWidth = SuperHeightForWidth;

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
    pub fn SuperHeightForWidth(self: QVBoxLayout, param1: i32) i32 {
        return qtc.QVBoxLayout_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

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
    pub fn OnHeightForWidth(self: QVBoxLayout, callback: *const fn (QVBoxLayout, i32) callconv(.c) i32) void {
        qtc.QVBoxLayout_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn MinimumHeightForWidth(self: QVBoxLayout, param1: i32) i32 {
        return qtc.QVBoxLayout_MinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `SuperMinimumHeightForWidth` instead
    ///
    pub const QBaseMinimumHeightForWidth = SuperMinimumHeightForWidth;

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
    pub fn SuperMinimumHeightForWidth(self: QVBoxLayout, param1: i32) i32 {
        return qtc.QVBoxLayout_SuperMinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

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
    pub fn OnMinimumHeightForWidth(self: QVBoxLayout, callback: *const fn (QVBoxLayout, i32) callconv(.c) i32) void {
        qtc.QVBoxLayout_OnMinimumHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ExpandingDirections(self: QVBoxLayout) i32 {
        return qtc.QVBoxLayout_ExpandingDirections(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperExpandingDirections` instead
    ///
    pub const QBaseExpandingDirections = SuperExpandingDirections;

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
    pub fn SuperExpandingDirections(self: QVBoxLayout) i32 {
        return qtc.QVBoxLayout_SuperExpandingDirections(@ptrCast(self.ptr));
    }

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
    pub fn OnExpandingDirections(self: QVBoxLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QVBoxLayout_OnExpandingDirections(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Invalidate(self: QVBoxLayout) void {
        qtc.QVBoxLayout_Invalidate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperInvalidate` instead
    ///
    pub const QBaseInvalidate = SuperInvalidate;

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
    pub fn SuperInvalidate(self: QVBoxLayout) void {
        qtc.QVBoxLayout_SuperInvalidate(@ptrCast(self.ptr));
    }

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
    pub fn OnInvalidate(self: QVBoxLayout, callback: *const fn () callconv(.c) void) void {
        qtc.QVBoxLayout_OnInvalidate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ItemAt(self: QVBoxLayout, param1: i32) QLayoutItem {
        return .{ .ptr = qtc.QVBoxLayout_ItemAt(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `SuperItemAt` instead
    ///
    pub const QBaseItemAt = SuperItemAt;

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
    pub fn SuperItemAt(self: QVBoxLayout, param1: i32) QLayoutItem {
        return .{ .ptr = qtc.QVBoxLayout_SuperItemAt(@ptrCast(self.ptr), @bitCast(param1)) };
    }

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
    pub fn OnItemAt(self: QVBoxLayout, callback: *const fn (QVBoxLayout, i32) callconv(.c) QLayoutItem) void {
        qtc.QVBoxLayout_OnItemAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn TakeAt(self: QVBoxLayout, param1: i32) QLayoutItem {
        return .{ .ptr = qtc.QVBoxLayout_TakeAt(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `SuperTakeAt` instead
    ///
    pub const QBaseTakeAt = SuperTakeAt;

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
    pub fn SuperTakeAt(self: QVBoxLayout, param1: i32) QLayoutItem {
        return .{ .ptr = qtc.QVBoxLayout_SuperTakeAt(@ptrCast(self.ptr), @bitCast(param1)) };
    }

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
    pub fn OnTakeAt(self: QVBoxLayout, callback: *const fn (QVBoxLayout, i32) callconv(.c) QLayoutItem) void {
        qtc.QVBoxLayout_OnTakeAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Count(self: QVBoxLayout) i32 {
        return qtc.QVBoxLayout_Count(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperCount` instead
    ///
    pub const QBaseCount = SuperCount;

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
    pub fn SuperCount(self: QVBoxLayout) i32 {
        return qtc.QVBoxLayout_SuperCount(@ptrCast(self.ptr));
    }

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
    pub fn OnCount(self: QVBoxLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QVBoxLayout_OnCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry(self: QVBoxLayout, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QVBoxLayout_SetGeometry(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetGeometry` instead
    ///
    pub const QBaseSetGeometry = SuperSetGeometry;

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
    /// ` geometry: QRect `
    ///
    pub fn SuperSetGeometry(self: QVBoxLayout, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QVBoxLayout_SuperSetGeometry(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

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
    pub fn OnSetGeometry(self: QVBoxLayout, callback: *const fn (QVBoxLayout, QRect) callconv(.c) void) void {
        qtc.QVBoxLayout_OnSetGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Geometry(self: QVBoxLayout) QRect {
        return .{ .ptr = qtc.QVBoxLayout_Geometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperGeometry` instead
    ///
    pub const QBaseGeometry = SuperGeometry;

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
    pub fn SuperGeometry(self: QVBoxLayout) QRect {
        return .{ .ptr = qtc.QVBoxLayout_SuperGeometry(@ptrCast(self.ptr)) };
    }

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
    pub fn OnGeometry(self: QVBoxLayout, callback: *const fn () callconv(.c) QRect) void {
        qtc.QVBoxLayout_OnGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IndexOf(self: QVBoxLayout, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QVBoxLayout_IndexOf(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperIndexOf` instead
    ///
    pub const QBaseIndexOf = SuperIndexOf;

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
    pub fn SuperIndexOf(self: QVBoxLayout, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QVBoxLayout_SuperIndexOf(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnIndexOf(self: QVBoxLayout, callback: *const fn (QVBoxLayout, QWidget) callconv(.c) i32) void {
        qtc.QVBoxLayout_OnIndexOf(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsEmpty(self: QVBoxLayout) bool {
        return qtc.QVBoxLayout_IsEmpty(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsEmpty` instead
    ///
    pub const QBaseIsEmpty = SuperIsEmpty;

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
    pub fn SuperIsEmpty(self: QVBoxLayout) bool {
        return qtc.QVBoxLayout_SuperIsEmpty(@ptrCast(self.ptr));
    }

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
    pub fn OnIsEmpty(self: QVBoxLayout, callback: *const fn () callconv(.c) bool) void {
        qtc.QVBoxLayout_OnIsEmpty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ControlTypes(self: QVBoxLayout) i32 {
        return qtc.QVBoxLayout_ControlTypes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperControlTypes` instead
    ///
    pub const QBaseControlTypes = SuperControlTypes;

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
    pub fn SuperControlTypes(self: QVBoxLayout) i32 {
        return qtc.QVBoxLayout_SuperControlTypes(@ptrCast(self.ptr));
    }

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
    pub fn OnControlTypes(self: QVBoxLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QVBoxLayout_OnControlTypes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ReplaceWidget(self: QVBoxLayout, from: anytype, to: anytype, options: i32) QLayoutItem {
        comptime _ = @TypeOf(from)._is_QWidget;
        comptime _ = @TypeOf(to)._is_QWidget;
        return .{ .ptr = qtc.QVBoxLayout_ReplaceWidget(@ptrCast(self.ptr), @ptrCast(from.ptr), @ptrCast(to.ptr), @bitCast(options)) };
    }

    /// ### DEPRECATED: Use `SuperReplaceWidget` instead
    ///
    pub const QBaseReplaceWidget = SuperReplaceWidget;

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
    pub fn SuperReplaceWidget(self: QVBoxLayout, from: anytype, to: anytype, options: i32) QLayoutItem {
        comptime _ = @TypeOf(from)._is_QWidget;
        comptime _ = @TypeOf(to)._is_QWidget;
        return .{ .ptr = qtc.QVBoxLayout_SuperReplaceWidget(@ptrCast(self.ptr), @ptrCast(from.ptr), @ptrCast(to.ptr), @bitCast(options)) };
    }

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
    pub fn OnReplaceWidget(self: QVBoxLayout, callback: *const fn (QVBoxLayout, QWidget, QWidget, i32) callconv(.c) QLayoutItem) void {
        qtc.QVBoxLayout_OnReplaceWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Layout(self: QVBoxLayout) QLayout {
        return .{ .ptr = qtc.QVBoxLayout_Layout(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperLayout` instead
    ///
    pub const QBaseLayout = SuperLayout;

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
    pub fn SuperLayout(self: QVBoxLayout) QLayout {
        return .{ .ptr = qtc.QVBoxLayout_SuperLayout(@ptrCast(self.ptr)) };
    }

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
    pub fn OnLayout(self: QVBoxLayout, callback: *const fn () callconv(.c) QLayout) void {
        qtc.QVBoxLayout_OnLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ChildEvent(self: QVBoxLayout, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QChildEvent;
        qtc.QVBoxLayout_ChildEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperChildEvent` instead
    ///
    pub const QBaseChildEvent = SuperChildEvent;

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
    pub fn SuperChildEvent(self: QVBoxLayout, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QChildEvent;
        qtc.QVBoxLayout_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

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
    pub fn OnChildEvent(self: QVBoxLayout, callback: *const fn (QVBoxLayout, QChildEvent) callconv(.c) void) void {
        qtc.QVBoxLayout_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn Event(self: QVBoxLayout, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QVBoxLayout_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

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
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QVBoxLayout, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QVBoxLayout_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEvent(self: QVBoxLayout, callback: *const fn (QVBoxLayout, QEvent) callconv(.c) bool) void {
        qtc.QVBoxLayout_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QVBoxLayout, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QVBoxLayout_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

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
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QVBoxLayout, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QVBoxLayout_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEventFilter(self: QVBoxLayout, callback: *const fn (QVBoxLayout, QObject, QEvent) callconv(.c) bool) void {
        qtc.QVBoxLayout_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QVBoxLayout, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QVBoxLayout_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

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
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QVBoxLayout, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QVBoxLayout_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnTimerEvent(self: QVBoxLayout, callback: *const fn (QVBoxLayout, QTimerEvent) callconv(.c) void) void {
        qtc.QVBoxLayout_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QVBoxLayout, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QVBoxLayout_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

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
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QVBoxLayout, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QVBoxLayout_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnCustomEvent(self: QVBoxLayout, callback: *const fn (QVBoxLayout, QEvent) callconv(.c) void) void {
        qtc.QVBoxLayout_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ConnectNotify(self: QVBoxLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVBoxLayout_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperConnectNotify` instead
    ///
    pub const QBaseConnectNotify = SuperConnectNotify;

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
    pub fn SuperConnectNotify(self: QVBoxLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVBoxLayout_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnConnectNotify(self: QVBoxLayout, callback: *const fn (QVBoxLayout, QMetaMethod) callconv(.c) void) void {
        qtc.QVBoxLayout_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DisconnectNotify(self: QVBoxLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVBoxLayout_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperDisconnectNotify` instead
    ///
    pub const QBaseDisconnectNotify = SuperDisconnectNotify;

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
    pub fn SuperDisconnectNotify(self: QVBoxLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QVBoxLayout_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnDisconnectNotify(self: QVBoxLayout, callback: *const fn (QVBoxLayout, QMetaMethod) callconv(.c) void) void {
        qtc.QVBoxLayout_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Widget(self: QVBoxLayout) QWidget {
        return .{ .ptr = qtc.QVBoxLayout_Widget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperWidget` instead
    ///
    pub const QBaseWidget = SuperWidget;

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
    pub fn SuperWidget(self: QVBoxLayout) QWidget {
        return .{ .ptr = qtc.QVBoxLayout_SuperWidget(@ptrCast(self.ptr)) };
    }

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
    pub fn OnWidget(self: QVBoxLayout, callback: *const fn () callconv(.c) QWidget) void {
        qtc.QVBoxLayout_OnWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SpacerItem(self: QVBoxLayout) QSpacerItem {
        return .{ .ptr = qtc.QVBoxLayout_SpacerItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSpacerItem` instead
    ///
    pub const QBaseSpacerItem = SuperSpacerItem;

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
    pub fn SuperSpacerItem(self: QVBoxLayout) QSpacerItem {
        return .{ .ptr = qtc.QVBoxLayout_SuperSpacerItem(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSpacerItem(self: QVBoxLayout, callback: *const fn () callconv(.c) QSpacerItem) void {
        qtc.QVBoxLayout_OnSpacerItem(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn WidgetEvent(self: QVBoxLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.QVBoxLayout_WidgetEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperWidgetEvent` instead
    ///
    pub const QBaseWidgetEvent = SuperWidgetEvent;

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
    pub fn SuperWidgetEvent(self: QVBoxLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.QVBoxLayout_SuperWidgetEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnWidgetEvent(self: QVBoxLayout, callback: *const fn (QVBoxLayout, QEvent) callconv(.c) void) void {
        qtc.QVBoxLayout_OnWidgetEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn AddChildLayout(self: QVBoxLayout, l: anytype) void {
        comptime _ = @TypeOf(l)._is_QLayout;
        qtc.QVBoxLayout_AddChildLayout(@ptrCast(self.ptr), @ptrCast(l.ptr));
    }

    /// ### DEPRECATED: Use `SuperAddChildLayout` instead
    ///
    pub const QBaseAddChildLayout = SuperAddChildLayout;

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
    pub fn SuperAddChildLayout(self: QVBoxLayout, l: anytype) void {
        comptime _ = @TypeOf(l)._is_QLayout;
        qtc.QVBoxLayout_SuperAddChildLayout(@ptrCast(self.ptr), @ptrCast(l.ptr));
    }

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
    pub fn OnAddChildLayout(self: QVBoxLayout, callback: *const fn (QVBoxLayout, QLayout) callconv(.c) void) void {
        qtc.QVBoxLayout_OnAddChildLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn AddChildWidget(self: QVBoxLayout, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QVBoxLayout_AddChildWidget(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

    /// ### DEPRECATED: Use `SuperAddChildWidget` instead
    ///
    pub const QBaseAddChildWidget = SuperAddChildWidget;

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
    pub fn SuperAddChildWidget(self: QVBoxLayout, w: anytype) void {
        comptime _ = @TypeOf(w)._is_QWidget;
        qtc.QVBoxLayout_SuperAddChildWidget(@ptrCast(self.ptr), @ptrCast(w.ptr));
    }

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
    pub fn OnAddChildWidget(self: QVBoxLayout, callback: *const fn (QVBoxLayout, QWidget) callconv(.c) void) void {
        qtc.QVBoxLayout_OnAddChildWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` layout: QLayout `
    ///
    pub fn AdoptLayout(self: QVBoxLayout, layout: anytype) bool {
        comptime _ = @TypeOf(layout)._is_QLayout;
        return qtc.QVBoxLayout_AdoptLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// ### DEPRECATED: Use `SuperAdoptLayout` instead
    ///
    pub const QBaseAdoptLayout = SuperAdoptLayout;

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
    /// ` layout: QLayout `
    ///
    pub fn SuperAdoptLayout(self: QVBoxLayout, layout: anytype) bool {
        comptime _ = @TypeOf(layout)._is_QLayout;
        return qtc.QVBoxLayout_SuperAdoptLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

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
    pub fn OnAdoptLayout(self: QVBoxLayout, callback: *const fn (QVBoxLayout, QLayout) callconv(.c) bool) void {
        qtc.QVBoxLayout_OnAdoptLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn AlignmentRect(self: QVBoxLayout, param1: anytype) QRect {
        comptime _ = @TypeOf(param1)._is_QRect;
        return .{ .ptr = qtc.QVBoxLayout_AlignmentRect(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperAlignmentRect` instead
    ///
    pub const QBaseAlignmentRect = SuperAlignmentRect;

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
    pub fn SuperAlignmentRect(self: QVBoxLayout, param1: anytype) QRect {
        comptime _ = @TypeOf(param1)._is_QRect;
        return .{ .ptr = qtc.QVBoxLayout_SuperAlignmentRect(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

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
    pub fn OnAlignmentRect(self: QVBoxLayout, callback: *const fn (QVBoxLayout, QRect) callconv(.c) QRect) void {
        qtc.QVBoxLayout_OnAlignmentRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Sender(self: QVBoxLayout) QObject {
        return .{ .ptr = qtc.QVBoxLayout_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSender` instead
    ///
    pub const QBaseSender = SuperSender;

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
    pub fn SuperSender(self: QVBoxLayout) QObject {
        return .{ .ptr = qtc.QVBoxLayout_SuperSender(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSender(self: QVBoxLayout, callback: *const fn () callconv(.c) QObject) void {
        qtc.QVBoxLayout_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SenderSignalIndex(self: QVBoxLayout) i32 {
        return qtc.QVBoxLayout_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSenderSignalIndex` instead
    ///
    pub const QBaseSenderSignalIndex = SuperSenderSignalIndex;

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
    pub fn SuperSenderSignalIndex(self: QVBoxLayout) i32 {
        return qtc.QVBoxLayout_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

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
    pub fn OnSenderSignalIndex(self: QVBoxLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QVBoxLayout_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Receivers(self: QVBoxLayout, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QVBoxLayout_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `SuperReceivers` instead
    ///
    pub const QBaseReceivers = SuperReceivers;

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
    pub fn SuperReceivers(self: QVBoxLayout, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QVBoxLayout_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn OnReceivers(self: QVBoxLayout, callback: *const fn (QVBoxLayout, [*:0]const u8) callconv(.c) i32) void {
        qtc.QVBoxLayout_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsSignalConnected(self: QVBoxLayout, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QVBoxLayout_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsSignalConnected` instead
    ///
    pub const QBaseIsSignalConnected = SuperIsSignalConnected;

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
    pub fn SuperIsSignalConnected(self: QVBoxLayout, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QVBoxLayout_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnIsSignalConnected(self: QVBoxLayout, callback: *const fn (QVBoxLayout, QMetaMethod) callconv(.c) bool) void {
        qtc.QVBoxLayout_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnObjectNameChanged(self: QVBoxLayout, callback: *const fn (QVBoxLayout, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qvboxlayout.html#dtor.QVBoxLayout)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QVBoxLayout `
    ///
    pub fn Delete(self: QVBoxLayout) void {
        qtc.QVBoxLayout_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qboxlayout.html#public-types)
pub const enums = struct {
    pub const Direction = enum(i32) {
        pub const LeftToRight: i32 = 0;
        pub const RightToLeft: i32 = 1;
        pub const TopToBottom: i32 = 2;
        pub const BottomToTop: i32 = 3;
        pub const Down: i32 = 2;
        pub const Up: i32 = 3;
    };
};
