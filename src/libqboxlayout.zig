const C = @import("qt6c");
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
    pub fn New(param1: i64) ?*C.QBoxLayout {
        return C.QBoxLayout_new(@intCast(param1));
    }

    /// New2 constructs a new QBoxLayout object.
    ///
    /// ``` param1: qboxlayout_enums.Direction, parent: ?*C.QWidget ```
    pub fn New2(param1: i64, parent: ?*anyopaque) ?*C.QBoxLayout {
        return C.QBoxLayout_new2(@intCast(param1), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QBoxLayout_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QBoxLayout, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QBoxLayout_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QBoxLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QBoxLayout_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QBoxLayout, slot: fn (?*C.QBoxLayout, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QBoxLayout_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QBoxLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QBoxLayout_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QBoxLayout_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#direction)
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn Direction(self: ?*anyopaque) i64 {
        return C.QBoxLayout_Direction(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setDirection)
    ///
    /// ``` self: ?*C.QBoxLayout, direction: qboxlayout_enums.Direction ```
    pub fn SetDirection(self: ?*anyopaque, direction: i64) void {
        C.QBoxLayout_SetDirection(@ptrCast(self), @intCast(direction));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addSpacing)
    ///
    /// ``` self: ?*C.QBoxLayout, size: i32 ```
    pub fn AddSpacing(self: ?*anyopaque, size: i32) void {
        C.QBoxLayout_AddSpacing(@ptrCast(self), @intCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addStretch)
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn AddStretch(self: ?*anyopaque) void {
        C.QBoxLayout_AddStretch(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addSpacerItem)
    ///
    /// ``` self: ?*C.QBoxLayout, spacerItem: ?*C.QSpacerItem ```
    pub fn AddSpacerItem(self: ?*anyopaque, spacerItem: ?*anyopaque) void {
        C.QBoxLayout_AddSpacerItem(@ptrCast(self), @ptrCast(spacerItem));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addWidget)
    ///
    /// ``` self: ?*C.QBoxLayout, param1: ?*C.QWidget ```
    pub fn AddWidget(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QBoxLayout_AddWidget(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addLayout)
    ///
    /// ``` self: ?*C.QBoxLayout, layout: ?*C.QLayout ```
    pub fn AddLayout(self: ?*anyopaque, layout: ?*anyopaque) void {
        C.QBoxLayout_AddLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addStrut)
    ///
    /// ``` self: ?*C.QBoxLayout, param1: i32 ```
    pub fn AddStrut(self: ?*anyopaque, param1: i32) void {
        C.QBoxLayout_AddStrut(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addItem)
    ///
    /// ``` self: ?*C.QBoxLayout, param1: ?*C.QLayoutItem ```
    pub fn AddItem(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QBoxLayout_AddItem(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QBoxLayout, slot: fn (?*C.QBoxLayout, ?*C.QLayoutItem) callconv(.c) void ```
    pub fn OnAddItem(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QBoxLayout_OnAddItem(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QBoxLayout, param1: ?*C.QLayoutItem ```
    pub fn QBaseAddItem(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QBoxLayout_QBaseAddItem(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertSpacing)
    ///
    /// ``` self: ?*C.QBoxLayout, index: i32, size: i32 ```
    pub fn InsertSpacing(self: ?*anyopaque, index: i32, size: i32) void {
        C.QBoxLayout_InsertSpacing(@ptrCast(self), @intCast(index), @intCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertStretch)
    ///
    /// ``` self: ?*C.QBoxLayout, index: i32 ```
    pub fn InsertStretch(self: ?*anyopaque, index: i32) void {
        C.QBoxLayout_InsertStretch(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertSpacerItem)
    ///
    /// ``` self: ?*C.QBoxLayout, index: i32, spacerItem: ?*C.QSpacerItem ```
    pub fn InsertSpacerItem(self: ?*anyopaque, index: i32, spacerItem: ?*anyopaque) void {
        C.QBoxLayout_InsertSpacerItem(@ptrCast(self), @intCast(index), @ptrCast(spacerItem));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertWidget)
    ///
    /// ``` self: ?*C.QBoxLayout, index: i32, widget: ?*C.QWidget ```
    pub fn InsertWidget(self: ?*anyopaque, index: i32, widget: ?*anyopaque) void {
        C.QBoxLayout_InsertWidget(@ptrCast(self), @intCast(index), @ptrCast(widget));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertLayout)
    ///
    /// ``` self: ?*C.QBoxLayout, index: i32, layout: ?*C.QLayout ```
    pub fn InsertLayout(self: ?*anyopaque, index: i32, layout: ?*anyopaque) void {
        C.QBoxLayout_InsertLayout(@ptrCast(self), @intCast(index), @ptrCast(layout));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertItem)
    ///
    /// ``` self: ?*C.QBoxLayout, index: i32, param2: ?*C.QLayoutItem ```
    pub fn InsertItem(self: ?*anyopaque, index: i32, param2: ?*anyopaque) void {
        C.QBoxLayout_InsertItem(@ptrCast(self), @intCast(index), @ptrCast(param2));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#spacing)
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn Spacing(self: ?*anyopaque) i32 {
        return C.QBoxLayout_Spacing(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QBoxLayout, slot: fn () callconv(.c) i32 ```
    pub fn OnSpacing(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QBoxLayout_OnSpacing(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn QBaseSpacing(self: ?*anyopaque) i32 {
        return C.QBoxLayout_QBaseSpacing(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setSpacing)
    ///
    /// ``` self: ?*C.QBoxLayout, spacing: i32 ```
    pub fn SetSpacing(self: ?*anyopaque, spacing: i32) void {
        C.QBoxLayout_SetSpacing(@ptrCast(self), @intCast(spacing));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QBoxLayout, slot: fn (?*C.QBoxLayout, i32) callconv(.c) void ```
    pub fn OnSetSpacing(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QBoxLayout_OnSetSpacing(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QBoxLayout, spacing: i32 ```
    pub fn QBaseSetSpacing(self: ?*anyopaque, spacing: i32) void {
        C.QBoxLayout_QBaseSetSpacing(@ptrCast(self), @intCast(spacing));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setStretchFactor)
    ///
    /// ``` self: ?*C.QBoxLayout, w: ?*C.QWidget, stretch: i32 ```
    pub fn SetStretchFactor(self: ?*anyopaque, w: ?*anyopaque, stretch: i32) bool {
        return C.QBoxLayout_SetStretchFactor(@ptrCast(self), @ptrCast(w), @intCast(stretch));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setStretchFactor)
    ///
    /// ``` self: ?*C.QBoxLayout, l: ?*C.QLayout, stretch: i32 ```
    pub fn SetStretchFactor2(self: ?*anyopaque, l: ?*anyopaque, stretch: i32) bool {
        return C.QBoxLayout_SetStretchFactor2(@ptrCast(self), @ptrCast(l), @intCast(stretch));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setStretch)
    ///
    /// ``` self: ?*C.QBoxLayout, index: i32, stretch: i32 ```
    pub fn SetStretch(self: ?*anyopaque, index: i32, stretch: i32) void {
        C.QBoxLayout_SetStretch(@ptrCast(self), @intCast(index), @intCast(stretch));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#stretch)
    ///
    /// ``` self: ?*C.QBoxLayout, index: i32 ```
    pub fn Stretch(self: ?*anyopaque, index: i32) i32 {
        return C.QBoxLayout_Stretch(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#sizeHint)
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn SizeHint(self: ?*anyopaque) ?*C.QSize {
        return C.QBoxLayout_SizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QBoxLayout, slot: fn () callconv(.c) ?*C.QSize ```
    pub fn OnSizeHint(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QSize) void {
        C.QBoxLayout_OnSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn QBaseSizeHint(self: ?*anyopaque) ?*C.QSize {
        return C.QBoxLayout_QBaseSizeHint(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#minimumSize)
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn MinimumSize(self: ?*anyopaque) ?*C.QSize {
        return C.QBoxLayout_MinimumSize(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QBoxLayout, slot: fn () callconv(.c) ?*C.QSize ```
    pub fn OnMinimumSize(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QSize) void {
        C.QBoxLayout_OnMinimumSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn QBaseMinimumSize(self: ?*anyopaque) ?*C.QSize {
        return C.QBoxLayout_QBaseMinimumSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#maximumSize)
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn MaximumSize(self: ?*anyopaque) ?*C.QSize {
        return C.QBoxLayout_MaximumSize(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QBoxLayout, slot: fn () callconv(.c) ?*C.QSize ```
    pub fn OnMaximumSize(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QSize) void {
        C.QBoxLayout_OnMaximumSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn QBaseMaximumSize(self: ?*anyopaque) ?*C.QSize {
        return C.QBoxLayout_QBaseMaximumSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#hasHeightForWidth)
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn HasHeightForWidth(self: ?*anyopaque) bool {
        return C.QBoxLayout_HasHeightForWidth(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QBoxLayout, slot: fn () callconv(.c) bool ```
    pub fn OnHasHeightForWidth(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QBoxLayout_OnHasHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn QBaseHasHeightForWidth(self: ?*anyopaque) bool {
        return C.QBoxLayout_QBaseHasHeightForWidth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#heightForWidth)
    ///
    /// ``` self: ?*C.QBoxLayout, param1: i32 ```
    pub fn HeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return C.QBoxLayout_HeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QBoxLayout, slot: fn (?*C.QBoxLayout, i32) callconv(.c) i32 ```
    pub fn OnHeightForWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        C.QBoxLayout_OnHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QBoxLayout, param1: i32 ```
    pub fn QBaseHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return C.QBoxLayout_QBaseHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#minimumHeightForWidth)
    ///
    /// ``` self: ?*C.QBoxLayout, param1: i32 ```
    pub fn MinimumHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return C.QBoxLayout_MinimumHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QBoxLayout, slot: fn (?*C.QBoxLayout, i32) callconv(.c) i32 ```
    pub fn OnMinimumHeightForWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        C.QBoxLayout_OnMinimumHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QBoxLayout, param1: i32 ```
    pub fn QBaseMinimumHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return C.QBoxLayout_QBaseMinimumHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#expandingDirections)
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn ExpandingDirections(self: ?*anyopaque) i64 {
        return C.QBoxLayout_ExpandingDirections(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QBoxLayout, slot: fn () callconv(.c) i64 ```
    pub fn OnExpandingDirections(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        C.QBoxLayout_OnExpandingDirections(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn QBaseExpandingDirections(self: ?*anyopaque) i64 {
        return C.QBoxLayout_QBaseExpandingDirections(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#invalidate)
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn Invalidate(self: ?*anyopaque) void {
        C.QBoxLayout_Invalidate(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QBoxLayout, slot: fn () callconv(.c) void ```
    pub fn OnInvalidate(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QBoxLayout_OnInvalidate(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn QBaseInvalidate(self: ?*anyopaque) void {
        C.QBoxLayout_QBaseInvalidate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#itemAt)
    ///
    /// ``` self: ?*C.QBoxLayout, param1: i32 ```
    pub fn ItemAt(self: ?*anyopaque, param1: i32) ?*C.QLayoutItem {
        return C.QBoxLayout_ItemAt(@ptrCast(self), @intCast(param1));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QBoxLayout, slot: fn (?*C.QBoxLayout, i32) callconv(.c) ?*C.QLayoutItem ```
    pub fn OnItemAt(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) ?*C.QLayoutItem) void {
        C.QBoxLayout_OnItemAt(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QBoxLayout, param1: i32 ```
    pub fn QBaseItemAt(self: ?*anyopaque, param1: i32) ?*C.QLayoutItem {
        return C.QBoxLayout_QBaseItemAt(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#takeAt)
    ///
    /// ``` self: ?*C.QBoxLayout, param1: i32 ```
    pub fn TakeAt(self: ?*anyopaque, param1: i32) ?*C.QLayoutItem {
        return C.QBoxLayout_TakeAt(@ptrCast(self), @intCast(param1));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QBoxLayout, slot: fn (?*C.QBoxLayout, i32) callconv(.c) ?*C.QLayoutItem ```
    pub fn OnTakeAt(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) ?*C.QLayoutItem) void {
        C.QBoxLayout_OnTakeAt(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QBoxLayout, param1: i32 ```
    pub fn QBaseTakeAt(self: ?*anyopaque, param1: i32) ?*C.QLayoutItem {
        return C.QBoxLayout_QBaseTakeAt(@ptrCast(self), @intCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#count)
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn Count(self: ?*anyopaque) i32 {
        return C.QBoxLayout_Count(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QBoxLayout, slot: fn () callconv(.c) i32 ```
    pub fn OnCount(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QBoxLayout_OnCount(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn QBaseCount(self: ?*anyopaque) i32 {
        return C.QBoxLayout_QBaseCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setGeometry)
    ///
    /// ``` self: ?*C.QBoxLayout, geometry: ?*C.QRect ```
    pub fn SetGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        C.QBoxLayout_SetGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QBoxLayout, slot: fn (?*C.QBoxLayout, ?*C.QRect) callconv(.c) void ```
    pub fn OnSetGeometry(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QBoxLayout_OnSetGeometry(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QBoxLayout, geometry: ?*C.QRect ```
    pub fn QBaseSetGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        C.QBoxLayout_QBaseSetGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QBoxLayout_Tr2(s_Cstring, c_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QBoxLayout_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addStretch)
    ///
    /// ``` self: ?*C.QBoxLayout, stretch: i32 ```
    pub fn AddStretch1(self: ?*anyopaque, stretch: i32) void {
        C.QBoxLayout_AddStretch1(@ptrCast(self), @intCast(stretch));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addWidget)
    ///
    /// ``` self: ?*C.QBoxLayout, param1: ?*C.QWidget, stretch: i32 ```
    pub fn AddWidget2(self: ?*anyopaque, param1: ?*anyopaque, stretch: i32) void {
        C.QBoxLayout_AddWidget2(@ptrCast(self), @ptrCast(param1), @intCast(stretch));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addWidget)
    ///
    /// ``` self: ?*C.QBoxLayout, param1: ?*C.QWidget, stretch: i32, alignment: i32 ```
    pub fn AddWidget3(self: ?*anyopaque, param1: ?*anyopaque, stretch: i32, alignment: i64) void {
        C.QBoxLayout_AddWidget3(@ptrCast(self), @ptrCast(param1), @intCast(stretch), @intCast(alignment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addLayout)
    ///
    /// ``` self: ?*C.QBoxLayout, layout: ?*C.QLayout, stretch: i32 ```
    pub fn AddLayout2(self: ?*anyopaque, layout: ?*anyopaque, stretch: i32) void {
        C.QBoxLayout_AddLayout2(@ptrCast(self), @ptrCast(layout), @intCast(stretch));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertStretch)
    ///
    /// ``` self: ?*C.QBoxLayout, index: i32, stretch: i32 ```
    pub fn InsertStretch2(self: ?*anyopaque, index: i32, stretch: i32) void {
        C.QBoxLayout_InsertStretch2(@ptrCast(self), @intCast(index), @intCast(stretch));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertWidget)
    ///
    /// ``` self: ?*C.QBoxLayout, index: i32, widget: ?*C.QWidget, stretch: i32 ```
    pub fn InsertWidget3(self: ?*anyopaque, index: i32, widget: ?*anyopaque, stretch: i32) void {
        C.QBoxLayout_InsertWidget3(@ptrCast(self), @intCast(index), @ptrCast(widget), @intCast(stretch));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertWidget)
    ///
    /// ``` self: ?*C.QBoxLayout, index: i32, widget: ?*C.QWidget, stretch: i32, alignment: i32 ```
    pub fn InsertWidget4(self: ?*anyopaque, index: i32, widget: ?*anyopaque, stretch: i32, alignment: i64) void {
        C.QBoxLayout_InsertWidget4(@ptrCast(self), @intCast(index), @ptrCast(widget), @intCast(stretch), @intCast(alignment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertLayout)
    ///
    /// ``` self: ?*C.QBoxLayout, index: i32, layout: ?*C.QLayout, stretch: i32 ```
    pub fn InsertLayout3(self: ?*anyopaque, index: i32, layout: ?*anyopaque, stretch: i32) void {
        C.QBoxLayout_InsertLayout3(@ptrCast(self), @intCast(index), @ptrCast(layout), @intCast(stretch));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
    ///
    /// ``` self: ?*C.QBoxLayout, left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn SetContentsMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        C.QLayout_SetContentsMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
    ///
    /// ``` self: ?*C.QBoxLayout, margins: ?*C.QMargins ```
    pub fn SetContentsMarginsWithMargins(self: ?*anyopaque, margins: ?*anyopaque) void {
        C.QLayout_SetContentsMarginsWithMargins(@ptrCast(self), @ptrCast(margins));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#unsetContentsMargins)
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn UnsetContentsMargins(self: ?*anyopaque) void {
        C.QLayout_UnsetContentsMargins(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#getContentsMargins)
    ///
    /// ``` self: ?*C.QBoxLayout, left: ?*i32, top: ?*i32, right: ?*i32, bottom: ?*i32 ```
    pub fn GetContentsMargins(self: ?*anyopaque, left: ?*anyopaque, top: ?*anyopaque, right: ?*anyopaque, bottom: ?*anyopaque) void {
        C.QLayout_GetContentsMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#contentsMargins)
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn ContentsMargins(self: ?*anyopaque) ?*C.QMargins {
        return C.QLayout_ContentsMargins(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#contentsRect)
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn ContentsRect(self: ?*anyopaque) ?*C.QRect {
        return C.QLayout_ContentsRect(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
    ///
    /// ``` self: ?*C.QBoxLayout, w: ?*C.QWidget, alignment: i32 ```
    pub fn SetAlignment(self: ?*anyopaque, w: ?*anyopaque, alignment: i64) bool {
        return C.QLayout_SetAlignment(@ptrCast(self), @ptrCast(w), @intCast(alignment));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
    ///
    /// ``` self: ?*C.QBoxLayout, l: ?*C.QLayout, alignment: i32 ```
    pub fn SetAlignment2(self: ?*anyopaque, l: ?*anyopaque, alignment: i64) bool {
        return C.QLayout_SetAlignment2(@ptrCast(self), @ptrCast(l), @intCast(alignment));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setSizeConstraint)
    ///
    /// ``` self: ?*C.QBoxLayout, sizeConstraint: qlayout_enums.SizeConstraint ```
    pub fn SetSizeConstraint(self: ?*anyopaque, sizeConstraint: i64) void {
        C.QLayout_SetSizeConstraint(@ptrCast(self), @intCast(sizeConstraint));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#sizeConstraint)
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn SizeConstraint(self: ?*anyopaque) i64 {
        return C.QLayout_SizeConstraint(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setMenuBar)
    ///
    /// ``` self: ?*C.QBoxLayout, w: ?*C.QWidget ```
    pub fn SetMenuBar(self: ?*anyopaque, w: ?*anyopaque) void {
        C.QLayout_SetMenuBar(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#menuBar)
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn MenuBar(self: ?*anyopaque) ?*C.QWidget {
        return C.QLayout_MenuBar(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#parentWidget)
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn ParentWidget(self: ?*anyopaque) ?*C.QWidget {
        return C.QLayout_ParentWidget(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#activate)
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn Activate(self: ?*anyopaque) bool {
        return C.QLayout_Activate(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#update)
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn Update(self: ?*anyopaque) void {
        C.QLayout_Update(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#removeWidget)
    ///
    /// ``` self: ?*C.QBoxLayout, w: ?*C.QWidget ```
    pub fn RemoveWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        C.QLayout_RemoveWidget(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#removeItem)
    ///
    /// ``` self: ?*C.QBoxLayout, param1: ?*C.QLayoutItem ```
    pub fn RemoveItem(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QLayout_RemoveItem(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// ``` self: ?*C.QBoxLayout, param1: ?*C.QLayoutItem ```
    pub fn IndexOfWithQLayoutItem(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return C.QLayout_IndexOfWithQLayoutItem(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QLayout, slot: fn (?*C.QLayout, ?*C.QLayoutItem) callconv(.c) i32 ```
    pub fn OnIndexOfWithQLayoutItem(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        C.QLayout_OnIndexOfWithQLayoutItem(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// Base class method implementation
    ///
    /// ``` self: ?*C.QBoxLayout, param1: ?*C.QLayoutItem ```
    pub fn QBaseIndexOfWithQLayoutItem(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return C.QLayout_QBaseIndexOfWithQLayoutItem(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMinimumHeightForWidth)
    ///
    /// ``` self: ?*C.QBoxLayout, w: i32 ```
    pub fn TotalMinimumHeightForWidth(self: ?*anyopaque, w: i32) i32 {
        return C.QLayout_TotalMinimumHeightForWidth(@ptrCast(self), @intCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalHeightForWidth)
    ///
    /// ``` self: ?*C.QBoxLayout, w: i32 ```
    pub fn TotalHeightForWidth(self: ?*anyopaque, w: i32) i32 {
        return C.QLayout_TotalHeightForWidth(@ptrCast(self), @intCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMinimumSize)
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn TotalMinimumSize(self: ?*anyopaque) ?*C.QSize {
        return C.QLayout_TotalMinimumSize(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMaximumSize)
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn TotalMaximumSize(self: ?*anyopaque) ?*C.QSize {
        return C.QLayout_TotalMaximumSize(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalSizeHint)
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn TotalSizeHint(self: ?*anyopaque) ?*C.QSize {
        return C.QLayout_TotalSizeHint(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setEnabled)
    ///
    /// ``` self: ?*C.QBoxLayout, enabled: bool ```
    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        C.QLayout_SetEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEnabled)
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return C.QLayout_IsEnabled(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#closestAcceptableSize)
    ///
    /// ``` w: ?*C.QWidget, s: ?*C.QSize ```
    pub fn ClosestAcceptableSize(w: ?*anyopaque, s: ?*anyopaque) ?*C.QSize {
        return C.QLayout_ClosestAcceptableSize(@ptrCast(w), @ptrCast(s));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QBoxLayout, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QObject_ObjectName(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: ?*C.QBoxLayout, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QBoxLayout, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QBoxLayout, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QBoxLayout, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QBoxLayout, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QBoxLayout, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QObject {
        const _arr: C.struct_libqt_list = C.QObject_Children(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QObject, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: ?*C.QBoxLayout, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QBoxLayout, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QBoxLayout, obj: ?*C.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        C.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) ?*C.QMetaObject__Connection {
        return C.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QBoxLayout, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, member: ?*C.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return C.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: ?*C.QMetaObject__Connection ```
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return C.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QBoxLayout, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QBoxLayout, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QBoxLayout, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: C.struct_libqt_list = C.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn Destroyed(self: ?*anyopaque) void {
        C.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QBoxLayout, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QBoxLayout, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return C.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) ?*C.QMetaObject__Connection {
        return C.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QBoxLayout, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QBoxLayout, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn Alignment(self: ?*anyopaque) i64 {
        return C.QLayoutItem_Alignment(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#geometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn Geometry(self: ?*anyopaque) ?*C.QRect {
        return C.QBoxLayout_Geometry(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn QBaseGeometry(self: ?*anyopaque) ?*C.QRect {
        return C.QBoxLayout_QBaseGeometry(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, slot: fn () callconv(.c) ?*C.QRect ```
    pub fn OnGeometry(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QRect) void {
        C.QBoxLayout_OnGeometry(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, param1: ?*C.QWidget ```
    pub fn IndexOf(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return C.QBoxLayout_IndexOf(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, param1: ?*C.QWidget ```
    pub fn QBaseIndexOf(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return C.QBoxLayout_QBaseIndexOf(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, slot: fn (?*C.QBoxLayout, ?*C.QWidget) callconv(.c) i32 ```
    pub fn OnIndexOf(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        C.QBoxLayout_OnIndexOf(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return C.QBoxLayout_IsEmpty(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn QBaseIsEmpty(self: ?*anyopaque) bool {
        return C.QBoxLayout_QBaseIsEmpty(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, slot: fn () callconv(.c) bool ```
    pub fn OnIsEmpty(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QBoxLayout_OnIsEmpty(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn ControlTypes(self: ?*anyopaque) i64 {
        return C.QBoxLayout_ControlTypes(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn QBaseControlTypes(self: ?*anyopaque) i64 {
        return C.QBoxLayout_QBaseControlTypes(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, slot: fn () callconv(.c) i64 ```
    pub fn OnControlTypes(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        C.QBoxLayout_OnControlTypes(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, from: ?*C.QWidget, to: ?*C.QWidget, options: i32 ```
    pub fn ReplaceWidget(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque, options: i64) ?*C.QLayoutItem {
        return C.QBoxLayout_ReplaceWidget(@ptrCast(self), @ptrCast(from), @ptrCast(to), @intCast(options));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, from: ?*C.QWidget, to: ?*C.QWidget, options: i32 ```
    pub fn QBaseReplaceWidget(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque, options: i64) ?*C.QLayoutItem {
        return C.QBoxLayout_QBaseReplaceWidget(@ptrCast(self), @ptrCast(from), @ptrCast(to), @intCast(options));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, slot: fn (?*C.QBoxLayout, ?*C.QWidget, ?*C.QWidget, i32) callconv(.c) ?*C.QLayoutItem ```
    pub fn OnReplaceWidget(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i64) callconv(.c) ?*C.QLayoutItem) void {
        C.QBoxLayout_OnReplaceWidget(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#layout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn Layout(self: ?*anyopaque) ?*C.QLayout {
        return C.QBoxLayout_Layout(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn QBaseLayout(self: ?*anyopaque) ?*C.QLayout {
        return C.QBoxLayout_QBaseLayout(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, slot: fn () callconv(.c) ?*C.QLayout ```
    pub fn OnLayout(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QLayout) void {
        C.QBoxLayout_OnLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, e: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QBoxLayout_ChildEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, e: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QBoxLayout_QBaseChildEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, slot: fn (?*C.QBoxLayout, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QBoxLayout_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QBoxLayout_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, event: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QBoxLayout_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, slot: fn (?*C.QBoxLayout, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QBoxLayout_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QBoxLayout_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QBoxLayout_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, slot: fn (?*C.QBoxLayout, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QBoxLayout_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QBoxLayout_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QBoxLayout_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, slot: fn (?*C.QBoxLayout, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QBoxLayout_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QBoxLayout_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QBoxLayout_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, slot: fn (?*C.QBoxLayout, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QBoxLayout_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QBoxLayout_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QBoxLayout_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, slot: fn (?*C.QBoxLayout, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QBoxLayout_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QBoxLayout_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QBoxLayout_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, slot: fn (?*C.QBoxLayout, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QBoxLayout_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn Widget(self: ?*anyopaque) ?*C.QWidget {
        return C.QBoxLayout_Widget(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn QBaseWidget(self: ?*anyopaque) ?*C.QWidget {
        return C.QBoxLayout_QBaseWidget(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, slot: fn () callconv(.c) ?*C.QWidget ```
    pub fn OnWidget(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QWidget) void {
        C.QBoxLayout_OnWidget(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn SpacerItem(self: ?*anyopaque) ?*C.QSpacerItem {
        return C.QBoxLayout_SpacerItem(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn QBaseSpacerItem(self: ?*anyopaque) ?*C.QSpacerItem {
        return C.QBoxLayout_QBaseSpacerItem(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, slot: fn () callconv(.c) ?*C.QSpacerItem ```
    pub fn OnSpacerItem(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QSpacerItem) void {
        C.QBoxLayout_OnSpacerItem(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, param1: ?*C.QEvent ```
    pub fn WidgetEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QBoxLayout_WidgetEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, param1: ?*C.QEvent ```
    pub fn QBaseWidgetEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QBoxLayout_QBaseWidgetEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, slot: fn (?*C.QBoxLayout, ?*C.QEvent) callconv(.c) void ```
    pub fn OnWidgetEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QBoxLayout_OnWidgetEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, l: ?*C.QLayout ```
    pub fn AddChildLayout(self: ?*anyopaque, l: ?*anyopaque) void {
        C.QBoxLayout_AddChildLayout(@ptrCast(self), @ptrCast(l));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, l: ?*C.QLayout ```
    pub fn QBaseAddChildLayout(self: ?*anyopaque, l: ?*anyopaque) void {
        C.QBoxLayout_QBaseAddChildLayout(@ptrCast(self), @ptrCast(l));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, slot: fn (?*C.QBoxLayout, ?*C.QLayout) callconv(.c) void ```
    pub fn OnAddChildLayout(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QBoxLayout_OnAddChildLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, w: ?*C.QWidget ```
    pub fn AddChildWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        C.QBoxLayout_AddChildWidget(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, w: ?*C.QWidget ```
    pub fn QBaseAddChildWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        C.QBoxLayout_QBaseAddChildWidget(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, slot: fn (?*C.QBoxLayout, ?*C.QWidget) callconv(.c) void ```
    pub fn OnAddChildWidget(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QBoxLayout_OnAddChildWidget(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, layout: ?*C.QLayout ```
    pub fn AdoptLayout(self: ?*anyopaque, layout: ?*anyopaque) bool {
        return C.QBoxLayout_AdoptLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, layout: ?*C.QLayout ```
    pub fn QBaseAdoptLayout(self: ?*anyopaque, layout: ?*anyopaque) bool {
        return C.QBoxLayout_QBaseAdoptLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, slot: fn (?*C.QBoxLayout, ?*C.QLayout) callconv(.c) bool ```
    pub fn OnAdoptLayout(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QBoxLayout_OnAdoptLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, param1: ?*C.QRect ```
    pub fn AlignmentRect(self: ?*anyopaque, param1: ?*anyopaque) ?*C.QRect {
        return C.QBoxLayout_AlignmentRect(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, param1: ?*C.QRect ```
    pub fn QBaseAlignmentRect(self: ?*anyopaque, param1: ?*anyopaque) ?*C.QRect {
        return C.QBoxLayout_QBaseAlignmentRect(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, slot: fn (?*C.QBoxLayout, ?*C.QRect) callconv(.c) ?*C.QRect ```
    pub fn OnAlignmentRect(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) ?*C.QRect) void {
        C.QBoxLayout_OnAlignmentRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QBoxLayout_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QBoxLayout_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QBoxLayout_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QBoxLayout_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QBoxLayout_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QBoxLayout_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QBoxLayout_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QBoxLayout_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, slot: fn (?*C.QBoxLayout, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QBoxLayout_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QBoxLayout_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QBoxLayout_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QBoxLayout, slot: fn (?*C.QBoxLayout, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QBoxLayout_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QBoxLayout ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QBoxLayout_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qhboxlayout.html
pub const qhboxlayout = struct {
    /// New constructs a new QHBoxLayout object.
    ///
    /// ``` parent: ?*C.QWidget ```
    pub fn New(parent: ?*anyopaque) ?*C.QHBoxLayout {
        return C.QHBoxLayout_new(@ptrCast(parent));
    }

    /// New2 constructs a new QHBoxLayout object.
    ///
    ///
    pub fn New2() ?*C.QHBoxLayout {
        return C.QHBoxLayout_new2();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QHBoxLayout_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QHBoxLayout, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QHBoxLayout_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QHBoxLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QHBoxLayout_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QHBoxLayout, slot: fn (?*C.QHBoxLayout, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QHBoxLayout_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QHBoxLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QHBoxLayout_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QHBoxLayout_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QHBoxLayout_Tr2(s_Cstring, c_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QHBoxLayout_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#direction)
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn Direction(self: ?*anyopaque) i64 {
        return C.QBoxLayout_Direction(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setDirection)
    ///
    /// ``` self: ?*C.QHBoxLayout, direction: qboxlayout_enums.Direction ```
    pub fn SetDirection(self: ?*anyopaque, direction: i64) void {
        C.QBoxLayout_SetDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addSpacing)
    ///
    /// ``` self: ?*C.QHBoxLayout, size: i32 ```
    pub fn AddSpacing(self: ?*anyopaque, size: i32) void {
        C.QBoxLayout_AddSpacing(@ptrCast(self), @intCast(size));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addStretch)
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn AddStretch(self: ?*anyopaque) void {
        C.QBoxLayout_AddStretch(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addSpacerItem)
    ///
    /// ``` self: ?*C.QHBoxLayout, spacerItem: ?*C.QSpacerItem ```
    pub fn AddSpacerItem(self: ?*anyopaque, spacerItem: ?*anyopaque) void {
        C.QBoxLayout_AddSpacerItem(@ptrCast(self), @ptrCast(spacerItem));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addWidget)
    ///
    /// ``` self: ?*C.QHBoxLayout, param1: ?*C.QWidget ```
    pub fn AddWidget(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QBoxLayout_AddWidget(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addLayout)
    ///
    /// ``` self: ?*C.QHBoxLayout, layout: ?*C.QLayout ```
    pub fn AddLayout(self: ?*anyopaque, layout: ?*anyopaque) void {
        C.QBoxLayout_AddLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addStrut)
    ///
    /// ``` self: ?*C.QHBoxLayout, param1: i32 ```
    pub fn AddStrut(self: ?*anyopaque, param1: i32) void {
        C.QBoxLayout_AddStrut(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertSpacing)
    ///
    /// ``` self: ?*C.QHBoxLayout, index: i32, size: i32 ```
    pub fn InsertSpacing(self: ?*anyopaque, index: i32, size: i32) void {
        C.QBoxLayout_InsertSpacing(@ptrCast(self), @intCast(index), @intCast(size));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertStretch)
    ///
    /// ``` self: ?*C.QHBoxLayout, index: i32 ```
    pub fn InsertStretch(self: ?*anyopaque, index: i32) void {
        C.QBoxLayout_InsertStretch(@ptrCast(self), @intCast(index));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertSpacerItem)
    ///
    /// ``` self: ?*C.QHBoxLayout, index: i32, spacerItem: ?*C.QSpacerItem ```
    pub fn InsertSpacerItem(self: ?*anyopaque, index: i32, spacerItem: ?*anyopaque) void {
        C.QBoxLayout_InsertSpacerItem(@ptrCast(self), @intCast(index), @ptrCast(spacerItem));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertWidget)
    ///
    /// ``` self: ?*C.QHBoxLayout, index: i32, widget: ?*C.QWidget ```
    pub fn InsertWidget(self: ?*anyopaque, index: i32, widget: ?*anyopaque) void {
        C.QBoxLayout_InsertWidget(@ptrCast(self), @intCast(index), @ptrCast(widget));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertLayout)
    ///
    /// ``` self: ?*C.QHBoxLayout, index: i32, layout: ?*C.QLayout ```
    pub fn InsertLayout(self: ?*anyopaque, index: i32, layout: ?*anyopaque) void {
        C.QBoxLayout_InsertLayout(@ptrCast(self), @intCast(index), @ptrCast(layout));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertItem)
    ///
    /// ``` self: ?*C.QHBoxLayout, index: i32, param2: ?*C.QLayoutItem ```
    pub fn InsertItem(self: ?*anyopaque, index: i32, param2: ?*anyopaque) void {
        C.QBoxLayout_InsertItem(@ptrCast(self), @intCast(index), @ptrCast(param2));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setStretchFactor)
    ///
    /// ``` self: ?*C.QHBoxLayout, w: ?*C.QWidget, stretch: i32 ```
    pub fn SetStretchFactor(self: ?*anyopaque, w: ?*anyopaque, stretch: i32) bool {
        return C.QBoxLayout_SetStretchFactor(@ptrCast(self), @ptrCast(w), @intCast(stretch));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setStretchFactor)
    ///
    /// ``` self: ?*C.QHBoxLayout, l: ?*C.QLayout, stretch: i32 ```
    pub fn SetStretchFactor2(self: ?*anyopaque, l: ?*anyopaque, stretch: i32) bool {
        return C.QBoxLayout_SetStretchFactor2(@ptrCast(self), @ptrCast(l), @intCast(stretch));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setStretch)
    ///
    /// ``` self: ?*C.QHBoxLayout, index: i32, stretch: i32 ```
    pub fn SetStretch(self: ?*anyopaque, index: i32, stretch: i32) void {
        C.QBoxLayout_SetStretch(@ptrCast(self), @intCast(index), @intCast(stretch));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#stretch)
    ///
    /// ``` self: ?*C.QHBoxLayout, index: i32 ```
    pub fn Stretch(self: ?*anyopaque, index: i32) i32 {
        return C.QBoxLayout_Stretch(@ptrCast(self), @intCast(index));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addStretch)
    ///
    /// ``` self: ?*C.QHBoxLayout, stretch: i32 ```
    pub fn AddStretch1(self: ?*anyopaque, stretch: i32) void {
        C.QBoxLayout_AddStretch1(@ptrCast(self), @intCast(stretch));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addWidget)
    ///
    /// ``` self: ?*C.QHBoxLayout, param1: ?*C.QWidget, stretch: i32 ```
    pub fn AddWidget2(self: ?*anyopaque, param1: ?*anyopaque, stretch: i32) void {
        C.QBoxLayout_AddWidget2(@ptrCast(self), @ptrCast(param1), @intCast(stretch));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addWidget)
    ///
    /// ``` self: ?*C.QHBoxLayout, param1: ?*C.QWidget, stretch: i32, alignment: i32 ```
    pub fn AddWidget3(self: ?*anyopaque, param1: ?*anyopaque, stretch: i32, alignment: i64) void {
        C.QBoxLayout_AddWidget3(@ptrCast(self), @ptrCast(param1), @intCast(stretch), @intCast(alignment));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addLayout)
    ///
    /// ``` self: ?*C.QHBoxLayout, layout: ?*C.QLayout, stretch: i32 ```
    pub fn AddLayout2(self: ?*anyopaque, layout: ?*anyopaque, stretch: i32) void {
        C.QBoxLayout_AddLayout2(@ptrCast(self), @ptrCast(layout), @intCast(stretch));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertStretch)
    ///
    /// ``` self: ?*C.QHBoxLayout, index: i32, stretch: i32 ```
    pub fn InsertStretch2(self: ?*anyopaque, index: i32, stretch: i32) void {
        C.QBoxLayout_InsertStretch2(@ptrCast(self), @intCast(index), @intCast(stretch));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertWidget)
    ///
    /// ``` self: ?*C.QHBoxLayout, index: i32, widget: ?*C.QWidget, stretch: i32 ```
    pub fn InsertWidget3(self: ?*anyopaque, index: i32, widget: ?*anyopaque, stretch: i32) void {
        C.QBoxLayout_InsertWidget3(@ptrCast(self), @intCast(index), @ptrCast(widget), @intCast(stretch));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertWidget)
    ///
    /// ``` self: ?*C.QHBoxLayout, index: i32, widget: ?*C.QWidget, stretch: i32, alignment: i32 ```
    pub fn InsertWidget4(self: ?*anyopaque, index: i32, widget: ?*anyopaque, stretch: i32, alignment: i64) void {
        C.QBoxLayout_InsertWidget4(@ptrCast(self), @intCast(index), @ptrCast(widget), @intCast(stretch), @intCast(alignment));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertLayout)
    ///
    /// ``` self: ?*C.QHBoxLayout, index: i32, layout: ?*C.QLayout, stretch: i32 ```
    pub fn InsertLayout3(self: ?*anyopaque, index: i32, layout: ?*anyopaque, stretch: i32) void {
        C.QBoxLayout_InsertLayout3(@ptrCast(self), @intCast(index), @ptrCast(layout), @intCast(stretch));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
    ///
    /// ``` self: ?*C.QHBoxLayout, left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn SetContentsMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        C.QLayout_SetContentsMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
    ///
    /// ``` self: ?*C.QHBoxLayout, margins: ?*C.QMargins ```
    pub fn SetContentsMarginsWithMargins(self: ?*anyopaque, margins: ?*anyopaque) void {
        C.QLayout_SetContentsMarginsWithMargins(@ptrCast(self), @ptrCast(margins));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#unsetContentsMargins)
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn UnsetContentsMargins(self: ?*anyopaque) void {
        C.QLayout_UnsetContentsMargins(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#getContentsMargins)
    ///
    /// ``` self: ?*C.QHBoxLayout, left: ?*i32, top: ?*i32, right: ?*i32, bottom: ?*i32 ```
    pub fn GetContentsMargins(self: ?*anyopaque, left: ?*anyopaque, top: ?*anyopaque, right: ?*anyopaque, bottom: ?*anyopaque) void {
        C.QLayout_GetContentsMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#contentsMargins)
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn ContentsMargins(self: ?*anyopaque) ?*C.QMargins {
        return C.QLayout_ContentsMargins(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#contentsRect)
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn ContentsRect(self: ?*anyopaque) ?*C.QRect {
        return C.QLayout_ContentsRect(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
    ///
    /// ``` self: ?*C.QHBoxLayout, w: ?*C.QWidget, alignment: i32 ```
    pub fn SetAlignment(self: ?*anyopaque, w: ?*anyopaque, alignment: i64) bool {
        return C.QLayout_SetAlignment(@ptrCast(self), @ptrCast(w), @intCast(alignment));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
    ///
    /// ``` self: ?*C.QHBoxLayout, l: ?*C.QLayout, alignment: i32 ```
    pub fn SetAlignment2(self: ?*anyopaque, l: ?*anyopaque, alignment: i64) bool {
        return C.QLayout_SetAlignment2(@ptrCast(self), @ptrCast(l), @intCast(alignment));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setSizeConstraint)
    ///
    /// ``` self: ?*C.QHBoxLayout, sizeConstraint: qlayout_enums.SizeConstraint ```
    pub fn SetSizeConstraint(self: ?*anyopaque, sizeConstraint: i64) void {
        C.QLayout_SetSizeConstraint(@ptrCast(self), @intCast(sizeConstraint));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#sizeConstraint)
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn SizeConstraint(self: ?*anyopaque) i64 {
        return C.QLayout_SizeConstraint(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setMenuBar)
    ///
    /// ``` self: ?*C.QHBoxLayout, w: ?*C.QWidget ```
    pub fn SetMenuBar(self: ?*anyopaque, w: ?*anyopaque) void {
        C.QLayout_SetMenuBar(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#menuBar)
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn MenuBar(self: ?*anyopaque) ?*C.QWidget {
        return C.QLayout_MenuBar(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#parentWidget)
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn ParentWidget(self: ?*anyopaque) ?*C.QWidget {
        return C.QLayout_ParentWidget(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#activate)
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn Activate(self: ?*anyopaque) bool {
        return C.QLayout_Activate(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#update)
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn Update(self: ?*anyopaque) void {
        C.QLayout_Update(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#removeWidget)
    ///
    /// ``` self: ?*C.QHBoxLayout, w: ?*C.QWidget ```
    pub fn RemoveWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        C.QLayout_RemoveWidget(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#removeItem)
    ///
    /// ``` self: ?*C.QHBoxLayout, param1: ?*C.QLayoutItem ```
    pub fn RemoveItem(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QLayout_RemoveItem(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// ``` self: ?*C.QHBoxLayout, param1: ?*C.QLayoutItem ```
    pub fn IndexOfWithQLayoutItem(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return C.QLayout_IndexOfWithQLayoutItem(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QLayout, slot: fn (?*C.QLayout, ?*C.QLayoutItem) callconv(.c) i32 ```
    pub fn OnIndexOfWithQLayoutItem(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        C.QLayout_OnIndexOfWithQLayoutItem(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// Base class method implementation
    ///
    /// ``` self: ?*C.QHBoxLayout, param1: ?*C.QLayoutItem ```
    pub fn QBaseIndexOfWithQLayoutItem(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return C.QLayout_QBaseIndexOfWithQLayoutItem(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMinimumHeightForWidth)
    ///
    /// ``` self: ?*C.QHBoxLayout, w: i32 ```
    pub fn TotalMinimumHeightForWidth(self: ?*anyopaque, w: i32) i32 {
        return C.QLayout_TotalMinimumHeightForWidth(@ptrCast(self), @intCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalHeightForWidth)
    ///
    /// ``` self: ?*C.QHBoxLayout, w: i32 ```
    pub fn TotalHeightForWidth(self: ?*anyopaque, w: i32) i32 {
        return C.QLayout_TotalHeightForWidth(@ptrCast(self), @intCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMinimumSize)
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn TotalMinimumSize(self: ?*anyopaque) ?*C.QSize {
        return C.QLayout_TotalMinimumSize(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMaximumSize)
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn TotalMaximumSize(self: ?*anyopaque) ?*C.QSize {
        return C.QLayout_TotalMaximumSize(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalSizeHint)
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn TotalSizeHint(self: ?*anyopaque) ?*C.QSize {
        return C.QLayout_TotalSizeHint(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setEnabled)
    ///
    /// ``` self: ?*C.QHBoxLayout, enabled: bool ```
    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        C.QLayout_SetEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEnabled)
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return C.QLayout_IsEnabled(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#closestAcceptableSize)
    ///
    /// ``` w: ?*C.QWidget, s: ?*C.QSize ```
    pub fn ClosestAcceptableSize(w: ?*anyopaque, s: ?*anyopaque) ?*C.QSize {
        return C.QLayout_ClosestAcceptableSize(@ptrCast(w), @ptrCast(s));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QHBoxLayout, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QObject_ObjectName(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: ?*C.QHBoxLayout, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QHBoxLayout, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QHBoxLayout, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QHBoxLayout, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QHBoxLayout, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QHBoxLayout, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QObject {
        const _arr: C.struct_libqt_list = C.QObject_Children(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QObject, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: ?*C.QHBoxLayout, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QHBoxLayout, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QHBoxLayout, obj: ?*C.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        C.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) ?*C.QMetaObject__Connection {
        return C.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QHBoxLayout, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, member: ?*C.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return C.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: ?*C.QMetaObject__Connection ```
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return C.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QHBoxLayout, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QHBoxLayout, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QHBoxLayout, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: C.struct_libqt_list = C.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn Destroyed(self: ?*anyopaque) void {
        C.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QHBoxLayout, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QHBoxLayout, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return C.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) ?*C.QMetaObject__Connection {
        return C.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QHBoxLayout, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QHBoxLayout, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn Alignment(self: ?*anyopaque) i64 {
        return C.QLayoutItem_Alignment(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, param1: ?*C.QLayoutItem ```
    pub fn AddItem(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QHBoxLayout_AddItem(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, param1: ?*C.QLayoutItem ```
    pub fn QBaseAddItem(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QHBoxLayout_QBaseAddItem(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, slot: fn (?*C.QHBoxLayout, ?*C.QLayoutItem) callconv(.c) void ```
    pub fn OnAddItem(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QHBoxLayout_OnAddItem(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#spacing)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn Spacing(self: ?*anyopaque) i32 {
        return C.QHBoxLayout_Spacing(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn QBaseSpacing(self: ?*anyopaque) i32 {
        return C.QHBoxLayout_QBaseSpacing(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, slot: fn () callconv(.c) i32 ```
    pub fn OnSpacing(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QHBoxLayout_OnSpacing(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setSpacing)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, spacing: i32 ```
    pub fn SetSpacing(self: ?*anyopaque, spacing: i32) void {
        C.QHBoxLayout_SetSpacing(@ptrCast(self), @intCast(spacing));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, spacing: i32 ```
    pub fn QBaseSetSpacing(self: ?*anyopaque, spacing: i32) void {
        C.QHBoxLayout_QBaseSetSpacing(@ptrCast(self), @intCast(spacing));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, slot: fn (?*C.QHBoxLayout, i32) callconv(.c) void ```
    pub fn OnSetSpacing(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QHBoxLayout_OnSetSpacing(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn SizeHint(self: ?*anyopaque) ?*C.QSize {
        return C.QHBoxLayout_SizeHint(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn QBaseSizeHint(self: ?*anyopaque) ?*C.QSize {
        return C.QHBoxLayout_QBaseSizeHint(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, slot: fn () callconv(.c) ?*C.QSize ```
    pub fn OnSizeHint(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QSize) void {
        C.QHBoxLayout_OnSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#minimumSize)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn MinimumSize(self: ?*anyopaque) ?*C.QSize {
        return C.QHBoxLayout_MinimumSize(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn QBaseMinimumSize(self: ?*anyopaque) ?*C.QSize {
        return C.QHBoxLayout_QBaseMinimumSize(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, slot: fn () callconv(.c) ?*C.QSize ```
    pub fn OnMinimumSize(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QSize) void {
        C.QHBoxLayout_OnMinimumSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#maximumSize)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn MaximumSize(self: ?*anyopaque) ?*C.QSize {
        return C.QHBoxLayout_MaximumSize(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn QBaseMaximumSize(self: ?*anyopaque) ?*C.QSize {
        return C.QHBoxLayout_QBaseMaximumSize(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, slot: fn () callconv(.c) ?*C.QSize ```
    pub fn OnMaximumSize(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QSize) void {
        C.QHBoxLayout_OnMaximumSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn HasHeightForWidth(self: ?*anyopaque) bool {
        return C.QHBoxLayout_HasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn QBaseHasHeightForWidth(self: ?*anyopaque) bool {
        return C.QHBoxLayout_QBaseHasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, slot: fn () callconv(.c) bool ```
    pub fn OnHasHeightForWidth(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QHBoxLayout_OnHasHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, param1: i32 ```
    pub fn HeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return C.QHBoxLayout_HeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, param1: i32 ```
    pub fn QBaseHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return C.QHBoxLayout_QBaseHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, slot: fn (?*C.QHBoxLayout, i32) callconv(.c) i32 ```
    pub fn OnHeightForWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        C.QHBoxLayout_OnHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#minimumHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, param1: i32 ```
    pub fn MinimumHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return C.QHBoxLayout_MinimumHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, param1: i32 ```
    pub fn QBaseMinimumHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return C.QHBoxLayout_QBaseMinimumHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, slot: fn (?*C.QHBoxLayout, i32) callconv(.c) i32 ```
    pub fn OnMinimumHeightForWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        C.QHBoxLayout_OnMinimumHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#expandingDirections)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn ExpandingDirections(self: ?*anyopaque) i64 {
        return C.QHBoxLayout_ExpandingDirections(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn QBaseExpandingDirections(self: ?*anyopaque) i64 {
        return C.QHBoxLayout_QBaseExpandingDirections(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, slot: fn () callconv(.c) i64 ```
    pub fn OnExpandingDirections(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        C.QHBoxLayout_OnExpandingDirections(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#invalidate)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn Invalidate(self: ?*anyopaque) void {
        C.QHBoxLayout_Invalidate(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn QBaseInvalidate(self: ?*anyopaque) void {
        C.QHBoxLayout_QBaseInvalidate(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, slot: fn () callconv(.c) void ```
    pub fn OnInvalidate(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QHBoxLayout_OnInvalidate(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#itemAt)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, param1: i32 ```
    pub fn ItemAt(self: ?*anyopaque, param1: i32) ?*C.QLayoutItem {
        return C.QHBoxLayout_ItemAt(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, param1: i32 ```
    pub fn QBaseItemAt(self: ?*anyopaque, param1: i32) ?*C.QLayoutItem {
        return C.QHBoxLayout_QBaseItemAt(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, slot: fn (?*C.QHBoxLayout, i32) callconv(.c) ?*C.QLayoutItem ```
    pub fn OnItemAt(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) ?*C.QLayoutItem) void {
        C.QHBoxLayout_OnItemAt(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#takeAt)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, param1: i32 ```
    pub fn TakeAt(self: ?*anyopaque, param1: i32) ?*C.QLayoutItem {
        return C.QHBoxLayout_TakeAt(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, param1: i32 ```
    pub fn QBaseTakeAt(self: ?*anyopaque, param1: i32) ?*C.QLayoutItem {
        return C.QHBoxLayout_QBaseTakeAt(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, slot: fn (?*C.QHBoxLayout, i32) callconv(.c) ?*C.QLayoutItem ```
    pub fn OnTakeAt(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) ?*C.QLayoutItem) void {
        C.QHBoxLayout_OnTakeAt(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#count)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn Count(self: ?*anyopaque) i32 {
        return C.QHBoxLayout_Count(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn QBaseCount(self: ?*anyopaque) i32 {
        return C.QHBoxLayout_QBaseCount(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, slot: fn () callconv(.c) i32 ```
    pub fn OnCount(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QHBoxLayout_OnCount(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setGeometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, geometry: ?*C.QRect ```
    pub fn SetGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        C.QHBoxLayout_SetGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, geometry: ?*C.QRect ```
    pub fn QBaseSetGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        C.QHBoxLayout_QBaseSetGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, slot: fn (?*C.QHBoxLayout, ?*C.QRect) callconv(.c) void ```
    pub fn OnSetGeometry(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QHBoxLayout_OnSetGeometry(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#geometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn Geometry(self: ?*anyopaque) ?*C.QRect {
        return C.QHBoxLayout_Geometry(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn QBaseGeometry(self: ?*anyopaque) ?*C.QRect {
        return C.QHBoxLayout_QBaseGeometry(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, slot: fn () callconv(.c) ?*C.QRect ```
    pub fn OnGeometry(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QRect) void {
        C.QHBoxLayout_OnGeometry(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, param1: ?*C.QWidget ```
    pub fn IndexOf(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return C.QHBoxLayout_IndexOf(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, param1: ?*C.QWidget ```
    pub fn QBaseIndexOf(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return C.QHBoxLayout_QBaseIndexOf(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, slot: fn (?*C.QHBoxLayout, ?*C.QWidget) callconv(.c) i32 ```
    pub fn OnIndexOf(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        C.QHBoxLayout_OnIndexOf(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return C.QHBoxLayout_IsEmpty(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn QBaseIsEmpty(self: ?*anyopaque) bool {
        return C.QHBoxLayout_QBaseIsEmpty(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, slot: fn () callconv(.c) bool ```
    pub fn OnIsEmpty(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QHBoxLayout_OnIsEmpty(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn ControlTypes(self: ?*anyopaque) i64 {
        return C.QHBoxLayout_ControlTypes(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn QBaseControlTypes(self: ?*anyopaque) i64 {
        return C.QHBoxLayout_QBaseControlTypes(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, slot: fn () callconv(.c) i64 ```
    pub fn OnControlTypes(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        C.QHBoxLayout_OnControlTypes(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, from: ?*C.QWidget, to: ?*C.QWidget, options: i32 ```
    pub fn ReplaceWidget(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque, options: i64) ?*C.QLayoutItem {
        return C.QHBoxLayout_ReplaceWidget(@ptrCast(self), @ptrCast(from), @ptrCast(to), @intCast(options));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, from: ?*C.QWidget, to: ?*C.QWidget, options: i32 ```
    pub fn QBaseReplaceWidget(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque, options: i64) ?*C.QLayoutItem {
        return C.QHBoxLayout_QBaseReplaceWidget(@ptrCast(self), @ptrCast(from), @ptrCast(to), @intCast(options));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, slot: fn (?*C.QHBoxLayout, ?*C.QWidget, ?*C.QWidget, i32) callconv(.c) ?*C.QLayoutItem ```
    pub fn OnReplaceWidget(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i64) callconv(.c) ?*C.QLayoutItem) void {
        C.QHBoxLayout_OnReplaceWidget(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#layout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn Layout(self: ?*anyopaque) ?*C.QLayout {
        return C.QHBoxLayout_Layout(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn QBaseLayout(self: ?*anyopaque) ?*C.QLayout {
        return C.QHBoxLayout_QBaseLayout(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, slot: fn () callconv(.c) ?*C.QLayout ```
    pub fn OnLayout(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QLayout) void {
        C.QHBoxLayout_OnLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, e: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QHBoxLayout_ChildEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, e: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QHBoxLayout_QBaseChildEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, slot: fn (?*C.QHBoxLayout, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QHBoxLayout_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QHBoxLayout_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, event: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QHBoxLayout_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, slot: fn (?*C.QHBoxLayout, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QHBoxLayout_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QHBoxLayout_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QHBoxLayout_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, slot: fn (?*C.QHBoxLayout, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QHBoxLayout_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QHBoxLayout_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QHBoxLayout_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, slot: fn (?*C.QHBoxLayout, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QHBoxLayout_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QHBoxLayout_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QHBoxLayout_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, slot: fn (?*C.QHBoxLayout, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QHBoxLayout_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QHBoxLayout_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QHBoxLayout_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, slot: fn (?*C.QHBoxLayout, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QHBoxLayout_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QHBoxLayout_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QHBoxLayout_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, slot: fn (?*C.QHBoxLayout, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QHBoxLayout_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn Widget(self: ?*anyopaque) ?*C.QWidget {
        return C.QHBoxLayout_Widget(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn QBaseWidget(self: ?*anyopaque) ?*C.QWidget {
        return C.QHBoxLayout_QBaseWidget(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, slot: fn () callconv(.c) ?*C.QWidget ```
    pub fn OnWidget(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QWidget) void {
        C.QHBoxLayout_OnWidget(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn SpacerItem(self: ?*anyopaque) ?*C.QSpacerItem {
        return C.QHBoxLayout_SpacerItem(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn QBaseSpacerItem(self: ?*anyopaque) ?*C.QSpacerItem {
        return C.QHBoxLayout_QBaseSpacerItem(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, slot: fn () callconv(.c) ?*C.QSpacerItem ```
    pub fn OnSpacerItem(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QSpacerItem) void {
        C.QHBoxLayout_OnSpacerItem(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, param1: ?*C.QEvent ```
    pub fn WidgetEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QHBoxLayout_WidgetEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, param1: ?*C.QEvent ```
    pub fn QBaseWidgetEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QHBoxLayout_QBaseWidgetEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, slot: fn (?*C.QHBoxLayout, ?*C.QEvent) callconv(.c) void ```
    pub fn OnWidgetEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QHBoxLayout_OnWidgetEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, l: ?*C.QLayout ```
    pub fn AddChildLayout(self: ?*anyopaque, l: ?*anyopaque) void {
        C.QHBoxLayout_AddChildLayout(@ptrCast(self), @ptrCast(l));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, l: ?*C.QLayout ```
    pub fn QBaseAddChildLayout(self: ?*anyopaque, l: ?*anyopaque) void {
        C.QHBoxLayout_QBaseAddChildLayout(@ptrCast(self), @ptrCast(l));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, slot: fn (?*C.QHBoxLayout, ?*C.QLayout) callconv(.c) void ```
    pub fn OnAddChildLayout(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QHBoxLayout_OnAddChildLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, w: ?*C.QWidget ```
    pub fn AddChildWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        C.QHBoxLayout_AddChildWidget(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, w: ?*C.QWidget ```
    pub fn QBaseAddChildWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        C.QHBoxLayout_QBaseAddChildWidget(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, slot: fn (?*C.QHBoxLayout, ?*C.QWidget) callconv(.c) void ```
    pub fn OnAddChildWidget(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QHBoxLayout_OnAddChildWidget(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, layout: ?*C.QLayout ```
    pub fn AdoptLayout(self: ?*anyopaque, layout: ?*anyopaque) bool {
        return C.QHBoxLayout_AdoptLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, layout: ?*C.QLayout ```
    pub fn QBaseAdoptLayout(self: ?*anyopaque, layout: ?*anyopaque) bool {
        return C.QHBoxLayout_QBaseAdoptLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, slot: fn (?*C.QHBoxLayout, ?*C.QLayout) callconv(.c) bool ```
    pub fn OnAdoptLayout(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QHBoxLayout_OnAdoptLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, param1: ?*C.QRect ```
    pub fn AlignmentRect(self: ?*anyopaque, param1: ?*anyopaque) ?*C.QRect {
        return C.QHBoxLayout_AlignmentRect(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, param1: ?*C.QRect ```
    pub fn QBaseAlignmentRect(self: ?*anyopaque, param1: ?*anyopaque) ?*C.QRect {
        return C.QHBoxLayout_QBaseAlignmentRect(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, slot: fn (?*C.QHBoxLayout, ?*C.QRect) callconv(.c) ?*C.QRect ```
    pub fn OnAlignmentRect(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) ?*C.QRect) void {
        C.QHBoxLayout_OnAlignmentRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QHBoxLayout_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QHBoxLayout_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QHBoxLayout_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QHBoxLayout_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QHBoxLayout_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QHBoxLayout_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QHBoxLayout_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QHBoxLayout_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, slot: fn (?*C.QHBoxLayout, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QHBoxLayout_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QHBoxLayout_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QHBoxLayout_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QHBoxLayout, slot: fn (?*C.QHBoxLayout, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QHBoxLayout_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QHBoxLayout ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QHBoxLayout_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qvboxlayout.html
pub const qvboxlayout = struct {
    /// New constructs a new QVBoxLayout object.
    ///
    /// ``` parent: ?*C.QWidget ```
    pub fn New(parent: ?*anyopaque) ?*C.QVBoxLayout {
        return C.QVBoxLayout_new(@ptrCast(parent));
    }

    /// New2 constructs a new QVBoxLayout object.
    ///
    ///
    pub fn New2() ?*C.QVBoxLayout {
        return C.QVBoxLayout_new2();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QVBoxLayout_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QVBoxLayout, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QVBoxLayout_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QVBoxLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QVBoxLayout_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QVBoxLayout, slot: fn (?*C.QVBoxLayout, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QVBoxLayout_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QVBoxLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QVBoxLayout_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QVBoxLayout_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QVBoxLayout_Tr2(s_Cstring, c_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QVBoxLayout_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#direction)
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn Direction(self: ?*anyopaque) i64 {
        return C.QBoxLayout_Direction(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setDirection)
    ///
    /// ``` self: ?*C.QVBoxLayout, direction: qboxlayout_enums.Direction ```
    pub fn SetDirection(self: ?*anyopaque, direction: i64) void {
        C.QBoxLayout_SetDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addSpacing)
    ///
    /// ``` self: ?*C.QVBoxLayout, size: i32 ```
    pub fn AddSpacing(self: ?*anyopaque, size: i32) void {
        C.QBoxLayout_AddSpacing(@ptrCast(self), @intCast(size));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addStretch)
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn AddStretch(self: ?*anyopaque) void {
        C.QBoxLayout_AddStretch(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addSpacerItem)
    ///
    /// ``` self: ?*C.QVBoxLayout, spacerItem: ?*C.QSpacerItem ```
    pub fn AddSpacerItem(self: ?*anyopaque, spacerItem: ?*anyopaque) void {
        C.QBoxLayout_AddSpacerItem(@ptrCast(self), @ptrCast(spacerItem));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addWidget)
    ///
    /// ``` self: ?*C.QVBoxLayout, param1: ?*C.QWidget ```
    pub fn AddWidget(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QBoxLayout_AddWidget(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addLayout)
    ///
    /// ``` self: ?*C.QVBoxLayout, layout: ?*C.QLayout ```
    pub fn AddLayout(self: ?*anyopaque, layout: ?*anyopaque) void {
        C.QBoxLayout_AddLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addStrut)
    ///
    /// ``` self: ?*C.QVBoxLayout, param1: i32 ```
    pub fn AddStrut(self: ?*anyopaque, param1: i32) void {
        C.QBoxLayout_AddStrut(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertSpacing)
    ///
    /// ``` self: ?*C.QVBoxLayout, index: i32, size: i32 ```
    pub fn InsertSpacing(self: ?*anyopaque, index: i32, size: i32) void {
        C.QBoxLayout_InsertSpacing(@ptrCast(self), @intCast(index), @intCast(size));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertStretch)
    ///
    /// ``` self: ?*C.QVBoxLayout, index: i32 ```
    pub fn InsertStretch(self: ?*anyopaque, index: i32) void {
        C.QBoxLayout_InsertStretch(@ptrCast(self), @intCast(index));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertSpacerItem)
    ///
    /// ``` self: ?*C.QVBoxLayout, index: i32, spacerItem: ?*C.QSpacerItem ```
    pub fn InsertSpacerItem(self: ?*anyopaque, index: i32, spacerItem: ?*anyopaque) void {
        C.QBoxLayout_InsertSpacerItem(@ptrCast(self), @intCast(index), @ptrCast(spacerItem));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertWidget)
    ///
    /// ``` self: ?*C.QVBoxLayout, index: i32, widget: ?*C.QWidget ```
    pub fn InsertWidget(self: ?*anyopaque, index: i32, widget: ?*anyopaque) void {
        C.QBoxLayout_InsertWidget(@ptrCast(self), @intCast(index), @ptrCast(widget));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertLayout)
    ///
    /// ``` self: ?*C.QVBoxLayout, index: i32, layout: ?*C.QLayout ```
    pub fn InsertLayout(self: ?*anyopaque, index: i32, layout: ?*anyopaque) void {
        C.QBoxLayout_InsertLayout(@ptrCast(self), @intCast(index), @ptrCast(layout));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertItem)
    ///
    /// ``` self: ?*C.QVBoxLayout, index: i32, param2: ?*C.QLayoutItem ```
    pub fn InsertItem(self: ?*anyopaque, index: i32, param2: ?*anyopaque) void {
        C.QBoxLayout_InsertItem(@ptrCast(self), @intCast(index), @ptrCast(param2));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setStretchFactor)
    ///
    /// ``` self: ?*C.QVBoxLayout, w: ?*C.QWidget, stretch: i32 ```
    pub fn SetStretchFactor(self: ?*anyopaque, w: ?*anyopaque, stretch: i32) bool {
        return C.QBoxLayout_SetStretchFactor(@ptrCast(self), @ptrCast(w), @intCast(stretch));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setStretchFactor)
    ///
    /// ``` self: ?*C.QVBoxLayout, l: ?*C.QLayout, stretch: i32 ```
    pub fn SetStretchFactor2(self: ?*anyopaque, l: ?*anyopaque, stretch: i32) bool {
        return C.QBoxLayout_SetStretchFactor2(@ptrCast(self), @ptrCast(l), @intCast(stretch));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setStretch)
    ///
    /// ``` self: ?*C.QVBoxLayout, index: i32, stretch: i32 ```
    pub fn SetStretch(self: ?*anyopaque, index: i32, stretch: i32) void {
        C.QBoxLayout_SetStretch(@ptrCast(self), @intCast(index), @intCast(stretch));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#stretch)
    ///
    /// ``` self: ?*C.QVBoxLayout, index: i32 ```
    pub fn Stretch(self: ?*anyopaque, index: i32) i32 {
        return C.QBoxLayout_Stretch(@ptrCast(self), @intCast(index));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addStretch)
    ///
    /// ``` self: ?*C.QVBoxLayout, stretch: i32 ```
    pub fn AddStretch1(self: ?*anyopaque, stretch: i32) void {
        C.QBoxLayout_AddStretch1(@ptrCast(self), @intCast(stretch));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addWidget)
    ///
    /// ``` self: ?*C.QVBoxLayout, param1: ?*C.QWidget, stretch: i32 ```
    pub fn AddWidget2(self: ?*anyopaque, param1: ?*anyopaque, stretch: i32) void {
        C.QBoxLayout_AddWidget2(@ptrCast(self), @ptrCast(param1), @intCast(stretch));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addWidget)
    ///
    /// ``` self: ?*C.QVBoxLayout, param1: ?*C.QWidget, stretch: i32, alignment: i32 ```
    pub fn AddWidget3(self: ?*anyopaque, param1: ?*anyopaque, stretch: i32, alignment: i64) void {
        C.QBoxLayout_AddWidget3(@ptrCast(self), @ptrCast(param1), @intCast(stretch), @intCast(alignment));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addLayout)
    ///
    /// ``` self: ?*C.QVBoxLayout, layout: ?*C.QLayout, stretch: i32 ```
    pub fn AddLayout2(self: ?*anyopaque, layout: ?*anyopaque, stretch: i32) void {
        C.QBoxLayout_AddLayout2(@ptrCast(self), @ptrCast(layout), @intCast(stretch));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertStretch)
    ///
    /// ``` self: ?*C.QVBoxLayout, index: i32, stretch: i32 ```
    pub fn InsertStretch2(self: ?*anyopaque, index: i32, stretch: i32) void {
        C.QBoxLayout_InsertStretch2(@ptrCast(self), @intCast(index), @intCast(stretch));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertWidget)
    ///
    /// ``` self: ?*C.QVBoxLayout, index: i32, widget: ?*C.QWidget, stretch: i32 ```
    pub fn InsertWidget3(self: ?*anyopaque, index: i32, widget: ?*anyopaque, stretch: i32) void {
        C.QBoxLayout_InsertWidget3(@ptrCast(self), @intCast(index), @ptrCast(widget), @intCast(stretch));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertWidget)
    ///
    /// ``` self: ?*C.QVBoxLayout, index: i32, widget: ?*C.QWidget, stretch: i32, alignment: i32 ```
    pub fn InsertWidget4(self: ?*anyopaque, index: i32, widget: ?*anyopaque, stretch: i32, alignment: i64) void {
        C.QBoxLayout_InsertWidget4(@ptrCast(self), @intCast(index), @ptrCast(widget), @intCast(stretch), @intCast(alignment));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#insertLayout)
    ///
    /// ``` self: ?*C.QVBoxLayout, index: i32, layout: ?*C.QLayout, stretch: i32 ```
    pub fn InsertLayout3(self: ?*anyopaque, index: i32, layout: ?*anyopaque, stretch: i32) void {
        C.QBoxLayout_InsertLayout3(@ptrCast(self), @intCast(index), @ptrCast(layout), @intCast(stretch));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
    ///
    /// ``` self: ?*C.QVBoxLayout, left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn SetContentsMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        C.QLayout_SetContentsMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
    ///
    /// ``` self: ?*C.QVBoxLayout, margins: ?*C.QMargins ```
    pub fn SetContentsMarginsWithMargins(self: ?*anyopaque, margins: ?*anyopaque) void {
        C.QLayout_SetContentsMarginsWithMargins(@ptrCast(self), @ptrCast(margins));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#unsetContentsMargins)
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn UnsetContentsMargins(self: ?*anyopaque) void {
        C.QLayout_UnsetContentsMargins(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#getContentsMargins)
    ///
    /// ``` self: ?*C.QVBoxLayout, left: ?*i32, top: ?*i32, right: ?*i32, bottom: ?*i32 ```
    pub fn GetContentsMargins(self: ?*anyopaque, left: ?*anyopaque, top: ?*anyopaque, right: ?*anyopaque, bottom: ?*anyopaque) void {
        C.QLayout_GetContentsMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#contentsMargins)
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn ContentsMargins(self: ?*anyopaque) ?*C.QMargins {
        return C.QLayout_ContentsMargins(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#contentsRect)
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn ContentsRect(self: ?*anyopaque) ?*C.QRect {
        return C.QLayout_ContentsRect(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
    ///
    /// ``` self: ?*C.QVBoxLayout, w: ?*C.QWidget, alignment: i32 ```
    pub fn SetAlignment(self: ?*anyopaque, w: ?*anyopaque, alignment: i64) bool {
        return C.QLayout_SetAlignment(@ptrCast(self), @ptrCast(w), @intCast(alignment));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
    ///
    /// ``` self: ?*C.QVBoxLayout, l: ?*C.QLayout, alignment: i32 ```
    pub fn SetAlignment2(self: ?*anyopaque, l: ?*anyopaque, alignment: i64) bool {
        return C.QLayout_SetAlignment2(@ptrCast(self), @ptrCast(l), @intCast(alignment));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setSizeConstraint)
    ///
    /// ``` self: ?*C.QVBoxLayout, sizeConstraint: qlayout_enums.SizeConstraint ```
    pub fn SetSizeConstraint(self: ?*anyopaque, sizeConstraint: i64) void {
        C.QLayout_SetSizeConstraint(@ptrCast(self), @intCast(sizeConstraint));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#sizeConstraint)
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn SizeConstraint(self: ?*anyopaque) i64 {
        return C.QLayout_SizeConstraint(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setMenuBar)
    ///
    /// ``` self: ?*C.QVBoxLayout, w: ?*C.QWidget ```
    pub fn SetMenuBar(self: ?*anyopaque, w: ?*anyopaque) void {
        C.QLayout_SetMenuBar(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#menuBar)
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn MenuBar(self: ?*anyopaque) ?*C.QWidget {
        return C.QLayout_MenuBar(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#parentWidget)
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn ParentWidget(self: ?*anyopaque) ?*C.QWidget {
        return C.QLayout_ParentWidget(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#activate)
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn Activate(self: ?*anyopaque) bool {
        return C.QLayout_Activate(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#update)
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn Update(self: ?*anyopaque) void {
        C.QLayout_Update(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#removeWidget)
    ///
    /// ``` self: ?*C.QVBoxLayout, w: ?*C.QWidget ```
    pub fn RemoveWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        C.QLayout_RemoveWidget(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#removeItem)
    ///
    /// ``` self: ?*C.QVBoxLayout, param1: ?*C.QLayoutItem ```
    pub fn RemoveItem(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QLayout_RemoveItem(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// ``` self: ?*C.QVBoxLayout, param1: ?*C.QLayoutItem ```
    pub fn IndexOfWithQLayoutItem(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return C.QLayout_IndexOfWithQLayoutItem(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QLayout, slot: fn (?*C.QLayout, ?*C.QLayoutItem) callconv(.c) i32 ```
    pub fn OnIndexOfWithQLayoutItem(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        C.QLayout_OnIndexOfWithQLayoutItem(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// Base class method implementation
    ///
    /// ``` self: ?*C.QVBoxLayout, param1: ?*C.QLayoutItem ```
    pub fn QBaseIndexOfWithQLayoutItem(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return C.QLayout_QBaseIndexOfWithQLayoutItem(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMinimumHeightForWidth)
    ///
    /// ``` self: ?*C.QVBoxLayout, w: i32 ```
    pub fn TotalMinimumHeightForWidth(self: ?*anyopaque, w: i32) i32 {
        return C.QLayout_TotalMinimumHeightForWidth(@ptrCast(self), @intCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalHeightForWidth)
    ///
    /// ``` self: ?*C.QVBoxLayout, w: i32 ```
    pub fn TotalHeightForWidth(self: ?*anyopaque, w: i32) i32 {
        return C.QLayout_TotalHeightForWidth(@ptrCast(self), @intCast(w));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMinimumSize)
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn TotalMinimumSize(self: ?*anyopaque) ?*C.QSize {
        return C.QLayout_TotalMinimumSize(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMaximumSize)
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn TotalMaximumSize(self: ?*anyopaque) ?*C.QSize {
        return C.QLayout_TotalMaximumSize(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalSizeHint)
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn TotalSizeHint(self: ?*anyopaque) ?*C.QSize {
        return C.QLayout_TotalSizeHint(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setEnabled)
    ///
    /// ``` self: ?*C.QVBoxLayout, enabled: bool ```
    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        C.QLayout_SetEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEnabled)
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return C.QLayout_IsEnabled(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#closestAcceptableSize)
    ///
    /// ``` w: ?*C.QWidget, s: ?*C.QSize ```
    pub fn ClosestAcceptableSize(w: ?*anyopaque, s: ?*anyopaque) ?*C.QSize {
        return C.QLayout_ClosestAcceptableSize(@ptrCast(w), @ptrCast(s));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QVBoxLayout, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QObject_ObjectName(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: ?*C.QVBoxLayout, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QVBoxLayout, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QVBoxLayout, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QVBoxLayout, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QVBoxLayout, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QVBoxLayout, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QObject {
        const _arr: C.struct_libqt_list = C.QObject_Children(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QObject, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: ?*C.QVBoxLayout, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QVBoxLayout, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QVBoxLayout, obj: ?*C.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        C.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) ?*C.QMetaObject__Connection {
        return C.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QVBoxLayout, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, member: ?*C.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return C.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: ?*C.QMetaObject__Connection ```
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return C.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QVBoxLayout, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QVBoxLayout, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QVBoxLayout, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: C.struct_libqt_list = C.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn Destroyed(self: ?*anyopaque) void {
        C.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QVBoxLayout, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QVBoxLayout, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return C.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) ?*C.QMetaObject__Connection {
        return C.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QVBoxLayout, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QVBoxLayout, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#alignment)
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn Alignment(self: ?*anyopaque) i64 {
        return C.QLayoutItem_Alignment(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#addItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, param1: ?*C.QLayoutItem ```
    pub fn AddItem(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QVBoxLayout_AddItem(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, param1: ?*C.QLayoutItem ```
    pub fn QBaseAddItem(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QVBoxLayout_QBaseAddItem(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, slot: fn (?*C.QVBoxLayout, ?*C.QLayoutItem) callconv(.c) void ```
    pub fn OnAddItem(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QVBoxLayout_OnAddItem(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#spacing)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn Spacing(self: ?*anyopaque) i32 {
        return C.QVBoxLayout_Spacing(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn QBaseSpacing(self: ?*anyopaque) i32 {
        return C.QVBoxLayout_QBaseSpacing(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, slot: fn () callconv(.c) i32 ```
    pub fn OnSpacing(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QVBoxLayout_OnSpacing(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setSpacing)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, spacing: i32 ```
    pub fn SetSpacing(self: ?*anyopaque, spacing: i32) void {
        C.QVBoxLayout_SetSpacing(@ptrCast(self), @intCast(spacing));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, spacing: i32 ```
    pub fn QBaseSetSpacing(self: ?*anyopaque, spacing: i32) void {
        C.QVBoxLayout_QBaseSetSpacing(@ptrCast(self), @intCast(spacing));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, slot: fn (?*C.QVBoxLayout, i32) callconv(.c) void ```
    pub fn OnSetSpacing(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QVBoxLayout_OnSetSpacing(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn SizeHint(self: ?*anyopaque) ?*C.QSize {
        return C.QVBoxLayout_SizeHint(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn QBaseSizeHint(self: ?*anyopaque) ?*C.QSize {
        return C.QVBoxLayout_QBaseSizeHint(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, slot: fn () callconv(.c) ?*C.QSize ```
    pub fn OnSizeHint(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QSize) void {
        C.QVBoxLayout_OnSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#minimumSize)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn MinimumSize(self: ?*anyopaque) ?*C.QSize {
        return C.QVBoxLayout_MinimumSize(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn QBaseMinimumSize(self: ?*anyopaque) ?*C.QSize {
        return C.QVBoxLayout_QBaseMinimumSize(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, slot: fn () callconv(.c) ?*C.QSize ```
    pub fn OnMinimumSize(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QSize) void {
        C.QVBoxLayout_OnMinimumSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#maximumSize)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn MaximumSize(self: ?*anyopaque) ?*C.QSize {
        return C.QVBoxLayout_MaximumSize(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn QBaseMaximumSize(self: ?*anyopaque) ?*C.QSize {
        return C.QVBoxLayout_QBaseMaximumSize(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, slot: fn () callconv(.c) ?*C.QSize ```
    pub fn OnMaximumSize(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QSize) void {
        C.QVBoxLayout_OnMaximumSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn HasHeightForWidth(self: ?*anyopaque) bool {
        return C.QVBoxLayout_HasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn QBaseHasHeightForWidth(self: ?*anyopaque) bool {
        return C.QVBoxLayout_QBaseHasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, slot: fn () callconv(.c) bool ```
    pub fn OnHasHeightForWidth(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QVBoxLayout_OnHasHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, param1: i32 ```
    pub fn HeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return C.QVBoxLayout_HeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, param1: i32 ```
    pub fn QBaseHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return C.QVBoxLayout_QBaseHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, slot: fn (?*C.QVBoxLayout, i32) callconv(.c) i32 ```
    pub fn OnHeightForWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        C.QVBoxLayout_OnHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#minimumHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, param1: i32 ```
    pub fn MinimumHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return C.QVBoxLayout_MinimumHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, param1: i32 ```
    pub fn QBaseMinimumHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return C.QVBoxLayout_QBaseMinimumHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, slot: fn (?*C.QVBoxLayout, i32) callconv(.c) i32 ```
    pub fn OnMinimumHeightForWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        C.QVBoxLayout_OnMinimumHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#expandingDirections)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn ExpandingDirections(self: ?*anyopaque) i64 {
        return C.QVBoxLayout_ExpandingDirections(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn QBaseExpandingDirections(self: ?*anyopaque) i64 {
        return C.QVBoxLayout_QBaseExpandingDirections(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, slot: fn () callconv(.c) i64 ```
    pub fn OnExpandingDirections(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        C.QVBoxLayout_OnExpandingDirections(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#invalidate)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn Invalidate(self: ?*anyopaque) void {
        C.QVBoxLayout_Invalidate(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn QBaseInvalidate(self: ?*anyopaque) void {
        C.QVBoxLayout_QBaseInvalidate(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, slot: fn () callconv(.c) void ```
    pub fn OnInvalidate(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QVBoxLayout_OnInvalidate(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#itemAt)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, param1: i32 ```
    pub fn ItemAt(self: ?*anyopaque, param1: i32) ?*C.QLayoutItem {
        return C.QVBoxLayout_ItemAt(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, param1: i32 ```
    pub fn QBaseItemAt(self: ?*anyopaque, param1: i32) ?*C.QLayoutItem {
        return C.QVBoxLayout_QBaseItemAt(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, slot: fn (?*C.QVBoxLayout, i32) callconv(.c) ?*C.QLayoutItem ```
    pub fn OnItemAt(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) ?*C.QLayoutItem) void {
        C.QVBoxLayout_OnItemAt(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#takeAt)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, param1: i32 ```
    pub fn TakeAt(self: ?*anyopaque, param1: i32) ?*C.QLayoutItem {
        return C.QVBoxLayout_TakeAt(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, param1: i32 ```
    pub fn QBaseTakeAt(self: ?*anyopaque, param1: i32) ?*C.QLayoutItem {
        return C.QVBoxLayout_QBaseTakeAt(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, slot: fn (?*C.QVBoxLayout, i32) callconv(.c) ?*C.QLayoutItem ```
    pub fn OnTakeAt(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) ?*C.QLayoutItem) void {
        C.QVBoxLayout_OnTakeAt(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#count)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn Count(self: ?*anyopaque) i32 {
        return C.QVBoxLayout_Count(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn QBaseCount(self: ?*anyopaque) i32 {
        return C.QVBoxLayout_QBaseCount(@ptrCast(self));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, slot: fn () callconv(.c) i32 ```
    pub fn OnCount(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QVBoxLayout_OnCount(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QBoxLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qboxlayout.html#setGeometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, geometry: ?*C.QRect ```
    pub fn SetGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        C.QVBoxLayout_SetGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, geometry: ?*C.QRect ```
    pub fn QBaseSetGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        C.QVBoxLayout_QBaseSetGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    /// Inherited from QBoxLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, slot: fn (?*C.QVBoxLayout, ?*C.QRect) callconv(.c) void ```
    pub fn OnSetGeometry(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QVBoxLayout_OnSetGeometry(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#geometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn Geometry(self: ?*anyopaque) ?*C.QRect {
        return C.QVBoxLayout_Geometry(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn QBaseGeometry(self: ?*anyopaque) ?*C.QRect {
        return C.QVBoxLayout_QBaseGeometry(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, slot: fn () callconv(.c) ?*C.QRect ```
    pub fn OnGeometry(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QRect) void {
        C.QVBoxLayout_OnGeometry(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, param1: ?*C.QWidget ```
    pub fn IndexOf(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return C.QVBoxLayout_IndexOf(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, param1: ?*C.QWidget ```
    pub fn QBaseIndexOf(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return C.QVBoxLayout_QBaseIndexOf(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, slot: fn (?*C.QVBoxLayout, ?*C.QWidget) callconv(.c) i32 ```
    pub fn OnIndexOf(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        C.QVBoxLayout_OnIndexOf(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return C.QVBoxLayout_IsEmpty(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn QBaseIsEmpty(self: ?*anyopaque) bool {
        return C.QVBoxLayout_QBaseIsEmpty(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, slot: fn () callconv(.c) bool ```
    pub fn OnIsEmpty(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QVBoxLayout_OnIsEmpty(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn ControlTypes(self: ?*anyopaque) i64 {
        return C.QVBoxLayout_ControlTypes(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn QBaseControlTypes(self: ?*anyopaque) i64 {
        return C.QVBoxLayout_QBaseControlTypes(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, slot: fn () callconv(.c) i64 ```
    pub fn OnControlTypes(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        C.QVBoxLayout_OnControlTypes(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, from: ?*C.QWidget, to: ?*C.QWidget, options: i32 ```
    pub fn ReplaceWidget(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque, options: i64) ?*C.QLayoutItem {
        return C.QVBoxLayout_ReplaceWidget(@ptrCast(self), @ptrCast(from), @ptrCast(to), @intCast(options));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, from: ?*C.QWidget, to: ?*C.QWidget, options: i32 ```
    pub fn QBaseReplaceWidget(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque, options: i64) ?*C.QLayoutItem {
        return C.QVBoxLayout_QBaseReplaceWidget(@ptrCast(self), @ptrCast(from), @ptrCast(to), @intCast(options));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, slot: fn (?*C.QVBoxLayout, ?*C.QWidget, ?*C.QWidget, i32) callconv(.c) ?*C.QLayoutItem ```
    pub fn OnReplaceWidget(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i64) callconv(.c) ?*C.QLayoutItem) void {
        C.QVBoxLayout_OnReplaceWidget(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#layout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn Layout(self: ?*anyopaque) ?*C.QLayout {
        return C.QVBoxLayout_Layout(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn QBaseLayout(self: ?*anyopaque) ?*C.QLayout {
        return C.QVBoxLayout_QBaseLayout(@ptrCast(self));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, slot: fn () callconv(.c) ?*C.QLayout ```
    pub fn OnLayout(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QLayout) void {
        C.QVBoxLayout_OnLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, e: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QVBoxLayout_ChildEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, e: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QVBoxLayout_QBaseChildEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, slot: fn (?*C.QVBoxLayout, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QVBoxLayout_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QVBoxLayout_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, event: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QVBoxLayout_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, slot: fn (?*C.QVBoxLayout, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QVBoxLayout_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QVBoxLayout_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QVBoxLayout_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, slot: fn (?*C.QVBoxLayout, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QVBoxLayout_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QVBoxLayout_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QVBoxLayout_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, slot: fn (?*C.QVBoxLayout, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QVBoxLayout_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QVBoxLayout_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QVBoxLayout_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, slot: fn (?*C.QVBoxLayout, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QVBoxLayout_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QVBoxLayout_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QVBoxLayout_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, slot: fn (?*C.QVBoxLayout, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QVBoxLayout_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QVBoxLayout_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QVBoxLayout_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, slot: fn (?*C.QVBoxLayout, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QVBoxLayout_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn Widget(self: ?*anyopaque) ?*C.QWidget {
        return C.QVBoxLayout_Widget(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn QBaseWidget(self: ?*anyopaque) ?*C.QWidget {
        return C.QVBoxLayout_QBaseWidget(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, slot: fn () callconv(.c) ?*C.QWidget ```
    pub fn OnWidget(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QWidget) void {
        C.QVBoxLayout_OnWidget(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn SpacerItem(self: ?*anyopaque) ?*C.QSpacerItem {
        return C.QVBoxLayout_SpacerItem(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn QBaseSpacerItem(self: ?*anyopaque) ?*C.QSpacerItem {
        return C.QVBoxLayout_QBaseSpacerItem(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, slot: fn () callconv(.c) ?*C.QSpacerItem ```
    pub fn OnSpacerItem(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QSpacerItem) void {
        C.QVBoxLayout_OnSpacerItem(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, param1: ?*C.QEvent ```
    pub fn WidgetEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QVBoxLayout_WidgetEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, param1: ?*C.QEvent ```
    pub fn QBaseWidgetEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QVBoxLayout_QBaseWidgetEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, slot: fn (?*C.QVBoxLayout, ?*C.QEvent) callconv(.c) void ```
    pub fn OnWidgetEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QVBoxLayout_OnWidgetEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, l: ?*C.QLayout ```
    pub fn AddChildLayout(self: ?*anyopaque, l: ?*anyopaque) void {
        C.QVBoxLayout_AddChildLayout(@ptrCast(self), @ptrCast(l));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, l: ?*C.QLayout ```
    pub fn QBaseAddChildLayout(self: ?*anyopaque, l: ?*anyopaque) void {
        C.QVBoxLayout_QBaseAddChildLayout(@ptrCast(self), @ptrCast(l));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, slot: fn (?*C.QVBoxLayout, ?*C.QLayout) callconv(.c) void ```
    pub fn OnAddChildLayout(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QVBoxLayout_OnAddChildLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, w: ?*C.QWidget ```
    pub fn AddChildWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        C.QVBoxLayout_AddChildWidget(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, w: ?*C.QWidget ```
    pub fn QBaseAddChildWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        C.QVBoxLayout_QBaseAddChildWidget(@ptrCast(self), @ptrCast(w));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, slot: fn (?*C.QVBoxLayout, ?*C.QWidget) callconv(.c) void ```
    pub fn OnAddChildWidget(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QVBoxLayout_OnAddChildWidget(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, layout: ?*C.QLayout ```
    pub fn AdoptLayout(self: ?*anyopaque, layout: ?*anyopaque) bool {
        return C.QVBoxLayout_AdoptLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, layout: ?*C.QLayout ```
    pub fn QBaseAdoptLayout(self: ?*anyopaque, layout: ?*anyopaque) bool {
        return C.QVBoxLayout_QBaseAdoptLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, slot: fn (?*C.QVBoxLayout, ?*C.QLayout) callconv(.c) bool ```
    pub fn OnAdoptLayout(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QVBoxLayout_OnAdoptLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayout
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, param1: ?*C.QRect ```
    pub fn AlignmentRect(self: ?*anyopaque, param1: ?*anyopaque) ?*C.QRect {
        return C.QVBoxLayout_AlignmentRect(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, param1: ?*C.QRect ```
    pub fn QBaseAlignmentRect(self: ?*anyopaque, param1: ?*anyopaque) ?*C.QRect {
        return C.QVBoxLayout_QBaseAlignmentRect(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QLayout
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, slot: fn (?*C.QVBoxLayout, ?*C.QRect) callconv(.c) ?*C.QRect ```
    pub fn OnAlignmentRect(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) ?*C.QRect) void {
        C.QVBoxLayout_OnAlignmentRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QVBoxLayout_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QVBoxLayout_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QVBoxLayout_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QVBoxLayout_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QVBoxLayout_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QVBoxLayout_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QVBoxLayout_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QVBoxLayout_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, slot: fn (?*C.QVBoxLayout, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QVBoxLayout_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QVBoxLayout_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QVBoxLayout_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QVBoxLayout, slot: fn (?*C.QVBoxLayout, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QVBoxLayout_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QVBoxLayout ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QVBoxLayout_Delete(@ptrCast(self));
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
