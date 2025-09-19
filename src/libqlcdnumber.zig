const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qframe_enums = @import("libqframe.zig").enums;
const qlcdnumber_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("libqpaintdevice.zig").enums;
const qpalette_enums = @import("libqpalette.zig").enums;
const qsizepolicy_enums = @import("libqsizepolicy.zig").enums;
const qwidget_enums = @import("libqwidget.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qlcdnumber.html
pub const qlcdnumber = struct {
    /// New constructs a new QLCDNumber object.
    ///
    /// ``` parent: QtC.QWidget ```
    pub fn New(parent: ?*anyopaque) QtC.QLCDNumber {
        return qtc.QLCDNumber_new(@ptrCast(parent));
    }

    /// New2 constructs a new QLCDNumber object.
    ///
    ///
    pub fn New2() QtC.QLCDNumber {
        return qtc.QLCDNumber_new2();
    }

    /// New3 constructs a new QLCDNumber object.
    ///
    /// ``` numDigits: u32 ```
    pub fn New3(numDigits: u32) QtC.QLCDNumber {
        return qtc.QLCDNumber_new3(@intCast(numDigits));
    }

    /// New4 constructs a new QLCDNumber object.
    ///
    /// ``` numDigits: u32, parent: QtC.QWidget ```
    pub fn New4(numDigits: u32, parent: ?*anyopaque) QtC.QLCDNumber {
        return qtc.QLCDNumber_new4(@intCast(numDigits), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QLCDNumber_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QLCDNumber, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QLCDNumber_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QLCDNumber, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QLCDNumber_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QLCDNumber_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QLCDNumber, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QLCDNumber_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QLCDNumber_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlcdnumber.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#smallDecimalPoint)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn SmallDecimalPoint(self: ?*anyopaque) bool {
        return qtc.QLCDNumber_SmallDecimalPoint(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#digitCount)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn DigitCount(self: ?*anyopaque) i32 {
        return qtc.QLCDNumber_DigitCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#setDigitCount)
    ///
    /// ``` self: QtC.QLCDNumber, nDigits: i32 ```
    pub fn SetDigitCount(self: ?*anyopaque, nDigits: i32) void {
        qtc.QLCDNumber_SetDigitCount(@ptrCast(self), @intCast(nDigits));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#checkOverflow)
    ///
    /// ``` self: QtC.QLCDNumber, num: f64 ```
    pub fn CheckOverflow(self: ?*anyopaque, num: f64) bool {
        return qtc.QLCDNumber_CheckOverflow(@ptrCast(self), @floatCast(num));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#checkOverflow)
    ///
    /// ``` self: QtC.QLCDNumber, num: i32 ```
    pub fn CheckOverflow2(self: ?*anyopaque, num: i32) bool {
        return qtc.QLCDNumber_CheckOverflow2(@ptrCast(self), @intCast(num));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#mode)
    ///
    /// ``` self: QtC.QLCDNumber ```
    ///
    /// Returns: ``` qlcdnumber_enums.Mode ```
    pub fn Mode(self: ?*anyopaque) i32 {
        return qtc.QLCDNumber_Mode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#setMode)
    ///
    /// ``` self: QtC.QLCDNumber, mode: qlcdnumber_enums.Mode ```
    pub fn SetMode(self: ?*anyopaque, mode: i32) void {
        qtc.QLCDNumber_SetMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#segmentStyle)
    ///
    /// ``` self: QtC.QLCDNumber ```
    ///
    /// Returns: ``` qlcdnumber_enums.SegmentStyle ```
    pub fn SegmentStyle(self: ?*anyopaque) i32 {
        return qtc.QLCDNumber_SegmentStyle(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#setSegmentStyle)
    ///
    /// ``` self: QtC.QLCDNumber, segmentStyle: qlcdnumber_enums.SegmentStyle ```
    pub fn SetSegmentStyle(self: ?*anyopaque, segmentStyle: i32) void {
        qtc.QLCDNumber_SetSegmentStyle(@ptrCast(self), @intCast(segmentStyle));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#value)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn Value(self: ?*anyopaque) f64 {
        return qtc.QLCDNumber_Value(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#intValue)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn IntValue(self: ?*anyopaque) i32 {
        return qtc.QLCDNumber_IntValue(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#sizeHint)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn SizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QLCDNumber_SizeHint(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#sizeHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn () callconv(.c) QtC.QSize ```
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QSize) void {
        qtc.QLCDNumber_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#sizeHint)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn QBaseSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QLCDNumber_QBaseSizeHint(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#display)
    ///
    /// ``` self: QtC.QLCDNumber, str: []const u8 ```
    pub fn Display(self: ?*anyopaque, str: []const u8) void {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        qtc.QLCDNumber_Display(@ptrCast(self), str_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#display)
    ///
    /// ``` self: QtC.QLCDNumber, num: i32 ```
    pub fn Display2(self: ?*anyopaque, num: i32) void {
        qtc.QLCDNumber_Display2(@ptrCast(self), @intCast(num));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#display)
    ///
    /// ``` self: QtC.QLCDNumber, num: f64 ```
    pub fn Display3(self: ?*anyopaque, num: f64) void {
        qtc.QLCDNumber_Display3(@ptrCast(self), @floatCast(num));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#setHexMode)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn SetHexMode(self: ?*anyopaque) void {
        qtc.QLCDNumber_SetHexMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#setDecMode)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn SetDecMode(self: ?*anyopaque) void {
        qtc.QLCDNumber_SetDecMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#setOctMode)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn SetOctMode(self: ?*anyopaque) void {
        qtc.QLCDNumber_SetOctMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#setBinMode)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn SetBinMode(self: ?*anyopaque) void {
        qtc.QLCDNumber_SetBinMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#setSmallDecimalPoint)
    ///
    /// ``` self: QtC.QLCDNumber, smallDecimalPoint: bool ```
    pub fn SetSmallDecimalPoint(self: ?*anyopaque, smallDecimalPoint: bool) void {
        qtc.QLCDNumber_SetSmallDecimalPoint(@ptrCast(self), smallDecimalPoint);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#overflow)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn Overflow(self: ?*anyopaque) void {
        qtc.QLCDNumber_Overflow(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#overflow)
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber) callconv(.c) void ```
    pub fn OnOverflow(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QLCDNumber_Connect_Overflow(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#event)
    ///
    /// ``` self: QtC.QLCDNumber, e: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QLCDNumber_Event(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, e: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QLCDNumber_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#event)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QLCDNumber, e: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QLCDNumber_QBaseEvent(@ptrCast(self), @ptrCast(e));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#paintEvent)
    ///
    /// ``` self: QtC.QLCDNumber, param1: QtC.QPaintEvent ```
    pub fn PaintEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLCDNumber_PaintEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#paintEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, param1: QtC.QPaintEvent) callconv(.c) void ```
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLCDNumber_OnPaintEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#paintEvent)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QLCDNumber, param1: QtC.QPaintEvent ```
    pub fn QBasePaintEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLCDNumber_QBasePaintEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QLCDNumber_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlcdnumber.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QLCDNumber_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlcdnumber.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn FrameStyle(self: ?*anyopaque) i32 {
        return qtc.QFrame_FrameStyle(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
    ///
    /// ``` self: QtC.QLCDNumber, frameStyle: i32 ```
    pub fn SetFrameStyle(self: ?*anyopaque, frameStyle: i32) void {
        qtc.QFrame_SetFrameStyle(@ptrCast(self), @intCast(frameStyle));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn FrameWidth(self: ?*anyopaque) i32 {
        return qtc.QFrame_FrameWidth(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
    ///
    /// ``` self: QtC.QLCDNumber ```
    ///
    /// Returns: ``` qframe_enums.Shape ```
    pub fn FrameShape(self: ?*anyopaque) i32 {
        return qtc.QFrame_FrameShape(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
    ///
    /// ``` self: QtC.QLCDNumber, frameShape: qframe_enums.Shape ```
    pub fn SetFrameShape(self: ?*anyopaque, frameShape: i32) void {
        qtc.QFrame_SetFrameShape(@ptrCast(self), @intCast(frameShape));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
    ///
    /// ``` self: QtC.QLCDNumber ```
    ///
    /// Returns: ``` qframe_enums.Shadow ```
    pub fn FrameShadow(self: ?*anyopaque) i32 {
        return qtc.QFrame_FrameShadow(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
    ///
    /// ``` self: QtC.QLCDNumber, frameShadow: qframe_enums.Shadow ```
    pub fn SetFrameShadow(self: ?*anyopaque, frameShadow: i32) void {
        qtc.QFrame_SetFrameShadow(@ptrCast(self), @intCast(frameShadow));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn LineWidth(self: ?*anyopaque) i32 {
        return qtc.QFrame_LineWidth(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
    ///
    /// ``` self: QtC.QLCDNumber, lineWidth: i32 ```
    pub fn SetLineWidth(self: ?*anyopaque, lineWidth: i32) void {
        qtc.QFrame_SetLineWidth(@ptrCast(self), @intCast(lineWidth));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn MidLineWidth(self: ?*anyopaque) i32 {
        return qtc.QFrame_MidLineWidth(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
    ///
    /// ``` self: QtC.QLCDNumber, midLineWidth: i32 ```
    pub fn SetMidLineWidth(self: ?*anyopaque, midLineWidth: i32) void {
        qtc.QFrame_SetMidLineWidth(@ptrCast(self), @intCast(midLineWidth));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn FrameRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QFrame_FrameRect(@ptrCast(self));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
    ///
    /// ``` self: QtC.QLCDNumber, frameRect: QtC.QRect ```
    pub fn SetFrameRect(self: ?*anyopaque, frameRect: ?*anyopaque) void {
        qtc.QFrame_SetFrameRect(@ptrCast(self), @ptrCast(frameRect));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn WinId(self: ?*anyopaque) usize {
        return qtc.QWidget_WinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn CreateWinId(self: ?*anyopaque) void {
        qtc.QWidget_CreateWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn InternalWinId(self: ?*anyopaque) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn EffectiveWinId(self: ?*anyopaque) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn Style(self: ?*anyopaque) QtC.QStyle {
        return qtc.QWidget_Style(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ``` self: QtC.QLCDNumber, style: QtC.QStyle ```
    pub fn SetStyle(self: ?*anyopaque, style: ?*anyopaque) void {
        qtc.QWidget_SetStyle(@ptrCast(self), @ptrCast(style));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn IsTopLevel(self: ?*anyopaque) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn IsWindow(self: ?*anyopaque) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn IsModal(self: ?*anyopaque) bool {
        return qtc.QWidget_IsModal(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ``` self: QtC.QLCDNumber ```
    ///
    /// Returns: ``` qnamespace_enums.WindowModality ```
    pub fn WindowModality(self: ?*anyopaque) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ``` self: QtC.QLCDNumber, windowModality: qnamespace_enums.WindowModality ```
    pub fn SetWindowModality(self: ?*anyopaque, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self), @intCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn IsEnabled(self: ?*anyopaque) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ``` self: QtC.QLCDNumber, param1: QtC.QWidget ```
    pub fn IsEnabledTo(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QWidget_IsEnabledTo(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ``` self: QtC.QLCDNumber, enabled: bool ```
    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ``` self: QtC.QLCDNumber, disabled: bool ```
    pub fn SetDisabled(self: ?*anyopaque, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self), disabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ``` self: QtC.QLCDNumber, windowModified: bool ```
    pub fn SetWindowModified(self: ?*anyopaque, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn FrameGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_FrameGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn Geometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_Geometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn NormalGeometry(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_NormalGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn X(self: ?*anyopaque) i32 {
        return qtc.QWidget_X(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn Y(self: ?*anyopaque) i32 {
        return qtc.QWidget_Y(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn Pos(self: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_Pos(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn FrameSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_FrameSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn Size(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_Size(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn Width(self: ?*anyopaque) i32 {
        return qtc.QWidget_Width(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn Height(self: ?*anyopaque) i32 {
        return qtc.QWidget_Height(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn Rect(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_Rect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn ChildrenRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_ChildrenRect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn ChildrenRegion(self: ?*anyopaque) QtC.QRegion {
        return qtc.QWidget_ChildrenRegion(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn MinimumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_MinimumSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn MaximumSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_MaximumSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn MinimumWidth(self: ?*anyopaque) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn MinimumHeight(self: ?*anyopaque) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn MaximumWidth(self: ?*anyopaque) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn MaximumHeight(self: ?*anyopaque) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ``` self: QtC.QLCDNumber, minimumSize: QtC.QSize ```
    pub fn SetMinimumSize(self: ?*anyopaque, minimumSize: ?*anyopaque) void {
        qtc.QWidget_SetMinimumSize(@ptrCast(self), @ptrCast(minimumSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ``` self: QtC.QLCDNumber, minw: i32, minh: i32 ```
    pub fn SetMinimumSize2(self: ?*anyopaque, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self), @intCast(minw), @intCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ``` self: QtC.QLCDNumber, maximumSize: QtC.QSize ```
    pub fn SetMaximumSize(self: ?*anyopaque, maximumSize: ?*anyopaque) void {
        qtc.QWidget_SetMaximumSize(@ptrCast(self), @ptrCast(maximumSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ``` self: QtC.QLCDNumber, maxw: i32, maxh: i32 ```
    pub fn SetMaximumSize2(self: ?*anyopaque, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self), @intCast(maxw), @intCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ``` self: QtC.QLCDNumber, minw: i32 ```
    pub fn SetMinimumWidth(self: ?*anyopaque, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self), @intCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ``` self: QtC.QLCDNumber, minh: i32 ```
    pub fn SetMinimumHeight(self: ?*anyopaque, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self), @intCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ``` self: QtC.QLCDNumber, maxw: i32 ```
    pub fn SetMaximumWidth(self: ?*anyopaque, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self), @intCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ``` self: QtC.QLCDNumber, maxh: i32 ```
    pub fn SetMaximumHeight(self: ?*anyopaque, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self), @intCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn SizeIncrement(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_SizeIncrement(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ``` self: QtC.QLCDNumber, sizeIncrement: QtC.QSize ```
    pub fn SetSizeIncrement(self: ?*anyopaque, sizeIncrement: ?*anyopaque) void {
        qtc.QWidget_SetSizeIncrement(@ptrCast(self), @ptrCast(sizeIncrement));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ``` self: QtC.QLCDNumber, w: i32, h: i32 ```
    pub fn SetSizeIncrement2(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn BaseSize(self: ?*anyopaque) QtC.QSize {
        return qtc.QWidget_BaseSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ``` self: QtC.QLCDNumber, baseSize: QtC.QSize ```
    pub fn SetBaseSize(self: ?*anyopaque, baseSize: ?*anyopaque) void {
        qtc.QWidget_SetBaseSize(@ptrCast(self), @ptrCast(baseSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ``` self: QtC.QLCDNumber, basew: i32, baseh: i32 ```
    pub fn SetBaseSize2(self: ?*anyopaque, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self), @intCast(basew), @intCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ``` self: QtC.QLCDNumber, fixedSize: QtC.QSize ```
    pub fn SetFixedSize(self: ?*anyopaque, fixedSize: ?*anyopaque) void {
        qtc.QWidget_SetFixedSize(@ptrCast(self), @ptrCast(fixedSize));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ``` self: QtC.QLCDNumber, w: i32, h: i32 ```
    pub fn SetFixedSize2(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ``` self: QtC.QLCDNumber, w: i32 ```
    pub fn SetFixedWidth(self: ?*anyopaque, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self), @intCast(w));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ``` self: QtC.QLCDNumber, h: i32 ```
    pub fn SetFixedHeight(self: ?*anyopaque, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ``` self: QtC.QLCDNumber, param1: QtC.QPointF ```
    pub fn MapToGlobal(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapToGlobal(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ``` self: QtC.QLCDNumber, param1: QtC.QPoint ```
    pub fn MapToGlobal2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapToGlobal2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ``` self: QtC.QLCDNumber, param1: QtC.QPointF ```
    pub fn MapFromGlobal(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapFromGlobal(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ``` self: QtC.QLCDNumber, param1: QtC.QPoint ```
    pub fn MapFromGlobal2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapFromGlobal2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ``` self: QtC.QLCDNumber, param1: QtC.QPointF ```
    pub fn MapToParent(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapToParent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ``` self: QtC.QLCDNumber, param1: QtC.QPoint ```
    pub fn MapToParent2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapToParent2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ``` self: QtC.QLCDNumber, param1: QtC.QPointF ```
    pub fn MapFromParent(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapFromParent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ``` self: QtC.QLCDNumber, param1: QtC.QPoint ```
    pub fn MapFromParent2(self: ?*anyopaque, param1: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapFromParent2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ``` self: QtC.QLCDNumber, param1: QtC.QWidget, param2: QtC.QPointF ```
    pub fn MapTo(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapTo(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ``` self: QtC.QLCDNumber, param1: QtC.QWidget, param2: QtC.QPoint ```
    pub fn MapTo2(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapTo2(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
    ///
    /// ``` self: QtC.QLCDNumber, param1: QtC.QWidget, param2: QtC.QPointF ```
    pub fn MapFrom(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPointF {
        return qtc.QWidget_MapFrom(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
    ///
    /// ``` self: QtC.QLCDNumber, param1: QtC.QWidget, param2: QtC.QPoint ```
    pub fn MapFrom2(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) QtC.QPoint {
        return qtc.QWidget_MapFrom2(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn Window(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_Window(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn NativeParentWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_NativeParentWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn TopLevelWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_TopLevelWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn Palette(self: ?*anyopaque) QtC.QPalette {
        return qtc.QWidget_Palette(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ``` self: QtC.QLCDNumber, palette: QtC.QPalette ```
    pub fn SetPalette(self: ?*anyopaque, palette: ?*anyopaque) void {
        qtc.QWidget_SetPalette(@ptrCast(self), @ptrCast(palette));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ``` self: QtC.QLCDNumber, backgroundRole: qpalette_enums.ColorRole ```
    pub fn SetBackgroundRole(self: ?*anyopaque, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self), @intCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ``` self: QtC.QLCDNumber ```
    ///
    /// Returns: ``` qpalette_enums.ColorRole ```
    pub fn BackgroundRole(self: ?*anyopaque) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ``` self: QtC.QLCDNumber, foregroundRole: qpalette_enums.ColorRole ```
    pub fn SetForegroundRole(self: ?*anyopaque, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self), @intCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ``` self: QtC.QLCDNumber ```
    ///
    /// Returns: ``` qpalette_enums.ColorRole ```
    pub fn ForegroundRole(self: ?*anyopaque) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn Font(self: ?*anyopaque) QtC.QFont {
        return qtc.QWidget_Font(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ``` self: QtC.QLCDNumber, font: QtC.QFont ```
    pub fn SetFont(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QWidget_SetFont(@ptrCast(self), @ptrCast(font));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn FontMetrics(self: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QWidget_FontMetrics(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn FontInfo(self: ?*anyopaque) QtC.QFontInfo {
        return qtc.QWidget_FontInfo(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn Cursor(self: ?*anyopaque) QtC.QCursor {
        return qtc.QWidget_Cursor(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ``` self: QtC.QLCDNumber, cursor: QtC.QCursor ```
    pub fn SetCursor(self: ?*anyopaque, cursor: ?*anyopaque) void {
        qtc.QWidget_SetCursor(@ptrCast(self), @ptrCast(cursor));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn UnsetCursor(self: ?*anyopaque) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ``` self: QtC.QLCDNumber, enable: bool ```
    pub fn SetMouseTracking(self: ?*anyopaque, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn HasMouseTracking(self: ?*anyopaque) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn UnderMouse(self: ?*anyopaque) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ``` self: QtC.QLCDNumber, enable: bool ```
    pub fn SetTabletTracking(self: ?*anyopaque, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn HasTabletTracking(self: ?*anyopaque) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ``` self: QtC.QLCDNumber, mask: QtC.QBitmap ```
    pub fn SetMask(self: ?*anyopaque, mask: ?*anyopaque) void {
        qtc.QWidget_SetMask(@ptrCast(self), @ptrCast(mask));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ``` self: QtC.QLCDNumber, mask: QtC.QRegion ```
    pub fn SetMask2(self: ?*anyopaque, mask: ?*anyopaque) void {
        qtc.QWidget_SetMask2(@ptrCast(self), @ptrCast(mask));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn Mask(self: ?*anyopaque) QtC.QRegion {
        return qtc.QWidget_Mask(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn ClearMask(self: ?*anyopaque) void {
        qtc.QWidget_ClearMask(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QLCDNumber, target: QtC.QPaintDevice ```
    pub fn Render(self: ?*anyopaque, target: ?*anyopaque) void {
        qtc.QWidget_Render(@ptrCast(self), @ptrCast(target));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QLCDNumber, painter: QtC.QPainter ```
    pub fn Render2(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QWidget_Render2(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn Grab(self: ?*anyopaque) QtC.QPixmap {
        return qtc.QWidget_Grab(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn GraphicsEffect(self: ?*anyopaque) QtC.QGraphicsEffect {
        return qtc.QWidget_GraphicsEffect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ``` self: QtC.QLCDNumber, effect: QtC.QGraphicsEffect ```
    pub fn SetGraphicsEffect(self: ?*anyopaque, effect: ?*anyopaque) void {
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self), @ptrCast(effect));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ``` self: QtC.QLCDNumber, typeVal: qnamespace_enums.GestureType ```
    pub fn GrabGesture(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_GrabGesture(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ``` self: QtC.QLCDNumber, typeVal: qnamespace_enums.GestureType ```
    pub fn UngrabGesture(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ``` self: QtC.QLCDNumber, windowTitle: []const u8 ```
    pub fn SetWindowTitle(self: ?*anyopaque, windowTitle: []const u8) void {
        const windowTitle_str = qtc.libqt_string{
            .len = windowTitle.len,
            .data = windowTitle.ptr,
        };
        qtc.QWidget_SetWindowTitle(@ptrCast(self), windowTitle_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
    ///
    /// ``` self: QtC.QLCDNumber, styleSheet: []const u8 ```
    pub fn SetStyleSheet(self: ?*anyopaque, styleSheet: []const u8) void {
        const styleSheet_str = qtc.libqt_string{
            .len = styleSheet.len,
            .data = styleSheet.ptr,
        };
        qtc.QWidget_SetStyleSheet(@ptrCast(self), styleSheet_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
    ///
    /// ``` self: QtC.QLCDNumber, allocator: std.mem.Allocator ```
    pub fn StyleSheet(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_StyleSheet(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlcdnumber.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ``` self: QtC.QLCDNumber, allocator: std.mem.Allocator ```
    pub fn WindowTitle(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowTitle(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlcdnumber.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ``` self: QtC.QLCDNumber, icon: QtC.QIcon ```
    pub fn SetWindowIcon(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QWidget_SetWindowIcon(@ptrCast(self), @ptrCast(icon));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn WindowIcon(self: ?*anyopaque) QtC.QIcon {
        return qtc.QWidget_WindowIcon(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ``` self: QtC.QLCDNumber, windowIconText: []const u8 ```
    pub fn SetWindowIconText(self: ?*anyopaque, windowIconText: []const u8) void {
        const windowIconText_str = qtc.libqt_string{
            .len = windowIconText.len,
            .data = windowIconText.ptr,
        };
        qtc.QWidget_SetWindowIconText(@ptrCast(self), windowIconText_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
    ///
    /// ``` self: QtC.QLCDNumber, allocator: std.mem.Allocator ```
    pub fn WindowIconText(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowIconText(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlcdnumber.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ``` self: QtC.QLCDNumber, windowRole: []const u8 ```
    pub fn SetWindowRole(self: ?*anyopaque, windowRole: []const u8) void {
        const windowRole_str = qtc.libqt_string{
            .len = windowRole.len,
            .data = windowRole.ptr,
        };
        qtc.QWidget_SetWindowRole(@ptrCast(self), windowRole_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
    ///
    /// ``` self: QtC.QLCDNumber, allocator: std.mem.Allocator ```
    pub fn WindowRole(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowRole(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlcdnumber.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ``` self: QtC.QLCDNumber, filePath: []const u8 ```
    pub fn SetWindowFilePath(self: ?*anyopaque, filePath: []const u8) void {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        qtc.QWidget_SetWindowFilePath(@ptrCast(self), filePath_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
    ///
    /// ``` self: QtC.QLCDNumber, allocator: std.mem.Allocator ```
    pub fn WindowFilePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WindowFilePath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlcdnumber.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ``` self: QtC.QLCDNumber, level: f64 ```
    pub fn SetWindowOpacity(self: ?*anyopaque, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self), @floatCast(level));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn WindowOpacity(self: ?*anyopaque) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn IsWindowModified(self: ?*anyopaque) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ``` self: QtC.QLCDNumber, toolTip: []const u8 ```
    pub fn SetToolTip(self: ?*anyopaque, toolTip: []const u8) void {
        const toolTip_str = qtc.libqt_string{
            .len = toolTip.len,
            .data = toolTip.ptr,
        };
        qtc.QWidget_SetToolTip(@ptrCast(self), toolTip_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
    ///
    /// ``` self: QtC.QLCDNumber, allocator: std.mem.Allocator ```
    pub fn ToolTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_ToolTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlcdnumber.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ``` self: QtC.QLCDNumber, msec: i32 ```
    pub fn SetToolTipDuration(self: ?*anyopaque, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self), @intCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn ToolTipDuration(self: ?*anyopaque) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ``` self: QtC.QLCDNumber, statusTip: []const u8 ```
    pub fn SetStatusTip(self: ?*anyopaque, statusTip: []const u8) void {
        const statusTip_str = qtc.libqt_string{
            .len = statusTip.len,
            .data = statusTip.ptr,
        };
        qtc.QWidget_SetStatusTip(@ptrCast(self), statusTip_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
    ///
    /// ``` self: QtC.QLCDNumber, allocator: std.mem.Allocator ```
    pub fn StatusTip(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_StatusTip(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlcdnumber.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ``` self: QtC.QLCDNumber, whatsThis: []const u8 ```
    pub fn SetWhatsThis(self: ?*anyopaque, whatsThis: []const u8) void {
        const whatsThis_str = qtc.libqt_string{
            .len = whatsThis.len,
            .data = whatsThis.ptr,
        };
        qtc.QWidget_SetWhatsThis(@ptrCast(self), whatsThis_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
    ///
    /// ``` self: QtC.QLCDNumber, allocator: std.mem.Allocator ```
    pub fn WhatsThis(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_WhatsThis(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlcdnumber.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ``` self: QtC.QLCDNumber, allocator: std.mem.Allocator ```
    pub fn AccessibleName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_AccessibleName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlcdnumber.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ``` self: QtC.QLCDNumber, name: []const u8 ```
    pub fn SetAccessibleName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QWidget_SetAccessibleName(@ptrCast(self), name_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
    ///
    /// ``` self: QtC.QLCDNumber, allocator: std.mem.Allocator ```
    pub fn AccessibleDescription(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidget_AccessibleDescription(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlcdnumber.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ``` self: QtC.QLCDNumber, description: []const u8 ```
    pub fn SetAccessibleDescription(self: ?*anyopaque, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QWidget_SetAccessibleDescription(@ptrCast(self), description_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
    ///
    /// ``` self: QtC.QLCDNumber, direction: qnamespace_enums.LayoutDirection ```
    pub fn SetLayoutDirection(self: ?*anyopaque, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ``` self: QtC.QLCDNumber ```
    ///
    /// Returns: ``` qnamespace_enums.LayoutDirection ```
    pub fn LayoutDirection(self: ?*anyopaque) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn UnsetLayoutDirection(self: ?*anyopaque) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ``` self: QtC.QLCDNumber, locale: QtC.QLocale ```
    pub fn SetLocale(self: ?*anyopaque, locale: ?*anyopaque) void {
        qtc.QWidget_SetLocale(@ptrCast(self), @ptrCast(locale));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn Locale(self: ?*anyopaque) QtC.QLocale {
        return qtc.QWidget_Locale(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn UnsetLocale(self: ?*anyopaque) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn IsRightToLeft(self: ?*anyopaque) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn IsLeftToRight(self: ?*anyopaque) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn SetFocus(self: ?*anyopaque) void {
        qtc.QWidget_SetFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn IsActiveWindow(self: ?*anyopaque) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn ActivateWindow(self: ?*anyopaque) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn ClearFocus(self: ?*anyopaque) void {
        qtc.QWidget_ClearFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ``` self: QtC.QLCDNumber, reason: qnamespace_enums.FocusReason ```
    pub fn SetFocus2(self: ?*anyopaque, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self), @intCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ``` self: QtC.QLCDNumber ```
    ///
    /// Returns: ``` qnamespace_enums.FocusPolicy ```
    pub fn FocusPolicy(self: ?*anyopaque) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ``` self: QtC.QLCDNumber, policy: qnamespace_enums.FocusPolicy ```
    pub fn SetFocusPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn HasFocus(self: ?*anyopaque) bool {
        return qtc.QWidget_HasFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
    ///
    /// ``` param1: QtC.QWidget, param2: QtC.QWidget ```
    pub fn SetTabOrder(param1: ?*anyopaque, param2: ?*anyopaque) void {
        qtc.QWidget_SetTabOrder(@ptrCast(param1), @ptrCast(param2));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
    ///
    /// ``` self: QtC.QLCDNumber, focusProxy: QtC.QWidget ```
    pub fn SetFocusProxy(self: ?*anyopaque, focusProxy: ?*anyopaque) void {
        qtc.QWidget_SetFocusProxy(@ptrCast(self), @ptrCast(focusProxy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn FocusProxy(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_FocusProxy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ``` self: QtC.QLCDNumber ```
    ///
    /// Returns: ``` qnamespace_enums.ContextMenuPolicy ```
    pub fn ContextMenuPolicy(self: ?*anyopaque) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ``` self: QtC.QLCDNumber, policy: qnamespace_enums.ContextMenuPolicy ```
    pub fn SetContextMenuPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn GrabMouse(self: ?*anyopaque) void {
        qtc.QWidget_GrabMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ``` self: QtC.QLCDNumber, param1: QtC.QCursor ```
    pub fn GrabMouse2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_GrabMouse2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn ReleaseMouse(self: ?*anyopaque) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn GrabKeyboard(self: ?*anyopaque) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn ReleaseKeyboard(self: ?*anyopaque) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ``` self: QtC.QLCDNumber, key: QtC.QKeySequence ```
    pub fn GrabShortcut(self: ?*anyopaque, key: ?*anyopaque) i32 {
        return qtc.QWidget_GrabShortcut(@ptrCast(self), @ptrCast(key));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ``` self: QtC.QLCDNumber, id: i32 ```
    pub fn ReleaseShortcut(self: ?*anyopaque, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ``` self: QtC.QLCDNumber, id: i32 ```
    pub fn SetShortcutEnabled(self: ?*anyopaque, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ``` self: QtC.QLCDNumber, id: i32 ```
    pub fn SetShortcutAutoRepeat(self: ?*anyopaque, id: i32) void {
        qtc.QWidget_SetShortcutAutoRepeat(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
    ///
    ///
    pub fn MouseGrabber() QtC.QWidget {
        return qtc.QWidget_MouseGrabber();
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
    ///
    ///
    pub fn KeyboardGrabber() QtC.QWidget {
        return qtc.QWidget_KeyboardGrabber();
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn UpdatesEnabled(self: ?*anyopaque) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ``` self: QtC.QLCDNumber, enable: bool ```
    pub fn SetUpdatesEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn GraphicsProxyWidget(self: ?*anyopaque) QtC.QGraphicsProxyWidget {
        return qtc.QWidget_GraphicsProxyWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn Update(self: ?*anyopaque) void {
        qtc.QWidget_Update(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn Repaint(self: ?*anyopaque) void {
        qtc.QWidget_Repaint(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: QtC.QLCDNumber, x: i32, y: i32, w: i32, h: i32 ```
    pub fn Update2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: QtC.QLCDNumber, param1: QtC.QRect ```
    pub fn Update3(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Update3(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ``` self: QtC.QLCDNumber, param1: QtC.QRegion ```
    pub fn Update4(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Update4(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.QLCDNumber, x: i32, y: i32, w: i32, h: i32 ```
    pub fn Repaint2(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.QLCDNumber, param1: QtC.QRect ```
    pub fn Repaint3(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Repaint3(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ``` self: QtC.QLCDNumber, param1: QtC.QRegion ```
    pub fn Repaint4(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Repaint4(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ``` self: QtC.QLCDNumber, hidden: bool ```
    pub fn SetHidden(self: ?*anyopaque, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self), hidden);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn Show(self: ?*anyopaque) void {
        qtc.QWidget_Show(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn Hide(self: ?*anyopaque) void {
        qtc.QWidget_Hide(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn ShowMinimized(self: ?*anyopaque) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn ShowMaximized(self: ?*anyopaque) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn ShowFullScreen(self: ?*anyopaque) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn ShowNormal(self: ?*anyopaque) void {
        qtc.QWidget_ShowNormal(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn Close(self: ?*anyopaque) bool {
        return qtc.QWidget_Close(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn Raise(self: ?*anyopaque) void {
        qtc.QWidget_Raise(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn Lower(self: ?*anyopaque) void {
        qtc.QWidget_Lower(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ``` self: QtC.QLCDNumber, param1: QtC.QWidget ```
    pub fn StackUnder(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_StackUnder(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ``` self: QtC.QLCDNumber, x: i32, y: i32 ```
    pub fn Move(self: ?*anyopaque, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ``` self: QtC.QLCDNumber, param1: QtC.QPoint ```
    pub fn Move2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Move2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ``` self: QtC.QLCDNumber, w: i32, h: i32 ```
    pub fn Resize(self: ?*anyopaque, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ``` self: QtC.QLCDNumber, param1: QtC.QSize ```
    pub fn Resize2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QWidget_Resize2(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ``` self: QtC.QLCDNumber, x: i32, y: i32, w: i32, h: i32 ```
    pub fn SetGeometry(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ``` self: QtC.QLCDNumber, geometry: QtC.QRect ```
    pub fn SetGeometry2(self: ?*anyopaque, geometry: ?*anyopaque) void {
        qtc.QWidget_SetGeometry2(@ptrCast(self), @ptrCast(geometry));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ``` self: QtC.QLCDNumber, allocator: std.mem.Allocator ```
    pub fn SaveGeometry(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qlcdnumber.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ``` self: QtC.QLCDNumber, geometry: []u8 ```
    pub fn RestoreGeometry(self: ?*anyopaque, geometry: []u8) bool {
        const geometry_str = qtc.libqt_string{
            .len = geometry.len,
            .data = geometry.ptr,
        };
        return qtc.QWidget_RestoreGeometry(@ptrCast(self), geometry_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn AdjustSize(self: ?*anyopaque) void {
        qtc.QWidget_AdjustSize(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn IsVisible(self: ?*anyopaque) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ``` self: QtC.QLCDNumber, param1: QtC.QWidget ```
    pub fn IsVisibleTo(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QWidget_IsVisibleTo(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn IsHidden(self: ?*anyopaque) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn IsMinimized(self: ?*anyopaque) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn IsMaximized(self: ?*anyopaque) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn IsFullScreen(self: ?*anyopaque) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ``` self: QtC.QLCDNumber ```
    ///
    /// Returns: ``` flag of qnamespace_enums.WindowState ```
    pub fn WindowState(self: ?*anyopaque) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ``` self: QtC.QLCDNumber, state: flag of qnamespace_enums.WindowState ```
    pub fn SetWindowState(self: ?*anyopaque, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ``` self: QtC.QLCDNumber, state: flag of qnamespace_enums.WindowState ```
    pub fn OverrideWindowState(self: ?*anyopaque, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn SizePolicy(self: ?*anyopaque) QtC.QSizePolicy {
        return qtc.QWidget_SizePolicy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ``` self: QtC.QLCDNumber, sizePolicy: QtC.QSizePolicy ```
    pub fn SetSizePolicy(self: ?*anyopaque, sizePolicy: QtC.QSizePolicy) void {
        qtc.QWidget_SetSizePolicy(@ptrCast(self), @ptrCast(sizePolicy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ``` self: QtC.QLCDNumber, horizontal: qsizepolicy_enums.Policy, vertical: qsizepolicy_enums.Policy ```
    pub fn SetSizePolicy2(self: ?*anyopaque, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self), @intCast(horizontal), @intCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn VisibleRegion(self: ?*anyopaque) QtC.QRegion {
        return qtc.QWidget_VisibleRegion(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ``` self: QtC.QLCDNumber, left: i32, top: i32, right: i32, bottom: i32 ```
    pub fn SetContentsMargins(self: ?*anyopaque, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self), @intCast(left), @intCast(top), @intCast(right), @intCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ``` self: QtC.QLCDNumber, margins: QtC.QMargins ```
    pub fn SetContentsMargins2(self: ?*anyopaque, margins: ?*anyopaque) void {
        qtc.QWidget_SetContentsMargins2(@ptrCast(self), @ptrCast(margins));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn ContentsMargins(self: ?*anyopaque) QtC.QMargins {
        return qtc.QWidget_ContentsMargins(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn ContentsRect(self: ?*anyopaque) QtC.QRect {
        return qtc.QWidget_ContentsRect(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn Layout(self: ?*anyopaque) QtC.QLayout {
        return qtc.QWidget_Layout(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ``` self: QtC.QLCDNumber, layout: QtC.QLayout ```
    pub fn SetLayout(self: ?*anyopaque, layout: ?*anyopaque) void {
        qtc.QWidget_SetLayout(@ptrCast(self), @ptrCast(layout));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn UpdateGeometry(self: ?*anyopaque) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ``` self: QtC.QLCDNumber, parent: QtC.QWidget ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QWidget_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ``` self: QtC.QLCDNumber, parent: QtC.QWidget, f: flag of qnamespace_enums.WindowType ```
    pub fn SetParent2(self: ?*anyopaque, parent: ?*anyopaque, f: i64) void {
        qtc.QWidget_SetParent2(@ptrCast(self), @ptrCast(parent), @intCast(f));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ``` self: QtC.QLCDNumber, dx: i32, dy: i32 ```
    pub fn Scroll(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self), @intCast(dx), @intCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ``` self: QtC.QLCDNumber, dx: i32, dy: i32, param3: QtC.QRect ```
    pub fn Scroll2(self: ?*anyopaque, dx: i32, dy: i32, param3: ?*anyopaque) void {
        qtc.QWidget_Scroll2(@ptrCast(self), @intCast(dx), @intCast(dy), @ptrCast(param3));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn FocusWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_FocusWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn NextInFocusChain(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_NextInFocusChain(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn PreviousInFocusChain(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_PreviousInFocusChain(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn AcceptDrops(self: ?*anyopaque) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ``` self: QtC.QLCDNumber, on: bool ```
    pub fn SetAcceptDrops(self: ?*anyopaque, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self), on);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.QLCDNumber, action: QtC.QAction ```
    pub fn AddAction(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QWidget_AddAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ``` self: QtC.QLCDNumber, actions: []QtC.QAction ```
    pub fn AddActions(self: ?*anyopaque, actions: []?*anyopaque) void {
        const actions_list = qtc.libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        qtc.QWidget_AddActions(@ptrCast(self), actions_list);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
    ///
    /// ``` self: QtC.QLCDNumber, before: QtC.QAction, actions: []QtC.QAction ```
    pub fn InsertActions(self: ?*anyopaque, before: ?*anyopaque, actions: []?*anyopaque) void {
        const actions_list = qtc.libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        qtc.QWidget_InsertActions(@ptrCast(self), @ptrCast(before), actions_list);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
    ///
    /// ``` self: QtC.QLCDNumber, before: QtC.QAction, action: QtC.QAction ```
    pub fn InsertAction(self: ?*anyopaque, before: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QWidget_InsertAction(@ptrCast(self), @ptrCast(before), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
    ///
    /// ``` self: QtC.QLCDNumber, action: QtC.QAction ```
    pub fn RemoveAction(self: ?*anyopaque, action: ?*anyopaque) void {
        qtc.QWidget_RemoveAction(@ptrCast(self), @ptrCast(action));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ``` self: QtC.QLCDNumber, allocator: std.mem.Allocator ```
    pub fn Actions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAction, _arr.len) catch @panic("qlcdnumber.Actions: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.QLCDNumber, text: []const u8 ```
    pub fn AddAction2(self: ?*anyopaque, text: []const u8) QtC.QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QWidget_AddAction2(@ptrCast(self), text_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.QLCDNumber, icon: QtC.QIcon, text: []const u8 ```
    pub fn AddAction3(self: ?*anyopaque, icon: ?*anyopaque, text: []const u8) QtC.QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QWidget_AddAction3(@ptrCast(self), @ptrCast(icon), text_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.QLCDNumber, text: []const u8, shortcut: QtC.QKeySequence ```
    pub fn AddAction4(self: ?*anyopaque, text: []const u8, shortcut: ?*anyopaque) QtC.QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QWidget_AddAction4(@ptrCast(self), text_str, @ptrCast(shortcut));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ``` self: QtC.QLCDNumber, icon: QtC.QIcon, text: []const u8, shortcut: QtC.QKeySequence ```
    pub fn AddAction5(self: ?*anyopaque, icon: ?*anyopaque, text: []const u8, shortcut: ?*anyopaque) QtC.QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QWidget_AddAction5(@ptrCast(self), @ptrCast(icon), text_str, @ptrCast(shortcut));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn ParentWidget(self: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_ParentWidget(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ``` self: QtC.QLCDNumber, typeVal: flag of qnamespace_enums.WindowType ```
    pub fn SetWindowFlags(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ``` self: QtC.QLCDNumber ```
    ///
    /// Returns: ``` flag of qnamespace_enums.WindowType ```
    pub fn WindowFlags(self: ?*anyopaque) i64 {
        return qtc.QWidget_WindowFlags(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ``` self: QtC.QLCDNumber, param1: qnamespace_enums.WindowType ```
    pub fn SetWindowFlag(self: ?*anyopaque, param1: i64) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ``` self: QtC.QLCDNumber, typeVal: flag of qnamespace_enums.WindowType ```
    pub fn OverrideWindowFlags(self: ?*anyopaque, typeVal: i64) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self), @intCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ``` self: QtC.QLCDNumber ```
    ///
    /// Returns: ``` qnamespace_enums.WindowType ```
    pub fn WindowType(self: ?*anyopaque) i64 {
        return qtc.QWidget_WindowType(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
    ///
    /// ``` param1: u64 ```
    pub fn Find(param1: u64) QtC.QWidget {
        return qtc.QWidget_Find(@intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ``` self: QtC.QLCDNumber, x: i32, y: i32 ```
    pub fn ChildAt(self: ?*anyopaque, x: i32, y: i32) QtC.QWidget {
        return qtc.QWidget_ChildAt(@ptrCast(self), @intCast(x), @intCast(y));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ``` self: QtC.QLCDNumber, p: QtC.QPoint ```
    pub fn ChildAt2(self: ?*anyopaque, p: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_ChildAt2(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ``` self: QtC.QLCDNumber, p: QtC.QPointF ```
    pub fn ChildAt3(self: ?*anyopaque, p: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_ChildAt3(@ptrCast(self), @ptrCast(p));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ``` self: QtC.QLCDNumber, param1: qnamespace_enums.WidgetAttribute ```
    pub fn SetAttribute(self: ?*anyopaque, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ``` self: QtC.QLCDNumber, param1: qnamespace_enums.WidgetAttribute ```
    pub fn TestAttribute(self: ?*anyopaque, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn EnsurePolished(self: ?*anyopaque) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ``` self: QtC.QLCDNumber, child: QtC.QWidget ```
    pub fn IsAncestorOf(self: ?*anyopaque, child: ?*anyopaque) bool {
        return qtc.QWidget_IsAncestorOf(@ptrCast(self), @ptrCast(child));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn AutoFillBackground(self: ?*anyopaque) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ``` self: QtC.QLCDNumber, enabled: bool ```
    pub fn SetAutoFillBackground(self: ?*anyopaque, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self), enabled);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn BackingStore(self: ?*anyopaque) QtC.QBackingStore {
        return qtc.QWidget_BackingStore(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn WindowHandle(self: ?*anyopaque) QtC.QWindow {
        return qtc.QWidget_WindowHandle(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn Screen(self: ?*anyopaque) QtC.QScreen {
        return qtc.QWidget_Screen(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ``` self: QtC.QLCDNumber, screen: QtC.QScreen ```
    pub fn SetScreen(self: ?*anyopaque, screen: ?*anyopaque) void {
        qtc.QWidget_SetScreen(@ptrCast(self), @ptrCast(screen));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ``` window: QtC.QWindow ```
    pub fn CreateWindowContainer(window: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_CreateWindowContainer(@ptrCast(window));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
    ///
    /// ``` self: QtC.QLCDNumber, title: []const u8 ```
    pub fn WindowTitleChanged(self: ?*anyopaque, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QWidget_WindowTitleChanged(@ptrCast(self), title_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, title: [*:0]const u8) callconv(.c) void ```
    pub fn OnWindowTitleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ``` self: QtC.QLCDNumber, icon: QtC.QIcon ```
    pub fn WindowIconChanged(self: ?*anyopaque, icon: ?*anyopaque) void {
        qtc.QWidget_WindowIconChanged(@ptrCast(self), @ptrCast(icon));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, icon: QtC.QIcon) callconv(.c) void ```
    pub fn OnWindowIconChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ``` self: QtC.QLCDNumber, iconText: []const u8 ```
    pub fn WindowIconTextChanged(self: ?*anyopaque, iconText: []const u8) void {
        const iconText_str = qtc.libqt_string{
            .len = iconText.len,
            .data = iconText.ptr,
        };
        qtc.QWidget_WindowIconTextChanged(@ptrCast(self), iconText_str);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, iconText: [*:0]const u8) callconv(.c) void ```
    pub fn OnWindowIconTextChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ``` self: QtC.QLCDNumber, pos: QtC.QPoint ```
    pub fn CustomContextMenuRequested(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self), @ptrCast(pos));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, pos: QtC.QPoint) callconv(.c) void ```
    pub fn OnCustomContextMenuRequested(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ``` self: QtC.QLCDNumber ```
    ///
    /// Returns: ``` flag of qnamespace_enums.InputMethodHint ```
    pub fn InputMethodHints(self: ?*anyopaque) i64 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ``` self: QtC.QLCDNumber, hints: flag of qnamespace_enums.InputMethodHint ```
    pub fn SetInputMethodHints(self: ?*anyopaque, hints: i64) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self), @intCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QLCDNumber, target: QtC.QPaintDevice, targetOffset: QtC.QPoint ```
    pub fn Render22(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque) void {
        qtc.QWidget_Render22(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QLCDNumber, target: QtC.QPaintDevice, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion ```
    pub fn Render3(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque) void {
        qtc.QWidget_Render3(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset), @ptrCast(sourceRegion));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QLCDNumber, target: QtC.QPaintDevice, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion, renderFlags: flag of qwidget_enums.RenderFlag ```
    pub fn Render4(self: ?*anyopaque, target: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque, renderFlags: i32) void {
        qtc.QWidget_Render4(@ptrCast(self), @ptrCast(target), @ptrCast(targetOffset), @ptrCast(sourceRegion), @intCast(renderFlags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QLCDNumber, painter: QtC.QPainter, targetOffset: QtC.QPoint ```
    pub fn Render23(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque) void {
        qtc.QWidget_Render23(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QLCDNumber, painter: QtC.QPainter, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion ```
    pub fn Render32(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque) void {
        qtc.QWidget_Render32(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset), @ptrCast(sourceRegion));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ``` self: QtC.QLCDNumber, painter: QtC.QPainter, targetOffset: QtC.QPoint, sourceRegion: QtC.QRegion, renderFlags: flag of qwidget_enums.RenderFlag ```
    pub fn Render42(self: ?*anyopaque, painter: ?*anyopaque, targetOffset: ?*anyopaque, sourceRegion: ?*anyopaque, renderFlags: i32) void {
        qtc.QWidget_Render42(@ptrCast(self), @ptrCast(painter), @ptrCast(targetOffset), @ptrCast(sourceRegion), @intCast(renderFlags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ``` self: QtC.QLCDNumber, rectangle: QtC.QRect ```
    pub fn Grab1(self: ?*anyopaque, rectangle: ?*anyopaque) QtC.QPixmap {
        return qtc.QWidget_Grab1(@ptrCast(self), @ptrCast(rectangle));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ``` self: QtC.QLCDNumber, typeVal: qnamespace_enums.GestureType, flags: flag of qnamespace_enums.GestureFlag ```
    pub fn GrabGesture2(self: ?*anyopaque, typeVal: i64, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self), @intCast(typeVal), @intCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ``` self: QtC.QLCDNumber, key: QtC.QKeySequence, context: qnamespace_enums.ShortcutContext ```
    pub fn GrabShortcut2(self: ?*anyopaque, key: ?*anyopaque, context: i32) i32 {
        return qtc.QWidget_GrabShortcut2(@ptrCast(self), @ptrCast(key), @intCast(context));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ``` self: QtC.QLCDNumber, id: i32, enable: bool ```
    pub fn SetShortcutEnabled2(self: ?*anyopaque, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self), @intCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ``` self: QtC.QLCDNumber, id: i32, enable: bool ```
    pub fn SetShortcutAutoRepeat2(self: ?*anyopaque, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self), @intCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ``` self: QtC.QLCDNumber, param1: qnamespace_enums.WindowType, on: bool ```
    pub fn SetWindowFlag2(self: ?*anyopaque, param1: i64, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self), @intCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ``` self: QtC.QLCDNumber, param1: qnamespace_enums.WidgetAttribute, on: bool ```
    pub fn SetAttribute2(self: ?*anyopaque, param1: i32, on: bool) void {
        qtc.QWidget_SetAttribute2(@ptrCast(self), @intCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ``` window: QtC.QWindow, parent: QtC.QWidget ```
    pub fn CreateWindowContainer2(window: ?*anyopaque, parent: ?*anyopaque) QtC.QWidget {
        return qtc.QWidget_CreateWindowContainer2(@ptrCast(window), @ptrCast(parent));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ``` window: QtC.QWindow, parent: QtC.QWidget, flags: flag of qnamespace_enums.WindowType ```
    pub fn CreateWindowContainer3(window: ?*anyopaque, parent: ?*anyopaque, flags: i64) QtC.QWidget {
        return qtc.QWidget_CreateWindowContainer3(@ptrCast(window), @ptrCast(parent), @intCast(flags));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QLCDNumber, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlcdnumber.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QLCDNumber, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QLCDNumber, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QLCDNumber, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QLCDNumber, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QLCDNumber, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QLCDNumber, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QLCDNumber, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qlcdnumber.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QLCDNumber, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QLCDNumber, obj: QtC.QObject ```
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
    /// ``` self: QtC.QLCDNumber, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.QLCDNumber ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QLCDNumber, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QLCDNumber, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QLCDNumber, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qlcdnumber.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qlcdnumber.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QLCDNumber, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QLCDNumber, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QLCDNumber, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QLCDNumber, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QLCDNumber, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn PaintingActive(self: ?*anyopaque) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn WidthMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn HeightMM(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn LogicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn LogicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn PhysicalDpiX(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn PhysicalDpiY(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn DevicePixelRatio(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn DevicePixelRatioF(self: ?*anyopaque) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn ColorCount(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn Depth(self: ?*anyopaque) i32 {
        return qtc.QPaintDevice_Depth(@ptrCast(self));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
    ///
    ///
    pub fn DevicePixelRatioFScale() f64 {
        return qtc.QPaintDevice_DevicePixelRatioFScale();
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
    ///
    /// ``` metric: qpaintdevice_enums.PaintDeviceMetric, value: f64 ```
    pub fn EncodeMetricF(metric: i32, value: f64) i32 {
        return qtc.QPaintDevice_EncodeMetricF(@intCast(metric), @floatCast(value));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, param1: QtC.QEvent ```
    pub fn ChangeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLCDNumber_ChangeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, param1: QtC.QEvent ```
    pub fn QBaseChangeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLCDNumber_QBaseChangeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, param1: QtC.QEvent) callconv(.c) void ```
    pub fn OnChangeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLCDNumber_OnChangeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, option: QtC.QStyleOptionFrame ```
    pub fn InitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QLCDNumber_InitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, option: QtC.QStyleOptionFrame ```
    pub fn QBaseInitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QLCDNumber_QBaseInitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, option: QtC.QStyleOptionFrame) callconv(.c) void ```
    pub fn OnInitStyleOption(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLCDNumber_OnInitStyleOption(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn DevType(self: ?*anyopaque) i32 {
        return qtc.QLCDNumber_DevType(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn QBaseDevType(self: ?*anyopaque) i32 {
        return qtc.QLCDNumber_QBaseDevType(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn () callconv(.c) i32 ```
    pub fn OnDevType(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QLCDNumber_OnDevType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, visible: bool ```
    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QLCDNumber_SetVisible(@ptrCast(self), visible);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, visible: bool ```
    pub fn QBaseSetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QLCDNumber_QBaseSetVisible(@ptrCast(self), visible);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, visible: bool) callconv(.c) void ```
    pub fn OnSetVisible(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QLCDNumber_OnSetVisible(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn MinimumSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QLCDNumber_MinimumSizeHint(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn QBaseMinimumSizeHint(self: ?*anyopaque) QtC.QSize {
        return qtc.QLCDNumber_QBaseMinimumSizeHint(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn () callconv(.c) QtC.QSize ```
    pub fn OnMinimumSizeHint(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QSize) void {
        qtc.QLCDNumber_OnMinimumSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, param1: i32 ```
    pub fn HeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QLCDNumber_HeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, param1: i32 ```
    pub fn QBaseHeightForWidth(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QLCDNumber_QBaseHeightForWidth(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, param1: i32) callconv(.c) i32 ```
    pub fn OnHeightForWidth(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QLCDNumber_OnHeightForWidth(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn HasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.QLCDNumber_HasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn QBaseHasHeightForWidth(self: ?*anyopaque) bool {
        return qtc.QLCDNumber_QBaseHasHeightForWidth(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn () callconv(.c) bool ```
    pub fn OnHasHeightForWidth(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QLCDNumber_OnHasHeightForWidth(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn PaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.QLCDNumber_PaintEngine(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn QBasePaintEngine(self: ?*anyopaque) QtC.QPaintEngine {
        return qtc.QLCDNumber_QBasePaintEngine(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn () callconv(.c) QtC.QPaintEngine ```
    pub fn OnPaintEngine(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPaintEngine) void {
        qtc.QLCDNumber_OnPaintEngine(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QMouseEvent ```
    pub fn MousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_MousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QMouseEvent ```
    pub fn QBaseMousePressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_QBaseMousePressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, event: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMousePressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLCDNumber_OnMousePressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QMouseEvent ```
    pub fn MouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_MouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QMouseEvent ```
    pub fn QBaseMouseReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_QBaseMouseReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, event: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLCDNumber_OnMouseReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QMouseEvent ```
    pub fn MouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_MouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QMouseEvent ```
    pub fn QBaseMouseDoubleClickEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_QBaseMouseDoubleClickEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, event: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseDoubleClickEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLCDNumber_OnMouseDoubleClickEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QMouseEvent ```
    pub fn MouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_MouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QMouseEvent ```
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, event: QtC.QMouseEvent) callconv(.c) void ```
    pub fn OnMouseMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLCDNumber_OnMouseMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QWheelEvent ```
    pub fn WheelEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_WheelEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QWheelEvent ```
    pub fn QBaseWheelEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_QBaseWheelEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, event: QtC.QWheelEvent) callconv(.c) void ```
    pub fn OnWheelEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLCDNumber_OnWheelEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QKeyEvent ```
    pub fn KeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_KeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QKeyEvent ```
    pub fn QBaseKeyPressEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_QBaseKeyPressEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, event: QtC.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyPressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLCDNumber_OnKeyPressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QKeyEvent ```
    pub fn KeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_KeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QKeyEvent ```
    pub fn QBaseKeyReleaseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_QBaseKeyReleaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, event: QtC.QKeyEvent) callconv(.c) void ```
    pub fn OnKeyReleaseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLCDNumber_OnKeyReleaseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QFocusEvent ```
    pub fn FocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_FocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QFocusEvent ```
    pub fn QBaseFocusInEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_QBaseFocusInEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, event: QtC.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusInEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLCDNumber_OnFocusInEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QFocusEvent ```
    pub fn FocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_FocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QFocusEvent ```
    pub fn QBaseFocusOutEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_QBaseFocusOutEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, event: QtC.QFocusEvent) callconv(.c) void ```
    pub fn OnFocusOutEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLCDNumber_OnFocusOutEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QEnterEvent ```
    pub fn EnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_EnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QEnterEvent ```
    pub fn QBaseEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_QBaseEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, event: QtC.QEnterEvent) callconv(.c) void ```
    pub fn OnEnterEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLCDNumber_OnEnterEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QEvent ```
    pub fn LeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_LeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QEvent ```
    pub fn QBaseLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_QBaseLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnLeaveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLCDNumber_OnLeaveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QMoveEvent ```
    pub fn MoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_MoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QMoveEvent ```
    pub fn QBaseMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_QBaseMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, event: QtC.QMoveEvent) callconv(.c) void ```
    pub fn OnMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLCDNumber_OnMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QResizeEvent ```
    pub fn ResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_ResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QResizeEvent ```
    pub fn QBaseResizeEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_QBaseResizeEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, event: QtC.QResizeEvent) callconv(.c) void ```
    pub fn OnResizeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLCDNumber_OnResizeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QCloseEvent ```
    pub fn CloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_CloseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QCloseEvent ```
    pub fn QBaseCloseEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_QBaseCloseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, event: QtC.QCloseEvent) callconv(.c) void ```
    pub fn OnCloseEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLCDNumber_OnCloseEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QContextMenuEvent ```
    pub fn ContextMenuEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_ContextMenuEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QContextMenuEvent ```
    pub fn QBaseContextMenuEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_QBaseContextMenuEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, event: QtC.QContextMenuEvent) callconv(.c) void ```
    pub fn OnContextMenuEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLCDNumber_OnContextMenuEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QTabletEvent ```
    pub fn TabletEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_TabletEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QTabletEvent ```
    pub fn QBaseTabletEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_QBaseTabletEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, event: QtC.QTabletEvent) callconv(.c) void ```
    pub fn OnTabletEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLCDNumber_OnTabletEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QActionEvent ```
    pub fn ActionEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_ActionEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QActionEvent ```
    pub fn QBaseActionEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_QBaseActionEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, event: QtC.QActionEvent) callconv(.c) void ```
    pub fn OnActionEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLCDNumber_OnActionEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QDragEnterEvent ```
    pub fn DragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_DragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QDragEnterEvent ```
    pub fn QBaseDragEnterEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_QBaseDragEnterEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, event: QtC.QDragEnterEvent) callconv(.c) void ```
    pub fn OnDragEnterEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLCDNumber_OnDragEnterEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QDragMoveEvent ```
    pub fn DragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_DragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QDragMoveEvent ```
    pub fn QBaseDragMoveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_QBaseDragMoveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, event: QtC.QDragMoveEvent) callconv(.c) void ```
    pub fn OnDragMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLCDNumber_OnDragMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QDragLeaveEvent ```
    pub fn DragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_DragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QDragLeaveEvent ```
    pub fn QBaseDragLeaveEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_QBaseDragLeaveEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, event: QtC.QDragLeaveEvent) callconv(.c) void ```
    pub fn OnDragLeaveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLCDNumber_OnDragLeaveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QDropEvent ```
    pub fn DropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_DropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QDropEvent ```
    pub fn QBaseDropEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_QBaseDropEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, event: QtC.QDropEvent) callconv(.c) void ```
    pub fn OnDropEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLCDNumber_OnDropEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QShowEvent ```
    pub fn ShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_ShowEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QShowEvent ```
    pub fn QBaseShowEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_QBaseShowEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, event: QtC.QShowEvent) callconv(.c) void ```
    pub fn OnShowEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLCDNumber_OnShowEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QHideEvent ```
    pub fn HideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_HideEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QHideEvent ```
    pub fn QBaseHideEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_QBaseHideEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, event: QtC.QHideEvent) callconv(.c) void ```
    pub fn OnHideEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLCDNumber_OnHideEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, eventType: []u8, message: ?*anyopaque, result: *isize ```
    pub fn NativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QLCDNumber_NativeEvent(@ptrCast(self), eventType_str, message, @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, eventType: []u8, message: ?*anyopaque, result: *isize ```
    pub fn QBaseNativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QLCDNumber_QBaseNativeEvent(@ptrCast(self), eventType_str, message, @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, eventType: [*:0]u8, message: ?*anyopaque, result: *isize) callconv(.c) bool ```
    pub fn OnNativeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]u8, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.QLCDNumber_OnNativeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, param1: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn Metric(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QLCDNumber_Metric(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, param1: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn QBaseMetric(self: ?*anyopaque, param1: i32) i32 {
        return qtc.QLCDNumber_QBaseMetric(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 ```
    pub fn OnMetric(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QLCDNumber_OnMetric(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, painter: QtC.QPainter ```
    pub fn InitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QLCDNumber_InitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, painter: QtC.QPainter ```
    pub fn QBaseInitPainter(self: ?*anyopaque, painter: ?*anyopaque) void {
        qtc.QLCDNumber_QBaseInitPainter(@ptrCast(self), @ptrCast(painter));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, painter: QtC.QPainter) callconv(.c) void ```
    pub fn OnInitPainter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLCDNumber_OnInitPainter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, offset: QtC.QPoint ```
    pub fn Redirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QLCDNumber_Redirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, offset: QtC.QPoint ```
    pub fn QBaseRedirected(self: ?*anyopaque, offset: ?*anyopaque) QtC.QPaintDevice {
        return qtc.QLCDNumber_QBaseRedirected(@ptrCast(self), @ptrCast(offset));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, offset: QtC.QPoint) callconv(.c) QtC.QPaintDevice ```
    pub fn OnRedirected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QPaintDevice) void {
        qtc.QLCDNumber_OnRedirected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn SharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.QLCDNumber_SharedPainter(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn QBaseSharedPainter(self: ?*anyopaque) QtC.QPainter {
        return qtc.QLCDNumber_QBaseSharedPainter(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn () callconv(.c) QtC.QPainter ```
    pub fn OnSharedPainter(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QPainter) void {
        qtc.QLCDNumber_OnSharedPainter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, param1: QtC.QInputMethodEvent ```
    pub fn InputMethodEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLCDNumber_InputMethodEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, param1: QtC.QInputMethodEvent ```
    pub fn QBaseInputMethodEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLCDNumber_QBaseInputMethodEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, param1: QtC.QInputMethodEvent) callconv(.c) void ```
    pub fn OnInputMethodEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLCDNumber_OnInputMethodEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, param1: qnamespace_enums.InputMethodQuery ```
    pub fn InputMethodQuery(self: ?*anyopaque, param1: i64) QtC.QVariant {
        return qtc.QLCDNumber_InputMethodQuery(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, param1: qnamespace_enums.InputMethodQuery ```
    pub fn QBaseInputMethodQuery(self: ?*anyopaque, param1: i64) QtC.QVariant {
        return qtc.QLCDNumber_QBaseInputMethodQuery(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, param1: qnamespace_enums.InputMethodQuery) callconv(.c) QtC.QVariant ```
    pub fn OnInputMethodQuery(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) QtC.QVariant) void {
        qtc.QLCDNumber_OnInputMethodQuery(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, next: bool ```
    pub fn FocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QLCDNumber_FocusNextPrevChild(@ptrCast(self), next);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, next: bool ```
    pub fn QBaseFocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QLCDNumber_QBaseFocusNextPrevChild(@ptrCast(self), next);
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, next: bool) callconv(.c) bool ```
    pub fn OnFocusNextPrevChild(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) bool) void {
        qtc.QLCDNumber_OnFocusNextPrevChild(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QLCDNumber_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QLCDNumber_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QLCDNumber_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLCDNumber_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLCDNumber_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QLCDNumber_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLCDNumber_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QLCDNumber_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QLCDNumber_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLCDNumber_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QLCDNumber_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QLCDNumber_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLCDNumber_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, param1: QtC.QPainter ```
    pub fn DrawFrame(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLCDNumber_DrawFrame(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, param1: QtC.QPainter ```
    pub fn QBaseDrawFrame(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLCDNumber_QBaseDrawFrame(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QFrame
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, param1: QtC.QPainter) callconv(.c) void ```
    pub fn OnDrawFrame(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLCDNumber_OnDrawFrame(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn UpdateMicroFocus(self: ?*anyopaque) void {
        qtc.QLCDNumber_UpdateMicroFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn QBaseUpdateMicroFocus(self: ?*anyopaque) void {
        qtc.QLCDNumber_QBaseUpdateMicroFocus(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn () callconv(.c) void ```
    pub fn OnUpdateMicroFocus(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QLCDNumber_OnUpdateMicroFocus(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn Create(self: ?*anyopaque) void {
        qtc.QLCDNumber_Create(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn QBaseCreate(self: ?*anyopaque) void {
        qtc.QLCDNumber_QBaseCreate(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn () callconv(.c) void ```
    pub fn OnCreate(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QLCDNumber_OnCreate(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn Destroy(self: ?*anyopaque) void {
        qtc.QLCDNumber_Destroy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn QBaseDestroy(self: ?*anyopaque) void {
        qtc.QLCDNumber_QBaseDestroy(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn () callconv(.c) void ```
    pub fn OnDestroy(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QLCDNumber_OnDestroy(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn FocusNextChild(self: ?*anyopaque) bool {
        return qtc.QLCDNumber_FocusNextChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn QBaseFocusNextChild(self: ?*anyopaque) bool {
        return qtc.QLCDNumber_QBaseFocusNextChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn () callconv(.c) bool ```
    pub fn OnFocusNextChild(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QLCDNumber_OnFocusNextChild(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn FocusPreviousChild(self: ?*anyopaque) bool {
        return qtc.QLCDNumber_FocusPreviousChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn QBaseFocusPreviousChild(self: ?*anyopaque) bool {
        return qtc.QLCDNumber_QBaseFocusPreviousChild(@ptrCast(self));
    }

    /// Inherited from QWidget
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn () callconv(.c) bool ```
    pub fn OnFocusPreviousChild(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QLCDNumber_OnFocusPreviousChild(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QLCDNumber_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QLCDNumber_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QLCDNumber_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QLCDNumber_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QLCDNumber_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QLCDNumber_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QLCDNumber_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QLCDNumber_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QLCDNumber_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QLCDNumber_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QLCDNumber_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QLCDNumber_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn GetDecodedMetricF(self: ?*anyopaque, metricA: i32, metricB: i32) f64 {
        return qtc.QLCDNumber_GetDecodedMetricF(@ptrCast(self), @intCast(metricA), @intCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric ```
    pub fn QBaseGetDecodedMetricF(self: ?*anyopaque, metricA: i32, metricB: i32) f64 {
        return qtc.QLCDNumber_QBaseGetDecodedMetricF(@ptrCast(self), @intCast(metricA), @intCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 ```
    pub fn OnGetDecodedMetricF(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) f64) void {
        qtc.QLCDNumber_OnGetDecodedMetricF(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QLCDNumber, callback: *const fn (self: QtC.QLCDNumber, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qlcdnumber.html#dtor.QLCDNumber)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QLCDNumber ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QLCDNumber_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qlcdnumber.html#types
pub const enums = struct {
    pub const Mode = enum {
        pub const Hex: i32 = 0;
        pub const Dec: i32 = 1;
        pub const Oct: i32 = 2;
        pub const Bin: i32 = 3;
    };

    pub const SegmentStyle = enum {
        pub const Outline: i32 = 0;
        pub const Filled: i32 = 1;
        pub const Flat: i32 = 2;
    };
};
