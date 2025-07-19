const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qlayout_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qlayout.html
pub const qlayout = struct {
    /// New constructs a new QLayout object.
    ///
    /// ``` parent: QtC.QWidget ```
    pub fn New(parent: ?*anyopaque) QtC.QLayout {
        return qtc.QLayout_new(@ptrCast(parent));
    }

    /// New2 constructs a new QLayout object.
    ///
    ///
    pub fn New2() QtC.QLayout {
        return qtc.QLayout_new2();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QLayout ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QLayout_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QLayout, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QLayout_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QLayout_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QLayout, slot: fn (self: QtC.QLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QLayout_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QLayout_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QLayout_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlayout.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#spacing)
    ///
    /// ``` self: QtC.QLayout ```
    pub fn Spacing(self: ?*anyopaque) i32 {
        return qtc.QLayout_Spacing(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#spacing)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QLayout, slot: fn () callconv(.c) i32 ```
    pub fn OnSpacing(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QLayout_OnSpacing(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#spacing)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QLayout ```
    pub fn QBaseSpacing(self: ?*anyopaque) i32 {
        return qtc.QLayout_QBaseSpacing(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setSpacing)
    ///
    /// ``` self: QtC.QLayout, spacing: i32 ```
    pub fn SetSpacing(self: ?*anyopaque, spacing: i32) void {
        qtc.QLayout_SetSpacing(@ptrCast(self), @intCast(spacing));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setSpacing)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QLayout, slot: fn (self: QtC.QLayout, spacing: i32) callconv(.c) void ```
    pub fn OnSetSpacing(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QLayout_OnSetSpacing(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setSpacing)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QLayout, spacing: i32 ```
    pub fn QBaseSetSpacing(self: ?*anyopaque, spacing: i32) void {
        qtc.QLayout_QBaseSetSpacing(@ptrCast(self), @intCast(spacing));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
    ///
    /// ``` self: QtC.QLayout, left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn SetContentsMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QLayout_SetContentsMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setContentsMargins)
    ///
    /// ``` self: QtC.QLayout, margins: QtC.QMargins ```
    pub fn SetContentsMargins2(self: ?*anyopaque, margins: ?*anyopaque) void {
        qtc.QLayout_SetContentsMargins2(@ptrCast(self), @ptrCast(margins));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#unsetContentsMargins)
    ///
    /// ``` self: QtC.QLayout ```
    pub fn UnsetContentsMargins(self: ?*anyopaque) void {
        qtc.QLayout_UnsetContentsMargins(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#getContentsMargins)
    ///
    /// ``` self: QtC.QLayout, left: *i32, top: *i32, right: *i32, bottom: *i32 ```
    pub fn GetContentsMargins(self: ?*anyopaque, left: *i32, top: *i32, right: *i32, bottom: *i32) void {
        qtc.QLayout_GetContentsMargins(@ptrCast(self), @ptrCast(left), @ptrCast(top), @ptrCast(right), @ptrCast(bottom));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#contentsMargins)
    ///
    /// ``` self: QtC.QLayout ```
    pub fn ContentsMargins(self: ?*anyopaque) QtC.QMargins {
        return qtc.QLayout_ContentsMargins(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#contentsRect)
    ///
    /// ``` self: QtC.QLayout ```
    pub fn ContentsRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QLayout_ContentsRect(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
    ///
    /// ``` self: QtC.QLayout, w: QtC.QWidget, alignment: i32 ```
    pub fn SetAlignment(self: ?*anyopaque, w: ?*anyopaque, alignment: i64) bool {
        return qtc.QLayout_SetAlignment(@ptrCast(self), @ptrCast(w), @intCast(alignment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setAlignment)
    ///
    /// ``` self: QtC.QLayout, l: QtC.QLayout, alignment: i32 ```
    pub fn SetAlignment2(self: ?*anyopaque, l: ?*anyopaque, alignment: i64) bool {
        return qtc.QLayout_SetAlignment2(@ptrCast(self), @ptrCast(l), @intCast(alignment));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setSizeConstraint)
    ///
    /// ``` self: QtC.QLayout, sizeConstraint: qlayout_enums.SizeConstraint ```
    pub fn SetSizeConstraint(self: ?*anyopaque, sizeConstraint: i64) void {
        qtc.QLayout_SetSizeConstraint(@ptrCast(self), @intCast(sizeConstraint));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#sizeConstraint)
    ///
    /// ``` self: QtC.QLayout ```
    pub fn SizeConstraint(self: ?*anyopaque) i64 {
        return qtc.QLayout_SizeConstraint(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setMenuBar)
    ///
    /// ``` self: QtC.QLayout, w: QtC.QWidget ```
    pub fn SetMenuBar(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QLayout_SetMenuBar(@ptrCast(self), @ptrCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#menuBar)
    ///
    /// ``` self: QtC.QLayout ```
    pub fn MenuBar(self: ?*anyopaque) QtC.QWidget {
        return qtc.QLayout_MenuBar(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#parentWidget)
    ///
    /// ``` self: QtC.QLayout ```
    pub fn ParentWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QLayout_ParentWidget(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#invalidate)
    ///
    /// ``` self: QtC.QLayout ```
    pub fn Invalidate(self: ?*anyopaque) void {
        qtc.QLayout_Invalidate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#invalidate)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QLayout, slot: fn () callconv(.c) void ```
    pub fn OnInvalidate(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QLayout_OnInvalidate(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#invalidate)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QLayout ```
    pub fn QBaseInvalidate(self: ?*anyopaque) void {
        qtc.QLayout_QBaseInvalidate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#geometry)
    ///
    /// ``` self: QtC.QLayout ```
    pub fn Geometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QLayout_Geometry(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#geometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QLayout, slot: fn () callconv(.c) QtC.QRect ```
    pub fn OnGeometry(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QRect) void {
        qtc.QLayout_OnGeometry(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#geometry)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QLayout ```
    pub fn QBaseGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QLayout_QBaseGeometry(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#activate)
    ///
    /// ``` self: QtC.QLayout ```
    pub fn Activate(self: ?*anyopaque) bool {
        return qtc.QLayout_Activate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#update)
    ///
    /// ``` self: QtC.QLayout ```
    pub fn Update(self: ?*anyopaque) void {
        qtc.QLayout_Update(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addWidget)
    ///
    /// ``` self: QtC.QLayout, w: QtC.QWidget ```
    pub fn AddWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QLayout_AddWidget(@ptrCast(self), @ptrCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addItem)
    ///
    /// ``` self: QtC.QLayout, param1: QtC.QLayoutItem ```
    pub fn AddItem(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLayout_AddItem(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addItem)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QLayout, slot: fn (self: QtC.QLayout, param1: QtC.QLayoutItem) callconv(.c) void ```
    pub fn OnAddItem(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLayout_OnAddItem(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addItem)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QLayout, param1: QtC.QLayoutItem ```
    pub fn QBaseAddItem(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLayout_QBaseAddItem(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#removeWidget)
    ///
    /// ``` self: QtC.QLayout, w: QtC.QWidget ```
    pub fn RemoveWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QLayout_RemoveWidget(@ptrCast(self), @ptrCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#removeItem)
    ///
    /// ``` self: QtC.QLayout, param1: QtC.QLayoutItem ```
    pub fn RemoveItem(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLayout_RemoveItem(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#expandingDirections)
    ///
    /// ``` self: QtC.QLayout ```
    pub fn ExpandingDirections(self: ?*anyopaque) i64 {
        return qtc.QLayout_ExpandingDirections(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#expandingDirections)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QLayout, slot: fn () callconv(.c) i64 ```
    pub fn OnExpandingDirections(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.QLayout_OnExpandingDirections(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#expandingDirections)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QLayout ```
    pub fn QBaseExpandingDirections(self: ?*anyopaque) i64 {
        return qtc.QLayout_QBaseExpandingDirections(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#minimumSize)
    ///
    /// ``` self: QtC.QLayout ```
    pub fn MinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QLayout_MinimumSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#minimumSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QLayout, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnMinimumSize(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.QLayout_OnMinimumSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#minimumSize)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QLayout ```
    pub fn QBaseMinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QLayout_QBaseMinimumSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#maximumSize)
    ///
    /// ``` self: QtC.QLayout ```
    pub fn MaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QLayout_MaximumSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#maximumSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QLayout, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnMaximumSize(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.QLayout_OnMaximumSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#maximumSize)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QLayout ```
    pub fn QBaseMaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QLayout_QBaseMaximumSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setGeometry)
    ///
    /// ``` self: QtC.QLayout, geometry: QtC.QRect ```
    pub fn SetGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QLayout_SetGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setGeometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QLayout, slot: fn (self: QtC.QLayout, geometry: QtC.QRect) callconv(.c) void ```
    pub fn OnSetGeometry(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLayout_OnSetGeometry(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setGeometry)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QLayout, geometry: QtC.QRect ```
    pub fn QBaseSetGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QLayout_QBaseSetGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#itemAt)
    ///
    /// ``` self: QtC.QLayout, index: i32 ```
    pub fn ItemAt(self: ?*anyopaque, index: i32) QtC.QLayoutItem {
        return qtc.QLayout_ItemAt(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#itemAt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QLayout, slot: fn (self: QtC.QLayout, index: i32) callconv(.c) QtC.QLayoutItem ```
    pub fn OnItemAt(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) QtC.QLayoutItem) void {
        qtc.QLayout_OnItemAt(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#itemAt)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QLayout, index: i32 ```
    pub fn QBaseItemAt(self: ?*anyopaque, index: i32) QtC.QLayoutItem {
        return qtc.QLayout_QBaseItemAt(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#takeAt)
    ///
    /// ``` self: QtC.QLayout, index: i32 ```
    pub fn TakeAt(self: ?*anyopaque, index: i32) QtC.QLayoutItem {
        return qtc.QLayout_TakeAt(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#takeAt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QLayout, slot: fn (self: QtC.QLayout, index: i32) callconv(.c) QtC.QLayoutItem ```
    pub fn OnTakeAt(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) QtC.QLayoutItem) void {
        qtc.QLayout_OnTakeAt(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#takeAt)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QLayout, index: i32 ```
    pub fn QBaseTakeAt(self: ?*anyopaque, index: i32) QtC.QLayoutItem {
        return qtc.QLayout_QBaseTakeAt(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// ``` self: QtC.QLayout, param1: QtC.QWidget ```
    pub fn IndexOf(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QLayout_IndexOf(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QLayout, slot: fn (self: QtC.QLayout, param1: QtC.QWidget) callconv(.c) i32 ```
    pub fn OnIndexOf(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QLayout_OnIndexOf(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QLayout, param1: QtC.QWidget ```
    pub fn QBaseIndexOf(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QLayout_QBaseIndexOf(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// ``` self: QtC.QLayout, param1: QtC.QLayoutItem ```
    pub fn IndexOf2(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QLayout_IndexOf2(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QLayout, slot: fn (self: QtC.QLayout, param1: QtC.QLayoutItem) callconv(.c) i32 ```
    pub fn OnIndexOf2(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.QLayout_OnIndexOf2(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#indexOf)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QLayout, param1: QtC.QLayoutItem ```
    pub fn QBaseIndexOf2(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QLayout_QBaseIndexOf2(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#count)
    ///
    /// ``` self: QtC.QLayout ```
    pub fn Count(self: ?*anyopaque) i32 {
        return qtc.QLayout_Count(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#count)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QLayout, slot: fn () callconv(.c) i32 ```
    pub fn OnCount(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QLayout_OnCount(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#count)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QLayout ```
    pub fn QBaseCount(self: ?*anyopaque) i32 {
        return qtc.QLayout_QBaseCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
    ///
    /// ``` self: QtC.QLayout ```
    pub fn IsEmpty(self: ?*anyopaque) bool {
        return qtc.QLayout_IsEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QLayout, slot: fn () callconv(.c) bool ```
    pub fn OnIsEmpty(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QLayout_OnIsEmpty(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEmpty)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QLayout ```
    pub fn QBaseIsEmpty(self: ?*anyopaque) bool {
        return qtc.QLayout_QBaseIsEmpty(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
    ///
    /// ``` self: QtC.QLayout ```
    pub fn ControlTypes(self: ?*anyopaque) i64 {
        return qtc.QLayout_ControlTypes(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QLayout, slot: fn () callconv(.c) i64 ```
    pub fn OnControlTypes(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.QLayout_OnControlTypes(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#controlTypes)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QLayout ```
    pub fn QBaseControlTypes(self: ?*anyopaque) i64 {
        return qtc.QLayout_QBaseControlTypes(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
    ///
    /// ``` self: QtC.QLayout, from: QtC.QWidget, to: QtC.QWidget, options: i32 ```
    pub fn ReplaceWidget(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque, options: i64) QtC.QLayoutItem {
        return qtc.QLayout_ReplaceWidget(@ptrCast(self), @ptrCast(from), @ptrCast(to), @intCast(options));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QLayout, slot: fn (self: QtC.QLayout, from: QtC.QWidget, to: QtC.QWidget, options: i32) callconv(.c) QtC.QLayoutItem ```
    pub fn OnReplaceWidget(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i64) callconv(.c) QtC.QLayoutItem) void {
        qtc.QLayout_OnReplaceWidget(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#replaceWidget)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QLayout, from: QtC.QWidget, to: QtC.QWidget, options: i32 ```
    pub fn QBaseReplaceWidget(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque, options: i64) QtC.QLayoutItem {
        return qtc.QLayout_QBaseReplaceWidget(@ptrCast(self), @ptrCast(from), @ptrCast(to), @intCast(options));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMinimumHeightForWidth)
    ///
    /// ``` self: QtC.QLayout, w: i32 ```
    pub fn TotalMinimumHeightForWidth(self: ?*anyopaque, w: i32) i32 {
        return qtc.QLayout_TotalMinimumHeightForWidth(@ptrCast(self), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalHeightForWidth)
    ///
    /// ``` self: QtC.QLayout, w: i32 ```
    pub fn TotalHeightForWidth(self: ?*anyopaque, w: i32) i32 {
        return qtc.QLayout_TotalHeightForWidth(@ptrCast(self), @intCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMinimumSize)
    ///
    /// ``` self: QtC.QLayout ```
    pub fn TotalMinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QLayout_TotalMinimumSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalMaximumSize)
    ///
    /// ``` self: QtC.QLayout ```
    pub fn TotalMaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QLayout_TotalMaximumSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#totalSizeHint)
    ///
    /// ``` self: QtC.QLayout ```
    pub fn TotalSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QLayout_TotalSizeHint(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#layout)
    ///
    /// ``` self: QtC.QLayout ```
    pub fn Layout(self: ?*anyopaque) QtC.QLayout {
        return qtc.QLayout_Layout(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#layout)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QLayout, slot: fn () callconv(.c) QtC.QLayout ```
    pub fn OnLayout(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QLayout) void {
        qtc.QLayout_OnLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#layout)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QLayout ```
    pub fn QBaseLayout(self: ?*anyopaque) QtC.QLayout {
        return qtc.QLayout_QBaseLayout(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#setEnabled)
    ///
    /// ``` self: QtC.QLayout, enabled: bool ```
    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QLayout_SetEnabled(@ptrCast(self), enabled);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#isEnabled)
    ///
    /// ``` self: QtC.QLayout ```
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return qtc.QLayout_IsEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#closestAcceptableSize)
    ///
    /// ``` w: QtC.QWidget, s: QtC.QSize ```
    pub fn ClosestAcceptableSize(w: ?*anyopaque, s: ?*anyopaque) QtC.QSize {
        return qtc.QLayout_ClosestAcceptableSize(@ptrCast(w), @ptrCast(s));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
    ///
    /// ``` self: QtC.QLayout, param1: QtC.QEvent ```
    pub fn WidgetEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLayout_WidgetEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QLayout, slot: fn (self: QtC.QLayout, param1: QtC.QEvent) callconv(.c) void ```
    pub fn OnWidgetEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLayout_OnWidgetEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#widgetEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QLayout, param1: QtC.QEvent ```
    pub fn QBaseWidgetEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLayout_QBaseWidgetEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#childEvent)
    ///
    /// ``` self: QtC.QLayout, e: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QLayout_ChildEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#childEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QLayout, slot: fn (self: QtC.QLayout, e: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLayout_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#childEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QLayout, e: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QLayout_QBaseChildEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
    ///
    /// ``` self: QtC.QLayout, l: QtC.QLayout ```
    pub fn AddChildLayout(self: ?*anyopaque, l: ?*anyopaque) void {
        qtc.QLayout_AddChildLayout(@ptrCast(self), @ptrCast(l));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QLayout, slot: fn (self: QtC.QLayout, l: QtC.QLayout) callconv(.c) void ```
    pub fn OnAddChildLayout(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLayout_OnAddChildLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildLayout)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QLayout, l: QtC.QLayout ```
    pub fn QBaseAddChildLayout(self: ?*anyopaque, l: ?*anyopaque) void {
        qtc.QLayout_QBaseAddChildLayout(@ptrCast(self), @ptrCast(l));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
    ///
    /// ``` self: QtC.QLayout, w: QtC.QWidget ```
    pub fn AddChildWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QLayout_AddChildWidget(@ptrCast(self), @ptrCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QLayout, slot: fn (self: QtC.QLayout, w: QtC.QWidget) callconv(.c) void ```
    pub fn OnAddChildWidget(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLayout_OnAddChildWidget(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#addChildWidget)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QLayout, w: QtC.QWidget ```
    pub fn QBaseAddChildWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QLayout_QBaseAddChildWidget(@ptrCast(self), @ptrCast(w));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
    ///
    /// ``` self: QtC.QLayout, layout: QtC.QLayout ```
    pub fn AdoptLayout(self: ?*anyopaque, layout: ?*anyopaque) bool {
        return qtc.QLayout_AdoptLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QLayout, slot: fn (self: QtC.QLayout, layout: QtC.QLayout) callconv(.c) bool ```
    pub fn OnAdoptLayout(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QLayout_OnAdoptLayout(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#adoptLayout)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QLayout, layout: QtC.QLayout ```
    pub fn QBaseAdoptLayout(self: ?*anyopaque, layout: ?*anyopaque) bool {
        return qtc.QLayout_QBaseAdoptLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
    ///
    /// ``` self: QtC.QLayout, param1: QtC.QRect ```
    pub fn AlignmentRect(self: ?*anyopaque, param1: ?*anyopaque) QtC.QRect {
        return qtc.QLayout_AlignmentRect(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QLayout, slot: fn (self: QtC.QLayout, param1: QtC.QRect) callconv(.c) QtC.QRect ```
    pub fn OnAlignmentRect(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QRect) void {
        qtc.QLayout_OnAlignmentRect(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#alignmentRect)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QLayout, param1: QtC.QRect ```
    pub fn QBaseAlignmentRect(self: ?*anyopaque, param1: ?*anyopaque) QtC.QRect {
        return qtc.QLayout_QBaseAlignmentRect(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QLayout_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlayout.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QLayout_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlayout.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QLayout, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlayout.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QLayout, name: []const u8 ```
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
    /// ``` self: QtC.QLayout ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QLayout ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QLayout ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QLayout ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QLayout, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QLayout ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QLayout, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QLayout, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QLayout, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QLayout, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i64) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QLayout, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.struct_libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qlayout.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QLayout, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QLayout, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QLayout, obj: QtC.QObject ```
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
    /// ``` self: QtC.QLayout, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.QLayout ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QLayout ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QLayout, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QLayout, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QLayout, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qlayout.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qlayout.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QLayout ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QLayout ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QLayout ```
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
    /// ``` self: QtC.QLayout ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QLayout, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QLayout ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QLayout, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QLayout, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.QLayout, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QLayout, param1: QtC.QObject ```
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
    /// ``` self: QtC.QLayout ```
    pub fn Alignment(self: ?*anyopaque) i64 {
        return qtc.QLayoutItem_Alignment(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLayout, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QLayout_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLayout, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QLayout_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLayout, slot: fn (self: QtC.QLayout, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QLayout_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLayout, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QLayout_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLayout, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QLayout_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLayout, slot: fn (self: QtC.QLayout, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QLayout_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLayout, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLayout_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLayout, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLayout_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLayout, slot: fn (self: QtC.QLayout, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLayout_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLayout, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLayout_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLayout, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLayout_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLayout, slot: fn (self: QtC.QLayout, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLayout_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLayout, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QLayout_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLayout, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QLayout_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLayout, slot: fn (self: QtC.QLayout, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLayout_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLayout, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QLayout_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLayout, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QLayout_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLayout, slot: fn (self: QtC.QLayout, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLayout_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLayout ```
    pub fn SizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QLayout_SizeHint(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#sizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLayout ```
    pub fn QBaseSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QLayout_QBaseSizeHint(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLayout, slot: fn () callconv(.c) QtC.QSize ```
    pub fn OnSizeHint(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSize) void {
        qtc.QLayout_OnSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLayout ```
    pub fn HasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.QLayout_HasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLayout ```
    pub fn QBaseHasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.QLayout_QBaseHasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLayout, slot: fn () callconv(.c) bool ```
    pub fn OnHasHeightForWidth(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QLayout_OnHasHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLayout, param1: i32 ```
    pub fn HeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QLayout_HeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#heightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLayout, param1: i32 ```
    pub fn QBaseHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QLayout_QBaseHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLayout, slot: fn (self: QtC.QLayout, param1: i32) callconv(.c) i32 ```
    pub fn OnHeightForWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QLayout_OnHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLayout, param1: i32 ```
    pub fn MinimumHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QLayout_MinimumHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLayout, param1: i32 ```
    pub fn QBaseMinimumHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QLayout_QBaseMinimumHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#minimumHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLayout, slot: fn (self: QtC.QLayout, param1: i32) callconv(.c) i32 ```
    pub fn OnMinimumHeightForWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QLayout_OnMinimumHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLayout ```
    pub fn Widget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QLayout_Widget(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLayout ```
    pub fn QBaseWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QLayout_QBaseWidget(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#widget)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLayout, slot: fn () callconv(.c) QtC.QWidget ```
    pub fn OnWidget(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QWidget) void {
        qtc.QLayout_OnWidget(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLayout ```
    pub fn SpacerItem(self: ?*anyopaque) QtC.QSpacerItem {
        return qtc.QLayout_SpacerItem(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLayout ```
    pub fn QBaseSpacerItem(self: ?*anyopaque) QtC.QSpacerItem {
        return qtc.QLayout_QBaseSpacerItem(@ptrCast(self));
    }

    /// Inherited from QLayoutItem
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qlayoutitem.html#spacerItem)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLayout, slot: fn () callconv(.c) QtC.QSpacerItem ```
    pub fn OnSpacerItem(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QSpacerItem) void {
        qtc.QLayout_OnSpacerItem(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLayout ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QLayout_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLayout ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QLayout_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLayout, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QLayout_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLayout ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QLayout_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLayout ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QLayout_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLayout, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QLayout_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLayout, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QLayout_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLayout, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QLayout_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLayout, slot: fn (self: QtC.QLayout, signal: []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        qtc.QLayout_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLayout, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QLayout_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLayout, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QLayout_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLayout, slot: fn (self: QtC.QLayout, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QLayout_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QLayout, slot: fn (self: QtC.QObject, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlayout.html#dtor.QLayout)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QLayout ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QLayout_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qlayout.html#types
pub const enums = struct {
    pub const SizeConstraint = enum {
        pub const SetDefaultConstraint: i32 = 0;
        pub const SetNoConstraint: i32 = 1;
        pub const SetMinimumSize: i32 = 2;
        pub const SetFixedSize: i32 = 3;
        pub const SetMaximumSize: i32 = 4;
        pub const SetMinAndMaxSize: i32 = 5;
    };
};
