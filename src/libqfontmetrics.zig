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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QFontMetrics object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QFont `
    ///
    pub fn new(param1: anytype) QFontMetrics {
        comptime _ = @TypeOf(param1)._is_QFont;
        return .{ .ptr = qtc.QFontMetrics_new(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QFontMetrics object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` font: QFont `
    ///
    /// ` pd: QPaintDevice `
    ///
    pub fn new2(font: anytype, pd: anytype) QFontMetrics {
        comptime _ = @TypeOf(font)._is_QFont;
        comptime _ = @TypeOf(pd)._is_QPaintDevice;
        const pd_ = if (@hasDecl(@TypeOf(pd), "asQPaintDevice")) pd.asQPaintDevice() else pd;

        return .{ .ptr = qtc.QFontMetrics_new2(@ptrCast(font.ptr), @ptrCast(pd_.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QFontMetrics object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QFontMetrics `
    ///
    pub fn new3(param1: anytype) QFontMetrics {
        comptime _ = @TypeOf(param1)._is_QFontMetrics;
        return .{ .ptr = qtc.QFontMetrics_new3(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    /// ` param1: QFontMetrics `
    ///
    pub fn operatorAssign(self: QFontMetrics, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFontMetrics;
        qtc.QFontMetrics_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    /// ` other: QFontMetrics `
    ///
    pub fn swap(self: QFontMetrics, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QFontMetrics;
        qtc.QFontMetrics_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `ascent` instead
    ///
    pub const Ascent = ascent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#ascent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    pub fn ascent(self: QFontMetrics) i32 {
        return qtc.QFontMetrics_Ascent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `capHeight` instead
    ///
    pub const CapHeight = capHeight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#capHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    pub fn capHeight(self: QFontMetrics) i32 {
        return qtc.QFontMetrics_CapHeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `descent` instead
    ///
    pub const Descent = descent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#descent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    pub fn descent(self: QFontMetrics) i32 {
        return qtc.QFontMetrics_Descent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `height` instead
    ///
    pub const Height = height;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    pub fn height(self: QFontMetrics) i32 {
        return qtc.QFontMetrics_Height(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `leading` instead
    ///
    pub const Leading = leading;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#leading)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    pub fn leading(self: QFontMetrics) i32 {
        return qtc.QFontMetrics_Leading(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lineSpacing` instead
    ///
    pub const LineSpacing = lineSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#lineSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    pub fn lineSpacing(self: QFontMetrics) i32 {
        return qtc.QFontMetrics_LineSpacing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `minLeftBearing` instead
    ///
    pub const MinLeftBearing = minLeftBearing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#minLeftBearing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    pub fn minLeftBearing(self: QFontMetrics) i32 {
        return qtc.QFontMetrics_MinLeftBearing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `minRightBearing` instead
    ///
    pub const MinRightBearing = minRightBearing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#minRightBearing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    pub fn minRightBearing(self: QFontMetrics) i32 {
        return qtc.QFontMetrics_MinRightBearing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `maxWidth` instead
    ///
    pub const MaxWidth = maxWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#maxWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    pub fn maxWidth(self: QFontMetrics) i32 {
        return qtc.QFontMetrics_MaxWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `xHeight` instead
    ///
    pub const XHeight = xHeight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#xHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    pub fn xHeight(self: QFontMetrics) i32 {
        return qtc.QFontMetrics_XHeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `averageCharWidth` instead
    ///
    pub const AverageCharWidth = averageCharWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#averageCharWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    pub fn averageCharWidth(self: QFontMetrics) i32 {
        return qtc.QFontMetrics_AverageCharWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `inFont` instead
    ///
    pub const InFont = inFont;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#inFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    /// ` param1: QChar `
    ///
    pub fn inFont(self: QFontMetrics, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QChar;
        return qtc.QFontMetrics_InFont(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `inFontUcs4` instead
    ///
    pub const InFontUcs4 = inFontUcs4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#inFontUcs4)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    /// ` ucs4: u32 `
    ///
    pub fn inFontUcs4(self: QFontMetrics, ucs4: u32) bool {
        return qtc.QFontMetrics_InFontUcs4(@ptrCast(self.ptr), @bitCast(ucs4));
    }

    /// ### DEPRECATED: Use `leftBearing` instead
    ///
    pub const LeftBearing = leftBearing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#leftBearing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    /// ` param1: QChar `
    ///
    pub fn leftBearing(self: QFontMetrics, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QChar;
        return qtc.QFontMetrics_LeftBearing(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `rightBearing` instead
    ///
    pub const RightBearing = rightBearing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#rightBearing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    /// ` param1: QChar `
    ///
    pub fn rightBearing(self: QFontMetrics, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QChar;
        return qtc.QFontMetrics_RightBearing(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `horizontalAdvance` instead
    ///
    pub const HorizontalAdvance = horizontalAdvance;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#horizontalAdvance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn horizontalAdvance(self: QFontMetrics, param1: []const u8) i32 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return qtc.QFontMetrics_HorizontalAdvance(@ptrCast(self.ptr), param1_str);
    }

    /// ### DEPRECATED: Use `horizontalAdvance2` instead
    ///
    pub const HorizontalAdvance2 = horizontalAdvance2;

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
    pub fn horizontalAdvance2(self: QFontMetrics, param1: []const u8, textOption: anytype) i32 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        comptime _ = @TypeOf(textOption)._is_QTextOption;
        return qtc.QFontMetrics_HorizontalAdvance2(@ptrCast(self.ptr), param1_str, @ptrCast(textOption.ptr));
    }

    /// ### DEPRECATED: Use `horizontalAdvance3` instead
    ///
    pub const HorizontalAdvance3 = horizontalAdvance3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#horizontalAdvance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    /// ` param1: QChar `
    ///
    pub fn horizontalAdvance3(self: QFontMetrics, param1: anytype) i32 {
        comptime _ = @TypeOf(param1)._is_QChar;
        return qtc.QFontMetrics_HorizontalAdvance3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `boundingRect` instead
    ///
    pub const BoundingRect = boundingRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    /// ` param1: QChar `
    ///
    pub fn boundingRect(self: QFontMetrics, param1: anytype) QRect {
        comptime _ = @TypeOf(param1)._is_QChar;
        return .{ .ptr = qtc.QFontMetrics_BoundingRect(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `boundingRect2` instead
    ///
    pub const BoundingRect2 = boundingRect2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    /// ` text: []const u8 `
    ///
    pub fn boundingRect2(self: QFontMetrics, text: []const u8) QRect {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QFontMetrics_BoundingRect2(@ptrCast(self.ptr), text_str) };
    }

    /// ### DEPRECATED: Use `boundingRect3` instead
    ///
    pub const BoundingRect3 = boundingRect3;

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
    pub fn boundingRect3(self: QFontMetrics, text: []const u8, textOption: anytype) QRect {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(textOption)._is_QTextOption;
        return .{ .ptr = qtc.QFontMetrics_BoundingRect3(@ptrCast(self.ptr), text_str, @ptrCast(textOption.ptr)) };
    }

    /// ### DEPRECATED: Use `boundingRect4` instead
    ///
    pub const BoundingRect4 = boundingRect4;

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
    pub fn boundingRect4(self: QFontMetrics, r: anytype, flags: i32, text: []const u8) QRect {
        comptime _ = @TypeOf(r)._is_QRect;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QFontMetrics_BoundingRect4(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(flags), text_str) };
    }

    /// ### DEPRECATED: Use `boundingRect5` instead
    ///
    pub const BoundingRect5 = boundingRect5;

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
    pub fn boundingRect5(self: QFontMetrics, x: i32, y: i32, w: i32, h: i32, flags: i32, text: []const u8) QRect {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QFontMetrics_BoundingRect5(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(flags), text_str) };
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

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
    pub fn size(self: QFontMetrics, flags: i32, str: []const u8) QSize {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return .{ .ptr = qtc.QFontMetrics_Size(@ptrCast(self.ptr), @bitCast(flags), str_str) };
    }

    /// ### DEPRECATED: Use `tightBoundingRect` instead
    ///
    pub const TightBoundingRect = tightBoundingRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#tightBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    /// ` text: []const u8 `
    ///
    pub fn tightBoundingRect(self: QFontMetrics, text: []const u8) QRect {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QFontMetrics_TightBoundingRect(@ptrCast(self.ptr), text_str) };
    }

    /// ### DEPRECATED: Use `tightBoundingRect2` instead
    ///
    pub const TightBoundingRect2 = tightBoundingRect2;

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
    pub fn tightBoundingRect2(self: QFontMetrics, text: []const u8, textOption: anytype) QRect {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(textOption)._is_QTextOption;
        return .{ .ptr = qtc.QFontMetrics_TightBoundingRect2(@ptrCast(self.ptr), text_str, @ptrCast(textOption.ptr)) };
    }

    /// ### DEPRECATED: Use `elidedText` instead
    ///
    pub const ElidedText = elidedText;

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
    pub fn elidedText(self: QFontMetrics, allocator: std.mem.Allocator, text: []const u8, mode: i32, width: i32) []const u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        var _str = qtc.QFontMetrics_ElidedText(@ptrCast(self.ptr), text_str, @bitCast(mode), @bitCast(width));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QFontMetrics.elidedText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `underlinePos` instead
    ///
    pub const UnderlinePos = underlinePos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#underlinePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    pub fn underlinePos(self: QFontMetrics) i32 {
        return qtc.QFontMetrics_UnderlinePos(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `overlinePos` instead
    ///
    pub const OverlinePos = overlinePos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#overlinePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    pub fn overlinePos(self: QFontMetrics) i32 {
        return qtc.QFontMetrics_OverlinePos(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `strikeOutPos` instead
    ///
    pub const StrikeOutPos = strikeOutPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#strikeOutPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    pub fn strikeOutPos(self: QFontMetrics) i32 {
        return qtc.QFontMetrics_StrikeOutPos(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lineWidth` instead
    ///
    pub const LineWidth = lineWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#lineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    pub fn lineWidth(self: QFontMetrics) i32 {
        return qtc.QFontMetrics_LineWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `fontDpi` instead
    ///
    pub const FontDpi = fontDpi;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#fontDpi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    pub fn fontDpi(self: QFontMetrics) f64 {
        return qtc.QFontMetrics_FontDpi(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    /// ` other: QFontMetrics `
    ///
    pub fn operatorEqual(self: QFontMetrics, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QFontMetrics;
        return qtc.QFontMetrics_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    /// ` other: QFontMetrics `
    ///
    pub fn operatorNotEqual(self: QFontMetrics, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QFontMetrics;
        return qtc.QFontMetrics_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `horizontalAdvance22` instead
    ///
    pub const HorizontalAdvance22 = horizontalAdvance22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#horizontalAdvance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetrics `
    ///
    /// ` param1: []const u8 `
    ///
    /// ` len: i32 `
    ///
    pub fn horizontalAdvance22(self: QFontMetrics, param1: []const u8, len: i32) i32 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        return qtc.QFontMetrics_HorizontalAdvance22(@ptrCast(self.ptr), param1_str, @bitCast(len));
    }

    /// ### DEPRECATED: Use `boundingRect42` instead
    ///
    pub const BoundingRect42 = boundingRect42;

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
    pub fn boundingRect42(self: QFontMetrics, r: anytype, flags: i32, text: []const u8, tabstops: i32) QRect {
        comptime _ = @TypeOf(r)._is_QRect;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QFontMetrics_BoundingRect42(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(flags), text_str, @bitCast(tabstops)) };
    }

    /// ### DEPRECATED: Use `boundingRect52` instead
    ///
    pub const BoundingRect52 = boundingRect52;

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
    pub fn boundingRect52(self: QFontMetrics, r: anytype, flags: i32, text: []const u8, tabstops: i32, tabarray: *i32) QRect {
        comptime _ = @TypeOf(r)._is_QRect;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QFontMetrics_BoundingRect52(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(flags), text_str, @bitCast(tabstops), @ptrCast(tabarray)) };
    }

    /// ### DEPRECATED: Use `boundingRect7` instead
    ///
    pub const BoundingRect7 = boundingRect7;

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
    pub fn boundingRect7(self: QFontMetrics, x: i32, y: i32, w: i32, h: i32, flags: i32, text: []const u8, tabstops: i32) QRect {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QFontMetrics_BoundingRect7(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(flags), text_str, @bitCast(tabstops)) };
    }

    /// ### DEPRECATED: Use `boundingRect8` instead
    ///
    pub const BoundingRect8 = boundingRect8;

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
    pub fn boundingRect8(self: QFontMetrics, x: i32, y: i32, w: i32, h: i32, flags: i32, text: []const u8, tabstops: i32, tabarray: *i32) QRect {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QFontMetrics_BoundingRect8(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h), @bitCast(flags), text_str, @bitCast(tabstops), @ptrCast(tabarray)) };
    }

    /// ### DEPRECATED: Use `size3` instead
    ///
    pub const Size3 = size3;

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
    pub fn size3(self: QFontMetrics, flags: i32, str: []const u8, tabstops: i32) QSize {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return .{ .ptr = qtc.QFontMetrics_Size3(@ptrCast(self.ptr), @bitCast(flags), str_str, @bitCast(tabstops)) };
    }

    /// ### DEPRECATED: Use `size4` instead
    ///
    pub const Size4 = size4;

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
    pub fn size4(self: QFontMetrics, flags: i32, str: []const u8, tabstops: i32, tabarray: *i32) QSize {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return .{ .ptr = qtc.QFontMetrics_Size4(@ptrCast(self.ptr), @bitCast(flags), str_str, @bitCast(tabstops), @ptrCast(tabarray)) };
    }

    /// ### DEPRECATED: Use `elidedText4` instead
    ///
    pub const ElidedText4 = elidedText4;

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
    pub fn elidedText4(self: QFontMetrics, allocator: std.mem.Allocator, text: []const u8, mode: i32, width: i32, flags: i32) []const u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        var _str = qtc.QFontMetrics_ElidedText4(@ptrCast(self.ptr), text_str, @bitCast(mode), @bitCast(width), @bitCast(flags));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QFontMetrics.elidedText4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetrics.html#dtor.QFontMetrics)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QFontMetrics `
    ///
    pub fn delete(self: QFontMetrics) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QFontMetricsF object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` font: QFont `
    ///
    pub fn new(font: anytype) QFontMetricsF {
        comptime _ = @TypeOf(font)._is_QFont;
        return .{ .ptr = qtc.QFontMetricsF_new(@ptrCast(font.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QFontMetricsF object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` font: QFont `
    ///
    /// ` pd: QPaintDevice `
    ///
    pub fn new2(font: anytype, pd: anytype) QFontMetricsF {
        comptime _ = @TypeOf(font)._is_QFont;
        comptime _ = @TypeOf(pd)._is_QPaintDevice;
        const pd_ = if (@hasDecl(@TypeOf(pd), "asQPaintDevice")) pd.asQPaintDevice() else pd;

        return .{ .ptr = qtc.QFontMetricsF_new2(@ptrCast(font.ptr), @ptrCast(pd_.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QFontMetricsF object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QFontMetrics `
    ///
    pub fn new3(param1: anytype) QFontMetricsF {
        comptime _ = @TypeOf(param1)._is_QFontMetrics;
        return .{ .ptr = qtc.QFontMetricsF_new3(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QFontMetricsF object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QFontMetricsF `
    ///
    pub fn new4(param1: anytype) QFontMetricsF {
        comptime _ = @TypeOf(param1)._is_QFontMetricsF;
        return .{ .ptr = qtc.QFontMetricsF_new4(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    /// ` param1: QFontMetricsF `
    ///
    pub fn operatorAssign(self: QFontMetricsF, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFontMetricsF;
        qtc.QFontMetricsF_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign2` instead
    ///
    pub const OperatorAssign2 = operatorAssign2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    /// ` param1: QFontMetrics `
    ///
    pub fn operatorAssign2(self: QFontMetricsF, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFontMetrics;
        qtc.QFontMetricsF_OperatorAssign2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    /// ` other: QFontMetricsF `
    ///
    pub fn swap(self: QFontMetricsF, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QFontMetricsF;
        qtc.QFontMetricsF_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `ascent` instead
    ///
    pub const Ascent = ascent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#ascent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    pub fn ascent(self: QFontMetricsF) f64 {
        return qtc.QFontMetricsF_Ascent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `capHeight` instead
    ///
    pub const CapHeight = capHeight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#capHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    pub fn capHeight(self: QFontMetricsF) f64 {
        return qtc.QFontMetricsF_CapHeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `descent` instead
    ///
    pub const Descent = descent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#descent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    pub fn descent(self: QFontMetricsF) f64 {
        return qtc.QFontMetricsF_Descent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `height` instead
    ///
    pub const Height = height;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    pub fn height(self: QFontMetricsF) f64 {
        return qtc.QFontMetricsF_Height(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `leading` instead
    ///
    pub const Leading = leading;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#leading)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    pub fn leading(self: QFontMetricsF) f64 {
        return qtc.QFontMetricsF_Leading(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lineSpacing` instead
    ///
    pub const LineSpacing = lineSpacing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#lineSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    pub fn lineSpacing(self: QFontMetricsF) f64 {
        return qtc.QFontMetricsF_LineSpacing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `minLeftBearing` instead
    ///
    pub const MinLeftBearing = minLeftBearing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#minLeftBearing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    pub fn minLeftBearing(self: QFontMetricsF) f64 {
        return qtc.QFontMetricsF_MinLeftBearing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `minRightBearing` instead
    ///
    pub const MinRightBearing = minRightBearing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#minRightBearing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    pub fn minRightBearing(self: QFontMetricsF) f64 {
        return qtc.QFontMetricsF_MinRightBearing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `maxWidth` instead
    ///
    pub const MaxWidth = maxWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#maxWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    pub fn maxWidth(self: QFontMetricsF) f64 {
        return qtc.QFontMetricsF_MaxWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `xHeight` instead
    ///
    pub const XHeight = xHeight;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#xHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    pub fn xHeight(self: QFontMetricsF) f64 {
        return qtc.QFontMetricsF_XHeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `averageCharWidth` instead
    ///
    pub const AverageCharWidth = averageCharWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#averageCharWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    pub fn averageCharWidth(self: QFontMetricsF) f64 {
        return qtc.QFontMetricsF_AverageCharWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `inFont` instead
    ///
    pub const InFont = inFont;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#inFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    /// ` param1: QChar `
    ///
    pub fn inFont(self: QFontMetricsF, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QChar;
        return qtc.QFontMetricsF_InFont(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `inFontUcs4` instead
    ///
    pub const InFontUcs4 = inFontUcs4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#inFontUcs4)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    /// ` ucs4: u32 `
    ///
    pub fn inFontUcs4(self: QFontMetricsF, ucs4: u32) bool {
        return qtc.QFontMetricsF_InFontUcs4(@ptrCast(self.ptr), @bitCast(ucs4));
    }

    /// ### DEPRECATED: Use `leftBearing` instead
    ///
    pub const LeftBearing = leftBearing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#leftBearing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    /// ` param1: QChar `
    ///
    pub fn leftBearing(self: QFontMetricsF, param1: anytype) f64 {
        comptime _ = @TypeOf(param1)._is_QChar;
        return qtc.QFontMetricsF_LeftBearing(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `rightBearing` instead
    ///
    pub const RightBearing = rightBearing;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#rightBearing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    /// ` param1: QChar `
    ///
    pub fn rightBearing(self: QFontMetricsF, param1: anytype) f64 {
        comptime _ = @TypeOf(param1)._is_QChar;
        return qtc.QFontMetricsF_RightBearing(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `horizontalAdvance` instead
    ///
    pub const HorizontalAdvance = horizontalAdvance;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#horizontalAdvance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    /// ` string: []const u8 `
    ///
    pub fn horizontalAdvance(self: QFontMetricsF, string: []const u8) f64 {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        return qtc.QFontMetricsF_HorizontalAdvance(@ptrCast(self.ptr), string_str);
    }

    /// ### DEPRECATED: Use `horizontalAdvance2` instead
    ///
    pub const HorizontalAdvance2 = horizontalAdvance2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#horizontalAdvance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    /// ` param1: QChar `
    ///
    pub fn horizontalAdvance2(self: QFontMetricsF, param1: anytype) f64 {
        comptime _ = @TypeOf(param1)._is_QChar;
        return qtc.QFontMetricsF_HorizontalAdvance2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `horizontalAdvance3` instead
    ///
    pub const HorizontalAdvance3 = horizontalAdvance3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#horizontalAdvance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    /// ` string: []const u8 `
    ///
    /// ` textOption: QTextOption `
    ///
    pub fn horizontalAdvance3(self: QFontMetricsF, string: []const u8, textOption: anytype) f64 {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        comptime _ = @TypeOf(textOption)._is_QTextOption;
        return qtc.QFontMetricsF_HorizontalAdvance3(@ptrCast(self.ptr), string_str, @ptrCast(textOption.ptr));
    }

    /// ### DEPRECATED: Use `boundingRect` instead
    ///
    pub const BoundingRect = boundingRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    /// ` string: []const u8 `
    ///
    pub fn boundingRect(self: QFontMetricsF, string: []const u8) QRectF {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        return .{ .ptr = qtc.QFontMetricsF_BoundingRect(@ptrCast(self.ptr), string_str) };
    }

    /// ### DEPRECATED: Use `boundingRect2` instead
    ///
    pub const BoundingRect2 = boundingRect2;

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
    pub fn boundingRect2(self: QFontMetricsF, text: []const u8, textOption: anytype) QRectF {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(textOption)._is_QTextOption;
        return .{ .ptr = qtc.QFontMetricsF_BoundingRect2(@ptrCast(self.ptr), text_str, @ptrCast(textOption.ptr)) };
    }

    /// ### DEPRECATED: Use `boundingRect3` instead
    ///
    pub const BoundingRect3 = boundingRect3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    /// ` param1: QChar `
    ///
    pub fn boundingRect3(self: QFontMetricsF, param1: anytype) QRectF {
        comptime _ = @TypeOf(param1)._is_QChar;
        return .{ .ptr = qtc.QFontMetricsF_BoundingRect3(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `boundingRect4` instead
    ///
    pub const BoundingRect4 = boundingRect4;

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
    /// ` string: []const u8 `
    ///
    pub fn boundingRect4(self: QFontMetricsF, r: anytype, flags: i32, string: []const u8) QRectF {
        comptime _ = @TypeOf(r)._is_QRectF;
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        return .{ .ptr = qtc.QFontMetricsF_BoundingRect4(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(flags), string_str) };
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

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
    pub fn size(self: QFontMetricsF, flags: i32, str: []const u8) QSizeF {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return .{ .ptr = qtc.QFontMetricsF_Size(@ptrCast(self.ptr), @bitCast(flags), str_str) };
    }

    /// ### DEPRECATED: Use `tightBoundingRect` instead
    ///
    pub const TightBoundingRect = tightBoundingRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#tightBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    /// ` text: []const u8 `
    ///
    pub fn tightBoundingRect(self: QFontMetricsF, text: []const u8) QRectF {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QFontMetricsF_TightBoundingRect(@ptrCast(self.ptr), text_str) };
    }

    /// ### DEPRECATED: Use `tightBoundingRect2` instead
    ///
    pub const TightBoundingRect2 = tightBoundingRect2;

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
    pub fn tightBoundingRect2(self: QFontMetricsF, text: []const u8, textOption: anytype) QRectF {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(textOption)._is_QTextOption;
        return .{ .ptr = qtc.QFontMetricsF_TightBoundingRect2(@ptrCast(self.ptr), text_str, @ptrCast(textOption.ptr)) };
    }

    /// ### DEPRECATED: Use `elidedText` instead
    ///
    pub const ElidedText = elidedText;

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
    pub fn elidedText(self: QFontMetricsF, allocator: std.mem.Allocator, text: []const u8, mode: i32, width: f64) []const u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        var _str = qtc.QFontMetricsF_ElidedText(@ptrCast(self.ptr), text_str, @bitCast(mode), @bitCast(width));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QFontMetricsF.elidedText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `underlinePos` instead
    ///
    pub const UnderlinePos = underlinePos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#underlinePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    pub fn underlinePos(self: QFontMetricsF) f64 {
        return qtc.QFontMetricsF_UnderlinePos(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `overlinePos` instead
    ///
    pub const OverlinePos = overlinePos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#overlinePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    pub fn overlinePos(self: QFontMetricsF) f64 {
        return qtc.QFontMetricsF_OverlinePos(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `strikeOutPos` instead
    ///
    pub const StrikeOutPos = strikeOutPos;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#strikeOutPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    pub fn strikeOutPos(self: QFontMetricsF) f64 {
        return qtc.QFontMetricsF_StrikeOutPos(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lineWidth` instead
    ///
    pub const LineWidth = lineWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#lineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    pub fn lineWidth(self: QFontMetricsF) f64 {
        return qtc.QFontMetricsF_LineWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `fontDpi` instead
    ///
    pub const FontDpi = fontDpi;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#fontDpi)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    pub fn fontDpi(self: QFontMetricsF) f64 {
        return qtc.QFontMetricsF_FontDpi(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    /// ` other: QFontMetricsF `
    ///
    pub fn operatorEqual(self: QFontMetricsF, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QFontMetricsF;
        return qtc.QFontMetricsF_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    /// ` other: QFontMetricsF `
    ///
    pub fn operatorNotEqual(self: QFontMetricsF, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QFontMetricsF;
        return qtc.QFontMetricsF_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `horizontalAdvance22` instead
    ///
    pub const HorizontalAdvance22 = horizontalAdvance22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#horizontalAdvance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QFontMetricsF `
    ///
    /// ` string: []const u8 `
    ///
    /// ` length: i32 `
    ///
    pub fn horizontalAdvance22(self: QFontMetricsF, string: []const u8, length: i32) f64 {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        return qtc.QFontMetricsF_HorizontalAdvance22(@ptrCast(self.ptr), string_str, @bitCast(length));
    }

    /// ### DEPRECATED: Use `boundingRect42` instead
    ///
    pub const BoundingRect42 = boundingRect42;

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
    /// ` string: []const u8 `
    ///
    /// ` tabstops: i32 `
    ///
    pub fn boundingRect42(self: QFontMetricsF, r: anytype, flags: i32, string: []const u8, tabstops: i32) QRectF {
        comptime _ = @TypeOf(r)._is_QRectF;
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        return .{ .ptr = qtc.QFontMetricsF_BoundingRect42(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(flags), string_str, @bitCast(tabstops)) };
    }

    /// ### DEPRECATED: Use `boundingRect5` instead
    ///
    pub const BoundingRect5 = boundingRect5;

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
    /// ` string: []const u8 `
    ///
    /// ` tabstops: i32 `
    ///
    /// ` tabarray: *i32 `
    ///
    pub fn boundingRect5(self: QFontMetricsF, r: anytype, flags: i32, string: []const u8, tabstops: i32, tabarray: *i32) QRectF {
        comptime _ = @TypeOf(r)._is_QRectF;
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        return .{ .ptr = qtc.QFontMetricsF_BoundingRect5(@ptrCast(self.ptr), @ptrCast(r.ptr), @bitCast(flags), string_str, @bitCast(tabstops), @ptrCast(tabarray)) };
    }

    /// ### DEPRECATED: Use `size3` instead
    ///
    pub const Size3 = size3;

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
    pub fn size3(self: QFontMetricsF, flags: i32, str: []const u8, tabstops: i32) QSizeF {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return .{ .ptr = qtc.QFontMetricsF_Size3(@ptrCast(self.ptr), @bitCast(flags), str_str, @bitCast(tabstops)) };
    }

    /// ### DEPRECATED: Use `size4` instead
    ///
    pub const Size4 = size4;

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
    pub fn size4(self: QFontMetricsF, flags: i32, str: []const u8, tabstops: i32, tabarray: *i32) QSizeF {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        return .{ .ptr = qtc.QFontMetricsF_Size4(@ptrCast(self.ptr), @bitCast(flags), str_str, @bitCast(tabstops), @ptrCast(tabarray)) };
    }

    /// ### DEPRECATED: Use `elidedText4` instead
    ///
    pub const ElidedText4 = elidedText4;

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
    pub fn elidedText4(self: QFontMetricsF, allocator: std.mem.Allocator, text: []const u8, mode: i32, width: f64, flags: i32) []const u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        var _str = qtc.QFontMetricsF_ElidedText4(@ptrCast(self.ptr), text_str, @bitCast(mode), @bitCast(width), @bitCast(flags));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QFontMetricsF.elidedText4: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qfontmetricsf.html#dtor.QFontMetricsF)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QFontMetricsF `
    ///
    pub fn delete(self: QFontMetricsF) void {
        qtc.QFontMetricsF_Delete(@ptrCast(self.ptr));
    }
};
