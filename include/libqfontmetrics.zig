const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html)
pub const qfontmetrics = struct {
    /// New constructs a new QFontMetrics object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QFont `
    ///
    pub fn New(param1: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QFontMetrics_new(@ptrCast(param1));
    }

    /// New2 constructs a new QFontMetrics object.
    ///
    /// ## Parameter(s):
    ///
    /// ` font: QtC.QFont `
    ///
    /// ` pd: QtC.QPaintDevice `
    ///
    pub fn New2(font: ?*anyopaque, pd: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QFontMetrics_new2(@ptrCast(font), @ptrCast(pd));
    }

    /// New3 constructs a new QFontMetrics object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QFontMetrics `
    ///
    pub fn New3(param1: ?*anyopaque) QtC.QFontMetrics {
        return qtc.QFontMetrics_new3(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetrics `
    ///
    /// ` param1: QtC.QFontMetrics `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QFontMetrics_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetrics `
    ///
    /// ` other: QtC.QFontMetrics `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QFontMetrics_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#ascent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetrics `
    ///
    pub fn Ascent(self: ?*anyopaque) i32 {
        return qtc.QFontMetrics_Ascent(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#capHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetrics `
    ///
    pub fn CapHeight(self: ?*anyopaque) i32 {
        return qtc.QFontMetrics_CapHeight(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#descent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetrics `
    ///
    pub fn Descent(self: ?*anyopaque) i32 {
        return qtc.QFontMetrics_Descent(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetrics `
    ///
    pub fn Height(self: ?*anyopaque) i32 {
        return qtc.QFontMetrics_Height(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#leading)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetrics `
    ///
    pub fn Leading(self: ?*anyopaque) i32 {
        return qtc.QFontMetrics_Leading(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#lineSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetrics `
    ///
    pub fn LineSpacing(self: ?*anyopaque) i32 {
        return qtc.QFontMetrics_LineSpacing(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#minLeftBearing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetrics `
    ///
    pub fn MinLeftBearing(self: ?*anyopaque) i32 {
        return qtc.QFontMetrics_MinLeftBearing(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#minRightBearing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetrics `
    ///
    pub fn MinRightBearing(self: ?*anyopaque) i32 {
        return qtc.QFontMetrics_MinRightBearing(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#maxWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetrics `
    ///
    pub fn MaxWidth(self: ?*anyopaque) i32 {
        return qtc.QFontMetrics_MaxWidth(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#xHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetrics `
    ///
    pub fn XHeight(self: ?*anyopaque) i32 {
        return qtc.QFontMetrics_XHeight(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#averageCharWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetrics `
    ///
    pub fn AverageCharWidth(self: ?*anyopaque) i32 {
        return qtc.QFontMetrics_AverageCharWidth(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#inFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetrics `
    ///
    /// ` param1: QtC.QChar `
    ///
    pub fn InFont(self: ?*anyopaque, param1: QtC.QChar) bool {
        return qtc.QFontMetrics_InFont(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#inFontUcs4)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetrics `
    ///
    /// ` ucs4: u32 `
    ///
    pub fn InFontUcs4(self: ?*anyopaque, ucs4: u32) bool {
        return qtc.QFontMetrics_InFontUcs4(@ptrCast(self), @intCast(ucs4));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#leftBearing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetrics `
    ///
    /// ` param1: QtC.QChar `
    ///
    pub fn LeftBearing(self: ?*anyopaque, param1: QtC.QChar) i32 {
        return qtc.QFontMetrics_LeftBearing(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#rightBearing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetrics `
    ///
    /// ` param1: QtC.QChar `
    ///
    pub fn RightBearing(self: ?*anyopaque, param1: QtC.QChar) i32 {
        return qtc.QFontMetrics_RightBearing(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#horizontalAdvance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetrics `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn HorizontalAdvance(self: ?*anyopaque, param1: []const u8) i32 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return qtc.QFontMetrics_HorizontalAdvance(@ptrCast(self), param1_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#horizontalAdvance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetrics `
    ///
    /// ` param1: []const u8 `
    ///
    /// ` textOption: QtC.QTextOption `
    ///
    pub fn HorizontalAdvance2(self: ?*anyopaque, param1: []const u8, textOption: ?*anyopaque) i32 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return qtc.QFontMetrics_HorizontalAdvance2(@ptrCast(self), param1_str, @ptrCast(textOption));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#horizontalAdvance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetrics `
    ///
    /// ` param1: QtC.QChar `
    ///
    pub fn HorizontalAdvance3(self: ?*anyopaque, param1: QtC.QChar) i32 {
        return qtc.QFontMetrics_HorizontalAdvance3(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetrics `
    ///
    /// ` param1: QtC.QChar `
    ///
    pub fn BoundingRect(self: ?*anyopaque, param1: QtC.QChar) QtC.QRect {
        return qtc.QFontMetrics_BoundingRect(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetrics `
    ///
    /// ` text: []const u8 `
    ///
    pub fn BoundingRect2(self: ?*anyopaque, text: []const u8) QtC.QRect {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QFontMetrics_BoundingRect2(@ptrCast(self), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetrics `
    ///
    /// ` text: []const u8 `
    ///
    /// ` textOption: QtC.QTextOption `
    ///
    pub fn BoundingRect3(self: ?*anyopaque, text: []const u8, textOption: ?*anyopaque) QtC.QRect {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QFontMetrics_BoundingRect3(@ptrCast(self), text_str, @ptrCast(textOption));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetrics `
    ///
    /// ` r: QtC.QRect `
    ///
    /// ` flags: i32 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn BoundingRect4(self: ?*anyopaque, r: ?*anyopaque, flags: i32, text: []const u8) QtC.QRect {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QFontMetrics_BoundingRect4(@ptrCast(self), @ptrCast(r), @intCast(flags), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetrics `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` flags: i32 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn BoundingRect5(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, flags: i32, text: []const u8) QtC.QRect {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QFontMetrics_BoundingRect5(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @intCast(flags), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetrics `
    ///
    /// ` flags: i32 `
    ///
    /// ` str: []const u8 `
    ///
    pub fn Size(self: ?*anyopaque, flags: i32, str: []const u8) QtC.QSize {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return qtc.QFontMetrics_Size(@ptrCast(self), @intCast(flags), str_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#tightBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetrics `
    ///
    /// ` text: []const u8 `
    ///
    pub fn TightBoundingRect(self: ?*anyopaque, text: []const u8) QtC.QRect {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QFontMetrics_TightBoundingRect(@ptrCast(self), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#tightBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetrics `
    ///
    /// ` text: []const u8 `
    ///
    /// ` textOption: QtC.QTextOption `
    ///
    pub fn TightBoundingRect2(self: ?*anyopaque, text: []const u8, textOption: ?*anyopaque) QtC.QRect {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QFontMetrics_TightBoundingRect2(@ptrCast(self), text_str, @ptrCast(textOption));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#elidedText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetrics `
    ///
    /// ` text: []const u8 `
    ///
    /// ` mode: qnamespace_enums.TextElideMode `
    ///
    /// ` width: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ElidedText(self: ?*anyopaque, text: []const u8, mode: i32, width: i32, allocator: std.mem.Allocator) []const u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        var _str = qtc.QFontMetrics_ElidedText(@ptrCast(self), text_str, @intCast(mode), @intCast(width));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfontmetrics.ElidedText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#underlinePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetrics `
    ///
    pub fn UnderlinePos(self: ?*anyopaque) i32 {
        return qtc.QFontMetrics_UnderlinePos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#overlinePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetrics `
    ///
    pub fn OverlinePos(self: ?*anyopaque) i32 {
        return qtc.QFontMetrics_OverlinePos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#strikeOutPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetrics `
    ///
    pub fn StrikeOutPos(self: ?*anyopaque) i32 {
        return qtc.QFontMetrics_StrikeOutPos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#lineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetrics `
    ///
    pub fn LineWidth(self: ?*anyopaque) i32 {
        return qtc.QFontMetrics_LineWidth(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#fontDpi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetrics `
    ///
    pub fn FontDpi(self: ?*anyopaque) f64 {
        return qtc.QFontMetrics_FontDpi(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetrics `
    ///
    /// ` other: QtC.QFontMetrics `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QFontMetrics_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetrics `
    ///
    /// ` other: QtC.QFontMetrics `
    ///
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QFontMetrics_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#horizontalAdvance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetrics `
    ///
    /// ` param1: []const u8 `
    ///
    /// ` lenVal: i32 `
    ///
    pub fn HorizontalAdvance22(self: ?*anyopaque, param1: []const u8, lenVal: i32) i32 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return qtc.QFontMetrics_HorizontalAdvance22(@ptrCast(self), param1_str, @intCast(lenVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetrics `
    ///
    /// ` r: QtC.QRect `
    ///
    /// ` flags: i32 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` tabstops: i32 `
    ///
    pub fn BoundingRect42(self: ?*anyopaque, r: ?*anyopaque, flags: i32, text: []const u8, tabstops: i32) QtC.QRect {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QFontMetrics_BoundingRect42(@ptrCast(self), @ptrCast(r), @intCast(flags), text_str, @intCast(tabstops));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetrics `
    ///
    /// ` r: QtC.QRect `
    ///
    /// ` flags: i32 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` tabstops: i32 `
    ///
    /// ` tabarray: *i32 `
    ///
    pub fn BoundingRect52(self: ?*anyopaque, r: ?*anyopaque, flags: i32, text: []const u8, tabstops: i32, tabarray: *i32) QtC.QRect {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QFontMetrics_BoundingRect52(@ptrCast(self), @ptrCast(r), @intCast(flags), text_str, @intCast(tabstops), @ptrCast(tabarray));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetrics `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` flags: i32 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` tabstops: i32 `
    ///
    pub fn BoundingRect7(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, flags: i32, text: []const u8, tabstops: i32) QtC.QRect {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QFontMetrics_BoundingRect7(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @intCast(flags), text_str, @intCast(tabstops));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetrics `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    /// ` flags: i32 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` tabstops: i32 `
    ///
    /// ` tabarray: *i32 `
    ///
    pub fn BoundingRect8(self: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, flags: i32, text: []const u8, tabstops: i32, tabarray: *i32) QtC.QRect {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QFontMetrics_BoundingRect8(@ptrCast(self), @intCast(x), @intCast(y), @intCast(w), @intCast(h), @intCast(flags), text_str, @intCast(tabstops), @ptrCast(tabarray));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetrics `
    ///
    /// ` flags: i32 `
    ///
    /// ` str: []const u8 `
    ///
    /// ` tabstops: i32 `
    ///
    pub fn Size3(self: ?*anyopaque, flags: i32, str: []const u8, tabstops: i32) QtC.QSize {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return qtc.QFontMetrics_Size3(@ptrCast(self), @intCast(flags), str_str, @intCast(tabstops));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetrics `
    ///
    /// ` flags: i32 `
    ///
    /// ` str: []const u8 `
    ///
    /// ` tabstops: i32 `
    ///
    /// ` tabarray: *i32 `
    ///
    pub fn Size4(self: ?*anyopaque, flags: i32, str: []const u8, tabstops: i32, tabarray: *i32) QtC.QSize {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return qtc.QFontMetrics_Size4(@ptrCast(self), @intCast(flags), str_str, @intCast(tabstops), @ptrCast(tabarray));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#elidedText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetrics `
    ///
    /// ` text: []const u8 `
    ///
    /// ` mode: qnamespace_enums.TextElideMode `
    ///
    /// ` width: i32 `
    ///
    /// ` flags: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ElidedText4(self: ?*anyopaque, text: []const u8, mode: i32, width: i32, flags: i32, allocator: std.mem.Allocator) []const u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        var _str = qtc.QFontMetrics_ElidedText4(@ptrCast(self), text_str, @intCast(mode), @intCast(width), @intCast(flags));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfontmetrics.ElidedText4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#dtor.QFontMetrics)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QFontMetrics `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFontMetrics_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html)
pub const qfontmetricsf = struct {
    /// New constructs a new QFontMetricsF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` font: QtC.QFont `
    ///
    pub fn New(font: ?*anyopaque) QtC.QFontMetricsF {
        return qtc.QFontMetricsF_new(@ptrCast(font));
    }

    /// New2 constructs a new QFontMetricsF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` font: QtC.QFont `
    ///
    /// ` pd: QtC.QPaintDevice `
    ///
    pub fn New2(font: ?*anyopaque, pd: ?*anyopaque) QtC.QFontMetricsF {
        return qtc.QFontMetricsF_new2(@ptrCast(font), @ptrCast(pd));
    }

    /// New3 constructs a new QFontMetricsF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QFontMetrics `
    ///
    pub fn New3(param1: ?*anyopaque) QtC.QFontMetricsF {
        return qtc.QFontMetricsF_new3(@ptrCast(param1));
    }

    /// New4 constructs a new QFontMetricsF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QFontMetricsF `
    ///
    pub fn New4(param1: ?*anyopaque) QtC.QFontMetricsF {
        return qtc.QFontMetricsF_new4(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetricsF `
    ///
    /// ` param1: QtC.QFontMetricsF `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QFontMetricsF_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetricsF `
    ///
    /// ` param1: QtC.QFontMetrics `
    ///
    pub fn OperatorAssign2(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QFontMetricsF_OperatorAssign2(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetricsF `
    ///
    /// ` other: QtC.QFontMetricsF `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QFontMetricsF_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#ascent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetricsF `
    ///
    pub fn Ascent(self: ?*anyopaque) f64 {
        return qtc.QFontMetricsF_Ascent(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#capHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetricsF `
    ///
    pub fn CapHeight(self: ?*anyopaque) f64 {
        return qtc.QFontMetricsF_CapHeight(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#descent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetricsF `
    ///
    pub fn Descent(self: ?*anyopaque) f64 {
        return qtc.QFontMetricsF_Descent(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetricsF `
    ///
    pub fn Height(self: ?*anyopaque) f64 {
        return qtc.QFontMetricsF_Height(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#leading)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetricsF `
    ///
    pub fn Leading(self: ?*anyopaque) f64 {
        return qtc.QFontMetricsF_Leading(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#lineSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetricsF `
    ///
    pub fn LineSpacing(self: ?*anyopaque) f64 {
        return qtc.QFontMetricsF_LineSpacing(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#minLeftBearing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetricsF `
    ///
    pub fn MinLeftBearing(self: ?*anyopaque) f64 {
        return qtc.QFontMetricsF_MinLeftBearing(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#minRightBearing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetricsF `
    ///
    pub fn MinRightBearing(self: ?*anyopaque) f64 {
        return qtc.QFontMetricsF_MinRightBearing(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#maxWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetricsF `
    ///
    pub fn MaxWidth(self: ?*anyopaque) f64 {
        return qtc.QFontMetricsF_MaxWidth(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#xHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetricsF `
    ///
    pub fn XHeight(self: ?*anyopaque) f64 {
        return qtc.QFontMetricsF_XHeight(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#averageCharWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetricsF `
    ///
    pub fn AverageCharWidth(self: ?*anyopaque) f64 {
        return qtc.QFontMetricsF_AverageCharWidth(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#inFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetricsF `
    ///
    /// ` param1: QtC.QChar `
    ///
    pub fn InFont(self: ?*anyopaque, param1: QtC.QChar) bool {
        return qtc.QFontMetricsF_InFont(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#inFontUcs4)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetricsF `
    ///
    /// ` ucs4: u32 `
    ///
    pub fn InFontUcs4(self: ?*anyopaque, ucs4: u32) bool {
        return qtc.QFontMetricsF_InFontUcs4(@ptrCast(self), @intCast(ucs4));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#leftBearing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetricsF `
    ///
    /// ` param1: QtC.QChar `
    ///
    pub fn LeftBearing(self: ?*anyopaque, param1: QtC.QChar) f64 {
        return qtc.QFontMetricsF_LeftBearing(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#rightBearing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetricsF `
    ///
    /// ` param1: QtC.QChar `
    ///
    pub fn RightBearing(self: ?*anyopaque, param1: QtC.QChar) f64 {
        return qtc.QFontMetricsF_RightBearing(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#horizontalAdvance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetricsF `
    ///
    /// ` stringVal: []const u8 `
    ///
    pub fn HorizontalAdvance(self: ?*anyopaque, stringVal: []const u8) f64 {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        return qtc.QFontMetricsF_HorizontalAdvance(@ptrCast(self), stringVal_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#horizontalAdvance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetricsF `
    ///
    /// ` param1: QtC.QChar `
    ///
    pub fn HorizontalAdvance2(self: ?*anyopaque, param1: QtC.QChar) f64 {
        return qtc.QFontMetricsF_HorizontalAdvance2(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#horizontalAdvance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetricsF `
    ///
    /// ` stringVal: []const u8 `
    ///
    /// ` textOption: QtC.QTextOption `
    ///
    pub fn HorizontalAdvance3(self: ?*anyopaque, stringVal: []const u8, textOption: ?*anyopaque) f64 {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        return qtc.QFontMetricsF_HorizontalAdvance3(@ptrCast(self), stringVal_str, @ptrCast(textOption));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetricsF `
    ///
    /// ` stringVal: []const u8 `
    ///
    pub fn BoundingRect(self: ?*anyopaque, stringVal: []const u8) QtC.QRectF {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        return qtc.QFontMetricsF_BoundingRect(@ptrCast(self), stringVal_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetricsF `
    ///
    /// ` text: []const u8 `
    ///
    /// ` textOption: QtC.QTextOption `
    ///
    pub fn BoundingRect2(self: ?*anyopaque, text: []const u8, textOption: ?*anyopaque) QtC.QRectF {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QFontMetricsF_BoundingRect2(@ptrCast(self), text_str, @ptrCast(textOption));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetricsF `
    ///
    /// ` param1: QtC.QChar `
    ///
    pub fn BoundingRect3(self: ?*anyopaque, param1: QtC.QChar) QtC.QRectF {
        return qtc.QFontMetricsF_BoundingRect3(@ptrCast(self), @ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetricsF `
    ///
    /// ` r: QtC.QRectF `
    ///
    /// ` flags: i32 `
    ///
    /// ` stringVal: []const u8 `
    ///
    pub fn BoundingRect4(self: ?*anyopaque, r: ?*anyopaque, flags: i32, stringVal: []const u8) QtC.QRectF {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        return qtc.QFontMetricsF_BoundingRect4(@ptrCast(self), @ptrCast(r), @intCast(flags), stringVal_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetricsF `
    ///
    /// ` flags: i32 `
    ///
    /// ` str: []const u8 `
    ///
    pub fn Size(self: ?*anyopaque, flags: i32, str: []const u8) QtC.QSizeF {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return qtc.QFontMetricsF_Size(@ptrCast(self), @intCast(flags), str_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#tightBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetricsF `
    ///
    /// ` text: []const u8 `
    ///
    pub fn TightBoundingRect(self: ?*anyopaque, text: []const u8) QtC.QRectF {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QFontMetricsF_TightBoundingRect(@ptrCast(self), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#tightBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetricsF `
    ///
    /// ` text: []const u8 `
    ///
    /// ` textOption: QtC.QTextOption `
    ///
    pub fn TightBoundingRect2(self: ?*anyopaque, text: []const u8, textOption: ?*anyopaque) QtC.QRectF {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QFontMetricsF_TightBoundingRect2(@ptrCast(self), text_str, @ptrCast(textOption));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#elidedText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetricsF `
    ///
    /// ` text: []const u8 `
    ///
    /// ` mode: qnamespace_enums.TextElideMode `
    ///
    /// ` width: f64 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ElidedText(self: ?*anyopaque, text: []const u8, mode: i32, width: f64, allocator: std.mem.Allocator) []const u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        var _str = qtc.QFontMetricsF_ElidedText(@ptrCast(self), text_str, @intCast(mode), @floatCast(width));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfontmetricsf.ElidedText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#underlinePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetricsF `
    ///
    pub fn UnderlinePos(self: ?*anyopaque) f64 {
        return qtc.QFontMetricsF_UnderlinePos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#overlinePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetricsF `
    ///
    pub fn OverlinePos(self: ?*anyopaque) f64 {
        return qtc.QFontMetricsF_OverlinePos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#strikeOutPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetricsF `
    ///
    pub fn StrikeOutPos(self: ?*anyopaque) f64 {
        return qtc.QFontMetricsF_StrikeOutPos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#lineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetricsF `
    ///
    pub fn LineWidth(self: ?*anyopaque) f64 {
        return qtc.QFontMetricsF_LineWidth(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#fontDpi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetricsF `
    ///
    pub fn FontDpi(self: ?*anyopaque) f64 {
        return qtc.QFontMetricsF_FontDpi(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetricsF `
    ///
    /// ` other: QtC.QFontMetricsF `
    ///
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QFontMetricsF_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetricsF `
    ///
    /// ` other: QtC.QFontMetricsF `
    ///
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QFontMetricsF_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#horizontalAdvance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetricsF `
    ///
    /// ` stringVal: []const u8 `
    ///
    /// ` length: i32 `
    ///
    pub fn HorizontalAdvance22(self: ?*anyopaque, stringVal: []const u8, length: i32) f64 {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        return qtc.QFontMetricsF_HorizontalAdvance22(@ptrCast(self), stringVal_str, @intCast(length));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetricsF `
    ///
    /// ` r: QtC.QRectF `
    ///
    /// ` flags: i32 `
    ///
    /// ` stringVal: []const u8 `
    ///
    /// ` tabstops: i32 `
    ///
    pub fn BoundingRect42(self: ?*anyopaque, r: ?*anyopaque, flags: i32, stringVal: []const u8, tabstops: i32) QtC.QRectF {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        return qtc.QFontMetricsF_BoundingRect42(@ptrCast(self), @ptrCast(r), @intCast(flags), stringVal_str, @intCast(tabstops));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetricsF `
    ///
    /// ` r: QtC.QRectF `
    ///
    /// ` flags: i32 `
    ///
    /// ` stringVal: []const u8 `
    ///
    /// ` tabstops: i32 `
    ///
    /// ` tabarray: *i32 `
    ///
    pub fn BoundingRect5(self: ?*anyopaque, r: ?*anyopaque, flags: i32, stringVal: []const u8, tabstops: i32, tabarray: *i32) QtC.QRectF {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        return qtc.QFontMetricsF_BoundingRect5(@ptrCast(self), @ptrCast(r), @intCast(flags), stringVal_str, @intCast(tabstops), @ptrCast(tabarray));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetricsF `
    ///
    /// ` flags: i32 `
    ///
    /// ` str: []const u8 `
    ///
    /// ` tabstops: i32 `
    ///
    pub fn Size3(self: ?*anyopaque, flags: i32, str: []const u8, tabstops: i32) QtC.QSizeF {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return qtc.QFontMetricsF_Size3(@ptrCast(self), @intCast(flags), str_str, @intCast(tabstops));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetricsF `
    ///
    /// ` flags: i32 `
    ///
    /// ` str: []const u8 `
    ///
    /// ` tabstops: i32 `
    ///
    /// ` tabarray: *i32 `
    ///
    pub fn Size4(self: ?*anyopaque, flags: i32, str: []const u8, tabstops: i32, tabarray: *i32) QtC.QSizeF {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return qtc.QFontMetricsF_Size4(@ptrCast(self), @intCast(flags), str_str, @intCast(tabstops), @ptrCast(tabarray));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#elidedText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QFontMetricsF `
    ///
    /// ` text: []const u8 `
    ///
    /// ` mode: qnamespace_enums.TextElideMode `
    ///
    /// ` width: f64 `
    ///
    /// ` flags: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ElidedText4(self: ?*anyopaque, text: []const u8, mode: i32, width: f64, flags: i32, allocator: std.mem.Allocator) []const u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        var _str = qtc.QFontMetricsF_ElidedText4(@ptrCast(self), text_str, @intCast(mode), @floatCast(width), @intCast(flags));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfontmetricsf.ElidedText4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#dtor.QFontMetricsF)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QFontMetricsF `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QFontMetricsF_Delete(@ptrCast(self));
    }
};
