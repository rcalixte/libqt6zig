const C = @import("qt6c");
const qabstractslider_enums = @import("libqabstractslider.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("libqpaintdevice.zig").enums;
const qpalette_enums = @import("libqpalette.zig").enums;
const qsizepolicy_enums = @import("libqsizepolicy.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qdial.html
pub const qdial = struct {
    /// New constructs a new QDial object.
    ///
    /// ``` parent: ?*C.QWidget ```
    pub fn New(parent: ?*anyopaque) ?*C.QDial {
        return C.QDial_new(@ptrCast(parent));
    }

    /// New2 constructs a new QDial object.
    ///
    ///
    pub fn New2() ?*C.QDial {
        return C.QDial_new2();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QDial_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QDial, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QDial_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QDial, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QDial_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QDial, slot: fn (?*C.QDial, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QDial_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QDial, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QDial_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QDial_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdial.html#wrapping)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn Wrapping(self: ?*anyopaque) bool {
        return C.QDial_Wrapping(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdial.html#notchSize)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn NotchSize(self: ?*anyopaque) i32 {
        return C.QDial_NotchSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdial.html#setNotchTarget)
    ///
    /// ``` self: ?*C.QDial, target: f64 ```
    pub fn SetNotchTarget(self: ?*anyopaque, target: f64) void {
        C.QDial_SetNotchTarget(@ptrCast(self), @floatCast(target));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdial.html#notchTarget)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn NotchTarget(self: ?*anyopaque) f64 {
        return C.QDial_NotchTarget(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdial.html#notchesVisible)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn NotchesVisible(self: ?*anyopaque) bool {
        return C.QDial_NotchesVisible(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdial.html#sizeHint)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn SizeHint(self: ?*anyopaque) ?*C.QSize {
        return C.QDial_SizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QDial, slot: fn () callconv(.c) ?*C.QSize ```
    pub fn OnSizeHint(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QSize) void {
        C.QDial_OnSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QDial ```
    pub fn QBaseSizeHint(self: ?*anyopaque) ?*C.QSize {
        return C.QDial_QBaseSizeHint(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdial.html#minimumSizeHint)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn MinimumSizeHint(self: ?*anyopaque) ?*C.QSize {
        return C.QDial_MinimumSizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QDial, slot: fn () callconv(.c) ?*C.QSize ```
    pub fn OnMinimumSizeHint(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QSize) void {
        C.QDial_OnMinimumSizeHint(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QDial ```
    pub fn QBaseMinimumSizeHint(self: ?*anyopaque) ?*C.QSize {
        return C.QDial_QBaseMinimumSizeHint(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdial.html#setNotchesVisible)
    ///
    /// ``` self: ?*C.QDial, visible: bool ```
    pub fn SetNotchesVisible(self: ?*anyopaque, visible: bool) void {
        C.QDial_SetNotchesVisible(@ptrCast(self), visible);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdial.html#setWrapping)
    ///
    /// ``` self: ?*C.QDial, on: bool ```
    pub fn SetWrapping(self: ?*anyopaque, on: bool) void {
        C.QDial_SetWrapping(@ptrCast(self), on);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdial.html#event)
    ///
    /// ``` self: ?*C.QDial, e: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, e: ?*anyopaque) bool {
        return C.QDial_Event(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QDial, slot: fn (?*C.QDial, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QDial_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QDial, e: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return C.QDial_QBaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdial.html#resizeEvent)
    ///
    /// ``` self: ?*C.QDial, re: ?*C.QResizeEvent ```
    pub fn ResizeEvent(self: ?*anyopaque, re: ?*anyopaque) void {
        C.QDial_ResizeEvent(@ptrCast(self), @ptrCast(re));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QDial, slot: fn (?*C.QDial, ?*C.QResizeEvent) callconv(.c) void ```
    pub fn OnResizeEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QDial_OnResizeEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QDial, re: ?*C.QResizeEvent ```
    pub fn QBaseResizeEvent(self: ?*anyopaque, re: ?*anyopaque) void {
        C.QDial_QBaseResizeEvent(@ptrCast(self), @ptrCast(re));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdial.html#paintEvent)
    ///
    /// ``` self: ?*C.QDial, pe: ?*C.QPaintEvent ```
    pub fn PaintEvent(self: ?*anyopaque, pe: ?*anyopaque) void {
        C.QDial_PaintEvent(@ptrCast(self), @ptrCast(pe));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QDial, slot: fn (?*C.QDial, ?*C.QPaintEvent) callconv(.c) void ```
    pub fn OnPaintEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QDial_OnPaintEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QDial, pe: ?*C.QPaintEvent ```
    pub fn QBasePaintEvent(self: ?*anyopaque, pe: ?*anyopaque) void {
        C.QDial_QBasePaintEvent(@ptrCast(self), @ptrCast(pe));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdial.html#mousePressEvent)
    ///
    /// ``` self: ?*C.QDial, me: ?*C.QMouseEvent ```
    pub fn MousePressEvent(self: ?*anyopaque, me: ?*anyopaque) void {
        C.QDial_MousePressEvent(@ptrCast(self), @ptrCast(me));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QDial, slot: fn (?*C.QDial, ?*C.QMouseEvent) callconv(.c) void ```
    pub fn OnMousePressEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QDial_OnMousePressEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QDial, me: ?*C.QMouseEvent ```
    pub fn QBaseMousePressEvent(self: ?*anyopaque, me: ?*anyopaque) void {
        C.QDial_QBaseMousePressEvent(@ptrCast(self), @ptrCast(me));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdial.html#mouseReleaseEvent)
    ///
    /// ``` self: ?*C.QDial, me: ?*C.QMouseEvent ```
    pub fn MouseReleaseEvent(self: ?*anyopaque, me: ?*anyopaque) void {
        C.QDial_MouseReleaseEvent(@ptrCast(self), @ptrCast(me));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QDial, slot: fn (?*C.QDial, ?*C.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QDial_OnMouseReleaseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QDial, me: ?*C.QMouseEvent ```
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, me: ?*anyopaque) void {
        C.QDial_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(me));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdial.html#mouseMoveEvent)
    ///
    /// ``` self: ?*C.QDial, me: ?*C.QMouseEvent ```
    pub fn MouseMoveEvent(self: ?*anyopaque, me: ?*anyopaque) void {
        C.QDial_MouseMoveEvent(@ptrCast(self), @ptrCast(me));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QDial, slot: fn (?*C.QDial, ?*C.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QDial_OnMouseMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QDial, me: ?*C.QMouseEvent ```
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, me: ?*anyopaque) void {
        C.QDial_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(me));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdial.html#sliderChange)
    ///
    /// ``` self: ?*C.QDial, change: qabstractslider_enums.SliderChange ```
    pub fn SliderChange(self: ?*anyopaque, change: i64) void {
        C.QDial_SliderChange(@ptrCast(self), @intCast(change));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QDial, slot: fn (?*C.QDial, qabstractslider_enums.SliderChange) callconv(.c) void ```
    pub fn OnSliderChange(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QDial_OnSliderChange(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QDial, change: qabstractslider_enums.SliderChange ```
    pub fn QBaseSliderChange(self: ?*anyopaque, change: i64) void {
        C.QDial_QBaseSliderChange(@ptrCast(self), @intCast(change));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdial.html#initStyleOption)
    ///
    /// ``` self: ?*C.QDial, option: ?*C.QStyleOptionSlider ```
    pub fn InitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        C.QDial_InitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QDial, slot: fn (?*C.QDial, ?*C.QStyleOptionSlider) callconv(.c) void ```
    pub fn OnInitStyleOption(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QDial_OnInitStyleOption(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QDial, option: ?*C.QStyleOptionSlider ```
    pub fn QBaseInitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        C.QDial_QBaseInitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QDial_Tr2(s_Cstring, c_Cstring);
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
        const _str = C.QDial_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QAbstractSlider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#orientation)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn Orientation(self: ?*anyopaque) i64 {
        return C.QAbstractSlider_Orientation(@ptrCast(self));
    }

    /// Inherited from QAbstractSlider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setMinimum)
    ///
    /// ``` self: ?*C.QDial, minimum: i32 ```
    pub fn SetMinimum(self: ?*anyopaque, minimum: i32) void {
        C.QAbstractSlider_SetMinimum(@ptrCast(self), @intCast(minimum));
    }

    /// Inherited from QAbstractSlider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#minimum)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn Minimum(self: ?*anyopaque) i32 {
        return C.QAbstractSlider_Minimum(@ptrCast(self));
    }

    /// Inherited from QAbstractSlider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setMaximum)
    ///
    /// ``` self: ?*C.QDial, maximum: i32 ```
    pub fn SetMaximum(self: ?*anyopaque, maximum: i32) void {
        C.QAbstractSlider_SetMaximum(@ptrCast(self), @intCast(maximum));
    }

    /// Inherited from QAbstractSlider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#maximum)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn Maximum(self: ?*anyopaque) i32 {
        return C.QAbstractSlider_Maximum(@ptrCast(self));
    }

    /// Inherited from QAbstractSlider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setSingleStep)
    ///
    /// ``` self: ?*C.QDial, singleStep: i32 ```
    pub fn SetSingleStep(self: ?*anyopaque, singleStep: i32) void {
        C.QAbstractSlider_SetSingleStep(@ptrCast(self), @intCast(singleStep));
    }

    /// Inherited from QAbstractSlider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#singleStep)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn SingleStep(self: ?*anyopaque) i32 {
        return C.QAbstractSlider_SingleStep(@ptrCast(self));
    }

    /// Inherited from QAbstractSlider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setPageStep)
    ///
    /// ``` self: ?*C.QDial, pageStep: i32 ```
    pub fn SetPageStep(self: ?*anyopaque, pageStep: i32) void {
        C.QAbstractSlider_SetPageStep(@ptrCast(self), @intCast(pageStep));
    }

    /// Inherited from QAbstractSlider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#pageStep)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn PageStep(self: ?*anyopaque) i32 {
        return C.QAbstractSlider_PageStep(@ptrCast(self));
    }

    /// Inherited from QAbstractSlider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setTracking)
    ///
    /// ``` self: ?*C.QDial, enable: bool ```
    pub fn SetTracking(self: ?*anyopaque, enable: bool) void {
        C.QAbstractSlider_SetTracking(@ptrCast(self), enable);
    }

    /// Inherited from QAbstractSlider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#hasTracking)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn HasTracking(self: ?*anyopaque) bool {
        return C.QAbstractSlider_HasTracking(@ptrCast(self));
    }

    /// Inherited from QAbstractSlider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setSliderDown)
    ///
    /// ``` self: ?*C.QDial, sliderDown: bool ```
    pub fn SetSliderDown(self: ?*anyopaque, sliderDown: bool) void {
        C.QAbstractSlider_SetSliderDown(@ptrCast(self), sliderDown);
    }

    /// Inherited from QAbstractSlider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#isSliderDown)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn IsSliderDown(self: ?*anyopaque) bool {
        return C.QAbstractSlider_IsSliderDown(@ptrCast(self));
    }

    /// Inherited from QAbstractSlider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setSliderPosition)
    ///
    /// ``` self: ?*C.QDial, sliderPosition: i32 ```
    pub fn SetSliderPosition(self: ?*anyopaque, sliderPosition: i32) void {
        C.QAbstractSlider_SetSliderPosition(@ptrCast(self), @intCast(sliderPosition));
    }

    /// Inherited from QAbstractSlider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#sliderPosition)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn SliderPosition(self: ?*anyopaque) i32 {
        return C.QAbstractSlider_SliderPosition(@ptrCast(self));
    }

    /// Inherited from QAbstractSlider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setInvertedAppearance)
    ///
    /// ``` self: ?*C.QDial, invertedAppearance: bool ```
    pub fn SetInvertedAppearance(self: ?*anyopaque, invertedAppearance: bool) void {
        C.QAbstractSlider_SetInvertedAppearance(@ptrCast(self), invertedAppearance);
    }

    /// Inherited from QAbstractSlider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#invertedAppearance)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn InvertedAppearance(self: ?*anyopaque) bool {
        return C.QAbstractSlider_InvertedAppearance(@ptrCast(self));
    }

    /// Inherited from QAbstractSlider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setInvertedControls)
    ///
    /// ``` self: ?*C.QDial, invertedControls: bool ```
    pub fn SetInvertedControls(self: ?*anyopaque, invertedControls: bool) void {
        C.QAbstractSlider_SetInvertedControls(@ptrCast(self), invertedControls);
    }

    /// Inherited from QAbstractSlider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#invertedControls)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn InvertedControls(self: ?*anyopaque) bool {
        return C.QAbstractSlider_InvertedControls(@ptrCast(self));
    }

    /// Inherited from QAbstractSlider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#value)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn Value(self: ?*anyopaque) i32 {
        return C.QAbstractSlider_Value(@ptrCast(self));
    }

    /// Inherited from QAbstractSlider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#triggerAction)
    ///
    /// ``` self: ?*C.QDial, action: qabstractslider_enums.SliderAction ```
    pub fn TriggerAction(self: ?*anyopaque, action: i64) void {
        C.QAbstractSlider_TriggerAction(@ptrCast(self), @intCast(action));
    }

    /// Inherited from QAbstractSlider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setValue)
    ///
    /// ``` self: ?*C.QDial, value: i32 ```
    pub fn SetValue(self: ?*anyopaque, value: i32) void {
        C.QAbstractSlider_SetValue(@ptrCast(self), @intCast(value));
    }

    /// Inherited from QAbstractSlider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setOrientation)
    ///
    /// ``` self: ?*C.QDial, orientation: qnamespace_enums.Orientation ```
    pub fn SetOrientation(self: ?*anyopaque, orientation: i64) void {
        C.QAbstractSlider_SetOrientation(@ptrCast(self), @intCast(orientation));
    }

    /// Inherited from QAbstractSlider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setRange)
    ///
    /// ``` self: ?*C.QDial, min: i32, max: i32 ```
    pub fn SetRange(self: ?*anyopaque, min: i32, max: i32) void {
        C.QAbstractSlider_SetRange(@ptrCast(self), @intCast(min), @intCast(max));
    }

    /// Inherited from QAbstractSlider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#valueChanged)
    ///
    /// ``` self: ?*C.QDial, value: i32 ```
    pub fn ValueChanged(self: ?*anyopaque, value: i32) void {
        C.QAbstractSlider_ValueChanged(@ptrCast(self), @intCast(value));
    }

    /// Inherited from QAbstractSlider
    ///
    /// ``` self: ?*C.QAbstractSlider, slot: fn (?*C.QAbstractSlider, i32) callconv(.c) void ```
    pub fn OnValueChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QAbstractSlider_Connect_ValueChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSlider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#sliderPressed)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn SliderPressed(self: ?*anyopaque) void {
        C.QAbstractSlider_SliderPressed(@ptrCast(self));
    }

    /// Inherited from QAbstractSlider
    ///
    /// ``` self: ?*C.QAbstractSlider, slot: fn (?*C.QAbstractSlider) callconv(.c) void ```
    pub fn OnSliderPressed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QAbstractSlider_Connect_SliderPressed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSlider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#sliderMoved)
    ///
    /// ``` self: ?*C.QDial, position: i32 ```
    pub fn SliderMoved(self: ?*anyopaque, position: i32) void {
        C.QAbstractSlider_SliderMoved(@ptrCast(self), @intCast(position));
    }

    /// Inherited from QAbstractSlider
    ///
    /// ``` self: ?*C.QAbstractSlider, slot: fn (?*C.QAbstractSlider, i32) callconv(.c) void ```
    pub fn OnSliderMoved(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QAbstractSlider_Connect_SliderMoved(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSlider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#sliderReleased)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn SliderReleased(self: ?*anyopaque) void {
        C.QAbstractSlider_SliderReleased(@ptrCast(self));
    }

    /// Inherited from QAbstractSlider
    ///
    /// ``` self: ?*C.QAbstractSlider, slot: fn (?*C.QAbstractSlider) callconv(.c) void ```
    pub fn OnSliderReleased(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QAbstractSlider_Connect_SliderReleased(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSlider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#rangeChanged)
    ///
    /// ``` self: ?*C.QDial, min: i32, max: i32 ```
    pub fn RangeChanged(self: ?*anyopaque, min: i32, max: i32) void {
        C.QAbstractSlider_RangeChanged(@ptrCast(self), @intCast(min), @intCast(max));
    }

    /// Inherited from QAbstractSlider
    ///
    /// ``` self: ?*C.QAbstractSlider, slot: fn (?*C.QAbstractSlider, i32, i32) callconv(.c) void ```
    pub fn OnRangeChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        C.QAbstractSlider_Connect_RangeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSlider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#actionTriggered)
    ///
    /// ``` self: ?*C.QDial, action: i32 ```
    pub fn ActionTriggered(self: ?*anyopaque, action: i32) void {
        C.QAbstractSlider_ActionTriggered(@ptrCast(self), @intCast(action));
    }

    /// Inherited from QAbstractSlider
    ///
    /// ``` self: ?*C.QAbstractSlider, slot: fn (?*C.QAbstractSlider, i32) callconv(.c) void ```
    pub fn OnActionTriggered(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QAbstractSlider_Connect_ActionTriggered(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn WinId(self: ?*anyopaque) usize {
        return C.QWidget_WinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn CreateWinId(self: ?*anyopaque) void {
        C.QWidget_CreateWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn InternalWinId(self: ?*anyopaque) usize {
        return C.QWidget_InternalWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn EffectiveWinId(self: ?*anyopaque) usize {
        return C.QWidget_EffectiveWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn Style(self: ?*anyopaque) ?*C.QStyle {
        return C.QWidget_Style(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ``` self: ?*C.QDial, style: ?*C.QStyle ```
    pub fn SetStyle(self: ?*anyopaque, style: ?*anyopaque) void {
        C.QWidget_SetStyle(@ptrCast(self), @ptrCast(style));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn IsTopLevel(self: ?*anyopaque) bool {
        return C.QWidget_IsTopLevel(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn IsWindow(self: ?*anyopaque) bool {
        return C.QWidget_IsWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn IsModal(self: ?*anyopaque) bool {
        return C.QWidget_IsModal(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn WindowModality(self: ?*anyopaque) i64 {
        return C.QWidget_WindowModality(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ``` self: ?*C.QDial, windowModality: qnamespace_enums.WindowModality ```
    pub fn SetWindowModality(self: ?*anyopaque, windowModality: i64) void {
        C.QWidget_SetWindowModality(@ptrCast(self), @intCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return C.QWidget_IsEnabled(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ``` self: ?*C.QDial, param1: ?*C.QWidget ```
    pub fn IsEnabledTo(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return C.QWidget_IsEnabledTo(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ``` self: ?*C.QDial, enabled: bool ```
    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        C.QWidget_SetEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ``` self: ?*C.QDial, disabled: bool ```
    pub fn SetDisabled(self: ?*anyopaque, disabled: bool) void {
        C.QWidget_SetDisabled(@ptrCast(self), disabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ``` self: ?*C.QDial, windowModified: bool ```
    pub fn SetWindowModified(self: ?*anyopaque, windowModified: bool) void {
        C.QWidget_SetWindowModified(@ptrCast(self), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn FrameGeometry(self: ?*anyopaque) ?*C.QRect {
        return C.QWidget_FrameGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn Geometry(self: ?*anyopaque) ?*C.QRect {
        return C.QWidget_Geometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn NormalGeometry(self: ?*anyopaque) ?*C.QRect {
        return C.QWidget_NormalGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn X(self: ?*anyopaque) i32 {
        return C.QWidget_X(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn Y(self: ?*anyopaque) i32 {
        return C.QWidget_Y(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn Pos(self: ?*anyopaque) ?*C.QPoint {
        return C.QWidget_Pos(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn FrameSize(self: ?*anyopaque) ?*C.QSize {
        return C.QWidget_FrameSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn Size(self: ?*anyopaque) ?*C.QSize {
        return C.QWidget_Size(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn Width(self: ?*anyopaque) i32 {
        return C.QWidget_Width(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn Height(self: ?*anyopaque) i32 {
        return C.QWidget_Height(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn Rect(self: ?*anyopaque) ?*C.QRect {
        return C.QWidget_Rect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn ChildrenRect(self: ?*anyopaque) ?*C.QRect {
        return C.QWidget_ChildrenRect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn ChildrenRegion(self: ?*anyopaque) ?*C.QRegion {
        return C.QWidget_ChildrenRegion(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn MinimumSize(self: ?*anyopaque) ?*C.QSize {
        return C.QWidget_MinimumSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn MaximumSize(self: ?*anyopaque) ?*C.QSize {
        return C.QWidget_MaximumSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn MinimumWidth(self: ?*anyopaque) i32 {
        return C.QWidget_MinimumWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn MinimumHeight(self: ?*anyopaque) i32 {
        return C.QWidget_MinimumHeight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn MaximumWidth(self: ?*anyopaque) i32 {
        return C.QWidget_MaximumWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn MaximumHeight(self: ?*anyopaque) i32 {
        return C.QWidget_MaximumHeight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ``` self: ?*C.QDial, minimumSize: ?*C.QSize ```
    pub fn SetMinimumSize(self: ?*anyopaque, minimumSize: ?*anyopaque) void {
        C.QWidget_SetMinimumSize(@ptrCast(self), @ptrCast(minimumSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ``` self: ?*C.QDial, minw: i32, minh: i32 ```
    pub fn SetMinimumSize2(self: ?*anyopaque, minw: i32, minh: i32) void {
        C.QWidget_SetMinimumSize2(@ptrCast(self), @intCast(minw), @intCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ``` self: ?*C.QDial, maximumSize: ?*C.QSize ```
    pub fn SetMaximumSize(self: ?*anyopaque, maximumSize: ?*anyopaque) void {
        C.QWidget_SetMaximumSize(@ptrCast(self), @ptrCast(maximumSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ``` self: ?*C.QDial, maxw: i32, maxh: i32 ```
    pub fn SetMaximumSize2(self: ?*anyopaque, maxw: i32, maxh: i32) void {
        C.QWidget_SetMaximumSize2(@ptrCast(self), @intCast(maxw), @intCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ``` self: ?*C.QDial, minw: i32 ```
    pub fn SetMinimumWidth(self: ?*anyopaque, minw: i32) void {
        C.QWidget_SetMinimumWidth(@ptrCast(self), @intCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ``` self: ?*C.QDial, minh: i32 ```
    pub fn SetMinimumHeight(self: ?*anyopaque, minh: i32) void {
        C.QWidget_SetMinimumHeight(@ptrCast(self), @intCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ``` self: ?*C.QDial, maxw: i32 ```
    pub fn SetMaximumWidth(self: ?*anyopaque, maxw: i32) void {
        C.QWidget_SetMaximumWidth(@ptrCast(self), @intCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ``` self: ?*C.QDial, maxh: i32 ```
    pub fn SetMaximumHeight(self: ?*anyopaque, maxh: i32) void {
        C.QWidget_SetMaximumHeight(@ptrCast(self), @intCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn SizeIncrement(self: ?*anyopaque) ?*C.QSize {
        return C.QWidget_SizeIncrement(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ``` self: ?*C.QDial, sizeIncrement: ?*C.QSize ```
    pub fn SetSizeIncrement(self: ?*anyopaque, sizeIncrement: ?*anyopaque) void {
        C.QWidget_SetSizeIncrement(@ptrCast(self), @ptrCast(sizeIncrement));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ``` self: ?*C.QDial, w: i32, h: i32 ```
    pub fn SetSizeIncrement2(self: ?*anyopaque, w: i32, h: i32) void {
        C.QWidget_SetSizeIncrement2(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn BaseSize(self: ?*anyopaque) ?*C.QSize {
        return C.QWidget_BaseSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ``` self: ?*C.QDial, baseSize: ?*C.QSize ```
    pub fn SetBaseSize(self: ?*anyopaque, baseSize: ?*anyopaque) void {
        C.QWidget_SetBaseSize(@ptrCast(self), @ptrCast(baseSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ``` self: ?*C.QDial, basew: i32, baseh: i32 ```
    pub fn SetBaseSize2(self: ?*anyopaque, basew: i32, baseh: i32) void {
        C.QWidget_SetBaseSize2(@ptrCast(self), @intCast(basew), @intCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ``` self: ?*C.QDial, fixedSize: ?*C.QSize ```
    pub fn SetFixedSize(self: ?*anyopaque, fixedSize: ?*anyopaque) void {
        C.QWidget_SetFixedSize(@ptrCast(self), @ptrCast(fixedSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ``` self: ?*C.QDial, w: i32, h: i32 ```
    pub fn SetFixedSize2(self: ?*anyopaque, w: i32, h: i32) void {
        C.QWidget_SetFixedSize2(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ``` self: ?*C.QDial, w: i32 ```
    pub fn SetFixedWidth(self: ?*anyopaque, w: i32) void {
        C.QWidget_SetFixedWidth(@ptrCast(self), @intCast(w));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ``` self: ?*C.QDial, h: i32 ```
    pub fn SetFixedHeight(self: ?*anyopaque, h: i32) void {
        C.QWidget_SetFixedHeight(@ptrCast(self), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ``` self: ?*C.QDial, param1: ?*C.QPointF ```
    pub fn MapToGlobal(self: ?*anyopaque, param1: ?*anyopaque) ?*C.QPointF {
        return C.QWidget_MapToGlobal(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ``` self: ?*C.QDial, param1: ?*C.QPoint ```
    pub fn MapToGlobalWithQPoint(self: ?*anyopaque, param1: ?*anyopaque) ?*C.QPoint {
        return C.QWidget_MapToGlobalWithQPoint(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ``` self: ?*C.QDial, param1: ?*C.QPointF ```
    pub fn MapFromGlobal(self: ?*anyopaque, param1: ?*anyopaque) ?*C.QPointF {
        return C.QWidget_MapFromGlobal(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ``` self: ?*C.QDial, param1: ?*C.QPoint ```
    pub fn MapFromGlobalWithQPoint(self: ?*anyopaque, param1: ?*anyopaque) ?*C.QPoint {
        return C.QWidget_MapFromGlobalWithQPoint(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ``` self: ?*C.QDial, param1: ?*C.QPointF ```
    pub fn MapToParent(self: ?*anyopaque, param1: ?*anyopaque) ?*C.QPointF {
        return C.QWidget_MapToParent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ``` self: ?*C.QDial, param1: ?*C.QPoint ```
    pub fn MapToParentWithQPoint(self: ?*anyopaque, param1: ?*anyopaque) ?*C.QPoint {
        return C.QWidget_MapToParentWithQPoint(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ``` self: ?*C.QDial, param1: ?*C.QPointF ```
    pub fn MapFromParent(self: ?*anyopaque, param1: ?*anyopaque) ?*C.QPointF {
        return C.QWidget_MapFromParent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ``` self: ?*C.QDial, param1: ?*C.QPoint ```
    pub fn MapFromParentWithQPoint(self: ?*anyopaque, param1: ?*anyopaque) ?*C.QPoint {
        return C.QWidget_MapFromParentWithQPoint(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ``` self: ?*C.QDial, param1: ?*C.QWidget, param2: ?*C.QPointF ```
    pub fn MapTo(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) ?*C.QPointF {
        return C.QWidget_MapTo(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ``` self: ?*C.QDial, param1: ?*C.QWidget, param2: ?*C.QPoint ```
    pub fn MapTo2(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) ?*C.QPoint {
        return C.QWidget_MapTo2(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
    ///
    /// ``` self: ?*C.QDial, param1: ?*C.QWidget, param2: ?*C.QPointF ```
    pub fn MapFrom(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) ?*C.QPointF {
        return C.QWidget_MapFrom(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
    ///
    /// ``` self: ?*C.QDial, param1: ?*C.QWidget, param2: ?*C.QPoint ```
    pub fn MapFrom2(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) ?*C.QPoint {
        return C.QWidget_MapFrom2(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn Window(self: ?*anyopaque) ?*C.QWidget {
        return C.QWidget_Window(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn NativeParentWidget(self: ?*anyopaque) ?*C.QWidget {
        return C.QWidget_NativeParentWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn TopLevelWidget(self: ?*anyopaque) ?*C.QWidget {
        return C.QWidget_TopLevelWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn Palette(self: ?*anyopaque) ?*C.QPalette {
        return C.QWidget_Palette(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ``` self: ?*C.QDial, palette: ?*C.QPalette ```
    pub fn SetPalette(self: ?*anyopaque, palette: ?*anyopaque) void {
        C.QWidget_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ``` self: ?*C.QDial, backgroundRole: qpalette_enums.ColorRole ```
    pub fn SetBackgroundRole(self: ?*anyopaque, backgroundRole: i64) void {
        C.QWidget_SetBackgroundRole(@ptrCast(self), @intCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn BackgroundRole(self: ?*anyopaque) i64 {
        return C.QWidget_BackgroundRole(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ``` self: ?*C.QDial, foregroundRole: qpalette_enums.ColorRole ```
    pub fn SetForegroundRole(self: ?*anyopaque, foregroundRole: i64) void {
        C.QWidget_SetForegroundRole(@ptrCast(self), @intCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn ForegroundRole(self: ?*anyopaque) i64 {
        return C.QWidget_ForegroundRole(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn Font(self: ?*anyopaque) ?*C.QFont {
        return C.QWidget_Font(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ``` self: ?*C.QDial, font: ?*C.QFont ```
    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        C.QWidget_SetFont(@ptrCast(self), @ptrCast(font));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn FontMetrics(self: ?*anyopaque) ?*C.QFontMetrics {
        return C.QWidget_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn FontInfo(self: ?*anyopaque) ?*C.QFontInfo {
        return C.QWidget_FontInfo(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn Cursor(self: ?*anyopaque) ?*C.QCursor {
        return C.QWidget_Cursor(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ``` self: ?*C.QDial, cursor: ?*C.QCursor ```
    pub fn SetCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        C.QWidget_SetCursor(@ptrCast(self), @ptrCast(cursor));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn UnsetCursor(self: ?*anyopaque) void {
        C.QWidget_UnsetCursor(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ``` self: ?*C.QDial, enable: bool ```
    pub fn SetMouseTracking(self: ?*anyopaque, enable: bool) void {
        C.QWidget_SetMouseTracking(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn HasMouseTracking(self: ?*anyopaque) bool {
        return C.QWidget_HasMouseTracking(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn UnderMouse(self: ?*anyopaque) bool {
        return C.QWidget_UnderMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ``` self: ?*C.QDial, enable: bool ```
    pub fn SetTabletTracking(self: ?*anyopaque, enable: bool) void {
        C.QWidget_SetTabletTracking(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn HasTabletTracking(self: ?*anyopaque) bool {
        return C.QWidget_HasTabletTracking(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ``` self: ?*C.QDial, mask: ?*C.QBitmap ```
    pub fn SetMask(self: ?*anyopaque, mask: ?*anyopaque) void {
        C.QWidget_SetMask(@ptrCast(self), @ptrCast(mask));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ``` self: ?*C.QDial, mask: ?*C.QRegion ```
    pub fn SetMaskWithMask(self: ?*anyopaque, mask: ?*anyopaque) void {
        C.QWidget_SetMaskWithMask(@ptrCast(self), @ptrCast(mask));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn Mask(self: ?*anyopaque) ?*C.QRegion {
        return C.QWidget_Mask(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn ClearMask(self: ?*anyopaque) void {
        C.QWidget_ClearMask(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: ?*C.QDial, target: ?*C.QPaintDevice ```
    pub fn Render(self: ?*anyopaque, target: ?*anyopaque) void {
        C.QWidget_Render(@ptrCast(self), @ptrCast(target));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: ?*C.QDial, painter: ?*C.QPainter ```
    pub fn RenderWithPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        C.QWidget_RenderWithPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn Grab(self: ?*anyopaque) ?*C.QPixmap {
        return C.QWidget_Grab(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn GraphicsEffect(self: ?*anyopaque) ?*C.QGraphicsEffect {
        return C.QWidget_GraphicsEffect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ``` self: ?*C.QDial, effect: ?*C.QGraphicsEffect ```
    pub fn SetGraphicsEffect(self: ?*anyopaque, effect: ?*anyopaque) void {
        C.QWidget_SetGraphicsEffect(@ptrCast(self), @ptrCast(effect));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ``` self: ?*C.QDial, typeVal: qnamespace_enums.GestureType ```
    pub fn GrabGesture(self: ?*anyopaque, typeVal: i64) void {
        C.QWidget_GrabGesture(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ``` self: ?*C.QDial, typeVal: qnamespace_enums.GestureType ```
    pub fn UngrabGesture(self: ?*anyopaque, typeVal: i64) void {
        C.QWidget_UngrabGesture(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ``` self: ?*C.QDial, windowTitle: []const u8 ```
    pub fn SetWindowTitle(self: ?*anyopaque, windowTitle: []const u8) void {
        const windowTitle_str = C.struct_libqt_string{
            .len = windowTitle.len,
            .data = @constCast(windowTitle.ptr),
        };
        C.QWidget_SetWindowTitle(@ptrCast(self), windowTitle_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
    ///
    /// ``` self: ?*C.QDial, styleSheet: []const u8 ```
    pub fn SetStyleSheet(self: ?*anyopaque, styleSheet: []const u8) void {
        const styleSheet_str = C.struct_libqt_string{
            .len = styleSheet.len,
            .data = @constCast(styleSheet.ptr),
        };
        C.QWidget_SetStyleSheet(@ptrCast(self), styleSheet_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
    ///
    /// ``` self: ?*C.QDial, allocator: std.mem.Allocator ```
    pub fn StyleSheet(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QWidget_StyleSheet(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ``` self: ?*C.QDial, allocator: std.mem.Allocator ```
    pub fn WindowTitle(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QWidget_WindowTitle(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ``` self: ?*C.QDial, icon: ?*C.QIcon ```
    pub fn SetWindowIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        C.QWidget_SetWindowIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn WindowIcon(self: ?*anyopaque) ?*C.QIcon {
        return C.QWidget_WindowIcon(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ``` self: ?*C.QDial, windowIconText: []const u8 ```
    pub fn SetWindowIconText(self: ?*anyopaque, windowIconText: []const u8) void {
        const windowIconText_str = C.struct_libqt_string{
            .len = windowIconText.len,
            .data = @constCast(windowIconText.ptr),
        };
        C.QWidget_SetWindowIconText(@ptrCast(self), windowIconText_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
    ///
    /// ``` self: ?*C.QDial, allocator: std.mem.Allocator ```
    pub fn WindowIconText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QWidget_WindowIconText(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ``` self: ?*C.QDial, windowRole: []const u8 ```
    pub fn SetWindowRole(self: ?*anyopaque, windowRole: []const u8) void {
        const windowRole_str = C.struct_libqt_string{
            .len = windowRole.len,
            .data = @constCast(windowRole.ptr),
        };
        C.QWidget_SetWindowRole(@ptrCast(self), windowRole_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
    ///
    /// ``` self: ?*C.QDial, allocator: std.mem.Allocator ```
    pub fn WindowRole(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QWidget_WindowRole(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ``` self: ?*C.QDial, filePath: []const u8 ```
    pub fn SetWindowFilePath(self: ?*anyopaque, filePath: []const u8) void {
        const filePath_str = C.struct_libqt_string{
            .len = filePath.len,
            .data = @constCast(filePath.ptr),
        };
        C.QWidget_SetWindowFilePath(@ptrCast(self), filePath_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
    ///
    /// ``` self: ?*C.QDial, allocator: std.mem.Allocator ```
    pub fn WindowFilePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QWidget_WindowFilePath(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ``` self: ?*C.QDial, level: f64 ```
    pub fn SetWindowOpacity(self: ?*anyopaque, level: f64) void {
        C.QWidget_SetWindowOpacity(@ptrCast(self), @floatCast(level));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn WindowOpacity(self: ?*anyopaque) f64 {
        return C.QWidget_WindowOpacity(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn IsWindowModified(self: ?*anyopaque) bool {
        return C.QWidget_IsWindowModified(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ``` self: ?*C.QDial, toolTip: []const u8 ```
    pub fn SetToolTip(self: ?*anyopaque, toolTip: []const u8) void {
        const toolTip_str = C.struct_libqt_string{
            .len = toolTip.len,
            .data = @constCast(toolTip.ptr),
        };
        C.QWidget_SetToolTip(@ptrCast(self), toolTip_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
    ///
    /// ``` self: ?*C.QDial, allocator: std.mem.Allocator ```
    pub fn ToolTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QWidget_ToolTip(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ``` self: ?*C.QDial, msec: i32 ```
    pub fn SetToolTipDuration(self: ?*anyopaque, msec: i32) void {
        C.QWidget_SetToolTipDuration(@ptrCast(self), @intCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn ToolTipDuration(self: ?*anyopaque) i32 {
        return C.QWidget_ToolTipDuration(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ``` self: ?*C.QDial, statusTip: []const u8 ```
    pub fn SetStatusTip(self: ?*anyopaque, statusTip: []const u8) void {
        const statusTip_str = C.struct_libqt_string{
            .len = statusTip.len,
            .data = @constCast(statusTip.ptr),
        };
        C.QWidget_SetStatusTip(@ptrCast(self), statusTip_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
    ///
    /// ``` self: ?*C.QDial, allocator: std.mem.Allocator ```
    pub fn StatusTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QWidget_StatusTip(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ``` self: ?*C.QDial, whatsThis: []const u8 ```
    pub fn SetWhatsThis(self: ?*anyopaque, whatsThis: []const u8) void {
        const whatsThis_str = C.struct_libqt_string{
            .len = whatsThis.len,
            .data = @constCast(whatsThis.ptr),
        };
        C.QWidget_SetWhatsThis(@ptrCast(self), whatsThis_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
    ///
    /// ``` self: ?*C.QDial, allocator: std.mem.Allocator ```
    pub fn WhatsThis(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QWidget_WhatsThis(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ``` self: ?*C.QDial, allocator: std.mem.Allocator ```
    pub fn AccessibleName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QWidget_AccessibleName(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ``` self: ?*C.QDial, name: []const u8 ```
    pub fn SetAccessibleName(self: ?*anyopaque, name: []const u8) void {
        const name_str = C.struct_libqt_string{
            .len = name.len,
            .data = @constCast(name.ptr),
        };
        C.QWidget_SetAccessibleName(@ptrCast(self), name_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
    ///
    /// ``` self: ?*C.QDial, allocator: std.mem.Allocator ```
    pub fn AccessibleDescription(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QWidget_AccessibleDescription(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ``` self: ?*C.QDial, description: []const u8 ```
    pub fn SetAccessibleDescription(self: ?*anyopaque, description: []const u8) void {
        const description_str = C.struct_libqt_string{
            .len = description.len,
            .data = @constCast(description.ptr),
        };
        C.QWidget_SetAccessibleDescription(@ptrCast(self), description_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
    ///
    /// ``` self: ?*C.QDial, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetLayoutDirection(self: ?*anyopaque, direction: i64) void {
        C.QWidget_SetLayoutDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn LayoutDirection(self: ?*anyopaque) i64 {
        return C.QWidget_LayoutDirection(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn UnsetLayoutDirection(self: ?*anyopaque) void {
        C.QWidget_UnsetLayoutDirection(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ``` self: ?*C.QDial, locale: ?*C.QLocale ```
    pub fn SetLocale(self: ?*anyopaque, locale: ?*anyopaque) void {
        C.QWidget_SetLocale(@ptrCast(self), @ptrCast(locale));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn Locale(self: ?*anyopaque) ?*C.QLocale {
        return C.QWidget_Locale(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn UnsetLocale(self: ?*anyopaque) void {
        C.QWidget_UnsetLocale(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn IsRightToLeft(self: ?*anyopaque) bool {
        return C.QWidget_IsRightToLeft(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn IsLeftToRight(self: ?*anyopaque) bool {
        return C.QWidget_IsLeftToRight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn SetFocus(self: ?*anyopaque) void {
        C.QWidget_SetFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn IsActiveWindow(self: ?*anyopaque) bool {
        return C.QWidget_IsActiveWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn ActivateWindow(self: ?*anyopaque) void {
        C.QWidget_ActivateWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn ClearFocus(self: ?*anyopaque) void {
        C.QWidget_ClearFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ``` self: ?*C.QDial, reason: qnamespace_enums.FocusReason ```
    pub fn SetFocusWithReason(self: ?*anyopaque, reason: i64) void {
        C.QWidget_SetFocusWithReason(@ptrCast(self), @intCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn FocusPolicy(self: ?*anyopaque) i64 {
        return C.QWidget_FocusPolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ``` self: ?*C.QDial, policy: qnamespace_enums.FocusPolicy ```
    pub fn SetFocusPolicy(self: ?*anyopaque, policy: i64) void {
        C.QWidget_SetFocusPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn HasFocus(self: ?*anyopaque) bool {
        return C.QWidget_HasFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
    ///
    /// ``` param1: ?*C.QWidget, param2: ?*C.QWidget ```
    pub fn SetTabOrder(param1: ?*anyopaque, param2: ?*anyopaque) void {
        C.QWidget_SetTabOrder(@ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
    ///
    /// ``` self: ?*C.QDial, focusProxy: ?*C.QWidget ```
    pub fn SetFocusProxy(self: ?*anyopaque, focusProxy: ?*anyopaque) void {
        C.QWidget_SetFocusProxy(@ptrCast(self), @ptrCast(focusProxy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn FocusProxy(self: ?*anyopaque) ?*C.QWidget {
        return C.QWidget_FocusProxy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn ContextMenuPolicy(self: ?*anyopaque) i64 {
        return C.QWidget_ContextMenuPolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ``` self: ?*C.QDial, policy: qnamespace_enums.ContextMenuPolicy ```
    pub fn SetContextMenuPolicy(self: ?*anyopaque, policy: i64) void {
        C.QWidget_SetContextMenuPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn GrabMouse(self: ?*anyopaque) void {
        C.QWidget_GrabMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ``` self: ?*C.QDial, param1: ?*C.QCursor ```
    pub fn GrabMouseWithQCursor(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWidget_GrabMouseWithQCursor(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn ReleaseMouse(self: ?*anyopaque) void {
        C.QWidget_ReleaseMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn GrabKeyboard(self: ?*anyopaque) void {
        C.QWidget_GrabKeyboard(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn ReleaseKeyboard(self: ?*anyopaque) void {
        C.QWidget_ReleaseKeyboard(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ``` self: ?*C.QDial, key: ?*C.QKeySequence ```
    pub fn GrabShortcut(self: ?*anyopaque, key: ?*anyopaque) i32 {
        return C.QWidget_GrabShortcut(@ptrCast(self), @ptrCast(key));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ``` self: ?*C.QDial, id: i32 ```
    pub fn ReleaseShortcut(self: ?*anyopaque, id: i32) void {
        C.QWidget_ReleaseShortcut(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ``` self: ?*C.QDial, id: i32 ```
    pub fn SetShortcutEnabled(self: ?*anyopaque, id: i32) void {
        C.QWidget_SetShortcutEnabled(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ``` self: ?*C.QDial, id: i32 ```
    pub fn SetShortcutAutoRepeat(self: ?*anyopaque, id: i32) void {
        C.QWidget_SetShortcutAutoRepeat(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
    ///
    ///
    pub fn MouseGrabber() ?*C.QWidget {
        return C.QWidget_MouseGrabber();
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
    ///
    ///
    pub fn KeyboardGrabber() ?*C.QWidget {
        return C.QWidget_KeyboardGrabber();
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn UpdatesEnabled(self: ?*anyopaque) bool {
        return C.QWidget_UpdatesEnabled(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ``` self: ?*C.QDial, enable: bool ```
    pub fn SetUpdatesEnabled(self: ?*anyopaque, enable: bool) void {
        C.QWidget_SetUpdatesEnabled(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn GraphicsProxyWidget(self: ?*anyopaque) ?*C.QGraphicsProxyWidget {
        return C.QWidget_GraphicsProxyWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn Update(self: ?*anyopaque) void {
        C.QWidget_Update(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn Repaint(self: ?*anyopaque) void {
        C.QWidget_Repaint(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: ?*C.QDial, x: i32, y: i32, w: i32, h: i32 ```
    pub fn Update2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        C.QWidget_Update2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: ?*C.QDial, param1: ?*C.QRect ```
    pub fn UpdateWithQRect(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWidget_UpdateWithQRect(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: ?*C.QDial, param1: ?*C.QRegion ```
    pub fn UpdateWithQRegion(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWidget_UpdateWithQRegion(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: ?*C.QDial, x: i32, y: i32, w: i32, h: i32 ```
    pub fn Repaint2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        C.QWidget_Repaint2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: ?*C.QDial, param1: ?*C.QRect ```
    pub fn RepaintWithQRect(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWidget_RepaintWithQRect(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: ?*C.QDial, param1: ?*C.QRegion ```
    pub fn RepaintWithQRegion(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWidget_RepaintWithQRegion(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ``` self: ?*C.QDial, hidden: bool ```
    pub fn SetHidden(self: ?*anyopaque, hidden: bool) void {
        C.QWidget_SetHidden(@ptrCast(self), hidden);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn Show(self: ?*anyopaque) void {
        C.QWidget_Show(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn Hide(self: ?*anyopaque) void {
        C.QWidget_Hide(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn ShowMinimized(self: ?*anyopaque) void {
        C.QWidget_ShowMinimized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn ShowMaximized(self: ?*anyopaque) void {
        C.QWidget_ShowMaximized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn ShowFullScreen(self: ?*anyopaque) void {
        C.QWidget_ShowFullScreen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn ShowNormal(self: ?*anyopaque) void {
        C.QWidget_ShowNormal(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn Close(self: ?*anyopaque) bool {
        return C.QWidget_Close(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn Raise(self: ?*anyopaque) void {
        C.QWidget_Raise(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn Lower(self: ?*anyopaque) void {
        C.QWidget_Lower(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ``` self: ?*C.QDial, param1: ?*C.QWidget ```
    pub fn StackUnder(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWidget_StackUnder(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ``` self: ?*C.QDial, x: i32, y: i32 ```
    pub fn Move(self: ?*anyopaque, x: i32, y: i32) void {
        C.QWidget_Move(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ``` self: ?*C.QDial, param1: ?*C.QPoint ```
    pub fn MoveWithQPoint(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWidget_MoveWithQPoint(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ``` self: ?*C.QDial, w: i32, h: i32 ```
    pub fn Resize(self: ?*anyopaque, w: i32, h: i32) void {
        C.QWidget_Resize(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ``` self: ?*C.QDial, param1: ?*C.QSize ```
    pub fn ResizeWithQSize(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QWidget_ResizeWithQSize(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ``` self: ?*C.QDial, x: i32, y: i32, w: i32, h: i32 ```
    pub fn SetGeometry(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        C.QWidget_SetGeometry(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ``` self: ?*C.QDial, geometry: ?*C.QRect ```
    pub fn SetGeometryWithGeometry(self: ?*anyopaque, geometry: ?*anyopaque) void {
        C.QWidget_SetGeometryWithGeometry(@ptrCast(self), @ptrCast(geometry));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ``` self: ?*C.QDial, allocator: std.mem.Allocator ```
    pub fn SaveGeometry(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: C.struct_libqt_string = C.QWidget_SaveGeometry(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_bytearray));
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("Memory allocation failed");
        for (0.._bytearray.len) |_i| {
            _ret[_i] = _bytearray.data[_i];
        }
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ``` self: ?*C.QDial, geometry: []u8 ```
    pub fn RestoreGeometry(self: ?*anyopaque, geometry: []u8) bool {
        const geometry_str = C.struct_libqt_string{
            .len = geometry.len,
            .data = @constCast(geometry.ptr),
        };
        return C.QWidget_RestoreGeometry(@ptrCast(self), geometry_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn AdjustSize(self: ?*anyopaque) void {
        C.QWidget_AdjustSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn IsVisible(self: ?*anyopaque) bool {
        return C.QWidget_IsVisible(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ``` self: ?*C.QDial, param1: ?*C.QWidget ```
    pub fn IsVisibleTo(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return C.QWidget_IsVisibleTo(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn IsHidden(self: ?*anyopaque) bool {
        return C.QWidget_IsHidden(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn IsMinimized(self: ?*anyopaque) bool {
        return C.QWidget_IsMinimized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn IsMaximized(self: ?*anyopaque) bool {
        return C.QWidget_IsMaximized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn IsFullScreen(self: ?*anyopaque) bool {
        return C.QWidget_IsFullScreen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn WindowState(self: ?*anyopaque) i64 {
        return C.QWidget_WindowState(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ``` self: ?*C.QDial, state: i32 ```
    pub fn SetWindowState(self: ?*anyopaque, state: i64) void {
        C.QWidget_SetWindowState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ``` self: ?*C.QDial, state: i32 ```
    pub fn OverrideWindowState(self: ?*anyopaque, state: i64) void {
        C.QWidget_OverrideWindowState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn SizePolicy(self: ?*anyopaque) ?*C.QSizePolicy {
        return C.QWidget_SizePolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ``` self: ?*C.QDial, sizePolicy: ?*C.QSizePolicy ```
    pub fn SetSizePolicy(self: ?*anyopaque, sizePolicy: ?*C.QSizePolicy) void {
        C.QWidget_SetSizePolicy(@ptrCast(self), @ptrCast(sizePolicy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ``` self: ?*C.QDial, horizontal: qsizepolicy_enums.Policy, vertical: qsizepolicy_enums.Policy ```
    pub fn SetSizePolicy2(self: ?*anyopaque, horizontal: i64, vertical: i64) void {
        C.QWidget_SetSizePolicy2(@ptrCast(self), @intCast(horizontal), @intCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn VisibleRegion(self: ?*anyopaque) ?*C.QRegion {
        return C.QWidget_VisibleRegion(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ``` self: ?*C.QDial, left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn SetContentsMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        C.QWidget_SetContentsMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ``` self: ?*C.QDial, margins: ?*C.QMargins ```
    pub fn SetContentsMarginsWithMargins(self: ?*anyopaque, margins: ?*anyopaque) void {
        C.QWidget_SetContentsMarginsWithMargins(@ptrCast(self), @ptrCast(margins));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn ContentsMargins(self: ?*anyopaque) ?*C.QMargins {
        return C.QWidget_ContentsMargins(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn ContentsRect(self: ?*anyopaque) ?*C.QRect {
        return C.QWidget_ContentsRect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn Layout(self: ?*anyopaque) ?*C.QLayout {
        return C.QWidget_Layout(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ``` self: ?*C.QDial, layout: ?*C.QLayout ```
    pub fn SetLayout(self: ?*anyopaque, layout: ?*anyopaque) void {
        C.QWidget_SetLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn UpdateGeometry(self: ?*anyopaque) void {
        C.QWidget_UpdateGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ``` self: ?*C.QDial, parent: ?*C.QWidget ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QWidget_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ``` self: ?*C.QDial, parent: ?*C.QWidget, f: i32 ```
    pub fn SetParent2(self: ?*anyopaque, parent: ?*anyopaque, f: i64) void {
        C.QWidget_SetParent2(@ptrCast(self), @ptrCast(parent), @intCast(f));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ``` self: ?*C.QDial, dx: i32, dy: i32 ```
    pub fn Scroll(self: ?*anyopaque, dx: i32, dy: i32) void {
        C.QWidget_Scroll(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ``` self: ?*C.QDial, dx: i32, dy: i32, param3: ?*C.QRect ```
    pub fn Scroll2(self: ?*anyopaque, dx: i32, dy: i32, param3: ?*anyopaque) void {
        C.QWidget_Scroll2(@ptrCast(self), @intCast(dx), @intCast(dy), @ptrCast(param3));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn FocusWidget(self: ?*anyopaque) ?*C.QWidget {
        return C.QWidget_FocusWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn NextInFocusChain(self: ?*anyopaque) ?*C.QWidget {
        return C.QWidget_NextInFocusChain(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn PreviousInFocusChain(self: ?*anyopaque) ?*C.QWidget {
        return C.QWidget_PreviousInFocusChain(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn AcceptDrops(self: ?*anyopaque) bool {
        return C.QWidget_AcceptDrops(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ``` self: ?*C.QDial, on: bool ```
    pub fn SetAcceptDrops(self: ?*anyopaque, on: bool) void {
        C.QWidget_SetAcceptDrops(@ptrCast(self), on);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: ?*C.QDial, action: ?*C.QAction ```
    pub fn AddAction(self: ?*anyopaque, action: ?*anyopaque) void {
        C.QWidget_AddAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ``` self: ?*C.QDial, actions: []?*C.QAction ```
    pub fn AddActions(self: ?*anyopaque, actions: []?*anyopaque) void {
        const actions_list = C.struct_libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        C.QWidget_AddActions(@ptrCast(self), actions_list);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
    ///
    /// ``` self: ?*C.QDial, before: ?*C.QAction, actions: []?*C.QAction ```
    pub fn InsertActions(self: ?*anyopaque, before: ?*anyopaque, actions: []?*anyopaque) void {
        const actions_list = C.struct_libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        C.QWidget_InsertActions(@ptrCast(self), @ptrCast(before), actions_list);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
    ///
    /// ``` self: ?*C.QDial, before: ?*C.QAction, action: ?*C.QAction ```
    pub fn InsertAction(self: ?*anyopaque, before: ?*anyopaque, action: ?*anyopaque) void {
        C.QWidget_InsertAction(@ptrCast(self), @ptrCast(before), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
    ///
    /// ``` self: ?*C.QDial, action: ?*C.QAction ```
    pub fn RemoveAction(self: ?*anyopaque, action: ?*anyopaque) void {
        C.QWidget_RemoveAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ``` self: ?*C.QDial, allocator: std.mem.Allocator ```
    pub fn Actions(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QAction {
        const _arr: C.struct_libqt_list = C.QWidget_Actions(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QAction, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: ?*C.QDial, text: []const u8 ```
    pub fn AddActionWithText(self: ?*anyopaque, text: []const u8) ?*C.QAction {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        return C.QWidget_AddActionWithText(@ptrCast(self), text_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: ?*C.QDial, icon: ?*C.QIcon, text: []const u8 ```
    pub fn AddAction2(self: ?*anyopaque, icon: ?*anyopaque, text: []const u8) ?*C.QAction {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        return C.QWidget_AddAction2(@ptrCast(self), @ptrCast(icon), text_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: ?*C.QDial, text: []const u8, shortcut: ?*C.QKeySequence ```
    pub fn AddAction3(self: ?*anyopaque, text: []const u8, shortcut: ?*anyopaque) ?*C.QAction {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        return C.QWidget_AddAction3(@ptrCast(self), text_str, @ptrCast(shortcut));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: ?*C.QDial, icon: ?*C.QIcon, text: []const u8, shortcut: ?*C.QKeySequence ```
    pub fn AddAction4(self: ?*anyopaque, icon: ?*anyopaque, text: []const u8, shortcut: ?*anyopaque) ?*C.QAction {
        const text_str = C.struct_libqt_string{
            .len = text.len,
            .data = @constCast(text.ptr),
        };
        return C.QWidget_AddAction4(@ptrCast(self), @ptrCast(icon), text_str, @ptrCast(shortcut));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn ParentWidget(self: ?*anyopaque) ?*C.QWidget {
        return C.QWidget_ParentWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ``` self: ?*C.QDial, typeVal: i32 ```
    pub fn SetWindowFlags(self: ?*anyopaque, typeVal: i64) void {
        C.QWidget_SetWindowFlags(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn WindowFlags(self: ?*anyopaque) i64 {
        return C.QWidget_WindowFlags(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ``` self: ?*C.QDial, param1: qnamespace_enums.WindowType ```
    pub fn SetWindowFlag(self: ?*anyopaque, param1: i64) void {
        C.QWidget_SetWindowFlag(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ``` self: ?*C.QDial, typeVal: i32 ```
    pub fn OverrideWindowFlags(self: ?*anyopaque, typeVal: i64) void {
        C.QWidget_OverrideWindowFlags(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn WindowType(self: ?*anyopaque) i64 {
        return C.QWidget_WindowType(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
    ///
    /// ``` param1: u64 ```
    pub fn Find(param1: u64) ?*C.QWidget {
        return C.QWidget_Find(@intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ``` self: ?*C.QDial, x: i32, y: i32 ```
    pub fn ChildAt(self: ?*anyopaque, x: i32, y: i32) ?*C.QWidget {
        return C.QWidget_ChildAt(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ``` self: ?*C.QDial, p: ?*C.QPoint ```
    pub fn ChildAtWithQPoint(self: ?*anyopaque, p: ?*anyopaque) ?*C.QWidget {
        return C.QWidget_ChildAtWithQPoint(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ``` self: ?*C.QDial, param1: qnamespace_enums.WidgetAttribute ```
    pub fn SetAttribute(self: ?*anyopaque, param1: i64) void {
        C.QWidget_SetAttribute(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ``` self: ?*C.QDial, param1: qnamespace_enums.WidgetAttribute ```
    pub fn TestAttribute(self: ?*anyopaque, param1: i64) bool {
        return C.QWidget_TestAttribute(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn EnsurePolished(self: ?*anyopaque) void {
        C.QWidget_EnsurePolished(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ``` self: ?*C.QDial, child: ?*C.QWidget ```
    pub fn IsAncestorOf(self: ?*anyopaque, child: ?*anyopaque) bool {
        return C.QWidget_IsAncestorOf(@ptrCast(self), @ptrCast(child));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn AutoFillBackground(self: ?*anyopaque) bool {
        return C.QWidget_AutoFillBackground(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ``` self: ?*C.QDial, enabled: bool ```
    pub fn SetAutoFillBackground(self: ?*anyopaque, enabled: bool) void {
        C.QWidget_SetAutoFillBackground(@ptrCast(self), enabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn BackingStore(self: ?*anyopaque) ?*C.QBackingStore {
        return C.QWidget_BackingStore(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn WindowHandle(self: ?*anyopaque) ?*C.QWindow {
        return C.QWidget_WindowHandle(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn Screen(self: ?*anyopaque) ?*C.QScreen {
        return C.QWidget_Screen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ``` self: ?*C.QDial, screen: ?*C.QScreen ```
    pub fn SetScreen(self: ?*anyopaque, screen: ?*anyopaque) void {
        C.QWidget_SetScreen(@ptrCast(self), @ptrCast(screen));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ``` window: ?*C.QWindow ```
    pub fn CreateWindowContainer(window: ?*anyopaque) ?*C.QWidget {
        return C.QWidget_CreateWindowContainer(@ptrCast(window));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
    ///
    /// ``` self: ?*C.QDial, title: []const u8 ```
    pub fn WindowTitleChanged(self: ?*anyopaque, title: []const u8) void {
        const title_str = C.struct_libqt_string{
            .len = title.len,
            .data = @constCast(title.ptr),
        };
        C.QWidget_WindowTitleChanged(@ptrCast(self), title_str);
    }

    /// Inherited from QWidget
    ///
    /// ``` self: ?*C.QWidget, slot: fn (?*C.QWidget, []const u8) callconv(.c) void ```
    pub fn OnWindowTitleChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        C.QWidget_Connect_WindowTitleChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ``` self: ?*C.QDial, icon: ?*C.QIcon ```
    pub fn WindowIconChanged(self: ?*anyopaque, icon: ?*anyopaque) void {
        C.QWidget_WindowIconChanged(@ptrCast(self), @ptrCast(icon));
    }

    /// Inherited from QWidget
    ///
    /// ``` self: ?*C.QWidget, slot: fn (?*C.QWidget, ?*C.QIcon) callconv(.c) void ```
    pub fn OnWindowIconChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWidget_Connect_WindowIconChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ``` self: ?*C.QDial, iconText: []const u8 ```
    pub fn WindowIconTextChanged(self: ?*anyopaque, iconText: []const u8) void {
        const iconText_str = C.struct_libqt_string{
            .len = iconText.len,
            .data = @constCast(iconText.ptr),
        };
        C.QWidget_WindowIconTextChanged(@ptrCast(self), iconText_str);
    }

    /// Inherited from QWidget
    ///
    /// ``` self: ?*C.QWidget, slot: fn (?*C.QWidget, []const u8) callconv(.c) void ```
    pub fn OnWindowIconTextChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        C.QWidget_Connect_WindowIconTextChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ``` self: ?*C.QDial, pos: ?*C.QPoint ```
    pub fn CustomContextMenuRequested(self: ?*anyopaque, pos: ?*anyopaque) void {
        C.QWidget_CustomContextMenuRequested(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QWidget
    ///
    /// ``` self: ?*C.QWidget, slot: fn (?*C.QWidget, ?*C.QPoint) callconv(.c) void ```
    pub fn OnCustomContextMenuRequested(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn InputMethodHints(self: ?*anyopaque) i64 {
        return C.QWidget_InputMethodHints(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ``` self: ?*C.QDial, hints: i32 ```
    pub fn SetInputMethodHints(self: ?*anyopaque, hints: i64) void {
        C.QWidget_SetInputMethodHints(@ptrCast(self), @intCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: ?*C.QDial, target: ?*C.QPaintDevice, targetOffset: ?*C.QPoint ```
    pub fn Render2(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque) void {
        C.QWidget_Render2(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: ?*C.QDial, target: ?*C.QPaintDevice, targetOffset: ?*C.QPoint, sourceRegion: ?*C.QRegion ```
    pub fn Render3(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque) void {
        C.QWidget_Render3(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset), @ptrCast(sourceRegion));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: ?*C.QDial, target: ?*C.QPaintDevice, targetOffset: ?*C.QPoint, sourceRegion: ?*C.QRegion, renderFlags: i32 ```
    pub fn Render4(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque, renderFlags: i64) void {
        C.QWidget_Render4(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset), @ptrCast(sourceRegion), @intCast(renderFlags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: ?*C.QDial, painter: ?*C.QPainter, targetOffset: ?*C.QPoint ```
    pub fn Render22(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque) void {
        C.QWidget_Render22(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: ?*C.QDial, painter: ?*C.QPainter, targetOffset: ?*C.QPoint, sourceRegion: ?*C.QRegion ```
    pub fn Render32(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque) void {
        C.QWidget_Render32(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset), @ptrCast(sourceRegion));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: ?*C.QDial, painter: ?*C.QPainter, targetOffset: ?*C.QPoint, sourceRegion: ?*C.QRegion, renderFlags: i32 ```
    pub fn Render42(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque, renderFlags: i64) void {
        C.QWidget_Render42(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset), @ptrCast(sourceRegion), @intCast(renderFlags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ``` self: ?*C.QDial, rectangle: ?*C.QRect ```
    pub fn Grab1(self: ?*anyopaque, rectangle: ?*anyopaque) ?*C.QPixmap {
        return C.QWidget_Grab1(@ptrCast(self), @ptrCast(rectangle));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ``` self: ?*C.QDial, typeVal: qnamespace_enums.GestureType, flags: i32 ```
    pub fn GrabGesture2(self: ?*anyopaque, typeVal: i64, flags: i64) void {
        C.QWidget_GrabGesture2(@ptrCast(self), @intCast(typeVal), @intCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ``` self: ?*C.QDial, key: ?*C.QKeySequence, context: qnamespace_enums.ShortcutContext ```
    pub fn GrabShortcut2(self: ?*anyopaque, key: ?*anyopaque, context: i64) i32 {
        return C.QWidget_GrabShortcut2(@ptrCast(self), @ptrCast(key), @intCast(context));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ``` self: ?*C.QDial, id: i32, enable: bool ```
    pub fn SetShortcutEnabled2(self: ?*anyopaque, id: i32, enable: bool) void {
        C.QWidget_SetShortcutEnabled2(@ptrCast(self), @intCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ``` self: ?*C.QDial, id: i32, enable: bool ```
    pub fn SetShortcutAutoRepeat2(self: ?*anyopaque, id: i32, enable: bool) void {
        C.QWidget_SetShortcutAutoRepeat2(@ptrCast(self), @intCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ``` self: ?*C.QDial, param1: qnamespace_enums.WindowType, on: bool ```
    pub fn SetWindowFlag2(self: ?*anyopaque, param1: i64, on: bool) void {
        C.QWidget_SetWindowFlag2(@ptrCast(self), @intCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ``` self: ?*C.QDial, param1: qnamespace_enums.WidgetAttribute, on: bool ```
    pub fn SetAttribute2(self: ?*anyopaque, param1: i64, on: bool) void {
        C.QWidget_SetAttribute2(@ptrCast(self), @intCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ``` window: ?*C.QWindow, parent: ?*C.QWidget ```
    pub fn CreateWindowContainer2(window: ?*anyopaque, parent: ?*anyopaque) ?*C.QWidget {
        return C.QWidget_CreateWindowContainer2(@ptrCast(window), @ptrCast(parent));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ``` window: ?*C.QWindow, parent: ?*C.QWidget, flags: i32 ```
    pub fn CreateWindowContainer3(window: ?*anyopaque, parent: ?*anyopaque, flags: i64) ?*C.QWidget {
        return C.QWidget_CreateWindowContainer3(@ptrCast(window), @ptrCast(parent), @intCast(flags));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QDial, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QDial, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QDial, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QDial, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QDial, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QDial, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QDial, allocator: std.mem.Allocator ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QDial, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QDial, obj: ?*C.QObject ```
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
    /// ``` self: ?*C.QDial, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: ?*C.QDial ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QDial, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QDial, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QDial, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QDial ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QDial ```
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
    /// ``` self: ?*C.QDial ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QDial, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QDial, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: ?*C.QDial, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QDial, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn PaintingActive(self: ?*anyopaque) bool {
        return C.QPaintDevice_PaintingActive(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn WidthMM(self: ?*anyopaque) i32 {
        return C.QPaintDevice_WidthMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn HeightMM(self: ?*anyopaque) i32 {
        return C.QPaintDevice_HeightMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn LogicalDpiX(self: ?*anyopaque) i32 {
        return C.QPaintDevice_LogicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn LogicalDpiY(self: ?*anyopaque) i32 {
        return C.QPaintDevice_LogicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn PhysicalDpiX(self: ?*anyopaque) i32 {
        return C.QPaintDevice_PhysicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn PhysicalDpiY(self: ?*anyopaque) i32 {
        return C.QPaintDevice_PhysicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn DevicePixelRatio(self: ?*anyopaque) f64 {
        return C.QPaintDevice_DevicePixelRatio(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn DevicePixelRatioF(self: ?*anyopaque) f64 {
        return C.QPaintDevice_DevicePixelRatioF(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn ColorCount(self: ?*anyopaque) i32 {
        return C.QPaintDevice_ColorCount(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ``` self: ?*C.QDial ```
    pub fn Depth(self: ?*anyopaque) i32 {
        return C.QPaintDevice_Depth(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
    ///
    ///
    pub fn DevicePixelRatioFScale() f64 {
        return C.QPaintDevice_DevicePixelRatioFScale();
    }

    /// Inherited from QAbstractSlider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDial, ev: ?*C.QKeyEvent ```
    pub fn KeyPressEvent(self: ?*anyopaque, ev: ?*anyopaque) void {
        C.QDial_KeyPressEvent(@ptrCast(self), @ptrCast(ev));
    }

    /// Inherited from QAbstractSlider
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, ev: ?*C.QKeyEvent ```
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, ev: ?*anyopaque) void {
        C.QDial_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(ev));
    }

    /// Inherited from QAbstractSlider
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, slot: fn (?*C.QDial, ?*C.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyPressEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QDial_OnKeyPressEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSlider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDial, param1: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QDial_TimerEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAbstractSlider
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, param1: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QDial_QBaseTimerEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QAbstractSlider
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, slot: fn (?*C.QDial, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QDial_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSlider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDial, e: ?*C.QWheelEvent ```
    pub fn WheelEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QDial_WheelEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QAbstractSlider
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, e: ?*C.QWheelEvent ```
    pub fn QBaseWheelEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QDial_QBaseWheelEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QAbstractSlider
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, slot: fn (?*C.QDial, ?*C.QWheelEvent) callconv(.c) void ```
    pub fn OnWheelEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QDial_OnWheelEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSlider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDial, e: ?*C.QEvent ```
    pub fn ChangeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QDial_ChangeEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QAbstractSlider
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, e: ?*C.QEvent ```
    pub fn QBaseChangeEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        C.QDial_QBaseChangeEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Inherited from QAbstractSlider
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, slot: fn (?*C.QDial, ?*C.QEvent) callconv(.c) void ```
    pub fn OnChangeEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QDial_OnChangeEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDial ```
    pub fn DevType(self: ?*anyopaque) i32 {
        return C.QDial_DevType(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial ```
    pub fn QBaseDevType(self: ?*anyopaque) i32 {
        return C.QDial_QBaseDevType(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, slot: fn () callconv(.c) i32 ```
    pub fn OnDevType(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QDial_OnDevType(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDial, visible: bool ```
    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        C.QDial_SetVisible(@ptrCast(self), visible);
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, visible: bool ```
    pub fn QBaseSetVisible(self: ?*anyopaque, visible: bool) void {
        C.QDial_QBaseSetVisible(@ptrCast(self), visible);
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, slot: fn (?*C.QDial, bool) callconv(.c) void ```
    pub fn OnSetVisible(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) void) void {
        C.QDial_OnSetVisible(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDial, param1: i32 ```
    pub fn HeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return C.QDial_HeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, param1: i32 ```
    pub fn QBaseHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return C.QDial_QBaseHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, slot: fn (?*C.QDial, i32) callconv(.c) i32 ```
    pub fn OnHeightForWidth(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) i32) void {
        C.QDial_OnHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDial ```
    pub fn HasHeightForWidth(self: ?*anyopaque) bool {
        return C.QDial_HasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial ```
    pub fn QBaseHasHeightForWidth(self: ?*anyopaque) bool {
        return C.QDial_QBaseHasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, slot: fn () callconv(.c) bool ```
    pub fn OnHasHeightForWidth(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QDial_OnHasHeightForWidth(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDial ```
    pub fn PaintEngine(self: ?*anyopaque) ?*C.QPaintEngine {
        return C.QDial_PaintEngine(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial ```
    pub fn QBasePaintEngine(self: ?*anyopaque) ?*C.QPaintEngine {
        return C.QDial_QBasePaintEngine(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, slot: fn () callconv(.c) ?*C.QPaintEngine ```
    pub fn OnPaintEngine(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QPaintEngine) void {
        C.QDial_OnPaintEngine(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDial, event: ?*C.QMouseEvent ```
    pub fn MouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QDial_MouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, event: ?*C.QMouseEvent ```
    pub fn QBaseMouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QDial_QBaseMouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, slot: fn (?*C.QDial, ?*C.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseDoubleClickEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QDial_OnMouseDoubleClickEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDial, event: ?*C.QKeyEvent ```
    pub fn KeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QDial_KeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, event: ?*C.QKeyEvent ```
    pub fn QBaseKeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QDial_QBaseKeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, slot: fn (?*C.QDial, ?*C.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyReleaseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QDial_OnKeyReleaseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDial, event: ?*C.QFocusEvent ```
    pub fn FocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QDial_FocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, event: ?*C.QFocusEvent ```
    pub fn QBaseFocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QDial_QBaseFocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, slot: fn (?*C.QDial, ?*C.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusInEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QDial_OnFocusInEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDial, event: ?*C.QFocusEvent ```
    pub fn FocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QDial_FocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, event: ?*C.QFocusEvent ```
    pub fn QBaseFocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QDial_QBaseFocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, slot: fn (?*C.QDial, ?*C.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusOutEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QDial_OnFocusOutEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDial, event: ?*C.QEnterEvent ```
    pub fn EnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QDial_EnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, event: ?*C.QEnterEvent ```
    pub fn QBaseEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QDial_QBaseEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, slot: fn (?*C.QDial, ?*C.QEnterEvent) callconv(.c) void ```
    pub fn OnEnterEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QDial_OnEnterEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDial, event: ?*C.QEvent ```
    pub fn LeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QDial_LeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, event: ?*C.QEvent ```
    pub fn QBaseLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QDial_QBaseLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, slot: fn (?*C.QDial, ?*C.QEvent) callconv(.c) void ```
    pub fn OnLeaveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QDial_OnLeaveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDial, event: ?*C.QMoveEvent ```
    pub fn MoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QDial_MoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, event: ?*C.QMoveEvent ```
    pub fn QBaseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QDial_QBaseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, slot: fn (?*C.QDial, ?*C.QMoveEvent) callconv(.c) void ```
    pub fn OnMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QDial_OnMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDial, event: ?*C.QCloseEvent ```
    pub fn CloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QDial_CloseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, event: ?*C.QCloseEvent ```
    pub fn QBaseCloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QDial_QBaseCloseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, slot: fn (?*C.QDial, ?*C.QCloseEvent) callconv(.c) void ```
    pub fn OnCloseEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QDial_OnCloseEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDial, event: ?*C.QContextMenuEvent ```
    pub fn ContextMenuEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QDial_ContextMenuEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, event: ?*C.QContextMenuEvent ```
    pub fn QBaseContextMenuEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QDial_QBaseContextMenuEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, slot: fn (?*C.QDial, ?*C.QContextMenuEvent) callconv(.c) void ```
    pub fn OnContextMenuEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QDial_OnContextMenuEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDial, event: ?*C.QTabletEvent ```
    pub fn TabletEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QDial_TabletEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, event: ?*C.QTabletEvent ```
    pub fn QBaseTabletEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QDial_QBaseTabletEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, slot: fn (?*C.QDial, ?*C.QTabletEvent) callconv(.c) void ```
    pub fn OnTabletEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QDial_OnTabletEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDial, event: ?*C.QActionEvent ```
    pub fn ActionEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QDial_ActionEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, event: ?*C.QActionEvent ```
    pub fn QBaseActionEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QDial_QBaseActionEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, slot: fn (?*C.QDial, ?*C.QActionEvent) callconv(.c) void ```
    pub fn OnActionEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QDial_OnActionEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDial, event: ?*C.QDragEnterEvent ```
    pub fn DragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QDial_DragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, event: ?*C.QDragEnterEvent ```
    pub fn QBaseDragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QDial_QBaseDragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, slot: fn (?*C.QDial, ?*C.QDragEnterEvent) callconv(.c) void ```
    pub fn OnDragEnterEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QDial_OnDragEnterEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDial, event: ?*C.QDragMoveEvent ```
    pub fn DragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QDial_DragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, event: ?*C.QDragMoveEvent ```
    pub fn QBaseDragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QDial_QBaseDragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, slot: fn (?*C.QDial, ?*C.QDragMoveEvent) callconv(.c) void ```
    pub fn OnDragMoveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QDial_OnDragMoveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDial, event: ?*C.QDragLeaveEvent ```
    pub fn DragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QDial_DragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, event: ?*C.QDragLeaveEvent ```
    pub fn QBaseDragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QDial_QBaseDragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, slot: fn (?*C.QDial, ?*C.QDragLeaveEvent) callconv(.c) void ```
    pub fn OnDragLeaveEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QDial_OnDragLeaveEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDial, event: ?*C.QDropEvent ```
    pub fn DropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QDial_DropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, event: ?*C.QDropEvent ```
    pub fn QBaseDropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QDial_QBaseDropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, slot: fn (?*C.QDial, ?*C.QDropEvent) callconv(.c) void ```
    pub fn OnDropEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QDial_OnDropEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDial, event: ?*C.QShowEvent ```
    pub fn ShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QDial_ShowEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, event: ?*C.QShowEvent ```
    pub fn QBaseShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QDial_QBaseShowEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, slot: fn (?*C.QDial, ?*C.QShowEvent) callconv(.c) void ```
    pub fn OnShowEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QDial_OnShowEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDial, event: ?*C.QHideEvent ```
    pub fn HideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QDial_HideEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, event: ?*C.QHideEvent ```
    pub fn QBaseHideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QDial_QBaseHideEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, slot: fn (?*C.QDial, ?*C.QHideEvent) callconv(.c) void ```
    pub fn OnHideEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QDial_OnHideEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDial, eventType: []u8, message: ?*anyopaque, result: ?*isize ```
    pub fn NativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: ?*anyopaque) bool {
        const eventType_str = C.struct_libqt_string{
            .len = eventType.len,
            .data = @constCast(eventType.ptr),
        };
        return C.QDial_NativeEvent(@ptrCast(self), eventType_str, message, @intCast(result));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, eventType: []u8, message: ?*anyopaque, result: ?*isize ```
    pub fn QBaseNativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: ?*anyopaque) bool {
        const eventType_str = C.struct_libqt_string{
            .len = eventType.len,
            .data = @constCast(eventType.ptr),
        };
        return C.QDial_QBaseNativeEvent(@ptrCast(self), eventType_str, message, @intCast(result));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, slot: fn (?*C.QDial, []u8, ?*anyopaque, ?*isize) callconv(.c) bool ```
    pub fn OnNativeEvent(self: ?*anyopaque, slot: fn (?*anyopaque, []u8, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QDial_OnNativeEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDial, param1: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn Metric(self: ?*anyopaque, param1: i64) i32 {
        return C.QDial_Metric(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, param1: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn QBaseMetric(self: ?*anyopaque, param1: i64) i32 {
        return C.QDial_QBaseMetric(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, slot: fn (?*C.QDial, qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 ```
    pub fn OnMetric(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) i32) void {
        C.QDial_OnMetric(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDial, painter: ?*C.QPainter ```
    pub fn InitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        C.QDial_InitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, painter: ?*C.QPainter ```
    pub fn QBaseInitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        C.QDial_QBaseInitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, slot: fn (?*C.QDial, ?*C.QPainter) callconv(.c) void ```
    pub fn OnInitPainter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QDial_OnInitPainter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDial, offset: ?*C.QPoint ```
    pub fn Redirected(self: ?*anyopaque, offset: ?*anyopaque) ?*C.QPaintDevice {
        return C.QDial_Redirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, offset: ?*C.QPoint ```
    pub fn QBaseRedirected(self: ?*anyopaque, offset: ?*anyopaque) ?*C.QPaintDevice {
        return C.QDial_QBaseRedirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, slot: fn (?*C.QDial, ?*C.QPoint) callconv(.c) ?*C.QPaintDevice ```
    pub fn OnRedirected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) ?*C.QPaintDevice) void {
        C.QDial_OnRedirected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDial ```
    pub fn SharedPainter(self: ?*anyopaque) ?*C.QPainter {
        return C.QDial_SharedPainter(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial ```
    pub fn QBaseSharedPainter(self: ?*anyopaque) ?*C.QPainter {
        return C.QDial_QBaseSharedPainter(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, slot: fn () callconv(.c) ?*C.QPainter ```
    pub fn OnSharedPainter(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QPainter) void {
        C.QDial_OnSharedPainter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDial, param1: ?*C.QInputMethodEvent ```
    pub fn InputMethodEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QDial_InputMethodEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, param1: ?*C.QInputMethodEvent ```
    pub fn QBaseInputMethodEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QDial_QBaseInputMethodEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, slot: fn (?*C.QDial, ?*C.QInputMethodEvent) callconv(.c) void ```
    pub fn OnInputMethodEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QDial_OnInputMethodEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDial, param1: qnamespace_enums.InputMethodQuery ```
    pub fn InputMethodQuery(self: ?*anyopaque, param1: i64) ?*C.QVariant {
        return C.QDial_InputMethodQuery(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, param1: qnamespace_enums.InputMethodQuery ```
    pub fn QBaseInputMethodQuery(self: ?*anyopaque, param1: i64) ?*C.QVariant {
        return C.QDial_QBaseInputMethodQuery(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, slot: fn (?*C.QDial, qnamespace_enums.InputMethodQuery) callconv(.c) ?*C.QVariant ```
    pub fn OnInputMethodQuery(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) ?*C.QVariant) void {
        C.QDial_OnInputMethodQuery(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDial, next: bool ```
    pub fn FocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return C.QDial_FocusNextPrevChild(@ptrCast(self), next);
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, next: bool ```
    pub fn QBaseFocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return C.QDial_QBaseFocusNextPrevChild(@ptrCast(self), next);
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, slot: fn (?*C.QDial, bool) callconv(.c) bool ```
    pub fn OnFocusNextPrevChild(self: ?*anyopaque, slot: fn (?*anyopaque, bool) callconv(.c) bool) void {
        C.QDial_OnFocusNextPrevChild(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDial, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QDial_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QDial_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, slot: fn (?*C.QDial, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QDial_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDial, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QDial_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QDial_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, slot: fn (?*C.QDial, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QDial_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDial, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QDial_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QDial_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, slot: fn (?*C.QDial, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QDial_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDial, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QDial_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QDial_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, slot: fn (?*C.QDial, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QDial_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDial, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QDial_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QDial_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, slot: fn (?*C.QDial, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QDial_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSlider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#setRepeatAction)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDial, action: qabstractslider_enums.SliderAction ```
    pub fn SetRepeatAction(self: ?*anyopaque, action: i64) void {
        C.QDial_SetRepeatAction(@ptrCast(self), @intCast(action));
    }

    /// Inherited from QAbstractSlider
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, action: qabstractslider_enums.SliderAction ```
    pub fn QBaseSetRepeatAction(self: ?*anyopaque, action: i64) void {
        C.QDial_QBaseSetRepeatAction(@ptrCast(self), @intCast(action));
    }

    /// Inherited from QAbstractSlider
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, slot: fn (?*C.QDial, qabstractslider_enums.SliderAction) callconv(.c) void ```
    pub fn OnSetRepeatAction(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QDial_OnSetRepeatAction(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSlider
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractslider.html#repeatAction)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDial ```
    pub fn RepeatAction(self: ?*anyopaque) i64 {
        return C.QDial_RepeatAction(@ptrCast(self));
    }

    /// Inherited from QAbstractSlider
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial ```
    pub fn QBaseRepeatAction(self: ?*anyopaque) i64 {
        return C.QDial_QBaseRepeatAction(@ptrCast(self));
    }

    /// Inherited from QAbstractSlider
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, slot: fn () callconv(.c) i64 ```
    pub fn OnRepeatAction(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        C.QDial_OnRepeatAction(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDial ```
    pub fn UpdateMicroFocus(self: ?*anyopaque) void {
        C.QDial_UpdateMicroFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial ```
    pub fn QBaseUpdateMicroFocus(self: ?*anyopaque) void {
        C.QDial_QBaseUpdateMicroFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, slot: fn () callconv(.c) void ```
    pub fn OnUpdateMicroFocus(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QDial_OnUpdateMicroFocus(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDial ```
    pub fn Create(self: ?*anyopaque) void {
        C.QDial_Create(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial ```
    pub fn QBaseCreate(self: ?*anyopaque) void {
        C.QDial_QBaseCreate(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, slot: fn () callconv(.c) void ```
    pub fn OnCreate(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QDial_OnCreate(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDial ```
    pub fn Destroy(self: ?*anyopaque) void {
        C.QDial_Destroy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial ```
    pub fn QBaseDestroy(self: ?*anyopaque) void {
        C.QDial_QBaseDestroy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, slot: fn () callconv(.c) void ```
    pub fn OnDestroy(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QDial_OnDestroy(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDial ```
    pub fn FocusNextChild(self: ?*anyopaque) bool {
        return C.QDial_FocusNextChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial ```
    pub fn QBaseFocusNextChild(self: ?*anyopaque) bool {
        return C.QDial_QBaseFocusNextChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, slot: fn () callconv(.c) bool ```
    pub fn OnFocusNextChild(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QDial_OnFocusNextChild(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDial ```
    pub fn FocusPreviousChild(self: ?*anyopaque) bool {
        return C.QDial_FocusPreviousChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial ```
    pub fn QBaseFocusPreviousChild(self: ?*anyopaque) bool {
        return C.QDial_QBaseFocusPreviousChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, slot: fn () callconv(.c) bool ```
    pub fn OnFocusPreviousChild(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QDial_OnFocusPreviousChild(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDial ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QDial_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QDial_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QDial_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDial ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QDial_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QDial_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QDial_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDial, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QDial_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QDial_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, slot: fn (?*C.QDial, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QDial_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QDial, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QDial_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QDial_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QDial, slot: fn (?*C.QDial, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QDial_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QDial ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QDial_Delete(@ptrCast(self));
    }
};
