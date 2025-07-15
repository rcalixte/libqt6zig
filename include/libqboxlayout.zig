const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qboxlayout_enums = enums;
const qlayout_enums = @import("libqlayout.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qboxlayout.html
pub const qboxlayout = struct {
    /// New constructs a new QBoxLayout object.
    ///
    /// ``` param1: qboxlayout_enums.Direction ```
    pub fn New(param1: i64) QtC.QBoxLayout {
        return qtc.QBoxLayout_new(@intCast(param1));
    }

    /// New2 constructs a new QBoxLayout object.
    ///
    /// ``` param1: qboxlayout_enums.Direction, parent: QtC.QWidget ```
    pub fn New2(param1: i64, parent: ?*anyopaque) QtC.QBoxLayout {
        return qtc.QBoxLayout_new2(@intCast(param1), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QBoxLayout_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QBoxLayout, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QBoxLayout_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QBoxLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QBoxLayout_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QBoxLayout, slot: fn (self: QtC.QBoxLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QBoxLayout_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QBoxLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QBoxLayout_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QBoxLayout_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qboxlayout.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#direction)
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn Direction(self: ?*anyopaque) i64 {
        return qtc.QBoxLayout_Direction(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setDirection)
    ///
    /// ``` self: QtC.QBoxLayout, direction: qboxlayout_enums.Direction ```
    pub fn SetDirection(self: ?*anyopaque, direction: i64) void {
        qtc.QBoxLayout_SetDirection(@ptrCast(self), @intCast(direction));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addSpacing)
    ///
    /// ``` self: QtC.QBoxLayout, size: i32 ```
    pub fn AddSpacing(self: ?*anyopaque, size: i32) void {
        qtc.QBoxLayout_AddSpacing(@ptrCast(self), @intCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addStretch)
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn AddStretch(self: ?*anyopaque) void {
        qtc.QBoxLayout_AddStretch(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addSpacerItem)
    ///
    /// ``` self: QtC.QBoxLayout, spacerItem: QtC.QSpacerItem ```
    pub fn AddSpacerItem(self: ?*anyopaque, spacerItem: ?*anyopaque) void {
        qtc.QBoxLayout_AddSpacerItem(@ptrCast(self), @ptrCast(spacerItem));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addWidget)
    ///
    /// ``` self: QtC.QBoxLayout, param1: QtC.QWidget ```
    pub fn AddWidget(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QBoxLayout_AddWidget(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addLayout)
    ///
    /// ``` self: QtC.QBoxLayout, layout: QtC.QLayout ```
    pub fn AddLayout(self: ?*anyopaque, layout: ?*anyopaque) void {
        qtc.QBoxLayout_AddLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addStrut)
    ///
    /// ``` self: QtC.QBoxLayout, param1: i32 ```
    pub fn AddStrut(self: ?*anyopaque, param1: i32) void {
        qtc.QBoxLayout_AddStrut(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addItem)
    ///
    /// ``` self: QtC.QBoxLayout, param1: QtC.QLayoutItem ```
    pub fn AddItem(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QBoxLayout_AddItem(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addItem)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QBoxLayout, slot: fn (self: QtC.QBoxLayout, param1: QtC.QLayoutItem) callconv(.c) void ```
    pub fn OnAddItem(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QBoxLayout_OnAddItem(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addItem)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QBoxLayout, param1: QtC.QLayoutItem ```
    pub fn QBaseAddItem(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QBoxLayout_QBaseAddItem(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertSpacing)
    ///
    /// ``` self: QtC.QBoxLayout, index: i32, size: i32 ```
    pub fn InsertSpacing(self: ?*anyopaque, index: i32, size: i32) void {
        qtc.QBoxLayout_InsertSpacing(@ptrCast(self), @intCast(index), @intCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertStretch)
    ///
    /// ``` self: QtC.QBoxLayout, index: i32 ```
    pub fn InsertStretch(self: ?*anyopaque, index: i32) void {
        qtc.QBoxLayout_InsertStretch(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertSpacerItem)
    ///
    /// ``` self: QtC.QBoxLayout, index: i32, spacerItem: QtC.QSpacerItem ```
    pub fn InsertSpacerItem(self: ?*anyopaque, index: i32, spacerItem: ?*anyopaque) void {
        qtc.QBoxLayout_InsertSpacerItem(@ptrCast(self), @intCast(index), @ptrCast(spacerItem));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertWidget)
    ///
    /// ``` self: QtC.QBoxLayout, index: i32, widget: QtC.QWidget ```
    pub fn InsertWidget(self: ?*anyopaque, index: i32, widget: ?*anyopaque) void {
        qtc.QBoxLayout_InsertWidget(@ptrCast(self), @intCast(index), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertLayout)
    ///
    /// ``` self: QtC.QBoxLayout, index: i32, layout: QtC.QLayout ```
    pub fn InsertLayout(self: ?*anyopaque, index: i32, layout: ?*anyopaque) void {
        qtc.QBoxLayout_InsertLayout(@ptrCast(self), @intCast(index), @ptrCast(layout));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertItem)
    ///
    /// ``` self: QtC.QBoxLayout, index: i32, param2: QtC.QLayoutItem ```
    pub fn InsertItem(self: ?*anyopaque, index: i32, param2: ?*anyopaque) void {
        qtc.QBoxLayout_InsertItem(@ptrCast(self), @intCast(index), @ptrCast(param2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#spacing)
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn Spacing(self: ?*anyopaque) i32 {
        return qtc.QBoxLayout_Spacing(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#spacing)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QBoxLayout, slot: fn () callconv(.c) i32 ```
    pub fn OnSpacing(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QBoxLayout_OnSpacing(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#spacing)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn QBaseSpacing(self: ?*anyopaque) i32 {
        return qtc.QBoxLayout_QBaseSpacing(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setSpacing)
    ///
    /// ``` self: QtC.QBoxLayout, spacing: i32 ```
    pub fn SetSpacing(self: ?*anyopaque, spacing: i32) void {
        qtc.QBoxLayout_SetSpacing(@ptrCast(self), @intCast(spacing));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setSpacing)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QBoxLayout, slot: fn (self: QtC.QBoxLayout, spacing: i32) callconv(.c) void ```
    pub fn OnSetSpacing(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QBoxLayout_OnSetSpacing(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setSpacing)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QBoxLayout, spacing: i32 ```
    pub fn QBaseSetSpacing(self: ?*anyopaque, spacing: i32) void {
        qtc.QBoxLayout_QBaseSetSpacing(@ptrCast(self), @intCast(spacing));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setStretchFactor)
    ///
    /// ``` self: QtC.QBoxLayout, w: QtC.QWidget, stretch: i32 ```
    pub fn SetStretchFactor(self: ?*anyopaque, w: ?*anyopaque, stretch: i32) bool {
        return qtc.QBoxLayout_SetStretchFactor(@ptrCast(self), @ptrCast(w), @intCast(stretch));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setStretchFactor)
    ///
    /// ``` self: QtC.QBoxLayout, l: QtC.QLayout, stretch: i32 ```
    pub fn SetStretchFactor2(self: ?*anyopaque, l: ?*anyopaque, stretch: i32) bool {
        return qtc.QBoxLayout_SetStretchFactor2(@ptrCast(self), @ptrCast(l), @intCast(stretch));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setStretch)
    ///
    /// ``` self: QtC.QBoxLayout, index: i32, stretch: i32 ```
    pub fn SetStretch(self: ?*anyopaque, index: i32, stretch: i32) void {
        qtc.QBoxLayout_SetStretch(@ptrCast(self), @intCast(index), @intCast(stretch));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#stretch)
    ///
    /// ``` self: QtC.QBoxLayout, index: i32 ```
    pub fn Stretch(self: ?*anyopaque, index: i32) i32 {
        return qtc.QBoxLayout_Stretch(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#sizeHint)
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn SizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QBoxLayout_SizeHint(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#sizeHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QBoxLayout, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnSizeHint(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.QBoxLayout_OnSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#sizeHint)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn QBaseSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QBoxLayout_QBaseSizeHint(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#minimumSize)
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn MinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QBoxLayout_MinimumSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#minimumSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QBoxLayout, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnMinimumSize(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.QBoxLayout_OnMinimumSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#minimumSize)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn QBaseMinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QBoxLayout_QBaseMinimumSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#maximumSize)
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn MaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QBoxLayout_MaximumSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#maximumSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QBoxLayout, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnMaximumSize(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.QBoxLayout_OnMaximumSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#maximumSize)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn QBaseMaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QBoxLayout_QBaseMaximumSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#hasHeightForWidth)
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn HasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.QBoxLayout_HasHeightForWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#hasHeightForWidth)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QBoxLayout, slot: fn () callconv(.c) bool ```
    pub fn OnHasHeightForWidth(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QBoxLayout_OnHasHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#hasHeightForWidth)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn QBaseHasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.QBoxLayout_QBaseHasHeightForWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#heightForWidth)
    ///
    /// ``` self: QtC.QBoxLayout, param1: i32 ```
    pub fn HeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QBoxLayout_HeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#heightForWidth)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QBoxLayout, slot: fn (self: QtC.QBoxLayout, param1: i32) callconv(.c) i32 ```
    pub fn OnHeightForWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QBoxLayout_OnHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#heightForWidth)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QBoxLayout, param1: i32 ```
    pub fn QBaseHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QBoxLayout_QBaseHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#minimumHeightForWidth)
    ///
    /// ``` self: QtC.QBoxLayout, param1: i32 ```
    pub fn MinimumHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QBoxLayout_MinimumHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#minimumHeightForWidth)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QBoxLayout, slot: fn (self: QtC.QBoxLayout, param1: i32) callconv(.c) i32 ```
    pub fn OnMinimumHeightForWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QBoxLayout_OnMinimumHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#minimumHeightForWidth)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QBoxLayout, param1: i32 ```
    pub fn QBaseMinimumHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QBoxLayout_QBaseMinimumHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#expandingDirections)
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn ExpandingDirections(self: ?*anyopaque) i64 {
        return qtc.QBoxLayout_ExpandingDirections(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#expandingDirections)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QBoxLayout, slot: fn () callconv(.c) i64 ```
    pub fn OnExpandingDirections(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.QBoxLayout_OnExpandingDirections(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#expandingDirections)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn QBaseExpandingDirections(self: ?*anyopaque) i64 {
        return qtc.QBoxLayout_QBaseExpandingDirections(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#invalidate)
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn Invalidate(self: ?*anyopaque) void {
        qtc.QBoxLayout_Invalidate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#invalidate)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QBoxLayout, slot: fn () callconv(.c) void ```
    pub fn OnInvalidate(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QBoxLayout_OnInvalidate(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#invalidate)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn QBaseInvalidate(self: ?*anyopaque) void {
        qtc.QBoxLayout_QBaseInvalidate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#itemAt)
    ///
    /// ``` self: QtC.QBoxLayout, param1: i32 ```
    pub fn ItemAt(self: ?*anyopaque, param1: i32) QtC.QLayoutItem {
        return qtc.QBoxLayout_ItemAt(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#itemAt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QBoxLayout, slot: fn (self: QtC.QBoxLayout, param1: i32) callconv(.c) QtC.QLayoutItem ```
    pub fn OnItemAt(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) QtC.QLayoutItem) void {
        qtc.QBoxLayout_OnItemAt(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#itemAt)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QBoxLayout, param1: i32 ```
    pub fn QBaseItemAt(self: ?*anyopaque, param1: i32) QtC.QLayoutItem {
        return qtc.QBoxLayout_QBaseItemAt(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#takeAt)
    ///
    /// ``` self: QtC.QBoxLayout, param1: i32 ```
    pub fn TakeAt(self: ?*anyopaque, param1: i32) QtC.QLayoutItem {
        return qtc.QBoxLayout_TakeAt(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#takeAt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QBoxLayout, slot: fn (self: QtC.QBoxLayout, param1: i32) callconv(.c) QtC.QLayoutItem ```
    pub fn OnTakeAt(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) QtC.QLayoutItem) void {
        qtc.QBoxLayout_OnTakeAt(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#takeAt)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QBoxLayout, param1: i32 ```
    pub fn QBaseTakeAt(self: ?*anyopaque, param1: i32) QtC.QLayoutItem {
        return qtc.QBoxLayout_QBaseTakeAt(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#count)
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn Count(self: ?*anyopaque) i32 {
        return qtc.QBoxLayout_Count(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#count)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QBoxLayout, slot: fn () callconv(.c) i32 ```
    pub fn OnCount(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QBoxLayout_OnCount(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#count)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn QBaseCount(self: ?*anyopaque) i32 {
        return qtc.QBoxLayout_QBaseCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setGeometry)
    ///
    /// ``` self: QtC.QBoxLayout, geometry: QtC.QRect ```
    pub fn SetGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QBoxLayout_SetGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setGeometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QBoxLayout, slot: fn (self: QtC.QBoxLayout, geometry: QtC.QRect) callconv(.c) void ```
    pub fn OnSetGeometry(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QBoxLayout_OnSetGeometry(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setGeometry)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QBoxLayout, geometry: QtC.QRect ```
    pub fn QBaseSetGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QBoxLayout_QBaseSetGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QBoxLayout_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qboxlayout.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QBoxLayout_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qboxlayout.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addStretch)
    ///
    /// ``` self: QtC.QBoxLayout, stretch: i32 ```
    pub fn AddStretch1(self: ?*anyopaque, stretch: i32) void {
        qtc.QBoxLayout_AddStretch1(@ptrCast(self), @intCast(stretch));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addWidget)
    ///
    /// ``` self: QtC.QBoxLayout, param1: QtC.QWidget, stretch: i32 ```
    pub fn AddWidget2(self: ?*anyopaque, param1: ?*anyopaque, stretch: i32) void {
        qtc.QBoxLayout_AddWidget2(@ptrCast(self), @ptrCast(param1), @intCast(stretch));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addWidget)
    ///
    /// ``` self: QtC.QBoxLayout, param1: QtC.QWidget, stretch: i32, alignment: i32 ```
    pub fn AddWidget3(self: ?*anyopaque, param1: ?*anyopaque, stretch: i32, alignment: i64) void {
        qtc.QBoxLayout_AddWidget3(@ptrCast(self), @ptrCast(param1), @intCast(stretch), @intCast(alignment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addLayout)
    ///
    /// ``` self: QtC.QBoxLayout, layout: QtC.QLayout, stretch: i32 ```
    pub fn AddLayout2(self: ?*anyopaque, layout: ?*anyopaque, stretch: i32) void {
        qtc.QBoxLayout_AddLayout2(@ptrCast(self), @ptrCast(layout), @intCast(stretch));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertStretch)
    ///
    /// ``` self: QtC.QBoxLayout, index: i32, stretch: i32 ```
    pub fn InsertStretch2(self: ?*anyopaque, index: i32, stretch: i32) void {
        qtc.QBoxLayout_InsertStretch2(@ptrCast(self), @intCast(index), @intCast(stretch));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertWidget)
    ///
    /// ``` self: QtC.QBoxLayout, index: i32, widget: QtC.QWidget, stretch: i32 ```
    pub fn InsertWidget3(self: ?*anyopaque, index: i32, widget: ?*anyopaque, stretch: i32) void {
        qtc.QBoxLayout_InsertWidget3(@ptrCast(self), @intCast(index), @ptrCast(widget), @intCast(stretch));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertWidget)
    ///
    /// ``` self: QtC.QBoxLayout, index: i32, widget: QtC.QWidget, stretch: i32, alignment: i32 ```
    pub fn InsertWidget4(self: ?*anyopaque, index: i32, widget: ?*anyopaque, stretch: i32, alignment: i64) void {
        qtc.QBoxLayout_InsertWidget4(@ptrCast(self), @intCast(index), @ptrCast(widget), @intCast(stretch), @intCast(alignment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertLayout)
    ///
    /// ``` self: QtC.QBoxLayout, index: i32, layout: QtC.QLayout, stretch: i32 ```
    pub fn InsertLayout3(self: ?*anyopaque, index: i32, layout: ?*anyopaque, stretch: i32) void {
        qtc.QBoxLayout_InsertLayout3(@ptrCast(self), @intCast(index), @ptrCast(layout), @intCast(stretch));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
    ///
    /// ``` self: QtC.QBoxLayout, left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn SetContentsMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QLayout_SetContentsMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
    ///
    /// ``` self: QtC.QBoxLayout, margins: QtC.QMargins ```
    pub fn SetContentsMargins2(self: ?*anyopaque, margins: ?*anyopaque) void {
        qtc.QLayout_SetContentsMargins2(@ptrCast(self), @ptrCast(margins));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#unsetContentsMargins)
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn UnsetContentsMargins(self: ?*anyopaque) void {
        qtc.QLayout_UnsetContentsMargins(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#getContentsMargins)
    ///
    /// ``` self: QtC.QBoxLayout, left: ?*i32, top: ?*i32, right: ?*i32, bottom: ?*i32 ```
    pub fn GetContentsMargins(self: ?*anyopaque, left: ?*anyopaque, top: ?*anyopaque, right: ?*anyopaque, bottom: ?*anyopaque) void {
        qtc.QLayout_GetContentsMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#contentsMargins)
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn ContentsMargins(self: ?*anyopaque) QtC.QMargins {
        return qtc.QLayout_ContentsMargins(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#contentsRect)
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn ContentsRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QLayout_ContentsRect(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
    ///
    /// ``` self: QtC.QBoxLayout, w: QtC.QWidget, alignment: i32 ```
    pub fn SetAlignment(self: ?*anyopaque, w: ?*anyopaque, alignment: i64) bool {
        return qtc.QLayout_SetAlignment(@ptrCast(self), @ptrCast(w), @intCast(alignment));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
    ///
    /// ``` self: QtC.QBoxLayout, l: QtC.QLayout, alignment: i32 ```
    pub fn SetAlignment2(self: ?*anyopaque, l: ?*anyopaque, alignment: i64) bool {
        return qtc.QLayout_SetAlignment2(@ptrCast(self), @ptrCast(l), @intCast(alignment));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setSizeConstraint)
    ///
    /// ``` self: QtC.QBoxLayout, sizeConstraint: qlayout_enums.SizeConstraint ```
    pub fn SetSizeConstraint(self: ?*anyopaque, sizeConstraint: i64) void {
        qtc.QLayout_SetSizeConstraint(@ptrCast(self), @intCast(sizeConstraint));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#sizeConstraint)
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn SizeConstraint(self: ?*anyopaque) i64 {
        return qtc.QLayout_SizeConstraint(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setMenuBar)
    ///
    /// ``` self: QtC.QBoxLayout, w: QtC.QWidget ```
    pub fn SetMenuBar(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QLayout_SetMenuBar(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#menuBar)
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn MenuBar(self: ?*anyopaque) QtC.QWidget {
        return qtc.QLayout_MenuBar(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#parentWidget)
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn ParentWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QLayout_ParentWidget(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#activate)
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn Activate(self: ?*anyopaque) bool {
        return qtc.QLayout_Activate(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#update)
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn Update(self: ?*anyopaque) void {
        qtc.QLayout_Update(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#removeWidget)
    ///
    /// ``` self: QtC.QBoxLayout, w: QtC.QWidget ```
    pub fn RemoveWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QLayout_RemoveWidget(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#removeItem)
    ///
    /// ``` self: QtC.QBoxLayout, param1: QtC.QLayoutItem ```
    pub fn RemoveItem(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLayout_RemoveItem(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// ``` self: QtC.QBoxLayout, param1: QtC.QLayoutItem ```
    pub fn IndexOf2(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QLayout_IndexOf2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QLayout, slot: fn (self: QtC.QLayout, param1: QtC.QLayoutItem) callconv(.c) i32 ```
    pub fn OnIndexOf2(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QLayout_OnIndexOf2(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QBoxLayout, param1: QtC.QLayoutItem ```
    pub fn QBaseIndexOf2(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QLayout_QBaseIndexOf2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMinimumHeightForWidth)
    ///
    /// ``` self: QtC.QBoxLayout, w: i32 ```
    pub fn TotalMinimumHeightForWidth(self: ?*anyopaque, w: i32) i32 {
        return qtc.QLayout_TotalMinimumHeightForWidth(@ptrCast(self), @intCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalHeightForWidth)
    ///
    /// ``` self: QtC.QBoxLayout, w: i32 ```
    pub fn TotalHeightForWidth(self: ?*anyopaque, w: i32) i32 {
        return qtc.QLayout_TotalHeightForWidth(@ptrCast(self), @intCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMinimumSize)
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn TotalMinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QLayout_TotalMinimumSize(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMaximumSize)
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn TotalMaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QLayout_TotalMaximumSize(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalSizeHint)
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn TotalSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QLayout_TotalSizeHint(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setEnabled)
    ///
    /// ``` self: QtC.QBoxLayout, enabled: bool ```
    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QLayout_SetEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEnabled)
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return qtc.QLayout_IsEnabled(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#closestAcceptableSize)
    ///
    /// ``` w: QtC.QWidget, s: QtC.QSize ```
    pub fn ClosestAcceptableSize(w: ?*anyopaque, s: ?*anyopaque) QtC.QSize {
        return qtc.QLayout_ClosestAcceptableSize(@ptrCast(w), @ptrCast(s));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QBoxLayout, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qboxlayout.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QBoxLayout, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QBoxLayout, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QBoxLayout, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QBoxLayout, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QBoxLayout, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QBoxLayout, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i64) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QBoxLayout, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.struct_libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qboxlayout.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QBoxLayout, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QBoxLayout, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QBoxLayout, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QBoxLayout, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QBoxLayout, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QBoxLayout, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QBoxLayout, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QBoxLayout, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QBoxLayout, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QBoxLayout, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QBoxLayout, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QBoxLayout, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn Alignment(self: ?*anyopaque) i64 {
        return qtc.QLayoutItem_Alignment(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#geometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn Geometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QBoxLayout_Geometry(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#geometry)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn QBaseGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QBoxLayout_QBaseGeometry(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#geometry)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, slot: fn () callconv(.c) QtC.QRect ```
    pub fn OnGeometry(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QRect) void {
        qtc.QBoxLayout_OnGeometry(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, param1: QtC.QWidget ```
    pub fn IndexOf(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QBoxLayout_IndexOf(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, param1: QtC.QWidget ```
    pub fn QBaseIndexOf(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QBoxLayout_QBaseIndexOf(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, slot: fn (self: QtC.QBoxLayout, param1: QtC.QWidget) callconv(.c) i32 ```
    pub fn OnIndexOf(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QBoxLayout_OnIndexOf(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QBoxLayout_IsEmpty(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn QBaseIsEmpty(self: ?*anyopaque) bool {
        return qtc.QBoxLayout_QBaseIsEmpty(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, slot: fn () callconv(.c) bool ```
    pub fn OnIsEmpty(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QBoxLayout_OnIsEmpty(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn ControlTypes(self: ?*anyopaque) i64 {
        return qtc.QBoxLayout_ControlTypes(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn QBaseControlTypes(self: ?*anyopaque) i64 {
        return qtc.QBoxLayout_QBaseControlTypes(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, slot: fn () callconv(.c) i64 ```
    pub fn OnControlTypes(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.QBoxLayout_OnControlTypes(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, from: QtC.QWidget, to: QtC.QWidget, options: i32 ```
    pub fn ReplaceWidget(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque, options: i64) QtC.QLayoutItem {
        return qtc.QBoxLayout_ReplaceWidget(@ptrCast(self), @ptrCast(from), @ptrCast(to), @intCast(options));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, from: QtC.QWidget, to: QtC.QWidget, options: i32 ```
    pub fn QBaseReplaceWidget(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque, options: i64) QtC.QLayoutItem {
        return qtc.QBoxLayout_QBaseReplaceWidget(@ptrCast(self), @ptrCast(from), @ptrCast(to), @intCast(options));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, slot: fn (self: QtC.QBoxLayout, from: QtC.QWidget, to: QtC.QWidget, options: i32) callconv(.c) QtC.QLayoutItem ```
    pub fn OnReplaceWidget(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i64) callconv(.c) QtC.QLayoutItem) void {
        qtc.QBoxLayout_OnReplaceWidget(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#layout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn Layout(self: ?*anyopaque) QtC.QLayout {
        return qtc.QBoxLayout_Layout(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#layout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn QBaseLayout(self: ?*anyopaque) QtC.QLayout {
        return qtc.QBoxLayout_QBaseLayout(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#layout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, slot: fn () callconv(.c) QtC.QLayout ```
    pub fn OnLayout(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QLayout) void {
        qtc.QBoxLayout_OnLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, e: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QBoxLayout_ChildEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, e: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QBoxLayout_QBaseChildEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, slot: fn (self: QtC.QBoxLayout, e: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QBoxLayout_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QBoxLayout_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QBoxLayout_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, slot: fn (self: QtC.QBoxLayout, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QBoxLayout_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QBoxLayout_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QBoxLayout_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, slot: fn (self: QtC.QBoxLayout, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QBoxLayout_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QBoxLayout_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QBoxLayout_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, slot: fn (self: QtC.QBoxLayout, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QBoxLayout_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QBoxLayout_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QBoxLayout_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, slot: fn (self: QtC.QBoxLayout, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QBoxLayout_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QBoxLayout_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QBoxLayout_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, slot: fn (self: QtC.QBoxLayout, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QBoxLayout_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QBoxLayout_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QBoxLayout_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, slot: fn (self: QtC.QBoxLayout, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QBoxLayout_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn Widget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QBoxLayout_Widget(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn QBaseWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QBoxLayout_QBaseWidget(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, slot: fn () callconv(.c) QtC.QWidget ```
    pub fn OnWidget(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QWidget) void {
        qtc.QBoxLayout_OnWidget(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn SpacerItem(self: ?*anyopaque) QtC.QSpacerItem {
        return qtc.QBoxLayout_SpacerItem(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn QBaseSpacerItem(self: ?*anyopaque) QtC.QSpacerItem {
        return qtc.QBoxLayout_QBaseSpacerItem(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, slot: fn () callconv(.c) QtC.QSpacerItem ```
    pub fn OnSpacerItem(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSpacerItem) void {
        qtc.QBoxLayout_OnSpacerItem(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, param1: QtC.QEvent ```
    pub fn WidgetEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QBoxLayout_WidgetEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, param1: QtC.QEvent ```
    pub fn QBaseWidgetEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QBoxLayout_QBaseWidgetEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, slot: fn (self: QtC.QBoxLayout, param1: QtC.QEvent) callconv(.c) void ```
    pub fn OnWidgetEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QBoxLayout_OnWidgetEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, l: QtC.QLayout ```
    pub fn AddChildLayout(self: ?*anyopaque, l: ?*anyopaque) void {
        qtc.QBoxLayout_AddChildLayout(@ptrCast(self), @ptrCast(l));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, l: QtC.QLayout ```
    pub fn QBaseAddChildLayout(self: ?*anyopaque, l: ?*anyopaque) void {
        qtc.QBoxLayout_QBaseAddChildLayout(@ptrCast(self), @ptrCast(l));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, slot: fn (self: QtC.QBoxLayout, l: QtC.QLayout) callconv(.c) void ```
    pub fn OnAddChildLayout(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QBoxLayout_OnAddChildLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, w: QtC.QWidget ```
    pub fn AddChildWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QBoxLayout_AddChildWidget(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, w: QtC.QWidget ```
    pub fn QBaseAddChildWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QBoxLayout_QBaseAddChildWidget(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, slot: fn (self: QtC.QBoxLayout, w: QtC.QWidget) callconv(.c) void ```
    pub fn OnAddChildWidget(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QBoxLayout_OnAddChildWidget(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, layout: QtC.QLayout ```
    pub fn AdoptLayout(self: ?*anyopaque, layout: ?*anyopaque) bool {
        return qtc.QBoxLayout_AdoptLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, layout: QtC.QLayout ```
    pub fn QBaseAdoptLayout(self: ?*anyopaque, layout: ?*anyopaque) bool {
        return qtc.QBoxLayout_QBaseAdoptLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, slot: fn (self: QtC.QBoxLayout, layout: QtC.QLayout) callconv(.c) bool ```
    pub fn OnAdoptLayout(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QBoxLayout_OnAdoptLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, param1: QtC.QRect ```
    pub fn AlignmentRect(self: ?*anyopaque, param1: ?*anyopaque) QtC.QRect {
        return qtc.QBoxLayout_AlignmentRect(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, param1: QtC.QRect ```
    pub fn QBaseAlignmentRect(self: ?*anyopaque, param1: ?*anyopaque) QtC.QRect {
        return qtc.QBoxLayout_QBaseAlignmentRect(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, slot: fn (self: QtC.QBoxLayout, param1: QtC.QRect) callconv(.c) QtC.QRect ```
    pub fn OnAlignmentRect(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QBoxLayout_OnAlignmentRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QBoxLayout_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QBoxLayout_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QBoxLayout_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QBoxLayout_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QBoxLayout_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QBoxLayout_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QBoxLayout_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QBoxLayout_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, slot: fn (self: QtC.QBoxLayout, signal: []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        qtc.QBoxLayout_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QBoxLayout_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QBoxLayout_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QBoxLayout, slot: fn (self: QtC.QBoxLayout, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QBoxLayout_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QBoxLayout, slot: fn (self: QtC.QObject, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#dtor.QBoxLayout)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QBoxLayout ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QBoxLayout_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qhboxlayout.html
pub const qhboxlayout = struct {
    /// New constructs a new QHBoxLayout object.
    ///
    /// ``` parent: QtC.QWidget ```
    pub fn New(parent: ?*anyopaque) QtC.QHBoxLayout {
        return qtc.QHBoxLayout_new(@ptrCast(parent));
    }

    /// New2 constructs a new QHBoxLayout object.
    ///
    ///
    pub fn New2() QtC.QHBoxLayout {
        return qtc.QHBoxLayout_new2();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QHBoxLayout_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QHBoxLayout, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QHBoxLayout_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QHBoxLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QHBoxLayout_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QHBoxLayout, slot: fn (self: QtC.QHBoxLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QHBoxLayout_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QHBoxLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QHBoxLayout_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QHBoxLayout_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhboxlayout.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QHBoxLayout_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhboxlayout.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QHBoxLayout_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhboxlayout.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#direction)
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn Direction(self: ?*anyopaque) i64 {
        return qtc.QBoxLayout_Direction(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setDirection)
    ///
    /// ``` self: QtC.QHBoxLayout, direction: qboxlayout_enums.Direction ```
    pub fn SetDirection(self: ?*anyopaque, direction: i64) void {
        qtc.QBoxLayout_SetDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addSpacing)
    ///
    /// ``` self: QtC.QHBoxLayout, size: i32 ```
    pub fn AddSpacing(self: ?*anyopaque, size: i32) void {
        qtc.QBoxLayout_AddSpacing(@ptrCast(self), @intCast(size));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addStretch)
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn AddStretch(self: ?*anyopaque) void {
        qtc.QBoxLayout_AddStretch(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addSpacerItem)
    ///
    /// ``` self: QtC.QHBoxLayout, spacerItem: QtC.QSpacerItem ```
    pub fn AddSpacerItem(self: ?*anyopaque, spacerItem: ?*anyopaque) void {
        qtc.QBoxLayout_AddSpacerItem(@ptrCast(self), @ptrCast(spacerItem));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addWidget)
    ///
    /// ``` self: QtC.QHBoxLayout, param1: QtC.QWidget ```
    pub fn AddWidget(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QBoxLayout_AddWidget(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addLayout)
    ///
    /// ``` self: QtC.QHBoxLayout, layout: QtC.QLayout ```
    pub fn AddLayout(self: ?*anyopaque, layout: ?*anyopaque) void {
        qtc.QBoxLayout_AddLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addStrut)
    ///
    /// ``` self: QtC.QHBoxLayout, param1: i32 ```
    pub fn AddStrut(self: ?*anyopaque, param1: i32) void {
        qtc.QBoxLayout_AddStrut(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertSpacing)
    ///
    /// ``` self: QtC.QHBoxLayout, index: i32, size: i32 ```
    pub fn InsertSpacing(self: ?*anyopaque, index: i32, size: i32) void {
        qtc.QBoxLayout_InsertSpacing(@ptrCast(self), @intCast(index), @intCast(size));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertStretch)
    ///
    /// ``` self: QtC.QHBoxLayout, index: i32 ```
    pub fn InsertStretch(self: ?*anyopaque, index: i32) void {
        qtc.QBoxLayout_InsertStretch(@ptrCast(self), @intCast(index));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertSpacerItem)
    ///
    /// ``` self: QtC.QHBoxLayout, index: i32, spacerItem: QtC.QSpacerItem ```
    pub fn InsertSpacerItem(self: ?*anyopaque, index: i32, spacerItem: ?*anyopaque) void {
        qtc.QBoxLayout_InsertSpacerItem(@ptrCast(self), @intCast(index), @ptrCast(spacerItem));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertWidget)
    ///
    /// ``` self: QtC.QHBoxLayout, index: i32, widget: QtC.QWidget ```
    pub fn InsertWidget(self: ?*anyopaque, index: i32, widget: ?*anyopaque) void {
        qtc.QBoxLayout_InsertWidget(@ptrCast(self), @intCast(index), @ptrCast(widget));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertLayout)
    ///
    /// ``` self: QtC.QHBoxLayout, index: i32, layout: QtC.QLayout ```
    pub fn InsertLayout(self: ?*anyopaque, index: i32, layout: ?*anyopaque) void {
        qtc.QBoxLayout_InsertLayout(@ptrCast(self), @intCast(index), @ptrCast(layout));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertItem)
    ///
    /// ``` self: QtC.QHBoxLayout, index: i32, param2: QtC.QLayoutItem ```
    pub fn InsertItem(self: ?*anyopaque, index: i32, param2: ?*anyopaque) void {
        qtc.QBoxLayout_InsertItem(@ptrCast(self), @intCast(index), @ptrCast(param2));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setStretchFactor)
    ///
    /// ``` self: QtC.QHBoxLayout, w: QtC.QWidget, stretch: i32 ```
    pub fn SetStretchFactor(self: ?*anyopaque, w: ?*anyopaque, stretch: i32) bool {
        return qtc.QBoxLayout_SetStretchFactor(@ptrCast(self), @ptrCast(w), @intCast(stretch));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setStretchFactor)
    ///
    /// ``` self: QtC.QHBoxLayout, l: QtC.QLayout, stretch: i32 ```
    pub fn SetStretchFactor2(self: ?*anyopaque, l: ?*anyopaque, stretch: i32) bool {
        return qtc.QBoxLayout_SetStretchFactor2(@ptrCast(self), @ptrCast(l), @intCast(stretch));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setStretch)
    ///
    /// ``` self: QtC.QHBoxLayout, index: i32, stretch: i32 ```
    pub fn SetStretch(self: ?*anyopaque, index: i32, stretch: i32) void {
        qtc.QBoxLayout_SetStretch(@ptrCast(self), @intCast(index), @intCast(stretch));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#stretch)
    ///
    /// ``` self: QtC.QHBoxLayout, index: i32 ```
    pub fn Stretch(self: ?*anyopaque, index: i32) i32 {
        return qtc.QBoxLayout_Stretch(@ptrCast(self), @intCast(index));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addStretch)
    ///
    /// ``` self: QtC.QHBoxLayout, stretch: i32 ```
    pub fn AddStretch1(self: ?*anyopaque, stretch: i32) void {
        qtc.QBoxLayout_AddStretch1(@ptrCast(self), @intCast(stretch));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addWidget)
    ///
    /// ``` self: QtC.QHBoxLayout, param1: QtC.QWidget, stretch: i32 ```
    pub fn AddWidget2(self: ?*anyopaque, param1: ?*anyopaque, stretch: i32) void {
        qtc.QBoxLayout_AddWidget2(@ptrCast(self), @ptrCast(param1), @intCast(stretch));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addWidget)
    ///
    /// ``` self: QtC.QHBoxLayout, param1: QtC.QWidget, stretch: i32, alignment: i32 ```
    pub fn AddWidget3(self: ?*anyopaque, param1: ?*anyopaque, stretch: i32, alignment: i64) void {
        qtc.QBoxLayout_AddWidget3(@ptrCast(self), @ptrCast(param1), @intCast(stretch), @intCast(alignment));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addLayout)
    ///
    /// ``` self: QtC.QHBoxLayout, layout: QtC.QLayout, stretch: i32 ```
    pub fn AddLayout2(self: ?*anyopaque, layout: ?*anyopaque, stretch: i32) void {
        qtc.QBoxLayout_AddLayout2(@ptrCast(self), @ptrCast(layout), @intCast(stretch));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertStretch)
    ///
    /// ``` self: QtC.QHBoxLayout, index: i32, stretch: i32 ```
    pub fn InsertStretch2(self: ?*anyopaque, index: i32, stretch: i32) void {
        qtc.QBoxLayout_InsertStretch2(@ptrCast(self), @intCast(index), @intCast(stretch));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertWidget)
    ///
    /// ``` self: QtC.QHBoxLayout, index: i32, widget: QtC.QWidget, stretch: i32 ```
    pub fn InsertWidget3(self: ?*anyopaque, index: i32, widget: ?*anyopaque, stretch: i32) void {
        qtc.QBoxLayout_InsertWidget3(@ptrCast(self), @intCast(index), @ptrCast(widget), @intCast(stretch));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertWidget)
    ///
    /// ``` self: QtC.QHBoxLayout, index: i32, widget: QtC.QWidget, stretch: i32, alignment: i32 ```
    pub fn InsertWidget4(self: ?*anyopaque, index: i32, widget: ?*anyopaque, stretch: i32, alignment: i64) void {
        qtc.QBoxLayout_InsertWidget4(@ptrCast(self), @intCast(index), @ptrCast(widget), @intCast(stretch), @intCast(alignment));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertLayout)
    ///
    /// ``` self: QtC.QHBoxLayout, index: i32, layout: QtC.QLayout, stretch: i32 ```
    pub fn InsertLayout3(self: ?*anyopaque, index: i32, layout: ?*anyopaque, stretch: i32) void {
        qtc.QBoxLayout_InsertLayout3(@ptrCast(self), @intCast(index), @ptrCast(layout), @intCast(stretch));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
    ///
    /// ``` self: QtC.QHBoxLayout, left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn SetContentsMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QLayout_SetContentsMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
    ///
    /// ``` self: QtC.QHBoxLayout, margins: QtC.QMargins ```
    pub fn SetContentsMargins2(self: ?*anyopaque, margins: ?*anyopaque) void {
        qtc.QLayout_SetContentsMargins2(@ptrCast(self), @ptrCast(margins));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#unsetContentsMargins)
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn UnsetContentsMargins(self: ?*anyopaque) void {
        qtc.QLayout_UnsetContentsMargins(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#getContentsMargins)
    ///
    /// ``` self: QtC.QHBoxLayout, left: ?*i32, top: ?*i32, right: ?*i32, bottom: ?*i32 ```
    pub fn GetContentsMargins(self: ?*anyopaque, left: ?*anyopaque, top: ?*anyopaque, right: ?*anyopaque, bottom: ?*anyopaque) void {
        qtc.QLayout_GetContentsMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#contentsMargins)
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn ContentsMargins(self: ?*anyopaque) QtC.QMargins {
        return qtc.QLayout_ContentsMargins(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#contentsRect)
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn ContentsRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QLayout_ContentsRect(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
    ///
    /// ``` self: QtC.QHBoxLayout, w: QtC.QWidget, alignment: i32 ```
    pub fn SetAlignment(self: ?*anyopaque, w: ?*anyopaque, alignment: i64) bool {
        return qtc.QLayout_SetAlignment(@ptrCast(self), @ptrCast(w), @intCast(alignment));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
    ///
    /// ``` self: QtC.QHBoxLayout, l: QtC.QLayout, alignment: i32 ```
    pub fn SetAlignment2(self: ?*anyopaque, l: ?*anyopaque, alignment: i64) bool {
        return qtc.QLayout_SetAlignment2(@ptrCast(self), @ptrCast(l), @intCast(alignment));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setSizeConstraint)
    ///
    /// ``` self: QtC.QHBoxLayout, sizeConstraint: qlayout_enums.SizeConstraint ```
    pub fn SetSizeConstraint(self: ?*anyopaque, sizeConstraint: i64) void {
        qtc.QLayout_SetSizeConstraint(@ptrCast(self), @intCast(sizeConstraint));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#sizeConstraint)
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn SizeConstraint(self: ?*anyopaque) i64 {
        return qtc.QLayout_SizeConstraint(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setMenuBar)
    ///
    /// ``` self: QtC.QHBoxLayout, w: QtC.QWidget ```
    pub fn SetMenuBar(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QLayout_SetMenuBar(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#menuBar)
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn MenuBar(self: ?*anyopaque) QtC.QWidget {
        return qtc.QLayout_MenuBar(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#parentWidget)
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn ParentWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QLayout_ParentWidget(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#activate)
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn Activate(self: ?*anyopaque) bool {
        return qtc.QLayout_Activate(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#update)
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn Update(self: ?*anyopaque) void {
        qtc.QLayout_Update(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#removeWidget)
    ///
    /// ``` self: QtC.QHBoxLayout, w: QtC.QWidget ```
    pub fn RemoveWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QLayout_RemoveWidget(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#removeItem)
    ///
    /// ``` self: QtC.QHBoxLayout, param1: QtC.QLayoutItem ```
    pub fn RemoveItem(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLayout_RemoveItem(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// ``` self: QtC.QHBoxLayout, param1: QtC.QLayoutItem ```
    pub fn IndexOf2(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QLayout_IndexOf2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QLayout, slot: fn (self: QtC.QLayout, param1: QtC.QLayoutItem) callconv(.c) i32 ```
    pub fn OnIndexOf2(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QLayout_OnIndexOf2(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QHBoxLayout, param1: QtC.QLayoutItem ```
    pub fn QBaseIndexOf2(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QLayout_QBaseIndexOf2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMinimumHeightForWidth)
    ///
    /// ``` self: QtC.QHBoxLayout, w: i32 ```
    pub fn TotalMinimumHeightForWidth(self: ?*anyopaque, w: i32) i32 {
        return qtc.QLayout_TotalMinimumHeightForWidth(@ptrCast(self), @intCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalHeightForWidth)
    ///
    /// ``` self: QtC.QHBoxLayout, w: i32 ```
    pub fn TotalHeightForWidth(self: ?*anyopaque, w: i32) i32 {
        return qtc.QLayout_TotalHeightForWidth(@ptrCast(self), @intCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMinimumSize)
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn TotalMinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QLayout_TotalMinimumSize(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMaximumSize)
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn TotalMaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QLayout_TotalMaximumSize(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalSizeHint)
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn TotalSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QLayout_TotalSizeHint(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setEnabled)
    ///
    /// ``` self: QtC.QHBoxLayout, enabled: bool ```
    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QLayout_SetEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEnabled)
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return qtc.QLayout_IsEnabled(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#closestAcceptableSize)
    ///
    /// ``` w: QtC.QWidget, s: QtC.QSize ```
    pub fn ClosestAcceptableSize(w: ?*anyopaque, s: ?*anyopaque) QtC.QSize {
        return qtc.QLayout_ClosestAcceptableSize(@ptrCast(w), @ptrCast(s));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QHBoxLayout, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qhboxlayout.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QHBoxLayout, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QHBoxLayout, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QHBoxLayout, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QHBoxLayout, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QHBoxLayout, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QHBoxLayout, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i64) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QHBoxLayout, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.struct_libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qhboxlayout.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QHBoxLayout, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QHBoxLayout, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QHBoxLayout, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QHBoxLayout, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QHBoxLayout, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QHBoxLayout, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QHBoxLayout, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QHBoxLayout, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QHBoxLayout, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QHBoxLayout, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QHBoxLayout, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QHBoxLayout, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn Alignment(self: ?*anyopaque) i64 {
        return qtc.QLayoutItem_Alignment(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, param1: QtC.QLayoutItem ```
    pub fn AddItem(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QHBoxLayout_AddItem(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addItem)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, param1: QtC.QLayoutItem ```
    pub fn QBaseAddItem(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QHBoxLayout_QBaseAddItem(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, slot: fn (self: QtC.QHBoxLayout, param1: QtC.QLayoutItem) callconv(.c) void ```
    pub fn OnAddItem(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QHBoxLayout_OnAddItem(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#spacing)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn Spacing(self: ?*anyopaque) i32 {
        return qtc.QHBoxLayout_Spacing(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#spacing)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn QBaseSpacing(self: ?*anyopaque) i32 {
        return qtc.QHBoxLayout_QBaseSpacing(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#spacing)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, slot: fn () callconv(.c) i32 ```
    pub fn OnSpacing(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QHBoxLayout_OnSpacing(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setSpacing)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, spacing: i32 ```
    pub fn SetSpacing(self: ?*anyopaque, spacing: i32) void {
        qtc.QHBoxLayout_SetSpacing(@ptrCast(self), @intCast(spacing));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setSpacing)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, spacing: i32 ```
    pub fn QBaseSetSpacing(self: ?*anyopaque, spacing: i32) void {
        qtc.QHBoxLayout_QBaseSetSpacing(@ptrCast(self), @intCast(spacing));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setSpacing)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, slot: fn (self: QtC.QHBoxLayout, spacing: i32) callconv(.c) void ```
    pub fn OnSetSpacing(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QHBoxLayout_OnSetSpacing(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn SizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QHBoxLayout_SizeHint(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#sizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn QBaseSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QHBoxLayout_QBaseSizeHint(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnSizeHint(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.QHBoxLayout_OnSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#minimumSize)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn MinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QHBoxLayout_MinimumSize(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#minimumSize)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn QBaseMinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QHBoxLayout_QBaseMinimumSize(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#minimumSize)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnMinimumSize(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.QHBoxLayout_OnMinimumSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#maximumSize)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn MaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QHBoxLayout_MaximumSize(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#maximumSize)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn QBaseMaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QHBoxLayout_QBaseMaximumSize(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#maximumSize)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnMaximumSize(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.QHBoxLayout_OnMaximumSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn HasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.QHBoxLayout_HasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn QBaseHasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.QHBoxLayout_QBaseHasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, slot: fn () callconv(.c) bool ```
    pub fn OnHasHeightForWidth(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QHBoxLayout_OnHasHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, param1: i32 ```
    pub fn HeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QHBoxLayout_HeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#heightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, param1: i32 ```
    pub fn QBaseHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QHBoxLayout_QBaseHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, slot: fn (self: QtC.QHBoxLayout, param1: i32) callconv(.c) i32 ```
    pub fn OnHeightForWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QHBoxLayout_OnHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#minimumHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, param1: i32 ```
    pub fn MinimumHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QHBoxLayout_MinimumHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#minimumHeightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, param1: i32 ```
    pub fn QBaseMinimumHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QHBoxLayout_QBaseMinimumHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#minimumHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, slot: fn (self: QtC.QHBoxLayout, param1: i32) callconv(.c) i32 ```
    pub fn OnMinimumHeightForWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QHBoxLayout_OnMinimumHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#expandingDirections)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn ExpandingDirections(self: ?*anyopaque) i64 {
        return qtc.QHBoxLayout_ExpandingDirections(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#expandingDirections)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn QBaseExpandingDirections(self: ?*anyopaque) i64 {
        return qtc.QHBoxLayout_QBaseExpandingDirections(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#expandingDirections)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, slot: fn () callconv(.c) i64 ```
    pub fn OnExpandingDirections(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.QHBoxLayout_OnExpandingDirections(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#invalidate)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn Invalidate(self: ?*anyopaque) void {
        qtc.QHBoxLayout_Invalidate(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#invalidate)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn QBaseInvalidate(self: ?*anyopaque) void {
        qtc.QHBoxLayout_QBaseInvalidate(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#invalidate)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, slot: fn () callconv(.c) void ```
    pub fn OnInvalidate(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QHBoxLayout_OnInvalidate(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#itemAt)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, param1: i32 ```
    pub fn ItemAt(self: ?*anyopaque, param1: i32) QtC.QLayoutItem {
        return qtc.QHBoxLayout_ItemAt(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#itemAt)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, param1: i32 ```
    pub fn QBaseItemAt(self: ?*anyopaque, param1: i32) QtC.QLayoutItem {
        return qtc.QHBoxLayout_QBaseItemAt(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#itemAt)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, slot: fn (self: QtC.QHBoxLayout, param1: i32) callconv(.c) QtC.QLayoutItem ```
    pub fn OnItemAt(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) QtC.QLayoutItem) void {
        qtc.QHBoxLayout_OnItemAt(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#takeAt)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, param1: i32 ```
    pub fn TakeAt(self: ?*anyopaque, param1: i32) QtC.QLayoutItem {
        return qtc.QHBoxLayout_TakeAt(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#takeAt)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, param1: i32 ```
    pub fn QBaseTakeAt(self: ?*anyopaque, param1: i32) QtC.QLayoutItem {
        return qtc.QHBoxLayout_QBaseTakeAt(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#takeAt)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, slot: fn (self: QtC.QHBoxLayout, param1: i32) callconv(.c) QtC.QLayoutItem ```
    pub fn OnTakeAt(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) QtC.QLayoutItem) void {
        qtc.QHBoxLayout_OnTakeAt(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#count)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn Count(self: ?*anyopaque) i32 {
        return qtc.QHBoxLayout_Count(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#count)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn QBaseCount(self: ?*anyopaque) i32 {
        return qtc.QHBoxLayout_QBaseCount(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#count)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, slot: fn () callconv(.c) i32 ```
    pub fn OnCount(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QHBoxLayout_OnCount(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setGeometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, geometry: QtC.QRect ```
    pub fn SetGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QHBoxLayout_SetGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setGeometry)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, geometry: QtC.QRect ```
    pub fn QBaseSetGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QHBoxLayout_QBaseSetGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setGeometry)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, slot: fn (self: QtC.QHBoxLayout, geometry: QtC.QRect) callconv(.c) void ```
    pub fn OnSetGeometry(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QHBoxLayout_OnSetGeometry(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#geometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn Geometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QHBoxLayout_Geometry(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#geometry)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn QBaseGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QHBoxLayout_QBaseGeometry(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#geometry)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, slot: fn () callconv(.c) QtC.QRect ```
    pub fn OnGeometry(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QRect) void {
        qtc.QHBoxLayout_OnGeometry(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, param1: QtC.QWidget ```
    pub fn IndexOf(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QHBoxLayout_IndexOf(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, param1: QtC.QWidget ```
    pub fn QBaseIndexOf(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QHBoxLayout_QBaseIndexOf(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, slot: fn (self: QtC.QHBoxLayout, param1: QtC.QWidget) callconv(.c) i32 ```
    pub fn OnIndexOf(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QHBoxLayout_OnIndexOf(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QHBoxLayout_IsEmpty(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn QBaseIsEmpty(self: ?*anyopaque) bool {
        return qtc.QHBoxLayout_QBaseIsEmpty(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, slot: fn () callconv(.c) bool ```
    pub fn OnIsEmpty(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QHBoxLayout_OnIsEmpty(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn ControlTypes(self: ?*anyopaque) i64 {
        return qtc.QHBoxLayout_ControlTypes(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn QBaseControlTypes(self: ?*anyopaque) i64 {
        return qtc.QHBoxLayout_QBaseControlTypes(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, slot: fn () callconv(.c) i64 ```
    pub fn OnControlTypes(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.QHBoxLayout_OnControlTypes(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, from: QtC.QWidget, to: QtC.QWidget, options: i32 ```
    pub fn ReplaceWidget(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque, options: i64) QtC.QLayoutItem {
        return qtc.QHBoxLayout_ReplaceWidget(@ptrCast(self), @ptrCast(from), @ptrCast(to), @intCast(options));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, from: QtC.QWidget, to: QtC.QWidget, options: i32 ```
    pub fn QBaseReplaceWidget(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque, options: i64) QtC.QLayoutItem {
        return qtc.QHBoxLayout_QBaseReplaceWidget(@ptrCast(self), @ptrCast(from), @ptrCast(to), @intCast(options));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, slot: fn (self: QtC.QHBoxLayout, from: QtC.QWidget, to: QtC.QWidget, options: i32) callconv(.c) QtC.QLayoutItem ```
    pub fn OnReplaceWidget(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i64) callconv(.c) QtC.QLayoutItem) void {
        qtc.QHBoxLayout_OnReplaceWidget(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#layout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn Layout(self: ?*anyopaque) QtC.QLayout {
        return qtc.QHBoxLayout_Layout(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#layout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn QBaseLayout(self: ?*anyopaque) QtC.QLayout {
        return qtc.QHBoxLayout_QBaseLayout(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#layout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, slot: fn () callconv(.c) QtC.QLayout ```
    pub fn OnLayout(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QLayout) void {
        qtc.QHBoxLayout_OnLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, e: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QHBoxLayout_ChildEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, e: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QHBoxLayout_QBaseChildEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, slot: fn (self: QtC.QHBoxLayout, e: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QHBoxLayout_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QHBoxLayout_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QHBoxLayout_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, slot: fn (self: QtC.QHBoxLayout, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QHBoxLayout_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QHBoxLayout_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QHBoxLayout_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, slot: fn (self: QtC.QHBoxLayout, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QHBoxLayout_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QHBoxLayout_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QHBoxLayout_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, slot: fn (self: QtC.QHBoxLayout, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QHBoxLayout_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QHBoxLayout_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QHBoxLayout_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, slot: fn (self: QtC.QHBoxLayout, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QHBoxLayout_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QHBoxLayout_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QHBoxLayout_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, slot: fn (self: QtC.QHBoxLayout, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QHBoxLayout_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QHBoxLayout_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QHBoxLayout_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, slot: fn (self: QtC.QHBoxLayout, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QHBoxLayout_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn Widget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QHBoxLayout_Widget(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn QBaseWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QHBoxLayout_QBaseWidget(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, slot: fn () callconv(.c) QtC.QWidget ```
    pub fn OnWidget(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QWidget) void {
        qtc.QHBoxLayout_OnWidget(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn SpacerItem(self: ?*anyopaque) QtC.QSpacerItem {
        return qtc.QHBoxLayout_SpacerItem(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn QBaseSpacerItem(self: ?*anyopaque) QtC.QSpacerItem {
        return qtc.QHBoxLayout_QBaseSpacerItem(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, slot: fn () callconv(.c) QtC.QSpacerItem ```
    pub fn OnSpacerItem(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSpacerItem) void {
        qtc.QHBoxLayout_OnSpacerItem(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, param1: QtC.QEvent ```
    pub fn WidgetEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QHBoxLayout_WidgetEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, param1: QtC.QEvent ```
    pub fn QBaseWidgetEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QHBoxLayout_QBaseWidgetEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, slot: fn (self: QtC.QHBoxLayout, param1: QtC.QEvent) callconv(.c) void ```
    pub fn OnWidgetEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QHBoxLayout_OnWidgetEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, l: QtC.QLayout ```
    pub fn AddChildLayout(self: ?*anyopaque, l: ?*anyopaque) void {
        qtc.QHBoxLayout_AddChildLayout(@ptrCast(self), @ptrCast(l));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, l: QtC.QLayout ```
    pub fn QBaseAddChildLayout(self: ?*anyopaque, l: ?*anyopaque) void {
        qtc.QHBoxLayout_QBaseAddChildLayout(@ptrCast(self), @ptrCast(l));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, slot: fn (self: QtC.QHBoxLayout, l: QtC.QLayout) callconv(.c) void ```
    pub fn OnAddChildLayout(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QHBoxLayout_OnAddChildLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, w: QtC.QWidget ```
    pub fn AddChildWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QHBoxLayout_AddChildWidget(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, w: QtC.QWidget ```
    pub fn QBaseAddChildWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QHBoxLayout_QBaseAddChildWidget(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, slot: fn (self: QtC.QHBoxLayout, w: QtC.QWidget) callconv(.c) void ```
    pub fn OnAddChildWidget(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QHBoxLayout_OnAddChildWidget(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, layout: QtC.QLayout ```
    pub fn AdoptLayout(self: ?*anyopaque, layout: ?*anyopaque) bool {
        return qtc.QHBoxLayout_AdoptLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, layout: QtC.QLayout ```
    pub fn QBaseAdoptLayout(self: ?*anyopaque, layout: ?*anyopaque) bool {
        return qtc.QHBoxLayout_QBaseAdoptLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, slot: fn (self: QtC.QHBoxLayout, layout: QtC.QLayout) callconv(.c) bool ```
    pub fn OnAdoptLayout(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QHBoxLayout_OnAdoptLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, param1: QtC.QRect ```
    pub fn AlignmentRect(self: ?*anyopaque, param1: ?*anyopaque) QtC.QRect {
        return qtc.QHBoxLayout_AlignmentRect(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, param1: QtC.QRect ```
    pub fn QBaseAlignmentRect(self: ?*anyopaque, param1: ?*anyopaque) QtC.QRect {
        return qtc.QHBoxLayout_QBaseAlignmentRect(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, slot: fn (self: QtC.QHBoxLayout, param1: QtC.QRect) callconv(.c) QtC.QRect ```
    pub fn OnAlignmentRect(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QHBoxLayout_OnAlignmentRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QHBoxLayout_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QHBoxLayout_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QHBoxLayout_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QHBoxLayout_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QHBoxLayout_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QHBoxLayout_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QHBoxLayout_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QHBoxLayout_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, slot: fn (self: QtC.QHBoxLayout, signal: []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        qtc.QHBoxLayout_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QHBoxLayout_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QHBoxLayout_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QHBoxLayout, slot: fn (self: QtC.QHBoxLayout, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QHBoxLayout_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QHBoxLayout, slot: fn (self: QtC.QObject, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qhboxlayout.html#dtor.QHBoxLayout)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QHBoxLayout ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QHBoxLayout_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qvboxlayout.html
pub const qvboxlayout = struct {
    /// New constructs a new QVBoxLayout object.
    ///
    /// ``` parent: QtC.QWidget ```
    pub fn New(parent: ?*anyopaque) QtC.QVBoxLayout {
        return qtc.QVBoxLayout_new(@ptrCast(parent));
    }

    /// New2 constructs a new QVBoxLayout object.
    ///
    ///
    pub fn New2() QtC.QVBoxLayout {
        return qtc.QVBoxLayout_new2();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QVBoxLayout_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QVBoxLayout, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QVBoxLayout_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QVBoxLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QVBoxLayout_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QVBoxLayout, slot: fn (self: QtC.QVBoxLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QVBoxLayout_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QVBoxLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QVBoxLayout_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QVBoxLayout_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvboxlayout.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QVBoxLayout_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvboxlayout.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QVBoxLayout_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvboxlayout.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#direction)
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn Direction(self: ?*anyopaque) i64 {
        return qtc.QBoxLayout_Direction(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setDirection)
    ///
    /// ``` self: QtC.QVBoxLayout, direction: qboxlayout_enums.Direction ```
    pub fn SetDirection(self: ?*anyopaque, direction: i64) void {
        qtc.QBoxLayout_SetDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addSpacing)
    ///
    /// ``` self: QtC.QVBoxLayout, size: i32 ```
    pub fn AddSpacing(self: ?*anyopaque, size: i32) void {
        qtc.QBoxLayout_AddSpacing(@ptrCast(self), @intCast(size));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addStretch)
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn AddStretch(self: ?*anyopaque) void {
        qtc.QBoxLayout_AddStretch(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addSpacerItem)
    ///
    /// ``` self: QtC.QVBoxLayout, spacerItem: QtC.QSpacerItem ```
    pub fn AddSpacerItem(self: ?*anyopaque, spacerItem: ?*anyopaque) void {
        qtc.QBoxLayout_AddSpacerItem(@ptrCast(self), @ptrCast(spacerItem));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addWidget)
    ///
    /// ``` self: QtC.QVBoxLayout, param1: QtC.QWidget ```
    pub fn AddWidget(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QBoxLayout_AddWidget(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addLayout)
    ///
    /// ``` self: QtC.QVBoxLayout, layout: QtC.QLayout ```
    pub fn AddLayout(self: ?*anyopaque, layout: ?*anyopaque) void {
        qtc.QBoxLayout_AddLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addStrut)
    ///
    /// ``` self: QtC.QVBoxLayout, param1: i32 ```
    pub fn AddStrut(self: ?*anyopaque, param1: i32) void {
        qtc.QBoxLayout_AddStrut(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertSpacing)
    ///
    /// ``` self: QtC.QVBoxLayout, index: i32, size: i32 ```
    pub fn InsertSpacing(self: ?*anyopaque, index: i32, size: i32) void {
        qtc.QBoxLayout_InsertSpacing(@ptrCast(self), @intCast(index), @intCast(size));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertStretch)
    ///
    /// ``` self: QtC.QVBoxLayout, index: i32 ```
    pub fn InsertStretch(self: ?*anyopaque, index: i32) void {
        qtc.QBoxLayout_InsertStretch(@ptrCast(self), @intCast(index));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertSpacerItem)
    ///
    /// ``` self: QtC.QVBoxLayout, index: i32, spacerItem: QtC.QSpacerItem ```
    pub fn InsertSpacerItem(self: ?*anyopaque, index: i32, spacerItem: ?*anyopaque) void {
        qtc.QBoxLayout_InsertSpacerItem(@ptrCast(self), @intCast(index), @ptrCast(spacerItem));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertWidget)
    ///
    /// ``` self: QtC.QVBoxLayout, index: i32, widget: QtC.QWidget ```
    pub fn InsertWidget(self: ?*anyopaque, index: i32, widget: ?*anyopaque) void {
        qtc.QBoxLayout_InsertWidget(@ptrCast(self), @intCast(index), @ptrCast(widget));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertLayout)
    ///
    /// ``` self: QtC.QVBoxLayout, index: i32, layout: QtC.QLayout ```
    pub fn InsertLayout(self: ?*anyopaque, index: i32, layout: ?*anyopaque) void {
        qtc.QBoxLayout_InsertLayout(@ptrCast(self), @intCast(index), @ptrCast(layout));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertItem)
    ///
    /// ``` self: QtC.QVBoxLayout, index: i32, param2: QtC.QLayoutItem ```
    pub fn InsertItem(self: ?*anyopaque, index: i32, param2: ?*anyopaque) void {
        qtc.QBoxLayout_InsertItem(@ptrCast(self), @intCast(index), @ptrCast(param2));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setStretchFactor)
    ///
    /// ``` self: QtC.QVBoxLayout, w: QtC.QWidget, stretch: i32 ```
    pub fn SetStretchFactor(self: ?*anyopaque, w: ?*anyopaque, stretch: i32) bool {
        return qtc.QBoxLayout_SetStretchFactor(@ptrCast(self), @ptrCast(w), @intCast(stretch));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setStretchFactor)
    ///
    /// ``` self: QtC.QVBoxLayout, l: QtC.QLayout, stretch: i32 ```
    pub fn SetStretchFactor2(self: ?*anyopaque, l: ?*anyopaque, stretch: i32) bool {
        return qtc.QBoxLayout_SetStretchFactor2(@ptrCast(self), @ptrCast(l), @intCast(stretch));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setStretch)
    ///
    /// ``` self: QtC.QVBoxLayout, index: i32, stretch: i32 ```
    pub fn SetStretch(self: ?*anyopaque, index: i32, stretch: i32) void {
        qtc.QBoxLayout_SetStretch(@ptrCast(self), @intCast(index), @intCast(stretch));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#stretch)
    ///
    /// ``` self: QtC.QVBoxLayout, index: i32 ```
    pub fn Stretch(self: ?*anyopaque, index: i32) i32 {
        return qtc.QBoxLayout_Stretch(@ptrCast(self), @intCast(index));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addStretch)
    ///
    /// ``` self: QtC.QVBoxLayout, stretch: i32 ```
    pub fn AddStretch1(self: ?*anyopaque, stretch: i32) void {
        qtc.QBoxLayout_AddStretch1(@ptrCast(self), @intCast(stretch));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addWidget)
    ///
    /// ``` self: QtC.QVBoxLayout, param1: QtC.QWidget, stretch: i32 ```
    pub fn AddWidget2(self: ?*anyopaque, param1: ?*anyopaque, stretch: i32) void {
        qtc.QBoxLayout_AddWidget2(@ptrCast(self), @ptrCast(param1), @intCast(stretch));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addWidget)
    ///
    /// ``` self: QtC.QVBoxLayout, param1: QtC.QWidget, stretch: i32, alignment: i32 ```
    pub fn AddWidget3(self: ?*anyopaque, param1: ?*anyopaque, stretch: i32, alignment: i64) void {
        qtc.QBoxLayout_AddWidget3(@ptrCast(self), @ptrCast(param1), @intCast(stretch), @intCast(alignment));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addLayout)
    ///
    /// ``` self: QtC.QVBoxLayout, layout: QtC.QLayout, stretch: i32 ```
    pub fn AddLayout2(self: ?*anyopaque, layout: ?*anyopaque, stretch: i32) void {
        qtc.QBoxLayout_AddLayout2(@ptrCast(self), @ptrCast(layout), @intCast(stretch));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertStretch)
    ///
    /// ``` self: QtC.QVBoxLayout, index: i32, stretch: i32 ```
    pub fn InsertStretch2(self: ?*anyopaque, index: i32, stretch: i32) void {
        qtc.QBoxLayout_InsertStretch2(@ptrCast(self), @intCast(index), @intCast(stretch));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertWidget)
    ///
    /// ``` self: QtC.QVBoxLayout, index: i32, widget: QtC.QWidget, stretch: i32 ```
    pub fn InsertWidget3(self: ?*anyopaque, index: i32, widget: ?*anyopaque, stretch: i32) void {
        qtc.QBoxLayout_InsertWidget3(@ptrCast(self), @intCast(index), @ptrCast(widget), @intCast(stretch));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertWidget)
    ///
    /// ``` self: QtC.QVBoxLayout, index: i32, widget: QtC.QWidget, stretch: i32, alignment: i32 ```
    pub fn InsertWidget4(self: ?*anyopaque, index: i32, widget: ?*anyopaque, stretch: i32, alignment: i64) void {
        qtc.QBoxLayout_InsertWidget4(@ptrCast(self), @intCast(index), @ptrCast(widget), @intCast(stretch), @intCast(alignment));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertLayout)
    ///
    /// ``` self: QtC.QVBoxLayout, index: i32, layout: QtC.QLayout, stretch: i32 ```
    pub fn InsertLayout3(self: ?*anyopaque, index: i32, layout: ?*anyopaque, stretch: i32) void {
        qtc.QBoxLayout_InsertLayout3(@ptrCast(self), @intCast(index), @ptrCast(layout), @intCast(stretch));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
    ///
    /// ``` self: QtC.QVBoxLayout, left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn SetContentsMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QLayout_SetContentsMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
    ///
    /// ``` self: QtC.QVBoxLayout, margins: QtC.QMargins ```
    pub fn SetContentsMargins2(self: ?*anyopaque, margins: ?*anyopaque) void {
        qtc.QLayout_SetContentsMargins2(@ptrCast(self), @ptrCast(margins));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#unsetContentsMargins)
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn UnsetContentsMargins(self: ?*anyopaque) void {
        qtc.QLayout_UnsetContentsMargins(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#getContentsMargins)
    ///
    /// ``` self: QtC.QVBoxLayout, left: ?*i32, top: ?*i32, right: ?*i32, bottom: ?*i32 ```
    pub fn GetContentsMargins(self: ?*anyopaque, left: ?*anyopaque, top: ?*anyopaque, right: ?*anyopaque, bottom: ?*anyopaque) void {
        qtc.QLayout_GetContentsMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#contentsMargins)
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn ContentsMargins(self: ?*anyopaque) QtC.QMargins {
        return qtc.QLayout_ContentsMargins(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#contentsRect)
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn ContentsRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QLayout_ContentsRect(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
    ///
    /// ``` self: QtC.QVBoxLayout, w: QtC.QWidget, alignment: i32 ```
    pub fn SetAlignment(self: ?*anyopaque, w: ?*anyopaque, alignment: i64) bool {
        return qtc.QLayout_SetAlignment(@ptrCast(self), @ptrCast(w), @intCast(alignment));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
    ///
    /// ``` self: QtC.QVBoxLayout, l: QtC.QLayout, alignment: i32 ```
    pub fn SetAlignment2(self: ?*anyopaque, l: ?*anyopaque, alignment: i64) bool {
        return qtc.QLayout_SetAlignment2(@ptrCast(self), @ptrCast(l), @intCast(alignment));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setSizeConstraint)
    ///
    /// ``` self: QtC.QVBoxLayout, sizeConstraint: qlayout_enums.SizeConstraint ```
    pub fn SetSizeConstraint(self: ?*anyopaque, sizeConstraint: i64) void {
        qtc.QLayout_SetSizeConstraint(@ptrCast(self), @intCast(sizeConstraint));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#sizeConstraint)
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn SizeConstraint(self: ?*anyopaque) i64 {
        return qtc.QLayout_SizeConstraint(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setMenuBar)
    ///
    /// ``` self: QtC.QVBoxLayout, w: QtC.QWidget ```
    pub fn SetMenuBar(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QLayout_SetMenuBar(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#menuBar)
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn MenuBar(self: ?*anyopaque) QtC.QWidget {
        return qtc.QLayout_MenuBar(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#parentWidget)
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn ParentWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QLayout_ParentWidget(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#activate)
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn Activate(self: ?*anyopaque) bool {
        return qtc.QLayout_Activate(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#update)
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn Update(self: ?*anyopaque) void {
        qtc.QLayout_Update(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#removeWidget)
    ///
    /// ``` self: QtC.QVBoxLayout, w: QtC.QWidget ```
    pub fn RemoveWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QLayout_RemoveWidget(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#removeItem)
    ///
    /// ``` self: QtC.QVBoxLayout, param1: QtC.QLayoutItem ```
    pub fn RemoveItem(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLayout_RemoveItem(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// ``` self: QtC.QVBoxLayout, param1: QtC.QLayoutItem ```
    pub fn IndexOf2(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QLayout_IndexOf2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QLayout, slot: fn (self: QtC.QLayout, param1: QtC.QLayoutItem) callconv(.c) i32 ```
    pub fn OnIndexOf2(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QLayout_OnIndexOf2(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QVBoxLayout, param1: QtC.QLayoutItem ```
    pub fn QBaseIndexOf2(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QLayout_QBaseIndexOf2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMinimumHeightForWidth)
    ///
    /// ``` self: QtC.QVBoxLayout, w: i32 ```
    pub fn TotalMinimumHeightForWidth(self: ?*anyopaque, w: i32) i32 {
        return qtc.QLayout_TotalMinimumHeightForWidth(@ptrCast(self), @intCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalHeightForWidth)
    ///
    /// ``` self: QtC.QVBoxLayout, w: i32 ```
    pub fn TotalHeightForWidth(self: ?*anyopaque, w: i32) i32 {
        return qtc.QLayout_TotalHeightForWidth(@ptrCast(self), @intCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMinimumSize)
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn TotalMinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QLayout_TotalMinimumSize(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMaximumSize)
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn TotalMaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QLayout_TotalMaximumSize(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalSizeHint)
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn TotalSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QLayout_TotalSizeHint(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setEnabled)
    ///
    /// ``` self: QtC.QVBoxLayout, enabled: bool ```
    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QLayout_SetEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEnabled)
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return qtc.QLayout_IsEnabled(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#closestAcceptableSize)
    ///
    /// ``` w: QtC.QWidget, s: QtC.QSize ```
    pub fn ClosestAcceptableSize(w: ?*anyopaque, s: ?*anyopaque) QtC.QSize {
        return qtc.QLayout_ClosestAcceptableSize(@ptrCast(w), @ptrCast(s));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QVBoxLayout, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qvboxlayout.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QVBoxLayout, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QVBoxLayout, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QVBoxLayout, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QVBoxLayout, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QVBoxLayout, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QVBoxLayout, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i64) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QVBoxLayout, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.struct_libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qvboxlayout.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QVBoxLayout, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QVBoxLayout, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QVBoxLayout, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QVBoxLayout, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QVBoxLayout, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QVBoxLayout, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QVBoxLayout, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QVBoxLayout, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QVBoxLayout, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QVBoxLayout, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QVBoxLayout, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QVBoxLayout, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn Alignment(self: ?*anyopaque) i64 {
        return qtc.QLayoutItem_Alignment(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, param1: QtC.QLayoutItem ```
    pub fn AddItem(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QVBoxLayout_AddItem(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addItem)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, param1: QtC.QLayoutItem ```
    pub fn QBaseAddItem(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QVBoxLayout_QBaseAddItem(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, slot: fn (self: QtC.QVBoxLayout, param1: QtC.QLayoutItem) callconv(.c) void ```
    pub fn OnAddItem(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QVBoxLayout_OnAddItem(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#spacing)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn Spacing(self: ?*anyopaque) i32 {
        return qtc.QVBoxLayout_Spacing(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#spacing)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn QBaseSpacing(self: ?*anyopaque) i32 {
        return qtc.QVBoxLayout_QBaseSpacing(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#spacing)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, slot: fn () callconv(.c) i32 ```
    pub fn OnSpacing(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QVBoxLayout_OnSpacing(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setSpacing)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, spacing: i32 ```
    pub fn SetSpacing(self: ?*anyopaque, spacing: i32) void {
        qtc.QVBoxLayout_SetSpacing(@ptrCast(self), @intCast(spacing));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setSpacing)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, spacing: i32 ```
    pub fn QBaseSetSpacing(self: ?*anyopaque, spacing: i32) void {
        qtc.QVBoxLayout_QBaseSetSpacing(@ptrCast(self), @intCast(spacing));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setSpacing)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, slot: fn (self: QtC.QVBoxLayout, spacing: i32) callconv(.c) void ```
    pub fn OnSetSpacing(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QVBoxLayout_OnSetSpacing(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn SizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QVBoxLayout_SizeHint(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#sizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn QBaseSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QVBoxLayout_QBaseSizeHint(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnSizeHint(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.QVBoxLayout_OnSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#minimumSize)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn MinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QVBoxLayout_MinimumSize(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#minimumSize)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn QBaseMinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QVBoxLayout_QBaseMinimumSize(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#minimumSize)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnMinimumSize(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.QVBoxLayout_OnMinimumSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#maximumSize)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn MaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QVBoxLayout_MaximumSize(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#maximumSize)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn QBaseMaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QVBoxLayout_QBaseMaximumSize(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#maximumSize)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnMaximumSize(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.QVBoxLayout_OnMaximumSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn HasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.QVBoxLayout_HasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn QBaseHasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.QVBoxLayout_QBaseHasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, slot: fn () callconv(.c) bool ```
    pub fn OnHasHeightForWidth(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QVBoxLayout_OnHasHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, param1: i32 ```
    pub fn HeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QVBoxLayout_HeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#heightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, param1: i32 ```
    pub fn QBaseHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QVBoxLayout_QBaseHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, slot: fn (self: QtC.QVBoxLayout, param1: i32) callconv(.c) i32 ```
    pub fn OnHeightForWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QVBoxLayout_OnHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#minimumHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, param1: i32 ```
    pub fn MinimumHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QVBoxLayout_MinimumHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#minimumHeightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, param1: i32 ```
    pub fn QBaseMinimumHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QVBoxLayout_QBaseMinimumHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#minimumHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, slot: fn (self: QtC.QVBoxLayout, param1: i32) callconv(.c) i32 ```
    pub fn OnMinimumHeightForWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QVBoxLayout_OnMinimumHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#expandingDirections)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn ExpandingDirections(self: ?*anyopaque) i64 {
        return qtc.QVBoxLayout_ExpandingDirections(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#expandingDirections)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn QBaseExpandingDirections(self: ?*anyopaque) i64 {
        return qtc.QVBoxLayout_QBaseExpandingDirections(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#expandingDirections)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, slot: fn () callconv(.c) i64 ```
    pub fn OnExpandingDirections(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.QVBoxLayout_OnExpandingDirections(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#invalidate)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn Invalidate(self: ?*anyopaque) void {
        qtc.QVBoxLayout_Invalidate(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#invalidate)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn QBaseInvalidate(self: ?*anyopaque) void {
        qtc.QVBoxLayout_QBaseInvalidate(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#invalidate)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, slot: fn () callconv(.c) void ```
    pub fn OnInvalidate(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QVBoxLayout_OnInvalidate(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#itemAt)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, param1: i32 ```
    pub fn ItemAt(self: ?*anyopaque, param1: i32) QtC.QLayoutItem {
        return qtc.QVBoxLayout_ItemAt(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#itemAt)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, param1: i32 ```
    pub fn QBaseItemAt(self: ?*anyopaque, param1: i32) QtC.QLayoutItem {
        return qtc.QVBoxLayout_QBaseItemAt(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#itemAt)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, slot: fn (self: QtC.QVBoxLayout, param1: i32) callconv(.c) QtC.QLayoutItem ```
    pub fn OnItemAt(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) QtC.QLayoutItem) void {
        qtc.QVBoxLayout_OnItemAt(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#takeAt)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, param1: i32 ```
    pub fn TakeAt(self: ?*anyopaque, param1: i32) QtC.QLayoutItem {
        return qtc.QVBoxLayout_TakeAt(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#takeAt)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, param1: i32 ```
    pub fn QBaseTakeAt(self: ?*anyopaque, param1: i32) QtC.QLayoutItem {
        return qtc.QVBoxLayout_QBaseTakeAt(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#takeAt)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, slot: fn (self: QtC.QVBoxLayout, param1: i32) callconv(.c) QtC.QLayoutItem ```
    pub fn OnTakeAt(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) QtC.QLayoutItem) void {
        qtc.QVBoxLayout_OnTakeAt(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#count)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn Count(self: ?*anyopaque) i32 {
        return qtc.QVBoxLayout_Count(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#count)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn QBaseCount(self: ?*anyopaque) i32 {
        return qtc.QVBoxLayout_QBaseCount(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#count)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, slot: fn () callconv(.c) i32 ```
    pub fn OnCount(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QVBoxLayout_OnCount(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setGeometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, geometry: QtC.QRect ```
    pub fn SetGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QVBoxLayout_SetGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setGeometry)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, geometry: QtC.QRect ```
    pub fn QBaseSetGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QVBoxLayout_QBaseSetGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setGeometry)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, slot: fn (self: QtC.QVBoxLayout, geometry: QtC.QRect) callconv(.c) void ```
    pub fn OnSetGeometry(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QVBoxLayout_OnSetGeometry(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#geometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn Geometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QVBoxLayout_Geometry(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#geometry)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn QBaseGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QVBoxLayout_QBaseGeometry(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#geometry)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, slot: fn () callconv(.c) QtC.QRect ```
    pub fn OnGeometry(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QRect) void {
        qtc.QVBoxLayout_OnGeometry(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, param1: QtC.QWidget ```
    pub fn IndexOf(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QVBoxLayout_IndexOf(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, param1: QtC.QWidget ```
    pub fn QBaseIndexOf(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QVBoxLayout_QBaseIndexOf(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, slot: fn (self: QtC.QVBoxLayout, param1: QtC.QWidget) callconv(.c) i32 ```
    pub fn OnIndexOf(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QVBoxLayout_OnIndexOf(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QVBoxLayout_IsEmpty(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn QBaseIsEmpty(self: ?*anyopaque) bool {
        return qtc.QVBoxLayout_QBaseIsEmpty(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, slot: fn () callconv(.c) bool ```
    pub fn OnIsEmpty(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QVBoxLayout_OnIsEmpty(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn ControlTypes(self: ?*anyopaque) i64 {
        return qtc.QVBoxLayout_ControlTypes(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn QBaseControlTypes(self: ?*anyopaque) i64 {
        return qtc.QVBoxLayout_QBaseControlTypes(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, slot: fn () callconv(.c) i64 ```
    pub fn OnControlTypes(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.QVBoxLayout_OnControlTypes(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, from: QtC.QWidget, to: QtC.QWidget, options: i32 ```
    pub fn ReplaceWidget(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque, options: i64) QtC.QLayoutItem {
        return qtc.QVBoxLayout_ReplaceWidget(@ptrCast(self), @ptrCast(from), @ptrCast(to), @intCast(options));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, from: QtC.QWidget, to: QtC.QWidget, options: i32 ```
    pub fn QBaseReplaceWidget(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque, options: i64) QtC.QLayoutItem {
        return qtc.QVBoxLayout_QBaseReplaceWidget(@ptrCast(self), @ptrCast(from), @ptrCast(to), @intCast(options));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, slot: fn (self: QtC.QVBoxLayout, from: QtC.QWidget, to: QtC.QWidget, options: i32) callconv(.c) QtC.QLayoutItem ```
    pub fn OnReplaceWidget(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i64) callconv(.c) QtC.QLayoutItem) void {
        qtc.QVBoxLayout_OnReplaceWidget(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#layout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn Layout(self: ?*anyopaque) QtC.QLayout {
        return qtc.QVBoxLayout_Layout(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#layout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn QBaseLayout(self: ?*anyopaque) QtC.QLayout {
        return qtc.QVBoxLayout_QBaseLayout(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#layout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, slot: fn () callconv(.c) QtC.QLayout ```
    pub fn OnLayout(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QLayout) void {
        qtc.QVBoxLayout_OnLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, e: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QVBoxLayout_ChildEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, e: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QVBoxLayout_QBaseChildEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, slot: fn (self: QtC.QVBoxLayout, e: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QVBoxLayout_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QVBoxLayout_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QVBoxLayout_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, slot: fn (self: QtC.QVBoxLayout, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QVBoxLayout_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QVBoxLayout_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QVBoxLayout_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, slot: fn (self: QtC.QVBoxLayout, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QVBoxLayout_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QVBoxLayout_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QVBoxLayout_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, slot: fn (self: QtC.QVBoxLayout, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QVBoxLayout_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QVBoxLayout_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QVBoxLayout_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, slot: fn (self: QtC.QVBoxLayout, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QVBoxLayout_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QVBoxLayout_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QVBoxLayout_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, slot: fn (self: QtC.QVBoxLayout, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QVBoxLayout_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QVBoxLayout_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QVBoxLayout_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, slot: fn (self: QtC.QVBoxLayout, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QVBoxLayout_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn Widget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QVBoxLayout_Widget(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn QBaseWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QVBoxLayout_QBaseWidget(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, slot: fn () callconv(.c) QtC.QWidget ```
    pub fn OnWidget(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QWidget) void {
        qtc.QVBoxLayout_OnWidget(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn SpacerItem(self: ?*anyopaque) QtC.QSpacerItem {
        return qtc.QVBoxLayout_SpacerItem(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn QBaseSpacerItem(self: ?*anyopaque) QtC.QSpacerItem {
        return qtc.QVBoxLayout_QBaseSpacerItem(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, slot: fn () callconv(.c) QtC.QSpacerItem ```
    pub fn OnSpacerItem(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSpacerItem) void {
        qtc.QVBoxLayout_OnSpacerItem(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, param1: QtC.QEvent ```
    pub fn WidgetEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QVBoxLayout_WidgetEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, param1: QtC.QEvent ```
    pub fn QBaseWidgetEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QVBoxLayout_QBaseWidgetEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, slot: fn (self: QtC.QVBoxLayout, param1: QtC.QEvent) callconv(.c) void ```
    pub fn OnWidgetEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QVBoxLayout_OnWidgetEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, l: QtC.QLayout ```
    pub fn AddChildLayout(self: ?*anyopaque, l: ?*anyopaque) void {
        qtc.QVBoxLayout_AddChildLayout(@ptrCast(self), @ptrCast(l));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, l: QtC.QLayout ```
    pub fn QBaseAddChildLayout(self: ?*anyopaque, l: ?*anyopaque) void {
        qtc.QVBoxLayout_QBaseAddChildLayout(@ptrCast(self), @ptrCast(l));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, slot: fn (self: QtC.QVBoxLayout, l: QtC.QLayout) callconv(.c) void ```
    pub fn OnAddChildLayout(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QVBoxLayout_OnAddChildLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, w: QtC.QWidget ```
    pub fn AddChildWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QVBoxLayout_AddChildWidget(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, w: QtC.QWidget ```
    pub fn QBaseAddChildWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QVBoxLayout_QBaseAddChildWidget(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, slot: fn (self: QtC.QVBoxLayout, w: QtC.QWidget) callconv(.c) void ```
    pub fn OnAddChildWidget(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QVBoxLayout_OnAddChildWidget(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, layout: QtC.QLayout ```
    pub fn AdoptLayout(self: ?*anyopaque, layout: ?*anyopaque) bool {
        return qtc.QVBoxLayout_AdoptLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, layout: QtC.QLayout ```
    pub fn QBaseAdoptLayout(self: ?*anyopaque, layout: ?*anyopaque) bool {
        return qtc.QVBoxLayout_QBaseAdoptLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, slot: fn (self: QtC.QVBoxLayout, layout: QtC.QLayout) callconv(.c) bool ```
    pub fn OnAdoptLayout(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QVBoxLayout_OnAdoptLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, param1: QtC.QRect ```
    pub fn AlignmentRect(self: ?*anyopaque, param1: ?*anyopaque) QtC.QRect {
        return qtc.QVBoxLayout_AlignmentRect(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, param1: QtC.QRect ```
    pub fn QBaseAlignmentRect(self: ?*anyopaque, param1: ?*anyopaque) QtC.QRect {
        return qtc.QVBoxLayout_QBaseAlignmentRect(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, slot: fn (self: QtC.QVBoxLayout, param1: QtC.QRect) callconv(.c) QtC.QRect ```
    pub fn OnAlignmentRect(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QVBoxLayout_OnAlignmentRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QVBoxLayout_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QVBoxLayout_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QVBoxLayout_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QVBoxLayout_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QVBoxLayout_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QVBoxLayout_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QVBoxLayout_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QVBoxLayout_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, slot: fn (self: QtC.QVBoxLayout, signal: []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        qtc.QVBoxLayout_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QVBoxLayout_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QVBoxLayout_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QVBoxLayout, slot: fn (self: QtC.QVBoxLayout, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QVBoxLayout_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QVBoxLayout, slot: fn (self: QtC.QObject, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qvboxlayout.html#dtor.QVBoxLayout)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QVBoxLayout ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QVBoxLayout_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qboxlayout.html#types
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
