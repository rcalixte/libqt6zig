const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QFont = @import("libqt6").QFont;
const QGlyphRun = @import("libqt6").QGlyphRun;
const QPaintDevice = @import("libqt6").QPaintDevice;
const QPainter = @import("libqt6").QPainter;
const QPointF = @import("libqt6").QPointF;
const QRawFont = @import("libqt6").QRawFont;
const QRectF = @import("libqt6").QRectF;
const QTextBlock = @import("libqt6").QTextBlock;
const QTextCharFormat = @import("libqt6").QTextCharFormat;
const QTextFormat = @import("libqt6").QTextFormat;
const QTextOption = @import("libqt6").QTextOption;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qtextlayout_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextinlineobject.html)
pub const QTextInlineObject = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextinlineobject.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTextInlineObject,

    pub const _is_QTextInlineObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTextInlineObject object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTextInlineObject `
    ///
    pub fn new(other: anytype) QTextInlineObject {
        comptime _ = @TypeOf(other)._is_QTextInlineObject;
        return .{ .ptr = qtc.QTextInlineObject_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QTextInlineObject object and invalidate the source QTextInlineObject object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTextInlineObject `
    ///
    pub fn new2(other: anytype) QTextInlineObject {
        comptime _ = @TypeOf(other)._is_QTextInlineObject;
        return .{ .ptr = qtc.QTextInlineObject_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QTextInlineObject object in C++ memory
    ///
    pub fn new3() QTextInlineObject {
        return .{ .ptr = qtc.QTextInlineObject_new3() };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextInlineObject `
    ///
    /// ` other: QTextInlineObject `
    ///
    pub fn copyAssign(self: QTextInlineObject, other: QTextInlineObject) void {
        qtc.QTextInlineObject_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextInlineObject `
    ///
    /// ` other: QTextInlineObject `
    ///
    pub fn moveAssign(self: QTextInlineObject, other: QTextInlineObject) void {
        qtc.QTextInlineObject_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextinlineobject.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextInlineObject `
    ///
    pub fn isValid(self: QTextInlineObject) bool {
        return qtc.QTextInlineObject_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextinlineobject.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextInlineObject `
    ///
    pub fn rect(self: QTextInlineObject) QRectF {
        return .{ .ptr = qtc.QTextInlineObject_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `width` instead
    ///
    pub const Width = width;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextinlineobject.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextInlineObject `
    ///
    pub fn width(self: QTextInlineObject) f64 {
        return qtc.QTextInlineObject_Width(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ascent` instead
    ///
    pub const Ascent = ascent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextinlineobject.html#ascent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextInlineObject `
    ///
    pub fn ascent(self: QTextInlineObject) f64 {
        return qtc.QTextInlineObject_Ascent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `descent` instead
    ///
    pub const Descent = descent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextinlineobject.html#descent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextInlineObject `
    ///
    pub fn descent(self: QTextInlineObject) f64 {
        return qtc.QTextInlineObject_Descent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `height` instead
    ///
    pub const Height = height;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextinlineobject.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextInlineObject `
    ///
    pub fn height(self: QTextInlineObject) f64 {
        return qtc.QTextInlineObject_Height(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `textDirection` instead
    ///
    pub const TextDirection = textDirection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextinlineobject.html#textDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextInlineObject `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn textDirection(self: QTextInlineObject) i32 {
        return qtc.QTextInlineObject_TextDirection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWidth` instead
    ///
    pub const SetWidth = setWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextinlineobject.html#setWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextInlineObject `
    ///
    /// ` w: f64 `
    ///
    pub fn setWidth(self: QTextInlineObject, w: f64) void {
        qtc.QTextInlineObject_SetWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// ### DEPRECATED: Use `setAscent` instead
    ///
    pub const SetAscent = setAscent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextinlineobject.html#setAscent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextInlineObject `
    ///
    /// ` a: f64 `
    ///
    pub fn setAscent(self: QTextInlineObject, a: f64) void {
        qtc.QTextInlineObject_SetAscent(@ptrCast(self.ptr), @bitCast(a));
    }

    /// ### DEPRECATED: Use `setDescent` instead
    ///
    pub const SetDescent = setDescent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextinlineobject.html#setDescent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextInlineObject `
    ///
    /// ` d: f64 `
    ///
    pub fn setDescent(self: QTextInlineObject, d: f64) void {
        qtc.QTextInlineObject_SetDescent(@ptrCast(self.ptr), @bitCast(d));
    }

    /// ### DEPRECATED: Use `textPosition` instead
    ///
    pub const TextPosition = textPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextinlineobject.html#textPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextInlineObject `
    ///
    pub fn textPosition(self: QTextInlineObject) i32 {
        return qtc.QTextInlineObject_TextPosition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `formatIndex` instead
    ///
    pub const FormatIndex = formatIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextinlineobject.html#formatIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextInlineObject `
    ///
    pub fn formatIndex(self: QTextInlineObject) i32 {
        return qtc.QTextInlineObject_FormatIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `format` instead
    ///
    pub const Format = format;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextinlineobject.html#format)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextInlineObject `
    ///
    pub fn format(self: QTextInlineObject) QTextFormat {
        return .{ .ptr = qtc.QTextInlineObject_Format(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextinlineobject.html#dtor.QTextInlineObject)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextInlineObject `
    ///
    pub fn delete(self: QTextInlineObject) void {
        qtc.QTextInlineObject_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html)
pub const QTextLayout = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTextLayout,

    pub const _is_QTextLayout = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTextLayout object in C++ memory
    ///
    pub fn new() QTextLayout {
        return .{ .ptr = qtc.QTextLayout_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QTextLayout object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _text: []const u8 `
    ///
    pub fn new2(_text: []const u8) QTextLayout {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return .{ .ptr = qtc.QTextLayout_new2(text_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QTextLayout object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _text: []const u8 `
    ///
    /// ` _font: QFont `
    ///
    pub fn new3(_text: []const u8, _font: anytype) QTextLayout {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        comptime _ = @TypeOf(_font)._is_QFont;
        return .{ .ptr = qtc.QTextLayout_new3(text_str, @ptrCast(_font.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QTextLayout object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` b: QTextBlock `
    ///
    pub fn new4(b: anytype) QTextLayout {
        comptime _ = @TypeOf(b)._is_QTextBlock;
        return .{ .ptr = qtc.QTextLayout_new4(@ptrCast(b.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QTextLayout object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _text: []const u8 `
    ///
    /// ` _font: QFont `
    ///
    /// ` paintdevice: QPaintDevice `
    ///
    pub fn new5(_text: []const u8, _font: anytype, paintdevice: anytype) QTextLayout {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        comptime _ = @TypeOf(_font)._is_QFont;
        comptime _ = @TypeOf(paintdevice)._is_QPaintDevice;
        const paintdevice_ = if (@hasDecl(@TypeOf(paintdevice), "asQPaintDevice")) paintdevice.asQPaintDevice() else paintdevice;

        return .{ .ptr = qtc.QTextLayout_new5(text_str, @ptrCast(_font.ptr), @ptrCast(paintdevice_.ptr)) };
    }

    /// ### DEPRECATED: Use `setFont` instead
    ///
    pub const SetFont = setFont;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` f: QFont `
    ///
    pub fn setFont(self: QTextLayout, f: anytype) void {
        comptime _ = @TypeOf(f)._is_QFont;
        qtc.QTextLayout_SetFont(@ptrCast(self.ptr), @ptrCast(f.ptr));
    }

    /// ### DEPRECATED: Use `font` instead
    ///
    pub const Font = font;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    pub fn font(self: QTextLayout) QFont {
        return .{ .ptr = qtc.QTextLayout_Font(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setRawFont` instead
    ///
    pub const SetRawFont = setRawFont;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#setRawFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` rawFont: QRawFont `
    ///
    pub fn setRawFont(self: QTextLayout, rawFont: anytype) void {
        comptime _ = @TypeOf(rawFont)._is_QRawFont;
        qtc.QTextLayout_SetRawFont(@ptrCast(self.ptr), @ptrCast(rawFont.ptr));
    }

    /// ### DEPRECATED: Use `setText` instead
    ///
    pub const SetText = setText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` string: []const u8 `
    ///
    pub fn setText(self: QTextLayout, string: []const u8) void {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        qtc.QTextLayout_SetText(@ptrCast(self.ptr), string_str);
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(self: QTextLayout, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextLayout_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextLayout.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setTextOption` instead
    ///
    pub const SetTextOption = setTextOption;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#setTextOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` option: QTextOption `
    ///
    pub fn setTextOption(self: QTextLayout, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QTextOption;
        qtc.QTextLayout_SetTextOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// ### DEPRECATED: Use `textOption` instead
    ///
    pub const TextOption = textOption;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#textOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    pub fn textOption(self: QTextLayout) QTextOption {
        return .{ .ptr = qtc.QTextLayout_TextOption(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPreeditArea` instead
    ///
    pub const SetPreeditArea = setPreeditArea;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#setPreeditArea)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` _position: i32 `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn setPreeditArea(self: QTextLayout, _position: i32, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QTextLayout_SetPreeditArea(@ptrCast(self.ptr), @bitCast(_position), text_str);
    }

    /// ### DEPRECATED: Use `preeditAreaPosition` instead
    ///
    pub const PreeditAreaPosition = preeditAreaPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#preeditAreaPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    pub fn preeditAreaPosition(self: QTextLayout) i32 {
        return qtc.QTextLayout_PreeditAreaPosition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `preeditAreaText` instead
    ///
    pub const PreeditAreaText = preeditAreaText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#preeditAreaText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn preeditAreaText(self: QTextLayout, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextLayout_PreeditAreaText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTextLayout.preeditAreaText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setFormats` instead
    ///
    pub const SetFormats = setFormats;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#setFormats)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` overrides: []QTextLayout__FormatRange `
    ///
    pub fn setFormats(self: QTextLayout, overrides: []QTextLayout__FormatRange) void {
        const overrides_list = qtc.libqt_list{
            .len = overrides.len,
            .data = @ptrCast(overrides.ptr),
        };
        qtc.QTextLayout_SetFormats(@ptrCast(self.ptr), overrides_list);
    }

    /// ### DEPRECATED: Use `formats` instead
    ///
    pub const Formats = formats;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#formats)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn formats(self: QTextLayout, allocator: std.mem.Allocator) []QTextLayout__FormatRange {
        const _arr: qtc.libqt_list = qtc.QTextLayout_Formats(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTextLayout__FormatRange, _arr.len) catch @panic("QTextLayout.formats: Memory allocation failed");
        const _data_val: [*]QtC.QTextLayout__FormatRange = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `clearFormats` instead
    ///
    pub const ClearFormats = clearFormats;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#clearFormats)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    pub fn clearFormats(self: QTextLayout) void {
        qtc.QTextLayout_ClearFormats(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCacheEnabled` instead
    ///
    pub const SetCacheEnabled = setCacheEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#setCacheEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` enable: bool `
    ///
    pub fn setCacheEnabled(self: QTextLayout, enable: bool) void {
        qtc.QTextLayout_SetCacheEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `cacheEnabled` instead
    ///
    pub const CacheEnabled = cacheEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#cacheEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    pub fn cacheEnabled(self: QTextLayout) bool {
        return qtc.QTextLayout_CacheEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCursorMoveStyle` instead
    ///
    pub const SetCursorMoveStyle = setCursorMoveStyle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#setCursorMoveStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` style: qnamespace_enums.CursorMoveStyle `
    ///
    pub fn setCursorMoveStyle(self: QTextLayout, style: i32) void {
        qtc.QTextLayout_SetCursorMoveStyle(@ptrCast(self.ptr), @bitCast(style));
    }

    /// ### DEPRECATED: Use `cursorMoveStyle` instead
    ///
    pub const CursorMoveStyle = cursorMoveStyle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#cursorMoveStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.CursorMoveStyle `
    ///
    pub fn cursorMoveStyle(self: QTextLayout) i32 {
        return qtc.QTextLayout_CursorMoveStyle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `beginLayout` instead
    ///
    pub const BeginLayout = beginLayout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#beginLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    pub fn beginLayout(self: QTextLayout) void {
        qtc.QTextLayout_BeginLayout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `endLayout` instead
    ///
    pub const EndLayout = endLayout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#endLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    pub fn endLayout(self: QTextLayout) void {
        qtc.QTextLayout_EndLayout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clearLayout` instead
    ///
    pub const ClearLayout = clearLayout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#clearLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    pub fn clearLayout(self: QTextLayout) void {
        qtc.QTextLayout_ClearLayout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `createLine` instead
    ///
    pub const CreateLine = createLine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#createLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    pub fn createLine(self: QTextLayout) QTextLine {
        return .{ .ptr = qtc.QTextLayout_CreateLine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `lineCount` instead
    ///
    pub const LineCount = lineCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#lineCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    pub fn lineCount(self: QTextLayout) i32 {
        return qtc.QTextLayout_LineCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lineAt` instead
    ///
    pub const LineAt = lineAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#lineAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` i: i32 `
    ///
    pub fn lineAt(self: QTextLayout, i: i32) QTextLine {
        return .{ .ptr = qtc.QTextLayout_LineAt(@ptrCast(self.ptr), @bitCast(i)) };
    }

    /// ### DEPRECATED: Use `lineForTextPosition` instead
    ///
    pub const LineForTextPosition = lineForTextPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#lineForTextPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` pos: i32 `
    ///
    pub fn lineForTextPosition(self: QTextLayout, pos: i32) QTextLine {
        return .{ .ptr = qtc.QTextLayout_LineForTextPosition(@ptrCast(self.ptr), @bitCast(pos)) };
    }

    /// ### DEPRECATED: Use `isValidCursorPosition` instead
    ///
    pub const IsValidCursorPosition = isValidCursorPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#isValidCursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` pos: i32 `
    ///
    pub fn isValidCursorPosition(self: QTextLayout, pos: i32) bool {
        return qtc.QTextLayout_IsValidCursorPosition(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### DEPRECATED: Use `nextCursorPosition` instead
    ///
    pub const NextCursorPosition = nextCursorPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#nextCursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` oldPos: i32 `
    ///
    pub fn nextCursorPosition(self: QTextLayout, oldPos: i32) i32 {
        return qtc.QTextLayout_NextCursorPosition(@ptrCast(self.ptr), @bitCast(oldPos));
    }

    /// ### DEPRECATED: Use `previousCursorPosition` instead
    ///
    pub const PreviousCursorPosition = previousCursorPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#previousCursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` oldPos: i32 `
    ///
    pub fn previousCursorPosition(self: QTextLayout, oldPos: i32) i32 {
        return qtc.QTextLayout_PreviousCursorPosition(@ptrCast(self.ptr), @bitCast(oldPos));
    }

    /// ### DEPRECATED: Use `leftCursorPosition` instead
    ///
    pub const LeftCursorPosition = leftCursorPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#leftCursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` oldPos: i32 `
    ///
    pub fn leftCursorPosition(self: QTextLayout, oldPos: i32) i32 {
        return qtc.QTextLayout_LeftCursorPosition(@ptrCast(self.ptr), @bitCast(oldPos));
    }

    /// ### DEPRECATED: Use `rightCursorPosition` instead
    ///
    pub const RightCursorPosition = rightCursorPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#rightCursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` oldPos: i32 `
    ///
    pub fn rightCursorPosition(self: QTextLayout, oldPos: i32) i32 {
        return qtc.QTextLayout_RightCursorPosition(@ptrCast(self.ptr), @bitCast(oldPos));
    }

    /// ### DEPRECATED: Use `draw` instead
    ///
    pub const Draw = draw;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#draw)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` p: QPainter `
    ///
    /// ` pos: QPointF `
    ///
    pub fn draw(self: QTextLayout, p: anytype, pos: anytype) void {
        comptime _ = @TypeOf(p)._is_QPainter;
        comptime _ = @TypeOf(pos)._is_QPointF;
        qtc.QTextLayout_Draw(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(pos.ptr));
    }

    /// ### DEPRECATED: Use `drawCursor` instead
    ///
    pub const DrawCursor = drawCursor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#drawCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` p: QPainter `
    ///
    /// ` pos: QPointF `
    ///
    /// ` cursorPosition: i32 `
    ///
    pub fn drawCursor(self: QTextLayout, p: anytype, pos: anytype, cursorPosition: i32) void {
        comptime _ = @TypeOf(p)._is_QPainter;
        comptime _ = @TypeOf(pos)._is_QPointF;
        qtc.QTextLayout_DrawCursor(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(pos.ptr), @bitCast(cursorPosition));
    }

    /// ### DEPRECATED: Use `drawCursor2` instead
    ///
    pub const DrawCursor2 = drawCursor2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#drawCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` p: QPainter `
    ///
    /// ` pos: QPointF `
    ///
    /// ` cursorPosition: i32 `
    ///
    /// ` _width: i32 `
    ///
    pub fn drawCursor2(self: QTextLayout, p: anytype, pos: anytype, cursorPosition: i32, _width: i32) void {
        comptime _ = @TypeOf(p)._is_QPainter;
        comptime _ = @TypeOf(pos)._is_QPointF;
        qtc.QTextLayout_DrawCursor2(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(pos.ptr), @bitCast(cursorPosition), @bitCast(_width));
    }

    /// ### DEPRECATED: Use `position` instead
    ///
    pub const Position = position;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    pub fn position(self: QTextLayout) QPointF {
        return .{ .ptr = qtc.QTextLayout_Position(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPosition` instead
    ///
    pub const SetPosition = setPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` p: QPointF `
    ///
    pub fn setPosition(self: QTextLayout, p: anytype) void {
        comptime _ = @TypeOf(p)._is_QPointF;
        qtc.QTextLayout_SetPosition(@ptrCast(self.ptr), @ptrCast(p.ptr));
    }

    /// ### DEPRECATED: Use `boundingRect` instead
    ///
    pub const BoundingRect = boundingRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#boundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    pub fn boundingRect(self: QTextLayout) QRectF {
        return .{ .ptr = qtc.QTextLayout_BoundingRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `minimumWidth` instead
    ///
    pub const MinimumWidth = minimumWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    pub fn minimumWidth(self: QTextLayout) f64 {
        return qtc.QTextLayout_MinimumWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `maximumWidth` instead
    ///
    pub const MaximumWidth = maximumWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    pub fn maximumWidth(self: QTextLayout) f64 {
        return qtc.QTextLayout_MaximumWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `glyphRuns` instead
    ///
    pub const GlyphRuns = glyphRuns;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#glyphRuns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` from: i32 `
    ///
    /// ` length: i32 `
    ///
    /// ` flags: flag of qtextlayout_enums.GlyphRunRetrievalFlag `
    ///
    pub fn glyphRuns(self: QTextLayout, allocator: std.mem.Allocator, from: i32, length: i32, flags: u16) []QGlyphRun {
        const _arr: qtc.libqt_list = qtc.QTextLayout_GlyphRuns(@ptrCast(self.ptr), @bitCast(from), @bitCast(length), @bitCast(flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGlyphRun, _arr.len) catch @panic("QTextLayout.glyphRuns: Memory allocation failed");
        const _data_val: [*]QtC.QGlyphRun = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `glyphRuns2` instead
    ///
    pub const GlyphRuns2 = glyphRuns2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#glyphRuns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn glyphRuns2(self: QTextLayout, allocator: std.mem.Allocator) []QGlyphRun {
        const _arr: qtc.libqt_list = qtc.QTextLayout_GlyphRuns2(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGlyphRun, _arr.len) catch @panic("QTextLayout.glyphRuns2: Memory allocation failed");
        const _data_val: [*]QtC.QGlyphRun = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setFlags` instead
    ///
    pub const SetFlags = setFlags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#setFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` flags: i32 `
    ///
    pub fn setFlags(self: QTextLayout, flags: i32) void {
        qtc.QTextLayout_SetFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `nextCursorPosition2` instead
    ///
    pub const NextCursorPosition2 = nextCursorPosition2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#nextCursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` oldPos: i32 `
    ///
    /// ` mode: qtextlayout_enums.CursorMode `
    ///
    pub fn nextCursorPosition2(self: QTextLayout, oldPos: i32, mode: i32) i32 {
        return qtc.QTextLayout_NextCursorPosition2(@ptrCast(self.ptr), @bitCast(oldPos), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `previousCursorPosition2` instead
    ///
    pub const PreviousCursorPosition2 = previousCursorPosition2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#previousCursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` oldPos: i32 `
    ///
    /// ` mode: qtextlayout_enums.CursorMode `
    ///
    pub fn previousCursorPosition2(self: QTextLayout, oldPos: i32, mode: i32) i32 {
        return qtc.QTextLayout_PreviousCursorPosition2(@ptrCast(self.ptr), @bitCast(oldPos), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `draw3` instead
    ///
    pub const Draw3 = draw3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#draw)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` p: QPainter `
    ///
    /// ` pos: QPointF `
    ///
    /// ` selections: []QTextLayout__FormatRange `
    ///
    pub fn draw3(self: QTextLayout, p: anytype, pos: anytype, selections: []QTextLayout__FormatRange) void {
        comptime _ = @TypeOf(p)._is_QPainter;
        comptime _ = @TypeOf(pos)._is_QPointF;
        const selections_list = qtc.libqt_list{
            .len = selections.len,
            .data = @ptrCast(selections.ptr),
        };
        qtc.QTextLayout_Draw3(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(pos.ptr), selections_list);
    }

    /// ### DEPRECATED: Use `draw4` instead
    ///
    pub const Draw4 = draw4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#draw)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` p: QPainter `
    ///
    /// ` pos: QPointF `
    ///
    /// ` selections: []QTextLayout__FormatRange `
    ///
    /// ` clip: QRectF `
    ///
    pub fn draw4(self: QTextLayout, p: anytype, pos: anytype, selections: []QTextLayout__FormatRange, clip: anytype) void {
        comptime _ = @TypeOf(p)._is_QPainter;
        comptime _ = @TypeOf(pos)._is_QPointF;
        const selections_list = qtc.libqt_list{
            .len = selections.len,
            .data = @ptrCast(selections.ptr),
        };
        comptime _ = @TypeOf(clip)._is_QRectF;
        qtc.QTextLayout_Draw4(@ptrCast(self.ptr), @ptrCast(p.ptr), @ptrCast(pos.ptr), selections_list, @ptrCast(clip.ptr));
    }

    /// ### DEPRECATED: Use `glyphRuns1` instead
    ///
    pub const GlyphRuns1 = glyphRuns1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#glyphRuns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` from: i32 `
    ///
    pub fn glyphRuns1(self: QTextLayout, allocator: std.mem.Allocator, from: i32) []QGlyphRun {
        const _arr: qtc.libqt_list = qtc.QTextLayout_GlyphRuns1(@ptrCast(self.ptr), @bitCast(from));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGlyphRun, _arr.len) catch @panic("QTextLayout.glyphRuns1: Memory allocation failed");
        const _data_val: [*]QtC.QGlyphRun = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `glyphRuns22` instead
    ///
    pub const GlyphRuns22 = glyphRuns22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#glyphRuns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` from: i32 `
    ///
    /// ` length: i32 `
    ///
    pub fn glyphRuns22(self: QTextLayout, allocator: std.mem.Allocator, from: i32, length: i32) []QGlyphRun {
        const _arr: qtc.libqt_list = qtc.QTextLayout_GlyphRuns22(@ptrCast(self.ptr), @bitCast(from), @bitCast(length));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGlyphRun, _arr.len) catch @panic("QTextLayout.glyphRuns22: Memory allocation failed");
        const _data_val: [*]QtC.QGlyphRun = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#dtor.QTextLayout)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextLayout `
    ///
    pub fn delete(self: QTextLayout) void {
        qtc.QTextLayout_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html)
pub const QTextLine = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTextLine,

    pub const _is_QTextLine = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTextLine object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTextLine `
    ///
    pub fn new(other: anytype) QTextLine {
        comptime _ = @TypeOf(other)._is_QTextLine;
        return .{ .ptr = qtc.QTextLine_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QTextLine object and invalidate the source QTextLine object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTextLine `
    ///
    pub fn new2(other: anytype) QTextLine {
        comptime _ = @TypeOf(other)._is_QTextLine;
        return .{ .ptr = qtc.QTextLine_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QTextLine object in C++ memory
    ///
    pub fn new3() QTextLine {
        return .{ .ptr = qtc.QTextLine_new3() };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextLine `
    ///
    /// ` other: QTextLine `
    ///
    pub fn copyAssign(self: QTextLine, other: QTextLine) void {
        qtc.QTextLine_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QTextLine `
    ///
    /// ` other: QTextLine `
    ///
    pub fn moveAssign(self: QTextLine, other: QTextLine) void {
        qtc.QTextLine_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    pub fn isValid(self: QTextLine) bool {
        return qtc.QTextLine_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    pub fn rect(self: QTextLine) QRectF {
        return .{ .ptr = qtc.QTextLine_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `x` instead
    ///
    pub const X = x;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    pub fn x(self: QTextLine) f64 {
        return qtc.QTextLine_X(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `y` instead
    ///
    pub const Y = y;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    pub fn y(self: QTextLine) f64 {
        return qtc.QTextLine_Y(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `width` instead
    ///
    pub const Width = width;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    pub fn width(self: QTextLine) f64 {
        return qtc.QTextLine_Width(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ascent` instead
    ///
    pub const Ascent = ascent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#ascent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    pub fn ascent(self: QTextLine) f64 {
        return qtc.QTextLine_Ascent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `descent` instead
    ///
    pub const Descent = descent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#descent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    pub fn descent(self: QTextLine) f64 {
        return qtc.QTextLine_Descent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `height` instead
    ///
    pub const Height = height;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    pub fn height(self: QTextLine) f64 {
        return qtc.QTextLine_Height(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `leading` instead
    ///
    pub const Leading = leading;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#leading)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    pub fn leading(self: QTextLine) f64 {
        return qtc.QTextLine_Leading(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLeadingIncluded` instead
    ///
    pub const SetLeadingIncluded = setLeadingIncluded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#setLeadingIncluded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    /// ` included: bool `
    ///
    pub fn setLeadingIncluded(self: QTextLine, included: bool) void {
        qtc.QTextLine_SetLeadingIncluded(@ptrCast(self.ptr), included);
    }

    /// ### DEPRECATED: Use `leadingIncluded` instead
    ///
    pub const LeadingIncluded = leadingIncluded;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#leadingIncluded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    pub fn leadingIncluded(self: QTextLine) bool {
        return qtc.QTextLine_LeadingIncluded(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `naturalTextWidth` instead
    ///
    pub const NaturalTextWidth = naturalTextWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#naturalTextWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    pub fn naturalTextWidth(self: QTextLine) f64 {
        return qtc.QTextLine_NaturalTextWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `horizontalAdvance` instead
    ///
    pub const HorizontalAdvance = horizontalAdvance;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#horizontalAdvance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    pub fn horizontalAdvance(self: QTextLine) f64 {
        return qtc.QTextLine_HorizontalAdvance(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `naturalTextRect` instead
    ///
    pub const NaturalTextRect = naturalTextRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#naturalTextRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    pub fn naturalTextRect(self: QTextLine) QRectF {
        return .{ .ptr = qtc.QTextLine_NaturalTextRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `cursorToX` instead
    ///
    pub const CursorToX = cursorToX;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#cursorToX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    /// ` cursorPos: *i32 `
    ///
    pub fn cursorToX(self: QTextLine, cursorPos: *i32) f64 {
        return qtc.QTextLine_CursorToX(@ptrCast(self.ptr), @ptrCast(cursorPos));
    }

    /// ### DEPRECATED: Use `cursorToX2` instead
    ///
    pub const CursorToX2 = cursorToX2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#cursorToX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    /// ` cursorPos: i32 `
    ///
    pub fn cursorToX2(self: QTextLine, cursorPos: i32) f64 {
        return qtc.QTextLine_CursorToX2(@ptrCast(self.ptr), @bitCast(cursorPos));
    }

    /// ### DEPRECATED: Use `xToCursor` instead
    ///
    pub const XToCursor = xToCursor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#xToCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    /// ` _x: f64 `
    ///
    pub fn xToCursor(self: QTextLine, _x: f64) i32 {
        return qtc.QTextLine_XToCursor(@ptrCast(self.ptr), @bitCast(_x));
    }

    /// ### DEPRECATED: Use `setLineWidth` instead
    ///
    pub const SetLineWidth = setLineWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#setLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    /// ` _width: f64 `
    ///
    pub fn setLineWidth(self: QTextLine, _width: f64) void {
        qtc.QTextLine_SetLineWidth(@ptrCast(self.ptr), @bitCast(_width));
    }

    /// ### DEPRECATED: Use `setNumColumns` instead
    ///
    pub const SetNumColumns = setNumColumns;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#setNumColumns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    /// ` columns: i32 `
    ///
    pub fn setNumColumns(self: QTextLine, columns: i32) void {
        qtc.QTextLine_SetNumColumns(@ptrCast(self.ptr), @bitCast(columns));
    }

    /// ### DEPRECATED: Use `setNumColumns2` instead
    ///
    pub const SetNumColumns2 = setNumColumns2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#setNumColumns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    /// ` columns: i32 `
    ///
    /// ` alignmentWidth: f64 `
    ///
    pub fn setNumColumns2(self: QTextLine, columns: i32, alignmentWidth: f64) void {
        qtc.QTextLine_SetNumColumns2(@ptrCast(self.ptr), @bitCast(columns), @bitCast(alignmentWidth));
    }

    /// ### DEPRECATED: Use `setPosition` instead
    ///
    pub const SetPosition = setPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#setPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    /// ` pos: QPointF `
    ///
    pub fn setPosition(self: QTextLine, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPointF;
        qtc.QTextLine_SetPosition(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// ### DEPRECATED: Use `position` instead
    ///
    pub const Position = position;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#position)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    pub fn position(self: QTextLine) QPointF {
        return .{ .ptr = qtc.QTextLine_Position(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `textStart` instead
    ///
    pub const TextStart = textStart;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#textStart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    pub fn textStart(self: QTextLine) i32 {
        return qtc.QTextLine_TextStart(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `textLength` instead
    ///
    pub const TextLength = textLength;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#textLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    pub fn textLength(self: QTextLine) i32 {
        return qtc.QTextLine_TextLength(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lineNumber` instead
    ///
    pub const LineNumber = lineNumber;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#lineNumber)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    pub fn lineNumber(self: QTextLine) i32 {
        return qtc.QTextLine_LineNumber(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `draw` instead
    ///
    pub const Draw = draw;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#draw)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    /// ` painter: QPainter `
    ///
    /// ` _position: QPointF `
    ///
    pub fn draw(self: QTextLine, painter: anytype, _position: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(_position)._is_QPointF;
        qtc.QTextLine_Draw(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(_position.ptr));
    }

    /// ### DEPRECATED: Use `glyphRuns` instead
    ///
    pub const GlyphRuns = glyphRuns;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#glyphRuns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` from: i32 `
    ///
    /// ` length: i32 `
    ///
    /// ` flags: flag of qtextlayout_enums.GlyphRunRetrievalFlag `
    ///
    pub fn glyphRuns(self: QTextLine, allocator: std.mem.Allocator, from: i32, length: i32, flags: u16) []QGlyphRun {
        const _arr: qtc.libqt_list = qtc.QTextLine_GlyphRuns(@ptrCast(self.ptr), @bitCast(from), @bitCast(length), @bitCast(flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGlyphRun, _arr.len) catch @panic("QTextLine.glyphRuns: Memory allocation failed");
        const _data_val: [*]QtC.QGlyphRun = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `glyphRuns2` instead
    ///
    pub const GlyphRuns2 = glyphRuns2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#glyphRuns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn glyphRuns2(self: QTextLine, allocator: std.mem.Allocator) []QGlyphRun {
        const _arr: qtc.libqt_list = qtc.QTextLine_GlyphRuns2(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGlyphRun, _arr.len) catch @panic("QTextLine.glyphRuns2: Memory allocation failed");
        const _data_val: [*]QtC.QGlyphRun = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `cursorToX22` instead
    ///
    pub const CursorToX22 = cursorToX22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#cursorToX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    /// ` cursorPos: *i32 `
    ///
    /// ` edge: qtextlayout_enums.Edge `
    ///
    pub fn cursorToX22(self: QTextLine, cursorPos: *i32, edge: i32) f64 {
        return qtc.QTextLine_CursorToX22(@ptrCast(self.ptr), @ptrCast(cursorPos), @bitCast(edge));
    }

    /// ### DEPRECATED: Use `cursorToX23` instead
    ///
    pub const CursorToX23 = cursorToX23;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#cursorToX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    /// ` cursorPos: i32 `
    ///
    /// ` edge: qtextlayout_enums.Edge `
    ///
    pub fn cursorToX23(self: QTextLine, cursorPos: i32, edge: i32) f64 {
        return qtc.QTextLine_CursorToX23(@ptrCast(self.ptr), @bitCast(cursorPos), @bitCast(edge));
    }

    /// ### DEPRECATED: Use `xToCursor2` instead
    ///
    pub const XToCursor2 = xToCursor2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#xToCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    /// ` _x: f64 `
    ///
    /// ` param2: qtextlayout_enums.CursorPosition `
    ///
    pub fn xToCursor2(self: QTextLine, _x: f64, param2: i32) i32 {
        return qtc.QTextLine_XToCursor2(@ptrCast(self.ptr), @bitCast(_x), @bitCast(param2));
    }

    /// ### DEPRECATED: Use `glyphRuns1` instead
    ///
    pub const GlyphRuns1 = glyphRuns1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#glyphRuns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` from: i32 `
    ///
    pub fn glyphRuns1(self: QTextLine, allocator: std.mem.Allocator, from: i32) []QGlyphRun {
        const _arr: qtc.libqt_list = qtc.QTextLine_GlyphRuns1(@ptrCast(self.ptr), @bitCast(from));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGlyphRun, _arr.len) catch @panic("QTextLine.glyphRuns1: Memory allocation failed");
        const _data_val: [*]QtC.QGlyphRun = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `glyphRuns22` instead
    ///
    pub const GlyphRuns22 = glyphRuns22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#glyphRuns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` from: i32 `
    ///
    /// ` length: i32 `
    ///
    pub fn glyphRuns22(self: QTextLine, allocator: std.mem.Allocator, from: i32, length: i32) []QGlyphRun {
        const _arr: qtc.libqt_list = qtc.QTextLine_GlyphRuns22(@ptrCast(self.ptr), @bitCast(from), @bitCast(length));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QGlyphRun, _arr.len) catch @panic("QTextLine.glyphRuns22: Memory allocation failed");
        const _data_val: [*]QtC.QGlyphRun = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextline.html#dtor.QTextLine)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextLine `
    ///
    pub fn delete(self: QTextLine) void {
        qtc.QTextLine_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout-formatrange.html)
pub const QTextLayout__FormatRange = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout-formatrange.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTextLayout__FormatRange,

    pub const _is_QTextLayout__FormatRange = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTextLayout::FormatRange object in C++ memory
    ///
    pub fn new() QTextLayout__FormatRange {
        return .{ .ptr = qtc.QTextLayout__FormatRange_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QTextLayout::FormatRange object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QTextLayout__FormatRange `
    ///
    pub fn new2(param1: anytype) QTextLayout__FormatRange {
        comptime _ = @TypeOf(param1)._is_QTextLayout__FormatRange;
        return .{ .ptr = qtc.QTextLayout__FormatRange_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `start` instead
    ///
    pub const Start = start;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout-formatrange.html#start-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout__FormatRange `
    ///
    pub fn start(self: QTextLayout__FormatRange) i32 {
        return qtc.QTextLayout__FormatRange_Start(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setStart` instead
    ///
    pub const SetStart = setStart;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout-formatrange.html#start-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout__FormatRange `
    ///
    /// ` _start: i32 `
    ///
    pub fn setStart(self: QTextLayout__FormatRange, _start: i32) void {
        qtc.QTextLayout__FormatRange_SetStart(@ptrCast(self.ptr), @bitCast(_start));
    }

    /// ### DEPRECATED: Use `length` instead
    ///
    pub const Length = length;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout-formatrange.html#length-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout__FormatRange `
    ///
    pub fn length(self: QTextLayout__FormatRange) i32 {
        return qtc.QTextLayout__FormatRange_Length(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLength` instead
    ///
    pub const SetLength = setLength;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout-formatrange.html#length-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout__FormatRange `
    ///
    /// ` _length: i32 `
    ///
    pub fn setLength(self: QTextLayout__FormatRange, _length: i32) void {
        qtc.QTextLayout__FormatRange_SetLength(@ptrCast(self.ptr), @bitCast(_length));
    }

    /// ### DEPRECATED: Use `format` instead
    ///
    pub const Format = format;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout-formatrange.html#format-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout__FormatRange `
    ///
    pub fn format(self: QTextLayout__FormatRange) QTextCharFormat {
        return .{ .ptr = qtc.QTextLayout__FormatRange_Format(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFormat` instead
    ///
    pub const SetFormat = setFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout-formatrange.html#format-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextLayout__FormatRange `
    ///
    /// ` _format: QTextCharFormat `
    ///
    pub fn setFormat(self: QTextLayout__FormatRange, _format: anytype) void {
        comptime _ = @TypeOf(_format)._is_QTextCharFormat;
        qtc.QTextLayout__FormatRange_SetFormat(@ptrCast(self.ptr), @ptrCast(_format.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextLayout__FormatRange `
    ///
    pub fn delete(self: QTextLayout__FormatRange) void {
        qtc.QTextLayout__FormatRange_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtextlayout.html#public-types)
pub const enums = struct {
    pub const GlyphRunRetrievalFlag = enum {
        pub const RetrieveGlyphIndexes: u16 = 1;
        pub const RetrieveGlyphPositions: u16 = 2;
        pub const RetrieveStringIndexes: u16 = 4;
        pub const RetrieveString: u16 = 8;
        pub const DefaultRetrievalFlags: u16 = 3;
        pub const RetrieveAll: u16 = 65535;
    };

    pub const CursorMode = enum {
        pub const SkipCharacters: i32 = 0;
        pub const SkipWords: i32 = 1;
    };

    pub const Edge = enum {
        pub const Leading: i32 = 0;
        pub const Trailing: i32 = 1;
    };

    pub const CursorPosition = enum {
        pub const CursorBetweenCharacters: i32 = 0;
        pub const CursorOnCharacter: i32 = 1;
    };
};
