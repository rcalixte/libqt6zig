const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QChar = @import("libqt6").QChar;
const QFont = @import("libqt6").QFont;
const QPaintDevice = @import("libqt6").QPaintDevice;
const QRect = @import("libqt6").QRect;
const QRectF = @import("libqt6").QRectF;
const QSize = @import("libqt6").QSize;
const QSizeF = @import("libqt6").QSizeF;
const QTextOption = @import("libqt6").QTextOption;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html)
pub const QFontMetrics = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QFontMetrics,

    pub const _is_QFontMetrics = {};

    /// New constructs a new QFontMetrics object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QFont `
    ///
    pub fn New(param1: anytype) QFontMetrics {
        comptime _ = @TypeOf(param1)._is_QFont;
        return .{ .ptr = qtc.QFontMetrics_new(@ptrCast(param1.ptr)) };
    }

    /// New2 constructs a new QFontMetrics object.
    ///
    /// ## Parameter(s):
    ///
    /// ` font: QFont `
    ///
    /// ` pd: QPaintDevice `
    ///
    pub fn New2(font: anytype, pd: anytype) QFontMetrics {
        comptime _ = @TypeOf(font)._is_QFont;
        comptime _ = @TypeOf(pd)._is_QPaintDevice;
        return .{ .ptr = qtc.QFontMetrics_new2(@ptrCast(font.ptr), @ptrCast(pd.ptr)) };
    }

    /// New3 constructs a new QFontMetrics object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QFontMetrics `
    ///
    pub fn New3(param1: anytype) QFontMetrics {
        comptime _ = @TypeOf(param1)._is_QFontMetrics;
        return .{ .ptr = qtc.QFontMetrics_new3(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    /// ` param1: QFontMetrics `
    ///
    pub fn OperatorAssign(self: QFontMetrics, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFontMetrics;
        qtc.QFontMetrics_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    /// ` other: QFontMetrics `
    ///
    pub fn Swap(self: QFontMetrics, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QFontMetrics;
        qtc.QFontMetrics_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#ascent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    pub fn Ascent(self: QFontMetrics) i32 {
        return qtc.QFontMetrics_Ascent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#capHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    pub fn CapHeight(self: QFontMetrics) i32 {
        return qtc.QFontMetrics_CapHeight(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#descent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    pub fn Descent(self: QFontMetrics) i32 {
        return qtc.QFontMetrics_Descent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    pub fn Height(self: QFontMetrics) i32 {
        return qtc.QFontMetrics_Height(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#leading)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    pub fn Leading(self: QFontMetrics) i32 {
        return qtc.QFontMetrics_Leading(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#lineSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    pub fn LineSpacing(self: QFontMetrics) i32 {
        return qtc.QFontMetrics_LineSpacing(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#minLeftBearing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    pub fn MinLeftBearing(self: QFontMetrics) i32 {
        return qtc.QFontMetrics_MinLeftBearing(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#minRightBearing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    pub fn MinRightBearing(self: QFontMetrics) i32 {
        return qtc.QFontMetrics_MinRightBearing(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#maxWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    pub fn MaxWidth(self: QFontMetrics) i32 {
        return qtc.QFontMetrics_MaxWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#xHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    pub fn XHeight(self: QFontMetrics) i32 {
        return qtc.QFontMetrics_XHeight(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#averageCharWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    pub fn AverageCharWidth(self: QFontMetrics) i32 {
        return qtc.QFontMetrics_AverageCharWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#inFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    /// ` param1: QChar `
    ///
    pub fn InFont(self: QFontMetrics, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QChar;
        return qtc.QFontMetrics_InFont(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#inFontUcs4)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    /// ` ucs4: u32 `
    ///
    pub fn InFontUcs4(self: QFontMetrics, ucs4: u32) bool {
        return qtc.QFontMetrics_InFontUcs4(@ptrCast(self.ptr), @bitCast(ucs4));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#leftBearing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    /// ` param1: QChar `
    ///
    pub fn LeftBearing(self: QFontMetrics, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QChar;
        return qtc.QFontMetrics_LeftBearing(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#rightBearing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    /// ` param1: QChar `
    ///
    pub fn RightBearing(self: QFontMetrics, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QChar;
        return qtc.QFontMetrics_RightBearing(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#horizontalAdvance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn HorizontalAdvance(self: QFontMetrics, param1: []const u8) i32 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return qtc.QFontMetrics_HorizontalAdvance(@ptrCast(self.ptr), param1_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#horizontalAdvance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    /// ` param1: []const u8 `
    ///
    /// ` textOption: QTextOption `
    ///
    pub fn HorizontalAdvance2(self: QFontMetrics, param1: []const u8, textOption: anytype) i32 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        comptime _ = @TypeOf(textOption)._is_QTextOption;
        return qtc.QFontMetrics_HorizontalAdvance2(@ptrCast(self.ptr), param1_str, @ptrCast(textOption.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#horizontalAdvance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    /// ` param1: QChar `
    ///
    pub fn HorizontalAdvance3(self: QFontMetrics, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QChar;
        return qtc.QFontMetrics_HorizontalAdvance3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    /// ` param1: QChar `
    ///
    pub fn BoundingRect(self: QFontMetrics, param1: anytype) QRect {
        comptime _ = @TypeOf(param1)._is_QChar;
        return .{ .ptr = qtc.QFontMetrics_BoundingRect(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    /// ` text: []const u8 `
    ///
    pub fn BoundingRect2(self: QFontMetrics, text: []const u8) QRect {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QFontMetrics_BoundingRect2(@ptrCast(self.ptr), text_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    /// ` text: []const u8 `
    ///
    /// ` textOption: QTextOption `
    ///
    pub fn BoundingRect3(self: QFontMetrics, text: []const u8, textOption: anytype) QRect {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(textOption)._is_QTextOption;
        return .{ .ptr = qtc.QFontMetrics_BoundingRect3(@ptrCast(self.ptr), text_str, @ptrCast(textOption.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    /// ` r: QRect `
    ///
    /// ` flags: i32 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn BoundingRect4(self: QFontMetrics, r: anytype, flags: i32, text: []const u8) QRect {
        comptime _ = @TypeOf(r)._is_QRect;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QFontMetrics_BoundingRect4(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(flags), text_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
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
    pub fn BoundingRect5(self: QFontMetrics, x: i32, y: i32, w: i32, h: i32, flags: i32, text: []const u8) QRect {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QFontMetrics_BoundingRect5(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(flags), text_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    /// ` flags: i32 `
    ///
    /// ` str: []const u8 `
    ///
    pub fn Size(self: QFontMetrics, flags: i32, str: []const u8) QSize {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return .{ .ptr = qtc.QFontMetrics_Size(@ptrCast(self.ptr), @bitCast(flags), str_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#tightBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    /// ` text: []const u8 `
    ///
    pub fn TightBoundingRect(self: QFontMetrics, text: []const u8) QRect {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QFontMetrics_TightBoundingRect(@ptrCast(self.ptr), text_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#tightBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    /// ` text: []const u8 `
    ///
    /// ` textOption: QTextOption `
    ///
    pub fn TightBoundingRect2(self: QFontMetrics, text: []const u8, textOption: anytype) QRect {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(textOption)._is_QTextOption;
        return .{ .ptr = qtc.QFontMetrics_TightBoundingRect2(@ptrCast(self.ptr), text_str, @ptrCast(textOption.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#elidedText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` text: []const u8 `
    ///
    /// ` mode: qnamespace_enums.TextElideMode `
    ///
    /// ` width: i32 `
    ///
    pub fn ElidedText(self: QFontMetrics, allocator: std.mem.Allocator, text: []const u8, mode: i32, width: i32) []const u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        var _str = qtc.QFontMetrics_ElidedText(@ptrCast(self.ptr), text_str, @bitCast(mode), @bitCast(width));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfontmetrics.ElidedText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#underlinePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    pub fn UnderlinePos(self: QFontMetrics) i32 {
        return qtc.QFontMetrics_UnderlinePos(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#overlinePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    pub fn OverlinePos(self: QFontMetrics) i32 {
        return qtc.QFontMetrics_OverlinePos(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#strikeOutPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    pub fn StrikeOutPos(self: QFontMetrics) i32 {
        return qtc.QFontMetrics_StrikeOutPos(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#lineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    pub fn LineWidth(self: QFontMetrics) i32 {
        return qtc.QFontMetrics_LineWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#fontDpi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    pub fn FontDpi(self: QFontMetrics) f64 {
        return qtc.QFontMetrics_FontDpi(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    /// ` other: QFontMetrics `
    ///
    pub fn OperatorEqual(self: QFontMetrics, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QFontMetrics;
        return qtc.QFontMetrics_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    /// ` other: QFontMetrics `
    ///
    pub fn OperatorNotEqual(self: QFontMetrics, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QFontMetrics;
        return qtc.QFontMetrics_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#horizontalAdvance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    /// ` param1: []const u8 `
    ///
    /// ` lenVal: i32 `
    ///
    pub fn HorizontalAdvance22(self: QFontMetrics, param1: []const u8, lenVal: i32) i32 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return qtc.QFontMetrics_HorizontalAdvance22(@ptrCast(self.ptr), param1_str, @bitCast(lenVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    /// ` r: QRect `
    ///
    /// ` flags: i32 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` tabstops: i32 `
    ///
    pub fn BoundingRect42(self: QFontMetrics, r: anytype, flags: i32, text: []const u8, tabstops: i32) QRect {
        comptime _ = @TypeOf(r)._is_QRect;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QFontMetrics_BoundingRect42(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(flags), text_str, @bitCast(tabstops)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    /// ` r: QRect `
    ///
    /// ` flags: i32 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` tabstops: i32 `
    ///
    /// ` tabarray: *i32 `
    ///
    pub fn BoundingRect52(self: QFontMetrics, r: anytype, flags: i32, text: []const u8, tabstops: i32, tabarray: *i32) QRect {
        comptime _ = @TypeOf(r)._is_QRect;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QFontMetrics_BoundingRect52(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(flags), text_str, @bitCast(tabstops), @ptrCast(tabarray)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
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
    pub fn BoundingRect7(self: QFontMetrics, x: i32, y: i32, w: i32, h: i32, flags: i32, text: []const u8, tabstops: i32) QRect {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QFontMetrics_BoundingRect7(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(flags), text_str, @bitCast(tabstops)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
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
    pub fn BoundingRect8(self: QFontMetrics, x: i32, y: i32, w: i32, h: i32, flags: i32, text: []const u8, tabstops: i32, tabarray: *i32) QRect {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QFontMetrics_BoundingRect8(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(flags), text_str, @bitCast(tabstops), @ptrCast(tabarray)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    /// ` flags: i32 `
    ///
    /// ` str: []const u8 `
    ///
    /// ` tabstops: i32 `
    ///
    pub fn Size3(self: QFontMetrics, flags: i32, str: []const u8, tabstops: i32) QSize {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return .{ .ptr = qtc.QFontMetrics_Size3(@ptrCast(self.ptr), @bitCast(flags), str_str, @bitCast(tabstops)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    /// ` flags: i32 `
    ///
    /// ` str: []const u8 `
    ///
    /// ` tabstops: i32 `
    ///
    /// ` tabarray: *i32 `
    ///
    pub fn Size4(self: QFontMetrics, flags: i32, str: []const u8, tabstops: i32, tabarray: *i32) QSize {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return .{ .ptr = qtc.QFontMetrics_Size4(@ptrCast(self.ptr), @bitCast(flags), str_str, @bitCast(tabstops), @ptrCast(tabarray)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#elidedText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` text: []const u8 `
    ///
    /// ` mode: qnamespace_enums.TextElideMode `
    ///
    /// ` width: i32 `
    ///
    /// ` flags: i32 `
    ///
    pub fn ElidedText4(self: QFontMetrics, allocator: std.mem.Allocator, text: []const u8, mode: i32, width: i32, flags: i32) []const u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        var _str = qtc.QFontMetrics_ElidedText4(@ptrCast(self.ptr), text_str, @bitCast(mode), @bitCast(width), @bitCast(flags));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfontmetrics.ElidedText4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#dtor.QFontMetrics)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QFontMetrics `
    ///
    pub fn Delete(self: QFontMetrics) void {
        qtc.QFontMetrics_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html)
pub const QFontMetricsF = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QFontMetricsF,

    pub const _is_QFontMetricsF = {};

    /// New constructs a new QFontMetricsF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` font: QFont `
    ///
    pub fn New(font: anytype) QFontMetricsF {
        comptime _ = @TypeOf(font)._is_QFont;
        return .{ .ptr = qtc.QFontMetricsF_new(@ptrCast(font.ptr)) };
    }

    /// New2 constructs a new QFontMetricsF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` font: QFont `
    ///
    /// ` pd: QPaintDevice `
    ///
    pub fn New2(font: anytype, pd: anytype) QFontMetricsF {
        comptime _ = @TypeOf(font)._is_QFont;
        comptime _ = @TypeOf(pd)._is_QPaintDevice;
        return .{ .ptr = qtc.QFontMetricsF_new2(@ptrCast(font.ptr), @ptrCast(pd.ptr)) };
    }

    /// New3 constructs a new QFontMetricsF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QFontMetrics `
    ///
    pub fn New3(param1: anytype) QFontMetricsF {
        comptime _ = @TypeOf(param1)._is_QFontMetrics;
        return .{ .ptr = qtc.QFontMetricsF_new3(@ptrCast(param1.ptr)) };
    }

    /// New4 constructs a new QFontMetricsF object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QFontMetricsF `
    ///
    pub fn New4(param1: anytype) QFontMetricsF {
        comptime _ = @TypeOf(param1)._is_QFontMetricsF;
        return .{ .ptr = qtc.QFontMetricsF_new4(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    /// ` param1: QFontMetricsF `
    ///
    pub fn OperatorAssign(self: QFontMetricsF, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFontMetricsF;
        qtc.QFontMetricsF_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    /// ` param1: QFontMetrics `
    ///
    pub fn OperatorAssign2(self: QFontMetricsF, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFontMetrics;
        qtc.QFontMetricsF_OperatorAssign2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    /// ` other: QFontMetricsF `
    ///
    pub fn Swap(self: QFontMetricsF, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QFontMetricsF;
        qtc.QFontMetricsF_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#ascent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    pub fn Ascent(self: QFontMetricsF) f64 {
        return qtc.QFontMetricsF_Ascent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#capHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    pub fn CapHeight(self: QFontMetricsF) f64 {
        return qtc.QFontMetricsF_CapHeight(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#descent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    pub fn Descent(self: QFontMetricsF) f64 {
        return qtc.QFontMetricsF_Descent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    pub fn Height(self: QFontMetricsF) f64 {
        return qtc.QFontMetricsF_Height(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#leading)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    pub fn Leading(self: QFontMetricsF) f64 {
        return qtc.QFontMetricsF_Leading(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#lineSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    pub fn LineSpacing(self: QFontMetricsF) f64 {
        return qtc.QFontMetricsF_LineSpacing(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#minLeftBearing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    pub fn MinLeftBearing(self: QFontMetricsF) f64 {
        return qtc.QFontMetricsF_MinLeftBearing(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#minRightBearing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    pub fn MinRightBearing(self: QFontMetricsF) f64 {
        return qtc.QFontMetricsF_MinRightBearing(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#maxWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    pub fn MaxWidth(self: QFontMetricsF) f64 {
        return qtc.QFontMetricsF_MaxWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#xHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    pub fn XHeight(self: QFontMetricsF) f64 {
        return qtc.QFontMetricsF_XHeight(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#averageCharWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    pub fn AverageCharWidth(self: QFontMetricsF) f64 {
        return qtc.QFontMetricsF_AverageCharWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#inFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    /// ` param1: QChar `
    ///
    pub fn InFont(self: QFontMetricsF, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QChar;
        return qtc.QFontMetricsF_InFont(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#inFontUcs4)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    /// ` ucs4: u32 `
    ///
    pub fn InFontUcs4(self: QFontMetricsF, ucs4: u32) bool {
        return qtc.QFontMetricsF_InFontUcs4(@ptrCast(self.ptr), @bitCast(ucs4));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#leftBearing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    /// ` param1: QChar `
    ///
    pub fn LeftBearing(self: QFontMetricsF, param1: anytype) f64 {
        comptime _ = @TypeOf(param1)._is_QChar;
        return qtc.QFontMetricsF_LeftBearing(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#rightBearing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    /// ` param1: QChar `
    ///
    pub fn RightBearing(self: QFontMetricsF, param1: anytype) f64 {
        comptime _ = @TypeOf(param1)._is_QChar;
        return qtc.QFontMetricsF_RightBearing(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#horizontalAdvance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    /// ` stringVal: []const u8 `
    ///
    pub fn HorizontalAdvance(self: QFontMetricsF, stringVal: []const u8) f64 {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        return qtc.QFontMetricsF_HorizontalAdvance(@ptrCast(self.ptr), stringVal_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#horizontalAdvance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    /// ` param1: QChar `
    ///
    pub fn HorizontalAdvance2(self: QFontMetricsF, param1: anytype) f64 {
        comptime _ = @TypeOf(param1)._is_QChar;
        return qtc.QFontMetricsF_HorizontalAdvance2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#horizontalAdvance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    /// ` stringVal: []const u8 `
    ///
    /// ` textOption: QTextOption `
    ///
    pub fn HorizontalAdvance3(self: QFontMetricsF, stringVal: []const u8, textOption: anytype) f64 {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        comptime _ = @TypeOf(textOption)._is_QTextOption;
        return qtc.QFontMetricsF_HorizontalAdvance3(@ptrCast(self.ptr), stringVal_str, @ptrCast(textOption.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    /// ` stringVal: []const u8 `
    ///
    pub fn BoundingRect(self: QFontMetricsF, stringVal: []const u8) QRectF {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        return .{ .ptr = qtc.QFontMetricsF_BoundingRect(@ptrCast(self.ptr), stringVal_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    /// ` text: []const u8 `
    ///
    /// ` textOption: QTextOption `
    ///
    pub fn BoundingRect2(self: QFontMetricsF, text: []const u8, textOption: anytype) QRectF {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(textOption)._is_QTextOption;
        return .{ .ptr = qtc.QFontMetricsF_BoundingRect2(@ptrCast(self.ptr), text_str, @ptrCast(textOption.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    /// ` param1: QChar `
    ///
    pub fn BoundingRect3(self: QFontMetricsF, param1: anytype) QRectF {
        comptime _ = @TypeOf(param1)._is_QChar;
        return .{ .ptr = qtc.QFontMetricsF_BoundingRect3(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    /// ` r: QRectF `
    ///
    /// ` flags: i32 `
    ///
    /// ` stringVal: []const u8 `
    ///
    pub fn BoundingRect4(self: QFontMetricsF, r: anytype, flags: i32, stringVal: []const u8) QRectF {
        comptime _ = @TypeOf(r)._is_QRectF;
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        return .{ .ptr = qtc.QFontMetricsF_BoundingRect4(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(flags), stringVal_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    /// ` flags: i32 `
    ///
    /// ` str: []const u8 `
    ///
    pub fn Size(self: QFontMetricsF, flags: i32, str: []const u8) QSizeF {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return .{ .ptr = qtc.QFontMetricsF_Size(@ptrCast(self.ptr), @bitCast(flags), str_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#tightBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    /// ` text: []const u8 `
    ///
    pub fn TightBoundingRect(self: QFontMetricsF, text: []const u8) QRectF {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QFontMetricsF_TightBoundingRect(@ptrCast(self.ptr), text_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#tightBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    /// ` text: []const u8 `
    ///
    /// ` textOption: QTextOption `
    ///
    pub fn TightBoundingRect2(self: QFontMetricsF, text: []const u8, textOption: anytype) QRectF {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(textOption)._is_QTextOption;
        return .{ .ptr = qtc.QFontMetricsF_TightBoundingRect2(@ptrCast(self.ptr), text_str, @ptrCast(textOption.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#elidedText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` text: []const u8 `
    ///
    /// ` mode: qnamespace_enums.TextElideMode `
    ///
    /// ` width: f64 `
    ///
    pub fn ElidedText(self: QFontMetricsF, allocator: std.mem.Allocator, text: []const u8, mode: i32, width: f64) []const u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        var _str = qtc.QFontMetricsF_ElidedText(@ptrCast(self.ptr), text_str, @bitCast(mode), @bitCast(width));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfontmetricsf.ElidedText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#underlinePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    pub fn UnderlinePos(self: QFontMetricsF) f64 {
        return qtc.QFontMetricsF_UnderlinePos(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#overlinePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    pub fn OverlinePos(self: QFontMetricsF) f64 {
        return qtc.QFontMetricsF_OverlinePos(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#strikeOutPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    pub fn StrikeOutPos(self: QFontMetricsF) f64 {
        return qtc.QFontMetricsF_StrikeOutPos(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#lineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    pub fn LineWidth(self: QFontMetricsF) f64 {
        return qtc.QFontMetricsF_LineWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#fontDpi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    pub fn FontDpi(self: QFontMetricsF) f64 {
        return qtc.QFontMetricsF_FontDpi(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    /// ` other: QFontMetricsF `
    ///
    pub fn OperatorEqual(self: QFontMetricsF, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QFontMetricsF;
        return qtc.QFontMetricsF_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    /// ` other: QFontMetricsF `
    ///
    pub fn OperatorNotEqual(self: QFontMetricsF, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QFontMetricsF;
        return qtc.QFontMetricsF_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#horizontalAdvance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    /// ` stringVal: []const u8 `
    ///
    /// ` length: i32 `
    ///
    pub fn HorizontalAdvance22(self: QFontMetricsF, stringVal: []const u8, length: i32) f64 {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        return qtc.QFontMetricsF_HorizontalAdvance22(@ptrCast(self.ptr), stringVal_str, @bitCast(length));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    /// ` r: QRectF `
    ///
    /// ` flags: i32 `
    ///
    /// ` stringVal: []const u8 `
    ///
    /// ` tabstops: i32 `
    ///
    pub fn BoundingRect42(self: QFontMetricsF, r: anytype, flags: i32, stringVal: []const u8, tabstops: i32) QRectF {
        comptime _ = @TypeOf(r)._is_QRectF;
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        return .{ .ptr = qtc.QFontMetricsF_BoundingRect42(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(flags), stringVal_str, @bitCast(tabstops)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    /// ` r: QRectF `
    ///
    /// ` flags: i32 `
    ///
    /// ` stringVal: []const u8 `
    ///
    /// ` tabstops: i32 `
    ///
    /// ` tabarray: *i32 `
    ///
    pub fn BoundingRect5(self: QFontMetricsF, r: anytype, flags: i32, stringVal: []const u8, tabstops: i32, tabarray: *i32) QRectF {
        comptime _ = @TypeOf(r)._is_QRectF;
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        return .{ .ptr = qtc.QFontMetricsF_BoundingRect5(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(flags), stringVal_str, @bitCast(tabstops), @ptrCast(tabarray)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    /// ` flags: i32 `
    ///
    /// ` str: []const u8 `
    ///
    /// ` tabstops: i32 `
    ///
    pub fn Size3(self: QFontMetricsF, flags: i32, str: []const u8, tabstops: i32) QSizeF {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return .{ .ptr = qtc.QFontMetricsF_Size3(@ptrCast(self.ptr), @bitCast(flags), str_str, @bitCast(tabstops)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    /// ` flags: i32 `
    ///
    /// ` str: []const u8 `
    ///
    /// ` tabstops: i32 `
    ///
    /// ` tabarray: *i32 `
    ///
    pub fn Size4(self: QFontMetricsF, flags: i32, str: []const u8, tabstops: i32, tabarray: *i32) QSizeF {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return .{ .ptr = qtc.QFontMetricsF_Size4(@ptrCast(self.ptr), @bitCast(flags), str_str, @bitCast(tabstops), @ptrCast(tabarray)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#elidedText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` text: []const u8 `
    ///
    /// ` mode: qnamespace_enums.TextElideMode `
    ///
    /// ` width: f64 `
    ///
    /// ` flags: i32 `
    ///
    pub fn ElidedText4(self: QFontMetricsF, allocator: std.mem.Allocator, text: []const u8, mode: i32, width: f64, flags: i32) []const u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        var _str = qtc.QFontMetricsF_ElidedText4(@ptrCast(self.ptr), text_str, @bitCast(mode), @bitCast(width), @bitCast(flags));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qfontmetricsf.ElidedText4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#dtor.QFontMetricsF)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QFontMetricsF `
    ///
    pub fn Delete(self: QFontMetricsF) void {
        qtc.QFontMetricsF_Delete(@ptrCast(self.ptr));
    }
};
